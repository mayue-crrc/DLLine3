#ifndef CBrakeTestPage_H
#define CBrakeTestPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PICBTP_TRAIN                  0x0001

#define ID_PICBTP_LABEL_B1_cylinder_p1   0x0002
#define ID_PICBTP_LABEL_B1_cylinder_p2   0x0003
#define ID_PICBTP_LABEL_B1_cylinder_p3   0x0004
#define ID_PICBTP_LABEL_B1_cylinder_p4   0x0005
#define ID_PICBTP_LABEL_B1_cylinder_p5   0x0006
#define ID_PICBTP_LABEL_B1_cylinder_p6   0x0007
#define ID_PICBTP_LABEL_B1_cylinder_p7   0x0008
#define ID_PICBTP_LABEL_B1_cylinder_p8   0x0009
#define ID_PICBTP_LABEL_B1_cylinder_p9   0x000A
#define ID_PICBTP_LABEL_B1_cylinder_p10  0x000B
#define ID_PICBTP_LABEL_B1_cylinder_p11  0x000C
#define ID_PICBTP_LABEL_B1_cylinder_p12  0x000D
#define ID_PICBTP_LABEL_B1_cylinder_p13  0x000E
#define ID_PICBTP_LABEL_B1_cylinder_p14  0x000F
#define ID_PICBTP_LABEL_B1_cylinder_p15  0x0010
#define ID_PICBTP_LABEL_B1_cylinder_p16  0x0011


#define ID_PICBTP_LABEL_B2_cylinder_p1   0x0012
#define ID_PICBTP_LABEL_B2_cylinder_p2   0x0013
#define ID_PICBTP_LABEL_B2_cylinder_p3   0x0014
#define ID_PICBTP_LABEL_B2_cylinder_p4   0x0015
#define ID_PICBTP_LABEL_B2_cylinder_p5   0x0016
#define ID_PICBTP_LABEL_B2_cylinder_p6   0x0017
#define ID_PICBTP_LABEL_B2_cylinder_p7   0x0018
#define ID_PICBTP_LABEL_B2_cylinder_p8   0x0019
#define ID_PICBTP_LABEL_B2_cylinder_p9   0x001A
#define ID_PICBTP_LABEL_B2_cylinder_p10  0x001B
#define ID_PICBTP_LABEL_B2_cylinder_p11  0x001C
#define ID_PICBTP_LABEL_B2_cylinder_p12  0x001D
#define ID_PICBTP_LABEL_B2_cylinder_p13  0x001E
#define ID_PICBTP_LABEL_B2_cylinder_p14  0x001F
#define ID_PICBTP_LABEL_B2_cylinder_p15  0x0020
#define ID_PICBTP_LABEL_B2_cylinder_p16  0x0021

#define ID_PICBTP_LABEL_B3_cylinder_p1   0x0022
#define ID_PICBTP_LABEL_B3_cylinder_p2   0x0023
#define ID_PICBTP_LABEL_B3_cylinder_p3   0x0024
#define ID_PICBTP_LABEL_B3_cylinder_p4   0x0025
#define ID_PICBTP_LABEL_B3_cylinder_p5   0x0026
#define ID_PICBTP_LABEL_B3_cylinder_p6   0x0027
#define ID_PICBTP_LABEL_B3_cylinder_p7   0x0028
#define ID_PICBTP_LABEL_B3_cylinder_p8   0x0029
#define ID_PICBTP_LABEL_B3_cylinder_p9   0x002A
#define ID_PICBTP_LABEL_B3_cylinder_p10  0x002B
#define ID_PICBTP_LABEL_B3_cylinder_p11  0x002C
#define ID_PICBTP_LABEL_B3_cylinder_p12  0x002D
#define ID_PICBTP_LABEL_B3_cylinder_p13  0x002E
#define ID_PICBTP_LABEL_B3_cylinder_p14  0x002F
#define ID_PICBTP_LABEL_B3_cylinder_p15  0x0030
#define ID_PICBTP_LABEL_B3_cylinder_p16  0x0031

#define ID_PICBTP_LABEL_B4_cylinder_p1   0x0032
#define ID_PICBTP_LABEL_B4_cylinder_p2   0x0033
#define ID_PICBTP_LABEL_B4_cylinder_p3   0x0034
#define ID_PICBTP_LABEL_B4_cylinder_p4   0x0035
#define ID_PICBTP_LABEL_B4_cylinder_p5   0x0036
#define ID_PICBTP_LABEL_B4_cylinder_p6   0x0037
#define ID_PICBTP_LABEL_B4_cylinder_p7   0x0038
#define ID_PICBTP_LABEL_B4_cylinder_p8   0x0039
#define ID_PICBTP_LABEL_B4_cylinder_p9   0x003A
#define ID_PICBTP_LABEL_B4_cylinder_p10  0x003B
#define ID_PICBTP_LABEL_B4_cylinder_p11  0x003C
#define ID_PICBTP_LABEL_B4_cylinder_p12  0x003D
#define ID_PICBTP_LABEL_B4_cylinder_p13  0x003E
#define ID_PICBTP_LABEL_B4_cylinder_p14  0x003F
#define ID_PICBTP_LABEL_B4_cylinder_p15  0x0040
#define ID_PICBTP_LABEL_B4_cylinder_p16  0x0041

#define ID_PICBTP_LABEL_B5_cylinder_p1   0x0042
#define ID_PICBTP_LABEL_B5_cylinder_p2   0x0043
#define ID_PICBTP_LABEL_B5_cylinder_p3   0x0044
#define ID_PICBTP_LABEL_B5_cylinder_p4   0x0045
#define ID_PICBTP_LABEL_B5_cylinder_p5   0x0046
#define ID_PICBTP_LABEL_B5_cylinder_p6   0x0047
#define ID_PICBTP_LABEL_B5_cylinder_p7   0x0048
#define ID_PICBTP_LABEL_B5_cylinder_p8   0x0049
#define ID_PICBTP_LABEL_B5_cylinder_p9   0x004A
#define ID_PICBTP_LABEL_B5_cylinder_p10  0x004B
#define ID_PICBTP_LABEL_B5_cylinder_p11  0x004C
#define ID_PICBTP_LABEL_B5_cylinder_p12  0x004D
#define ID_PICBTP_LABEL_B5_cylinder_p13  0x004E
#define ID_PICBTP_LABEL_B5_cylinder_p14  0x004F
#define ID_PICBTP_LABEL_B5_cylinder_p15  0x0050
#define ID_PICBTP_LABEL_B5_cylinder_p16  0x0051

#define ID_PICBTP_LABEL_B6_cylinder_p1   0x0052
#define ID_PICBTP_LABEL_B6_cylinder_p2   0x0053
#define ID_PICBTP_LABEL_B6_cylinder_p3   0x0054
#define ID_PICBTP_LABEL_B6_cylinder_p4   0x0055
#define ID_PICBTP_LABEL_B6_cylinder_p5   0x0056
#define ID_PICBTP_LABEL_B6_cylinder_p6   0x0057
#define ID_PICBTP_LABEL_B6_cylinder_p7   0x0058
#define ID_PICBTP_LABEL_B6_cylinder_p8   0x0059
#define ID_PICBTP_LABEL_B6_cylinder_p9   0x005A
#define ID_PICBTP_LABEL_B6_cylinder_p10  0x005B
#define ID_PICBTP_LABEL_B6_cylinder_p11  0x005C
#define ID_PICBTP_LABEL_B6_cylinder_p12  0x005D
#define ID_PICBTP_LABEL_B6_cylinder_p13  0x005E
#define ID_PICBTP_LABEL_B6_cylinder_p14  0x005F
#define ID_PICBTP_LABEL_B6_cylinder_p15  0x0060
#define ID_PICBTP_LABEL_B6_cylinder_p16  0x0061

#define ID_PICBTP_LABEL_B7_cylinder_p1   0x0062
#define ID_PICBTP_LABEL_B7_cylinder_p2   0x0063
#define ID_PICBTP_LABEL_B7_cylinder_p3   0x0064
#define ID_PICBTP_LABEL_B7_cylinder_p4   0x0065
#define ID_PICBTP_LABEL_B7_cylinder_p5   0x0066
#define ID_PICBTP_LABEL_B7_cylinder_p6   0x0067
#define ID_PICBTP_LABEL_B7_cylinder_p7   0x0068
#define ID_PICBTP_LABEL_B7_cylinder_p8   0x0069
#define ID_PICBTP_LABEL_B7_cylinder_p9   0x006A
#define ID_PICBTP_LABEL_B7_cylinder_p10  0x006B
#define ID_PICBTP_LABEL_B7_cylinder_p11  0x006C
#define ID_PICBTP_LABEL_B7_cylinder_p12  0x006D
#define ID_PICBTP_LABEL_B7_cylinder_p13  0x006E
#define ID_PICBTP_LABEL_B7_cylinder_p14  0x006F
#define ID_PICBTP_LABEL_B7_cylinder_p15  0x0070
#define ID_PICBTP_LABEL_B7_cylinder_p16  0x0071

#define ID_PICBTP_LABEL_B8_cylinder_p1   0x0072
#define ID_PICBTP_LABEL_B8_cylinder_p2   0x0073
#define ID_PICBTP_LABEL_B8_cylinder_p3   0x0074
#define ID_PICBTP_LABEL_B8_cylinder_p4   0x0075
#define ID_PICBTP_LABEL_B8_cylinder_p5   0x0076
#define ID_PICBTP_LABEL_B8_cylinder_p6   0x0077
#define ID_PICBTP_LABEL_B8_cylinder_p7   0x0078
#define ID_PICBTP_LABEL_B8_cylinder_p8   0x0079
#define ID_PICBTP_LABEL_B8_cylinder_p9   0x007A
#define ID_PICBTP_LABEL_B8_cylinder_p10  0x007B
#define ID_PICBTP_LABEL_B8_cylinder_p11  0x007C
#define ID_PICBTP_LABEL_B8_cylinder_p12  0x007D
#define ID_PICBTP_LABEL_B8_cylinder_p13  0x007E
#define ID_PICBTP_LABEL_B8_cylinder_p14  0x007F
#define ID_PICBTP_LABEL_B8_cylinder_p15  0x0080
#define ID_PICBTP_LABEL_B8_cylinder_p16  0x0081

#define ID_PICBTP_LABEL_B9_cylinder_p1   0x0082
#define ID_PICBTP_LABEL_B9_cylinder_p2   0x0083
#define ID_PICBTP_LABEL_B9_cylinder_p3   0x0084
#define ID_PICBTP_LABEL_B9_cylinder_p4   0x0085
#define ID_PICBTP_LABEL_B9_cylinder_p5   0x0086
#define ID_PICBTP_LABEL_B9_cylinder_p6   0x0087
#define ID_PICBTP_LABEL_B9_cylinder_p7   0x0088
#define ID_PICBTP_LABEL_B9_cylinder_p8   0x0089
#define ID_PICBTP_LABEL_B9_cylinder_p9   0x008A
#define ID_PICBTP_LABEL_B9_cylinder_p10  0x008B
#define ID_PICBTP_LABEL_B9_cylinder_p11  0x008C
#define ID_PICBTP_LABEL_B9_cylinder_p12  0x008D
#define ID_PICBTP_LABEL_B9_cylinder_p13  0x008E
#define ID_PICBTP_LABEL_B9_cylinder_p14  0x008F
#define ID_PICBTP_LABEL_B9_cylinder_p15  0x0090
#define ID_PICBTP_LABEL_B9_cylinder_p16  0x0091

#define ID_PICBTP_LABEL_BOFF_cylinder    0x0092
#define ID_PICBTP_LABEL_B1_cylinder      0x0093
#define ID_PICBTP_LABEL_B2_cylinder      0x0094
#define ID_PICBTP_LABEL_B3_cylinder      0x0095
#define ID_PICBTP_LABEL_B4_cylinder      0x0096
#define ID_PICBTP_LABEL_B5_cylinder      0x0097
#define ID_PICBTP_LABEL_B6_cylinder      0x0098
#define ID_PICBTP_LABEL_B7_cylinder      0x0099
#define ID_PICBTP_LABEL_BURGENT_cylinder 0x009A

#define ID_PICBTP_LABEL_B1_percentage    0x009B
#define ID_PICBTP_LABEL_B2_percentage    0x009C
#define ID_PICBTP_LABEL_B3_percentage    0x009D
#define ID_PICBTP_LABEL_B4_percentage    0x009E
#define ID_PICBTP_LABEL_B5_percentage    0x009F
#define ID_PICBTP_LABEL_B6_percentage    0x00A0
#define ID_PICBTP_LABEL_B7_percentage    0x00A1
#define ID_PICBTP_LABEL_B8_percentage    0x00A2
#define ID_PICBTP_LABEL_B9_percentage    0x00A3

#define ID_PICBTP_LABEL_STARTTEXT        0x00A4
#define ID_PICBTP_BUTTON_TESTSTART       0x00A5
#define ID_PICBTP_BUTTON_TESTSTOP        0x00A6

#define ID_PICBTP_RIGHTARROW             0x00A7
#define ID_PICBTP_LEFTARROW              0x00A8

#define ID_PICBTP_LABEL_TRACTIONMODEL    0x00A9




class CBrakeTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CBrakeTestPage)
public:
    CBrakeTestPage();

private:
    int m_times;

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
    void OnStartBtnClk();
    void OnStopBtnClk();
    void UpdateBCU_test();
    void UpdateBCU_Test_OFFPage();
    void SetStartLabelString(int id, QString StringVal);
    void SetDataLabelString(int id, qreal DataVal);
    void SetDataLabelColor(int id, int colorVal);
    void SetCarNoLabelColor(int id, int colorVal);
    void UpdateTractionBrak();
    void updateLine1();
    void updateLine2();
    void updateLine3();
    void updateLine4();
    void updateLine5();
    void updateLine6();
    void updateLine7();
    void updateLine8();
    void updateMulLabel(int nStartLabelID,qreal realList[], int nHide);
    void updateLineState();
};

#endif // CBrakeTestPage_H
