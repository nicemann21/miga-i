#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

#define	IMAGE_SIZE_X		640
#define	IMAGE_SIZE_Y		480
#define	PARTIAL_MAX_NUM_LABEL		200	/* max. numbering of labels */
#define	PARTIAL_MAXNUMLABEL_1		199
#define	PARTIAL_MAX_NUM_ESET		150	/* max. number of equivalent sets */
#define	PARTIAL_MAXNUMESET_1		149

#define	MAX_NUM_LABEL		700	/* max. numbering of labels */
#define	MAXNUMLABEL_1		699
#define	MAX_NUM_ESET		300	/* max. number of equivalent sets */
#define	MAXNUMESET_1		299
#define	MAX_NUM_ELABEL		300	/* max. number of labels in each equivalent set */
#define	MAXNUMELABEL_1		299
#define	MAX_PIX_SIZE		400
#define	MAXPIXSIZE_1		399
#define	DEF_SIZE_X_ROBOT			20		// dependant on a real robot size
#define	DEF_SIZE_Y_ROBOT			DEF_SIZE_X_ROBOT
// default upper and lower ranges of each color
#define DEF_NOISE_FILTERING_SIZE	10		// dependant on a real situation
#define	DEF_LBOUND_BALL_SIZE		DEF_NOISE_FILTERING_SIZE
#define	DEF_UBOUND_BALL_SIZE		400
#define	DEF_LBOUND_BIG_TEAM_SIZE	DEF_NOISE_FILTERING_SIZE
#define	DEF_UBOUND_BIG_TEAM_SIZE	500
#define	DEF_LBOUND_SMALL_ID_SIZE	DEF_NOISE_FILTERING_SIZE
#define	DEF_UBOUND_SMALL_ID_SIZE	500
#define	DEF_LBOUND_OPPONENT_SIZE	DEF_NOISE_FILTERING_SIZE
#define	DEF_UBOUND_OPPONENT_SIZE	700


#define	NUM_COLORS			8

#define	NONE_COLOR			-1
#define BALL_COLOR			0
#define TEAM_COLOR			1
#define ID1_COLOR			2
#define ID2_COLOR			3
#define ID3_COLOR			4
#define ID45_COLOR			5
#define OPPONENT_COLOR		6

#define HOME1		0	// Be sure that HOME1=0, HOME2=1, ... , HGOALIE=4.
#define HOME2		1
#define HOME3		2
#define HOME4		3
#define HGOALIE		4

#define BALL		5
#define OPPONENT_C  6

#define PARTIAL_IMAGE_SIZE			35
#define PARTIAL_IMAGE_SIZE_OPP		20
#define One       true
#define Two       false

#define OPP1	0
#define OPP2	1
#define OPP3	2
#define OPP4	3
#define OPP5	4
//#define M_PI 			3.14159265358979323846

typedef struct
{
	int		X;		// 위치    
	int		Y;		// 위치 
	int 	angle;	// 크기
} RobotObj;
typedef struct 
{
	POINT	Position;
	int		size;
} BALLBACKUP;

class CVision  
{

public:
	Mat		imageMat;
	BOOL	bFlagHomeRobotFound[5];
	short	iPositionOfBall[2], iPositionOfHomeRobot[5][2], iAngleOfHomeRobot[5];
	short	iPositionOfOpponent[10][2];
	CString global_IDDebug;
	void	GetFindFlag(int *GetFind);				// FoundFlag Set Function
	void	SaveFileConfig(const char * FileName);	// ConfigFile Save 
	
	unsigned int * m_pOneArrayPoint;				//A_type SysTem Array
	int		ColorParameter[4];
	short	LowerBoundOfBallSize, UpperBoundOfBallSize;
	short	LowerBoundOfBigTeamSize, UpperBoundOfBigTeamSize;
	short	LowerBoundOfSmallIDSize, UpperBoundOfSmallIDSize;
	short	LowerBoundOfOpponentSize, UpperBoundOfOpponentSize;
	CRect	rectBoundary;
	short	BallColor[6], TeamColor[6], IdColor[5][6], OpponentColor[6];



	int localRobotFindOfComponetCont[6];
	int LocalTaemLabelingPartialImage(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY);
	void GetOpponentRobotPosition(RobotObj *OppRobot);
	void FindOpponent(short whichRobot, short OffX, short OffY);
	bool OpponentColorLabeling(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY);
	void SearchFindOpponentRobot();
	
	void FindOpponentRobot();
	void GlobalLabelingImage(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY);

	
	void GetHomeRobotPosition(RobotObj *HomeRobot);
	void GetBallPosition(int *Ballpoint);
	void GetReference(int *HSI);
	RECT GetBoundaryInfo(void);
	void SetFileConfig(const char * FileName);
	void UpdateLUTcolor(short *ptrNewColor, const int Color);
	void FindObjets(bool );
	unsigned int ** TwoArrybuf;
	
	CVision();
	virtual ~CVision();

private:
	void GlobalComponetSet(int whichColor,int i,int j);
	void EstBallPointBackUp();
	BOOL NUM3_OR_NUM4_RobotIdColor_Check(short whichRobot, short OffX, short OffY, POINT PositionOfTeamcolor, POINT TeamColorOffSet);

	void IdComponentsCalculate(int object);
	int CrossRobotCase;
	void FindHomeRobot2Color(short whichRobot, short OffX, short OffY,POINT PositionOfTeamcolor,POINT TeamColorOffSet);
	bool TeamColorLocalLabeling(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY);
	POINT m_pBackUpTeamColorPoint[5];
	void HomRobotTeamSearch();

	void DetermineComponentsOfOppBigTeamColor();
	void UpdateLUTAllColor();
	long MinDistanceFromBigTeamColor(short sX, short sY, short* spBigteam_nearst);
	int FindBall(short OffX, short OffY);
	void LabelingPartialImage(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY, short object);
	void DetermineOffsetXY(short rx, short ry, short size, long *offx, long *offy);
	void DetermineComponentsOfSmallIDColor(short whichRobot);
	void DetermineComponentsOfBigTeamColor();
	void FindHomeRobot(short whichRobot, short OffX, short OffY);
	long Est_OPPColorPositionX[60],Est_OPPColorPositionY[60];
	POINT Est_BallPosition[60];					//Estmate Ball Position 
	BALLBACKUP BackUpBallPoint[60];
	int PixelOfSize;
	short	AngleOfHomeRobot[5];
	BOOL PointerType;
	double	PositionOfHomeRobot[5][2], PositionOfOpponent[5][2], PositionOfBall[2];
	double  curr_raw_PositionOfHomeRobot[5][2], curr_raw_PositionOfBall[2], curr_raw_AngleOfHomeRobot[5]; 
	double  past_raw_PositionOfHomeRobot[5][2], past_raw_PositionOfBall[2], past_raw_AngleOfHomeRobot[5]; 

	BOOL	bSetColor, bBeginZoom, bEndZoom, bSetRobotSize;
	BYTE	ImageBuffer[1230000]; //640*480*4 = 1228800
	BYTE	*ptrBuffer;
	short	Rmin, Rmax, Gmin, Gmax, Bmin, Bmax;
	bool bFlagEven;
	long	DispSizeX, DispSizeY;
	long	NumberOfDigitizer;	// Number of digitizers available on the system
	long	TransparentColor;		// Keying color
	short	SizeXofRobot, SizeYofRobot;
	BOOL	bFlagIsOurHomeLeft;
	long	index_lut;
	
	/*************** variable declarations for vision routine ****************/
	short	label[IMAGE_SIZE_Y][IMAGE_SIZE_X];
	short	ES[7][MAX_NUM_ESET][MAX_NUM_ELABEL], whichES[7][MAX_NUM_LABEL];
	short	i, j, index, indexES1, indexES2, indexes_whichcolor, numberoflabel_whichcolor;
	short	UpperLabel, LeftLabel, tmpLabel, sizeES1, sizeES2, SumOfSize;
	short	whichColor, WhereAppended, /*whichcomponent,*/ whichComponent[NUM_COLORS][MAX_NUM_ESET];
	short	ColorOfUpperLabel, ColorOfLeftLabel, ColorOfLabel[IMAGE_SIZE_Y][IMAGE_SIZE_X];
	long	R, G, B;
	// Big Team Color
	short	WhichComponentOfBigTeamColor[MAX_NUM_ESET],WhichComponentOfOpponetColor[MAX_NUM_ESET];
	short	WhichComponentOfSmallIDColor[5][MAX_NUM_ESET];
	short	NumberOfBigTeamColors,NumberOfOpponnetColors;
	BOOL	ValidFlagOfComponentOfBigTeamColor[MAX_NUM_ESET],ValidFlagOfComponentOfOpponetColor[MAX_NUM_ESET];
	// Small ID Color
	short	CenterXOfComponentOfSmallIDColor[5][MAX_NUM_ESET], CenterYOfComponentOfSmallIDColor[5][MAX_NUM_ESET];
	short	NumberOfSmallIDColors[5];

	short	NoError;
	short	NumberOfLabel[NUM_COLORS], indexES[NUM_COLORS];
	short	NumberOfComponent[NUM_COLORS], CenterXOfComponent[NUM_COLORS][MAX_NUM_ESET], CenterYOfComponent[NUM_COLORS][MAX_NUM_ESET];
	long	SumOfX[NUM_COLORS][MAX_NUM_ESET], SumOfY[NUM_COLORS][MAX_NUM_ESET];
	short	Component[NUM_COLORS][MAX_NUM_ESET][MAX_PIX_SIZE][2];
	short	PixelSizeOfComponent[NUM_COLORS][MAX_NUM_ESET];
	short	DistanceBetweenBigTeamAndSmallID;
	
	
	BOOL	bFlagFindBall, bFlagFindHomeRobot[5], bFlagFindOpponent[5];
	BOOL	bFlagBallFound, bFlagOpponentFound[5];
	long	index_vram;
	long	index_vramX;
	long	index_vramY;

	/*************** variable declarations for vision routine ****************/

};

