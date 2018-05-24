#ifndef FASPAGE_H
#define FASPAGE_H

#include "CPage.h"
#include "DataBuffer.h"


#define ID_PIBFASPage_TRAIN                   0X0001
#define ID_PIBFASPage_ARROW_RIGHT             0X0002
#define ID_PIBFASPage_ARROW_LEFT              0X0003
#define ID_PIBFASPage_FIRE1                   0X0004
#define ID_PIBFASPage_FIRE2                   0X0005
#define ID_PIBFASPage_FIRE3                   0X0006
#define ID_PIBFASPage_FIRE4                   0X0007
#define ID_PIBFASPage_FIRE5                   0X0008
#define ID_PIBFASPage_FIRE6                   0X0009
#define ID_PIBFASPage_FIRE7                   0X000A
#define ID_PIBFASPage_FIRE8                   0X000B
#define ID_PIBFASPage_FIRE9                   0X000C
#define ID_PIBFASPage_FIRE10                  0X000D
#define ID_PIBFASPage_FIRE11                  0X000E
#define ID_PIBFASPage_FIRE12                  0X000F
#define ID_PIBFASPage_FIRE13                  0X0010
#define ID_PIBFASPage_FIRE14                  0X0011
#define ID_PIBFASPage_FIRE15                  0X0012
#define ID_PIBFASPage_FIRE16                  0X0013
#define ID_PIBFASPage_FIRE17                  0X0014
#define ID_PIBFASPage_FIRE18                  0X0015
#define ID_PIBFASPage_FIRE19                  0X0016
#define ID_PIBFASPage_FIRE20                  0X0017
#define ID_PIBFASPage_FIRE21                  0X0018
#define ID_PIBFASPage_FIRE22                  0X0019
#define ID_PIBFASPage_FIRE23                  0X001A
#define ID_PIBFASPage_FIRE24                  0X001B
#define ID_PIBFASPage_FIRE25                  0X001C
#define ID_PIBFASPage_FIRE26                  0X001D
#define ID_PIBFASPage_FIRE27                  0X001E
#define ID_PIBFASPage_FIRE28                  0X001F
#define ID_PIBFASPage_FIRE29                  0X0020
#define ID_PIBFASPage_FIRE30                  0X0021
#define ID_PIBFASPage_FIRE31                  0X0022
#define ID_PIBFASPage_FIRE32                  0X0023
#define ID_PIBFASPage_FIRE33                  0X0024
#define ID_PIBFASPage_FIRE34                  0X0025
#define ID_PIBFASPage_FIRE35                  0X0026
#define ID_PIBFASPage_FIRE36                  0X0027
#define ID_PIBFASPage_FIRE37                  0X0028
#define ID_PIBFASPage_FIRE38                  0X0029
#define ID_PIBFASPage_FIRE39                  0X002A
#define ID_PIBFASPage_FIRE40                  0X002B
#define ID_PIBFASPage_FIRE41                  0X002C
#define ID_PIBFASPage_FIRE42                  0X002D
#define ID_PIBFASPage_FIRE43                  0X002E
#define ID_PIBFASPage_FIRE44                  0X002F
#define ID_PIBFASPage_FIRE45                  0X0030
#define ID_PIBFASPage_FIRE46                  0X0031
#define ID_PIBFASPage_FIRE47                  0X0032
#define ID_PIBFASPage_FIRE48                  0X0033
#define ID_PIBFASPage_FIRE49                  0X0034
#define ID_PIBFASPage_FIRE50                  0X0035
#define ID_PIBFASPage_FIRE51                  0X0036
#define ID_PIBFASPage_TRAINDIAGRAM            0X0037
#define ID_PIBFASPage_ICON1                   0X0038
#define ID_PIBFASPage_ICON2                   0X0039
#define ID_PIBFASPage_ICON3                   0X003A
#define ID_PIBFASPage_CLEAR_VOICE             0X003B
#define ID_PIBFASPage_RESET                   0X003C
#define ID_PIBFASPage_1COMM2                   0X003D
#define ID_PIBFASPage_LABEL1                   0X003E
#define ID_PIBFASPage_LABEL2                   0X003F
#define ID_PIBFASPage_LABEL3                   0X0040

extern vector<CPage*>  g_PageVec;

class FASPage  : public CPage
{

    DECLEAR_MESSAGE_MAP(FASPage)
public:
    FASPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();
    void UpdateFireState();
    void SetLabelColor(int id, int colorVal);
    void updateComm();

private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void OnClearVoiceClk();
    void UpResetClk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
    bool m_bBtnPress;
    int  m_fas_PrePageIndex;
 //   void DrawCarriageCtrl();



  //  void OnReplaceBtnClk();
 //   void OnRealTimeFaultsWarnningIconClk();
};

#endif // FASPAGE_H
