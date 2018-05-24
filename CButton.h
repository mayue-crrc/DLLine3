#ifndef CBUTTON_H
#define CBUTTON_H

#include "CControlInterface.h"

//button state enum
enum BUTTONSTATE
{
    LBUTTON_INIT = 0,
    LBUTTON_DOWN,
    LBUTTON_UP
};

enum BUTTONTYPE
{
    BUTTON_NORMAL = 0,
    BUTTON_STATION,//EmergencyMode  bkcloor is green
    BUTTON_TRACE,
    BUTTON_STATION1 ,//状态按钮，所就在页面为蓝色 lmh
    BUTTON_STATION2 // 状态按钮，所就在页面为粉色 lmh
};


class CButton:public CControlInterface
{
public:
    CButton();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);
    void SetCtrlEnable(bool nEnable);

    void ChangeButtonState(__in int nBtnState);
    void ChangeButtonAutoUpState(bool nEnable);

    void SetButtonType(__in int ntype);
    int GetButtonState();
    int GetButtonType();
    int m_bAutoUpState;
    void DrawButton(__in int ntype);
    void ShowButton();
    void HideButton();
    bool IsHide();
    bool IsPressed();
    void UpButtonAfterSecond(__in int nSec);


protected:
    int m_btnState;
    int m_btnType;
    bool m_bHide;
    bool m_bPressed;
};

#endif // CBUTTON_H
