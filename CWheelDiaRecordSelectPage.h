#ifndef CWHEELDIARECORDSELECTPAGE_H
#define CWHEELDIARECORDSELECTPAGE_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBWDRS_TRAIN                    0x0001
#define ID_PIBWDRS_ARROW_RIGHT              0x0002
#define ID_PIBWDRS_ARROW_LEFT               0x0003
#define ID_PIBWDRS_LABEL_CARNUMBER1         0x0004
#define ID_PIBWDRS_LABEL_CARNUMBER2         0x0005
#define ID_PIBWDRS_LABEL_CARNUMBER3         0x0006
#define ID_PIBWDRS_LABEL_CARNUMBER4         0x0007
#define ID_PIBWDRS_LABEL_CARNUMBER5         0x0008
#define ID_PIBWDRS_LABEL_CARNUMBER6         0x0009
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER1    0x000A
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER2    0x000B
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER3    0x000C
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER4    0x000D
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER5    0x000E
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER6    0x000F
#define ID_PIBWDRS_BUTTON_BSHAFTDIAMETER1    0x0010
#define ID_PIBWDRS_BUTTON_BSHAFTDIAMETER6    0x0011
#define ID_PIBWDRS_BUTTON_CSHAFTDIAMETER1    0x0012
#define ID_PIBWDRS_BUTTON_CSHAFTDIAMETER6    0x0013
#define ID_PIBWDRS_BUTTON_DSHAFTDIAMETER1    0x0014
#define ID_PIBWDRS_BUTTON_DSHAFTDIAMETER6    0x0015
#define ID_PIBWDRS_LABEL_PRESSUREFULL1      0x0016
#define ID_PIBWDRS_LABEL_PRESSUREFULL2      0x0017
#define ID_PIBWDRS_LABEL_PRESSUREFULL3      0x0018
#define ID_PIBWDRS_LABEL_PRESSUREFULL4      0x0019
#define ID_PIBWDRS_LABEL_PRESSUREFULL5      0x001A
#define ID_PIBWDRS_LABEL_PRESSUREFULL6      0x001B
#define ID_PIBWDRS_LABEL_PRESSURE_UNFULL1   0x001C
#define ID_PIBWDRS_LABEL_PRESSURE_UNFULL2   0x001D
#define ID_PIBWDRS_LABEL_PRESSURE_UNFULL3   0x001E
#define ID_PIBWDRS_LABEL_PRESSURE_UNFULL4   0x001F
#define ID_PIBWDRS_LABEL_PRESSURE_UNFULL5   0x0020
#define ID_PIBWDRS_LABEL_PRESSURE_UNFULL6   0x0021

#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER7    0x0022
#define ID_PIBWDRS_BUTTON_ASHAFTDIAMETER8    0x0023
#define ID_PIBWDRS_LABEL_CARNUMBER7         0x0024
#define ID_PIBWDRS_LABEL_CARNUMBER8         0x0025

class CWheelDiaRecordSelectPage : public CPage
{
   DECLEAR_MESSAGE_MAP(CWheelDiaRecordSelectPage)

public:
    CWheelDiaRecordSelectPage();

public:
   int m_nWheelDiaType;

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
    void updateCarNumber();
    void OnWheel1_Dia1Clk();
    void OnWheel1_Dia2Clk();
    void OnWheel1_Dia3Clk();
    void OnWheel1_Dia4Clk();
    void OnWheel1_Dia5Clk();
    void OnWheel1_Dia6Clk();
    void OnWheel2_Dia1Clk();
    void OnWheel2_Dia6Clk();
    void OnWheel3_Dia1Clk();
    void OnWheel3_Dia6Clk();
    void OnWheel4_Dia1Clk();
    void OnWheel4_Dia6Clk();
    void OnWheel1_Dia7Clk();
    void OnWheel1_Dia8Clk();
};

#endif // CWHEELDIARECORDSELECTPAGE_H
