#ifndef CSCROLLCTRL_H
#define CSCROLLCTRL_H

#include "CControlInterface.h"

#define D_SCROLL_OFFSET        20
#define D_TRIANGLE_HEIGHT        20

enum SCROLLSTATE {
    SCROLL_INIT = 0,
    SCROLL_PUSHUP,
    SCROLL_PUSHDOWN,
    SCROLL_PUSHTHUMB
};

class CScrollCtrl : public CControlInterface
{
public:
    CScrollCtrl();
    int m_thumbLength;
    QRect m_thumbRect;
    int m_beforeMove;
    int m_afterMove;
    QPoint m_LButtonDownPos;
public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawScrollCtrl(__in int ctrl_type, __in QPoint thumb_pos,__in int thumb_length);
    void SetThumbInfo(__in int ctrl_type, __in int thumb_pos);
    int SetSelectedPos(__in bool ctrl_push,QPoint pos);
    int GetMoveOffset();
};

#endif // CSCROLLCTRL_H
