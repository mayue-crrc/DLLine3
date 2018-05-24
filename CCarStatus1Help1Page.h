#ifndef CCarStatus1Help1Page_H
#define CCarStatus1Help1Page_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

class CCarStatus1Help1Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus1Help1Page)
public:
    CCarStatus1Help1Page();

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
};

#endif // CCarStatus1Help1Page_H
