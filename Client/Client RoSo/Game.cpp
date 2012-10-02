//ini untuk menghandle semua fungsi terkait game. seperti goalkick, penalty dll dll dll
#include "stdafx.h"
#include "Game.h"
#include "serialclass.h"
#include <math.h>

#define M_PI 3.14

Serial serial("\\\\.\\COM17");
char dataSend[5][19];

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
	
	for(int i=0;i<5;i++)
	{
		HomeRobot[i].position.X		= 0;
		HomeRobot[i].position.Y		= 0;
		HomeRobot[i].Angle			= 0;
		HomeRobot[i].VelocityLeft	= 0;
		HomeRobot[i].VelocityRight	= 0;
		HomeRobot[i].bFoundRobot	= FALSE;
	}
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
	/*int bx, by, hx, hy, ht;
	bx = Ball.position.X;
	by = Ball.position.Y;
	hx = HomeRobot[0].position.X;
	hy = HomeRobot[0].position.Y;
	ht = HomeRobot[0].Angle;
	*/
	//Position(2,556,37);
	//FollowBall(2);
	Angle2(2,Ball.position.X, Ball.position.Y);
	//Angle2(3,Ball.position.X, Ball.position.Y);
	//Angle(2,90);
	//Tendang(2);
	//return;
	//Dribble(2);
	//SendCommand(dataSend[0]);

}

void CGame::SendCommand(char *data)
{
	//030812 (hahn)
	OutputDebugString(data);
	//char d[19]= "#A+C2C5C5C+C2C5C5C";
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
	int vl, vr, lastVl, lastVr, deltaV = 10;
	//trik supaya data kebaca di robot?
	for(int i=3;i<16;i+=2)
	{
		//data[i] = 'C';//
		dataSend[whichRobot][i] = 'X';
	}
	lastVl = HomeRobot[whichRobot].lastVelocityLeft;
	lastVr = HomeRobot[whichRobot].lastVelocityRight;

	vl = HomeRobot[whichRobot].VelocityLeft;
	vr = HomeRobot[whichRobot].VelocityRight;
	v.Format("Kecepatan kiri-kanan: %d, %d\n",vl, vr);
	

	//OutputDebugString(v);
	//vl*=2;//percobaan, karena nilainya sangat kecil ternyata (bergantung Ka?)
	//vr = vr * 2;//percobaan
	if ( vr > 125 ) vr = 80;	//Velocity Limte
	if ( vl > 125 ) vl = 80;
	if ( vr < -125) vr = -80;
	if ( vl < -125) vl = -80;
	
	/*1809)coba cara baru. jika v != 0 dan perbedaannya tidak jauh, maka
	  pakai kecepatan yang lama. jika peredaannya jauh, ganti kecepatannya
	*/
	/*
	CString beda;
	if(abs(vl-lastVl)<deltaV && abs(vr-lastVr)<deltaV)
	{	
		beda.Format("Vl: %d Vr: %d |lVl: %d lVr: %d\n", vl, vr, lastVl, lastVr);
		OutputDebugString("perbedaan tidak signifikan.. pakai vl vr sebelumnya\n");
		OutputDebugString(beda);
		return;
	}*/
	
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
	}else
	{
		sVl.Format("%d",vl);
	}
	if(vr < 100)
	{
		if(vr<10)
			sVr.Format("00%d",vr);
		else 
			sVr.Format("0%d",vr);
	}else
	{
		sVr.Format("%d",vr);
	}
	
	
	
	v.Format("\nkiri kanan: %s %s arah\n",sVl, sVr);
	OutputDebugString(v);
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
	dataSend[whichRobot][17] = '\n';
	if(vl == 0 && vr == 0 )
	{
		dataSend[whichRobot][18] = 'x'; //hack. agar bisa direset/rem (2109)
	} else {
		dataSend[whichRobot][18] = 'm'; //huruf selain x, tidak pengaruh apaapa (2109)
	}
	OutputDebugString(dataSend[whichRobot]);
	OutputDebugString("\n");
	if(serial.IsConnected())
	{
		serial.WriteData(dataSend[whichRobot],19);
	}
	else
	{
		OutputDebugString("Teu kabaca\n");
	}

}

void CGame::AutoPosition()
{
	//TODO: Auto position robot. menempatkan posisi robot ketika awal pertandingan/sesudah gol
}

void CGame::Goalie(int whichRobot)
{
	//TODO: untuk menjalankan perintah untuk goali alias kiper
}

void CGame::Angle(int whichRobot, int d_angle)
{
	//TODO: menghitung angle alias sudut objek (robot)
	int theta_e =0;
	double Kp = 2;
	theta_e = d_angle - HomeRobot[whichRobot].Angle;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	//1809
	
	
	CString nThetae;
	nThetae.Format("sudut teta: %d",theta_e);
	if(theta_e >0 && theta_e <5){
		OutputDebugString("selisih sudut kurang dari 5\n");
		RobotStop(whichRobot);
		return;
	}
	OutputDebugString(nThetae);
	HomeRobot[whichRobot].lastVelocityLeft  = HomeRobot[whichRobot].VelocityLeft;
	HomeRobot[whichRobot].lastVelocityRight = HomeRobot[whichRobot].VelocityRight;

	HomeRobot[whichRobot].VelocityLeft	= (int)(-Kp*(double)theta_e);
	HomeRobot[whichRobot].VelocityRight	= (int)(Kp*(double)theta_e);

	//Velocity(whichRobot);
	Velocity(whichRobot);
}

void CGame::Angle2(int whichRobot, double x, double y)
{
	double dx, dy, de, d_angle, theta_e;
	double Kp = 3;
	CString tmp, tmp2;

	//dianggap id robot sudah tau
	dx = HomeRobot[whichRobot].position.X - x;
	dy = HomeRobot[whichRobot].position.Y - y;

	de = sqrt(dx * dx +  dy * dy );
	
	if(dx == 0 && dy ==0)
	{
		RobotStop(whichRobot);
		return;
	}
	else
	{
		d_angle = (int)((180./M_PI)*atan2((double)(dy),(double)(-dx)));
	}
	theta_e = d_angle - HomeRobot[whichRobot].Angle;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	
	if(abs(theta_e)<30) {
		Kp *= 2.1;				//agar kecepatan di bawah 20 masih bisa gerak
		
	}
	if(abs(theta_e) < 20) {
		OutputDebugString("STOP!!!\n");
		RobotStop(whichRobot);
		return;
	}
	HomeRobot[whichRobot].lastVelocityLeft  = HomeRobot[whichRobot].VelocityLeft;
	HomeRobot[whichRobot].lastVelocityRight = HomeRobot[whichRobot].VelocityRight;

	HomeRobot[whichRobot].VelocityLeft	= (int)(-Kp*(double)theta_e);
	HomeRobot[whichRobot].VelocityRight	= (int)(Kp*(double)theta_e);
	tmp2.Format("x,y: (%lf,%lf) x0,y0: (%li,%li)\n",x,y,HomeRobot[whichRobot].position.X, HomeRobot[whichRobot].position.Y);
	tmp.Format(" || de: %lf | d_angle: %lf | theta_e: %lf\n",
		 de, d_angle, theta_e);
	OutputDebugString(tmp2);
	OutputDebugString(tmp);
	//Velocity(whichRobot);
	Velocity(whichRobot);

}

void CGame::RobotStop(int whichRobot)
{
	//TODO: menghentikan robot
	int vl, vr;
	vl = HomeRobot[whichRobot].VelocityLeft;
	vr = HomeRobot[whichRobot].VelocityRight;
	HomeRobot[whichRobot].VelocityLeft = 0;
	HomeRobot[whichRobot].VelocityRight = 0;
	Velocity(whichRobot);
	Velocity(whichRobot);

}
void CGame::Dribble(int whichRobot)
{
	//TODO: cara untuk mendribble bola
	//double dx, dy, de, d_angle, theta_e;
	//double Kp = 3.2;
	//CString tmp, tmp2;

	////dianggap id robot sudah tau
	//dx = Ball.position.X - HomeRobot[whichRobot].position.X;
	//dy = Ball.position.Y - HomeRobot[whichRobot].position.Y;

	//de = sqrt(dx * dx +  dy * dy );
	//
	//if(dx == 0 && dy ==0)
	//{
	//	RobotStop(whichRobot);
	//	return;
	//}
	//else
	//{
	//	d_angle = (int)((180./M_PI)*atan2((double)(dy),(double)(dx)));
	//}
	//theta_e = d_angle - HomeRobot[whichRobot].Angle;

	//while(theta_e >180)  
	//	theta_e -= 360;
	//while(theta_e <-180) 
	//	theta_e += 360;
	////nambah
	//if(abs(theta_e)<10) {
	//	FollowBall(whichRobot);
	//	return;
	//}
	//HomeRobot[whichRobot].lastVelocityLeft  = HomeRobot[whichRobot].VelocityLeft;
	//HomeRobot[whichRobot].lastVelocityRight = HomeRobot[whichRobot].VelocityRight;

	//HomeRobot[whichRobot].VelocityLeft	= (int)(Kp*(double)theta_e);
	//HomeRobot[whichRobot].VelocityRight	= (int)(-Kp*(double)theta_e);
	////tmp2.Format("x,y: (%lf,%lf) x0,y0: (%li,%li)\n",x,y,HomeRobot[whichRobot].position.X, HomeRobot[whichRobot].position.Y);
	//tmp.Format(" || de: %lf | d_angle: %lf | theta_e: %lf\n",
	//	 de, d_angle, theta_e);
	////OutputDebugString(tmp2);
	//OutputDebugString(tmp);
	//Velocity(whichRobot);

	//(2109) - menggunakan fungsi dari angle2
	// 1. tentukan arah robot agar melihat ke bola
	int x, y;
	x = Ball.position.X;
	y = Ball.position.Y;

	double dx, dy, de, d_angle, theta_e;
	double Kp = 3.2;
	CString tmp, tmp2;

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
		d_angle = (int)((180./M_PI)*atan2((double)(dy),(double)(-dx)));
	}
	theta_e = d_angle - HomeRobot[whichRobot].Angle;

	while(theta_e >180)  
		theta_e -= 360;
	while(theta_e <-180) 
		theta_e += 360;
	
	if(abs(theta_e)<20) {
		Kp *= 3;				//agar kecepatan di bawah 20 masih bisa gerak
		
	}
	//ketika selisish sudut < 5, robot bergerak maju
	if(abs(theta_e) < 5) {
		HomeRobot[whichRobot].VelocityLeft  = 80;
		HomeRobot[whichRobot].VelocityRight = 80;
		
	}
	else {
		HomeRobot[whichRobot].lastVelocityLeft  = HomeRobot[whichRobot].VelocityLeft;
		HomeRobot[whichRobot].lastVelocityRight = HomeRobot[whichRobot].VelocityRight;

		HomeRobot[whichRobot].VelocityLeft	= (int)(Kp*(double)theta_e);
		HomeRobot[whichRobot].VelocityRight	= (int)(-Kp*(double)theta_e);
	}
	/*tmp2.Format("x,y: (%lf,%lf) x0,y0: (%li,%li)\n",x,y,HomeRobot[whichRobot].position.X, HomeRobot[whichRobot].position.Y);
	tmp.Format(" || de: %lf | d_angle: %lf | theta_e: %lf\n",
		 de, d_angle, theta_e);
	OutputDebugString(tmp2);
	OutputDebugString(tmp);*/
	
	Velocity(whichRobot);
	



}

//(31/7)
void CGame::Position(int whichRobot, int x, int y)
{
	//TODO:menggerakkan robot[whichRobot] ke (x,y)
	int des_angle = 0, theta_e = 0, d_angle = 0, vl = 0, vr = 0, vc = 70;
	double dx, dy, d_e, Ka = 10.0/60.0; //Ka itu apa?
	double kka = 1.;
	dx = x - HomeRobot[whichRobot].position.X;
	dy = y - HomeRobot[whichRobot].position.Y;
	d_e = sqrt(dx*dx + dy*dy);//jarak robot ke x,y
	///asal
	//ambil sudutnya
	if (dx == 0 && dy == 0)
		des_angle = 90;
	else {
		des_angle = (int)((180. / M_PI) * atan2((double)(dy), (double)(-dx)));
	}
	theta_e = des_angle - HomeRobot[whichRobot].Angle;

	while (theta_e > 180) theta_e -= 360;
	while (theta_e < -180) theta_e += 360;

	//if (d_e > 100.) 
	//	Ka = 17. / kka;
	//else if (d_e > 50)
	//	Ka = 19. / kka;
	//else if (d_e > 30)
	//	Ka = 21. / kka;
	//else if (d_e > 20)
	//	Ka = 23. / kka;
	//else 
	//	Ka = 25. / kka;
	
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
		{
			Ka = 0.1;
			OutputDebugString("d_e<5\n\n");
		}
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
		vr = (int)(+Ka * theta_e);
		vl = (int)(-Ka * theta_e);
	}
	HomeRobot[whichRobot].lastVelocityLeft  = HomeRobot[whichRobot].VelocityLeft;
	HomeRobot[whichRobot].lastVelocityRight = HomeRobot[whichRobot].VelocityRight;

	HomeRobot[whichRobot].VelocityLeft = (vl);
	HomeRobot[whichRobot].VelocityRight = (vr);
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
	//Position(robot_id, HomeRobot[robot_id].position.X+30, HomeRobot[robot_id].position.Y);
}


//2409
void CGame::Tendang(int whichRobot){
	int posBallX, posBallY, jarakGawangX, jarakGawangY, dx, dy, dbrx, dbry, dbr;
	int sudut =0;
	int posGawangX = 640, posGawangY = 240;
	//posBallX = Ball.position.X;
	//posBallY = Ball.position.Y;
	////sementara ditentukan dulu posisi gawang ada di titik (640,240) 
	//jarakGawangX = abs(posBallX - posGawangX);
	//jarakGawangY = abs(posBallY - posGawangY);

	//dx = (int)(3*cos(atan2((double)jarakGawangY,(double)jarakGawangX)));
	//dy = (int)(3*sin(atan2((double)jarakGawangY,(double)jarakGawangX)));
	//
	//dbrx = posBallX - dx;
	//dbry = posBallY - dy;
	//dbr  = (int)(sqrt((double)(dbrx*dbrx) + (double)(dbry*dbry)));
	//Dribble(whichRobot);
	Angle2(whichRobot, posGawangX, posGawangY);
	/*if(dbr < 8) {
		Angle2(whichRobot, posGawangX, posGawangY);
		Dribble(whichRobot);
	}*/
	
}