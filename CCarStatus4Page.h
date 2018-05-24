#ifndef CCarStatus4Page_H
#define CCarStatus4Page_H

#include "CPage.h"
#include "DataBuffer.h"

#define   ID_PIBCARS2_ICON_WARNNING                0X0001
#define   ID_PIBCARS2_TRAIN                        0X0002
#define   ID_PIBCARS2_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS2_ARROW_LEFT                   0X0004
#define   ID_PIBCARS2_LABEL_ATOMODE                0X0005
#define   ID_PIBCARS4_BUTTON_EMERGENCYBROADCAST    0X0006
#define   ID_PIBCARS2_BUTTON_PAGEUP                0X0007
#define   ID_PIBCARS2_BUTTON_PAGEDOWN              0X0008
//#define   ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE       0X0009
//#define   ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE       0X000A
//#define   ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE       0X000B
//#define   ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE       0X000C
#define   ID_PIBCARS4_LABEL_CAR1BCUPRESSURE1       0X0009
#define   ID_PIBCARS4_LABEL_CAR2BCUPRESSURE1       0X000A
#define   ID_PIBCARS4_LABEL_CAR3BCUPRESSURE1       0X000B
#define   ID_PIBCARS4_LABEL_CAR4BCUPRESSURE1       0X000C
#define   ID_PIBCARS2_LABEL_CRA2DYNAMOREV          0X000D
#define   ID_PIBCARS2_LABEL_CRA3DYNAMOREV          0X000E
//#define   ID_PIBCARS2_LABEL_CRA4DYNAMOREV          0X000F
//#define   ID_PIBCARS2_LABEL_CRA5DYNAMOREV          0X0010
#define   ID_PIBCARS2_LABEL_CRA2HSCBSTATUS         0X0011
#define   ID_PIBCARS2_LABEL_CRA3HSCBSTATUS         0X0012
#define   ID_PIBCARS2_LABEL_CRA6ATC1STATUS         0X0013
#define   ID_PIBCARS2_LABEL_CRA6ATC2STATUS         0X0014
#define   ID_PIBCARS2_LABEL_CRA3KICSTATE           0X0015
#define   ID_PIBCARS2_LABEL_CRA2KCCCSTATE          0X0016
#define   ID_PIBCARS2_LABEL_CRA3KCCCSTATE          0X0017
//#define   ID_PIBCARS2_LABEL_CRA4KCCCSTATE          0X0018
//#define   ID_PIBCARS2_LABEL_CRA5KCCCSTATE          0X0019
#define   ID_PIBCARS2_LABEL_CRA1K750STATUS         0X001A
#define   ID_PIBCARS2_LABEL_CRA6K750STATUS         0X001B
#define   ID_PIBCARS2_LABEL_CRA1ATC1STATUS         0X001C
#define   ID_PIBCARS2_LABEL_CRA1ATC2STATUS         0X001D
#define   ID_PIBCARS2_LABEL_CRA2KICSTATE           0X001E
//#define   ID_PIBCARS2_LABEL_CRA4KICSTATE           0X001F
//#define   ID_PIBCARS2_LABEL_CRA5KICSTATE           0X0028
#define   ID_PIBCARS2_LABEL_NETVOLTAGE             0X0029
#define   ID_PIBCARS2_LABEL_NECURRENT              0X002A//ADD
#define   ID_PIBCARS2_LABEL_DRAWBCUGRADE           0X0020

#define   ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE       0X0022
//#define   ID_PIBCARS2_LABEL_CRA4HSCBSTATUS         0X0023
//#define   ID_PIBCARS2_LABEL_CRA5HSCBSTATUS         0X0024
#define   ID_PIBCARS2_LABEL_CRA1PISSTATUS          0X0025
#define   ID_PIBCARS2_LABEL_CRA6PISSTATUS          0X0026
//#define   ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE       0X0027
#define   ID_PIBCARS2_COMMINTERRUPT                0X002B
#define   ID_PIBCARS2_LABEL_V                      0X002C
#define   ID_PIBCARS2_LABEL_NETMODE                0X002D
//#define   ID_PIBCARS2_LABEL_CONTRAVARIANTMODE      0X002E
#define   ID_PIBCARS4_LABEL_HIGHACCEMODE      0X002E
#define   ID_PIBCARS4_LABEL_WASHCARMODE            0X002F

#define ID_PIBCARS2_LABEL_A                   0X0030
#define ID_PIBCARS2_LABEL_TRACTIONMODEL       0X0031
#define ID_PIBCARS2_LABEL_SPEED               0X0032

#define ID_PIBCARS2_BUTTON_EMERGENCYRESCUE    0X0033
#define ID_PIBCARS2_BUTTON_FASPAGE            0X0034

//#define ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE              0X0035
//#define ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE              0X0036
#define ID_PIBCARS2_LABEL_CAR2EBCUTOUT              0X0035
#define ID_PIBCARS2_LABEL_CAR3EBCUTOUT              0X0036
#define ID_PIBCARS4_LABEL_CAR1BCUSEPARATE1              0X0037
#define ID_PIBCARS4_LABEL_CAR1BCUSEPARATE2              0X0038
#define ID_PIBCARS4_LABEL_CAR2BCUSEPARATE1              0X0039
#define ID_PIBCARS4_LABEL_CAR2BCUSEPARATE2              0X003A
#define ID_PIBCARS4_LABEL_CAR3BCUSEPARATE1              0X003B
#define ID_PIBCARS4_LABEL_CAR3BCUSEPARATE2              0X003C
#define ID_PIBCARS4_LABEL_CAR4BCUSEPARATE1              0X003D
#define ID_PIBCARS4_LABEL_CAR4BCUSEPARATE2              0X003E

#define ID_PIBCARS2_LABEL_TCU_ENABLE1                   0X003F
#define ID_PIBCARS2_LABEL_TCU_ENABLE2                   0X0040

#define   ID_PIBCARS4_LABEL_CAR1AIRCOMPRESSORSTATE          0X0041
#define   ID_PIBCARS4_LABEL_CAR4AIRCOMPRESSORSTATE          0X0042

#define   ID_PIBCARS4_LABEL_CRA1MAINAIRPRESS         0X0043
#define   ID_PIBCARS4_LABEL_CRA2MAINAIRPRESS         0X0044

#define   ID_PIBCARS4_LABEL_CRA3MAINAIRPRESS           0X0045
#define   ID_PIBCARS4_LABEL_CRA4MAINAIRPRESS           0X0046

//#define   ID_PIBCARS2_LABEL_CRA6KCCCSTATE          0X0045
//#define   ID_PIBCARS2_LABEL_CRA7KCCCSTATE          0X0046

//#define   ID_PIBCARS2_LABEL_CAR1IESSTATE           0X0047
#define   ID_PIBCARS2_LABEL_CAR2IESSTATE           0X0047
//#define   ID_PIBCARS2_LABEL_CAR8IESSTATE           0X0048

#define   ID_PIBCARS2_LABEL_CAR2Mainfuse1           0X0049
//#define   ID_PIBCARS2_LABEL_CAR4Mainfuse1           0X004A
#define   ID_PIBCARS2_LABEL_CAR3Mainfuse1           0X004A

//#define   ID_PIBCARS2_LABEL_CAR7Mainfuse1           0X004B

//#define   ID_PIBCARS4_LABEL_TOWMODE                0X004C
#define   ID_PIBCARS4_LABEL_EMERGENCYMODE                0X004C

#define   ID_PIBCARS2_LABEL_CAR2Mainfuse2           0X004D
//#define   ID_PIBCARS2_LABEL_CAR4Mainfuse2           0X004E
#define   ID_PIBCARS2_LABEL_CAR3Mainfuse2           0X004E
//#define   ID_PIBCARS2_LABEL_CAR7Mainfuse2           0X004F

//#define   ID_PIBCARS2_LABEL_CAR4IESSTATE           0X0050
#define   ID_PIBCARS2_LABEL_CAR3IESSTATE           0X0050
#define   ID_PIBCARS2_LABEL_CAR1IESSTATE           0X0051
#define   ID_PIBCARS2_LABEL_CAR4IESSTATE           0X0052

#define ID_PIBCARS4_LABEL_CAR1ASPRESS1             0X0053
#define ID_PIBCARS4_LABEL_CAR1ASPRESS2             0X0054
#define ID_PIBCARS4_LABEL_CAR2ASPRESS1             0X0055
#define ID_PIBCARS4_LABEL_CAR2ASPRESS2             0X0056
#define ID_PIBCARS4_LABEL_CAR3ASPRESS1             0X0057
#define ID_PIBCARS4_LABEL_CAR3ASPRESS2             0X0058
#define ID_PIBCARS4_LABEL_CAR4ASPRESS1             0X0059
#define ID_PIBCARS4_LABEL_CAR4ASPRESS2             0X005A
#define ID_PIBCARS4_LABEL_CAR1LOADCAPACITY         0X005B
#define ID_PIBCARS4_LABEL_CAR2LOADCAPACITY         0X005C
#define ID_PIBCARS4_LABEL_CAR3LOADCAPACITY         0X005D
#define ID_PIBCARS4_LABEL_CAR4LOADCAPACITY         0X005E
#define ID_PIBCARS4_LABEL_CAR1ABSPEED              0X005F
#define ID_PIBCARS4_LABEL_CAR2ABSPEED              0X0060
#define ID_PIBCARS4_LABEL_CAR3ABSPEED              0X0061
#define ID_PIBCARS4_LABEL_CAR4ABSPEED              0X0062
#define ID_PIBCARS4_LABEL_TCU1LOADPWM              0x0063
#define ID_PIBCARS4_LABEL_TCU2LOADPWM              0x0064
#define ID_PIBCARS4_LABEL_FDBK1PWM              0x0065
#define ID_PIBCARS4_LABEL_FDBK2PWM              0x0066
#define ID_PIBCARS4_LABEL_ZREOSPEED1            0X0067
#define ID_PIBCARS4_LABEL_ZREOSPEED2            0X0068
#define ID_PIBCARS4_LABEL_ZREOSPEED3            0X0069
#define ID_PIBCARS4_LABEL_ZREOSPEED4            0X006A
#define  ID_PIBCARS4_LABEL_WSP1                 0X006B
#define  ID_PIBCARS4_LABEL_WSP2                 0X006C
#define  ID_PIBCARS4_LABEL_WSP3                 0X006D
#define  ID_PIBCARS4_LABEL_WSP4                 0X006E
#define ID_PIBCARS4_LABEL_AIRBRK1               0X006F
#define ID_PIBCARS4_LABEL_AIRBRK2               0X0070
#define ID_PIBCARS4_LABEL_AIRBRK3               0X0071
#define ID_PIBCARS4_LABEL_AIRBRK4               0X0072

#define ID_PIBCARS4_LABEL_AX1WSP1               0X0073
#define ID_PIBCARS4_LABEL_AX2WSP1               0X0074
#define ID_PIBCARS4_LABEL_AX3WSP1               0X0075
#define ID_PIBCARS4_LABEL_AX4WSP1               0X0076

#define ID_PIBCARS4_LABEL_AX1WSP2               0X0077
#define ID_PIBCARS4_LABEL_AX2WSP2               0X0078
#define ID_PIBCARS4_LABEL_AX3WSP2               0X0079
#define ID_PIBCARS4_LABEL_AX4WSP2               0X0080

#define ID_PIBCARS4_LABEL_AX1WSP3               0X0081
#define ID_PIBCARS4_LABEL_AX2WSP3               0X0082
#define ID_PIBCARS4_LABEL_AX3WSP3               0X0083
#define ID_PIBCARS4_LABEL_AX4WSP3               0X0084

#define ID_PIBCARS4_LABEL_AX1WSP4               0X0085
#define ID_PIBCARS4_LABEL_AX2WSP4               0X0086
#define ID_PIBCARS4_LABEL_AX3WSP4               0X0087
#define ID_PIBCARS4_LABEL_AX4WSP4               0X0088

#define ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1     0X0089
#define ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2     0X008A
#define ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3     0X008B
#define ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4     0X008C
#define ID_PIBCARS4_LABEL_CAR1BRAVEKEEP         0X008D
#define ID_PIBCARS4_LABEL_CAR2BRAVEKEEP         0X008E
#define ID_PIBCARS4_LABEL_CAR3BRAVEKEEP         0X008F
#define ID_PIBCARS4_LABEL_CAR4BRAVEKEEP         0X0090

#define ID_PIBCARS4_LABEL_CAR1PLACESTATE        0X0091
#define ID_PIBCARS4_LABEL_CAR2PLACESTATE        0X0092
#define ID_PIBCARS4_LABEL_CAR3PLACESTATE        0X0093
#define ID_PIBCARS4_LABEL_CAR4PLACESTATE        0X0094

extern vector<CPage*>  g_PageVec;

class CCarStatus4Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus4Page)
public:
    CCarStatus4Page();

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
    void OnPageUpBtnClk();
    void OnPageDownBtnClk();
    void OnRealTimeFaultsWarnningIconClk();

    //void UpdateHSCB();
    //void UpdateKIC();
    //void UpdateKCCC();
    void UpdateK750();
    void UpdateATC();
    void UpdatePIS();
    //void UpdateDrawBCUForce();
    //void UpdateDynamorev();
    void UpdateMainfuse();

    void UpdateATOMode();

    void UpdateNETMode();
    //void UpdateContravariant();
    void UpdateWashCarMode();
    //void UpdateTowMode();
    void UpdateHighAcceMode();
    void UpdateEmergencyMode();
    void UpdateIES();


    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
//    void UpdateEmergencyBroadcast();

    void SetHscbLabelColor(int id, int colorVal);
    void SetKicLabelColor(int id, int colorVal);
    void SetKcccLabelColor(int id, int colorVal);
    void SetK750LabelColor(int id, int colorVal);
    void SetAtcLabelColor(int id, int colorVal);
    void SetPisLabelColor(int id, int colorVal);
    void SetTCUStatusLsbelColor(int id,int colorVal);
    void SetMainfuseLabelColor(int id, int colorVal);


    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void SetCommInterruptLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();
    void UpdateTcu_Enable();
    void UpdateTCUStatus();

    void SetBCUPressureLabelColor(int id, int colorVal);
    void UpdateBCUPressure();
    void SetCompressorStatusLabelColor(int id, int colorVal);
    void UpdateCompressorStatus();
    void UpdateBCUSeparater();
    void SetBCUSeparaterLabelColor(int id, int colorVal);
    void UpdateMainAirPress();
    void SetMainAirPressureLabelColor(int id, int colorVal);
    void UpdateASPressure();
    void OnEMERGENCYBROADCASTpageBtnClk();
    void UpdateLoadCapacity();
    void UpdateABSpeed();
    void UpdatePWM();
    void UpdateZeroSpeed();
    void UpdateWSP();
    void UpdateEBCutOutReq();
    void UpdateAXWSP();
    //void UpdateAirBrk();
    void SetAirBrkLabelColor(int id, int colorVal);
    void SetBCU_selftest_LabelColor(int id, int colorVal);
    void UpdateEBCircuitStatus();//紧急制动线状态
    void UpdatePlaceStatus();
    void UpdateBravekeepStatus();
    void SetPlaceStatusLabelColor(int id, int colorVal);

};

#endif // CCarStatus4Page_H
