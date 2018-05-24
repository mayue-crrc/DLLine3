#ifndef CCarStatusHelpPage_H
#define CCarStatusHelpPage_H

#include "CPage.h"
#define ID_TCUHELP_ICON1   0X0001

extern vector<CPage*>  g_PageVec;

class CCarStatusHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatusHelpPage)
public:
    CCarStatusHelpPage();

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
};

#endif // CCarStatusHelpPage_H
