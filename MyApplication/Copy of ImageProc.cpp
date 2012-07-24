#include "StdAfx.h"
#include "ImageProc.h"

CImageProc::CImageProc(void)
{
	thresholdval	= 50;

	homeTeamColor	= cv::Vec3b(0, 255, 255);
	oppoTeamColor	= cv::Vec3b(255, 0, 255);
	ballColor		= cv::Vec3b(64, 150, 255);
	homeFirstColor	= cv::Vec3b(0, 0, 255);
	homeSecondColor = cv::Vec3b(75, 175, 0);
	homeThirdColor	= cv::Vec3b(200, 100, 0);
	secondaryColor	= cv::Vec3b(255, 255, 255);
}

CImageProc::~CImageProc(void)
{
}

void CImageProc::teamAndBallIdentify( void ) {
	for (row=1; row < IMAGE_HEIGHT; row++){
		label[0][row] = 0;
		color[0][row] = 0;
	}

	for (col=0; col < IMAGE_WIDTH; col++){
		label[col][0] = 0;
		color[col][0] = 0;
	}

	numcolor = 0;
	eq_set.clear();
	eq_set.push_back(0);
	luas_area.clear();
	locatex.clear();
	locatey.clear();
	label2color.clear();

	for (row=1; row < IMAGE_HEIGHT; row++){
		for (col=1; col < IMAGE_WIDTH; col++){
			if		 (colorDistance(MatImage.at<cv::Vec3b>(row, col), homeTeamColor) < thresholdval) {
				color[col][row] = 1;
			}else /**/if (colorDistance(MatImage.at<cv::Vec3b>(row, col), oppoTeamColor) < thresholdval) {
				color[col][row] = 2;
			} else /**/if (colorDistance(MatImage.at<cv::Vec3b>(row, col), ballColor) < thresholdval) {
				color[col][row] = 3;
			} else {
				label[col][row] = 0;
				color[col][row] = 0;
			}
			
			if (color[col][row] != 0){
				if		 (color[col][row-1] == color[col][row] && color[col-1][row] != color[col][row]){
					label[col][row] = label[col][row-1];
				} else if(color[col-1][row] == color[col][row] && color[col][row-1] != color[col][row]){
					label[col][row] = label[col-1][row];
				} else if(color[col-1][row]   == color[col][row] && color[col][row-1]   == color[col][row]){
					label[col][row] = label[col][row-1];
					if (label[col-1][row] != label[col][row]){
						eq_set[label[col-1][row]] = eq_set[label[col][row]];
					}
				} else {
					numcolor++;
					label[col][row] = numcolor;
					eq_set.push_back(numcolor);
				}
			} /**/
		}
	} 

	for (row=0; row < IMAGE_HEIGHT; row++){
		for (col=0; col < IMAGE_WIDTH; col++){
			if(eq_set[label[col][row]] != label[col][row])
				label[col][row] = eq_set[label[col][row]];

			if(label[col][row] != 0){
				label2color[label[col][row]] = color[col][row];
				luas_area[label[col][row]]++;
				locatex[label[col][row]] += col;
				locatey[label[col][row]] += row;
			}
		}
	} 

	for(it = luas_area.begin(); it != luas_area.end() ; it++){
		if((*it).second < 100)
			continue;

		cv::Point2i thisPoint;
		thisPoint.x = locatex[(*it).first]/(*it).second;
		thisPoint.y = locatey[(*it).first]/(*it).second;

		if(label2color[(*it).first] == 1){
			homeTeamColorPoint.push_back(thisPoint);
		}else if(label2color[(*it).first] == 2)
			oppoTeamColorPoint.push_back(thisPoint);
		else 
			ballColorPoint = thisPoint;
	}

	cout<< "Ball Location : " 
		<< ballColorPoint.x << "," 
		<< ballColorPoint.y << endl;
	rectangle(MatImage, 
			  cv::Point(ballColorPoint.x-10, ballColorPoint.y-10), 
			  cv::Point(ballColorPoint.x+10, ballColorPoint.y+10), 
			  cv::Scalar(255,255,0,0));
	//text = "Ball";
	sprintf_s( text, "Ball" );
	putText(MatImage, text , cv::Point(ballColorPoint.x, ballColorPoint.y), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, cv::Scalar(255,255,255));

	//for(int i=0; i<homeTeamColorPoint.size(); i++){
	//	//cout<< "Team " << i+1 <<" Location : " 
	//	//	<< homeTeamColorPoint[i].x << "," 
	//	//	<< homeTeamColorPoint[i].y << endl;
	//	//rectangle(MatImage, 
	//	//	  cv::Point(homeTeamColorPoint[i].x-2, homeTeamColorPoint[i].y-2), 
	//	//	  cv::Point(homeTeamColorPoint[i].x+2, homeTeamColorPoint[i].y+2), 
	//	//	  cv::Scalar(255,255,0,0));
	//	//sprintf_s( id, "T%d", (i+1));
	//	//putText(MatImage, id , cv::Point(homeTeamColorPoint[i].x, homeTeamColorPoint[i].y), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, cv::Scalar(255,255,255));
	//}

	for(int i=0; i<oppoTeamColorPoint.size(); i++){
		//cout<< "Opponent " << i+1 <<" Location : " 
		//	<< oppoTeamColorPoint[i].x << "," 
		//	<< oppoTeamColorPoint[i].y << endl;
		rectangle(MatImage, 
			  cv::Point(oppoTeamColorPoint[i].x-10, oppoTeamColorPoint[i].y-10), 
			  cv::Point(oppoTeamColorPoint[i].x+10, oppoTeamColorPoint[i].y+10), 
			  cv::Scalar(255,255,0,0));
		sprintf_s( text, "O%d", (i+1));
		putText(MatImage, text , cv::Point(oppoTeamColorPoint[i].x, oppoTeamColorPoint[i].y), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, cv::Scalar(255,255,255));
	}
}

void CImageProc::findHomeRobot( void ){
	for (row=1; row < IMAGE_HEIGHT; row++){
		label[0][row] = 0;
		color[0][row] = 0;
	}

	for (col=0; col < IMAGE_WIDTH; col++){
		label[col][0] = 0;
		color[col][0] = 0;
	}

	numcolor = 0;
	eq_set.clear();
	eq_set.push_back(0);
	luas_area.clear();
	locatex.clear();
	locatey.clear();
	label2color.clear();

	for (row=1; row < IMAGE_HEIGHT; row++){
		for (col=1; col < IMAGE_WIDTH; col++){
			if		 (colorDistance(MatImage.at<cv::Vec3b>(row, col), homeFirstColor) < thresholdval) {
				color[col][row] = 1;
			}else /**/if (colorDistance(MatImage.at<cv::Vec3b>(row, col), homeSecondColor) < thresholdval) {
				color[col][row] = 2;
			} else /**/if (colorDistance(MatImage.at<cv::Vec3b>(row, col), homeThirdColor) < thresholdval) {
				color[col][row] = 3;
			} else /**/if (colorDistance(MatImage.at<cv::Vec3b>(row, col), secondaryColor) < thresholdval) {
				color[col][row] = 4;
			} else {
				label[col][row] = 0;
				color[col][row] = 0;
			}
			
			if (color[col][row] != 0){
				if		 (color[col][row-1] == color[col][row] && color[col-1][row] != color[col][row]){
					label[col][row] = label[col][row-1];
				} else if(color[col-1][row] == color[col][row] && color[col][row-1] != color[col][row]){
					label[col][row] = label[col-1][row];
				} else if(color[col-1][row]   == color[col][row] && color[col][row-1]   == color[col][row]){
					label[col][row] = label[col][row-1];
					if (label[col-1][row] != label[col][row]){
						eq_set[label[col-1][row]] = eq_set[label[col][row]];
					}
				} else {
					numcolor++;
					label[col][row] = numcolor;
					eq_set.push_back(numcolor);
				}
			} /**/
		}
	} 

	for (row=0; row < IMAGE_HEIGHT; row++){
		for (col=0; col < IMAGE_WIDTH; col++){
			if(eq_set[label[col][row]] != label[col][row])
				label[col][row] = eq_set[label[col][row]];

			if(label[col][row] != 0){
				label2color[label[col][row]] = color[col][row];
				luas_area[label[col][row]]++;
				locatex[label[col][row]] += col;
				locatey[label[col][row]] += row;
			}
		}
	} 

	for(it = luas_area.begin(); it != luas_area.end() ; it++){
		if((*it).second < 100)
			continue;

		cv::Point2i thisPoint;
		thisPoint.x = locatex[(*it).first]/(*it).second;
		thisPoint.y = locatey[(*it).first]/(*it).second;

		if(label2color[(*it).first] == 1)
			firstColorPoint.push_back(thisPoint);
		else if(label2color[(*it).first] == 2)
			secondColorPoint.push_back(thisPoint);
		else if(label2color[(*it).first] == 3)
			thirdColorPoint.push_back(thisPoint);
		else 
			secondaryColorPoint.push_back(thisPoint);
	}

	for(int i=0; i<firstColorPoint.size(); i++){
		dx = 0;
		dy = 0;
		dst = 0;
		nearestTeamPoint = -1;
		nearestDistance = 9999;
		isSecondary = false;
		for(int j = 0; j<homeTeamColorPoint.size(); j++){
			dx = abs(homeTeamColorPoint[j].x-firstColorPoint[i].x);
			dy = abs(homeTeamColorPoint[j].y-firstColorPoint[i].y);
			dst = (short)sqrt((double)dx*dx+dy*dy);
			if( dst < nearestDistance){
				nearestTeamPoint = j;
				nearestDistance = dst;
			}
		}
		if(nearestDistance>30) continue;

		nearestSecondPoint = -1;
		nearestDistance = 9999;
		for(int j=0; j<secondaryColorPoint.size(); j++){
			dx = abs(secondaryColorPoint[j].x-firstColorPoint[i].x);
			dy = abs(secondaryColorPoint[j].y-firstColorPoint[i].y);
			dst = (short)sqrt((double)dx*dx+dy*dy);
			if( dst < nearestDistance){
				nearestSecondPoint = j;
				nearestDistance = dst;
			}
		}

		int x = 0;
		if(nearestDistance<=30){
			isSecondary = true;
			x = 4;
		} else
			x = 1;

		dsy = (homeTeamColorPoint[nearestTeamPoint].y - firstColorPoint[i].y);
		dsx = (firstColorPoint[i].x - homeTeamColorPoint[nearestTeamPoint].x);
		angle = (int)(atan2(dsy,dsx)*180/M_PI)+45;
		locx = (firstColorPoint[i].x + homeTeamColorPoint[nearestTeamPoint].x)/2;
		locy = (firstColorPoint[i].y + homeTeamColorPoint[nearestTeamPoint].y)/2;

		cout << "Team " << x << " location : "
			 << locx << ","
			 << locy << ","
			 << (angle>=0?angle:(angle+360)) << endl;

		//cout << x << " : " << dsy << " " << dsx << " : " << a << endl;
		//cout << "\t" << atan2(-45.0,-45.0)*180/M_PI+360 << endl;
		//cout << "\t" << homeTeamColorPoint[nearestTeamPoint].x << ","
		//			 << homeTeamColorPoint[nearestTeamPoint].y << " vs "
		//			 << secondColorPoint[i].x << ","
		//			 << secondColorPoint[i].y << endl;

		rectangle(MatImage, 
				  cv::Point(locx-5, locy-5), 
				  cv::Point(locx+5, locy+5), 
				  cv::Scalar(255,255,0,0));
		sprintf_s( text, "%d", x);
		putText(MatImage, text , cv::Point(locx, locy), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, cv::Scalar(255,255,255));
	}

	for(int i=0; i<secondColorPoint.size(); i++){
		dx = 0;
		dy = 0;
		dst = 0;
		nearestTeamPoint = -1;
		nearestDistance = 9999;
		isSecondary = false;
		for(int j = 0; j<homeTeamColorPoint.size(); j++){
			dx = abs(homeTeamColorPoint[j].x-secondColorPoint[i].x);
			dy = abs(homeTeamColorPoint[j].y-secondColorPoint[i].y);
			dst = (short)sqrt((double)dx*dx+dy*dy);
			if( dst < nearestDistance){
				nearestTeamPoint = j;
				nearestDistance = dst;
			}
		}
		if(nearestDistance>30) continue;

		nearestSecondPoint = -1;
		nearestDistance = 9999;
		for(int j=0; j<secondaryColorPoint.size(); j++){
			dx = abs(secondaryColorPoint[j].x-secondColorPoint[i].x);
			dy = abs(secondaryColorPoint[j].y-secondColorPoint[i].y);
			dst = (short)sqrt((double)dx*dx+dy*dy);
			if( dst < nearestDistance){
				nearestSecondPoint = j;
				nearestDistance = dst;
			}
		}

		int x = 0;
		if(nearestDistance<=30){
			isSecondary = true;
			x = 5;
		} else
			x = 2;

		dsy = (homeTeamColorPoint[nearestTeamPoint].y - secondColorPoint[i].y);
		dsx = (secondColorPoint[i].x - homeTeamColorPoint[nearestTeamPoint].x);
		angle = (int)(atan2(dsy,dsx)*180/M_PI)+45;
		locx = (secondColorPoint[i].x + homeTeamColorPoint[nearestTeamPoint].x)/2;
		locy = (secondColorPoint[i].y + homeTeamColorPoint[nearestTeamPoint].y)/2;

		cout << "Team " << x << " location : "
			 << locx << ","
			 << locy << ","
			 << (angle>=0?angle:(angle+360)) << endl;

		//cout << x << " : " << dsy << " " << dsx << " : " << a << endl;
		//cout << "\t" << atan2(-45.0,-45.0)*180/M_PI+360 << endl;
		//cout << "\t" << homeTeamColorPoint[nearestTeamPoint].x << ","
		//			 << homeTeamColorPoint[nearestTeamPoint].y << " vs "
		//			 << secondColorPoint[i].x << ","
		//			 << secondColorPoint[i].y << endl;

		rectangle(MatImage, 
				  cv::Point(locx-5, locy-5), 
				  cv::Point(locx+5, locy+5), 
				  cv::Scalar(255,255,0,0));
		sprintf_s( text, "%d", x);
		putText(MatImage, text , cv::Point(locx, locy), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, cv::Scalar(255,255,255));
	}

	for(int i=0; i<thirdColorPoint.size(); i++){
		dx = 0;
		dy = 0;
		dst = 0;
		nearestTeamPoint = -1;
		nearestDistance = 9999;
		isSecondary = false;
		for(int j = 0; j<homeTeamColorPoint.size(); j++){
			dx = abs(homeTeamColorPoint[j].x-thirdColorPoint[i].x);
			dy = abs(homeTeamColorPoint[j].y-thirdColorPoint[i].y);
			dst = (short)sqrt((double)dx*dx+dy*dy);
			if( dst < nearestDistance){
				nearestTeamPoint = j;
				nearestDistance = dst;
			}
		}
		if(nearestDistance>30) continue;

		short nearestPoint = -1;
		nearestDistance = 9999;
		for(int j=0; j<secondaryColorPoint.size(); j++){
			dx = abs(secondaryColorPoint[j].x-thirdColorPoint[i].x);
			dy = abs(secondaryColorPoint[j].y-thirdColorPoint[i].y);
			dst = (short)sqrt((double)dx*dx+dy*dy);
			if( dst < nearestDistance){
				nearestPoint = j;
				nearestDistance = dst;
			}
		}

		int x = 0;
		if(nearestDistance<=30){
			isSecondary = true;
			x = 6;
		} else
			x = 3;

		dsy = (homeTeamColorPoint[nearestTeamPoint].y - thirdColorPoint[i].y);
		dsx = (thirdColorPoint[i].x - homeTeamColorPoint[nearestTeamPoint].x);
		angle = (int)(atan2(dsy,dsx)*180/M_PI)+45;
		locx = (thirdColorPoint[i].x + homeTeamColorPoint[nearestTeamPoint].x)/2;
		locy = (thirdColorPoint[i].y + homeTeamColorPoint[nearestTeamPoint].y)/2;

		cout << "Team " << x << " location : "
			 << locx << ","
			 << locy << ","
			 << (angle>=0?angle:(angle+360)) << endl;

		//cout << x << " : " << dsy << " " << dsx << " : " << a << endl;
		//cout << "\t" << atan2(-45.0,-45.0)*180/M_PI+360 << endl;
		//cout << "\t" << homeTeamColorPoint[nearestTeamPoint].x << ","
		//			 << homeTeamColorPoint[nearestTeamPoint].y << " vs "
		//			 << secondColorPoint[i].x << ","
		//			 << secondColorPoint[i].y << endl;

		rectangle(MatImage, 
				  cv::Point(locx-5, locy-5), 
				  cv::Point(locx+5, locy+5), 
				  cv::Scalar(255,255,0,0));
		sprintf_s( text, "%d", x);
		putText(MatImage, text , cv::Point(locx, locy), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, cv::Scalar(255,255,255));
	}
}

int CImageProc::colorDistance(const cv::Vec3b& color, int r, int g, int b) {
	return abs(color[0]-r)+
		abs(color[1]-g)+
		abs(color[2]-b);
}

int CImageProc::colorDistance(const cv::Vec3b& color1, cv::Vec3b color2) {
	return abs(color1[0]-color2[0])+
		   abs(color1[1]-color2[1])+
		   abs(color1[2]-color2[2]);
}

void CImageProc::setImage(cv::Mat &Image)
{
	MatImage = Image;
}
