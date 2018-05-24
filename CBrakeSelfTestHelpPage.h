#ifndef CBrakeSelfTestHelpPage_H
#define CBrakeSelfTestHelpPage_H

#include "CPage.h"

#define ID_BRAKESELFTESTHELP_LABEL_X            0X0001
#define ID_BRAKESELFTESTHELP_ICON3              0X0002

extern vector<CPage*>  g_PageVec;

class CBrakeSelfTestHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CBrakeSelfTestHelpPage)
public:
    CBrakeSelfTestHelpPage();

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
};

#endif // CBrakeSelfTestHelpPage_H
