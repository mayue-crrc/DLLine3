#ifndef CReserveSettingPage_H
#define CReserveSettingPage_H

#include "CPage.h"
#define     ID_PIBRESERVESET_EDIT_TNUM         0X0001
#define     ID_PIBRESERVESET_EDIT_TRAINNUM     0X0002
#define     ID_PIBRESERVESET_EDIT_DRIVERNUM    0X0003
#define     ID_PIBRESERVESET_BUTTON_NUM0        0X0004
#define     ID_PIBRESERVESET_BUTTON_NUM1        0X0005
#define     ID_PIBRESERVESET_BUTTON_NUM2        0X0006
#define     ID_PIBRESERVESET_BUTTON_NUM3        0X0007
#define     ID_PIBRESERVESET_BUTTON_NUM4        0X0008
#define     ID_PIBRESERVESET_BUTTON_NUM5        0X0009
#define     ID_PIBRESERVESET_BUTTON_NUM6        0X000A
#define     ID_PIBRESERVESET_BUTTON_NUM7        0X000B
#define     ID_PIBRESERVESET_BUTTON_NUM8        0X000C
#define     ID_PIBRESERVESET_BUTTON_NUM9        0X000D
#define     ID_PIBRESERVESET_BUTTON_CLEAR       0X000E
#define     ID_PIBRESERVESET_BUTTON_CONFIRM     0X000F

extern vector<CPage*>  g_PageVec;

class CReserveSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CReserveSettingPage)
public:
    CReserveSettingPage();

private:
    void SetEditSel(int nEidtID);
    int GetFocusEditID();
    void AddStrToFocusEdit(QString str);

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
    void OnNum1Clk();
    void OnNum2Clk();
    void OnNum3Clk();
    void OnNum4Clk();
    void OnNum5Clk();
    void OnNum6Clk();
    void OnNum7Clk();
    void OnNum8Clk();
    void OnNum9Clk();
    void OnNum0Clk();
    void OnEdit1Clk();
    void OnEdit2Clk();
    void OnEdit3Clk();
    void OnConfirmClk();
    void OnClearClk();
};

#endif // CReserveSettingPage_H
