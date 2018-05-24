#ifndef CDirectionConfirmPage_H
#define CDirectionConfirmPage_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBDC_BUTTON_ORIGINATIONSET   0X0001
#define ID_PIBDC_TRAIN                   0X0002
#define ID_PIBDC_ICON_WARNNING           0X0003
#define ID_PIBDC_ARROW_RIGHT             0X0004
#define ID_PIBDC_ARROW_LEFT              0X0005

extern vector<CPage*>  g_PageVec;

class CDirectionConfirmPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDirectionConfirmPage)
public:
    CDirectionConfirmPage();

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
    void OnRealTimeFaultsWarnningIconClk();
};

#endif // CDirectionConfirmPage_H
