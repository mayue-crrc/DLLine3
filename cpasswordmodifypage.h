#ifndef CPASSWORDMODIFYPAGE_H
#define CPASSWORDMODIFYPAGE_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBPM_EDIT_PSDCUR            0x0001
#define ID_PIBPM_EDIT_PSDNEW            0x0002
#define ID_PIBPM_EDIT_PSDNEWAGAIN       0x0003
#define ID_PIBPM_BUTTON_NUM0            0x0004
#define ID_PIBPM_BUTTON_NUM1            0x0005
#define ID_PIBPM_BUTTON_NUM2            0x0006
#define ID_PIBPM_BUTTON_NUM3            0x0007
#define ID_PIBPM_BUTTON_NUM4            0x0008
#define ID_PIBPM_BUTTON_NUM5            0x0009
#define ID_PIBPM_BUTTON_NUM6            0x000A
#define ID_PIBPM_BUTTON_NUM7            0x000B
#define ID_PIBPM_BUTTON_NUM8            0x000C
#define ID_PIBPM_BUTTON_NUM9            0x000D
#define ID_PIBPM_BUTTON_CLEAR           0x000E
#define ID_PIBPM_LABEL_LABEL1           0x000F
#define ID_PIBPM_LABEL_LABEL2           0x0010


class CPasswordModifyPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CPasswordModifyPage)

    public:
    CPasswordModifyPage();

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
    void OnNum0Clk();
    void OnNum1Clk();
    void OnNum2Clk();
    void OnNum3Clk();
    void OnNum4Clk();
    void OnNum5Clk();
    void OnNum6Clk();
    void OnNum7Clk();
    void OnNum8Clk();
    void OnNum9Clk();
    void OnClearClk();
    void OnCurClk();
    void OnNewClk();
    void OnConfirmClk();

private:
    int GetFocusEditID();
    void ShowWarningDialog(QString str);
};

#endif // CPASSWORDMODIFYPAGE_H
