#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "mil.h" 
#define IMAGE_WIDTH 640
#define IMAGE_HEIGHT 480

class MyIplClass
{
public:
	MyIplClass(void);
	~MyIplClass(void);
	IplImage* m_Ipl;
	void GetIplData(IplImage* Ipl);
	void SetIplData(IplImage* ipl);
	void ProcessIpl(void);
	void GetMatData(cv::Mat MatImage);
	void SetMatData(cv::Mat MatImage);
};
