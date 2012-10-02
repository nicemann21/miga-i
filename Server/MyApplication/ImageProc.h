#pragma once

#define _USE_MATH_DEFINES

#define IMAGE_WIDTH 640
#define IMAGE_HEIGHT 480

#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <map>

using namespace std;

typedef struct {
	int id;
	int x;
	int y;
	int t;
}RobotPosition;

class CImageProc
{
public:
	CImageProc(void);
	~CImageProc(void);
	cv::Mat MatImage;
	int label[IMAGE_WIDTH][IMAGE_HEIGHT];
	int color[IMAGE_WIDTH][IMAGE_HEIGHT];

	cv::Vec3b	homeTeamColor;
	cv::Vec3b	oppoTeamColor;
	cv::Vec3b	ballColor;
	cv::Vec3b	homeFirstColor;
	cv::Vec3b	homeSecondColor;
	cv::Vec3b	homeThirdColor;
	cv::Vec3b	secondaryColor;

	cv::Point2i	ballColorPoint;

	/// Function Headers
	void teamAndBallIdentify( void );
	void findHomeRobot( void );
	void findOpponentRobot( void );

	int colorDistance(const cv::Vec3b& color, int r, int g, int b);
	int colorDistance(const cv::Vec3b& color1, cv::Vec3b color2);
	int thresholdval;
	void setImage(cv::Mat &Image);
	void resetData(void);
	void sendData(CString s);
	CString getData();
	RobotPosition HomeRobotPos[6], OppRobotPos;
private:
	bool isSecondary;
	short numcolor;
	short dx,dy,dst;
	short nearestTeamPoint,nearestDistance,nearestSecondPoint;
	int row,col;
	int locx,locy;
	int angle;
	double dsy,dsx;

	vector<short> eq_set;
	vector<cv::Point2i> homeTeamColorPoint;
	vector<cv::Point2i> oppoTeamColorPoint;
	vector<cv::Point2i> firstColorPoint;
	vector<cv::Point2i> secondColorPoint;
	vector<cv::Point2i> thirdColorPoint;
	vector<cv::Point2i> secondaryColorPoint;

	map<int, int> luas_area;
	map<int, int> locatex;
	map<int, int> locatey;
	map<int, int> label2color;
	map<int, int>::iterator it;

	char text[255];
public:
};
