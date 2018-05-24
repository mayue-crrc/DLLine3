#ifndef CPasswordPage_H
#define CPasswordPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;
#define ID_PIBPD_EDIT_PASSWORD          0x0001
#define ID_PIBPD_BUTTON_NUM0            0x0002
#define ID_PIBPD_BUTTON_NUM1            0x0003
#define ID_PIBPD_BUTTON_NUM2            0x0004
#define ID_PIBPD_BUTTON_NUM3            0x0005
#define ID_PIBPD_BUTTON_NUM4            0x0006
#define ID_PIBPD_BUTTON_NUM5            0x0007
#define ID_PIBPD_BUTTON_NUM6            0x0008
#define ID_PIBPD_BUTTON_NUM7            0x0009
#define ID_PIBPD_BUTTON_NUM8            0x000A
#define ID_PIBPD_BUTTON_NUM9            0x000B
#define ID_PIBPD_BUTTON_CLEAR           0x000C


class CPasswordPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CPasswordPage)
public:
    CPasswordPage();

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
    void OnNormalEdit();
};

#endif // CPasswordPage_H
