#ifndef CRunHelp1Page_H
#define CRunHelp1Page_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;
#define ID_CRUNHELP1_LABEL_CARNUM   0x0001

class CRunHelp1Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunHelp1Page)
public:
    CRunHelp1Page();

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

#endif // CRunHelp1Page_H
