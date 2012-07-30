//ini untuk menghandle semua fungsi terkait game. seperti goalkick, penalty dll dll dll
#include "stdafx.h"
#include "Game.h"
#include <math.h>

#define M_PI 3.14

CGame::CGame()
{
	//TODO:inisialisasi kelas.. puyeng
}

CGame::~CGame()
{
	//matikan jaringan dlsb
	m_Comm.CloseConnection();
	
}

void CGame::Velocity(int whichRobot)
{
	OutputDebugString("tes klik velocity berhasil\n");
}

void CGame::AutoPosition()
{
	OutputDebugString("tes klik Autoposition berhasil\n");
	Velocity(1);
}

void CGame::Goalie(int whichRobot)
{
	//TODO: untuk menjalankan perintah untuk goali alias kiper
}

void CGame::Angle(int whichRobot, int d_angle)
{
	//TODO: menghitung angle alias sudut objek (robot)
	int theta_e =0;
	double Kp = 0.12;
	theta_e = d_angle - HomeRobot[whichRobot].Angle;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	HomeRobot[whichRobot].VelocityLeft	= (int)(-Kp*(double)theta_e);
	HomeRobot[whichRobot].VelocityRight	= (int)(-Kp*(double)theta_e);

	Velocity(whichRobot);
}

void CGame::Angle2(int whichRobot, double x, double y)
{
	double dx, dy, de, d_angle, theta_e;
	double Kp = 0.12;

	//dianggap id robot sudah tau
	dx = x - HomeRobot[whichRobot].position.X;
	dy = y - HomeRobot[whichRobot].position.Y;

	de = sqrt(dx * dx +  dy * dy );
	
	if(dx == 0 && dy ==0)
	{
		RobotStop(whichRobot);
		return;
	}
	else
	{
		d_angle = (int)(180./M_PI*atan2((double)(dy),(double)(dx)));
	}
	theta_e = d_angle - HomeRobot[whichRobot].Angle;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	HomeRobot[whichRobot].VelocityLeft	= (int)(-Kp*(double)theta_e);
	HomeRobot[whichRobot].VelocityRight	= (int)(-Kp*(double)theta_e);

	Velocity(whichRobot);

}

void CGame::RobotStop(int whichRobot)
{
	//TODO: menghentikan robot

}
void CGame::Dribble(int whichRobot)
{
	//TODO: cara untuk mendribble bola


}


