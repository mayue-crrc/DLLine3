#ifndef CTractionSystemTestPage_H
#define CTractionSystemTestPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

//#define ID_TRACTSYSTEST_LABEL_CONDITION2 0x0001
//#define ID_TRACTSYSTEST_LABEL_CONDITION3 0x0002
//#define ID_TRACTSYSTEST_LABEL_CONDITION4 0x0003
//#define ID_TRACTSYSTEST_LABEL_CONDITION5 0x0004

//#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE2 0x0005
//#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE3 0x0006
//#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE4 0x0007
//#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE5 0x0008

//#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION2 0x0009
//#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION3 0x000A
//#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION4 0x000B
//#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION5 0x000C

//#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE2 0x000D
//#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE3 0x000E
//#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE4 0x000F
//#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE5 0x0010

//#define ID_TRACTSYSTEST_BUTTON_HIGHPREESURE 0x0011
//#define ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE 0x0012

#define ID_TRACTSYSTEST_TRAIN             0x0001
#define ID_TRACTSYSTEST_ARROW_RIGHT       0x0002
#define ID_TRACTSYSTEST_ARROW_LEFT        0x0003

//#define ID_TRACTSYSTEST_LABEL_TCUVERSION1       0x0016
//#define ID_TRACTSYSTEST_LABEL_TCUVERSION2       0x0017
//#define ID_TRACTSYSTEST_LABEL_TCUVERSION3       0x0018
//#define ID_TRACTSYSTEST_LABEL_TCUVERSION4       0x0019

//#define ID_TRACTSYSTEST_LABEL_HELP1       0x0020
//#define ID_TRACTSYSTEST_LABEL_HELP2       0x0021

//#define ID_TRACTSYSTEST_LABEL_TCUVERSION5       0x0022
//#define ID_TRACTSYSTEST_LABEL_TCUVERSION6       0x0023

//#define ID_TRACTSYSTEST_LABEL_CONDITION6 0x0024
//#define ID_TRACTSYSTEST_LABEL_CONDITION7 0x0025

//#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE6 0x0026
//#define ID_TRACTSYSTEST_LABEL_HIGHPREESURE7 0x0027

//#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION6 0x0028
//#define ID_TRACTSYSTEST_LABEL_LOWERCONDITION7 0x0029

//#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE6 0x002A
//#define ID_TRACTSYSTEST_LABEL_LOWERPREESURE7 0x002B

//#define ID_TRACTSYSTEST_LABEL_TESTSTEP       0x002C
#define ID_TRACTSYSTEST_LABEL_VVVF1      0x0004
#define ID_TRACTSYSTEST_LABEL_VVVF2      0x0005
#define ID_TRACTSYSTEST_BUTTON_TEST1      0x0006
#define ID_TRACTSYSTEST_BUTTON_TEST2      0x0007
#define ID_TRACTSYSTEST_BUTTON_TEST3      0x0008
#define ID_TRACTSYSTEST_BUTTON_TEST4      0x0009
#define ID_TRACTSYSTEST_BUTTON_TEST5      0x000A
#define ID_TRACTSYSTEST_BUTTON_TEST6      0x000B
#define ID_TRACTSYSTEST_BUTTON_TEST7      0x000C
#define ID_TRACTSYSTEST_BUTTON_TEST8      0x000D
#define ID_TRACTSYSTEST_BUTTON_TEST9      0x000E
#define ID_TRACTSYSTEST_BUTTON_TEST10      0x000F
#define ID_TRACTSYSTEST_LABEL_VVVF      0x0010
#define ID_TRACTSYSTEST_LABEL_VVVFTEST11 0X0011
#define ID_TRACTSYSTEST_LABEL_VVVFTEST21 0X0012
#define ID_TRACTSYSTEST_LABEL_VVVFTEST12 0X0013
#define ID_TRACTSYSTEST_LABEL_VVVFTEST22 0X0014
#define ID_TRACTSYSTEST_LABEL_VVVFTEST13 0X0015
#define ID_TRACTSYSTEST_LABEL_VVVFTEST23 0X0016
#define ID_TRACTSYSTEST_LABEL_VVVFTEST14 0X0017
#define ID_TRACTSYSTEST_LABEL_VVVFTEST24 0X0018
#define ID_TRACTSYSTEST_LABEL_VVVFTEST15 0X0019
#define ID_TRACTSYSTEST_LABEL_VVVFTEST25 0X001A
#define ID_TRACTSYSTEST_LABEL_VVVFTEST16 0X001B
#define ID_TRACTSYSTEST_LABEL_VVVFTEST26 0X001C
#define ID_TRACTSYSTEST_LABEL_VVVFTEST17 0X001D
#define ID_TRACTSYSTEST_LABEL_VVVFTEST27 0X001E
#define ID_TRACTSYSTEST_LABEL_VVVFTEST18 0X001F
#define ID_TRACTSYSTEST_LABEL_VVVFTEST28 0X0020
#define ID_TRACTSYSTEST_LABEL_VVVFTEST19 0X0021
#define ID_TRACTSYSTEST_LABEL_VVVFTEST29 0X0022
#define ID_TRACTSYSTEST_LABEL_VVVFTEST110 0X0023
#define ID_TRACTSYSTEST_LABEL_VVVFTEST210 0X0024

#define ID_TRACTSYSTEST_BUTTON_TESTSTOP   0X0025
#define ID_TRACTSYSTEST_LABEL_BRAKETEST_HINT1   0X0026
#define ID_TRACTSYSTEST_LABEL_BRAKETEST_HINT2   0X0027


class CTractionSystemTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CTractionSystemTestPage)
public:
    CTractionSystemTestPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnLeavePage();
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
    void OnHighTestStartBtnClk();
    void OnLowerTestStartBtnClk();

private:
    bool m_bHighTestStartBtnDown;
    bool m_bLowTestStartBtnDown;
    bool m_TestStartBtnDown;
    int flag_test1;
    int flag_test2;
    void UpTCUVer();
    void UpHighPressTest();
    void UpLowerPressTest();
    void UpPressTestStatus();
    void SetPTStatusColor(int id, int colorVal);
    void SetTCUVersion(int id, QString vVal);
    void SetPressTestValue(int id, QString rValue);
    void SetPTColor(int id, int colorVal);
    void ResetUI();
    void OnVVVFClk();
    void OnVVVF1Clk();
    void OnVVVF2Clk();
    void OnTEST1Clk();
    void OnTEST2Clk();
    void OnTEST3Clk();
    void OnTEST4Clk();
    void OnTEST5Clk();
    void OnTEST6Clk();
    void OnTEST7Clk();
    void OnTEST8Clk();
    void OnTEST9Clk();
    void OnTEST10Clk();
    void SetCtrlButtonState(int nID);
    void ReSetCtrlButtonState();
    void SetTCU_test_LabelString(int id, QString StringVal);
    void SetTCU_test_resultColor(int id, int colorVal);
    void Updateresult();

    void SetLabelBkColorCar(int id, int colorVal);
    int VVVF_select_color;
    void OnTCU_test_StopClk();
};

#endif // CTractionSystemTestPage_H
