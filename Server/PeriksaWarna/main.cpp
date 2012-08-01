/**
 * 
 * Jalankan lalu klik salah satu titik di gambar
 * 
 **/

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

cv::Mat image;
cv::Mat result[4];
cv::Vec3b color[4];
int colorCode[] = {0, CV_BGR2HSV, CV_BGR2YUV, CV_BGR2YCrCb};
char windowName[4][30] = {"Result BGR", "Result HSV", "Result YUV", "Result YCrCb"};
char colorName[4][6] = {"BGR", "HSV", "YUV", "YCrCb"};

int colorDistance(const cv::Vec3b& color, int r, int g, int b) {
	return abs(color[0]-r)+
		abs(color[1]-g)+
		abs(color[2]-b);
}

static void onMouse( int event, int x, int y, int, void* )
{
	if( event != CV_EVENT_LBUTTONDOWN )
        return;
	
	cout<< x << "," << y <<endl;

	int minDistance = 25;

	cv::Mat img, imgHSV, imgYUV, imgYCB;

	for(int i=0;i<4;i++){
		if(i==0) result[i] = image.clone();
		else cv::cvtColor(image, result[i], colorCode[i]);
		color[i] = result[i].at<cv::Vec3b>(y, x);

		cout<< "* " << colorName[i] << "\t: "
			<< (int)color[i][0] << " "
			<< (int)color[i][1] << " "
			<< (int)color[i][2] << endl;
	}
	double duration;
	duration = static_cast<double>(cv::getTickCount());

	/* Ini yang dipake sama MyApplication 
	 * 
	 * Lambat :p
	 **/

	//for(int k = 0; k<4; k++){
	//	for(int i = 0; i< image.rows; i++){
	//		for(int j = 0; j< image.cols; j++){
	//			if(colorDistance(color[k], result[k].at<cv::Vec3b>(i, j)) > minDistance){
	//				result[k].at<cv::Vec3b>(i, j)[0] = 0;
	//				result[k].at<cv::Vec3b>(i, j)[1] = 0;
	//				result[k].at<cv::Vec3b>(i, j)[2] = 0;
	//			} else {
	//				result[k].at<cv::Vec3b>(i, j)[0] = 255;
	//				result[k].at<cv::Vec3b>(i, j)[1] = 255;
	//				result[k].at<cv::Vec3b>(i, j)[2] = 255;
	//			}
	//		}
	//	}
	//}

	/* Ini lebih cepet 
	 * Tapi script lebih panjang
	 * Lebih ribet
	 * Rawan error :p
	 **/
	for(int k = 0; k<4; k++){
		int nr = result[k].rows;
		int nc = result[k].cols * result[k].channels();

		if(result[k].isContinuous()){
			nc = nc * nr;
			nr = 1;
		}
		for(int i = 0; i< nr; i++){
			uchar* data = result[k].ptr<uchar>(i);
			int mc = nc / result[k].channels();
			for(int j = 0; j< mc; j++){
				if(colorDistance(color[k], (int)data[0], (int)data[1], (int)data[2]) > minDistance){
					*data++ = 0;
					*data++ = 0;
					*data++ = 0;
				} else {
					*data++ = 255;
					*data++ = 255;
					*data++ = 255;
				}
			}
		}
	}

	duration = static_cast<double>(cv::getTickCount())-duration;
	duration /= cv::getTickFrequency(); 

	cout << "Elapsed Time : " << duration << endl;

	for(int i=0; i<4;i++){
		cv::namedWindow(windowName[i]);
		cv::imshow(windowName[i], result[i]);
	}

	cout<<endl;

}

int main() {
	image = cv::imread("gb5.jpg");

	cv::namedWindow("Original Image");
	cv::imshow("Original Image", image);
	cv::setMouseCallback( "Original Image", onMouse, 0 );
	cv::waitKey();
}