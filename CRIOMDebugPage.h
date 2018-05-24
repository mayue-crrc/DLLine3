#ifndef CRIOMDebugPage_H
#define CRIOMDebugPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBIDP_TRAIN                      0x0001
#define ID_PIBIDP_RIGHTARROW                 0x0002
#define ID_PIBIDP_LEFTARROW                  0x0003

#define ID_PIBIDP_DIM1_1                     0x0004
#define ID_PIBIDP_DIM1_2                     0x0005
#define ID_PIBIDP_DIM1_3                     0x0006
#define ID_PIBIDP_DIM1_4                     0x0007
#define ID_PIBIDP_DIM1_5                     0x0008
#define ID_PIBIDP_DIM1_6                     0x0009
#define ID_PIBIDP_DIM1_LIFE1                 0x000A
#define ID_PIBIDP_DIM1_LIFE2                 0x000B
#define ID_PIBIDP_DIM1_LIFE3                 0x000C
#define ID_PIBIDP_DIM1_LIFE4                 0x000D
#define ID_PIBIDP_DIM1_LIFE5                 0x000E
#define ID_PIBIDP_DIM1_LIFE6                 0x000F
#define ID_PIBIDP_DIM2_1                     0x0010
#define ID_PIBIDP_DIM2_2                     0x0011
#define ID_PIBIDP_DIM2_3                     0x0012
#define ID_PIBIDP_DIM2_4                     0x0013
#define ID_PIBIDP_DIM2_5                     0x0014
#define ID_PIBIDP_DIM2_6                     0x0015
#define ID_PIBIDP_DIM2_LIFE1                 0x0016
#define ID_PIBIDP_DIM2_LIFE2                 0x0017
#define ID_PIBIDP_DIM2_LIFE3                 0x0018
#define ID_PIBIDP_DIM2_LIFE4                 0x0019
#define ID_PIBIDP_DIM2_LIFE5                 0x001A
#define ID_PIBIDP_DIM2_LIFE6                 0x001B
#define ID_PIBIDP_DIM3_1                     0x001C
#define ID_PIBIDP_DIM3_4                     0x001D
#define ID_PIBIDP_DIM3_LIFE1                 0x001E
#define ID_PIBIDP_DIM3_LIFE4                 0x001F
#define ID_PIBIDP_DIM4_1                     0x0020
#define ID_PIBIDP_DIM4_8                     0x0021
#define ID_PIBIDP_DIM4_LIFE1                 0x0022
#define ID_PIBIDP_DIM4_LIFE8                 0x0023
#define ID_PIBIDP_DOM1_1                     0x0024
#define ID_PIBIDP_DOM1_2                     0x0025
#define ID_PIBIDP_DOM1_3                     0x0026
#define ID_PIBIDP_DOM1_4                     0x0027
#define ID_PIBIDP_DOM1_5                     0x0028
#define ID_PIBIDP_DOM1_6                     0x0029
#define ID_PIBIDP_DOM1_LIFE1                 0x002A
#define ID_PIBIDP_DOM1_LIFE2                 0x002B
#define ID_PIBIDP_DOM1_LIFE3                 0x002C
#define ID_PIBIDP_DOM1_LIFE4                 0x002D
#define ID_PIBIDP_DOM1_LIFE5                 0x002E
#define ID_PIBIDP_DOM1_LIFE6                 0x002F
#define ID_PIBIDP_DOM2_1                     0x0030
#define ID_PIBIDP_DOM2_8                     0x0031
#define ID_PIBIDP_DOM2_LIFE1                 0x0032
#define ID_PIBIDP_DOM2_LIFE8                 0x0033
#define ID_PIBIDP_AIM1_PWM1_1                0x0034
#define ID_PIBIDP_AIM1_PWM1_8                0x0035
#define ID_PIBIDP_AIM1_PWM2_1                0x0036
#define ID_PIBIDP_AIM1_PWM2_8                0x0037
#define ID_PIBIDP_AIM1_LIFE_1                0x0038
#define ID_PIBIDP_AIM1_LIFE_8                0x0039
#define ID_PIBIDP_LAT1                       0x003A
#define ID_PIBIDP_LAT2                       0x003B
#define ID_PIBIDP_LAT3                       0x003C
#define ID_PIBIDP_LAT4                       0x003D
#define ID_PIBIDP_LAT5                       0x003E
#define ID_PIBIDP_LAT6                       0x003F
#define ID_PIBIDP_RLD1                       0x0040
#define ID_PIBIDP_RLD2                       0x0041
#define ID_PIBIDP_RLD3                       0x0042
#define ID_PIBIDP_RLD4                       0x0043
#define ID_PIBIDP_RLD5                       0x0044
#define ID_PIBIDP_RLD6                       0x0045
#define ID_PIBIDP_HMI1_GW1                   0x0046
#define ID_PIBIDP_HMI1_GW2                   0x0047
#define ID_PIBIDP_HMI2_GW1                   0x0048
#define ID_PIBIDP_HMI2_GW2                   0x0049
#define ID_PIBIDP_DIM1_7                     0x004A
#define ID_PIBIDP_DIM1_8                     0x004B
#define ID_PIBIDP_DIM1_LIFE7                 0x004C
#define ID_PIBIDP_DIM1_LIFE8                 0x004D
#define ID_PIBIDP_DIM2_7                     0x004E
#define ID_PIBIDP_DIM2_8                     0x004F
#define ID_PIBIDP_DIM2_LIFE7                 0x0050
#define ID_PIBIDP_DIM2_LIFE8                 0x0051
#define ID_PIBIDP_DOM1_7                     0x0052
#define ID_PIBIDP_DOM1_8                     0x0053
#define ID_PIBIDP_DOM1_LIFE7                 0x0054
#define ID_PIBIDP_DOM1_LIFE8                 0x0055
#define ID_PIBIDP_LAT7                       0x0056
#define ID_PIBIDP_LAT8                       0x0057
#define ID_PIBIDP_RLD7                       0x0058
#define ID_PIBIDP_RLD8                       0x0059
#define ID_PIBIDP_AIM1_PWM3_1                0x005A
#define ID_PIBIDP_AIM1_PWM3_8                0x005B
#define ID_PIBIDP_AIM1_PWM4_1                0x005C
#define ID_PIBIDP_AIM1_PWM4_8                0x005D
#define ID_PIBIDP_AIM1_AI1_1                0x005E
#define ID_PIBIDP_AIM1_AI2_1                0x005F
#define ID_PIBIDP_AIM1_AI3_1                0x0060
#define ID_PIBIDP_AIM1_AI4_1                0x0061
#define ID_PIBIDP_AIM1_AI1_8                0x0062
#define ID_PIBIDP_AIM1_AI2_8                0x0063
#define ID_PIBIDP_AIM1_AI3_8                0x0064
#define ID_PIBIDP_AIM1_AI4_8                0x0065
#define ID_PIBIDP_IO_GW123_1                0x0066
#define ID_PIBIDP_IO_GW123_2                0x0067
#define ID_PIBIDP_IO_GW123_3                0x0068
#define ID_PIBIDP_IO_GW123_4                0x0069
#define ID_PIBIDP_IO_GW123_5                0x006A
#define ID_PIBIDP_IO_GW123_6                0x006B
#define ID_PIBIDP_IO_GW123_7                0x006C
#define ID_PIBIDP_IO_GW123_8                0x006D
#define ID_PIBIDP_AIM1_LIFE_2                0x006E
#define ID_PIBIDP_AIM1_LIFE_4                0x006F
#define ID_PIBIDP_AIM1_LIFE_7                0x0070



class CRIOMDebugPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CRIOMDebugPage)
public:
    CRIOMDebugPage();

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
    void UpdateRIOMDEBUG();
    void SetRIOMDataLabelString(int id, int DataVal);
    void SetRIOMLabelString(int id, QString StringVal);
};

#endif // CRIOMDebugPage_H
