#ifndef CFAULTINFOPAGE_H
#define CFAULTINFOPAGE_H

#include "CPage.h"
#include "CFaultInfoDialog.h"

class CFaultInfoPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CFaultInfoPage)
public:
    CFaultInfoPage();

private:
    CFaultInfoDialog m_FaultInfoDlg;

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
};

#endif // CFAULTINFOPAGE_H
