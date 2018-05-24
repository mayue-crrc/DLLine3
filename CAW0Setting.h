#ifndef CAW0SETTING_H
#define CAW0SETTING_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBAW0SETTING_BUTTON_REPLACE   0X0001
#define ID_PIBAW0SETTING_TRAIN                   0X0002
#define ID_PIBAW0SETTING_ICON_WARNNING           0X0003
#define ID_PIBAW0SETTING_ARROW_RIGHT             0X0004
#define ID_PIBAW0SETTING_ARROW_LEFT              0X0005
#define ID_PIBAW0SETTING_COMMINTERRUPT           0X0006

extern vector<CPage*>  g_PageVec;

class CAW0Setting : public CPage
{
    DECLEAR_MESSAGE_MAP(CAW0Setting)
public:
    CAW0Setting();

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
    void OnReplaceBtnClk();
 //   void OnRealTimeFaultsWarnningIconClk();
};

#endif // CAW0SETTING_H
