#ifndef CFaultPage_H
#define CFaultPage_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_FAULT_TRAIN                 0x0001

#define ID_FAULT_ARROW_RIGHT           0x0002
#define ID_FAULT_ARROW_LEFT            0x0003
#define ID_FAULT_LABEL_VVALUE          0x0004
#define ID_FAULT_LABEL_AVALUE          0x0005
#define ID_FAULT_LABEL_TRACTIONMODEL   0x0006
#define ID_FAULT_LABEL_SPEED           0x0007

#define ID_FAULT_ICON_WARNNING         0x0008
//#define ID_FAULT_BUTTON_THREELEVEL     0x0009


#define ID_FAULT_LABEL_CAB1            0x000A
#define ID_FAULT_LABEL_CAB6            0x000B
#define ID_FAULT_LABEL_ATC1            0x000C
#define ID_FAULT_LABEL_ATC6            0x000D

#define ID_FAULT_LABEL_TCU2            0x000E
#define ID_FAULT_LABEL_TCU3            0x000F
#define ID_FAULT_LABEL_TCU4            0x0010
#define ID_FAULT_LABEL_TCU5            0x0011

#define ID_FAULT_LABEL_ACU1            0x0012
#define ID_FAULT_LABEL_ACU6            0x0013


#define ID_FAULT_LABEL_HVAC1           0x0014
#define ID_FAULT_LABEL_HVAC2           0x0015
#define ID_FAULT_LABEL_HVAC3           0x0016
#define ID_FAULT_LABEL_HVAC4           0x0017
#define ID_FAULT_LABEL_HVAC5           0x0018
#define ID_FAULT_LABEL_HVAC6           0x0019


#define ID_FAULT_LABEL_PIS1           0x001A
#define ID_FAULT_LABEL_PIS2           0x001B
#define ID_FAULT_LABEL_PIS3           0x001C
#define ID_FAULT_LABEL_PIS4           0x001D
#define ID_FAULT_LABEL_PIS5           0x001E
#define ID_FAULT_LABEL_PIS6           0x001F


#define ID_FAULT_LABEL_DOOR1CAR1INFO1           0x0020
#define ID_FAULT_LABEL_DOOR1CAR1INFO2           0x0021
#define ID_FAULT_LABEL_DOOR1CAR1INFO3           0x0022
#define ID_FAULT_LABEL_DOOR1CAR1INFO4           0x0023

#define ID_FAULT_LABEL_DOOR2CAR1INFO1           0x0024
#define ID_FAULT_LABEL_DOOR2CAR1INFO2           0x0025
#define ID_FAULT_LABEL_DOOR2CAR1INFO3           0x0026
#define ID_FAULT_LABEL_DOOR2CAR1INFO4           0x0027

#define ID_FAULT_LABEL_DOOR1CAR2INFO1           0x0028
#define ID_FAULT_LABEL_DOOR1CAR2INFO2           0x0029
#define ID_FAULT_LABEL_DOOR1CAR2INFO3           0x002A
#define ID_FAULT_LABEL_DOOR1CAR2INFO4           0x002B

#define ID_FAULT_LABEL_DOOR2CAR2INFO1           0x002C
#define ID_FAULT_LABEL_DOOR2CAR2INFO2           0x002D
#define ID_FAULT_LABEL_DOOR2CAR2INFO3           0x002E
#define ID_FAULT_LABEL_DOOR2CAR2INFO4           0x002F

#define ID_FAULT_LABEL_DOOR1CAR3INFO1           0x0030
#define ID_FAULT_LABEL_DOOR1CAR3INFO2           0x0031
#define ID_FAULT_LABEL_DOOR1CAR3INFO3           0x0032
#define ID_FAULT_LABEL_DOOR1CAR3INFO4           0x0033

#define ID_FAULT_LABEL_DOOR2CAR3INFO1           0x0034
#define ID_FAULT_LABEL_DOOR2CAR3INFO2           0x0035
#define ID_FAULT_LABEL_DOOR2CAR3INFO3           0x0036
#define ID_FAULT_LABEL_DOOR2CAR3INFO4           0x0037

#define ID_FAULT_LABEL_DOOR1CAR4INFO1           0x0038
#define ID_FAULT_LABEL_DOOR1CAR4INFO2           0x0039
#define ID_FAULT_LABEL_DOOR1CAR4INFO3           0x003A
#define ID_FAULT_LABEL_DOOR1CAR4INFO4           0x003B

#define ID_FAULT_LABEL_DOOR2CAR4INFO1           0x003C
#define ID_FAULT_LABEL_DOOR2CAR4INFO2           0x003D
#define ID_FAULT_LABEL_DOOR2CAR4INFO3           0x003E
#define ID_FAULT_LABEL_DOOR2CAR4INFO4           0x003F

#define ID_FAULT_LABEL_DOOR1CAR5INFO1           0x0040
#define ID_FAULT_LABEL_DOOR1CAR5INFO2           0x0041
#define ID_FAULT_LABEL_DOOR1CAR5INFO3           0x0042
#define ID_FAULT_LABEL_DOOR1CAR5INFO4           0x0043

#define ID_FAULT_LABEL_DOOR2CAR5INFO1           0x0044
#define ID_FAULT_LABEL_DOOR2CAR5INFO2           0x0045
#define ID_FAULT_LABEL_DOOR2CAR5INFO3           0x0046
#define ID_FAULT_LABEL_DOOR2CAR5INFO4           0x0047

#define ID_FAULT_LABEL_DOOR1CAR6INFO1           0x0048
#define ID_FAULT_LABEL_DOOR1CAR6INFO2           0x0049
#define ID_FAULT_LABEL_DOOR1CAR6INFO3           0x004A
#define ID_FAULT_LABEL_DOOR1CAR6INFO4           0x004B

#define ID_FAULT_LABEL_DOOR2CAR6INFO1           0x004C
#define ID_FAULT_LABEL_DOOR2CAR6INFO2           0x004D
#define ID_FAULT_LABEL_DOOR2CAR6INFO3           0x004E
#define ID_FAULT_LABEL_DOOR2CAR6INFO4           0x004F

#define ID_LABEL_V                         0x0050
#define ID_LABEL_A                         0x0051
#define ID_LABEL_TRACTIONMODEL             0x0052
#define ID_LABEL_SPEED                     0x0053


#define ID_FAULT_BTN_CAB           0x0054
#define ID_FAULT_BTN_ATC           0x0055
#define ID_FAULT_BTN_TCU           0x0056
#define ID_FAULT_BTN_ACU           0x0057
#define ID_FAULT_BTN_BCU           0x0058
#define ID_FAULT_BTN_HVAC          0x0059
#define ID_FAULT_BTN_PIS           0x005A
#define ID_FAULT_BTN_TCMS          0x005B
//#define ID_FAULT_BTN_DOOR1         0x0074
//#define ID_FAULT_BTN_DOOR2         0x0075
#define ID_FAULT_BTN_DOOR          0x005C
#define ID_FAULT_BTN_TL            0x005D
#define ID_FAULT_BTN_RESERVE       0x005E

#define ID_FAULT_COMMINTERRUPT     0x005F

#define ID_FAULT_LABEL_TL1            0x0060
#define ID_FAULT_LABEL_TL6            0x0061

#define ID_FAULT_LABEL_BCU1           0x0062
#define ID_FAULT_LABEL_BCU2           0x0063
#define ID_FAULT_LABEL_BCU3           0x0064
#define ID_FAULT_LABEL_BCU4           0x0065
#define ID_FAULT_LABEL_BCU5           0x0066
#define ID_FAULT_LABEL_BCU6           0x0067

#define ID_FAULT_BUTTON_LEVEL3FAULT  0x0068

#define ID_FAULT_LABEL_TCMS1          0x0069
#define ID_FAULT_LABEL_TCMS2          0x006A
#define ID_FAULT_LABEL_TCMS3          0x006B
#define ID_FAULT_LABEL_TCMS4          0x006C
#define ID_FAULT_LABEL_TCMS5          0x006D
#define ID_FAULT_LABEL_TCMS6          0x006E

#define ID_FAULT_LABEL_DOOR1CAR1INFO9           0x006F
#define ID_FAULT_LABEL_DOOR2CAR1INF10           0x0070
#define ID_FAULT_LABEL_DOOR2CAR8INFO9           0x0071
#define ID_FAULT_LABEL_DOOR1CAR8INF10           0x0072

#define ID_FAULT_LABEL_DOOR1CAR7INFO1           0x0073
#define ID_FAULT_LABEL_DOOR1CAR7INFO2           0x0074
#define ID_FAULT_LABEL_DOOR1CAR7INFO3           0x0075
#define ID_FAULT_LABEL_DOOR1CAR7INFO4           0x0076

#define ID_FAULT_LABEL_DOOR2CAR7INFO1           0x0077
#define ID_FAULT_LABEL_DOOR2CAR7INFO2           0x0078
#define ID_FAULT_LABEL_DOOR2CAR7INFO3           0x0079
#define ID_FAULT_LABEL_DOOR2CAR7INFO4           0x007A

#define ID_FAULT_LABEL_DOOR1CAR8INFO1           0x007B
#define ID_FAULT_LABEL_DOOR1CAR8INFO2           0x007C
#define ID_FAULT_LABEL_DOOR1CAR8INFO3           0x007D
#define ID_FAULT_LABEL_DOOR1CAR8INFO4           0x007E

#define ID_FAULT_LABEL_DOOR2CAR8INFO1           0x007F
#define ID_FAULT_LABEL_DOOR2CAR8INFO2           0x0080
#define ID_FAULT_LABEL_DOOR2CAR8INFO3           0x0081
#define ID_FAULT_LABEL_DOOR2CAR8INFO4           0x0082

#define ID_FAULT_LABEL_TCMS7          0x0083
#define ID_FAULT_LABEL_TCMS8          0x0084

#define ID_FAULT_LABEL_TCU6            0x0085
#define ID_FAULT_LABEL_TCU7            0x0086

#define ID_FAULT_LABEL_BCU7           0x0087
#define ID_FAULT_LABEL_BCU8           0x0088

#define ID_FAULT_LABEL_FAS1          0x0089
#define ID_FAULT_LABEL_FAS2          0x008A
#define ID_FAULT_LABEL_FAS3          0x008B
#define ID_FAULT_LABEL_FAS4          0x008C
#define ID_FAULT_LABEL_FAS5          0x008D
#define ID_FAULT_LABEL_FAS6          0x008E
#define ID_FAULT_LABEL_FAS7          0x008F
#define ID_FAULT_LABEL_FAS8          0x0090

#define ID_FAULT_LABEL_HVAC7           0x0091
#define ID_FAULT_LABEL_HVAC8           0x0092

#define ID_FAULT_LABEL_PIS7           0x0093
#define ID_FAULT_LABEL_PIS8           0x0094


extern vector<CPage*>  g_PageVec;

class CFaultPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CFaultPage)
public:
    CFaultPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();


private:
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

    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();


    void UpdateDeviceFaultsStatus();

    void OnBtnCabClk();
    void OnBtnAtcClk();
    void OnBtnTcuClk();
    void OnBtnAcuClk();
    void OnBtnBcuClk();
    void OnBtnHvacClk();
    void OnBtnPisClk();
    void OnBtnTcmsClk();
    void OnBtnReserveClk();
    void OnBtnDoorClk();
    void OnBtnTlClk();
    void OnRealTimeFaultsWarnningIconClk();
    void OnLevel3FaultBtnCLK();

    void UpdateNetFaultsStatus();
    void UpdateDoorFaultsStatus();
    bool CheckFaultExist(int category, int position);
    bool CheckDoorFaultExist(int category, int position, int doornum);
    int GetDoorNum(int errCode);
};

#endif // CFaultPage_H
