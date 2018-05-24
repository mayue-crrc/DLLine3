#ifndef CRunRecordPage_H
#define CRunRecordPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBRRP_LABEL_REDTIME1               0x0001
#define ID_PIBRRP_LABEL_REDTIME2               0x0002
#define ID_PIBRRP_LABEL_REDTIME3               0x0003
#define ID_PIBRRP_LABEL_REDTIME4               0x0004
#define ID_PIBRRP_LABEL_REDTIME5               0x0005
#define ID_PIBRRP_LABEL_REDTIME6               0x0006
#define ID_PIBRRP_LABEL_REDTIME7               0x0007
#define ID_PIBRRP_LABEL_REDTIME8               0x0008
#define ID_PIBRRP_LABEL_REDTIME9               0x0009

#define ID_PIBRRP_LABEL_REDRANGE1              0x000A
#define ID_PIBRRP_LABEL_REDRANGE2              0x000B
#define ID_PIBRRP_LABEL_REDRANGE3              0x000C
#define ID_PIBRRP_LABEL_REDRANGE4              0x000D
#define ID_PIBRRP_LABEL_REDRANGE5              0x000E
#define ID_PIBRRP_LABEL_REDRANGE6              0x000F
#define ID_PIBRRP_LABEL_REDRANGE7              0x0010
#define ID_PIBRRP_LABEL_REDRANGE8              0x0011
#define ID_PIBRRP_LABEL_REDRANGE9              0x0012

#define ID_PIBRRP_LABEL_REDTIME10               0x0013
#define ID_PIBRRP_LABEL_REDTIME11               0x0014

#define ID_PIBRRP_LABEL_REDRANGE10              0x0015
#define ID_PIBRRP_LABEL_REDRANGE11              0x0016

#define ID_PIBRRP_LABEL_REDRANGE12              0x0017
#define ID_PIBRRP_LABEL_REDRANGE13              0x0018

class CRunRecordPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunRecordPage)
public:
    CRunRecordPage();

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
    void UpdateRun_RecordData();
    void SetRun_Record_LabelString(int id, int DataVal);
    void SetRun_Record_LabelString_long(int id, unsigned long DataVal);
    void SetRun_Record_TimeLabelString(int id, QString StringVal);
    void SetRun_Record_LabelString_qreal(int id, qreal DataVal);
    int  g_mRunsetBtnTimes;
};

#endif // CRunRecordPage_H
