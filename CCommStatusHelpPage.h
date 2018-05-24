#ifndef CCommStatusHelpPage_H
#define CCommStatusHelpPage_H

#include "CPage.h"
#define ID_PIBCSH_LABEL_WORKNOMAL                           0X0001
#define ID_PIBCSH_LABEL_DORMANCY                            0X0002
#define ID_PIBCSH_LABEL_FAULTHAPPEN                         0X0003
#define ID_PIBCSH_LABEL_COMMUNICATEABNORMITYORPOWEROFF      0X0004
//#define ID_PIBCSH_LABEL_BCUCANTRANSFERNOMAL                 0X0005
//#define ID_PIBCSH_LABEL_BCUCANTRANSFERABNORMITY             0X0006

extern vector<CPage*>  g_PageVec;

class CCommStatusHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCommStatusHelpPage)
public:
    CCommStatusHelpPage();

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

#endif // CCommStatusHelpPage_H
