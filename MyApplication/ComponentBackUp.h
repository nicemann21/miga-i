// ComponentBackUp.h: interface for the CComponentBackUp class.
//
//////////////////////////////////////////////////////////////////////

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CComponentBackUp  
{
public:
	CComponentBackUp();
	virtual ~CComponentBackUp();
	POINT componentposion[5];
	POINT componentposionOffSet[5];
	POINT OffSet[5];
	bool findFlag;
	int numberofcolor;
};
