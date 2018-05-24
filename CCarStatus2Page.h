#ifndef CCarStatus2Page_H
#define CCarStatus2Page_H

#include "CPage.h"
#include "DataBuffer.h"

#define   ID_PIBCARS2_ICON_WARNNING                0X0001
#define   ID_PIBCARS2_TRAIN                        0X0002
#define   ID_PIBCARS2_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS2_ARROW_LEFT                   0X0004
#define   ID_PIBCARS2_LABEL_ATOMODE                0X0005
#define   ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST    0X0006
#define   ID_PIBCARS2_BUTTON_PAGEUP                0X0007
#define   ID_PIBCARS2_BUTTON_PAGEDOWN              0X0008
#define   ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE       0X0009
#define   ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE       0X000A
#define   ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE       0X000B
//#define   ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE       0X000C
//#define   ID_PIBCARS2_LABEL_CRA2DYNAMOREV          0X000D
//#define   ID_PIBCARS2_LABEL_CRA3DYNAMOREV          0X000E
#define   ID_PIBCARS2_LABEL_TCU1LOADOR          0X000D
#define   ID_PIBCARS2_LABEL_TCU2LOADOR          0X000E
//#define   ID_PIBCARS2_LABEL_CRA4DYNAMOREV          0X000F
//#define   ID_PIBCARS2_LABEL_CRA5DYNAMOREV          0X0010
#define   ID_PIBCARS2_LABEL_CRA2HSCBSTATUS         0X0011
#define   ID_PIBCARS2_LABEL_CRA3HSCBSTATUS         0X0012
#define   ID_PIBCARS2_LABEL_CRA6ATC1STATUS         0X0013
#define   ID_PIBCARS2_LABEL_CRA6ATC2STATUS         0X0014
#define    ID_PIBCARS2_LABEL_CRA2LB1STATE          0X0015
#define   ID_PIBCARS2_LABEL_CRA2LB2STATE          0X0016
#define   ID_PIBCARS2_LABEL_CRA3LB2STATE          0X0017
//#define   ID_PIBCARS2_LABEL_CRA4KCCCSTATE          0X0018
//#define   ID_PIBCARS2_LABEL_CRA5KCCCSTATE          0X0019
#define   ID_PIBCARS2_LABEL_CRA1K750STATUS         0X001A
#define   ID_PIBCARS2_LABEL_CRA6K750STATUS         0X001B
#define   ID_PIBCARS2_LABEL_CRA1ATC1STATUS         0X001C
#define   ID_PIBCARS2_LABEL_CRA1ATC2STATUS         0X001D
#define   ID_PIBCARS2_LABEL_CRA3LB1STATE            0X001E //LMH
//#define   ID_PIBCARS2_LABEL_CRA4KICSTATE           0X001F
//#define   ID_PIBCARS2_LABEL_CRA5KICSTATE           0X0028
#define   ID_PIBCARS2_LABEL_CRA2FILTERCVOLTAGE      0X001F
#define   ID_PIBCARS2_LABEL_CRA3FILTERCVOLTAGE      0X0028
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
#define   ID_PIBCARS2_LABEL_HIGHACCEMODE      0X002E
#define   ID_PIBCARS2_LABEL_WASHCARMODE            0X002F

#define ID_PIBCARS2_LABEL_A                   0X0030
#define ID_PIBCARS2_LABEL_TRACTIONMODEL       0X0031
#define ID_PIBCARS2_LABEL_SPEED               0X0032

#define ID_PIBCARS2_BUTTON_EMERGENCYRESCUE    0X0033
#define ID_PIBCARS2_BUTTON_FASPAGE            0X0034

//#define ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE              0X0035
//#define ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE              0X0036
#define ID_PIBCARS2_LABEL_TCU1TORQUECOM       0X0035
#define ID_PIBCARS2_LABEL_TCU2TORQUECOM       0X0036
//#define ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE              0X0037
//#define ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE              0X0038
//#define ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE              0X0039
//#define ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE              0X003A
#define ID_PIBCARS2_LABEL_TCU_ENABLE1                   0X003B
#define ID_PIBCARS2_LABEL_TCU_ENABLE2                   0X003C

//#define   ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE       0X003D
//#define   ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE       0X003E

//#define   ID_PIBCARS2_LABEL_CRA6DYNAMOREV          0X003F
//#define   ID_PIBCARS2_LABEL_CRA7DYNAMOREV          0X0040

//#define   ID_PIBCARS2_LABEL_CRA6HSCBSTATUS         0X0041
//#define   ID_PIBCARS2_LABEL_CRA7HSCBSTATUS         0X0042

//#define   ID_PIBCARS2_LABEL_CRA6KICSTATE           0X0043
//#define   ID_PIBCARS2_LABEL_CRA7KICSTATE           0X0044

//#define   ID_PIBCARS2_LABEL_CRA6KCCCSTATE          0X0045
//#define   ID_PIBCARS2_LABEL_CRA7KCCCSTATE          0X0046

//#define   ID_PIBCARS2_LABEL_CAR1IESSTATE           0X0047
#define   ID_PIBCARS2_LABEL_CAR2IESSTATE           0X0047
//#define   ID_PIBCARS2_LABEL_CAR8IESSTATE           0X0048

#define   ID_PIBCARS2_LABEL_CAR2Mainfuse1           0X0049
//#define   ID_PIBCARS2_LABEL_CAR4Mainfuse1           0X004A
#define   ID_PIBCARS2_LABEL_CAR3Mainfuse1           0X004A

//#define   ID_PIBCARS2_LABEL_CAR7Mainfuse1           0X004B

//#define   ID_PIBCARS2_LABEL_TOWMODE                0X004C
#define   ID_PIBCARS2_LABEL_EMERGENCYMODE                0X004C

#define   ID_PIBCARS2_LABEL_CAR2Mainfuse2           0X004D
//#define   ID_PIBCARS2_LABEL_CAR4Mainfuse2           0X004E
#define   ID_PIBCARS2_LABEL_CAR3Mainfuse2           0X004E
//#define   ID_PIBCARS2_LABEL_CAR7Mainfuse2           0X004F

//#define   ID_PIBCARS2_LABEL_CAR4IESSTATE           0X0050
#define   ID_PIBCARS2_LABEL_CAR3IESSTATE           0X0050
#define ID_PIBCARS2_LABEL_TCU1TORQUECUR           0X0051
#define ID_PIBCARS2_LABEL_TCU2TORQUECUR           0X0052
#define ID_PIBCARS2_LABEL_TCU1UCURRENT   0X0053
#define ID_PIBCARS2_LABEL_TCU2UCURRENT   0X0054
#define ID_PIBCARS2_LABEL_TCU1WCURRENT   0X0055
#define ID_PIBCARS2_LABEL_CURRENTEVALUE1   0X0056
#define ID_PIBCARS2_LABEL_CURRENTEVALUE2    0X0057
#define ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE 0X0058
#define ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE 0X0059
#define ID_PIBCARS2_LABEL_TCU_ENABLE2      0X005A
#define ID_PIBCARS2_LABEL_CRA2MAINLINEBREAKER  0X005B
#define ID_PIBCARS2_LABEL_CRA3MAINLINEBREAKER  0X005C
#define ID_PIBCARS2_LABEL_CRA2BHBCLOSE      0X005D
#define ID_PIBCARS2_LABEL_CRA3BHBCLOSE      0X005E

extern vector<CPage*>  g_PageVec;

class CCarStatus2Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarStatus2Page)
public:
    CCarStatus2Page();

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

    void UpdateHSCB();
    void UpdateLB1();
    void UpdateLB2();
    void UpdateK750();
    void UpdateATC();
    void UpdatePIS();
    void UpdateDrawBCUForce();
    void UpdateDynamorev();
    void UpdateMainfuse();

    void UpdateATOMode();

    //void UpdateNETMode();
    //void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateTowMode();
    void UpdateEmergencyMode();
    //void UpdateIES();


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
    void OnEMERGENCYBROADCASTpageBtnClk();
    void UpdateTcu_Enable();
    void UpdateTCUStatus();
    void UpdateFCVoltage();
    void UpdateTorquecurrent();
    void UpdateTorquecom();
    void UpdateLoador();
    void UpdateU_current();
    void UpdateW_current();
    void UpdateHighAcceMode();
    void UpdateCurrentEValue();
    //void UpdateMainLineBreaker();
    void UpdateBHBClose();

};

#endif // CCarStatus2Page_H
