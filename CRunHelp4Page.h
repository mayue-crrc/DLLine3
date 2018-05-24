#ifndef CRUNHELP4PAGE_H
#define CRUNHELP4PAGE_H

#include "CPage.h"

#define ID_TEXT1 0x0001
#define ID_TEXT2 0x0002
#define ID_TEXT3 0x0003
#define ID_TEXT4 0x0004
#define ID_TEXT5 0x0005
#define ID_TEXT6 0x0006
#define ID_TEXT7 0x0007
#define ID_TEXT8 0x0008
#define ID_RUNHELP4_WARNING 0x0009

class CRunHelp4Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunHelp4Page)
public:
    CRunHelp4Page();

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

#endif // CRUNHELP4PAGE_H
