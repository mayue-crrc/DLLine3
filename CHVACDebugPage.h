#ifndef CHVACDebugPage_H
#define CHVACDebugPage_H

#include "CPage.h"
#include "DataBuffer.h"


#define ID_CHVACDEBUG_TRAIN                       0X0001
#define ID_CHVACDEBUG_ARROW_RIGHT                 0X0002
#define ID_CHVACDEBUG_ARROW_LEFT                  0X0003
#define ID_CHVACDEBUGTING_BUTTON_CONFIRM          0X0004

#define ID_CHVACDEBUG_BUTTON_TEMPDOWN              0X0005
#define ID_CHVACDEBUG_BUTTON_TEMPUP                0X0006
#define ID_CHVACDEBUG_BUTTON_CONFIRM               0X0007

#define ID_CHVACDEBUG_LABEL_RUNMODEL                0X0008
#define ID_CHVACDEBUG_LABEL_TEMPVALUE               0X0009

#define ID_CHVACDEBUG_BUTTON_STRONGCOLD              0X000A
#define ID_CHVACDEBUG_BUTTON_WEAKCOLD                0X000B
#define ID_CHVACDEBUG_BUTTON_AUTOCOLD                0X000C

#define ID_CHVACDEBUG_BUTTON_AMERGEWIND              0X000D
#define ID_CHVACDEBUG_BUTTON_FULLWARM                0X000E
#define ID_CHVACDEBUG_BUTTON_HALFWARM                0X000F

#define ID_CHVACDEBUG_BUTTON_AUTOWARM                0X0010
#define ID_CHVACDEBUG_BUTTON_WIND                    0X0012
#define ID_CHVACDEBUG_BUTTON_STOP                    0X0013

#define ID_CHVACDEBUG_LABEL_SETTEMPERATURECAR1              0X0014
#define ID_CHVACDEBUG_LABEL_SETTEMPERATURECAR2              0X0015
#define ID_CHVACDEBUG_LABEL_SETTEMPERATURECAR3              0X0016
#define ID_CHVACDEBUG_LABEL_SETTEMPERATURECAR4              0X0017
//#define ID_CHVACDEBUG_LABEL_SETTEMPERATURECAR5              0X0018
//#define ID_CHVACDEBUG_LABEL_SETTEMPERATURECAR6              0X0019

#define ID_CHVACDEBUG_LABEL_TEMPERATURECAR1              0X001A
#define ID_CHVACDEBUG_LABEL_TEMPERATURECAR2              0X001B
#define ID_CHVACDEBUG_LABEL_TEMPERATURECAR3              0X001C
#define ID_CHVACDEBUG_LABEL_TEMPERATURECAR4              0X001D
//#define ID_CHVACDEBUG_LABEL_TEMPERATURECAR5              0X001E
//#define ID_CHVACDEBUG_LABEL_TEMPERATURECAR6              0X001F


#define ID_CHVACDEBUG_LABEL_CAR1COMPRESS1              0X0020
#define ID_CHVACDEBUG_LABEL_CAR1COMPRESS2              0X0021
#define ID_CHVACDEBUG_LABEL_CAR1COMPRESS3              0X0022
#define ID_CHVACDEBUG_LABEL_CAR1COMPRESS4              0X0023
#define ID_CHVACDEBUG_LABEL_CAR1COMPRESS5              0X0024
#define ID_CHVACDEBUG_LABEL_CAR1COMPRESS6              0X0025


#define ID_CHVACDEBUG_LABEL_CAR2COMPRESS1              0X0026
#define ID_CHVACDEBUG_LABEL_CAR2COMPRESS2              0X0027
#define ID_CHVACDEBUG_LABEL_CAR2COMPRESS3              0X0028
#define ID_CHVACDEBUG_LABEL_CAR2COMPRESS4              0X0029
#define ID_CHVACDEBUG_LABEL_CAR2COMPRESS5              0X002A
#define ID_CHVACDEBUG_LABEL_CAR2COMPRESS6              0X002B

#define ID_CHVACDEBUG_LABEL_CAR3COMPRESS1              0X002C
#define ID_CHVACDEBUG_LABEL_CAR3COMPRESS2              0X002D
#define ID_CHVACDEBUG_LABEL_CAR3COMPRESS3              0X002E
#define ID_CHVACDEBUG_LABEL_CAR3COMPRESS4              0X002F
#define ID_CHVACDEBUG_LABEL_CAR3COMPRESS5              0X0030
#define ID_CHVACDEBUG_LABEL_CAR3COMPRESS6              0X0031

#define ID_CHVACDEBUG_LABEL_CAR4COMPRESS1              0X0032
#define ID_CHVACDEBUG_LABEL_CAR4COMPRESS2              0X0033
#define ID_CHVACDEBUG_LABEL_CAR4COMPRESS3              0X0034
#define ID_CHVACDEBUG_LABEL_CAR4COMPRESS4              0X0035
#define ID_CHVACDEBUG_LABEL_CAR4COMPRESS5              0X0036
#define ID_CHVACDEBUG_LABEL_CAR4COMPRESS6              0X0037

#define ID_CHVACDEBUG_LABEL_TEMPERATUREOUTCAR1              0X0038
#define ID_CHVACDEBUG_LABEL_TEMPERATUREOUTCAR2              0X0039
#define ID_CHVACDEBUG_LABEL_TEMPERATUREOUTCAR3              0X003A
#define ID_CHVACDEBUG_LABEL_TEMPERATUREOUTCAR4              0X003B



//
#define ID_CHVACDEBUG_LABEL_CAR1COLD1              0X0044
#define ID_CHVACDEBUG_LABEL_CAR1COLD2              0X0045
#define ID_CHVACDEBUG_LABEL_CAR1COLD3              0X0046
#define ID_CHVACDEBUG_LABEL_CAR1COLD4              0X0047
#define ID_CHVACDEBUG_LABEL_CAR1COLD5              0X0048
#define ID_CHVACDEBUG_LABEL_CAR1COLD6              0X0049


#define ID_CHVACDEBUG_LABEL_CAR2COLD1              0X004A
#define ID_CHVACDEBUG_LABEL_CAR2COLD2              0X004B
#define ID_CHVACDEBUG_LABEL_CAR2COLD3              0X004C
#define ID_CHVACDEBUG_LABEL_CAR2COLD4              0X004D
#define ID_CHVACDEBUG_LABEL_CAR2COLD5              0X004E
#define ID_CHVACDEBUG_LABEL_CAR2COLD6              0X004F

#define ID_CHVACDEBUG_LABEL_CAR3COLD1              0X0050
#define ID_CHVACDEBUG_LABEL_CAR3COLD2              0X0051
#define ID_CHVACDEBUG_LABEL_CAR3COLD3              0X0052
#define ID_CHVACDEBUG_LABEL_CAR3COLD4              0X0053
#define ID_CHVACDEBUG_LABEL_CAR3COLD5              0X0054
#define ID_CHVACDEBUG_LABEL_CAR3COLD6              0X0055

#define ID_CHVACDEBUG_LABEL_CAR4COLD1              0X0056
#define ID_CHVACDEBUG_LABEL_CAR4COLD2              0X0057
#define ID_CHVACDEBUG_LABEL_CAR4COLD3              0X0058
#define ID_CHVACDEBUG_LABEL_CAR4COLD4              0X0059
#define ID_CHVACDEBUG_LABEL_CAR4COLD5              0X005A
#define ID_CHVACDEBUG_LABEL_CAR4COLD6              0X005B


#define ID_CHVACDEBUG_LABEL_CAR5COLD5              0X0060
#define ID_CHVACDEBUG_LABEL_CAR5COLD6              0X0061


#define ID_CHVACDEBUG_LABEL_CAR6COLD5              0X0066
#define ID_CHVACDEBUG_LABEL_CAR6COLD6              0X0067


// 2
#define ID_CHVACDEBUG_LABEL_CAR1WIND1              0X0068
#define ID_CHVACDEBUG_LABEL_CAR1WIND2              0X0069
#define ID_CHVACDEBUG_LABEL_CAR1WIND3              0X006A
#define ID_CHVACDEBUG_LABEL_CAR1WIND4              0X006B
#define ID_CHVACDEBUG_LABEL_CAR1WIND5              0X006C
#define ID_CHVACDEBUG_LABEL_CAR1WIND6              0X006D


#define ID_CHVACDEBUG_LABEL_CAR2WIND1              0X006E
#define ID_CHVACDEBUG_LABEL_CAR2WIND2              0X006F
#define ID_CHVACDEBUG_LABEL_CAR2WIND3              0X0070
#define ID_CHVACDEBUG_LABEL_CAR2WIND4              0X0071
#define ID_CHVACDEBUG_LABEL_CAR2WIND5              0X0072
#define ID_CHVACDEBUG_LABEL_CAR2WIND6              0X0073

#define ID_CHVACDEBUG_LABEL_CAR3WIND1              0X0074
#define ID_CHVACDEBUG_LABEL_CAR3WIND2              0X0075
#define ID_CHVACDEBUG_LABEL_CAR3WIND3              0X0076
#define ID_CHVACDEBUG_LABEL_CAR3WIND4              0X0077
#define ID_CHVACDEBUG_LABEL_CAR3WIND5              0X0078
#define ID_CHVACDEBUG_LABEL_CAR3WIND6              0X0079

#define ID_CHVACDEBUG_LABEL_CAR4WIND1              0X007A
#define ID_CHVACDEBUG_LABEL_CAR4WIND2              0X007B
#define ID_CHVACDEBUG_LABEL_CAR4WIND3              0X007C
#define ID_CHVACDEBUG_LABEL_CAR4WIND4              0X007D
#define ID_CHVACDEBUG_LABEL_CAR4WIND5              0X007E
#define ID_CHVACDEBUG_LABEL_CAR4WIND6              0X007F



#define ID_CHVACDEBUG_LABEL_CAR1PREHEAT1              0X008C
#define ID_CHVACDEBUG_LABEL_CAR1PREHEAT2              0X008D
#define ID_CHVACDEBUG_LABEL_CAR1PREHEAT3              0X008E
#define ID_CHVACDEBUG_LABEL_CAR1PREHEAT4              0X008F
#define ID_CHVACDEBUG_LABEL_CAR1LIGHTEM5              0X0090
#define ID_CHVACDEBUG_LABEL_CAR1LIGHTEM6              0X0091


#define ID_CHVACDEBUG_LABEL_CAR2PREHEAT1              0X0092
#define ID_CHVACDEBUG_LABEL_CAR2PREHEAT2              0X0093
#define ID_CHVACDEBUG_LABEL_CAR2PREHEAT3              0X0094
#define ID_CHVACDEBUG_LABEL_CAR2PREHEAT4              0X0095
#define ID_CHVACDEBUG_LABEL_CAR2LIGHTEM5              0X0096
#define ID_CHVACDEBUG_LABEL_CAR2LIGHTEM6              0X0097

#define ID_CHVACDEBUG_LABEL_CAR3PREHEAT1              0X0098
#define ID_CHVACDEBUG_LABEL_CAR3PREHEAT2              0X0099
#define ID_CHVACDEBUG_LABEL_CAR3PREHEAT3              0X009A
#define ID_CHVACDEBUG_LABEL_CAR3PREHEAT4              0X009B
#define ID_CHVACDEBUG_LABEL_CAR3LIGHTEM5              0X009C
#define ID_CHVACDEBUG_LABEL_CAR3LIGHTEM6              0X009D

#define ID_CHVACDEBUG_LABEL_CAR4PREHEAT1              0X009E
#define ID_CHVACDEBUG_LABEL_CAR4PREHEAT2              0X009F
#define ID_CHVACDEBUG_LABEL_CAR4PREHEAT3              0X00A0
#define ID_CHVACDEBUG_LABEL_CAR4PREHEAT4              0X00A1
#define ID_CHVACDEBUG_LABEL_CAR4LIGHTEM5              0X00A2
#define ID_CHVACDEBUG_LABEL_CAR4LIGHTEM6              0X00A3



#define ID_CHVACDEBUG_LABEL_CONTROLMODELCAR1              0X00B0
#define ID_CHVACDEBUG_LABEL_CONTROLMODELCAR2              0X00B1
#define ID_CHVACDEBUG_LABEL_CONTROLMODELCAR3              0X00B2
#define ID_CHVACDEBUG_LABEL_CONTROLMODELCAR4              0X00B3


#define ID_CHVACDEBUG_LABEL_TEMPV                  0X00B6
#define ID_CHVACDEBUG_LABEL_TEMPUNIT               0X00B7
#define ID_CHVACDEBUG_COMMINTERRUPT                0X00B8

#define ID_CHVACDEBUG_LABEL_CAR             0x00B9
#define ID_CHVACDEBUG_LABEL_CAR1            0x00BA
#define ID_CHVACDEBUG_LABEL_CAR2            0x00BB
#define ID_CHVACDEBUG_LABEL_CAR3            0x00BC
#define ID_CHVACDEBUG_LABEL_CAR4            0x00BD


#define ID_CHVACDEBUG_LABEL_CAR7COMPRESS1              0X00C0
#define ID_CHVACDEBUG_LABEL_CAR7COMPRESS2              0X00C1
#define ID_CHVACDEBUG_LABEL_CAR7COMPRESS3              0X00C2
#define ID_CHVACDEBUG_LABEL_CAR7COMPRESS4              0X00C3


#define ID_CHVACDEBUG_LABEL_CAR8COMPRESS1              0X00C4
#define ID_CHVACDEBUG_LABEL_CAR8COMPRESS2              0X00C5
#define ID_CHVACDEBUG_LABEL_CAR8COMPRESS3              0X00C6
#define ID_CHVACDEBUG_LABEL_CAR8COMPRESS4              0X00C7



#define ID_CHVACDEBUG_BUTTON_PREWARM                  0X00F7//lmh add
#define ID_CHVACDEBUG_BUTTON_PRECOOL                  0X00F8
#define ID_CHVACDEBUG_LABEL_EmergencyModeStatus       0X00F9

#define ID_CHVACDEBUG_LABEL_CAR1RUNMODEL                0X00FA
#define ID_CHVACDEBUG_LABEL_CAR2RUNMODEL                0X00FB
#define ID_CHVACDEBUG_LABEL_CAR3RUNMODEL                0X00FC
#define ID_CHVACDEBUG_LABEL_CAR4RUNMODEL                0X00FD
#define ID_CHVACDEBUG_LABEL_CAR5RUNMODEL                0X00FE
#define ID_CHVACDEBUG_LABEL_CAR6RUNMODEL                0X00FF
#define ID_CHVACDEBUG_LABEL_CAR7RUNMODEL                0X0100
#define ID_CHVACDEBUG_LABEL_CAR8RUNMODEL                0X0101
#define ID_CHVACDEBUG_BUTTON_FASPAGE                    0X0102





extern vector<CPage*>  g_PageVec;


class CHVACDebugPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHVACDebugPage)
public:
    CHVACDebugPage();

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
    void OnSTRONGCOLDClk();
    void OnWEAKCOLDClk();
    void OnAUTOCOLDClk();
    void OnAMERGEWINDClk();
    void OnFULLWARMClk();
    void OnHALFWARMClk();
    void OnAUTOWARMClk();
    void OnWINDClk();
    void OnSTOPClk();
    void OnThempDownClk();
    void OnThempUpClk();
    void OnConfirmClk();
    void OnPRECOOLClk();
    void OnPREWARMClk(); // lmh add

private:
    bool m_bAutoTempV;
    bool m_bpreAutoTempV;
    void UpdateHMIActive();
    void UpdateHVACState();
    void UpdateCarTem();
    void UpdateIndoorCarTem();
    void UpdateOutdoorCarTem();
    void UpdateHVAC_mode();
    void UpdateHVAC_RUNmode();
    void UpdateHVAC_Compressor();
    void UpdateHVAC_Condenser();
    void UpdateHVAC_EvaporatorFan();
    //void UpdateHVAC_HotElectricity();
    void UpdateHVAC_PreheaterState();
    void UpdateHVAC_NewWind();
    void UpdateHVACError();
    void updateCtrl();
    void UpdateEmergencyMode();

    void SetCarTem(int lableId,int temperature);
    void SetHVAC_mode(int lableId, QString modeValue);
    void SetHVACStateColor(int id, int colorVal);
    int  m_PressBtnID;
    bool m_bBtnPress;
    int prewarmflg1;
    int prewarmflg2;
    int prewarmflg3;
    int prewarmflg4;
    int prewarmflg5;
    int precoolflg1;
    int precoolflg2;
    int precoolflg3;
    int precoolflg4;
    int precoolflg5;
    int HVAC_mode_select1;
    QString HVAC_state1;


    void OnCarClk();
    void OnCar1Clk();
    void OnCar2Clk();
    void OnCar3Clk();
    void OnCar4Clk();
    void OnCar5Clk();
    void OnCar6Clk();
    void OnCar7Clk();
    void OnCar8Clk();

    void SetLabelBkColorCar(int id, int colorVal);
    void SetCtrlButtonState(int nID);
    void ReSetCtrlButtonState();
    void updateTempV();
    void SpecialButtonState();
    void OnFASpageBtnClk();


};

#endif // CHVACDebugPage_H
