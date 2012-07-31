// VisionSys.cpp: implementation of the VisionSys class.
//	A_type Vision System 
//  program By h.s.kim 
//  Yujinrobotics.co.Ltd
//  Last Modification Date: 2003,04,04
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ComponentBackUp.h"
#include "VisionSys.h"
#include <math.h>
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif
#define M_PI 3.1419
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
using std::min;
using std::max;

VisionSys::VisionSys()
{
	PointerType = Two;
	PixelOfSize =1;
	DispSizeX = 640;
	DispSizeY = 480;
	rectBoundary = CRect(0, 0, DispSizeX-1, DispSizeY-1);
	bFlagIsOurHomeLeft = TRUE;
	bFlagFindBall = TRUE;
	bFlagFindHomeRobot[HOME1] = TRUE;
	bFlagFindHomeRobot[HOME2] = TRUE;
	bFlagFindHomeRobot[HGOALIE] = TRUE;
	bFlagFindOpponent[OPP1] = TRUE;
	bFlagFindOpponent[OPP2] = TRUE;
	bFlagFindOpponent[OPP3] = TRUE;
	bFlagFindOpponent[OPP4] = TRUE;
	bFlagFindOpponent[OPP5] = TRUE;
	bFlagBallFound = FALSE;
	bFlagHomeRobotFound[HOME1] = FALSE;
	bFlagHomeRobotFound[HOME2] = FALSE;
	bFlagHomeRobotFound[HGOALIE] = FALSE;
	bFlagOpponentFound[OPP1] = FALSE;
	bFlagOpponentFound[OPP2] = FALSE;
	bFlagOpponentFound[OPP3] = FALSE;
	bFlagOpponentFound[OPP4] = FALSE;
	bFlagOpponentFound[OPP5] = FALSE;
	
	LowerBoundOfBigTeamSize = DEF_LBOUND_BIG_TEAM_SIZE;
	UpperBoundOfBigTeamSize = DEF_UBOUND_BIG_TEAM_SIZE;
	LowerBoundOfSmallIDSize = DEF_LBOUND_SMALL_ID_SIZE;
	UpperBoundOfSmallIDSize = DEF_UBOUND_SMALL_ID_SIZE;
	LowerBoundOfBallSize = DEF_LBOUND_BALL_SIZE;
	UpperBoundOfBallSize = DEF_UBOUND_BALL_SIZE;
	LowerBoundOfOpponentSize = DEF_LBOUND_OPPONENT_SIZE;
	UpperBoundOfOpponentSize = DEF_UBOUND_OPPONENT_SIZE;

/////////////////////////////////////////////////
// Choi.W.H  2000.02.24
	DistanceBetweenBigTeamAndSmallID = (short)(sqrt(2.) * DEF_SIZE_X_ROBOT);
// Choi.W.H  2000.02.24
//////////////////////////////////////////////////////	
	for(i=0;i<6;i++){
		BallColor[i] = 0;
		TeamColor[i] = 0;
		IdColor[0][i] = 0;
		IdColor[1][i] = 0;
		IdColor[2][i] = 0;
		IdColor[3][i] = 0;
		IdColor[4][i] = 0;
		OpponentColor[i] = 0;
		
	}
	this->iPositionOfBall[0]=0; 
	this->iPositionOfBall[1]=0; 

	for(int whichrobot=HOME1;whichrobot <= HGOALIE;whichrobot++)
	{
		iPositionOfHomeRobot[whichrobot][0]	=	0;
		iPositionOfHomeRobot[whichrobot][1]	=	0;
		iAngleOfHomeRobot[whichrobot]		=	0;
		iPositionOfOpponent[whichrobot][0]	=	0;
		iPositionOfOpponent[whichrobot][1]	=	0;
	}


	ColorParameter[0]=128;
	ColorParameter[1]=128;
	ColorParameter[2]=128;
	ColorParameter[3]=128;
	////////////////////////////////
	// initialization by defaults //
	////////////////////////////////
		
}

VisionSys::~VisionSys()
{

}

void VisionSys::DetermineOffsetXY(short rx, short ry, short size, long *offx, long *offy)
{
	short halfsize;	
	halfsize = size/2;

	if(rx < halfsize && ry < halfsize + rectBoundary.top){
		*offx = 0;
		*offy = rectBoundary.top;
	}
	else if(rx > (DispSizeX-1-halfsize) && ry < (halfsize+rectBoundary.top)){
		*offx = DispSizeX-1-size;
		*offy = rectBoundary.top;
	}
	else if(rx < halfsize && ry > (rectBoundary.bottom-1-halfsize)){
		*offx = 0;
		*offy = rectBoundary.bottom-1-size;
	}
	else if(rx > (DispSizeX-1-halfsize) && ry > (rectBoundary.bottom-1-halfsize)){
		*offx = DispSizeX-1-size;
		*offy = rectBoundary.bottom-1-size;
	}
	else if(rx < halfsize){
		*offx = 0;
		*offy = ry-halfsize;
	}
	else if(rx > (DispSizeX-1-halfsize) ){
		*offx = DispSizeX-1-size;
		*offy = ry-halfsize;
	}
	else if(ry < rectBoundary.top+halfsize){
		*offx = rx-halfsize;
		*offy = rectBoundary.top;
	}
	else if(ry > (rectBoundary.bottom-1-halfsize)){
		*offx = rx-halfsize;
		*offy = rectBoundary.bottom-1-size;
	}
	
	
	else {
		*offx = rx-halfsize;
		*offy = ry-halfsize;
	}

	if(bFlagEven == FALSE)
	{		
		
		if( *offy % 2 == 1)				
			*offy -= 1;
	}
	else {							
		if( *offy % 2 == 0)				
			*offy += 1;		
	}
}

void VisionSys::LabelingPartialImage(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY, short object)
{

	int iID;	 	// Choi.W.H  2000.02.18 
	short whichcomponent;

	

	if(bFlagEven)
	{
		index_vramY=OffsetY;
	}
	else
	{
		index_vramY=OffsetY-1;
	}
	
	index_vramX=(OffsetX-1);
	NoError = TRUE;

	switch(object) {
	case HOME1 :
	case HOME2 :
	case HGOALIE :
	/////////////////////////////////////////////////
	// Choi.W.H  2000.02.18 
	// team_color
	indexES[TEAM_COLOR]=0;
	NumberOfLabel[TEAM_COLOR]=0;
	for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
        ES[TEAM_COLOR][j][0] = 0;	// Initialization of # of labels in j-th ES of i-th color
	for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
 		whichES[TEAM_COLOR][j] = 0;
 
	// id_color
	iID = ID1_COLOR/*(2)*/ + object-HOME1;
	indexES[iID]=0;
	NumberOfLabel[iID]=0;
    for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
	 	ES[iID][j][0] = 0;	// Initialization of # of labels in j-th ES of i-th color
	for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
	 	whichES[iID][j] = 0;

	// Choi.W.H  2000.02.18
	// //////////////////////////////////////////////

		break;
	case BALL :
		indexES[BALL_COLOR]=0;					// 초기화
		NumberOfLabel[BALL_COLOR]=0;
	    for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
	    	ES[BALL_COLOR][j][0] = 0;	
		for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)   //by kyg
	 		whichES[BALL_COLOR][j] = 0;
		  
		break;
	case OPPONENT_C :
		indexES[OPPONENT_COLOR]=0;
		NumberOfLabel[OPPONENT_COLOR]=0;
	    for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
		 	ES[OPPONENT_COLOR][j][0] = 0;	
		for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
	 		whichES[OPPONENT_COLOR][j] = 0;
	 
		break;
	}

	///////////////////////////////////////////////////////
	index_vramY++;
	for(j=0;j<ImageSizeX;j++) {
		label[0][j] = NONE_COLOR;
		ColorOfLabel[0][j] = NONE_COLOR;		
	}
	
	for(i=1;i<ImageSizeY;i++) {		// i > 0
				index_vramY++;
		
				//*
				if(i%2 == 1) {						
					for(j=0;j<ImageSizeX;j++) {
						index_vramX++;
						label[i][j] = label[i-1][j];	
						ColorOfLabel[i][j] = ColorOfLabel[i-1][j];			
					}
					continue;					
				}

		index_vramX=(OffsetX);
		index_vram++;				// j == 0		
		label[i][0] = NONE_COLOR;
		ColorOfLabel[i][0] = NONE_COLOR;
		
		for(j=1;j<ImageSizeX;j++) { // j > 0
			if(index_vramY>=479)index_vramY=479;
			else if(index_vramY<=0)index_vramY=0;
			if(index_vramX>=639)index_vramX=639;
			else if(index_vramX<=0)index_vramX=0;
			

			index_vramX+=2;

			int y,u,v,yl;
			
	  			long X_p    = long(index_vramX/2);
				long YX_p   = long((index_vramX-4)/2);
				long UVData = m_pOneArrayPoint[(index_vramY*320) + (X_p)];
				long YData  = m_pOneArrayPoint[(index_vramY*320) + (X_p)];

				y  = (YData  & 0x000000ff);
				v  = ((UVData & 0xff000000)>>24);
				yl = ((YData & 0x00ff0000)>>16);
				u  = ((UVData & 0x0000ff00)>>8);
				
				int Xpoint2=0;

		
				for(Xpoint2=0;Xpoint2<2;){
					  if(Xpoint2==1){
							  j++;
							  y=yl;
							}
							Xpoint2++;
						switch(object) {
							
						case BALL :
							whichColor = NONE_COLOR;		
	  	  					  if(y >= BallColor[0] && y <= BallColor[1] && u >= BallColor[2] && u <= BallColor[3] && v >= BallColor[4] && v <= BallColor[5]) 					
							{	
	  						  whichColor = BALL_COLOR;   
							}
							break;
						case HOME1 :
						case HOME2 :
						case HGOALIE :
						case OPPONENT_C :
							break;
						}

					
						if(whichColor == NONE_COLOR){
							label[i][j] = -1;
							ColorOfLabel[i][j] = -1;
						}
						else {  //if(i>0 && j>0 && whichColor > -1){
							ColorOfLabel[i][j] = whichColor;
							UpperLabel = label[i-1][j];
							LeftLabel = label[i][j-1];
							ColorOfUpperLabel = ColorOfLabel[i-1][j];
							ColorOfLeftLabel = ColorOfLabel[i][j-1];
				  			   
							if(whichColor == ColorOfUpperLabel && whichColor != ColorOfLeftLabel)
				  			  label[i][j] = UpperLabel;
							else if(whichColor != ColorOfUpperLabel && whichColor == ColorOfLeftLabel)
				  			  label[i][j] = LeftLabel;
							
							else if(whichColor == ColorOfUpperLabel && whichColor == ColorOfLeftLabel){
				  			
						 	if(UpperLabel == LeftLabel)   
									label[i][j] = UpperLabel;
                                    
				  			  else{
									label[i][j] = UpperLabel;
									
								
									if(whichES[whichColor][UpperLabel] && !whichES[whichColor][LeftLabel]){
										indexES1 = whichES[whichColor][UpperLabel];
										ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], LeftLabel);
										WhereAppended = ES[whichColor][indexES1][1] + 3;
										if(WhereAppended < MAX_NUM_ELABEL){
							  			  ES[whichColor][indexES1][WhereAppended] = LeftLabel;
							  			  ES[whichColor][indexES1][1]++;
							  			  whichES[whichColor][LeftLabel] = indexES1;
										}
										else
							  			  NoError = FALSE;
									}
									// 2.1)
									else if(!whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel]){
										indexES2 = whichES[whichColor][LeftLabel];
										ES[whichColor][indexES2][2] = min(ES[whichColor][indexES2][2], UpperLabel);
										WhereAppended = ES[whichColor][indexES2][1] + 3;
										if(WhereAppended < MAX_NUM_ELABEL){
							  			  ES[whichColor][indexES2][WhereAppended] = UpperLabel;
							  			  ES[whichColor][indexES2][1]++;
							  			  whichES[whichColor][UpperLabel] = indexES2;
										}
										else
							  			  NoError = FALSE;
									}
								
									else if(whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel] &&
							  			  whichES[whichColor][UpperLabel] != whichES[whichColor][LeftLabel] ){
										if(LeftLabel==-1 || UpperLabel==-1)break;
										indexES1 = whichES[whichColor][UpperLabel];
										indexES2 = whichES[whichColor][LeftLabel];
										sizeES1 = ES[whichColor][indexES1][1];
										sizeES2 = ES[whichColor][indexES2][1];
										ES[whichColor][indexES2][0] = 0;	// invalidation of LeftLabel's ES
										ES[whichColor][indexES1][1] = sizeES1 + sizeES2; // summation of sizes of two ES's
										ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], ES[whichColor][indexES2][2]);
										SumOfSize = sizeES1 + sizeES2 + 3;
										if(SumOfSize <= MAX_NUM_ELABEL){
							  			  index=0;
							  			  for(WhereAppended = sizeES1 + 3; WhereAppended < SumOfSize; WhereAppended++){ 
												tmpLabel = ES[whichColor][indexES2][index+3];
												index++;
												ES[whichColor][indexES1][WhereAppended] = tmpLabel;
												whichES[whichColor][tmpLabel] = indexES1;
							  			  }
										}
										else
							  			  NoError = FALSE;
									}
				  			  } 
							}
							///////////////////////////////////////////////////////
						
							else if(whichColor != ColorOfUpperLabel && whichColor != ColorOfLeftLabel){
				  			  indexes_whichcolor = indexES[whichColor];
				  			  numberoflabel_whichcolor = NumberOfLabel[whichColor];
				  			  if(indexes_whichcolor < PARTIAL_MAXNUMESET_1 && numberoflabel_whichcolor < PARTIAL_MAXNUMLABEL_1){
									indexES[whichColor]++;
									NumberOfLabel[whichColor]++;		
									indexes_whichcolor++;
									numberoflabel_whichcolor++;			
									label[i][j] = numberoflabel_whichcolor;
									ES[whichColor][indexes_whichcolor][0] = 1;							// ES valid flag
									ES[whichColor][indexes_whichcolor][1] = 1;							// # of label (size of ES)
									ES[whichColor][indexes_whichcolor][2] = numberoflabel_whichcolor;
									ES[whichColor][indexes_whichcolor][3] = numberoflabel_whichcolor;
									whichES[whichColor][numberoflabel_whichcolor] = indexes_whichcolor;
				  			  }
				  			  else
									NoError = FALSE;
							}
						}
					} 

		}

	}

		
	if(NoError == TRUE){ 
		switch(object) {

		case HOME1 :
		case HOME2 :
		case HGOALIE :
			
			// team_color
			NumberOfComponent[TEAM_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[TEAM_COLOR];indexes_whichcolor++)
				if(ES[TEAM_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[TEAM_COLOR][indexes_whichcolor] = NumberOfComponent[TEAM_COLOR];
					NumberOfComponent[TEAM_COLOR]++;
				}

			for(j=0;j < NumberOfComponent[TEAM_COLOR]; j++)
				PixelSizeOfComponent[TEAM_COLOR][j] = 0;

			// id_color
			iID = ID1_COLOR + object-HOME1;
			NumberOfComponent[iID]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[iID];indexes_whichcolor++)
				if(ES[iID][indexes_whichcolor][0] == 1 ){
					whichComponent[iID][indexes_whichcolor] = NumberOfComponent[iID];
					NumberOfComponent[iID]++;
				}

			for(j=0;j < NumberOfComponent[iID]; j++)
				PixelSizeOfComponent[iID][j] = 0;
			
			
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == TEAM_COLOR
						|| ColorOfLabel[i][j] == iID) {
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
						Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;

					}

			

		
			// team_color
			for(whichcomponent=0;whichcomponent<NumberOfComponent[TEAM_COLOR];whichcomponent++){
				SumOfX[TEAM_COLOR][whichcomponent] = 0;
				SumOfY[TEAM_COLOR][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[TEAM_COLOR][whichcomponent];index++){
					SumOfX[TEAM_COLOR][whichcomponent] += Component[TEAM_COLOR][whichcomponent][index][0];
					SumOfY[TEAM_COLOR][whichcomponent] += Component[TEAM_COLOR][whichcomponent][index][1];
				}
				CenterXOfComponent[TEAM_COLOR][whichcomponent] = SumOfX[TEAM_COLOR][whichcomponent] / PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
				CenterYOfComponent[TEAM_COLOR][whichcomponent] = SumOfY[TEAM_COLOR][whichcomponent] / PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
			}

			// id
			for(whichcomponent=0;whichcomponent<NumberOfComponent[iID];whichcomponent++){
				SumOfX[iID][whichcomponent] = 0;
				SumOfY[iID][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[iID][whichcomponent];index++){
					SumOfX[iID][whichcomponent] += Component[iID][whichcomponent][index][0];
					SumOfY[iID][whichcomponent] += Component[iID][whichcomponent][index][1];
				}
				CenterXOfComponent[iID][whichcomponent] = SumOfX[iID][whichcomponent] / PixelSizeOfComponent[iID][whichcomponent];
				CenterYOfComponent[iID][whichcomponent] = SumOfY[iID][whichcomponent] / PixelSizeOfComponent[iID][whichcomponent];
			}
					

			break;

		case BALL :
			NumberOfComponent[BALL_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[BALL_COLOR];indexes_whichcolor++)
				if(ES[BALL_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[BALL_COLOR][indexes_whichcolor] = NumberOfComponent[BALL_COLOR];
					NumberOfComponent[BALL_COLOR]++;
				}
			for(j=0;j < NumberOfComponent[BALL_COLOR]; j++)
				PixelSizeOfComponent[BALL_COLOR][j] = 0;
			
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
	
					if(ColorOfLabel[i][j] == BALL_COLOR) {
				

					////////////////////////////////////////////////
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
				    	Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;
					}
			for(whichcomponent=0;whichcomponent<NumberOfComponent[BALL_COLOR];whichcomponent++){
				SumOfX[BALL_COLOR][whichcomponent] = 0;
				SumOfY[BALL_COLOR][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[BALL_COLOR][whichcomponent];index++){
					SumOfX[BALL_COLOR][whichcomponent] += Component[BALL_COLOR][whichcomponent][index][0];
					SumOfY[BALL_COLOR][whichcomponent] += Component[BALL_COLOR][whichcomponent][index][1];
				}
				if(PixelSizeOfComponent[BALL_COLOR][whichcomponent]!=0){
						CenterXOfComponent[BALL_COLOR][whichcomponent] = SumOfX[BALL_COLOR][whichcomponent] / PixelSizeOfComponent[BALL_COLOR][whichcomponent];
						CenterYOfComponent[BALL_COLOR][whichcomponent] = SumOfY[BALL_COLOR][whichcomponent] / PixelSizeOfComponent[BALL_COLOR][whichcomponent];
					  }
			}
			break;

		case OPPONENT_C :
			NumberOfComponent[OPPONENT_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[OPPONENT_COLOR];indexes_whichcolor++)
				if(ES[OPPONENT_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[OPPONENT_COLOR][indexes_whichcolor] = NumberOfComponent[OPPONENT_COLOR];
					NumberOfComponent[OPPONENT_COLOR]++;
				}
			for(j=0;j < NumberOfComponent[OPPONENT_COLOR]; j++)
				PixelSizeOfComponent[OPPONENT_COLOR][j] = 0;
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
	
					if(ColorOfLabel[i][j] == OPPONENT_COLOR) {
								
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
						Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;
					}
		
			for(whichcomponent=0;whichcomponent<NumberOfComponent[OPPONENT_COLOR];whichcomponent++){
				SumOfX[OPPONENT_COLOR][whichcomponent] = 0;
				SumOfY[OPPONENT_COLOR][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];index++){
					SumOfX[OPPONENT_COLOR][whichcomponent] += Component[OPPONENT_COLOR][whichcomponent][index][0];
					SumOfY[OPPONENT_COLOR][whichcomponent] += Component[OPPONENT_COLOR][whichcomponent][index][1];
				}
				CenterXOfComponent[OPPONENT_COLOR][whichcomponent] = SumOfX[OPPONENT_COLOR][whichcomponent] / PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];
				CenterYOfComponent[OPPONENT_COLOR][whichcomponent] = SumOfY[OPPONENT_COLOR][whichcomponent] / PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];
			}
			break;
		}
	}	
}

int VisionSys::FindBall(short OffX, short OffY)
{
	//didiet
	short size=0;
	short /*size,*/ maxsize, candidate, whichcomponent;
	//end didiet
	maxsize = 0;
	bFlagFindBall = TRUE;
	candidate	= 0;
	
	int minbound=LowerBoundOfBallSize;

	if(PixelOfSize>2)
		minbound=2;

	for(whichcomponent=0; whichcomponent<NumberOfComponent[BALL_COLOR]; whichcomponent++){
		size = PixelSizeOfComponent[BALL_COLOR][whichcomponent];
		if(size > maxsize && size >= minbound && size < UpperBoundOfBallSize/PixelOfSize){
			maxsize = size;
			candidate = whichcomponent;

		}
	}
	

	if(maxsize>0){
		SumOfX[BALL_COLOR][candidate] = 0;
		SumOfY[BALL_COLOR][candidate] = 0;
		for(index=0;index<PixelSizeOfComponent[BALL_COLOR][candidate];index++){
			SumOfX[BALL_COLOR][candidate] += Component[BALL_COLOR][candidate][index][0];
			SumOfY[BALL_COLOR][candidate] += Component[BALL_COLOR][candidate][index][1];
		}
		iPositionOfBall[0] = SumOfX[BALL_COLOR][candidate] / PixelSizeOfComponent[BALL_COLOR][candidate];
		iPositionOfBall[1] = SumOfY[BALL_COLOR][candidate] / PixelSizeOfComponent[BALL_COLOR][candidate];
		iPositionOfBall[0] += OffX;
		iPositionOfBall[1] += OffY;
	
		iPositionOfBall[0] *= PixelOfSize;
		iPositionOfBall[1] *= PixelOfSize;

		bFlagBallFound = TRUE;
	}	
	
	// not found.
	else{
		bFlagBallFound = FALSE;
		
	}
	return size;
}

void VisionSys::FindObjets(bool EvenOdd)
{

	int		h=0; 
	int		kk=0;
	long	OffsetX, OffsetY;
	bFlagEven=EvenOdd;
	
	PointerType = One;
	PixelOfSize=5;
	GlobalLabelingImage(0, 0, 640/PixelOfSize, 480/PixelOfSize);

	
	FindBall(0, 0);


	SearchFindOpponentRobot();

	PointerType = Two;
	PixelOfSize=1;
	HomRobotTeamSearch(); 
	FindOpponentRobot();
	
	DetermineOffsetXY(iPositionOfBall[0], iPositionOfBall[1], PARTIAL_IMAGE_SIZE, &OffsetX, &OffsetY);
	LabelingPartialImage(OffsetX, OffsetY, PARTIAL_IMAGE_SIZE, PARTIAL_IMAGE_SIZE, BALL);
	FindBall((short)OffsetX, (short)OffsetY);
	
	
	for(int whichrobot=HOME1;whichrobot <= HGOALIE;whichrobot++)
	{
		if(bFlagHomeRobotFound[whichrobot] == FALSE)
		{

		}	
		
	}

}

void VisionSys::UpdateLUTAllColor()
{

}

void VisionSys::UpdateLUTcolor(short *ptrNewColor, const int Color)
{

}

void VisionSys::SetFileConfig(const char * FileName)
{
	FILE *fp; 
	long	i;
	
	    if((fp = fopen(FileName, "r")) == NULL)
			AfxMessageBox(_T("File Open Error"));
		else {
			int Temp;
        	fscanf(fp, "%d", &rectBoundary.top);
			fscanf(fp, "%d", &Temp);
			fscanf(fp, "%d", &rectBoundary.bottom);
			fscanf(fp, "%d", &rectBoundary.right);   

			fscanf(fp, "%d",&LowerBoundOfBallSize);
			fscanf(fp, "%d",&UpperBoundOfBallSize);
			fscanf(fp, "%d",&LowerBoundOfBigTeamSize);
			fscanf(fp, "%d",&UpperBoundOfBigTeamSize);
			fscanf(fp, "%d",&LowerBoundOfSmallIDSize);
			fscanf(fp, "%d",&UpperBoundOfSmallIDSize);
			fscanf(fp, "%d",&LowerBoundOfOpponentSize);
			fscanf(fp, "%d",&UpperBoundOfOpponentSize);
			fscanf(fp, "%d",&DistanceBetweenBigTeamAndSmallID);
		    rectBoundary.left = Temp;
			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &BallColor[i]);			
			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &TeamColor[i]);			
			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &IdColor[0][i]);			
			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &IdColor[1][i]);			
			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &IdColor[2][i]);			
			////////////////////////////////////////////////
			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &IdColor[3][i]);
			////////////////////////////////////////////////

			for(i = 0;i < 6;i++)
				fscanf(fp, "%d", &OpponentColor[i]);			
		
			fscanf(fp, "%d", &bFlagFindBall);     
			fscanf(fp, "%d", &bFlagFindHomeRobot[HOME1]);     
			fscanf(fp, "%d", &bFlagFindHomeRobot[HOME2]);     
			fscanf(fp, "%d", &bFlagFindHomeRobot[HGOALIE]);     
			fscanf(fp, "%d", &bFlagFindOpponent[OPP1]);     
			fscanf(fp, "%d", &bFlagFindOpponent[OPP2]);     
			fscanf(fp, "%d", &bFlagFindOpponent[OPP3]);     


		fscanf(fp, "%d", &ColorParameter[0]);
		fscanf(fp, "%d", &ColorParameter[1]);
		fscanf(fp, "%d", &ColorParameter[2]);
		fscanf(fp, "%d", &ColorParameter[3]); 

		fscanf(fp, "%d", &bFlagIsOurHomeLeft);
		bFlagIsOurHomeLeft=1;

		fclose(fp);		
		}
	
}

void VisionSys::GetReference(int *HSI)
{
	HSI[0]=ColorParameter[0];
	HSI[1]=ColorParameter[1];
	HSI[2]=ColorParameter[2];
	HSI[3]=ColorParameter[3];
}

RECT VisionSys::GetBoundaryInfo(void)
{

	return rectBoundary;	
}

void VisionSys::GetBallPosition(int *Ballpoint)
{

	Ballpoint[0]=iPositionOfBall[0];
	Ballpoint[1]=iPositionOfBall[1];

}

void VisionSys::DetermineComponentsOfBigTeamColor()
{
	short pixsize, whichcomponent;
	
	NumberOfBigTeamColors = 0;
	int minbound=LowerBoundOfBigTeamSize;

	if(PixelOfSize>2)
		minbound=2;

	for(whichcomponent=0; whichcomponent<NumberOfComponent[TEAM_COLOR]; whichcomponent++){
		pixsize = PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
		
		// component size check
		if(pixsize >= minbound && pixsize <= UpperBoundOfBigTeamSize){
			// Get components corresponding to Big Team Color
			WhichComponentOfBigTeamColor[NumberOfBigTeamColors] = whichcomponent;
			// The validty of such component is set to true, which becomes false after using for each home robot
			ValidFlagOfComponentOfBigTeamColor[NumberOfBigTeamColors] = TRUE;
			NumberOfBigTeamColors++;
	
		}
		
	}
	

}

void VisionSys::DetermineComponentsOfSmallIDColor(short whichRobot)
{
	short pixsize, whichcomponent;
//	char temp[100];
	int minbound=LowerBoundOfSmallIDSize;

	if(PixelOfSize>2)
		minbound=2;

	index = whichRobot-HOME1;	
	NumberOfSmallIDColors[index] = 0;
	
	int iID = ID1_COLOR + whichRobot-HOME1;


	for(whichcomponent=0;whichcomponent<NumberOfComponent[iID];whichcomponent++){
		pixsize = PixelSizeOfComponent[iID][whichcomponent];
		
		// component size check
		if(pixsize >= minbound && pixsize <= UpperBoundOfSmallIDSize/PixelOfSize){
			// Get components corresponding to Small Team Color
			WhichComponentOfSmallIDColor[index][NumberOfSmallIDColors[index]] = whichcomponent;
			// Get CX and CY of components corresponding to Small Id Color
			CenterXOfComponentOfSmallIDColor[index][NumberOfSmallIDColors[index]] = CenterXOfComponent[iID][whichcomponent];
			CenterYOfComponentOfSmallIDColor[index][NumberOfSmallIDColors[index]] = CenterYOfComponent[iID][whichcomponent];
			NumberOfSmallIDColors[index]++;
		}
	}		
}

long VisionSys::MinDistanceFromBigTeamColor(short sX, short sY, short *spBigteam_nearst)
{
	short index_bigteam, whichcomponent;
	long dx, dy, distance, min_distance;

	min_distance = 100000000;

	
	for(index_bigteam = 0; index_bigteam < NumberOfBigTeamColors; index_bigteam++) {
		whichcomponent = WhichComponentOfBigTeamColor[index_bigteam];
		dx = CenterXOfComponent[TEAM_COLOR][whichcomponent] - sX;
		dy = CenterYOfComponent[TEAM_COLOR][whichcomponent] - sY;
		distance = dx*dx + dy*dy;
		if(distance < min_distance) {
			min_distance = distance;
			*spBigteam_nearst = whichcomponent;
		}
	}

	return min_distance;
}

void VisionSys::FindHomeRobot(short whichRobot, short OffX, short OffY)
{
	short whichcomponent, whichcomponent_nearest;	//index_bigteam, 
	short index_smallid;//whichidcolor, , index_smallid_nearest
	short cx, cy, idx[3], idy[3];		//, angle, bx, by, 
	long min_distance;			// distance, dx, dy, 
	double dAngle;		// Choi.W.H  2000.02.18
	bool sameflag=false;
	DetermineComponentsOfBigTeamColor();
	DetermineComponentsOfSmallIDColor(whichRobot);
 
	int iID = ID1_COLOR + whichRobot-HOME1,CntOfcomponent=0;
	short size, maxsize, candidate, bigteam_component;
	bigteam_component=0;
	whichcomponent_nearest=0;
	candidate=0;
	bFlagHomeRobotFound[whichRobot] = FALSE;

	if(NumberOfSmallIDColors[whichRobot-HOME1] == 0 || NumberOfBigTeamColors == 0) {
		return;
	}
	candidate = -1;
	maxsize = 0;

	int dist=DistanceBetweenBigTeamAndSmallID;
	if(PixelOfSize>2)dist=5;
	for(index_smallid = 0; index_smallid < NumberOfSmallIDColors[whichRobot-HOME1]; index_smallid++) {
		whichcomponent = WhichComponentOfSmallIDColor[whichRobot-HOME1][index_smallid];

	
	short index_bigteam, whichcomponent12;
	long dx, dy, distance;

	min_distance = 100000000;

	
	for(index_bigteam = 0; index_bigteam < NumberOfBigTeamColors; index_bigteam++) {
		whichcomponent12 = WhichComponentOfBigTeamColor[index_bigteam];
		dx = CenterXOfComponent[TEAM_COLOR][whichcomponent12] - CenterXOfComponent[iID][whichcomponent];
		dy = CenterYOfComponent[TEAM_COLOR][whichcomponent12] - CenterYOfComponent[iID][whichcomponent];
		distance = dx*dx + dy*dy;
		if(distance < min_distance) {
		
				min_distance = distance;
				bigteam_component = whichcomponent12;	
				CntOfcomponent++;
		

		}
		
	}
		
		if(min_distance > dist * dist)
			continue;
		
		size = PixelSizeOfComponent[iID][whichcomponent];


		// Max component Update
		if(size > maxsize) {
			maxsize = size;
			candidate = whichcomponent;
			whichcomponent_nearest = bigteam_component;
		}
	}
	if(candidate==-1) {
		bFlagHomeRobotFound[whichRobot] = FALSE;
		return;
	}

	idx[0] = CenterXOfComponent[iID][candidate];
	idy[0] = CenterYOfComponent[iID][candidate];

	cx = CenterXOfComponent[TEAM_COLOR][whichcomponent_nearest];
	cy = CenterYOfComponent[TEAM_COLOR][whichcomponent_nearest];

	iPositionOfHomeRobot[whichRobot][0] = (short)((cx + idx[0])/2. + OffX)*PixelOfSize;	// 위치갱신
	iPositionOfHomeRobot[whichRobot][1] = (short)((cy + idy[0])/2. + OffY)*PixelOfSize;
	bFlagHomeRobotFound[whichRobot] = TRUE;

	if(bFlagHomeRobotFound[whichRobot] == TRUE) {

		dAngle = atan2(double(idy[0]) - double(cy), double(cx) - double(idx[0])) - 3*M_PI / 4.;

		// degree convert ///////////////////////////
		iAngleOfHomeRobot[whichRobot] = (short)(180. / M_PI * dAngle);
	}

}

void VisionSys::GetHomeRobotPosition(RobotObj *HomeRobot)
{
	

}

void VisionSys::GlobalLabelingImage(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY)
{
	short whichcomponentGL;

		if(bFlagEven){
			index_vramY=OffsetY+1;
		}
		else{
			index_vramY=OffsetY;
		}

		index_vramX=(OffsetX);
		NoError = TRUE;

		indexES[TEAM_COLOR]=0;
		NumberOfLabel[TEAM_COLOR]=0;
		for(j=0;j<PARTIAL_MAX_NUM_ESET/PixelOfSize;j++)
        	ES[TEAM_COLOR][j][0] = 0;	// Initialization of # of labels in j-th ES of i-th color
		for(j=0;j<PARTIAL_MAX_NUM_LABEL/PixelOfSize;j++)
 			whichES[TEAM_COLOR][j] = 0;
     
		indexES[BALL_COLOR]=0;					// inital
		NumberOfLabel[BALL_COLOR]=0;
	    for(j=0;j<PARTIAL_MAX_NUM_ESET/PixelOfSize;j++)
	    	ES[BALL_COLOR][j][0] = 0;	
		for(j=0;j<PARTIAL_MAX_NUM_LABEL/PixelOfSize;j++)   //by kyg
	 		whichES[BALL_COLOR][j] = 0;

		indexES[OPPONENT_COLOR]=0;
		NumberOfLabel[OPPONENT_COLOR]=0;
	    for(j=0;j<PARTIAL_MAX_NUM_ESET/PixelOfSize;j++)
		 	ES[OPPONENT_COLOR][j][0] = 0;	
		for(j=0;j<PARTIAL_MAX_NUM_LABEL/PixelOfSize;j++)
	 		whichES[OPPONENT_COLOR][j] = 0;

	index_vramY++;
	for(j=0;j<ImageSizeX;j++) {
		label[0][j] = NONE_COLOR;
		ColorOfLabel[0][j] = NONE_COLOR;		// 
	}
	this->global_IDDebug.Format(_T(""));
	
	for(i=1;i<ImageSizeY;i++) {		// i > 0
			
	
		index_vramX=(OffsetX);
		index_vram++;				// j == 0	
		label[i][0] = NONE_COLOR;
		ColorOfLabel[i][0] = NONE_COLOR;
		
	
		for(j=1;j<ImageSizeX;j++) { // j > 0	

			long X_p	= long(j*PixelOfSize);
			long YX_p   = long((j*PixelOfSize-4));
			long y_point=(i*PixelOfSize);

			if((rectBoundary.right  < X_p ||  rectBoundary.left > X_p)||
			  (rectBoundary.bottom < y_point || rectBoundary.top  > y_point))
			{
					label[i][j] = -1;
					ColorOfLabel[i][j] = -1;
					continue;		//Boundary Limit Cut
			}
		
			y_point*=320;
			X_p/=2;
			YX_p/=2;
			
		



			int y,u,v,yL;
		
			
		
			long UVData = m_pOneArrayPoint[(y_point) + (X_p)];
			long YData  = m_pOneArrayPoint[(y_point) + (YX_p)];

			y  = (YData  & 0x000000ff);
			v  = ((UVData & 0xff000000)>>24);
			yL = ((YData & 0x00ff0000)>>16);
			u  = ((UVData & 0x0000ff00)>>8);

		


			whichColor = NONE_COLOR;		
	  	  	if(	y >= BallColor[0] && y <= BallColor[1] && 
			   u >= BallColor[2] && u <= BallColor[3] && 
			   v >= BallColor[4] && v <= BallColor[5])
				{	
	  			  whichColor = BALL_COLOR;   
				}
			else if(y >= TeamColor[0] && y <= TeamColor[1]					
				  && u >= TeamColor[2] && u <= TeamColor[3] 
				  && v >= TeamColor[4] && v <= TeamColor[5]) 					 
				{
	  			  whichColor = TEAM_COLOR;
				}
	  		///////////////////////////////////
	  		else if(y >= OpponentColor[0] && y <= OpponentColor[1]
				  && u >= OpponentColor[2] && u <= OpponentColor[3] 
				  && v >= OpponentColor[4] && v <= OpponentColor[5])
				  {
				  whichColor = OPPONENT_COLOR;
				  }
			///////////////////////////////////////////////
			// ///
			if(whichColor == NONE_COLOR){
				label[i][j] = -1;
				ColorOfLabel[i][j] = -1;
			}
			else {  //if(i>0 && j>0 && whichColor > -1){
				ColorOfLabel[i][j] = whichColor;
				UpperLabel = label[i-1][j];
				LeftLabel = label[i][j-1];
				ColorOfUpperLabel = ColorOfLabel[i-1][j];
				ColorOfLeftLabel = ColorOfLabel[i][j-1];
					 
				if(whichColor == ColorOfUpperLabel && whichColor != ColorOfLeftLabel)
					label[i][j] = UpperLabel;
				else if(whichColor != ColorOfUpperLabel && whichColor == ColorOfLeftLabel)
					label[i][j] = LeftLabel;
				
				else if(whichColor == ColorOfUpperLabel && whichColor == ColorOfLeftLabel){
					///////////////////////////////////////////////////////
					// 2.2) 
			 	if(UpperLabel == LeftLabel)   
						label[i][j] = UpperLabel;
                                    
					else{
						label[i][j] = UpperLabel;
						
						///////////////////////////////////////////////////////
						// 2.1) 
						if(whichES[whichColor][UpperLabel] && !whichES[whichColor][LeftLabel]){
							indexES1 = whichES[whichColor][UpperLabel];
							ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], LeftLabel);
							WhereAppended = ES[whichColor][indexES1][1] + 3;
							if(WhereAppended < MAX_NUM_ELABEL/PixelOfSize){
								ES[whichColor][indexES1][WhereAppended] = LeftLabel;
								ES[whichColor][indexES1][1]++;
								whichES[whichColor][LeftLabel] = indexES1;
							}
							else
							{
								NoError = FALSE;
								switch(whichColor)
								{
								case BALL_COLOR:
									this->global_IDDebug.Format(_T("Ball Color Set error(Two many Pixel)"));
									break;
								case TEAM_COLOR:
									this->global_IDDebug.Format(_T("Team Color Set error(Two many Pixel)"));
									break;
								case OPPONENT_COLOR:
									this->global_IDDebug.Format(_T("Opponent Color Set error(Two many Pixel)"));
									break;
								}
							}
						}
						// 2.1)
						else if(!whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel]){
							indexES2 = whichES[whichColor][LeftLabel];
							ES[whichColor][indexES2][2] = min(ES[whichColor][indexES2][2], UpperLabel);
							WhereAppended = ES[whichColor][indexES2][1] + 3;
							if(WhereAppended < MAX_NUM_ELABEL/PixelOfSize){
								ES[whichColor][indexES2][WhereAppended] = UpperLabel;
								ES[whichColor][indexES2][1]++;
								whichES[whichColor][UpperLabel] = indexES2;
							}
							else
							{
								NoError = FALSE;
								switch(whichColor)
								{
								case BALL_COLOR:
									this->global_IDDebug.Format(_T("Ball Color Set error(Two many Pixel)"));
									break;
								case TEAM_COLOR:
									this->global_IDDebug.Format(_T("Team Color Set error(Two many Pixel)"));
									break;
								case OPPONENT_COLOR:
									this->global_IDDebug.Format(_T("Opponent Color Set error(Two many Pixel)"));
									break;
								}
							}
						}
						//////////////////////////////////////////////////////
						// 2.3) 
						else if(whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel] &&
								whichES[whichColor][UpperLabel] != whichES[whichColor][LeftLabel] ){
							if(LeftLabel < 0 || UpperLabel < 0){
									switch(whichColor)
								{
								case BALL_COLOR:
									this->global_IDDebug.Format(_T("Ball Color Set error(Two many Pixel)"));
									break;
								case TEAM_COLOR:
									this->global_IDDebug.Format(_T("Team Color Set error(Two many Pixel)"));
									break;
								case OPPONENT_COLOR:
									this->global_IDDebug.Format(_T("Opponent Color Set error(Two many Pixel)"));
									break;
								}
								break;
							}
							indexES1 = whichES[whichColor][UpperLabel];
							indexES2 = whichES[whichColor][LeftLabel];
							sizeES1 = ES[whichColor][indexES1][1];
							sizeES2 = ES[whichColor][indexES2][1];
							ES[whichColor][indexES2][0] = 0;	// invalidation of LeftLabel's ES
							ES[whichColor][indexES1][1] = sizeES1 + sizeES2; // summation of sizes of two ES's
							ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], ES[whichColor][indexES2][2]);
							SumOfSize = sizeES1 + sizeES2 + 3;
							if(SumOfSize <= MAX_NUM_ELABEL/PixelOfSize && SumOfSize > 0){
								index=0;
								for(WhereAppended = sizeES1 + 3; WhereAppended < SumOfSize; WhereAppended++){ 
									tmpLabel = ES[whichColor][indexES2][index+3];
									index++;
									ES[whichColor][indexES1][WhereAppended] = tmpLabel;
									whichES[whichColor][tmpLabel] = indexES1;
								}
							}
							else
							{
								NoError = FALSE;
								switch(whichColor)
								{
								case BALL_COLOR:
									this->global_IDDebug.Format(_T("Ball Color Set error(Two many Pixel)"));
									break;
								case TEAM_COLOR:
									this->global_IDDebug.Format(_T("Team Color Set error(Two many Pixel)"));
									break;
								case OPPONENT_COLOR:
									this->global_IDDebug.Format(_T("Opponent Color Set error(Two many Pixel)"));
									break;
								}

							}
						}
					} 
				}
				///////////////////////////////////////////////////////
				// 2.4) 
				else if(whichColor != ColorOfUpperLabel && whichColor != ColorOfLeftLabel){
					indexes_whichcolor = indexES[whichColor];
					numberoflabel_whichcolor = NumberOfLabel[whichColor];
					if(indexes_whichcolor < (PARTIAL_MAXNUMESET_1/PixelOfSize) && numberoflabel_whichcolor < (PARTIAL_MAXNUMLABEL_1/PixelOfSize)){
						indexES[whichColor]++;
						NumberOfLabel[whichColor]++;		// New Lavel
						indexes_whichcolor++;
						numberoflabel_whichcolor++;			// New Lavel
						label[i][j] = numberoflabel_whichcolor;
						ES[whichColor][indexes_whichcolor][0] = 1;							// ES valid flag
						ES[whichColor][indexes_whichcolor][1] = 1;							// # of label (size of ES)
						ES[whichColor][indexes_whichcolor][2] = numberoflabel_whichcolor;
						ES[whichColor][indexes_whichcolor][3] = numberoflabel_whichcolor;
						whichES[whichColor][numberoflabel_whichcolor] = indexes_whichcolor;
					}
					else
						{
								NoError = FALSE;
								switch(whichColor)
								{
								case BALL_COLOR:
									this->global_IDDebug.Format(_T("Ball Color Set error(Two many Pixel)"));
									break;
								case TEAM_COLOR:
									this->global_IDDebug.Format(_T("Team Color Set error(Two many Pixel)"));
									break;
								case OPPONENT_COLOR:
									this->global_IDDebug.Format(_T("Opponent Color Set error(Two many Pixel)"));
									break;
								}
							}
				}
			}
		} // for j
	}

	
	if(NoError == TRUE){ 
			NumberOfComponent[TEAM_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[TEAM_COLOR];indexes_whichcolor++)
				if(ES[TEAM_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[TEAM_COLOR][indexes_whichcolor] = NumberOfComponent[TEAM_COLOR];
					NumberOfComponent[TEAM_COLOR]++;
				}

			for(j=0;j < NumberOfComponent[TEAM_COLOR]; j++)
				PixelSizeOfComponent[TEAM_COLOR][j] = 0;

			
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == TEAM_COLOR) {
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponentGL = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponentGL];
						Component[whichColor][whichcomponentGL][index][0] = j;	
						Component[whichColor][whichcomponentGL][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponentGL]++;	
						else
							NoError = FALSE;

					}
			for(whichcomponentGL=0;whichcomponentGL<NumberOfComponent[TEAM_COLOR];whichcomponentGL++){
				SumOfX[TEAM_COLOR][whichcomponentGL] = 0;
				SumOfY[TEAM_COLOR][whichcomponentGL] = 0;
				for(index=0;index<PixelSizeOfComponent[TEAM_COLOR][whichcomponentGL];index++){
					SumOfX[TEAM_COLOR][whichcomponentGL] += Component[TEAM_COLOR][whichcomponentGL][index][0];
					SumOfY[TEAM_COLOR][whichcomponentGL] += Component[TEAM_COLOR][whichcomponentGL][index][1];
				}
				CenterXOfComponent[TEAM_COLOR][whichcomponentGL] = SumOfX[TEAM_COLOR][whichcomponentGL] / PixelSizeOfComponent[TEAM_COLOR][whichcomponentGL];
				CenterYOfComponent[TEAM_COLOR][whichcomponentGL] = SumOfY[TEAM_COLOR][whichcomponentGL] / PixelSizeOfComponent[TEAM_COLOR][whichcomponentGL];
			}

			NumberOfComponent[BALL_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[BALL_COLOR];indexes_whichcolor++)
				if(ES[BALL_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[BALL_COLOR][indexes_whichcolor] = NumberOfComponent[BALL_COLOR];
					NumberOfComponent[BALL_COLOR]++;
				}
			for(j=0;j < NumberOfComponent[BALL_COLOR]; j++)
				PixelSizeOfComponent[BALL_COLOR][j] = 0;
			
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == BALL_COLOR) {
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponentGL = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponentGL];
						if(whichcomponentGL < 0) continue;
						Component[whichColor][whichcomponentGL][index][0] = j;	
						Component[whichColor][whichcomponentGL][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponentGL]++;	
						else
							NoError = FALSE;
					}
			// calculate Position Center for component///////////
			for(whichcomponentGL=0;whichcomponentGL<NumberOfComponent[BALL_COLOR];whichcomponentGL++){
				SumOfX[BALL_COLOR][whichcomponentGL] = 0;
				SumOfY[BALL_COLOR][whichcomponentGL] = 0;
				for(index=0;index<PixelSizeOfComponent[BALL_COLOR][whichcomponentGL];index++){
					SumOfX[BALL_COLOR][whichcomponentGL] += Component[BALL_COLOR][whichcomponentGL][index][0];
					SumOfY[BALL_COLOR][whichcomponentGL] += Component[BALL_COLOR][whichcomponentGL][index][1];
				}
				CenterXOfComponent[BALL_COLOR][whichcomponentGL] = SumOfX[BALL_COLOR][whichcomponentGL] / PixelSizeOfComponent[BALL_COLOR][whichcomponentGL];
				CenterYOfComponent[BALL_COLOR][whichcomponentGL] = SumOfY[BALL_COLOR][whichcomponentGL] / PixelSizeOfComponent[BALL_COLOR][whichcomponentGL];
			}
			
			
		NumberOfComponent[OPPONENT_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[OPPONENT_COLOR];indexes_whichcolor++)
				if(ES[OPPONENT_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[OPPONENT_COLOR][indexes_whichcolor] = NumberOfComponent[OPPONENT_COLOR];
					NumberOfComponent[OPPONENT_COLOR]++;
				}
			for(j=0;j < NumberOfComponent[OPPONENT_COLOR]; j++)
				PixelSizeOfComponent[OPPONENT_COLOR][j] = 0;
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == OPPONENT_COLOR) {
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponentGL = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponentGL];
						Component[whichColor][whichcomponentGL][index][0] = j;	
						Component[whichColor][whichcomponentGL][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponentGL]++;	
						else
							NoError = FALSE;
					}
			// calculate Position Center for component///////////
			for(whichcomponentGL=0;whichcomponentGL<NumberOfComponent[OPPONENT_COLOR];whichcomponentGL++){
				SumOfX[OPPONENT_COLOR][whichcomponentGL] = 0;
				SumOfY[OPPONENT_COLOR][whichcomponentGL] = 0;
				for(index=0;index<PixelSizeOfComponent[OPPONENT_COLOR][whichcomponentGL];index++){
					SumOfX[OPPONENT_COLOR][whichcomponentGL] += Component[OPPONENT_COLOR][whichcomponentGL][index][0];
					SumOfY[OPPONENT_COLOR][whichcomponentGL] += Component[OPPONENT_COLOR][whichcomponentGL][index][1];
				}
				CenterXOfComponent[OPPONENT_COLOR][whichcomponentGL] = SumOfX[OPPONENT_COLOR][whichcomponentGL] / PixelSizeOfComponent[OPPONENT_COLOR][whichcomponentGL];
				CenterYOfComponent[OPPONENT_COLOR][whichcomponentGL] = SumOfY[OPPONENT_COLOR][whichcomponentGL] / PixelSizeOfComponent[OPPONENT_COLOR][whichcomponentGL];
			}	
		}
}

void VisionSys::FindOpponentRobot()
{
	

	int OpponentColorNum=NumberOfOpponnetColors;
	int RobotCnt=0;
	for(int i=0; i<5 ;i++)
		bFlagOpponentFound[i] = FALSE;


	for(int index_bigteam = 0; index_bigteam < OpponentColorNum; index_bigteam++) {
		if(OpponentColorLabeling(Est_OPPColorPositionX[index_bigteam],
			Est_OPPColorPositionY[index_bigteam], PARTIAL_IMAGE_SIZE_OPP, PARTIAL_IMAGE_SIZE_OPP)==TRUE){
			BOOL findFlag=FALSE;

			FindOpponent(index_bigteam,(short)Est_OPPColorPositionX[index_bigteam], short (Est_OPPColorPositionY[index_bigteam]));
	
		}

		if( bFlagOpponentFound[OPP1] == TRUE && 
			bFlagOpponentFound[OPP2] == TRUE && 
			bFlagOpponentFound[OPP3] == TRUE &&
			bFlagOpponentFound[OPP4] == TRUE && 
			bFlagOpponentFound[OPP5] == TRUE )break;
	}

}

void VisionSys::DetermineComponentsOfOppBigTeamColor()
{
	short pixsize, whichcomponent;
	
	NumberOfOpponnetColors = 0;
	int minbound=LowerBoundOfOpponentSize,cnt;

	if(PixelOfSize>2)
		minbound=2;
	for(whichcomponent=0; whichcomponent<NumberOfComponent[OPPONENT_COLOR]; whichcomponent++){
		pixsize = PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];
		
	
		if(pixsize >= minbound && pixsize <= UpperBoundOfOpponentSize/PixelOfSize){
			// Get components corresponding to Big Team Color
			WhichComponentOfOpponetColor[NumberOfOpponnetColors] = whichcomponent;
			// The validty of such component is set to true, which becomes false after using for each home robot
			ValidFlagOfComponentOfOpponetColor[NumberOfOpponnetColors] = TRUE;
			NumberOfOpponnetColors++;
		}
	}
	cnt=NumberOfOpponnetColors;

}

void VisionSys::SearchFindOpponentRobot()
{
	DetermineComponentsOfOppBigTeamColor();
	int index_bigteam,whichcomponent;

	for(index_bigteam = 0; index_bigteam < NumberOfOpponnetColors; index_bigteam++) {
		whichcomponent = WhichComponentOfOpponetColor[index_bigteam];
		DetermineOffsetXY ((CenterXOfComponent[OPPONENT_COLOR][whichcomponent]*5)
			,((CenterYOfComponent[OPPONENT_COLOR][whichcomponent])*5)+5,PARTIAL_IMAGE_SIZE_OPP, &Est_OPPColorPositionX[index_bigteam], &Est_OPPColorPositionY[index_bigteam]);
	}
	
	
}

bool VisionSys::OpponentColorLabeling(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY)
{
//		int iID;	 	// Choi.W.H  2000.02.18 
	short whichcomponent;

	
	if(bFlagEven){
		index_vramY=OffsetY;
	}
	else{
		index_vramY=OffsetY-1;
	}
	

	index_vramX=(OffsetX-1);
	NoError = TRUE;
	indexES[OPPONENT_COLOR]=0;
	NumberOfLabel[OPPONENT_COLOR]=0;
	for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
	 	ES[OPPONENT_COLOR][j][0] = 0;	
	for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
		whichES[OPPONENT_COLOR][j] = 0;

	index_vramY++;
	for(j=0;j<ImageSizeX;j++) {
		label[0][j] = NONE_COLOR;
		ColorOfLabel[0][j] = NONE_COLOR;		
	}
	

	for(i=1;i<ImageSizeY;i++) {		// i > 0
				index_vramY++;
	
		index_vramX=(OffsetX);
	
		index_vram++;				// j == 0		
		label[i][0] = NONE_COLOR;
		ColorOfLabel[i][0] = NONE_COLOR;
		
	
		for(j=1;j<ImageSizeX;j++) { // j > 0
		
			if(index_vramY>=479)index_vramY=479;
			else if(index_vramY<=0)index_vramY=0;
			if(index_vramX>=639)index_vramX=639;
			else if(index_vramX<=0)index_vramX=0;
		
			index_vramX+=2;
			///////////////////////////////////////////////
		
				int y,u,v,yl;
				long X_p	= long(index_vramX/2);
				long YX_p   = long((index_vramX-4)/2);
				

				long UVData = m_pOneArrayPoint[(index_vramY*320) + (X_p)];
				long YData  = m_pOneArrayPoint[(index_vramY*320) + (YX_p)];

				y  = (YData  & 0x000000ff);
				v  = ((UVData & 0xff000000)>>24);
				yl = ((YData & 0x00ff0000)>>16);
				u  = ((UVData & 0x0000ff00)>>8);

	  		
				
				int Xpoint2=0;

		
				for(Xpoint2=0;Xpoint2<2;){
					  if(Xpoint2==1){
							  j++;
							  y=yl;
							}
							Xpoint2++;

	  								whichColor = NONE_COLOR;
										if( y >= OpponentColor[0] && y <= OpponentColor[1] && u >= OpponentColor[2] && u <= OpponentColor[3] && v >= OpponentColor[4] && v <= OpponentColor[5])
										  {
										  whichColor = OPPONENT_COLOR;
										  }


								
									if(whichColor == NONE_COLOR){
										label[i][j] = -1;
										ColorOfLabel[i][j] = -1;
									}
									else {  //if(i>0 && j>0 && whichColor > -1){
										ColorOfLabel[i][j] = whichColor;
										UpperLabel = label[i-1][j];
										LeftLabel = label[i][j-1];
										ColorOfUpperLabel = ColorOfLabel[i-1][j];
										ColorOfLeftLabel = ColorOfLabel[i][j-1];
				  						   
										if(whichColor == ColorOfUpperLabel && whichColor != ColorOfLeftLabel)
				  						  label[i][j] = UpperLabel;
										else if(whichColor != ColorOfUpperLabel && whichColor == ColorOfLeftLabel)
				  						  label[i][j] = LeftLabel;
										
										else if(whichColor == ColorOfUpperLabel && whichColor == ColorOfLeftLabel){
				  						  ///////////////////////////////////////////////////////
				  						  // 
									 	if(UpperLabel == LeftLabel)   
												label[i][j] = UpperLabel;
                                    
				  						  else{
												label[i][j] = UpperLabel;
												
												///////////////////////////////////////////////////////
												//
												if(whichES[whichColor][UpperLabel] && !whichES[whichColor][LeftLabel]){
													indexES1 = whichES[whichColor][UpperLabel];
													ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], LeftLabel);
													WhereAppended = ES[whichColor][indexES1][1] + 3;
													if(WhereAppended < MAX_NUM_ELABEL){
							  						  ES[whichColor][indexES1][WhereAppended] = LeftLabel;
							  						  ES[whichColor][indexES1][1]++;
							  						  whichES[whichColor][LeftLabel] = indexES1;
													}
													else
							  						  NoError = FALSE;
												}
												// 2.1)
												else if(!whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel]){
													indexES2 = whichES[whichColor][LeftLabel];
													ES[whichColor][indexES2][2] = min(ES[whichColor][indexES2][2], UpperLabel);
													WhereAppended = ES[whichColor][indexES2][1] + 3;
													if(WhereAppended < MAX_NUM_ELABEL){
							  						  ES[whichColor][indexES2][WhereAppended] = UpperLabel;
							  						  ES[whichColor][indexES2][1]++;
							  						  whichES[whichColor][UpperLabel] = indexES2;
													}
													else
							  						  NoError = FALSE;
												}
												//////////////////////////////////////////////////////
												// 
												else if(whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel] &&
							  						  whichES[whichColor][UpperLabel] != whichES[whichColor][LeftLabel] ){
													if(LeftLabel==-1 || UpperLabel==-1)break;
													indexES1 = whichES[whichColor][UpperLabel];
													indexES2 = whichES[whichColor][LeftLabel];
													sizeES1 = ES[whichColor][indexES1][1];
													sizeES2 = ES[whichColor][indexES2][1];
													ES[whichColor][indexES2][0] = 0;	// invalidation of LeftLabel's ES
													ES[whichColor][indexES1][1] = sizeES1 + sizeES2; // summation of sizes of two ES's
													ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], ES[whichColor][indexES2][2]);
													SumOfSize = sizeES1 + sizeES2 + 3;
													if(SumOfSize <= MAX_NUM_ELABEL){
							  						  index=0;
							  						  for(WhereAppended = sizeES1 + 3; WhereAppended < SumOfSize; WhereAppended++){ 
															tmpLabel = ES[whichColor][indexES2][index+3];
															index++;
															ES[whichColor][indexES1][WhereAppended] = tmpLabel;
															whichES[whichColor][tmpLabel] = indexES1;
							  						  }
													}
													else
							  						  NoError = FALSE;
												}
				  						  } 
										}
										///////////////////////////////////////////////////////
										// 
										else if(whichColor != ColorOfUpperLabel && whichColor != ColorOfLeftLabel){
				  						  indexes_whichcolor = indexES[whichColor];
				  						  numberoflabel_whichcolor = NumberOfLabel[whichColor];
				  						  if(indexes_whichcolor < PARTIAL_MAXNUMESET_1 && numberoflabel_whichcolor < PARTIAL_MAXNUMLABEL_1){
												indexES[whichColor]++;
												NumberOfLabel[whichColor]++;		// 
												indexes_whichcolor++;
												numberoflabel_whichcolor++;			// 
												label[i][j] = numberoflabel_whichcolor;
												ES[whichColor][indexes_whichcolor][0] = 1;							// ES valid flag
												ES[whichColor][indexes_whichcolor][1] = 1;							// # of label (size of ES)
												ES[whichColor][indexes_whichcolor][2] = numberoflabel_whichcolor;
												ES[whichColor][indexes_whichcolor][3] = numberoflabel_whichcolor;
												whichES[whichColor][numberoflabel_whichcolor] = indexes_whichcolor;
				  						  }
				  						  else
												NoError = FALSE;
										}
									}
			}
		} // for j



	}

		
	if(NoError == TRUE){ 

			NumberOfComponent[OPPONENT_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[OPPONENT_COLOR];indexes_whichcolor++)
				if(ES[OPPONENT_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[OPPONENT_COLOR][indexes_whichcolor] = NumberOfComponent[OPPONENT_COLOR];
					NumberOfComponent[OPPONENT_COLOR]++;
				}
			for(j=0;j < NumberOfComponent[OPPONENT_COLOR]; j++)
				PixelSizeOfComponent[OPPONENT_COLOR][j] = 0;
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == OPPONENT_COLOR) {			
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
						Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;
					}
			
			for(whichcomponent=0;whichcomponent<NumberOfComponent[OPPONENT_COLOR];whichcomponent++){
				SumOfX[OPPONENT_COLOR][whichcomponent] = 0;
				SumOfY[OPPONENT_COLOR][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];index++){
					SumOfX[OPPONENT_COLOR][whichcomponent] += Component[OPPONENT_COLOR][whichcomponent][index][0];
					SumOfY[OPPONENT_COLOR][whichcomponent] += Component[OPPONENT_COLOR][whichcomponent][index][1];
				}
				if(PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent]!=0){
						CenterXOfComponent[OPPONENT_COLOR][whichcomponent] = SumOfX[OPPONENT_COLOR][whichcomponent] / PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];
						CenterYOfComponent[OPPONENT_COLOR][whichcomponent] = SumOfY[OPPONENT_COLOR][whichcomponent] / PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];
					  }
			}
		
	}
	PixelOfSize=1;
	DetermineComponentsOfOppBigTeamColor();
	if(NumberOfOpponnetColors<=0)return FALSE;
	else return TRUE;
	return FALSE;
}

void VisionSys::FindOpponent(short whichRobot, short OffX, short OffY)
{
	short size, maxsize, candidate, whichcomponent;
	maxsize = 0;
	candidate =0;
	whichcomponent=0;
	for(whichcomponent=0;whichcomponent<NumberOfComponent[OPPONENT_COLOR];whichcomponent++){
		size = PixelSizeOfComponent[OPPONENT_COLOR][whichcomponent];
		if(size > maxsize && size > LowerBoundOfBallSize && size < UpperBoundOfBallSize) {
			maxsize = size;
			candidate = whichcomponent;
		}
	}

	if(maxsize>0){
		SumOfX[OPPONENT_COLOR][candidate] = 0;
		SumOfY[OPPONENT_COLOR][candidate] = 0;
		for(index=0;index<PixelSizeOfComponent[OPPONENT_COLOR][candidate];index++){
			SumOfX[OPPONENT_COLOR][candidate] += Component[OPPONENT_COLOR][candidate][index][0];
			SumOfY[OPPONENT_COLOR][candidate] += Component[OPPONENT_COLOR][candidate][index][1];
		}
		iPositionOfOpponent[whichRobot][0] = SumOfX[OPPONENT_COLOR][candidate] / PixelSizeOfComponent[OPPONENT_COLOR][candidate];
		iPositionOfOpponent[whichRobot][1] = SumOfY[OPPONENT_COLOR][candidate] / PixelSizeOfComponent[OPPONENT_COLOR][candidate];
		iPositionOfOpponent[whichRobot][0] += OffX;
		iPositionOfOpponent[whichRobot][1] += OffY;
		bFlagOpponentFound[whichRobot] = TRUE;
	}	
	else{

		bFlagOpponentFound[whichRobot] = FALSE;
	}
}

void VisionSys::GetOpponentRobotPosition(RobotObj *OppRobot)
{
	for(int whichrobot=HOME1;whichrobot <= HGOALIE;whichrobot++)

	{
		OppRobot[whichrobot].X =iPositionOfOpponent[whichrobot][0];//iPositionOfHomeRobot[whichrobot][0];
		OppRobot[whichrobot].Y =iPositionOfOpponent[whichrobot][1];//iPositionOfHomeRobot[whichrobot][1];
		OppRobot[whichrobot].angle =0;//AngleOfHomeRobot[whichrobot];
	}

		
}

void VisionSys::HomRobotTeamSearch()
{

	short size, maxsize,whichcomponent;
	maxsize = 0;
	int component[100][2],cnt1,cnt,temp[2];
	cnt =0;
	long	OffsetX, OffsetY;
	
	for(int cnt1=0;cnt1<5;cnt1++){
		bFlagHomeRobotFound[cnt1] = FALSE;
		m_pBackUpTeamColorPoint[cnt1].y=m_pBackUpTeamColorPoint[cnt1].x=0;
	}
	for(cnt1=0;cnt1<100;cnt1++)
		component[cnt1][0]=component[cnt1][1]=0;

	

	for(whichcomponent=0; whichcomponent<NumberOfComponent[TEAM_COLOR]; whichcomponent++){
		size = PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
		if(size > 0 && size < 20){

			component[cnt][0]=size;
			component[cnt][1]=whichcomponent;
			cnt++;
		
		}
	}
	
	for(int i =0;i<cnt;i++)
		for(int j=i;j<cnt;j++)
			if(component[i][0]<component[j][0])
			{

				temp[0]=component[i][0];
				temp[1]=component[i][1];

			    component[i][0]=component[j][0];
				component[i][1]=component[j][1];

				component[j][0]=temp[0];
				component[j][1]=temp[1];

			}	
			int objectRobot;

			POINT point[30];
		
			CComponentBackUp   TeamColorBackUp[100];
			
			if(cnt > 20){
				global_IDDebug.Format(_T("Two Many Team Color Pixel"));
			return ;  
			}
		
			for(cnt1=0;cnt1<cnt;cnt1++)
			{
				
				point[cnt1].x = CenterXOfComponent[TEAM_COLOR][component[cnt1][1]];
				point[cnt1].y  = CenterYOfComponent[TEAM_COLOR][component[cnt1][1]];

			}
		
			for(cnt1=0;cnt1<cnt;cnt1++)
			{
				DetermineOffsetXY(point[cnt1].x*5, point[cnt1].y*5, PARTIAL_IMAGE_SIZE_OPP, &OffsetX, &OffsetY);

				if(TRUE==TeamColorLocalLabeling(OffsetX, OffsetY, PARTIAL_IMAGE_SIZE_OPP, PARTIAL_IMAGE_SIZE_OPP))
				{
					for(int cntOfColor =0;cntOfColor <this->NumberOfBigTeamColors;cntOfColor++)
					{
						int whichcomponent12 = WhichComponentOfBigTeamColor[cntOfColor];
						TeamColorBackUp[cnt1].componentposion[cntOfColor].x = CenterXOfComponent[TEAM_COLOR][whichcomponent12];
						TeamColorBackUp[cnt1].componentposion[cntOfColor].y = CenterYOfComponent[TEAM_COLOR][whichcomponent12];
						TeamColorBackUp[cnt1].OffSet[cntOfColor].x = OffsetX;
						TeamColorBackUp[cnt1].OffSet[cntOfColor].y = OffsetY;
						TeamColorBackUp[cnt1].numberofcolor++;
					}
				}
			}

		
			for(int cnt12=0;cnt12<cnt;cnt12++)
				{
				POINT pT;
				pT.x=TeamColorBackUp[cnt12].componentposion[0].x+TeamColorBackUp[cnt12].OffSet[0].x;
				pT.y=TeamColorBackUp[cnt12].componentposion[0].y+TeamColorBackUp[cnt12].OffSet[0].y;
				if((pT.x > 640 &&pT.x < 0 )||(pT.y > 480  && pT.y < 0)) continue;
				DetermineOffsetXY((short)pT.x, (short)pT.y, PARTIAL_IMAGE_SIZE, &OffsetX, &OffsetY);
				objectRobot=LocalTaemLabelingPartialImage(OffsetX, OffsetY, PARTIAL_IMAGE_SIZE, PARTIAL_IMAGE_SIZE);
				
				if(objectRobot<10){
					if((objectRobot== HOME1 || objectRobot== HOME2))
					{
				//*
						if(NUM3_OR_NUM4_RobotIdColor_Check(3, (short)OffsetX, (short)OffsetY,
							TeamColorBackUp[cnt12].componentposion[0],TeamColorBackUp[cnt12].OffSet[0]))
						{
							CString str;
							

							BOOL TemprobotFoundflag;	// temp of Robotfound 
							short tempPositionOfHomeRobot[2], tempAngleOfHomeRobot;

							TemprobotFoundflag = bFlagHomeRobotFound[objectRobot];

							tempPositionOfHomeRobot[0]=iPositionOfHomeRobot[objectRobot][0];
							tempPositionOfHomeRobot[1]=iPositionOfHomeRobot[objectRobot][1];
							tempAngleOfHomeRobot=iAngleOfHomeRobot[objectRobot];

							iPositionOfHomeRobot[objectRobot][0]	=	0;
							iPositionOfHomeRobot[objectRobot][1]	=	0;
							iAngleOfHomeRobot[objectRobot]			=	0;

							
							FindHomeRobot2Color(objectRobot, (short)OffsetX, (short)OffsetY,TeamColorBackUp[cnt12].componentposion[0]
							,TeamColorBackUp[cnt12].OffSet[0]);

							bFlagHomeRobotFound[3+objectRobot] = bFlagHomeRobotFound[objectRobot];

							if(bFlagHomeRobotFound[objectRobot] == TRUE)
							{
							//	if( iPositionOfHomeRobot[objectRobot][0] )
								iPositionOfHomeRobot[objectRobot+3][0]	=	iPositionOfHomeRobot[objectRobot][0];
								iPositionOfHomeRobot[objectRobot+3][1]	=	iPositionOfHomeRobot[objectRobot][1];
								iAngleOfHomeRobot[objectRobot+3]		=	iAngleOfHomeRobot[objectRobot];
								
							}

							

							iPositionOfHomeRobot[objectRobot][0]	=	tempPositionOfHomeRobot[0];
							iPositionOfHomeRobot[objectRobot][1]	=	tempPositionOfHomeRobot[1];
							iAngleOfHomeRobot[objectRobot]			=	tempAngleOfHomeRobot;
							

							bFlagHomeRobotFound[objectRobot] = TemprobotFoundflag;
							
						}
						else
							//*/
						{
							FindHomeRobot2Color(objectRobot, (short)OffsetX, (short)OffsetY,TeamColorBackUp[cnt12].componentposion[0]
							,TeamColorBackUp[cnt12].OffSet[0]);
						}

					}
					else
					{
					FindHomeRobot2Color(objectRobot, (short)OffsetX, (short)OffsetY,TeamColorBackUp[cnt12].componentposion[0]
						,TeamColorBackUp[cnt12].OffSet[0]);
					}

				

				}
				else 
					int  TempValudfge=0;
			
				if(	  (bFlagHomeRobotFound[HOME1] == TRUE)
					&&(bFlagHomeRobotFound[HOME2] == TRUE)
					&&(bFlagHomeRobotFound[HOME3] == TRUE)
					&&(bFlagHomeRobotFound[HOME4] == TRUE)
					&&(bFlagHomeRobotFound[HGOALIE] == TRUE)
					)
					{	
					break;
					}
			}
		
		
}

int VisionSys::LocalTaemLabelingPartialImage(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY)
{

int iID;	 	
	short whichcomponent;
	int teamColorCnt=0;
	// start vram address of partial image ///////////////////////////
	if(bFlagEven){
		index_vramY=OffsetY;
	}
	else{
		index_vramY=OffsetY-1;
	}
	index_vramX=(OffsetX);
	
	NoError = TRUE;
	
	
	// initialize for euql group //////////////////////////////////
	indexes_whichcolor=0;
		indexES[TEAM_COLOR]=0;
		NumberOfLabel[TEAM_COLOR]=0;
		for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
			ES[TEAM_COLOR][j][0] = 0;	// Initialization of # of labels in j-th ES of i-th color
		for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
			whichES[TEAM_COLOR][j] = 0;

		// id_color
		for(iID = ID1_COLOR;iID<=ID45_COLOR;iID++){
		
		indexES[iID]=0;
		NumberOfLabel[iID]=0;
		for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
			ES[iID][j][0] = 0;	// Initialization of # of labels in j-th ES of i-th color
		for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
			whichES[iID][j] = 0;
		}
		for(i=0;i<6;i++)localRobotFindOfComponetCont[i]=0;
		long otherRobotComponetCnt=0;
	///////////////////////////////////////////////////////
	// for first y line,

	index_vramY ++;
	for(j=0;j<ImageSizeX;j++) {
		label[0][j] = NONE_COLOR;
		ColorOfLabel[0][j] = NONE_COLOR;		// split from boundary
	}
	// for all y line,
	for(i=1;i<ImageSizeY;i++) {		// i > 0
		index_vramY++;
		if(i%2 == 1 ) {						// if odd line,
			for(j=0;j<ImageSizeX;j++) {
				label[i][j] = label[i-1][j];		// assign top label
				ColorOfLabel[i][j] = ColorOfLabel[i-1][j];
			}
		 
			continue;						// next line,
		}
	
		///////////////////////////////////////////////////
		// for first x pixel,
		//index_vra++;				// j == 0		// split boundary
		//index_vramX++;
		label[i][0] = NONE_COLOR;
		ColorOfLabel[i][0] = NONE_COLOR;
		index_vramX=(OffsetX);
		// get index_lut for all x pixel

		for(j=1;j<ImageSizeX;j++) { // j > 0
		
			if(index_vramY>=479)index_vramY=479;
			else if(index_vramY<=0)index_vramY=0;
			if(index_vramX>=639)index_vramX=639;
			else if(index_vramX<=0)index_vramX=0;
		
			index_vramX+=2;
			///////////////////////////////////////////////
			int y,u,v,yl;
			long X_p	= long(index_vramX/2);
			long YX_p   = long((index_vramX-4)/2);
				

			long UVData = m_pOneArrayPoint[(index_vramY*320) + (X_p)];
			long YData  = m_pOneArrayPoint[(index_vramY*320) + (YX_p)];

			y  = (YData  & 0x000000ff);
			v  = ((UVData & 0xff000000)>>24);
			yl = ((YData & 0x00ff0000)>>16);
			u  = ((UVData & 0x0000ff00)>>8);



				
				int Xpoint2=0;

		
				for(Xpoint2=0;Xpoint2<2;){
					  if(Xpoint2==1){
							  j++;
							  y=yl;
							}
							Xpoint2++;

						whichColor = NONE_COLOR;		
	  					if(y >= TeamColor[0] && y <= TeamColor[1] 
						&& u >= TeamColor[2] && u <= TeamColor[3]
						&& v >= TeamColor[4] && v <= TeamColor[5]) 					 
						{
	  						  whichColor = TEAM_COLOR;
						}
	  					else if(y >= IdColor[0][0] && y <= IdColor[0][1] 
						 && u >= IdColor[0][2] && u <= IdColor[0][3] 
						 && v >= IdColor[0][4] && v <= IdColor[0][5])
						{
							whichColor = ID1_COLOR;
							localRobotFindOfComponetCont[0]+=1;
											
						}
						else if(y >= IdColor[1][0] && y <= IdColor[1][1] 
						&& u >= IdColor[1][2] && u <= IdColor[1][3] 
						&& v >= IdColor[1][4] && v <= IdColor[1][5])
						{
							whichColor = ID2_COLOR;
							localRobotFindOfComponetCont[1]+=1;
						//	 
						
						}
						else if(y >= IdColor[2][0] && y <= IdColor[2][1] 
						&& u >= IdColor[2][2] && u <= IdColor[2][3] 
						&& v >= IdColor[2][4] && v <= IdColor[2][5])
						{
							whichColor = ID3_COLOR;
							localRobotFindOfComponetCont[2]+=1;
						}
						else if(y >= IdColor[3][0] && y <= IdColor[3][1] 
						&& u >= IdColor[3][2] && u <= IdColor[3][3] 
						&& v >= IdColor[3][4] && v <= IdColor[3][5])
						{
							whichColor = ID45_COLOR;
							localRobotFindOfComponetCont[3]+=1;
						}
					
							
				
						///////////////////////////////////////////////
						// need for analayse
						// sequencial connecting algorithm with 4-connect diagram
						if(whichColor == NONE_COLOR){
							label[i][j] = -1;
							ColorOfLabel[i][j] = -1;
						}
						else {  //if(i>0 && j>0 && whichColor > -1){
							ColorOfLabel[i][j] = whichColor;
							UpperLabel = label[i-1][j];
							LeftLabel = label[i][j-1];
							ColorOfUpperLabel = ColorOfLabel[i-1][j];
							ColorOfLeftLabel = ColorOfLabel[i][j-1];
				  			   
							if(whichColor == ColorOfUpperLabel && whichColor != ColorOfLeftLabel)
				  			  label[i][j] = UpperLabel;
							else if(whichColor != ColorOfUpperLabel && whichColor == ColorOfLeftLabel)
				  			  label[i][j] = LeftLabel;
							
							else if(whichColor == ColorOfUpperLabel && whichColor == ColorOfLeftLabel){
				  			  ///////////////////////////////////////////////////////
				  			  // 2.2) have same label in neighbor two pixel
				  			  if(UpperLabel == LeftLabel)
									label[i][j] = UpperLabel;

				  			  else{
									label[i][j] = UpperLabel;
									
									///////////////////////////////////////////////////////
									// 2.1) have one label in neighbor two pixel
									if(whichES[whichColor][UpperLabel] && !whichES[whichColor][LeftLabel]){
										indexES1 = whichES[whichColor][UpperLabel];
										ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], LeftLabel);
										WhereAppended = ES[whichColor][indexES1][1] + 3;
										if(WhereAppended < MAX_NUM_ELABEL){
							  			  ES[whichColor][indexES1][WhereAppended] = LeftLabel;
							  			  ES[whichColor][indexES1][1]++;
							  			  whichES[whichColor][LeftLabel] = indexES1;
										}
										else
							  			  NoError = FALSE;
									}
									// 2.1)
									else if(!whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel]){
										indexES2 = whichES[whichColor][LeftLabel];
										ES[whichColor][indexES2][2] = min(ES[whichColor][indexES2][2], UpperLabel);
										WhereAppended = ES[whichColor][indexES2][1] + 3;
										if(WhereAppended < MAX_NUM_ELABEL){
							  			  ES[whichColor][indexES2][WhereAppended] = UpperLabel;
							  			  ES[whichColor][indexES2][1]++;
							  			  whichES[whichColor][UpperLabel] = indexES2;
										}
										else
							  			  NoError = FALSE;
									}
									//////////////////////////////////////////////////////
									// 2.3) have different label in two neighbor  pixel
									else if(whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel] &&
							  			  whichES[whichColor][UpperLabel] != whichES[whichColor][LeftLabel] ){
										if(LeftLabel==-1 || UpperLabel==-1)break;
										indexES1 = whichES[whichColor][UpperLabel];
										indexES2 = whichES[whichColor][LeftLabel];
										
										sizeES1 = ES[whichColor][indexES1][1];
										sizeES2 = ES[whichColor][indexES2][1];
										ES[whichColor][indexES2][0] = 0;	// invalidation of LeftLabel's ES
										ES[whichColor][indexES1][1] = sizeES1 + sizeES2; // summation of sizes of two ES's
										ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], ES[whichColor][indexES2][2]);
										SumOfSize = sizeES1 + sizeES2 + 3;
										if(SumOfSize <= MAX_NUM_ELABEL){
							  			  index=0;
							  			  for(WhereAppended = sizeES1 + 3; WhereAppended < SumOfSize; WhereAppended++){ 
												tmpLabel = ES[whichColor][indexES2][index+3];
												index++;
												ES[whichColor][indexES1][WhereAppended] = tmpLabel;
												whichES[whichColor][tmpLabel] = indexES1;
							  			  }
										}
										else
							  			  NoError = FALSE;
									}
				  			  }
							}
							///////////////////////////////////////////////////////
							// 2.4) do not have label in two neighbor pixel
							//      assign new label and save equal table
							else if(whichColor != ColorOfUpperLabel && whichColor != ColorOfLeftLabel){
				  			  indexes_whichcolor = indexES[whichColor];
				  			  numberoflabel_whichcolor = NumberOfLabel[whichColor];
				  			  if(indexes_whichcolor < PARTIAL_MAXNUMESET_1 && numberoflabel_whichcolor < PARTIAL_MAXNUMLABEL_1){
									indexES[whichColor]++;
									NumberOfLabel[whichColor]++;		// new label
									indexes_whichcolor++;
								
									numberoflabel_whichcolor++;			// new label
									label[i][j] = numberoflabel_whichcolor;
									ES[whichColor][indexes_whichcolor][0] = 1;							// ES valid flag
									ES[whichColor][indexes_whichcolor][1] = 1;							// # of label (size of ES)
									ES[whichColor][indexes_whichcolor][2] = numberoflabel_whichcolor;
									ES[whichColor][indexes_whichcolor][3] = numberoflabel_whichcolor;
									whichES[whichColor][numberoflabel_whichcolor] = indexes_whichcolor;
				  			  }
				  			  else
									NoError = FALSE;
							}
						}
				}
		} 

	}

	int size=0,object=0,findRobot=0;
 	for(iID = 0;iID<3;iID++){
		if(size< localRobotFindOfComponetCont[iID]
			&& localRobotFindOfComponetCont[iID] >= LowerBoundOfSmallIDSize 
			&& localRobotFindOfComponetCont[iID] <= UpperBoundOfSmallIDSize 
			){
			if(iID!=3)
			{
				object=iID;
				findRobot=1;
				size=localRobotFindOfComponetCont[iID];
			}
		}
	}
	if(object!=2)
	{
	
				IdComponentsCalculate(3);	
	
	}
	


	if(NoError == TRUE){ 

			NumberOfComponent[TEAM_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[TEAM_COLOR];indexes_whichcolor++)
				if(ES[TEAM_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[TEAM_COLOR][indexes_whichcolor] = NumberOfComponent[TEAM_COLOR];
					NumberOfComponent[TEAM_COLOR]++;
				}

			for(j=0;j < NumberOfComponent[TEAM_COLOR]; j++)
				PixelSizeOfComponent[TEAM_COLOR][j] = 0;
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == TEAM_COLOR) 
					{
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
					
						Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;
					}
			for(whichcomponent=0;whichcomponent<NumberOfComponent[TEAM_COLOR];whichcomponent++){
				SumOfX[TEAM_COLOR][whichcomponent] = 0;
				SumOfY[TEAM_COLOR][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[TEAM_COLOR][whichcomponent];index++){
					SumOfX[TEAM_COLOR][whichcomponent] += Component[TEAM_COLOR][whichcomponent][index][0];
					SumOfY[TEAM_COLOR][whichcomponent] += Component[TEAM_COLOR][whichcomponent][index][1];
				}
				if(PixelSizeOfComponent[TEAM_COLOR][whichcomponent]!=0){
						CenterXOfComponent[TEAM_COLOR][whichcomponent] = SumOfX[TEAM_COLOR][whichcomponent] / PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
						CenterYOfComponent[TEAM_COLOR][whichcomponent] = SumOfY[TEAM_COLOR][whichcomponent] / PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
					  }
			}
		if(findRobot==1);
		else {
			object=10;
			return 10;
			}

		IdComponentsCalculate(object);
	}
/*
	CString str;
	if(bFlagEven==1)
	str.Format("Robot1 Find %d,  %d ,%d",bFlagHomeRobotFound[HOME1],NoError,object);
	global_IDDebug+=str;
*/
	return object;
	
}

bool VisionSys::TeamColorLocalLabeling(long OffsetX, long OffsetY, long ImageSizeX, long ImageSizeY)
{
	
//int iID;	 	// Choi.W.H  2000.02.18 
	short whichcomponent;
	int teamColorCnt=0;
	// start vram address of partial image ///////////////////////////
	if(bFlagEven){
		index_vramY=OffsetY;
	}
	else{
		index_vramY=OffsetY-1;
	}
	index_vramX=(OffsetX);
	
	NoError = TRUE;
	
	
	// initialize for euql group //////////////////////////////////
	indexes_whichcolor=0;
		indexES[TEAM_COLOR]=0;
		NumberOfLabel[TEAM_COLOR]=0;
		for(j=0;j<PARTIAL_MAX_NUM_ESET;j++)
			ES[TEAM_COLOR][j][0] = 0;	// Initialization of # of labels in j-th ES of i-th color
		for(j=0;j<PARTIAL_MAX_NUM_LABEL;j++)
			whichES[TEAM_COLOR][j] = 0;

		// id_color
	///////////////////////////////////////////////////////
	// for first y line,

	index_vramY ++;
	for(j=0;j<ImageSizeX;j++) {
		label[0][j] = NONE_COLOR;
		ColorOfLabel[0][j] = NONE_COLOR;		// split from boundary
	}
//	return 0;
	// for all y line,
	for(i=1;i<ImageSizeY;i++) {		// i > 0
		index_vramY++;
		if(i%2 == 1 ) {						// if odd line,
			for(j=0;j<ImageSizeX;j++) {
				label[i][j] = label[i-1][j];		// assign top label
				ColorOfLabel[i][j] = ColorOfLabel[i-1][j];
			}
		 
			continue;						// next line,
		}
	
		///////////////////////////////////////////////////
		// for first x pixel,
		//index_vra++;				// j == 0		// split boundary
		//index_vramX++;
		label[i][0] = NONE_COLOR;
		ColorOfLabel[i][0] = NONE_COLOR;
		index_vramX=(OffsetX);
		// get index_lut for all x pixel

		for(j=1;j<ImageSizeX;j++) { // j > 0
			//index_lut = ((long *)PointPhys)[index_vram] & 0x00ffffff;
			if(index_vramY>=479)index_vramY=479;
			else if(index_vramY<=0)index_vramY=0;
			if(index_vramX>=639)index_vramX=639;
			else if(index_vramX<=0)index_vramX=0;
		
			index_vramX+=2;
	
				int y,u,v,yl;
				long X_p	= long(index_vramX/2);
				long YX_p   = long((index_vramX-4)/2);
				

				long UVData = m_pOneArrayPoint[(index_vramY*320) + (X_p)];
				long YData  = m_pOneArrayPoint[(index_vramY*320) + (YX_p)];

				y  = (YData  & 0x000000ff);
				v  = ((UVData & 0xff000000)>>24);
				yl = ((YData & 0x00ff0000)>>16);
				u  = ((UVData & 0x0000ff00)>>8);



				
				int Xpoint2=0;

		
				for(Xpoint2=0;Xpoint2<2;){
					  if(Xpoint2==1){
							  j++;
							  y=yl;
							}
							Xpoint2++;

				  whichColor = NONE_COLOR;		
	  			  if(y >= TeamColor[0] && y <= TeamColor[1] && u >= TeamColor[2] && u <= TeamColor[3] && v >= TeamColor[4] && v <= TeamColor[5]) 					 
				  {
	  					whichColor = TEAM_COLOR;
				  }
				  	
	  	
				  ///////////////////////////////////////////////
				  // need for analayse
				  // sequencial connecting algorithm with 4-connect diagram
				  if(whichColor == NONE_COLOR){
				  	label[i][j] = -1;
				  	ColorOfLabel[i][j] = -1;
				  }
				  else {  //if(i>0 && j>0 && whichColor > -1){
				  	ColorOfLabel[i][j] = whichColor;
				  	UpperLabel = label[i-1][j];
				  	LeftLabel = label[i][j-1];
				  	ColorOfUpperLabel = ColorOfLabel[i-1][j];
				  	ColorOfLeftLabel = ColorOfLabel[i][j-1];
				  		 
				  	if(whichColor == ColorOfUpperLabel && whichColor != ColorOfLeftLabel)
				  		label[i][j] = UpperLabel;
				  	else if(whichColor != ColorOfUpperLabel && whichColor == ColorOfLeftLabel)
				  		label[i][j] = LeftLabel;
				  	
				  	else if(whichColor == ColorOfUpperLabel && whichColor == ColorOfLeftLabel){
				  		///////////////////////////////////////////////////////
				  		// 2.2) have same label in neighbor two pixel
				  		if(UpperLabel == LeftLabel)
							  label[i][j] = UpperLabel;

				  		else{
							  label[i][j] = UpperLabel;
							  
							  ///////////////////////////////////////////////////////
							  // 2.1) have one label in neighbor two pixel
							  if(whichES[whichColor][UpperLabel] && !whichES[whichColor][LeftLabel]){
							  	indexES1 = whichES[whichColor][UpperLabel];
							  	ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], LeftLabel);
							  	WhereAppended = ES[whichColor][indexES1][1] + 3;
							  	if(WhereAppended < MAX_NUM_ELABEL){
							  		ES[whichColor][indexES1][WhereAppended] = LeftLabel;
							  		ES[whichColor][indexES1][1]++;
							  		whichES[whichColor][LeftLabel] = indexES1;
							  	}
							  	else
								{
									NoError = FALSE;
									
								}
							  }
							  // 2.1)
							  else if(!whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel]){
							  	indexES2 = whichES[whichColor][LeftLabel];
							  	ES[whichColor][indexES2][2] = min(ES[whichColor][indexES2][2], UpperLabel);
							  	WhereAppended = ES[whichColor][indexES2][1] + 3;
							  	if(WhereAppended < MAX_NUM_ELABEL){
							  		ES[whichColor][indexES2][WhereAppended] = UpperLabel;
							  		ES[whichColor][indexES2][1]++;
							  		whichES[whichColor][UpperLabel] = indexES2;
							  	}
							  	else
							  		NoError = FALSE;
							  }
							  //////////////////////////////////////////////////////
							  // 2.3) have different label in two neighbor  pixel
							  else if(whichES[whichColor][UpperLabel] && whichES[whichColor][LeftLabel] &&
							  		whichES[whichColor][UpperLabel] != whichES[whichColor][LeftLabel] ){
							  	if(LeftLabel==-1 || UpperLabel==-1)break;
							  	indexES1 = whichES[whichColor][UpperLabel];
							  	indexES2 = whichES[whichColor][LeftLabel];
							  	
							  	sizeES1 = ES[whichColor][indexES1][1];
							  	sizeES2 = ES[whichColor][indexES2][1];
							  	ES[whichColor][indexES2][0] = 0;	// invalidation of LeftLabel's ES
							  	ES[whichColor][indexES1][1] = sizeES1 + sizeES2; // summation of sizes of two ES's
							  	ES[whichColor][indexES1][2] = min(ES[whichColor][indexES1][2], ES[whichColor][indexES2][2]);
							  	SumOfSize = sizeES1 + sizeES2 + 3;
							  	if(SumOfSize <= MAX_NUM_ELABEL){
							  		index=0;
							  		for(WhereAppended = sizeES1 + 3; WhereAppended < SumOfSize; WhereAppended++){ 
										  tmpLabel = ES[whichColor][indexES2][index+3];
										  index++;
										  ES[whichColor][indexES1][WhereAppended] = tmpLabel;
										  whichES[whichColor][tmpLabel] = indexES1;
							  		}
							  	}
							  	else
							  		NoError = FALSE;
							  }
				  		}
				  	}
				  	///////////////////////////////////////////////////////
				  	// 2.4) do not have label in two neighbor pixel
				  	//      assign new label and save equal table
				  	else if(whichColor != ColorOfUpperLabel && whichColor != ColorOfLeftLabel){
				  		indexes_whichcolor = indexES[whichColor];
				  		numberoflabel_whichcolor = NumberOfLabel[whichColor];
				  		if(indexes_whichcolor < PARTIAL_MAXNUMESET_1 && numberoflabel_whichcolor < PARTIAL_MAXNUMLABEL_1){
							  indexES[whichColor]++;
							  NumberOfLabel[whichColor]++;		// new label
							  indexes_whichcolor++;

							  numberoflabel_whichcolor++;			// new label
							  label[i][j] = numberoflabel_whichcolor;
							  ES[whichColor][indexes_whichcolor][0] = 1;							// ES valid flag
							  ES[whichColor][indexes_whichcolor][1] = 1;							// # of label (size of ES)
							  ES[whichColor][indexes_whichcolor][2] = numberoflabel_whichcolor;
							  ES[whichColor][indexes_whichcolor][3] = numberoflabel_whichcolor;
							  whichES[whichColor][numberoflabel_whichcolor] = indexes_whichcolor;
				  		}
				  		else
							  NoError = FALSE;
				  	}
				}
			}
		} // for j

	}
	//return 0;

	
	if(NoError == TRUE){ 

			NumberOfComponent[TEAM_COLOR]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[TEAM_COLOR];indexes_whichcolor++)
				if(ES[TEAM_COLOR][indexes_whichcolor][0] == 1 ){
					whichComponent[TEAM_COLOR][indexes_whichcolor] = NumberOfComponent[TEAM_COLOR];
					NumberOfComponent[TEAM_COLOR]++;
				}

			for(j=0;j < NumberOfComponent[TEAM_COLOR]; j++)
				PixelSizeOfComponent[TEAM_COLOR][j] = 0;
			for(i=0;i<ImageSizeY;i++)
				for(j=0;j<ImageSizeX;j++)
					if(ColorOfLabel[i][j] == TEAM_COLOR) {
		
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
					
						Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;

					}
		
		for(whichcomponent=0;whichcomponent<NumberOfComponent[TEAM_COLOR];whichcomponent++){
				SumOfX[TEAM_COLOR][whichcomponent] = 0;
				SumOfY[TEAM_COLOR][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[TEAM_COLOR][whichcomponent];index++){
					SumOfX[TEAM_COLOR][whichcomponent] += Component[TEAM_COLOR][whichcomponent][index][0];
					SumOfY[TEAM_COLOR][whichcomponent] += Component[TEAM_COLOR][whichcomponent][index][1];
				}
				if(PixelSizeOfComponent[TEAM_COLOR][whichcomponent]!=0){
				CenterXOfComponent[TEAM_COLOR][whichcomponent] = SumOfX[TEAM_COLOR][whichcomponent] / PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
				CenterYOfComponent[TEAM_COLOR][whichcomponent] = SumOfY[TEAM_COLOR][whichcomponent] / PixelSizeOfComponent[TEAM_COLOR][whichcomponent];
				}
			}

	}

	PixelOfSize=1;
	this->DetermineComponentsOfBigTeamColor(); 
	if(this->NumberOfBigTeamColors<=0)return FALSE;
	else return TRUE;
	return FALSE;
}

void VisionSys::FindHomeRobot2Color(short whichRobot, short OffX, short OffY, POINT PositionOfTeamcolor, POINT TeamColorOffSet)
{

	
	short whichcomponent, whichcomponent_nearest;	//index_bigteam, 
	short index_smallid;//whichidcolor, , index_smallid_nearest
	short cx, cy, idx[3], idy[3];		//, angle, bx, by, 
	long min_distance;			// distance, dx, dy, 
	double dAngle;		// Choi.W.H  2000.02.18
	bool sameflag=false;

	DetermineComponentsOfBigTeamColor();
	DetermineComponentsOfSmallIDColor(whichRobot);
 
	int iID = ID1_COLOR + whichRobot-HOME1,CntOfcomponent=0;
	short size, maxsize, candidate, bigteam_component;
	bigteam_component=0;
	bFlagHomeRobotFound[whichRobot] = FALSE;

	if(NumberOfSmallIDColors[whichRobot-HOME1] == 0 ) {
		return ;
	}
	

	candidate = -1;
	maxsize = 0;

	int dist=DistanceBetweenBigTeamAndSmallID;
	if(PixelOfSize>2)dist=5;

	for(index_smallid = 0; index_smallid < NumberOfSmallIDColors[whichRobot-HOME1]; index_smallid++) {
		whichcomponent = WhichComponentOfSmallIDColor[whichRobot-HOME1][index_smallid];

	short index_bigteam, whichcomponent12;
	long dx, dy, distance;

	min_distance = 100000000;

	
	for(index_bigteam = 0; index_bigteam < NumberOfBigTeamColors; index_bigteam++) {
		whichcomponent12 = WhichComponentOfBigTeamColor[index_bigteam];
		dx = PositionOfTeamcolor.x  - CenterXOfComponent[iID][whichcomponent];
		dy = PositionOfTeamcolor.y  - CenterYOfComponent[iID][whichcomponent];
		distance = dx*dx + dy*dy;
		if(distance < min_distance) {
				min_distance = distance;
				bigteam_component = whichcomponent12;	
				CntOfcomponent++;
		}
		
	}
	if(min_distance > dist * dist*5)
		continue;
		
		size = PixelSizeOfComponent[iID][whichcomponent];

	
		if(size > maxsize) {
			maxsize = size;
			candidate = whichcomponent;
			whichcomponent_nearest = bigteam_component;
		}
	}
	if(candidate==-1) {
		bFlagHomeRobotFound[whichRobot] = FALSE;
		return;
	}


	idx[0] = CenterXOfComponent[iID][candidate];
	idy[0] = CenterYOfComponent[iID][candidate];
			
	int diffX=OffX-TeamColorOffSet.x;
	int diffY=OffY-TeamColorOffSet.y;



	cx = PositionOfTeamcolor.x-diffX;
	cy = PositionOfTeamcolor.y-diffY;

	iPositionOfHomeRobot[whichRobot][0] = (short)((cx + idx[0])/2. + OffX)*PixelOfSize;	// 위치갱신
	iPositionOfHomeRobot[whichRobot][1] = (short)((cy + idy[0])/2. + OffY)*PixelOfSize;
	bFlagHomeRobotFound[whichRobot] = TRUE;
	
	///////////////////////////////////////////////////////
	// If the robot is found, the robot angle is calculated using (cx, cy), (idx[0],idy[0]), whichcomponent. 
	if(bFlagHomeRobotFound[whichRobot] == TRUE) {

		dAngle = atan2(double(idy[0]) - double(cy), double(cx) - double(idx[0])) - 3*M_PI / 4.;

		// degree) ///////////////////////////
		iAngleOfHomeRobot[whichRobot] = (short)(180. / M_PI * dAngle);
	}

}

void VisionSys::IdComponentsCalculate(int object)
{
	short whichcomponent,iID;

	switch(object) {

		case HOME1 :
		case HOME2 :
		case HOME3 :
		case HOME4 :
		case HGOALIE :
		/////////////////////////////////////////////////
		// Choi.W.H  2000.02.18 
		// count for component, initialize component pixel
			
		// team_color
		
		// id_color
			iID = ID1_COLOR + object-HOME1;
			NumberOfComponent[iID]=0;	
			for(indexes_whichcolor = 1;indexes_whichcolor <= indexES[iID];indexes_whichcolor++)
				if(ES[iID][indexes_whichcolor][0] == 1 ){
					whichComponent[iID][indexes_whichcolor] = NumberOfComponent[iID];
					NumberOfComponent[iID]++;
				}

			for(j=0;j < NumberOfComponent[iID]; j++)
				PixelSizeOfComponent[iID][j] = 0;

			// Component[] 
			// count for component pixel
			
			for(i=0;i<PARTIAL_IMAGE_SIZE;i++)
				for(j=0;j<PARTIAL_IMAGE_SIZE;j++)
					if(ColorOfLabel[i][j] == iID) {
						whichColor = ColorOfLabel[i][j];
						indexes_whichcolor = whichES[whichColor][label[i][j]];
						whichcomponent = whichComponent[whichColor][indexes_whichcolor];
						index = PixelSizeOfComponent[whichColor][whichcomponent];
					
						Component[whichColor][whichcomponent][index][0] = j;	
						Component[whichColor][whichcomponent][index][1] = i;	
						if(index < MAXPIXSIZE_1)
							PixelSizeOfComponent[whichColor][whichcomponent]++;	
						else
							NoError = FALSE;

					}

			
			for(whichcomponent=0;whichcomponent<NumberOfComponent[iID];whichcomponent++){
				SumOfX[iID][whichcomponent] = 0;
				SumOfY[iID][whichcomponent] = 0;
				for(index=0;index<PixelSizeOfComponent[iID][whichcomponent];index++){
					SumOfX[iID][whichcomponent] += Component[iID][whichcomponent][index][0];
					SumOfY[iID][whichcomponent] += Component[iID][whichcomponent][index][1];
				}
				if(PixelSizeOfComponent[iID][whichcomponent]!=0){
						CenterXOfComponent[iID][whichcomponent] = SumOfX[iID][whichcomponent] / PixelSizeOfComponent[iID][whichcomponent];
						CenterYOfComponent[iID][whichcomponent] = SumOfY[iID][whichcomponent] / PixelSizeOfComponent[iID][whichcomponent];
					  }
			}
					
			break;
		}
}

void VisionSys::SaveFileConfig(const char *FileName)
{
	FILE *fp; 
	long	i;

	if((fp = fopen(FileName, "w")) == NULL)
			AfxMessageBox(_T("File Open Error"));
	else {
		fprintf(fp, "%d ", rectBoundary.top);
		fprintf(fp, "%d ", rectBoundary.left);
		fprintf(fp, "%d ", rectBoundary.bottom);
		fprintf(fp, "%d ", rectBoundary.right);   
		fprintf(fp,"\n");

		fprintf(fp, "%d ",LowerBoundOfBallSize);
		fprintf(fp, "%d ",UpperBoundOfBallSize);
		fprintf(fp, "%d ",LowerBoundOfBigTeamSize);
		fprintf(fp, "%d ",UpperBoundOfBigTeamSize);
		fprintf(fp, "%d ",LowerBoundOfSmallIDSize);
		fprintf(fp, "%d ",UpperBoundOfSmallIDSize);
		fprintf(fp, "%d ",LowerBoundOfOpponentSize);
		fprintf(fp, "%d\n",UpperBoundOfOpponentSize);
		fprintf(fp, "%d\n",DistanceBetweenBigTeamAndSmallID);

		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", BallColor[i]);			
		fprintf(fp,"\n"); 
		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", TeamColor[i]);			
		fprintf(fp,"\n");
		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", IdColor[0][i]);			
		fprintf(fp,"\n");
		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", IdColor[1][i]);			
		fprintf(fp,"\n");
		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", IdColor[2][i]);			
		fprintf(fp,"\n");
		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", IdColor[3][i]);			
		fprintf(fp,"\n");
		for(i = 0;i < 6;i++)
			fprintf(fp, "%d ", OpponentColor[i]);			
		fprintf(fp,"\n");

		fprintf(fp, " %d", bFlagFindBall);     
		fprintf(fp, " %d", bFlagFindHomeRobot[HOME1]);     
		fprintf(fp, " %d", bFlagFindHomeRobot[HOME2]);     
		fprintf(fp, " %d", bFlagFindHomeRobot[HGOALIE]);     
		fprintf(fp, " %d", bFlagFindOpponent[OPP1]);     
		fprintf(fp, " %d", bFlagFindOpponent[OPP2]);     
		fprintf(fp, " %d", bFlagFindOpponent[OPP3]);     
		fprintf(fp,"\n");
	
		fprintf(fp, "%d ", ColorParameter[0]);
		fprintf(fp, "%d ", ColorParameter[1]);
		fprintf(fp, "%d ", ColorParameter[2]);
		fprintf(fp, "%d ", ColorParameter[3]);
		fprintf(fp,"\n");
		fprintf(fp, "%d ", bFlagIsOurHomeLeft);
		fclose(fp);	
	}
}

void VisionSys::GetFindFlag(int *GetFind)
{
	
	for(i=0;i<5;i++)
	{
		GetFind[i]=bFlagHomeRobotFound[i];
		GetFind[5+i]=bFlagOpponentFound[i];
	}
	GetFind[10] = bFlagBallFound;
}

BOOL VisionSys::NUM3_OR_NUM4_RobotIdColor_Check(short whichRobot, short OffX, short OffY, POINT PositionOfTeamcolor, POINT TeamColorOffSet)
{

	short whichcomponent, whichcomponent_nearest;	//index_bigteam, 
	short index_smallid;//whichidcolor, , index_smallid_nearest
	long min_distance;			// distance, dx, dy, 
	bool sameflag=false;


	DetermineComponentsOfBigTeamColor();
	int kk = LowerBoundOfSmallIDSize;

	LowerBoundOfSmallIDSize= 15;
	
	DetermineComponentsOfSmallIDColor(whichRobot);
	LowerBoundOfSmallIDSize=kk;

	int iID = ID1_COLOR + whichRobot-HOME1,CntOfcomponent=0;
	short size, maxsize, candidate, bigteam_component;
	bigteam_component=0;

	// component
	if(NumberOfSmallIDColors[whichRobot-HOME1] == 0 ) {
		return FALSE;
	}
	


	candidate = -1;
	maxsize = 0;

	int dist=DistanceBetweenBigTeamAndSmallID;
	if(PixelOfSize>2)dist=5;

	for(index_smallid = 0; index_smallid < NumberOfSmallIDColors[whichRobot-HOME1]; index_smallid++) {
		whichcomponent = WhichComponentOfSmallIDColor[whichRobot-HOME1][index_smallid];

	short index_bigteam, whichcomponent12;
	long dx, dy, distance;

	min_distance = 100000000;

	
	for(index_bigteam = 0; index_bigteam < NumberOfBigTeamColors; index_bigteam++) {
		whichcomponent12 = WhichComponentOfBigTeamColor[index_bigteam];
		dx = PositionOfTeamcolor.x  - CenterXOfComponent[iID][whichcomponent];
		dy = PositionOfTeamcolor.y  - CenterYOfComponent[iID][whichcomponent];
		distance = dx*dx + dy*dy;
		if(distance < min_distance) {
				min_distance = distance;
				bigteam_component = whichcomponent12;	
				CntOfcomponent++;
		}
		
	}
	if(min_distance > dist * dist*5)
		continue;
		
		size = PixelSizeOfComponent[iID][whichcomponent];

		if(size > maxsize) {
			maxsize = size;
			candidate = whichcomponent;
			whichcomponent_nearest = bigteam_component;
		}
	}
	if(candidate==-1) {
		return FALSE;
	}

	return TRUE;
	
}

void VisionSys::EstBallPointBackUp()
{
	short size, maxsize,  whichcomponent,candidate,Est_BallCnt=0;
	short PositionArray[60],minbound;
	candidate=maxsize = -1;
	bFlagFindBall = TRUE;
	minbound=2;
	
	
	if(NumberOfComponent[BALL_COLOR] > 59 )
	{
		bFlagBallFound = FALSE;
		return; 
	}
	for(int i=0;i<60;i++)
	{
		PositionArray[i]=0;
		Est_BallPosition[i].x = 0;
		Est_BallPosition[i].y = 0;
		BackUpBallPoint[i].Position.y =0;
		BackUpBallPoint[i].Position.x =0;
		BackUpBallPoint[i].size =0;
	}
	for(whichcomponent=0; whichcomponent<NumberOfComponent[BALL_COLOR]; whichcomponent++){
		size = PixelSizeOfComponent[BALL_COLOR][whichcomponent];
		if(size >= minbound && size < UpperBoundOfBallSize/PixelOfSize){
			maxsize = size;
			PositionArray[Est_BallCnt++] = whichcomponent;

		}
	}

	if(maxsize > 0){
		for(i = 0; i < Est_BallCnt;i++)
		{

			SumOfX[BALL_COLOR][PositionArray[i]] = 0;
			SumOfY[BALL_COLOR][PositionArray[i]] = 0;
			for(index=0;index<PixelSizeOfComponent[BALL_COLOR][PositionArray[i]];index++)
			{
				SumOfX[BALL_COLOR][PositionArray[i]] += Component[BALL_COLOR][PositionArray[i]][index][0];
				SumOfY[BALL_COLOR][PositionArray[i]] += Component[BALL_COLOR][PositionArray[i]][index][1];
			}

			Est_BallPosition[i].x = SumOfX[BALL_COLOR][PositionArray[i]] / PixelSizeOfComponent[BALL_COLOR][PositionArray[i]];
			Est_BallPosition[i].y = SumOfY[BALL_COLOR][PositionArray[i]] / PixelSizeOfComponent[BALL_COLOR][PositionArray[i]];

			Est_BallPosition[i].x *= PixelOfSize;
			Est_BallPosition[i].y *= PixelOfSize;
		}

		for(i = 0; i < Est_BallCnt;i++)
		{
			long	OffsetX, OffsetY;
			DetermineOffsetXY((short)Est_BallPosition[i].x,(short)Est_BallPosition[i].y, PARTIAL_IMAGE_SIZE_OPP, &OffsetX, &OffsetY);
			LabelingPartialImage(OffsetX, OffsetY, PARTIAL_IMAGE_SIZE_OPP, PARTIAL_IMAGE_SIZE_OPP, BALL);
			BackUpBallPoint[i].size = FindBall((short)OffsetX, (short)OffsetY);

			BackUpBallPoint[i].Position.x =	iPositionOfBall[0];
			BackUpBallPoint[i].Position.y =	iPositionOfBall[1];
		}
		for(i = 0; i < Est_BallCnt;i++)
		{
			size = BackUpBallPoint[i].size;
			if(size > maxsize && size >= minbound && size < UpperBoundOfBallSize/PixelOfSize)
			{
			candidate = i;
			}
		}
		if(candidate == -1)
			bFlagBallFound = FALSE;	
		else 
		{
			iPositionOfBall[0]	=	(short)BackUpBallPoint[candidate].Position.x;
			iPositionOfBall[1]	=	(short)BackUpBallPoint[candidate].Position.y;
		}
	}	
	
	// not found.
	else{
		bFlagBallFound = FALSE;
		
	}
}

void VisionSys::GlobalComponetSet(int whichColor, int i, int j)
{

}
