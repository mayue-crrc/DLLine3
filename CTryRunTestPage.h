#ifndef CTryRunTestPage_H
#define CTryRunTestPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

//#define ID_TRTP_LABEL_CV     0x0000
#define ID_TRTP_LABEL_BCP1   0x0001
#define ID_TRTP_LABEL_BCP2   0x0002
#define ID_TRTP_LABEL_BCP3   0x0003
#define ID_TRTP_LABEL_BCP4   0x0004
#define ID_TRTP_LABEL_BCP5   0x0005
#define ID_TRTP_LABEL_BCP6   0x0006
#define ID_TRTP_LABEL_BCP7   0x0007
#define ID_TRTP_LABEL_BCP8   0x0008
#define ID_TRTP_LABEL_BCP9   0x0009
#define ID_TRTP_LABEL_BCP10  0x000A
#define ID_TRTP_LABEL_BCP11  0x000B
#define ID_TRTP_LABEL_BCP12  0x000C
#define ID_TRTP_LABEL_JW1    0x000D
#define ID_TRTP_LABEL_JW2    0x000E
#define ID_TRTP_LABEL_JW3    0x000F
#define ID_TRTP_LABEL_JW4    0x0010
#define ID_TRTP_LABEL_JW5    0x0011
#define ID_TRTP_LABEL_JW6    0x0012
#define ID_TRTP_LABEL_JW7    0x0013
#define ID_TRTP_LABEL_JW8    0x0014
#define ID_TRTP_LABEL_JW9    0x0015
#define ID_TRTP_LABEL_JW10   0x0016
#define ID_TRTP_LABEL_JJZD1  0x0017
#define ID_TRTP_LABEL_JJZD2  0x0018
#define ID_TRTP_LABEL_JJZD3  0x0019
#define ID_TRTP_LABEL_JJZD4  0x001A
#define ID_TRTP_LABEL_JJZD5  0x001B
#define ID_TRTP_LABEL_JJZD6  0x001C
#define ID_TRTP_LABEL_JJZD7  0x001D
#define ID_TRTP_LABEL_JJZD8  0x001E
#define ID_TRTP_LABEL_JJZD9  0x001F
#define ID_TRTP_LABEL_JJZD10 0x0020
#define ID_TRTP_LABLE_QYZDJW 0x0021
#define ID_TRTP_LABEL_TIME1  0x0022
#define ID_TRTP_LABEL_TIME2  0x0023
#define ID_TRTP_LABEL_TIME3  0x0024
#define ID_TRTP_LABEL_TIME4  0x0025
#define ID_TRTP_LABEL_TIME5  0x0026
#define ID_TRTP_LABEL_TIME6  0x0027
#define ID_TRTP_LABEL_TIME7  0x0028
#define ID_TRTP_LABEL_TIME8  0x0029
#define ID_TRTP_LABEL_TIME9  0x002A
#define ID_TRTP_LABEL_TIME10 0x002B
#define ID_TRTP_LABEL_KN1    0x002C
#define ID_TRTP_LABEL_KN2    0x002D
#define ID_TRTP_LABEL_KN3    0x002E
#define ID_TRTP_LABEL_KN4    0x002F
#define ID_TRTP_LABEL_KN5    0x0030
#define ID_TRTP_LABEL_KN6    0x0031
#define ID_TRTP_LABEL_TESTTYPE1 0x0032
#define ID_TRTP_LABEL_TESTTYPE2 0x0033
#define ID_TRTP_LABEL_TESTTYPE3 0x0034
#define ID_TRTP_LABEL_TESTTYPE4 0x0035
#define ID_TRTP_LABEL_TESTTYPE5 0x0036
#define ID_TRTP_LABEL_TESTTYPE6 0x0037
#define ID_TRTP_LABEL_TESTTYPE7 0x0038
#define ID_TRTP_LABEL_TESTTYPE8 0x0039
#define ID_TRTP_LABEL_TESTTYPE9 0x003A
#define ID_TRTP_LABEL_TESTTYPE10 0x003B
#define ID_TRTP_LABEL_ADSPEED1  0x003C
#define ID_TRTP_LABEL_ADSPEED2  0x003D
#define ID_TRTP_LABEL_ADSPEED3  0x003E
#define ID_TRTP_LABEL_ADSPEED4  0x003F
#define ID_TRTP_LABEL_ADSPEED5  0x0040
#define ID_TRTP_LABEL_ADSPEED6  0x0041
#define ID_TRTP_LABEL_ADSPEED7  0x0042
#define ID_TRTP_LABEL_ADSPEED8  0x0043
#define ID_TRTP_LABEL_ADSPEED9  0x0044
#define ID_TRTP_LABEL_ADSPEED10 0x0045
#define ID_TRTP_LABEL_BRAKEDISTANCE1   0x0046
#define ID_TRTP_LABEL_BRAKEDISTANCE2   0x0047
#define ID_TRTP_LABEL_BRAKEDISTANCE3   0x0048
#define ID_TRTP_LABEL_BRAKEDISTANCE4   0x0049
#define ID_TRTP_LABEL_BRAKEDISTANCE5   0x004A
#define ID_TRTP_LABEL_BRAKEDISTANCE6   0x004B
#define ID_TRTP_LABEL_BRAKEDISTANCE7   0x004C
#define ID_TRTP_LABEL_BRAKEDISTANCE8   0x004D
#define ID_TRTP_LABEL_BRAKEDISTANCE9   0x004E
#define ID_TRTP_LABEL_BRAKEDISTANCE10  0x004F
#define ID_TRTP_LABEL_REPRODUCE1     0x0050
#define ID_TRTP_LABEL_REPRODUCE2     0x0051
#define ID_TRTP_LABEL_REPRODUCE3     0x0052
#define ID_TRTP_LABEL_REPRODUCE4     0x0053
#define ID_TRTP_LABEL_REPRODUCE5     0x0054
#define ID_TRTP_LABEL_REPRODUCE6     0x0055
#define ID_TRTP_LABEL_REPRODUCE7     0x0056
#define ID_TRTP_LABEL_REPRODUCE8     0x0057
#define ID_TRTP_LABEL_REPRODUCE9     0x0058
#define ID_TRTP_LABEL_REPRODUCE10    0x0059
#define ID_TRTP_LABEL_BRAKESTARTSPEED1  0x005A
#define ID_TRTP_LABEL_BRAKESTARTSPEED2  0x005B
#define ID_TRTP_LABEL_BRAKESTARTSPEED3  0x005C
#define ID_TRTP_LABEL_BRAKESTARTSPEED4  0x005D
#define ID_TRTP_LABEL_BRAKESTARTSPEED5  0x005E
#define ID_TRTP_LABEL_BRAKESTARTSPEED6  0x005F
#define ID_TRTP_LABEL_BRAKESTARTSPEED7  0x0060
#define ID_TRTP_LABEL_BRAKESTARTSPEED8  0x0061
#define ID_TRTP_LABEL_BRAKESTARTSPEED9  0x0062
#define ID_TRTP_LABEL_BRAKESTARTSPEED10 0x0063


#define ID_TRTP_LABEL_WEBFLOW    0x007F
#define ID_TRTP_LABEL_REDRANGE9  0x0080
#define ID_TRTP_BUTTON_TESTSTART 0x0081
#define ID_TRTP_BUTTON_TESTSTOP  0x0082



#define ID_TRTP_LABEL_V                            0X0083
#define ID_TRTP_LABEL_A                            0X0084
#define ID_TRTP_LABEL_TRACTIONMODEL                0X0085
#define ID_TRTP_LABEL_SPEED                        0X0086

class CTryRunTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CTryRunTestPage)
public:
    CTryRunTestPage();

private:
    void updateBCPLabelColor(int nID,int nFlag);
    void updateLevelLabelColor(int nID,int nFlag);
    void updateEmergencybrakingLabelColor(int nID,int nFlag);
    void updatePullBrakeLevelLabelColor(int nFlag);

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
    void OnStartClk();
    void OnStopClk();
    void UpdataTry_RunData();


    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
};

#endif // CTryRunTestPage_H
