#ifndef CDoorTestHelpPage_H
#define CDoorTestHelpPage_H

#include "CPage.h"

#define ID_DOORTEST_LABEL1  0x0001
#define ID_DOORTEST_LABEL2  0x0002
#define ID_DOORTEST_LABEL3  0x0003
#define ID_DOORTEST_LABEL4  0x0004


extern vector<CPage*>  g_PageVec;

class CDoorTestHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDoorTestHelpPage)
public:
    CDoorTestHelpPage();

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

#endif // CDoorTestHelpPage_H
