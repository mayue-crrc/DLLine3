#ifndef CRUNRECORDSETTINGPAGE_H
#define CRUNRECORDSETTINGPAGE_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBTIMESETTING_EDIT_MILEAGE     0X0001
#define ID_PIBTIMESETTING_EDIT_MONTH    0X0002
#define ID_PIBTIMESETTING_EDIT_DAY      0X0003
#define ID_PIBTIMESETTING_EDIT_MILEAGE1     0X0004
#define ID_PIBTIMESETTING_EDIT_MINUTE   0X0005
#define ID_PIBTIMESETTING_EDIT_SECOND   0X0006
#define ID_PIBTIMESETTING_BUTTON_1      0X0007
#define ID_PIBTIMESETTING_BUTTON_2      0X0008
#define ID_PIBTIMESETTING_BUTTON_3      0X0009
#define ID_PIBTIMESETTING_BUTTON_4      0X000A
#define ID_PIBTIMESETTING_BUTTON_5      0X000B
#define ID_PIBTIMESETTING_BUTTON_6      0X000C
#define ID_PIBTIMESETTING_BUTTON_7      0X000D
#define ID_PIBTIMESETTING_BUTTON_8      0X000E
#define ID_PIBTIMESETTING_BUTTON_9      0X000F
#define ID_PIBTIMESETTING_BUTTON_0      0X0010
#define ID_PIBTIMESETTING_BUTTON_START  0X0011
#define ID_PIBTIMESETTING_BUTTON_CLEAR  0X0012
#define ID_PIBTIMESETTING_BUTTON_CONFIRM 0X0013
#define ID_PIBTIMESETTING_LABEL_CCUDATE    0X0014
#define ID_PIBTIMESETTING_LABEL_CCUTIME    0X0015
#define ID_PIBTIMESETTING_LABEL_ATCDATE    0X0016
#define ID_PIBTIMESETTING_LABEL_ATCTIME    0X0017
#define ID_PIBTIMESETTING_BUTTON_HMICHECKTIME    0X0018
#define ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME    0X0019
#define ID_PIBTIMESETTING_LABEL_ATCTIMEFLG1    0X001A
#define ID_PIBTIMESETTING_LABEL_ATCTIMEFLG2    0X001B
#define ID_PIBTIMESETTING_LABEL1          0x001C
#define ID_PIBTIMESETTING_LABEL2          0x001D
#define ID_PIBTIMESETTING_BUTTON_AIRC1          0x001E
#define ID_PIBTIMESETTING_BUTTON_AIRC2          0x001F

class CRunRecordSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunRecordSettingPage)
public:
    CRunRecordSettingPage();

private:
    void SetFocusEdit(int nEditID);
    void KillAllEditFocus();
    int GetFocusEditID();
    void AddStrToFocusEdit(QString str);
    //void OnHMICheckTime();
    //void OnATCCheckTime();
    void CheckDateInfo();
    int runrecord_settting_timer;
    bool m_bSet;
    int g_mRunsetBtnTimes;
    //unsigned long runrecord_setting;
    ulong runrecord_setting;

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
    void OnYearEditClk();
    void OnMonthEditClk();
    void OnDayEditClk();
    void OnHourEditClk();
    void OnMinEditClk();
    void OnSecEditClk();
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
    void OnBtnStart();
    void OnBtnClear();
    void OnBtnConfirm();
    void UpdateCCUDate();
    //void UpdateCCUTime();
    void UpdateATCDate();
    void UpdateATCTime();
    void UpdateATCtimeFlg();
    void OnBtnAirc1Click();
    void OnBtnAirc2Click();


};

#endif // CRUNRECORDSETTINGPAGE_H
