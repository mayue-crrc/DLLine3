#ifndef CBrakeTestHelpPage_H
#define CBrakeTestHelpPage_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

class CBrakeTestHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CBrakeTestHelpPage)
public:
    CBrakeTestHelpPage();

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

#endif // CBrakeTestHelpPage_H
