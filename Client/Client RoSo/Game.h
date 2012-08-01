//header untuk game.cpp
//
//versi awal (30/6/2012). sebagian kopas yujin
#include "comm.h"
//////////AutoPosition  //////////////////////
#define		KICKOFF			0
#define		PENALITYKICK	1
#define		GOALIEKICK		2
#define		FREEKICK		3
#define		FREEBALL1		4
#define		FREEBALL2		5
#define		FREEBALL3		6
#define		FREEBALL4		7
#define     GAME			8


//ini penting!
typedef struct
{
	int		X;		// position
	int		Y;		// position
} DPosition;				// Double point. untuk posisi

typedef struct
{
	DPosition	position;		// position
	int			Angle;			// angle
	int			VelocityLeft;	// Left	 Wheel Velocity
	int			VelocityRight;	// Right Wheel Velocity
	BOOL		bFoundRobot;	// Found Robot Position flag
} RobotDPosition;				// Robot 

typedef struct
{
	DPosition	position;		// position
	BOOL		bFoundball;		// Found Ball Position flag
} BallDPosition;				// Ball information

class CGame
{
public:
	RobotDPosition HomeRobot[5];	//untuk menghandle robot kita
	RobotDPosition OppRobot[5];		//handle robot lawan
	BallDPosition Ball;
	void AutoPosition();
	void SendCommand(BYTE *Data);	//ini untuk mengirimkan data ke robot
	void Strategy();
	void setPos(int x, int y);

	//tes:kejar bola
	void FollowBall(int robot_id);

	CGame();
	virtual ~CGame();

private:
	void Velocity(int whichRobot);
	void Position(int whichRobot, int x, int y);
	void Angle(int whichRobot, int d_angle);//menentukan sudut berdasarkan sudut yang diminta
	void Angle2(int whichRobot, double x, double y); //menentukan berdasarkan posisi x,y
	void Goalie(int whichRobot);
	void Dribble(int whichRobot);
	void RobotStop(int whichRobot);	//menghentikan robot[i]


	CComm m_Comm;

};