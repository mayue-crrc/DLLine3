#ifndef CResetRunRecordPage_H
#define CResetRunRecordPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBCR_BUTTON_MILEAGE       0x0001
#define ID_PIBCR_BUTTON_ENERGY        0x0002
#define ID_PIBCR_BUTTON_WORKTIME1     0x0003
#define ID_PIBCR_BUTTON_WORKTIME2     0x0004
#define ID_PIBCR_BUTTON_ASSENERGY     0x0005
#define ID_PIBCR_BUTTON_CLEAR         0x0006

#define ID_PIBCR_LABEL_REDTIME1       0x0007
#define ID_PIBCR_LABEL_REDTIME2       0x0008
//#define ID_PIBCR_LABEL_REDTIME3       0x000F
#define ID_PIBCR_LABEL_REDTIME4       0x0009
#define ID_PIBCR_LABEL_REDTIME5       0x000A
#define ID_PIBCR_LABEL_REDTIME6       0x000B

#define ID_PIBCR_LABEL_REDVOLUME1     0x000C
#define ID_PIBCR_LABEL_REDVOLUME2     0x000D
#define ID_PIBCR_LABEL_REDVOLUME3     0x000E
#define ID_PIBCR_LABEL_REDVOLUME4     0x000F
#define ID_PIBCR_LABEL_REDVOLUME5     0x0010
#define ID_PIBCR_LABEL_REDVOLUME6     0x0011
#define ID_PIBCR_BUTTON_CHECKDISTANCE 0x0012
#define ID_PIBCR_LABEL_REDVOLUME7     0x0013
#define ID_PIBCR_LABEL_REDTIME7       0x0014

#define ID_PIBCR_LABEL_REDVOLUME8     0x0015
#define ID_PIBCR_LABEL_REDVOLUME9     0x0016


class CResetRunRecordPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CResetRunRecordPage)
public:
    CResetRunRecordPage();

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
    void OnMileageBtnBtnClk();
    void OnCheckDistanceBtnClk();
    void OnEnergyBtnClk();
    void OnWorkTime1BtnClk();
    void OnWorkTime2BtnClk();
    void OnAssenergyBtnClk();
    void OnClearBtnClk();
    void UpdateReset_RunRecord();
    void UpdateMileageBtn(int id, int colorVal);
    void UpdateCheckDistanceBtn(int id, int colorVal);
    void UpdateEnergyBtn(int id, int colorVal);
    void UpdateWorkTime1Btn(int id, int colorVal);
    void UpdateWorkTime2Btn(int id, int colorVal);
    void UpdateAssenergyBtn(int id, int colorVal);
    void SetRRun_Record_TimeLabelString(int id, QString StringVal);
    void SetRRun_Record_LabelString(int id, int DataVal);
    void SetRun_Record_LabelString_long(int id, unsigned long DataVal);
    void SetRun_Record_LabelString_qreal(int id, qreal DataVal);
    int clear_run_color;
    int clear_record_timer;
    bool m_bReset;
};

#endif // CResetRunRecordPage_H
