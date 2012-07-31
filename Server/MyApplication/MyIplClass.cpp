#include "StdAfx.h"
#include "MyIplClass.h"
#include "stdio.h"

MyIplClass::MyIplClass(void)
: m_Ipl(NULL)
{
     // Create the IPL image
     //m_Ipl = cvCreateImage( cvSize(IMAGE_WIDTH,IMAGE_HEIGHT), IPL_DEPTH_8U, 1 );
     // Use this line if the bitmap is 24 bit
     m_Ipl = cvCreateImage( cvSize(IMAGE_WIDTH,IMAGE_HEIGHT), IPL_DEPTH_8U, 3 );
}

MyIplClass::~MyIplClass(void)
{
	cvReleaseImage(&m_Ipl); 
}

void MyIplClass::GetIplData(IplImage* ipl)
{
	memcpy(ipl->imageData, m_Ipl->imageData, m_Ipl->imageSize);
	cvReleaseImage(&m_Ipl); 
}

void MyIplClass::SetIplData(IplImage* ipl)
{
    m_Ipl = cvCreateImage( cvSize(IMAGE_WIDTH,IMAGE_HEIGHT), IPL_DEPTH_8U, 3 );
	try {
		memcpy(m_Ipl->imageData, ipl->imageData, m_Ipl->imageSize); 
	}catch( char * str ) {
	}
}

void MyIplClass::ProcessIpl(void)
{
//	IplImage* src_gray = cvCreateImage( cvSize(IMAGE_WIDTH,IMAGE_HEIGHT), IPL_DEPTH_8U, 1 );
//	cvCvtColor(m_Ipl, src_gray, CV_BGR2GRAY);
//	cvMerge(src_gray, src_gray, src_gray, NULL, m_Ipl);
//	cvReleaseImage(&src_gray);
	//m_Ipl = tmp;
}

void MyIplClass::GetMatData(cv::Mat MatImage)
{
}

void MyIplClass::SetMatData(cv::Mat MatImage)
{
}
