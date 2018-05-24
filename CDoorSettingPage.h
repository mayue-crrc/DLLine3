#ifndef CDOORSETTINGPAGE_H
#define CDOORSETTINGPAGE_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_DOORSET_BUTTON_PARADOWN1     0x0001
#define ID_DOORSET_BUTTON_PARAUP1       0x0002
#define ID_DOORSET_BUTTON_PARADOWN2     0x0003
#define ID_DOORSET_BUTTON_PARAUP2       0x0004
#define ID_DOORSET_BUTTON_PARADOWN3     0x0005
#define ID_DOORSET_BUTTON_PARAUP3       0x0006
#define ID_DOORSET_BUTTON_PARADOWN4     0x0007
#define ID_DOORSET_BUTTON_PARAUP4       0x0008
#define ID_DOORSET_BUTTON_PARADOWN5     0x0009
#define ID_DOORSET_BUTTON_PARAUP5       0x000A
#define ID_DOORSET_BUTTON_PARADOWN6     0x000B
#define ID_DOORSET_BUTTON_PARAUP6       0x000C
#define ID_DOORSET_BUTTON_PARADOWN7     0x000D
#define ID_DOORSET_BUTTON_PARAUP7       0x000E
#define ID_DOORSET_BUTTON_PARADOWN8     0x000F
#define ID_DOORSET_BUTTON_PARAUP8       0x0010
#define ID_DOORSET_BUTTON_PARADOWN9     0x0011
#define ID_DOORSET_BUTTON_PARAUP9       0x0012
#define ID_DOORSET_BUTTON_PARADOWN10     0x0013
#define ID_DOORSET_BUTTON_PARAUP10       0x0014
#define ID_DOORSET_BUTTON_PARADOWN11     0x0015
#define ID_DOORSET_BUTTON_PARAUP11       0x0016
#define ID_DOORSET_BUTTON_PARADOWN12     0x0017
#define ID_DOORSET_BUTTON_PARAUP12       0x0018
#define ID_DOORSET_BUTTON_PARADOWN13     0x0019
#define ID_DOORSET_BUTTON_PARAUP13       0x001A
#define ID_DOORSET_PARAMETER1            0x001B
#define ID_DOORSET_PARAMETER2            0x001C
#define ID_DOORSET_PARAMETER3            0x001D
#define ID_DOORSET_PARAMETER4            0x001E
#define ID_DOORSET_PARAMETER5            0x001F
#define ID_DOORSET_PARAMETER6            0x0020
#define ID_DOORSET_PARAMETER7            0x0021
#define ID_DOORSET_PARAMETER8            0x0022
#define ID_DOORSET_PARAMETER9            0x0023
#define ID_DOORSET_PARAMETER10           0x0024
#define ID_DOORSET_PARAMETER11           0x0025
#define ID_DOORSET_PARAMETER12           0x0026
#define ID_DOORSET_PARAMETER13           0x0027
#define ID_DOORSET_BUTTON_CONFIRM        0x0028

#define ID_DOORSET_INPUTPARAMETER        0x0029
#define ID_DOORSET_PARAMETERNAME         0X0030
 #define ID_PIBTIMESETTING_LABEL2          0x001D

#define ID_DOORSET_LABEL_1               0x0031
#define ID_DOORSET_LABEL_2               0x0032
#define ID_DOORSET_LABEL_3               0x0033


class CDoorSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDoorSettingPage)
public:
    CDoorSettingPage();

private:
    void SetDoorParameter(int lableId,int parameter);
    void SetFocusEdit(int nEditID);
    void KillAllEditFocus();
    int GetFocusEditID();
    void AddStrToFocusEdit(QString str);
    //void OnHMICheckTime();
    //void OnATCCheckTime();
    void CheckDateInfo();
    void SetLabelColor(int id, int colorVal);

    int door_settting_timer;
    bool m_bSet;
    bool m_bSet1;
    bool m_bSet2;
    bool m_bSet3;
    bool m_bSet4;
    bool m_bSet5;
    bool m_bSet6;
    bool m_bSet7;
    bool m_bSet8;
    bool m_bSet9;
    bool m_bSet10;
    bool m_bSet11;
    bool m_bSet12;
    bool m_bSet13;


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
    void OnParaDown1Clk();
    void OnParaUp1Clk();
    void OnParaDown2Clk();
    void OnParaUp2Clk();
    void OnParaDown3Clk();
    void OnParaUp3Clk();
    void OnParaDown4Clk();
    void OnParaUp4Clk();
    void OnParaDown5Clk();
    void OnParaUp5Clk();
    void OnParaDown6Clk();
    void OnParaUp6Clk();
    void OnParaDown7Clk();
    void OnParaUp7Clk();
    void OnParaDown8Clk();
    void OnParaUp8Clk();
    void OnParaDown9Clk();
    void OnParaUp9Clk();
    void OnParaDown10Clk();
    void OnParaUp10Clk();
    void OnParaDown11Clk();
    void OnParaUp11Clk();
    void OnParaDown12Clk();
    void OnParaUp12Clk();
    void OnParaDown13Clk();
    void OnParaUp13Clk();
    void OnConfirmClk();


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
    //void OnBtnConfirm();
    void UpdateCCUDate();
    void UpdateCCUTime();
    void UpdateATCDate();
    void UpdateATCTime();
    void UpdateATCtimeFlg();
    void UpdateParameter();


};

#endif // CDOORSETTINGPAGE_H
