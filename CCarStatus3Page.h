#ifndef CCarStatus3Page_H
#define CCarStatus3Page_H

#include "CPage.h"
#include "DataBuffer.h"

#define   ID_PIBCARS3_ICON_WARNNING                0X0001
#define   ID_PIBCARS3_TRAIN                        0X0002
#define   ID_PIBCARS3_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS3_ARROW_LEFT                   0X0004
#define   ID_PIBCARS3_LABEL_ATOMODE               0X0005
#define   ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST    0X0006
#define   ID_PIBCARS3_BUTTON_PAGEUP                0X0007
#define   ID_PIBCARS3_BUTTON_PAGEDOWN              0X0008
#define   ID_PIBCARS3_LABEL_NETVOLTAGE             0X0009
#define   ID_PIBCARS3_LABEL_NECURRENT              0X000A
#define   ID_PIBCARS3_LABEL_DRAWBCUGRADE           0X000B

#define   ID_PIBCARS3_LABEL_CAR1AEROSPEED          0X000D
#define   ID_PIBCARS3_LABEL_CAR4AEROSPEED          0X000E
#define   ID_PIBCARS3_LABEL_CAR1DOOR               0X000F
#define   ID_PIBCARS3_LABEL_CAR4DOOR               0X0010
#define   ID_PIBCARS3_LABEL_CAR1PLACEREMIT         0X0011
#define   ID_PIBCARS3_LABEL_CAR4PLACEREMIT         0X0012
#define   ID_PIBCARS3_LABEL_CAR1COMMONUSEREMIT     0X0013
#define   ID_PIBCARS3_LABEL_CAR4COMMONUSEREMIT     0X0014
#define   ID_PIBCARS3_LABEL_CAR1WINDPRESSLOW       0X0015
#define   ID_PIBCARS3_LABEL_CAR4WINDPRESSLOW       0X0016
#define   ID_PIBCARS3_COMMINTERRUPT                0X0017
#define   ID_PIBCARS3_LABEL_V                      0X0018
#define   ID_PIBCARS3_LABEL_NETMODE                0X0019
//#define   ID_PIBCARS3_LABEL_CONTRAVARIANTMODE      0X001A
#define   ID_PIBCARS3_LABEL_HIGHACCEMODE           0X001A
#define   ID_PIBCARS3_LABEL_WASHCARMODE            0X001B
#define   ID_PIBCARS3_LABEL_A                      0X001C
#define   ID_PIBCARS3_LABEL_TRACTIONMODEL          0X001D
#define   ID_PIBCARS3_LABEL_SPEED                  0X001E
#define   ID_PIBCARS3_BUTTON_EMERGENCYRESCUE       0X001F
#define   ID_PIBCARS3_LABEL_CAR1JJZDHL             0x0020
#define   ID_PIBCARS3_LABEL_CAR4JJZDHL             0x0021

#define     ID_PIBCARS3_BUTTON_FASPAGE             0X0022

#define   ID_PIBCARS3_LABEL_CAR1ATPCUT             0x0023
#define   ID_PIBCARS3_LABEL_CAR4ATPCUT             0x0024

#define   ID_PIBCARS3_LABEL_CAR1ZVBACUT            0x0025
#define   ID_PIBCARS3_LABEL_CAR6ZVBACUT            0x0026

//#define   ID_PIBCARS3_LABEL_TOWMODE                0X0027
#define   ID_PIBCARS3_LABEL_EMERGENCYMODE                0X0027

#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass1          0x0028
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass2          0x0029
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass3          0x002A
#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass4          0x002B
//#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass5          0x002C
//#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass6          0x002D
//#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass7          0x002E
//#define   ID_PIBCARS3_LABEL_CommonBrakeAppBypass8          0x002F


#define   ID_PIBCARS3_LABEL_CommonBrakeRelBypass1          0x0030
#define   ID_PIBCARS3_LABEL_CommonBrakeRelBypass2          0x0031
#define   ID_PIBCARS3_LABEL_CAR1EMERBRAKE          0x0032
#define   ID_PIBCARS3_LABEL_CAR4EMERBRAKE          0x0033





extern vector<CPage*>  g_PageVec;

class CCarStatus3Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus3Page)
public:
    CCarStatus3Page();

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
    void OnPageDownBtnClk();
    void OnRealTimeFaultsWarnningIconClk();
    void UpdateColor();
    void UpdateATOMode();
    void UpdateNETMode();
    //void UpdateContravariant();
    void UpdateHighAcceMode();
    void UpdateWashCarMode();
   // void UpdateTowMode();
    void UpdateEmergencyMode();
    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
//    void UpdateEmergencyBroadcast();

    void SetLabelColor(int id, int colorVal);
    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();
    void OnEMERGENCYBROADCASTpageBtnClk();

};

#endif // CCarStatus3Page_H
