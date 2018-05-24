#ifndef CTRAINCTRL_H
#define CTRAINCTRL_H

#include "CControlInterface.h"
#include "ccarriagectrl.h"

enum CARID
{
    TRAIN_CAR1 = 0,
    TRAIN_CAR2,
    TRAIN_CAR3,
    TRAIN_CAR4,
    TRAIN_CAR5,
    TRAIN_CAR6,
};

class CTrainCtrl : public CControlInterface
{
public:
    CTrainCtrl();
public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void SetHeadCarColor(int nCarID,QColor color);
    void SetEscapeDoorColor(int nCarID,QColor color);
    void SetEmgBrkBtnColor(int nCarID,QColor color);

    void DrawTrainCtrl();
    void SetCarText(int nCarid, QString text_str);
    void SetPantograph( __in int nCarID, int up, bool isolated );
    void SetPassengerWarningColor( __in int nCarID,int num,bool warning2,QColor color);

private:
    CCarriageCtrl m_carriage[VEHICLE_NUM];
};

#endif // CTRAINCTRL_H
