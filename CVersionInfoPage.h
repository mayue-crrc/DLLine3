#ifndef CVersionInfoPage_H
#define CVersionInfoPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBVIP_TRAIN                      0x0001
#define ID_PIBVIP_RIGHTARROW                 0x0002
#define ID_PIBVIP_LEFTARROW                  0x0003

#define ID_PIBVIP_LABEL_CCU1                 0x0004
#define ID_PIBVIP_LABEL_CCU2                 0x0005
///#define ID_PIBVIP_LABEL_DCCU2                0x0006
#define ID_PIBVIP_LABEL_ERM                0x0006
#define ID_PIBVIP_LABEL_DCCU1                0x0007
#define ID_PIBVIP_LABEL_HMI1                 0x0008
#define ID_PIBVIP_LABEL_HMI2                 0x0009
#define ID_PIBVIP_LABEL_GW1                  0x000A
#define ID_PIBVIP_LABEL_GW2                  0x000B
#define ID_PIBVIP_LABEL_ATC10                0x000C
#define ID_PIBVIP_LABEL_ATC11                0x000D
#define ID_PIBVIP_LABEL_ATC20                0x000E
#define ID_PIBVIP_LABEL_ATC21                0x000F
#define ID_PIBVIP_LABEL_IO_GW11              0x0010
#define ID_PIBVIP_LABEL_ACU11                0x0011
#define ID_PIBVIP_LABEL_BCU11                0x0012
#define ID_PIBVIP_LABEL_GW11                 0x0013
#define ID_PIBVIP_LABEL_HVAC11               0x0014
#define ID_PIBVIP_LABEL_PA11                 0x0015
#define ID_PIBVIP_LABEL_TV11                 0x0016
#define ID_PIBVIP_LABEL_IO_GW22              0x0017
#define ID_PIBVIP_LABEL_TCU22                0x0018
#define ID_PIBVIP_LABEL_GW22                 0x0019
#define ID_PIBVIP_LABEL_HVAC22               0x001A
#define ID_PIBVIP_LABEL_AU_DB22              0x001B
#define ID_PIBVIP_LABEL_IO_GW33              0x001C
#define ID_PIBVIP_LABEL_BCU44                0x001D
#define ID_PIBVIP_LABEL_TCU33                0x001E
#define ID_PIBVIP_LABEL_GW33                 0x001F
#define ID_PIBVIP_LABEL_HVAC33               0x0020
#define ID_PIBVIP_LABEL_ST_DB33              0x0021
#define ID_PIBVIP_LABEL_IO_GW44              0x0022
#define ID_PIBVIP_LABEL_BCU55                0x0023
#define ID_PIBVIP_LABEL_TCU44                0x0024
#define ID_PIBVIP_LABEL_GW44                 0x0025
#define ID_PIBVIP_LABEL_HVAC44               0x0026
#define ID_PIBVIP_LABEL_ST_DB44              0x0027
#define ID_PIBVIP_LABEL_IO_GW55              0x0028
#define ID_PIBVIP_LABEL_TCU55                0x0029
#define ID_PIBVIP_LABEL_GW55                 0x002A
#define ID_PIBVIP_LABEL_HVAC55               0x002B
#define ID_PIBVIP_LABEL_AU_DB55              0x002C
#define ID_PIBVIP_LABEL_IO_GW66              0x002D
#define ID_PIBVIP_LABEL_ACU88                0x002E
#define ID_PIBVIP_LABEL_BCU88                0x002F
#define ID_PIBVIP_LABEL_GW66                 0x0030
#define ID_PIBVIP_LABEL_HVAC66               0x0031
#define ID_PIBVIP_LABEL_PA66                 0x0032
#define ID_PIBVIP_LABEL_TV66                 0x0033
#define ID_PIBVIP_LABEL_GWDOOR1              0x0034
#define ID_PIBVIP_LABEL_DOOR1                0x0035
#define ID_PIBVIP_LABEL_GWDOOR2              0x0036
#define ID_PIBVIP_LABEL_DOOR2                0x0037
#define ID_PIBVIP_LABEL_GWDOOR3              0x0038
#define ID_PIBVIP_LABEL_DOOR3                0x0039
#define ID_PIBVIP_LABEL_GWDOOR4              0x003A
#define ID_PIBVIP_LABEL_DOOR4                0x003B
#define ID_PIBVIP_LABEL_GWDOOR5              0x003C
#define ID_PIBVIP_LABEL_DOOR5                0x003D
#define ID_PIBVIP_LABEL_GWDOOR6              0x003E
#define ID_PIBVIP_LABEL_DOOR6                0x003F

#define ID_PIBVIP_LABEL_IO_GW1               0x0040
#define ID_PIBVIP_LABEL_IO_GW2               0x0041
#define ID_PIBVIP_LABEL_IO_GW3               0x0042
#define ID_PIBVIP_LABEL_IO_GW4               0x0043
#define ID_PIBVIP_LABEL_IO_GW5               0x0044
#define ID_PIBVIP_LABEL_IO_GW6               0x0045
#define ID_PIBVIP_LABEL_IO_GW7               0x0046
#define ID_PIBVIP_LABEL_IO_GW8               0x0047

#define ID_PIBVIP_LABEL_IO_DI1               0x0048
#define ID_PIBVIP_LABEL_IO_DI2               0x0049
#define ID_PIBVIP_LABEL_IO_DI3               0x004A
#define ID_PIBVIP_LABEL_IO_DI4               0x004B
#define ID_PIBVIP_LABEL_IO_DI5               0x004C
#define ID_PIBVIP_LABEL_IO_DI6               0x004D
#define ID_PIBVIP_LABEL_IO_DI7               0x004E
#define ID_PIBVIP_LABEL_IO_DI8               0x004F

#define ID_PIBVIP_LABEL_IO_DO1               0x0050
#define ID_PIBVIP_LABEL_IO_DO2               0x0051
#define ID_PIBVIP_LABEL_IO_DO3               0x0052
#define ID_PIBVIP_LABEL_IO_DO4               0x0053
#define ID_PIBVIP_LABEL_IO_DO5               0x0054
#define ID_PIBVIP_LABEL_IO_DO6               0x0055
#define ID_PIBVIP_LABEL_IO_DO7               0x0056
#define ID_PIBVIP_LABEL_IO_DO8               0x0057

#define ID_PIBVIP_LABEL_IO_AX1               0x0058
#define ID_PIBVIP_LABEL_IO_AX2               0x0059
#define ID_PIBVIP_LABEL_IO_AX4               0x005A
#define ID_PIBVIP_LABEL_IO_AX7               0x005B
#define ID_PIBVIP_LABEL_IO_AX8               0x005C

#define ID_PIBVIP_LABEL_IO_PWM1               0x005D
#define ID_PIBVIP_LABEL_IO_PWM8               0x005E
#define ID_PIBVIP_LABEL_IO_PWM2               0x005F

#define ID_PIBVIP_LABEL_TCU66                 0x0060
#define ID_PIBVIP_LABEL_TCU77                 0x0061
#define ID_PIBVIP_LABEL_HVAC77                0x0062
#define ID_PIBVIP_LABEL_HVAC88                0x0063
#define ID_PIBVIP_LABEL_DOOR7                 0x0064
#define ID_PIBVIP_LABEL_DOOR8                 0x0065
#define ID_PIBVIP_LABEL_PIS1                  0x0066
#define ID_PIBVIP_LABEL_PIS8                  0x0067
#define ID_PIBVIP_LABEL_FAS1                  0x0068
#define ID_PIBVIP_LABEL_FAS8                  0x0069

#define ID_PIBVIP_LABEL_HVAC_GW1              0x006A
#define ID_PIBVIP_LABEL_HVAC_GW2              0x006B
#define ID_PIBVIP_LABEL_HVAC_GW3              0x006C
#define ID_PIBVIP_LABEL_HVAC_GW4              0x006D
#define ID_PIBVIP_LABEL_HVAC_GW5              0x006E
#define ID_PIBVIP_LABEL_HVAC_GW6              0x006F
#define ID_PIBVIP_LABEL_HVAC_GW7              0x0070
#define ID_PIBVIP_LABEL_HVAC_GW8              0x0071

#define ID_PIBVIP_LABEL_TCU22_GW                 0x0072
#define ID_PIBVIP_LABEL_TCU33_GW                 0x0073
#define ID_PIBVIP_LABEL_ACU11_GW                0x0074
#define ID_PIBVIP_LABEL_ACU88_GW                0x0075









class CVersionInfoPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CVersionInfoPage)
public:
    CVersionInfoPage();

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
    void UpdateVersionIofo();
    void SetVerInfoLabelString(int id, QString StringVal);
};

#endif // CVersionInfoPage_H
