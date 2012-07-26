// MyApplicationDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyApplication.h"
#include "MyApplicationDlg.h"
#include <math.h>
#include <string.h>
#include "winbase.h"

//iocp//
#include "IOCP.h"
#include "ImageProc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

bool grabbing = false;
int thresh = 70, N = 11;

//NAMBAH: 27/6. kirim ke client pake iocp
CString dataPosisi= _T("");
int counterData =0;


// CMyApplicationDlg dialog
int jarak(const cv::Vec3b& color, int r, int g, int b) {
	return abs(color[0]-r)+
		abs(color[1]-g)+
		abs(color[2]-b);
}

UINT MyThreadProc( LPVOID pParam )
{
	CMyApplicationDlg* pObject = (CMyApplicationDlg*)pParam;

    if (pObject == NULL)
    return 1;   // if pObject is not valid

	while(grabbing){
//		MdigGrab(pObject->MilDigitizer, pObject->MilImage);
	//	MbufInquire(pObject->MilImage, M_HOST_ADDRESS, &pObject->TheImage->imageData);
		pObject->DisplayMyData();
	//	pObject->RedrawWindow(NULL, NULL, RDW_INVALIDATE );
	}

    return 0;   // thread completed successfully
}


CMyApplicationDlg::CMyApplicationDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyApplicationDlg::IDD, pParent)
	, still_processing(false)
	, src_gray(NULL)
	, m_ThresholdValue(_T(""))
	, threshold(0)
	, rt(0)
	, gt(0)
	, bt(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyApplicationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PIC_FRAME, m_Pict);
	DDX_Control(pDX, IDC_RED, m_RedSlider);
	DDX_Control(pDX, IDC_GREEN, m_GreenSlider);
	DDX_Control(pDX, IDC_BLUE, m_BlueSlider);
}

BEGIN_MESSAGE_MAP(CMyApplicationDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_PROCESS, &CMyApplicationDlg::OnBnClickedProcess)
	ON_BN_CLICKED(IDC_GRAB, &CMyApplicationDlg::OnBnClickedGrab)
	ON_WM_TIMER()
	ON_WM_HSCROLL()
	ON_WM_LBUTTONDOWN()
	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


// CMyApplicationDlg message handlers

BOOL CMyApplicationDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	setting.Create(IDD_SETTING_DIALOG, this);
	imgProc = CImageProc();
//	setting = CSettingDialog();
	
	homeTeamColor	= cv::Vec3b(87, 176, 193);
	oppoTeamColor	= cv::Vec3b(255, 0, 255);
	ballColor		= cv::Vec3b(62, 81, 213);
	homeFirstColor	= cv::Vec3b(160, 90, 220);
	homeSecondColor = cv::Vec3b(145, 227, 140);
	homeThirdColor	= cv::Vec3b(200, 100, 0);
	secondaryColor	= cv::Vec3b(210, 210, 210);
	

	CString temp;
	temp.Format("\ndi init\nball: %d %d %d\n \
		teamColor:\t %d %d %d\n \
		firstColor[0]:\t %d %d %d\n \
		firstColor[1]:\t %d %d %d\n \
		firstColor[2]:\t %d %d %d\n \
		secColor:\t %d %d %d\n \
		oppColor:\t %d %d %d\n",
		setting.ball.red, setting.ball.green, setting.ball.blue,
		setting.teamColor.red, setting.teamColor.green, setting.teamColor.blue,
		setting.firstColor[0].red, setting.firstColor[0].green, setting.firstColor[0].blue,
		setting.firstColor[1].red, setting.firstColor[1].green, setting.firstColor[1].blue,
		setting.firstColor[2].red, setting.firstColor[2].green, setting.firstColor[2].blue,
		setting.secColor.red, setting.secColor.green, setting.secColor.blue,
		setting.oppColor.red, setting.oppColor.green, setting.oppColor.blue);

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	m_RedSlider.SetRange(0,255);
	m_RedSlider.SetPos(100);
	SetDlgItemInt(IDC_RED_VALUE, 100);
	m_GreenSlider.SetRange(0,255);
	SetDlgItemInt(IDC_GREEN_VALUE, 0);
	m_BlueSlider.SetRange(0,255);
	SetDlgItemInt(IDC_BLUE_VALUE, 0);
	threshold = 30;

	// TODO: Add extra initialization here
	// Create the IPL image
	CvSize ImgSize;
	ImgSize.width = IMAGE_WIDTH;
	ImgSize.height = IMAGE_HEIGHT;
	MatImage = cv::Mat(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC3);
	//TheImage = cvCreateImage( ImgSize, IPL_DEPTH_8U, IMAGE_CHANNELS );
	//src_gray = cvCreateImage( cvSize(IMAGE_WIDTH,IMAGE_HEIGHT), IPL_DEPTH_8U, 3 );
	templ = cv::imread("template.jpg");
	int result_cols =  MatImage.cols - MatImage.cols + 1;
	int result_rows = MatImage.rows - MatImage.rows + 1;

	result.create( result_cols, result_rows, CV_8UC1 );


	// Initialize the IPL image -actually not necessary

	int x,y;
	float dx = (IMAGE_WIDTH / 256.0f) ;
	
	for (x=0; x < IMAGE_HEIGHT; x++){
		for (y=0; y < IMAGE_WIDTH; y++){
			MatImage.at<cv::Vec3b>(x, y)[0] = (char)(y / dx );
			MatImage.at<cv::Vec3b>(x, y)[1] = (char)(255 - y / dx );
			MatImage.at<cv::Vec3b>(x, y)[2] = (char)(y / dx );
		}
	}

//	GaussianBlur(TheImage, src_gray,Size(5,5),1.5);
	//cvSmooth( TheImage, src_gray );


	//Initialize the BMP display buffer
	bmi = (BITMAPINFO*)buffer;
	bmih = &(bmi->bmiHeader);
	memset( bmih, 0, sizeof(*bmih));
	bmih->biSize = sizeof(BITMAPINFOHEADER); 
	bmih->biWidth = IMAGE_WIDTH;
	bmih->biHeight = -IMAGE_HEIGHT;
	bmih->biPlanes = 1; 
	bmih->biCompression = BI_RGB;
	bmih->biBitCount = 8 * 3;
	palette = bmi->bmiColors;
/*	if (TheImage->nChannels == 1)
	{
		for( int i = 0; i < 256; i++ )
		{
			palette[i].rgbBlue = palette[i].rgbGreen = palette[i].rgbRed = (BYTE)i;
			palette[i].rgbReserved = 0;
		}
	} /**/

#ifdef USE_MIL
	// Allocate an application
	MappAlloc(M_DEFAULT,&MilApplication);
	// Allocate a system
	MsysAlloc(M_SYSTEM_SETUP,M_DEF_SYSTEM_NUM,M_COMPLETE,&MilSystem);
	// Inquire number of digitizers available on the system
	MsysInquire(MilSystem,M_DIGITIZER_NUM,&NumberOfDigitizer);

	// Digitizer is available
	if (NumberOfDigitizer)
	{
		// Allocate a digitizer
		MdigAlloc(MilSystem,M_DEFAULT,M_CAMERA_SETUP,M_DEFAULT,&MilDigitizer);

		// Stop live grab when window is disable
		MsysControl(MilSystem,M_STOP_LIVE_GRAB_WHEN_DISABLED,M_ENABLE);
		// Inquire digitizer informations
		MdigInquire(MilDigitizer,M_SIZE_X,&DigSizeX);
		MdigInquire(MilDigitizer,M_SIZE_Y,&DigSizeY);
		MdigInquire(MilDigitizer,M_SIZE_BAND,&Band);

		MbufAlloc2d(MilSystem, DigSizeX, DigSizeY,8L+M_UNSIGNED, M_IMAGE+M_GRAB, &MilImage);
		MdispAlloc(MilSystem, M_DEF_DISPLAY_NUM, M_DEF_DISPLAY_FORMAT, M_WINDOWED, &MilDisplay);
		MbufAllocColor(MilSystem,
						3,
						640,
						480,
						M_DEF_IMAGE_TYPE,
						M_IMAGE+M_BGR24 + M_PACKED+M_NON_PAGED+M_DISP+M_PROC+M_GRAB,
						&MilImage);

		if (DigSizeX > M_DEF_IMAGE_SIZE_X_MAX)
			DigSizeX = M_DEF_IMAGE_SIZE_X_MAX;
		if (DigSizeY > M_DEF_IMAGE_SIZE_Y_MAX)
			DigSizeY = M_DEF_IMAGE_SIZE_Y_MAX;
	}
	// Digitizer is not available
	else
	{
		SizeX = M_DEF_IMAGE_SIZE_X_MIN;
		SizeY = M_DEF_IMAGE_SIZE_Y_MIN;
		Band = M_DEF_IMAGE_NUMBANDS_MIN;
	}
#endif
	// Initialize the state of the grab
	GrabIsStarted = FALSE;

	//start server (27/6)
	StartSystem();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyApplicationDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		if (!GrabIsStarted)
			DisplayMyData();
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyApplicationDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMyApplicationDlg::DisplayMyData(void)
{
	CPaintDC dc(&m_Pict);
	CDC* pDC = &dc;

	int res = StretchDIBits(
		pDC->GetSafeHdc(), //dc
		0, //x dest
		0, //y dest
		int(IMAGE_WIDTH), //x dest dims
		int(IMAGE_HEIGHT), //y dest dims
		0, // src x
		0, // src y
		IMAGE_WIDTH, // src dims
		IMAGE_HEIGHT, // src dims
	//	TheImage->imageData, // array of DIB bits
		MatImage.data, // array of DIB bits
		(BITMAPINFO*)buffer, // bitmap information
		DIB_RGB_COLORS, // RGB or palette indexes
		SRCCOPY); // raster operation code

	// Update Window, force View to redraw.
	RedrawWindow(
		NULL, // handle to window
		NULL, // update rectangle
		RDW_INVALIDATE // handle to update region
		); 
}

void CMyApplicationDlg::OnBnClickedProcess()
{
	// TODO: Add your control notification handler code here
   //  MyIplClass *Img= new MyIplClass;
   //  Img->SetIplData(TheImage); //Copy the content of TheImage to the class for processing
   //  Img->ProcessIpl();
   //  Img->GetIplData( TheImage );
   //  delete Img;
   //  RedrawWindow(NULL, NULL, RDW_INVALIDATE ); //Force update of dialog; 
//	CSettingDialog setting = CSettingDialog();
	setting.ShowWindow(SW_SHOW);
	//tes nyimpen color setting di sini (25/7)
	//ColorSettings c;
	//setting.getColorSettings(c);
	
}

void CMyApplicationDlg::OnBnClickedGrab()
{
	CWnd *pButton; // Change the caption dependent on the grab state
	
	hWnd = m_Pict;
	//MdispSelectWindow(MilDisplay, MilImage, hWnd);

	if (GrabIsStarted == FALSE)
	{
		// Start a continuous grab in this view
		grabbing = true;
	//	AfxBeginThread(MyThreadProc, this);
	//	MdigGrabContinuous(MilDigitizer, MilImage);
		SetTimer(1, 10, 0);
		
		// Update the variable GrabIsStarted
		GrabIsStarted = TRUE;
//		cs = cc.getData();
//		OutputDebugString(cs);

		pButton = GetDlgItem(IDC_GRAB);
		pButton->SetWindowText(_T("Stop"));
	}
	else
	{
		// Stop a continuous grab in this view
#ifdef USE_MIL
		MdigHalt(MilDigitizer);
#endif
		KillTimer(1);

		// Update the variable GrabIsStarted
		GrabIsStarted = FALSE;
		grabbing = false;

		pButton = GetDlgItem(IDC_GRAB);
		pButton->SetWindowText(_T("Grab"));

		// Now get the Grabbed pixels
	//	MbufInquire(MilImage, M_HOST_ADDRESS, &TheImage->imageData);

		RedrawWindow(NULL, NULL, RDW_INVALIDATE ); //Force update of dialog;
	}
}

void CMyApplicationDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default
	
	if(still_processing == false){
		still_processing = true;
		CvSize ImgSize;
		ImgSize.width = IMAGE_WIDTH;
		ImgSize.height = IMAGE_HEIGHT;
#ifdef USE_MIL
	//	IplImage* Temp = cvCreateImage( ImgSize, IPL_DEPTH_8U, 3 );
		MdigGrab(MilDigitizer, MilImage);
	//	MbufInquire(MilImage, M_HOST_ADDRESS, &TheImage->imageData);
		MbufInquire(MilImage, M_HOST_ADDRESS, &MatImage.data);
#else
		cv::Mat img = cv::imread("gb5.jpg");
#endif
		/*
		//OnBnClickedProcess();
		//IplImage* src_gray = cvCreateImage( cvSize(IMAGE_WIDTH,IMAGE_HEIGHT), IPL_DEPTH_8U, 1 );
		cvCvtColor(TheImage, src_gray, CV_BGR2GRAY);
		cvMerge(src_gray, src_gray, src_gray, NULL, TheImage);
	//	cvReleaseImage(&src_gray);
	//	MbufFree(MilImage);
	/**/

	//	cvSmooth( TheImage, src_gray );

		// Pattern Matching
		/*
		Mat abc = Mat(templ.rows, templ.cols, CV_8UC3);
		templ.convertTo(abc, CV_8U);

		matchTemplate( MatImage, templ, result, CV_TM_SQDIFF );
		normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );
		double minVal; double maxVal; Point minLoc; Point maxLoc;
		Point matchLoc;

		minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );
		matchLoc = minLoc;

		rectangle( MatImage, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );
		SetDlgItemInt(IDC_POSX, matchLoc.x);
		SetDlgItemInt(IDC_POSY, matchLoc.y);
		/* End of Pattern Matching*/

		cv::Mat pyr, timg, gray0(MatImage.size(), CV_8U), gray;
    
    // down-scale and upscale the image to filter out the noise
		pyrDown(img, pyr, cv::Size(img.cols/2, img.rows/2));
		pyrUp(pyr, img, img.size());
	//	CImageProc imgProc = CImageProc();
		homeTeamColor	= cv::Vec3b(setting.teamColor.blue, setting.teamColor.green, setting.teamColor.red);
		oppoTeamColor	= cv::Vec3b(setting.oppColor.blue, setting.oppColor.green, setting.oppColor.red);
		ballColor		= cv::Vec3b(setting.ball.blue, setting.ball.green, setting.ball.red);
		homeFirstColor	= cv::Vec3b(setting.firstColor[0].blue, setting.firstColor[0].green, setting.firstColor[0].red);
		homeSecondColor = cv::Vec3b(setting.firstColor[1].blue, setting.firstColor[1].green, setting.firstColor[1].red);
		homeThirdColor	= cv::Vec3b(setting.firstColor[2].blue, setting.firstColor[2].green, setting.firstColor[2].red);
		secondaryColor	= cv::Vec3b(setting.secColor.blue, setting.secColor.green, setting.secColor.red);

		imgProc.homeTeamColor=homeTeamColor;
		imgProc.oppoTeamColor=oppoTeamColor;
		imgProc.ballColor=ballColor;
		imgProc.homeFirstColor=homeFirstColor;
		imgProc.homeSecondColor=homeSecondColor;
		imgProc.homeThirdColor=homeThirdColor;
		imgProc.secondaryColor=secondaryColor;

		imgProc.setImage(img);
		imgProc.teamAndBallIdentify();
		imgProc.findHomeRobot();
		imgProc.MatImage.copyTo(MatImage);
		
		//tes tampildata di sini
		//reset dataPosisi
		//dataPosisi="";
		counterData++;
		CString tmp = _T("");
		dataPosisi = imgProc.getData();
		dataPosisi.Append("\n");
		tmp.Format("[%i] %s",counterData, dataPosisi);
		dataPosisi = tmp;
		//OutputDebugString(tmp);
		//kirim
		kirimData();
		imgProc.resetData();

		

//		// Color Segmentation
//		int row,col,red,green,blue;
//		
//		Mat tempImage;// = Mat(IMAGE_HEIGHT,IMAGE_WIDTH, CV_8UC3);
//	//	cvtColor(MatImage, tempImage, CV_BGR2YCrCb);
//		MatImage.copyTo(m_pVisionSys.imageMat);
//		//m_pVisionSys.imageMat = &tempImage;
//
//		int minx[2], miny[2], maxx[2], maxy[2];
//		minx[0] = miny[0] = minx[1] = miny[1] = 9999;
//		maxx[0] = maxy[0] = maxx[1] = maxy[1] = 0;
//
//		for (row=1; row < IMAGE_HEIGHT; row++){
//			label[0][row] = 0;
//			color[0][row] = 0;
//		}
//
//		for (col=0; col < IMAGE_WIDTH; col++){
//			label[col][0] = 0;
//			color[col][0] = 0;
//		}
//
//		int mycolor = 0;
//		numcolor = 0;
//		eq_set.clear();
//		eq_set.push_back(0);
//
//		CString s = _T("");
//		for (row=1; row < IMAGE_HEIGHT; row++){
//			for (col=1; col < IMAGE_WIDTH; col++){
//				red   = m_pVisionSys.imageMat.at<Vec3b>(row, col)[0];
//				green = m_pVisionSys.imageMat.at<Vec3b>(row, col)[1];
//				blue  = m_pVisionSys.imageMat.at<Vec3b>(row, col)[2];
//	//			uchar mask = 0xFF<<6;
//	//			tempImage.at<Vec3b>(row, col)[0] = (red & mask) + 64/2;//(red / 75) * 75;
//	//			tempImage.at<Vec3b>(row, col)[1] = (green & mask) + 64/2;
//	//			tempImage.at<Vec3b>(row, col)[2] = (blue & mask) + 64/2;
//	//			if( (jarak(tempImage.at<Vec3b>(row, col), 106, 172, 120) > threshold) &&
//	//				(jarak(tempImage.at<Vec3b>(row, col), 190, 152, 103) > threshold) ){
//	//				tempImage.at<Vec3b>(row, col)[0] = 0;
//	//				tempImage.at<Vec3b>(row, col)[1] = 0;
//	//				tempImage.at<Vec3b>(row, col)[2] = 0;
//	//			} else {
//	//				if(minx>col) minx=col;
//	//				if(miny>row) miny=row;
//	//				if(maxx<col) maxx=col;
//	//				if(maxy<row) maxy=row;
//	//			}
//				if		 (jarak(m_pVisionSys.imageMat.at<Vec3b>(row, col), 106, 172, 120) < threshold) {
////				if		 (jarak(m_pVisionSys.imageMat.at<Vec3b>(row, col), 75, 151, 173) < threshold) {
//				//	mycolor = 1;
//					color[col][row] = 1;
//					if(minx[0]>col) minx[0]=col;
//					if(miny[0]>row) miny[0]=row;
//					if(maxx[0]<col) maxx[0]=col;
//					if(maxy[0]<row) maxy[0]=row;
////				}else if (jarak(m_pVisionSys.imageMat.at<Vec3b>(row, col), 190, 152, 103) < threshold) {
//				}else if (jarak(m_pVisionSys.imageMat.at<Vec3b>(row, col), 75, 151, 173) < threshold) {
//				//	mycolor = 2;
//					color[col][row] = 2;
//					if(minx[1]>col) minx[1]=col;
//					if(miny[1]>row) miny[1]=row;
//					if(maxx[1]<col) maxx[1]=col;
//					if(maxy[1]<row) maxy[1]=row;
//				} else {
//				//	mycolor = 0;
//					label[col][row] = 0;
//					color[col][row] = 0;
//					//m_pVisionSys.imageMat.at<Vec3b>(row, col)[0] = 0;
//					//m_pVisionSys.imageMat.at<Vec3b>(row, col)[1] = 0;
//					//m_pVisionSys.imageMat.at<Vec3b>(row, col)[2] = 0;
//				}
//
//				if (color[col][row] != 0){
//				//	s.Format(_T("color[%ld][%ld] : %ld \n"), col, row, color[col][row]);
//					if		 (color[col][row-1] == color[col][row] && color[col-1][row] != color[col][row]){
//						label[col][row] = label[col][row-1];
//					} else if(color[col-1][row] == color[col][row] && color[col][row-1] != color[col][row]){
//						label[col][row] = label[col-1][row];
//					} else if(color[col-1][row]   == color[col][row] && color[col][row-1]   == color[col][row]){
//						label[col][row] = label[col][row-1];
//						if (label[col-1][row] != label[col][row]){
//							eq_set[label[col-1][row]] = label[col][row];
//						}
//					} else {
//						numcolor++;
//						label[col][row] = numcolor;
//						eq_set.push_back(numcolor);
//						SetDlgItemInt(IDC_GREEN_VALUE, numcolor);
//					}
//				//	OutputDebugStringW(s);
//				}
//			}
//		} 
//		short max = 0;
//		for (row=0; row < IMAGE_HEIGHT; row++){
//			for (col=0; col < IMAGE_WIDTH; col++){
//				if(label[col][row]>max)
//					max = label[col][row];
//				if(eq_set[label[col][row]] != label[col][row])
//					label[col][row] = eq_set[label[col][row]];
//			}
//		}
//		s.Format(_T("Color Num : %ld \n"), max);
//		OutputDebugStringW(s);
////		cvtColor(tempImage, MatImage, CV_BGR2YUV);
//		m_pVisionSys.imageMat.copyTo(MatImage);/* */
//	//	pyrDown(MatImage, pyr, Size(MatImage.cols/2, MatImage.rows/2));
//	//	pyrUp(pyr, MatImage, MatImage.size());
//		int tengah[2][2];
//		for (int t=0;t<2;t++){
//			tengah[t][0] = (minx[t]+maxx[t])/2;
//			tengah[t][1] = (miny[t]+maxy[t])/2;
//		}
//		CString a = _T("");
//		s.Format(_T("Num Color : %ld \n"), numcolor);
//		a.Format(_T("%.2f"), atan2((double)(tengah[0][1]-tengah[1][1]), (double)(tengah[0][0]-tengah[1][0]))-0.7);
//		SetDlgItemInt(IDC_POSX, (tengah[0][1]+tengah[0][2])/2);
//		SetDlgItemInt(IDC_POSY, (tengah[1][1]+tengah[1][2])/2);
//		SetDlgItemText(IDC_THETA, a);
	//	OutputDebugStringW(s);
//		blur(MatImage, MatImage, Size(3,3));
	//	rectangle(MatImage, Point(minx[0], miny[0]), Point(maxx[0], maxy[0]), Scalar(255,255,0,0));
	//	rectangle(MatImage, Point(minx[1], miny[1]), Point(maxx[1], maxy[1]), Scalar(255,255,0,0));

	//	RedrawWindow(NULL, NULL, RDW_INVALIDATE ); 
		RedrawWindow(NULL, NULL, RDW_INVALIDATE ); 
		DisplayMyData();
		still_processing = false;
	}
}

void CMyApplicationDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default
	if(nSBCode == SB_THUMBTRACK)
	{
		CString textVal = _T("");
		textVal.Format(_T("%ld"), nPos);
		if(pScrollBar == GetDlgItem(IDC_RED)){
			SetDlgItemInt(IDC_RED_VALUE, nPos);
			rt = nPos;
		} else if(pScrollBar == GetDlgItem(IDC_GREEN)) {
			SetDlgItemInt(IDC_GREEN_VALUE, nPos);
			gt = nPos;
		} else if(pScrollBar == GetDlgItem(IDC_BLUE)) {
			SetDlgItemInt(IDC_BLUE_VALUE, nPos);
			bt = nPos;
		} 
		UpdateData(false);
	}
	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CMyApplicationDlg::OnBnClickedBtnThreshold()
{
	// TODO: Add your control notification handler code here
/*	int s = GetDlgItemInt(IDC_TRESHOLD_VALUE);
	if(s > 20){
		s = 20;
		SetDlgItemInt(IDC_TRESHOLD_VALUE, 20, false);
	}else if(s < 5){
		s = 5;
		SetDlgItemInt(IDC_TRESHOLD_VALUE, 5, false);
	}
	threshold = s; /**/
}

void CMyApplicationDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CRect rect;
	CWnd *pWnd = this->GetDlgItem(IDC_PIC_FRAME);
	pWnd->GetWindowRect(&rect);
	this->ScreenToClient(&rect); //optional step - see below

	int x = point.x - rect.top;
	int y = point.y - rect.left;
	SetDlgItemInt(IDC_POSX, x);
	SetDlgItemInt(IDC_POSY, y);

	if(x>=0 && y>=0 && x<IMAGE_WIDTH && y<IMAGE_HEIGHT && setting.pickingUp){
		cv::Mat tempImage, tempImage2;// = Mat(IMAGE_HEIGHT,IMAGE_WIDTH, CV_8UC3);
		CString st = _T("");
		int xx = MatImage.at<cv::Vec3b>(y, x)[0];
		int yy = MatImage.at<cv::Vec3b>(y, x)[1];
		int zz = MatImage.at<cv::Vec3b>(y, x)[2];
		st.Format(_T("B: %3d \t G : %3d \t R : %3d \r\n"), xx, yy, zz);
		OutputDebugString(st);
		/*
		cvtColor(MatImage, tempImage, CV_BGR2YCrCb);
		xx = tempImage.at<cv::Vec3b>(y, x)[0];
		yy = tempImage.at<cv::Vec3b>(y, x)[1];
		zz = tempImage.at<cv::Vec3b>(y, x)[2];
		st.Format(_T("Y: %3d \t Cr: %3d \t Cb: %3d \r\n"), xx, yy, zz);
		OutputDebugString(st);
		cvtColor(MatImage, tempImage, CV_BGR2YUV);
		xx = tempImage.at<cv::Vec3b>(y, x)[0];
		yy = tempImage.at<cv::Vec3b>(y, x)[1];
		zz = tempImage.at<cv::Vec3b>(y, x)[2];
		st.Format(_T("Y: %3d \t U : %3d \t V : %3d \r\n"), xx, yy, zz);
		OutputDebugString(st);
		cvtColor(MatImage, tempImage, CV_BGR2HSV);
		xx = tempImage.at<cv::Vec3b>(y, x)[0];
		yy = tempImage.at<cv::Vec3b>(y, x)[1];
		zz = tempImage.at<cv::Vec3b>(y, x)[2];
		st.Format(_T("H: %3d \t S : %3d \t V : %3d \r\n\r\n"), xx, yy, zz);
		OutputDebugString(st);
		*/
		int id = setting.IDColor;
		setting.pickColor(xx, yy, zz, id);
		setting.pickingUp = false;
		setting.ShowWindow(SW_SHOW);
	}
//	rt = tempImage.at<Vec3b>(point.y, point.x)[0];
//	bt = tempImage.at<Vec3b>(point.y, point.x)[1];
//	gt = tempImage.at<Vec3b>(point.y, point.x)[2];
	CDialog::OnLButtonDown(nFlags, point);
}


void CMyApplicationDlg::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);

	// TODO: Add your message handler code here
	if(	setting.IsWindowVisible() )
		setting.SetActiveWindow();
}

//untuk iocp. menjalankan server
void CMyApplicationDlg::StartSystem()
{
	m_iocp.m_StatusLock.Lock();
	m_iocp.m_sSendText = m_sSendTxt;
	m_iocp.m_bFlood = m_bFlood;
	m_iocp.m_StatusLock.Unlock();
	
	if(!m_iocp.Start(999,2,1,0,100,50,1,1,5))
		MessageBox("EYOY: nda bisa konek kliennya");
	else 
	{
		//di sini status untuk server jalan berhasil
		OutputDebugString("server sudah jalan\n\n\n");
	}
}

void CMyApplicationDlg::kirimData()
{
	if(!m_iocp.IsStarted()){
		OutputDebugString("EROR. server belum jalan");
	} else{
		UpdateData(TRUE);
		m_iocp.m_StatusLock.Lock();
		m_iocp.m_sSendText = dataPosisi;
		m_iocp.m_StatusLock.Unlock();
		m_iocp.BuildPackageAndSendToAll(dataPosisi);
	
	}
}