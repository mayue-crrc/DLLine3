#ifndef CARROWCTRL_H
#define CARROWCTRL_H

#include "CControlInterface.h"

enum ARROWGUIDE {
    ARROW_LEFT = 0,
    ARROW_RIGHT,
    ARROW_RIGHT_LEFT
};

class CArrowCtrl : public CControlInterface
{
public:
    CArrowCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& label_bordercolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString ctrl_str);
    void SetTxtFont(__in QFont ctrl_font);
    void SetTxtColor(__in QColor ctrl_txtcolor);
    void SetCtrlBKColor(__in QColor ctrl_bkcolor);
    void SetCtrlRect(__in QRect ctrl_rect);

    void DrawArrowCtrl(__in int nGuide);
    void SetArrowGuide(__in int nGuide);
    void HideArrow();

private:
    int    m_nGuide;
};

#endif // CARROWCTRL_H
