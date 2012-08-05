//ini untuk menghandle semua fungsi terkait game. seperti goalkick, penalty dll dll dll
#include "stdafx.h"
#include "Game.h"
#include "serialclass.h"
#include <math.h>

#define M_PI 3.14

Serial serial("\\\\.\\COM17");
char dataSend[5][17];

CGame::CGame()
{
	//TODO:inisialisasi kelas.. puyeng
	//(31/7)
	for(int i=0;i<5;i++)
	{
		HomeRobot[i].position.X		= 0;
		HomeRobot[i].position.Y		= 0;
		HomeRobot[i].Angle			= 0;
		HomeRobot[i].VelocityLeft	= 0;
		HomeRobot[i].VelocityRight	= 0;
		HomeRobot[i].bFoundRobot	= FALSE;
	}
	Ball.position.X = 0;
	Ball.position.Y = 0;
	//data yang akan dikirim ke robot disimpan di sini
	char x[6]= {"ABCDE"};
	for(int i=0;i<5;i++)
	{
		for (int j=0;j<17;j++)
		{
			dataSend[i][j] = (j ==0) ? '#':((j ==1) ? x[i]:'0');
		//	dataSend[i][j] = (j ==1) ? x[i]:'0';
		}
	}
}

CGame::~CGame()
{
	//matikan jaringan dlsb
	m_Comm.CloseConnection();
	
}
//////(31/7)
void CGame::setPos(int x, int y)
{
	Ball.position.X = x;
	Ball.position.Y = y;
}
void CGame::Strategy()
{
	//tes ah
	int bx, by, hx, hy, ht;
	bx = Ball.position.X;
	by = Ball.position.Y;
	hx = HomeRobot[0].position.X;
	hy = HomeRobot[0].position.Y;
	ht = HomeRobot[0].Angle;
	CString tes;
	tes.Format("isi di game.strategy()\n\n "
		"posisi ball: (%d,%d) \n /"
		"robot 1: %d, %d, %d \n "
		"robot 2: %d, %d, %d \n "
		"robot 3: %d, %d, %d \n "
		"robot 4: %d, %d, %d \n "
		"robot 5: %d, %d, %d \n ",
		bx, by,
		HomeRobot[0].position.X, HomeRobot[0].position.Y, ht,
		HomeRobot[1].position.X, HomeRobot[1].position.Y, HomeRobot[1].Angle,
		HomeRobot[2].position.X, HomeRobot[2].position.Y, HomeRobot[2].Angle,
		HomeRobot[3].position.X, HomeRobot[3].position.Y, HomeRobot[3].Angle,
		HomeRobot[4].position.X, HomeRobot[4].position.Y, HomeRobot[4].Angle);
	//OutputDebugString(tes);
	//Position(0,556,37);
	//FollowBall(0);
	//Angle2(1,Ball.position.X, Ball.position.Y);
	Angle2(0,Ball.position.X, Ball.position.Y);
	SendCommand(dataSend[0]);

}

void CGame::SendCommand(char *data)
{
	//030812 (hahn)
	OutputDebugString(data);
	if(serial.IsConnected())
	{
		serial.WriteData(data,85);
	}
	else
	{
		OutputDebugString("eror");
	}
	
}

void CGame::Velocity(int whichRobot)
{
	//OutputDebugString("tes klik velocity berhasil\n");
	CString v;
	CString sVl, sVr;
	//char data[17];
	char arahL ='+', arahR = '-' ;
	int vl, vr;
	//trik supaya data kebaca di robot?
	for(int i=3;i<16;i+=2)
	{
		//data[i] = 'C';//
		dataSend[whichRobot][i] = 'C';
	}
	vl = HomeRobot[whichRobot].VelocityLeft;
	vr = HomeRobot[whichRobot].VelocityRight;
	v.Format("Kecepatan kiri-kanan: %d, %d\n",vl, vr);
	OutputDebugString(v);
	//vl*=2;//percobaan, karena nilainya sangat kecil ternyata (bergantung Ka?)
	//vr*=2;//percobaan
	if ( vr > 255 ) vr = 255;	//Velocity Limte
	if ( vl > 255 ) vl = 255;
	if ( vr < -255) vr = -255;
	if ( vl < -255) vl = -255;
	//tentukan arahnya
	arahL = (vl< 0)? '-':'+';
	arahR = (vr< 0)? '-':'+';
	vl = abs(vl);
	vr = abs(vr);
	//dibikin ke string?
	if(vl < 100)
	{
		if(vl<10)
			sVl.Format("00%d",vl);
		else 
			sVl.Format("0%d",vl);
	}
	if(vr < 100)
	{
		if(vr<10)
			sVr.Format("00%d",vr);
		else 
			sVr.Format("0%d",vr);
	}
	
	v.Format("\nkiri kanan: %s %s arah\n",sVl, sVr);
	//OutputDebugString(v);
	//tentukan ID
	char robotID[6] = {"ABCDE"};
	dataSend[whichRobot][0] = '#';
	dataSend[whichRobot][1] = robotID[whichRobot];
	dataSend[whichRobot][2] = arahR;
	dataSend[whichRobot][4] = sVr[0];
	dataSend[whichRobot][6] = sVr[1];
	dataSend[whichRobot][8] = sVr[2];
	dataSend[whichRobot][10] = arahL;
	dataSend[whichRobot][12] = sVl[0];
	dataSend[whichRobot][14] = sVl[1];
	dataSend[whichRobot][16] = sVl[2];
	//OutputDebugString(dataSend[whichRobot]);
	OutputDebugString("\n");
	//if(serial.IsConnected())
	//{
	//	serial.WriteData(dataSend[whichRobot],17);
	//}
	//else
	//{
	//	OutputDebugString("Teu kabaca\n");
	//}

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
	HomeRobot[whichRobot].VelocityRight	= (int)(Kp*(double)theta_e);

	Velocity(whichRobot);
}

void CGame::Angle2(int whichRobot, double x, double y)
{
	double dx, dy, de, d_angle, theta_e;
	double Kp = 0.52;

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
	HomeRobot[whichRobot].VelocityRight	= (int)(Kp*(double)theta_e);

	Velocity(whichRobot);

}

void CGame::RobotStop(int whichRobot)
{
	//TODO: menghentikan robot
	HomeRobot[whichRobot].VelocityLeft = 0;
	HomeRobot[whichRobot].VelocityRight = 0;
	Velocity(whichRobot);

}
void CGame::Dribble(int whichRobot)
{
	//TODO: cara untuk mendribble bola


}

//(31/7)
void CGame::Position(int whichRobot, int x, int y)
{
	//TODO:menggerakkan robot[whichRobot] ke (x,y)
	int des_angle = 0, theta_e = 0, d_angle = 0, vl = 0, vr = 0, vc = 70;
	double dx, dy, d_e, Ka = 10.0/60.0; //Ka itu apa?
	dx = x - HomeRobot[whichRobot].position.X;
	dy = y - HomeRobot[whichRobot].position.Y;
	d_e = sqrt(dx*dx + dy*dy);//jarak robot ke x,y
	///asal
	//ambil sudutnya
	if (dx == 0 && dy == 0)
		des_angle = 90;
	else {
		des_angle = (int)((180. / M_PI) * atan2((double)(dy), (double)(dx)));
	}
	theta_e = des_angle - HomeRobot[whichRobot].Angle;

	while (theta_e > 180) theta_e -= 360;
	while (theta_e < -180) theta_e += 360;

	if (d_e > 100.) 
		Ka = 17. / 90.;
	else if (d_e > 50)
		Ka = 19. / 90.;
	else if (d_e > 30)
		Ka = 21. / 90.;
	else if (d_e > 20)
		Ka = 23. / 90.;
	else 
		Ka = 25. / 90.;
	
	if (theta_e > 95 || theta_e < -95)
	{
		theta_e += 180;
		
		if (theta_e > 180) 
			theta_e -= 360;
		if (theta_e > 80)
			theta_e = 80;
		if (theta_e < -80)
			theta_e = -80;
		if (d_e < 5.0 && abs(theta_e) < 40)
			Ka = 0.1;
		vr = (int)(-vc * (1.0 / (1.0 + exp(-3.0 * d_e)) - 0.3) + Ka * theta_e);
		vl = (int)(-vc * (1.0 / (1.0 + exp(-3.0 * d_e)) - 0.3) - Ka * theta_e);
	}
	
	else if (theta_e < 85 && theta_e > -85)
	{
		if (d_e < 5.0 && abs(theta_e) < 40)
			Ka = 0.1;
		vr = (int)( vc * (1.0 / (1.0 + exp(-3.0 * d_e)) - 0.3) + Ka * theta_e);
		vl = (int)( vc * (1.0 / (1.0 + exp(-3.0 * d_e)) - 0.3) - Ka * theta_e);
	}

	else
	{
		vr = (int)(+.17 * theta_e);
		vl = (int)(-.17 * theta_e);
	}
	HomeRobot[whichRobot].VelocityLeft = vl;
	HomeRobot[whichRobot].VelocityRight = vr;
	//kirim data kecepatan ke velocity
	Velocity(whichRobot);

}

void CGame::FollowBall(int robot_id)
{
	//ambil posisi bola
	int bx, by;
	bx = Ball.position.X;
	by = Ball.position.Y;
	Position(robot_id, bx, by);
}
