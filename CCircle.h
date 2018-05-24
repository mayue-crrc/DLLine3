#ifndef CCIRCLE_H
#define CCIRCLE_H

#include  "CControlInterface.h"

enum CIRCLESTATE
{
    LCIRCLE_UNSELECTED = 0,
    LCIRCLE_SELECTED
};
class CCircle : public CControlInterface
{
public:
    CCircle();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void SetBorderColor(__in QColor bordercolor);
    void DrawCircleCtrl();
    void SetCircleState(__in int nState);
};

#endif // CCIRCLE_H
