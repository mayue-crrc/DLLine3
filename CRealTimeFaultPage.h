#ifndef CRealTimeFaultPage_H
#define CRealTimeFaultPage_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_RTF_PAGE_LABEL_S_DATE1         0x0001
#define ID_RTF_PAGE_LABEL_S_DATE2         0x0002
#define ID_RTF_PAGE_LABEL_S_DATE3         0x0003
#define ID_RTF_PAGE_LABEL_S_DATE4         0x0004
#define ID_RTF_PAGE_LABEL_S_DATE5         0x0005
#define ID_RTF_PAGE_LABEL_S_DATE6         0x0006
#define ID_RTF_PAGE_LABEL_S_DATE7         0x0007
#define ID_RTF_PAGE_LABEL_S_DATE8         0x0008
#define ID_RTF_PAGE_LABEL_S_DATE9         0x0009
#define ID_RTF_PAGE_LABEL_S_DATE10        0x000A
#define ID_RTF_PAGE_LABEL_S_DATE11        0x000B
#define ID_RTF_PAGE_LABEL_S_DATE12        0x000C
#define ID_RTF_PAGE_LABEL_S_DATE13        0x000D
#define ID_RTF_PAGE_LABEL_S_DATE14        0x000E
#define ID_RTF_PAGE_LABEL_S_DATE15        0x000F
#define ID_RTF_PAGE_LABEL_S_DATE16        0x0010
#define ID_RTF_PAGE_LABEL_S_DATE17        0x0011
#define ID_RTF_PAGE_LABEL_S_DATE18        0x0012
#define ID_RTF_PAGE_LABEL_S_DATE19        0x0013
#define ID_RTF_PAGE_LABEL_S_DATE20        0x0014

#define ID_RTF_PAGE_LABEL_S_TIME1         0x0015
#define ID_RTF_PAGE_LABEL_S_TIME2         0x0016
#define ID_RTF_PAGE_LABEL_S_TIME3         0x0017
#define ID_RTF_PAGE_LABEL_S_TIME4         0x0018
#define ID_RTF_PAGE_LABEL_S_TIME5         0x0019
#define ID_RTF_PAGE_LABEL_S_TIME6         0x001A
#define ID_RTF_PAGE_LABEL_S_TIME7         0x001B
#define ID_RTF_PAGE_LABEL_S_TIME8         0x001C
#define ID_RTF_PAGE_LABEL_S_TIME9         0x001D
#define ID_RTF_PAGE_LABEL_S_TIME10        0x001E
#define ID_RTF_PAGE_LABEL_S_TIME11        0x001F
#define ID_RTF_PAGE_LABEL_S_TIME12        0x0020
#define ID_RTF_PAGE_LABEL_S_TIME13        0x0021
#define ID_RTF_PAGE_LABEL_S_TIME14        0x0022
#define ID_RTF_PAGE_LABEL_S_TIME15        0x0023
#define ID_RTF_PAGE_LABEL_S_TIME16        0x0024
#define ID_RTF_PAGE_LABEL_S_TIME17        0x0025
#define ID_RTF_PAGE_LABEL_S_TIME18        0x0026
#define ID_RTF_PAGE_LABEL_S_TIME19        0x0027
#define ID_RTF_PAGE_LABEL_S_TIME20        0x0028


#define ID_RTF_PAGE_LABEL_E_DATE1         0x0029
#define ID_RTF_PAGE_LABEL_E_DATE2         0x002A
#define ID_RTF_PAGE_LABEL_E_DATE3         0x002B
#define ID_RTF_PAGE_LABEL_E_DATE4         0x002C
#define ID_RTF_PAGE_LABEL_E_DATE5         0x002D
#define ID_RTF_PAGE_LABEL_E_DATE6         0x002E
#define ID_RTF_PAGE_LABEL_E_DATE7         0x002F
#define ID_RTF_PAGE_LABEL_E_DATE8         0x0030
#define ID_RTF_PAGE_LABEL_E_DATE9         0x0031
#define ID_RTF_PAGE_LABEL_E_DATE10        0x0032
#define ID_RTF_PAGE_LABEL_E_DATE11        0x0033
#define ID_RTF_PAGE_LABEL_E_DATE12        0x0034
#define ID_RTF_PAGE_LABEL_E_DATE13        0x0035
#define ID_RTF_PAGE_LABEL_E_DATE14        0x0036
#define ID_RTF_PAGE_LABEL_E_DATE15        0x0037
#define ID_RTF_PAGE_LABEL_E_DATE16        0x0038
#define ID_RTF_PAGE_LABEL_E_DATE17        0x0039
#define ID_RTF_PAGE_LABEL_E_DATE18        0x003A
#define ID_RTF_PAGE_LABEL_E_DATE19        0x003B
#define ID_RTF_PAGE_LABEL_E_DATE20        0x003C

#define ID_RTF_PAGE_LABEL_E_TIME1         0x003D
#define ID_RTF_PAGE_LABEL_E_TIME2         0x003E
#define ID_RTF_PAGE_LABEL_E_TIME3         0x003F
#define ID_RTF_PAGE_LABEL_E_TIME4         0x0040
#define ID_RTF_PAGE_LABEL_E_TIME5         0x0041
#define ID_RTF_PAGE_LABEL_E_TIME6         0x0042
#define ID_RTF_PAGE_LABEL_E_TIME7         0x0043
#define ID_RTF_PAGE_LABEL_E_TIME8         0x0044
#define ID_RTF_PAGE_LABEL_E_TIME9         0x0045
#define ID_RTF_PAGE_LABEL_E_TIME10        0x0046
#define ID_RTF_PAGE_LABEL_E_TIME11        0x0047
#define ID_RTF_PAGE_LABEL_E_TIME12        0x0048
#define ID_RTF_PAGE_LABEL_E_TIME13        0x0049
#define ID_RTF_PAGE_LABEL_E_TIME14        0x004A
#define ID_RTF_PAGE_LABEL_E_TIME15        0x004B
#define ID_RTF_PAGE_LABEL_E_TIME16        0x004C
#define ID_RTF_PAGE_LABEL_E_TIME17        0x004D
#define ID_RTF_PAGE_LABEL_E_TIME18        0x004E
#define ID_RTF_PAGE_LABEL_E_TIME19        0x004F
#define ID_RTF_PAGE_LABEL_E_TIME20        0x0050

#define ID_RTF_PAGE_LABEL_CODE1           0x0051
#define ID_RTF_PAGE_LABEL_CODE2           0x0052
#define ID_RTF_PAGE_LABEL_CODE3           0x0053
#define ID_RTF_PAGE_LABEL_CODE4           0x0054
#define ID_RTF_PAGE_LABEL_CODE5           0x0055
#define ID_RTF_PAGE_LABEL_CODE6           0x0056
#define ID_RTF_PAGE_LABEL_CODE7           0x0057
#define ID_RTF_PAGE_LABEL_CODE8           0x0058
#define ID_RTF_PAGE_LABEL_CODE9           0x0059
#define ID_RTF_PAGE_LABEL_CODE10          0x005A
#define ID_RTF_PAGE_LABEL_CODE11          0x005B
#define ID_RTF_PAGE_LABEL_CODE12          0x005C
#define ID_RTF_PAGE_LABEL_CODE13          0x005D
#define ID_RTF_PAGE_LABEL_CODE14          0x005E
#define ID_RTF_PAGE_LABEL_CODE15          0x005F
#define ID_RTF_PAGE_LABEL_CODE16          0x0060
#define ID_RTF_PAGE_LABEL_CODE17          0x0061
#define ID_RTF_PAGE_LABEL_CODE18          0x0062
#define ID_RTF_PAGE_LABEL_CODE19          0x0063
#define ID_RTF_PAGE_LABEL_CODE20          0x0064

#define ID_RTF_PAGE_LABEL_CATEGORY1       0x0065
#define ID_RTF_PAGE_LABEL_CATEGORY2       0x0066
#define ID_RTF_PAGE_LABEL_CATEGORY3       0x0067
#define ID_RTF_PAGE_LABEL_CATEGORY4       0x0068
#define ID_RTF_PAGE_LABEL_CATEGORY5       0x0069
#define ID_RTF_PAGE_LABEL_CATEGORY6       0x006A
#define ID_RTF_PAGE_LABEL_CATEGORY7       0x006B
#define ID_RTF_PAGE_LABEL_CATEGORY8       0x006C
#define ID_RTF_PAGE_LABEL_CATEGORY9       0x006D
#define ID_RTF_PAGE_LABEL_CATEGORY10      0x006E
#define ID_RTF_PAGE_LABEL_CATEGORY11      0x006F
#define ID_RTF_PAGE_LABEL_CATEGORY12      0x0070
#define ID_RTF_PAGE_LABEL_CATEGORY13      0x0071
#define ID_RTF_PAGE_LABEL_CATEGORY14      0x0072
#define ID_RTF_PAGE_LABEL_CATEGORY15      0x0073
#define ID_RTF_PAGE_LABEL_CATEGORY16      0x0074
#define ID_RTF_PAGE_LABEL_CATEGORY17      0x0075
#define ID_RTF_PAGE_LABEL_CATEGORY18      0x0076
#define ID_RTF_PAGE_LABEL_CATEGORY19      0x0077
#define ID_RTF_PAGE_LABEL_CATEGORY20      0x0078

#define ID_RTF_PAGE_LABEL_NAME1           0x0079
#define ID_RTF_PAGE_LABEL_NAME2           0x007A
#define ID_RTF_PAGE_LABEL_NAME3           0x007B
#define ID_RTF_PAGE_LABEL_NAME4           0x007C
#define ID_RTF_PAGE_LABEL_NAME5           0x007D
#define ID_RTF_PAGE_LABEL_NAME6           0x007E
#define ID_RTF_PAGE_LABEL_NAME7           0x007F
#define ID_RTF_PAGE_LABEL_NAME8           0x0080
#define ID_RTF_PAGE_LABEL_NAME9           0x0081
#define ID_RTF_PAGE_LABEL_NAME10          0x0082
#define ID_RTF_PAGE_LABEL_NAME11          0x0083
#define ID_RTF_PAGE_LABEL_NAME12          0x0084
#define ID_RTF_PAGE_LABEL_NAME13          0x0085
#define ID_RTF_PAGE_LABEL_NAME14          0x0086
#define ID_RTF_PAGE_LABEL_NAME15          0x0087
#define ID_RTF_PAGE_LABEL_NAME16          0x0088
#define ID_RTF_PAGE_LABEL_NAME17          0x0089
#define ID_RTF_PAGE_LABEL_NAME18          0x008A
#define ID_RTF_PAGE_LABEL_NAME19          0x008B
#define ID_RTF_PAGE_LABEL_NAME20          0x008C

#define ID_RTF_PAGE_BTN_PAGEUP            0x008D
#define ID_RTF_PAGE_BTN_PAGEDOWN          0x008E
#define ID_RTF_PAGE_LABEL_PAGENUM         0x008F

#define ID_RTF_PAGE_BTN_ALL               0x0090
#define ID_RTF_PAGE_BTN_LEVEL12           0x0091
#define ID_RTF_PAGE_BTN_LEVEL3            0x0092

#define ID_RTF_PAGE_BTN_CFM1              0x0093
#define ID_RTF_PAGE_BTN_CFM2              0x0094
#define ID_RTF_PAGE_BTN_CFM3              0x0095
#define ID_RTF_PAGE_BTN_CFM4              0x0096
#define ID_RTF_PAGE_BTN_CFM5              0x0097
#define ID_RTF_PAGE_BTN_CFM6              0x0098
#define ID_RTF_PAGE_BTN_CFM7              0x0099
#define ID_RTF_PAGE_BTN_CFM8              0x009A
#define ID_RTF_PAGE_BTN_CFM9              0x009B
#define ID_RTF_PAGE_BTN_CFM10             0x009C
#define ID_RTF_PAGE_BTN_CFM11             0x009D
#define ID_RTF_PAGE_BTN_CFM12             0x009E
#define ID_RTF_PAGE_BTN_CFM13             0x009F
#define ID_RTF_PAGE_BTN_CFM14             0x00A0
#define ID_RTF_PAGE_BTN_CFM15             0x00A1
#define ID_RTF_PAGE_BTN_CFM16             0x00A2
#define ID_RTF_PAGE_BTN_CFM17             0x00A3
#define ID_RTF_PAGE_BTN_CFM18             0x00A4
#define ID_RTF_PAGE_BTN_CFM19             0x00A5
#define ID_RTF_PAGE_BTN_CFM20             0x00A6


#define D_FAULTS_NUM_PER_PAGE       20 //故障页中每页有多少条

class CRealTimeFaultPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CRealTimeFaultPage)
public:
    CRealTimeFaultPage();

private:
    int m_eligiblecount;

protected:
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
    void DrawLineRealTime(int linenum, ST_REALTIME_FAULT_INFO& realtimeFaultInfo);
    void ClearTable();
    void DrawRealTime();
    bool RealTimeConditionFilter(int idx);
    void OnPageDownBtnClk();
    void OnPageUpBtnClk();
    void UpdateRealTimePageNum();
    void OnBtnAllDown();
    void OnBtnLevel12Down();
    void OnBtnLevel3Down();
    void UpdateRealTimePage();

    void OnDetailClk1();
    void OnDetailClk2();
    void OnDetailClk3();
    void OnDetailClk4();
    void OnDetailClk5();
    void OnDetailClk6();
    void OnDetailClk7();
    void OnDetailClk8();
    void OnDetailClk9();
    void OnDetailClk10();
    void OnDetailClk11();
    void OnDetailClk12();
    void OnDetailClk13();
    void OnDetailClk14();
    void OnDetailClk15();
    void OnDetailClk16();
    void OnDetailClk17();
    void OnDetailClk18();
    void OnDetailClk19();
    void OnDetailClk20();
    void OnDetailClkN(int n);
};

#endif // CRealTimeFaultPage_H
