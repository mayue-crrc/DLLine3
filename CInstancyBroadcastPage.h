#ifndef CInstancyBroadcastPage_H
#define CInstancyBroadcastPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;
#define ID_PIBIB_BUTTON_L1R1         0x0001
#define ID_PIBIB_BUTTON_L1R2         0x0002
#define ID_PIBIB_BUTTON_L1R3         0x0003
#define ID_PIBIB_BUTTON_L1R4         0x0004
#define ID_PIBIB_BUTTON_L1R5         0x0005
#define ID_PIBIB_BUTTON_L2R1         0x0006
#define ID_PIBIB_BUTTON_L2R2         0x0007
#define ID_PIBIB_BUTTON_L2R3         0x0008
#define ID_PIBIB_BUTTON_L2R4         0x0009
#define ID_PIBIB_BUTTON_L2R5         0x000A
#define ID_PIBIB_BUTTON_L3R1         0x000B
#define ID_PIBIB_BUTTON_L3R2         0x000C
#define ID_PIBIB_BUTTON_L3R3         0x000D
#define ID_PIBIB_BUTTON_L3R4         0x000E
#define ID_PIBIB_BUTTON_L3R5         0x000F
#define ID_PIBIB_BUTTON_L4R1         0x0010
#define ID_PIBIB_BUTTON_L4R2         0x0011
#define ID_PIBIB_BUTTON_L4R3         0x0012
#define ID_PIBIB_BUTTON_L4R4         0x0013
#define ID_PIBIB_BUTTON_L4R5         0x0014
#define ID_PIBIB_BUTTON_L5R1         0x0015
#define ID_PIBIB_BUTTON_L5R2         0x0016
#define ID_PIBIB_BUTTON_L5R3         0x0017
#define ID_PIBIB_BUTTON_L5R4         0x0018
#define ID_PIBIB_BUTTON_L5R5         0x0019

#define ID_PIBIB_BUTTON_IBSTOP       0x001A
#define ID_PIBIB_BUTTON_IBSTART       0x001B



class CInstancyBroadcastPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CInstancyBroadcastPage)
public:
    CInstancyBroadcastPage();

private:
    void SetBtnDown(int nBtnID);

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
//    void OnFireBtnClk();
//    void OnEvacuateBtnClk();
//    void OnWaitHelpBtnClk();
    void OnFaultStopBtnClk();
    void OnOtherStopBtnClk();
    void OnFaultClearBtnClk();
    void OnOtherClearBtnClk();
    void OnHelpClearBtnClk();
    void OnClearAlarmBtnClk();
    void OnAreaClearBtnClk();
    void OnExchangeBtnClk();
    void OnIBCStartBpBtnClk();
    void OnIBCStopBpBtnClk();
    bool m_bBtnsend;

};

#endif // CInstancyBroadcastPage_H
