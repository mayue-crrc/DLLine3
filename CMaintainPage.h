#ifndef CMaintainPage_H
#define CMaintainPage_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;


#define ID_PICMAINTAIN_BUTTON_DOORCHECK          0x0001
#define ID_PICMAINTAIN_BUTTON_TRACTIONCHECK      0x0002
#define ID_PICMAINTAIN_BUTTON_AUXILIARYCHECK     0x0003
#define ID_PICMAINTAIN_BUTTON_BRAKETEST          0x0004
#define ID_PICMAINTAIN_BUTTON_BRAKESELFTEST      0x0005

#define ID_PICMAINTAIN_BUTTON_PASSWORDSETTING    0x0006
#define ID_PICMAINTAIN_BUTTON_PARAMENTSETTING    0x0007
#define ID_PICMAINTAIN_BUTTON_TIMESETTING        0x0008
#define ID_PICMAINTAIN_BUTTON_FAULTRECORD        0x0009
#define ID_PICMAINTAIN_BUTTON_RUNRECORD          0x000A
#define ID_PICMAINTAIN_BUTTON_CLEARRUNRECORD     0x000B
#define ID_PICMAINTAIN_BUTTON_OPERATIONTEST      0x000C
#define ID_PICMAINTAIN_COMMINTERRUPT             0x000D
#define ID_PICMAINTAIN_BUTTON_UPDATE             0x000F
#define ID_PICMAINTAIN_BUTTON_DOWNLOADLOG        0x0010
#define ID_PICMAINTAIN_BUTTON_CLEARLOG           0x0011
#define ID_PICMAINTAIN_BUTTON_AWOTESTING         0x0012
#define ID_PICMAINTAIN_BUTTON_DisEBTest          0x0013
#define ID_PICMAINTAIN_BUTTON_DOORSETTING        0x0014
#define ID_PICMAINTAIN_BUTTON_HVACDEBUGCLK      0x0015


class CMaintainPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMaintainPage)
public:
    CMaintainPage();

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
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif

   void  OnDoorCheckBtnClk();
   void  OnTractionCheckBtnClk();
   void  OnAccessoryCheckBtnClk();
   void  OnParameterSetBtnClk();
   void  OnBrakeTestBtnClk();
   void  OnBrakeSelfTestBtnClk();
   void  OnPasswordSetBtnClk();
   void  OnTimeSetBtnClk();
   void  OnFaultRecordBtnClk();
   void  OnRunRecordBtnClk();
   void  OnClearRunRecordBtnClk();
   void  OnTryRuntestBtnClk();
   void  OnUpdateProgramm();
   void  OnDownLoadLogCLK();
   void  OnClearLogCLK();
   void  OnAW0TestCLK();
   void  OnDisEBTestCLK();
   void  OnDoorSettingCLK();
   void  OnHVACDebugBtnClk();
};

#endif // CMaintainPage_H
