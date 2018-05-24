#ifndef CCommStatusPage_H
#define CCommStatusPage_H

#include "CPage.h"
#include "DataBuffer.h"


#define ID_PIBCS_TRAIN                   0X0001
#define ID_PIBCS_ICON_WARNNING           0X0002
#define ID_PIBCS_ARROW_RIGHT             0X0003
#define ID_PIBCS_ARROW_LEFT              0X0004
#define ID_PIBCS_LABEL_CAR1DOOR1               0X0005
#define ID_PIBCS_LABEL_CAR1DOOR2               0X0006
#define ID_PIBCS_LABEL_CAR1DOOR3               0X0007
#define ID_PIBCS_LABEL_CAR1DOOR4               0X0008
#define ID_PIBCS_LABEL_CAR1DOOR5               0X0009
#define ID_PIBCS_LABEL_CAR1DOOR6               0X000A
#define ID_PIBCS_LABEL_CAR1DOOR7               0X000B
#define ID_PIBCS_LABEL_CAR1DOOR8               0X000C
#define ID_PIBCS_LABEL_CAR2DOOR1               0X000D
#define ID_PIBCS_LABEL_CAR2DOOR2               0X000E
#define ID_PIBCS_LABEL_CAR2DOOR3               0X000F
#define ID_PIBCS_LABEL_CAR2DOOR4               0X0010
#define ID_PIBCS_LABEL_CAR2DOOR5               0X0011
#define ID_PIBCS_LABEL_CAR2DOOR6               0X0012
#define ID_PIBCS_LABEL_CAR2DOOR7               0X0013
#define ID_PIBCS_LABEL_CAR2DOOR8               0X0014
#define ID_PIBCS_LABEL_CAR3DOOR1               0X0015
#define ID_PIBCS_LABEL_CAR3DOOR2               0X0016
#define ID_PIBCS_LABEL_CAR3DOOR3               0X0017
#define ID_PIBCS_LABEL_CAR3DOOR4               0X0018
#define ID_PIBCS_LABEL_CAR3DOOR5               0X0019
#define ID_PIBCS_LABEL_CAR3DOOR6               0X001A
#define ID_PIBCS_LABEL_CAR3DOOR7               0X001B
#define ID_PIBCS_LABEL_CAR3DOOR8               0X001C
#define ID_PIBCS_LABEL_CAR4DOOR1               0X001D
#define ID_PIBCS_LABEL_CAR4DOOR2               0X001E
#define ID_PIBCS_LABEL_CAR4DOOR3               0X001F
#define ID_PIBCS_LABEL_CAR4DOOR4               0X0020
#define ID_PIBCS_LABEL_CAR4DOOR5               0X0021
#define ID_PIBCS_LABEL_CAR4DOOR6               0X0022
#define ID_PIBCS_LABEL_CAR4DOOR7               0X0023
#define ID_PIBCS_LABEL_CAR4DOOR8               0X0024
//#define ID_PIBCS_LABEL_CAR5DOOR1               0X0025  lmh
//#define ID_PIBCS_LABEL_CAR5DOOR2               0X0026
//#define ID_PIBCS_LABEL_CAR5DOOR3               0X0027  lmh
//#define ID_PIBCS_LABEL_CAR5DOOR4               0X0028
//#define ID_PIBCS_LABEL_CAR5DOOR5               0X0029 lmh
//#define ID_PIBCS_LABEL_CAR5DOOR6               0X002A
//#define ID_PIBCS_LABEL_CAR5DOOR7               0X002B lmh
//#define ID_PIBCS_LABEL_CAR5DOOR8               0X002C
//#define ID_PIBCS_LABEL_CAR6DOOR1               0X002D
//#define ID_PIBCS_LABEL_CAR6DOOR2               0X002E
//#define ID_PIBCS_LABEL_CAR6DOOR3               0X002F
//#define ID_PIBCS_LABEL_CAR6DOOR4               0X0030
//#define ID_PIBCS_LABEL_CAR6DOOR5               0X0031
//#define ID_PIBCS_LABEL_CAR6DOOR6               0X0032
//#define ID_PIBCS_LABEL_CAR6DOOR7               0X0033
//#define ID_PIBCS_LABEL_CAR6DOOR8               0X0034
#define ID_PIBCS_LABEL_CCU1                 0X0035
#define ID_PIBCS_LABEL_CCU2                 0X0036
//#define ID_PIBCS_LABEL_CAR1_GW1             0X0037
//#define ID_PIBCS_LABEL_CAR1_GW2             0X0038
//#define ID_PIBCS_LABEL_CAR2_GW1             0X0039
//#define ID_PIBCS_LABEL_CAR2_GW2             0X003A
//#define ID_PIBCS_LABEL_CAR3_GW1             0X003B
//#define ID_PIBCS_LABEL_CAR3_GW2             0X003C
//#define ID_PIBCS_LABEL_CAR4_GW1             0X003D
//#define ID_PIBCS_LABEL_CAR4_GW2             0X003F
//#define ID_PIBCS_LABEL_CAR5_GW1             0X0040
//#define ID_PIBCS_LABEL_CAR5_GW2             0X0041
//#define ID_PIBCS_LABEL_CAR6_GW1             0X0042
//#define ID_PIBCS_LABEL_CAR6_GW2             0X0043
#define ID_PIBCS_LABEL_CAR1_RIOM            0X0044
#define ID_PIBCS_LABEL_CAR2_RIOM            0X0045
#define ID_PIBCS_LABEL_CAR3_RIOM            0X0046
#define ID_PIBCS_LABEL_CAR4_RIOM            0X0047
//#define ID_PIBCS_LABEL_CAR5_RIOM            0X0048
//#define ID_PIBCS_LABEL_CAR6_RIOM            0X0049
#define ID_PIBCS_LABEL_CAR1_ACU             0X004A
#define ID_PIBCS_LABEL_CAR4_ACU             0X004B//lmh
#define ID_PIBCS_LABEL_ATC10                0X004C
#define ID_PIBCS_LABEL_ATC11                0X004D
#define ID_PIBCS_LABEL_FAS1                 0X004E
#define ID_PIBCS_LABEL_FAS2                 0X004F
#define ID_PIBCS_LABEL_CAR2_TCU             0X0050
#define ID_PIBCS_LABEL_CAR3_TCU             0X0051
//#define ID_PIBCS_LABEL_CAR4_TCU             0X0052
//#define ID_PIBCS_LABEL_CAR5_TCU             0X0053
#define ID_PIBCS_LABEL_CAR1_HMI             0X0054
#define ID_PIBCS_LABEL_CAR4_HMI             0X0055
#define ID_PIBCS_LABEL_CAR1_BCU             0X0056
#define ID_PIBCS_LABEL_CAR2_BCU             0X0057
#define ID_PIBCS_LABEL_CAR3_BCU             0X0058
#define ID_PIBCS_LABEL_CAR4_BCU             0X0059
#define ID_PIBCS_LABEL_CAR1_HVAC            0X005A
#define ID_PIBCS_LABEL_CAR2_HVAC            0X005B
#define ID_PIBCS_LABEL_CAR3_HVAC            0X005C
#define ID_PIBCS_LABEL_CAR4_HVAC            0X005D
//#define ID_PIBCS_LABEL_CAR5_HVAC            0X005E
//#define ID_PIBCS_LABEL_CAR6_HVAC            0X005F
#define ID_PIBCS_LABEL_CAR1_PIS             0X0060
#define ID_PIBCS_LABEL_CAR4_PIS             0X0061//lmh
#define ID_PIBCS_LABEL_DCCU1                0X0062
#define ID_PIBCS_LABEL_DCCU2                0X0063
//#define ID_PIBCS_LABEL_BCU1INTO3            0X0064
//#define ID_PIBCS_LABEL_BCU4INTO6            0X0065
//#define ID_PIBCOMMINTERRUPT                 0X0066
//add new by lmh

#define ID_PIBCS_LABEL_CAR1_EDCU1             0X0067
#define ID_PIBCS_LABEL_CAR1_EDCU2             0X0068
#define ID_PIBCS_LABEL_CAR2_EDCU3             0X0069
#define ID_PIBCS_LABEL_CAR2_EDCU4             0X006a
#define ID_PIBCS_LABEL_CAR3_EDCU5             0X006b
#define ID_PIBCS_LABEL_CAR3_EDCU6             0X006c
#define ID_PIBCS_LABEL_CAR4_EDCU7             0X006d
#define ID_PIBCS_LABEL_CAR4_EDCU8             0X006e

//add new by lsz
//#define ID_PIBCS_LABEL_CAR7DOOR1            0X0067
//#define ID_PIBCS_LABEL_CAR7DOOR2            0X0068
//#define ID_PIBCS_LABEL_CAR7DOOR3            0X0069
//#define ID_PIBCS_LABEL_CAR7DOOR4            0X006a
//#define ID_PIBCS_LABEL_CAR7DOOR5            0X006b
//#define ID_PIBCS_LABEL_CAR7DOOR6            0X006c
//#define ID_PIBCS_LABEL_CAR7DOOR7            0X006d
//#define ID_PIBCS_LABEL_CAR7DOOR8            0X006e
//#define ID_PIBCS_LABEL_CAR8DOOR1            0X006f
//#define ID_PIBCS_LABEL_CAR8DOOR2            0X0070
//#define ID_PIBCS_LABEL_CAR8DOOR3            0X0071
//#define ID_PIBCS_LABEL_CAR8DOOR4            0X0072
//#define ID_PIBCS_LABEL_CAR8DOOR5            0X0073
//#define ID_PIBCS_LABEL_CAR8DOOR6            0X0074
//#define ID_PIBCS_LABEL_CAR8DOOR7            0X0075
//#define ID_PIBCS_LABEL_CAR8DOOR8            0X0076

#define ID_PIBCS_LABEL_CAR7_GW1             0X0077
#define ID_PIBCS_LABEL_CAR7_GW2             0X0078
#define ID_PIBCS_LABEL_CAR8_GW1             0X0079
#define ID_PIBCS_LABEL_CAR8_GW2             0X007a

#define ID_PIBCS_LABEL_PDS1             0X007b
#define ID_PIBCS_LABEL_PDS2             0X007c

//#define ID_PIBCS_LABEL_CAR7_RIOM            0X007b
//#define ID_PIBCS_LABEL_CAR8_RIOM            0X007c

//#define ID_PIBCS_LABEL_CAR6_TCU             0X007d
//#define ID_PIBCS_LABEL_CAR7_TCU             0X007e

//#define ID_PIBCS_LABEL_CAR7_HVAC            0X007f
//#define ID_PIBCS_LABEL_CAR8_HVAC            0X0080
//#define ID_PIBCS_LABEL_CAR1DOOR9            0X0081  bylmh
//#define ID_PIBCS_LABEL_CAR1DOOR10           0X0082
//#define ID_PIBCS_LABEL_CAR8DOOR9            0X0083
//#define ID_PIBCS_LABEL_CAR8DOOR10           0X0084

//#define ID_PIBCS_LABEL_HMI1_UPD             0X0085
//#define ID_PIBCS_LABEL_HMI2_UPD             0X0086

//#define ID_PIBCS_LABEL_CAR1_RLD             0X0087
//#define ID_PIBCS_LABEL_CAR2_RLD             0X0088
//#define ID_PIBCS_LABEL_CAR3_RLD             0X0089
//#define ID_PIBCS_LABEL_CAR4_RLD             0X008a
//#define ID_PIBCS_LABEL_CAR5_RLD             0X008b
//#define ID_PIBCS_LABEL_CAR6_RLD             0X008c
//#define ID_PIBCS_LABEL_CAR7_RLD             0X008d
//#define ID_PIBCS_LABEL_CAR8_RLD             0X008e



extern vector<CPage*>  g_PageVec;

class CCommStatusPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCommStatusPage)
public:
    CCommStatusPage();

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

    void OnRealTimeFaultsWarnningIconClk();

private:
    void UpdateCCU();
    void UpdateRIOM();
    void UpdateACU();
    void UpdatePDS();
    void UpdateTCU();
    void UpdateFAS();
    void UpdateHMI();
    void UpdateBCU();
    void UpdateHVAC();
    void UpdatePIS();
    void UpdateEDCU();
    void UpdateDOOR();
    void UpdateGW();
    void UpdateUDP();
    void UpdateRLD();


    void SetCcuLabelColor(int id, int colorVal);
    void SetRiomLabelColor(int id, int colorVal);
    void SetAcuLabelColor(int id, int colorVal);
    void SetPdsLabelColor(int id, int colorVal);
    void SetTcuLabelColor(int id, int colorVal);
    void SetAtcLabelColor(int id, int colorVal);
    void SetHmiLabelColor(int id, int colorVal);
    void SetBcuLabelColor(int id, int colorVal);
    void SetHvacLabelColor(int id, int colorVal);
    void SetPisLabelColor(int id, int colorVal);
    void SetEdcuLabelColor(int id, int colorVal);
    void SetDoorLabelColor(int id, int colorVal);
    void SetGwLabelColor(int id, int colorVal);
    void SetBcucanLabelColor(int id, int colorVal);

};

#endif // CCommStatusPage_H
