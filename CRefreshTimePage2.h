#ifndef CREFRESHTIMEPAGE2_H
#define CREFRESHTIMEPAGE2_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;


#define ID_PIBRT2_LABEL_7B1TIME          0x0001
#define ID_PIBRT2_LABEL_7C0TIME          0x0002
#define ID_PIBRT2_LABEL_7C1TIME          0x0003
#define ID_PIBRT2_LABEL_7D0TIME          0x0004
#define ID_PIBRT2_LABEL_7D1TIME          0x0005
#define ID_PIBRT2_LABEL_7E0TIME          0x0006
#define ID_PIBRT2_LABEL_7E1TIME          0x0007
#define ID_PIBRT2_LABEL_7F0TIME          0x0008
#define ID_PIBRT2_LABEL_7F1TIME          0x0009

#define ID_PIBRT2_LABEL_800TIME          0x000A
#define ID_PIBRT2_LABEL_810TIME          0x000B
#define ID_PIBRT2_LABEL_820TIME          0x000C
#define ID_PIBRT2_LABEL_830TIME          0x000D
#define ID_PIBRT2_LABEL_840TIME          0x000E
#define ID_PIBRT2_LABEL_850TIME          0x000F
#define ID_PIBRT2_LABEL_860TIME          0x0010
#define ID_PIBRT2_LABEL_870TIME          0x0011
#define ID_PIBRT2_LABEL_880TIME          0x0012
#define ID_PIBRT2_LABEL_900TIME          0x0013
#define ID_PIBRT2_LABEL_910TIME          0x0014
#define ID_PIBRT2_LABEL_911TIME          0x0015
#define ID_PIBRT2_LABEL_920TIME          0x0016
#define ID_PIBRT2_LABEL_921TIME          0x0017
#define ID_PIBRT2_LABEL_A00TIME          0x0018
#define ID_PIBRT2_LABEL_A10TIME          0x0019
#define ID_PIBRT2_LABEL_A11TIME          0x001A

#define ID_PIBRT2_LABEL_B00TIME          0x001B
#define ID_PIBRT2_LABEL_B10TIME          0x001C
#define ID_PIBRT2_LABEL_B20TIME          0x001D

#define ID_PIBRT2_LABEL_F00TIME          0x001E
#define ID_PIBRT2_LABEL_F01TIME          0x001F
#define ID_PIBRT2_LABEL_F02TIME          0x0020
#define ID_PIBRT2_LABEL_F03TIME          0x0021
#define ID_PIBRT2_LABEL_7B0TIME          0x0022


class CRefreshTimePage2 : public CPage
{
    DECLEAR_MESSAGE_MAP(CRefreshTimePage2)
public:
    CRefreshTimePage2();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void UpdateRefreshTime();
    void SetRefreshTimeLabelString(int id, int DataVal);
};



#endif // CREFRESHTIMEPAGE2_H
