#include "stdafx.h"
#include "..\INC\mmi.h"


extern int mmiMain(MMI_DATA   *mmiDataPtr);
// ********************************************************************************************
// MMIInit()
// ********************************************************************************************
int mmiInit(MMI_DATA *mmiDataPtr)
{
    mmiDataPtr -> mmiState = MMI_IDLE;
    mmiDataPtr->ncFileValid = false;

	return 1;
}

// ********************************************************************************************
// MMIHandler()
// ********************************************************************************************
int mmiCtl (MMI_DATA *mmiDataPtr)
{
    mmiMain(mmiDataPtr);

	return 1;
}

// ********************************************************************************************
// MMIClose()
// ********************************************************************************************
int mmiClose(MMI_DATA *mmiDataPtr)
{

    return 1;
}
