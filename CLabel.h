#ifndef CLABEL_H
#define CLABEL_H

#include "CControlInterface.h"

enum LABELSTATE {
    LABELSRATE_DOOR_NORMAL,
    LABELSRATE_DOOR_OPEN,
    LABELSRATE_DOOR_CLOSE,
    LABELSRATE_DOOR_UNKNOW,
    LABELSRATE_FAULT_INFO,
    LABELSRATE_FAULT_WARNING,
    LABELSRATE_TCU_STATUS, //hunnan add
    LABELSRATE_RUN_STATUS, //lijian add
    LABELSRATE_DOOR_X, //hunnan add
    LABELSRATE_FAS_roundrect, //lsz add
    LABELSRATE_FAS_red1, //lsz add
    LABELSRATE_FAS_red2, //lsz add
    LABELSRATE_FAS_white,

    LABELSRATES
};

class CLabel : public CControlInterface
{
public:
    CLabel();

public:
    void Create(__in QString ctrl_str,__in QRect ctrl_rc,__in QColor label_bordercolor,
                __in QFont ctrl_font,__in QColor ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString ctrl_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor ctrl_bkcolor);
    void SetCtrlRect(__in QRect ctrl_rect);

    void SetBorderColor(__in QColor bordercolor);
    void DrawLabel();
    void SetLabelState(__in int nState);
    void SetAlignment(__in int nAlignment);
    void ShowLabel();
    void HideLabel();

private:
    QColor m_bordercolor;
    int    m_nAlignment;
};

#endif // CLABEL_H
