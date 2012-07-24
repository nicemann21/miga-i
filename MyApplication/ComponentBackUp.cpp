// ComponentBackUp.cpp: implementation of the CComponentBackUp class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ComponentBackUp.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CComponentBackUp::CComponentBackUp()
{
	for(int cnt=0;cnt<5;cnt++)
		OffSet[cnt].y=OffSet[cnt].x=
		componentposionOffSet[cnt].y=componentposionOffSet[cnt].x=componentposion[cnt].x=componentposion[cnt].y;
		
		numberofcolor=0;
		findFlag=false;
}

CComponentBackUp::~CComponentBackUp()
{

}
