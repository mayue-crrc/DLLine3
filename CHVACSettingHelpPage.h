#ifndef CHVACSettingHelpPage_H
#define CHVACSettingHelpPage_H

#include "CPage.h"


#define ID_CHVACSET_LABEL_TURNOFF1 0x0001
#define ID_CHVACSET_LABEL_TURNOFF2 0x0002
#define ID_CHVACSET_LABEL_TURNOFF3 0x0003
#define ID_CHVACSET_LABEL_TURNOFF4 0x0004

#define ID_CHVACSET_LABEL_TURNON1 0x0005
#define ID_CHVACSET_LABEL_TURNON2 0x0006
#define ID_CHVACSET_LABEL_TURNON3 0x0007
#define ID_CHVACSET_LABEL_TURNON4 0x0008

#define ID_CHVACSET_LABEL_HAVEFAULT1 0x0009
#define ID_CHVACSET_LABEL_HAVEFAULT2 0x000A
#define ID_CHVACSET_LABEL_HAVEFAULT3 0x000B
#define ID_CHVACSET_LABEL_HAVEFAULT4 0x000C

#define ID_CHVACSET_LABEL_NEWWIND_TURNOFF1 0x000D
#define ID_CHVACSET_LABEL_NEWWIND_TURNOFF2 0x000E

#define ID_CHVACSET_LABEL_NEWWIND_TURNON1 0x000F
#define ID_CHVACSET_LABEL_NEWWIND_TURNON2 0x0010

#define ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT1 0x0011
#define ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT2 0x0012

#define ID_CHVACSET_BUTTON_AMERGEWIND1    0X0013
#define ID_CHVACSET_BUTTON_AMERGEWIND2    0X0014
#define ID_CHVACSET_LABEL_MANUAL          0X0015


extern vector<CPage*>  g_PageVec;

class CHVACSettingHelpPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHVACSettingHelpPage)
public:
    CHVACSettingHelpPage();

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
};

#endif // CHVACSettingHelpPage_H
