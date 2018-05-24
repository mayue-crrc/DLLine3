#ifndef CMainPage_H
#define CMainPage_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBMAIN_BUTTON_ORIGINATIONSET   0X0001
#define ID_PIBMAIN_TRAIN                   0X0002
#define ID_PIBMAIN_ICON_WARNNING           0X0003
#define ID_PIBMAIN_ARROW_RIGHT             0X0004
#define ID_PIBMAIN_ARROW_LEFT              0X0005
#define ID_PIBMAIN_COMMINTERRUPT           0X0006
#define ID_PIBMAIN_BUTTON_FASPAGE          0X0007
#define ID_PIBMAIN_BUTTON_EMERGENCYBROADCAST 0x0008
#define ID_PIBMAIN_BUTTON_STATIONCANCEL    0x0009

extern vector<CPage*>  g_PageVec;

class CMainPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMainPage)
public:
    CMainPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
    void OnInitialSetBtnClk();
    void OnRealTimeFaultsWarnningIconClk();
    void OnFASpageBtnClk();
    void OnEMERGENCYBROADCASTpageBtnClk();
    void OnStationCancelBtnClk();
};

#endif // CMainPage_H
