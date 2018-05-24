#ifndef CCarStatus1Page_H
#define CCarStatus1Page_H

#include "CPage.h"
#include "DataBuffer.h"

#define   ID_PIBCARS1_ICON_WARNNING                0X0001
#define   ID_PIBCARS1_TRAIN                        0X0002
#define   ID_PIBCARS1_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS1_ARROW_LEFT                   0X0004
#define   ID_PIBCARS1_LABEL_ATOMODE                0X0005
#define   ID_PIBCARS1_LABEL_NETMODE                0X0006
//#define   ID_PIBCARS1_LABEL_CONTRAVARIANTMODE     0X0007
#define   ID_PIBCARS1_LABEL_HIGHACCEMODE     0X0007
#define   ID_PIBCARS1_LABEL_WASHCARMODE            0X0008
#define   ID_PIBCARS1_LABEL_EMERGENCYBROADCAST     0X0009
#define   ID_PIBCARS1_BUTTON_PAGEUP                0X000A
#define   ID_PIBCARS1_BUTTON_PAGEDOWN              0X000B
#define   ID_PIBCARS1_LABEL_CAR1IESSTATE           0X000C
#define   ID_PIBCARS1_LABEL_CAR6IESSTATE           0X000D
#define   ID_PIBCARS1_LABEL_CAR1RIDINGRATE         0X000E
#define   ID_PIBCARS1_LABEL_CAR2RIDINGRATE         0X000F
#define   ID_PIBCARS1_LABEL_CAR3RIDINGRATE         0X0010
#define   ID_PIBCARS1_LABEL_CAR4RIDINGRATE         0X0011
#define   ID_PIBCARS1_LABEL_CAR5RIDINGRATE         0X0012
#define   ID_PIBCARS1_LABEL_CAR6RIDINGRATE         0X0013
#define   ID_PIBCARS1_LABEL_CAR3KAUXSTATE          0X0014
#define   ID_PIBCARS1_LABEL_CAR1VOLTAGE            0X0015
#define   ID_PIBCARS1_LABEL_CAR6VOLTAGE            0X0016
#define   ID_PIBCARS1_LABEL_CAR1CHARGECURRENT      0X0017
#define   ID_PIBCARS1_LABEL_CAR4CHARGECURRENT      0X0018
#define   ID_PIBCARS1_LABEL_CAR1BATTERTEMP         0X0019
#define   ID_PIBCARS1_LABEL_CAR4BATTERTEMP         0X001A

#define   ID_PIBCARS1_LABEL_DRAWBCUGRADE           0X001D

#define   ID_PIBCARS1_LABEL_CAR1VEER1LOAD          0X001F
#define   ID_PIBCARS1_LABEL_CAR1VEER2LOAD          0X0020
#define   ID_PIBCARS1_LABEL_CAR2VEER1LOAD          0X0021
#define   ID_PIBCARS1_LABEL_CAR2VEER2LOAD          0X0022
#define   ID_PIBCARS1_LABEL_CAR3VEER1LOAD          0X0023
#define   ID_PIBCARS1_LABEL_CAR3VEER2LOAD          0X0024
#define   ID_PIBCARS1_LABEL_CAR4VEER1LOAD          0X0025
#define   ID_PIBCARS1_LABEL_CAR4VEER2LOAD          0X0026
#define   ID_PIBCARS1_LABEL_CAR5VEER1LOAD          0X0027
#define   ID_PIBCARS1_LABEL_CAR5VEER2LOAD          0X0028
#define   ID_PIBCARS1_LABEL_CAR6VEER1LOAD          0X0029
#define   ID_PIBCARS1_LABEL_CAR6VEER2LOAD          0X002A
#define   ID_PIBCARS1_LABEL1_CAR1ASSISTSYS         0X002B
#define   ID_PIBCARS1_LABEL2_CAR1ASSISTSYS         0X002C
#define   ID_PIBCARS1_LABEL3_CAR1ASSISTSYS         0X002D
#define   ID_PIBCARS1_LABEL1_CAR4ASSISTSYS         0X002E
#define   ID_PIBCARS1_LABEL2_CAR6ASSISTSYS         0X002F
#define   ID_PIBCARS1_LABEL3_CAR6ASSISTSYS         0X0030
#define   ID_PIBCARS1_COMMINTERRUPT                0X0031
#define   ID_PIBCARS1_LABEL_VOLTAGEVALUE           0X0032
#define   ID_PIBCARS1_LABEL1_CAR1ASSISTSYS_V       0X0033
#define   ID_PIBCARS1_LABEL1_CAR1ASSISTSYS_A       0X0034
#define   ID_PIBCARS1_LABEL1_CAR6ASSISTSYS_V       0X0035
#define   ID_PIBCARS1_LABEL1_CAR6ASSISTSYS_A       0X0036
#define   ID_PIBCARS1_LABEL_CAR1SIGN               0X0037
#define   ID_PIBCARS1_LABEL_CAR6SIGN               0X0038
#define   ID_PIBCARS1_LABEL_DRAWBCU                0X0039
#define   ID_PIBCARS1_LABEL_DRAWBCUPERCENT         0X003A

#define ID_PIBCARS1_LABEL_V                   0X003B
#define ID_PIBCARS1_LABEL_A                   0X003C
#define ID_PIBCARS1_LABEL_TRACTIONMODEL       0X003D
#define ID_PIBCARS1_LABEL_SPEED               0X003E
#define ID_PIBCARS1_BUTTON_EMERGENCYRESCUE    0X003F
#define ID_PIBCARS1_BUTTON_BROADCAST          0x0040

#define ID_PIBCARS1_BUTTON_ACURESET           0x0041

//#define ID_PIBCARS1_LABEL_InhibitKAUXClose1       0X0042
//#define ID_PIBCARS1_LABEL_InhibitKAUXClose2       0X0043

#define ID_PIBCARS1_LABEL_ACU1INVOLTAGE       0X0042
#define ID_PIBCARS1_LABEL_ACU2INVOLTAGE       0X0043

#define ID_PIBCARS1_LABEL_CAR2Pantograph           0X0044
#define ID_PIBCARS1_LABEL_CAR4Pantograph           0X0045
#define ID_PIBCARS1_LABEL_CAR7Pantograph           0X0046

#define   ID_PIBCARS1_LABEL_CAR7RIDINGRATE         0X0047
#define   ID_PIBCARS1_LABEL_CAR8RIDINGRATE         0X0048

#define   ID_PIBCARS1_LABEL_CAR7VEER1LOAD          0X0049
#define   ID_PIBCARS1_LABEL_CAR7VEER2LOAD          0X004A
#define   ID_PIBCARS1_LABEL_CAR8VEER1LOAD          0X004B
#define   ID_PIBCARS1_LABEL_CAR8VEER2LOAD          0X004C

#define   ID_PIBCARS1_BUTTON_FASPAGE             0X004D

//#define   ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR         0X004E
//#define   ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR         0X004F

//#define ID_PIBCARS1_LABEL_TOWMODE                   0X0050
#define ID_PIBCARS1_LABEL_EMERGENCYMODE                   0X0050
#define   ID_PIBCARS1_LABEL_CAR2KAUXSTATE          0X0051
#define   ID_PIBCARS1_LABEL_CAR2KAUXSTATE1          0X0052
#define ID_PIBCARS1_LABEL_ACU1OUTVOLTAGE       0X0053
#define ID_PIBCARS1_LABEL_ACU2OUTVOLTAGE       0X0054

#define ID_PIBCARS1_LABEL_ACU1FREQUENCY       0X0055
#define ID_PIBCARS1_LABEL_ACU2FREQUENCY       0X0056
#define ID_PIBCARS1_LABEL_ACU1OUTCURRENT       0X0057
#define ID_PIBCARS1_LABEL_ACU2OUTCURRENT       0X0058
#define ID_PIBCARS1_LABEL_ACU1BATVOLTAGE      0X0059
#define ID_PIBCARS1_LABEL_ACU2BATVOLTAGE      0X005A
//#define ID_PIBCARS1_LABEL_EMERGENCYBROADCAST  0X005B






extern vector<CPage*>  g_PageVec;

class CCarStatus1Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus1Page)
public:
    CCarStatus1Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();

private:
    bool m_bResetACU;
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
    void OnACUReset();
    void OnRealTimeFaultsWarnningIconClk();
    void UpdateACU();
    void UpdateIES();
    void UpdateKAUX();
    void UpdateVeerLoad();
    void UpdateRidingRate();
    //void UpdateInhibitKAUXClose();
    void UpdateInPutVoltage();
    void UpdateOutPutVoltage();
    void UpdateOutFrequency();
    void UpdateOutCurrent();
    void UpdateBatVoltage();

    void UpdateATOMode();
    void UpdateChargeCurrent();
    void Update110Voltage();
    void UpdateBatteryTemp();

    void UpdateNETMode();
    //void UpdateContravariant();
    void UpdateWashCarMode();
    //void UpdateTowMode();
    void UpdateHighAcceMode();
    void UpdateEmergencyMode();

    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
    void UpdatePantographStatus();
    void UpdateEscapeDoor();
//    void UpdateEmergencyBroadcast();

    void SetAcuLabelColor(int id, int colorVal);
    void SetKauxLabelColor(int id, int colorVal);
    void SetVeerLoadLabelColor(int id, int colorVal);

    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();
    void OnEMERGENCYBROADCASTpageBtnClk();
};

#endif // CCarStatus1Page_H
