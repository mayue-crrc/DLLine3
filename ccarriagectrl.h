#ifndef CCARRIAGECTRL_H
#define CCARRIAGECTRL_H

#include "CControlInterface.h"

enum CARRIAGETYPE
{
    CARRIAGETYPE_NORMAL,
    CARRIAGETYPE_LEFT,
    CARRIAGETYPE_RIGHT,
    CARRIAGETYPE_PantographsLeft,
//    CARRIAGETYPE_planform_NORMAL,
//    CARRIAGETYPE_planform_LEFT,
//    CARRIAGETYPE_planform_RIGHT,
};

class CCarriageCtrl : public CControlInterface
{
public:
    CCarriageCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);
    void SetCtrlEnable(bool nEnable);

    void SetHeadCarColor(QColor color);
    void SetEscapeDoorColor(QColor color  );
    void SetEmgBrkBtnColor(QColor color  );
    void SetCarType(int nFlag);
    void DrawCarriageCtrl();
    void iconPantographsLeft( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  int up, bool isolated );
    void SetPantograph(  __in int nCarID,int up, bool isolated );
    void SetPassengerWarningColor( __in int nCarID,int num,bool warning2,QColor color);
private:
    int m_nCarType;
    int m_nCarID;
    int m_num;
    QColor m_HeadCarColor;
    QColor m_EscapeDoorColor;
    QColor m_EmgBrkBtnColor;
    QColor m_PassengerWarningColor;
    bool m_Warning1_status;
    bool m_Warning2_status;
    int m_Pantograph_status;
    bool m_Pantograph_isolated;
};

#endif // CCARRIAGECTRL_H
