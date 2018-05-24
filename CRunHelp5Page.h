#ifndef CRUNHELP5PAGE_H
#define CRUNHELP5PAGE_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

class CRunHelp5Page : public CPage
{

    DECLEAR_MESSAGE_MAP(CRunHelp5Page)

public:
    CRunHelp5Page();
    void OnShowPage();
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

//新的显示界面类需要在rom里添加相应g_PicRom_RunHelp5，并在cpp中与size关联
#endif // CRUNHELP5PAGE_H
