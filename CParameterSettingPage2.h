#ifndef CParameterSettingPage2_H
#define CParameterSettingPage2_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_PICCARSET_BUTTON_NUM1          0x0001
#define ID_PICCARSET_BUTTON_NUM2          0x0002
#define ID_PICCARSET_BUTTON_NUM3          0x0003
#define ID_PICCARSET_BUTTON_NUM4          0x0004
#define ID_PICCARSET_BUTTON_NUM5          0x0005
#define ID_PICCARSET_BUTTON_NUM6          0x0006
#define ID_PICCARSET_BUTTON_NUM7          0x0007
#define ID_PICCARSET_BUTTON_NUM8          0x0008
#define ID_PICCARSET_BUTTON_NUM9          0x0009
#define ID_PICCARSET_BUTTON_NUM0          0x000A

#define ID_PICCARSET_EDIT_OLDWHEELDIAMETER 0x000B
#define ID_PICCARSET_BUTTON_SET            0x000C
#define ID_PICCARSET_BUTTON_CLEAR          0x000D
#define ID_PICCARSET_LABEL_1               0x000E
#define ID_PICCARSET_LABEL_2               0x000F
#define ID_PICCARSET_LABEL_3               0x0010
#define ID_PICCARSET_EDIT_NEWWHEELDIAMETER 0x0011
#define ID_PICCARSET_LABEL_4               0x0012
#define ID_PICCARSET_LABEL_5               0x0013
#define ID_PICCARSET_LABEL_6               0x0014
#define ID_PICCARSET_LABEL_7               0x0015

class CParameterSettingPage2 : public CPage
{
    DECLEAR_MESSAGE_MAP(CParameterSettingPage2)
public:
    CParameterSettingPage2();

private:
    void ShowWarningDialog(QString str);

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
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
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
    void OnClearClk();
    void OnBtnSetClk();
};

#endif // CParameterSettingPage2_H
