#ifndef CStationCancel_H
#define CStationCancel_H

#include "CPage.h"
#include "DataBuffer.h"
#define    ID_PIBSTATIONCANCEL_BUTTON_1_1 0X0001
#define    ID_PIBSTATIONCANCEL_BUTTON_2_1 0X0002
#define    ID_PIBSTATIONCANCEL_BUTTON_3_1 0X0003
#define    ID_PIBSTATIONCANCEL_BUTTON_4_1 0X0004
#define    ID_PIBSTATIONCANCEL_BUTTON_5_1 0X0005
#define    ID_PIBSTATIONCANCEL_BUTTON_6_1 0X0006
#define    ID_PIBSTATIONCANCEL_BUTTON_7_1 0X0007
#define    ID_PIBSTATIONCANCEL_BUTTON_8_1 0X0008
#define    ID_PIBSTATIONCANCEL_BUTTON_1_2 0X0009
#define    ID_PIBSTATIONCANCEL_BUTTON_2_2 0X000A
#define    ID_PIBSTATIONCANCEL_BUTTON_3_2 0X000B
#define    ID_PIBSTATIONCANCEL_BUTTON_4_2 0X000C
#define    ID_PIBSTATIONCANCEL_BUTTON_5_2 0X000D
#define    ID_PIBSTATIONCANCEL_BUTTON_6_2 0X000E
#define    ID_PIBSTATIONCANCEL_BUTTON_7_2 0X000F
#define    ID_PIBSTATIONCANCEL_BUTTON_8_2 0X0010
#define    ID_PIBSTATIONCANCEL_BUTTON_1_3 0X0011
#define    ID_PIBSTATIONCANCEL_BUTTON_2_3 0X0012
#define    ID_PIBSTATIONCANCEL_BUTTON_3_3 0X0013
#define    ID_PIBSTATIONCANCEL_BUTTON_4_3 0X0014
#define    ID_PIBSTATIONCANCEL_BUTTON_5_3 0X0015
#define    ID_PIBSTATIONCANCEL_BUTTON_6_3 0X0016
#define    ID_PIBSTATIONCANCEL_BUTTON_7_3 0X0017
#define    ID_PIBSTATIONCANCEL_BUTTON_8_3 0X0018
#define    ID_PIBSTATIONCANCEL_BUTTON_1_4 0X0019
#define    ID_PIBSTATIONCANCEL_BUTTON_2_4 0X001A
#define    ID_PIBSTATIONCANCEL_BUTTON_3_4 0X001B
#define    ID_PIBSTATIONCANCEL_BUTTON_4_4 0X001C
#define    ID_PIBSTATIONCANCEL_BUTTON_5_4 0X001D
#define    ID_PIBSTATIONCANCEL_BUTTON_6_4 0X001E
#define    ID_PIBSTATIONCANCEL_BUTTON_7_4 0X001F
#define    ID_PIBSTATIONCANCEL_BUTTON_8_4 0X0020
#define    ID_PIBSTATIONCANCEL_BUTTON_1_5 0X0021
#define    ID_PIBSTATIONCANCEL_BUTTON_2_5 0X0022
#define    ID_PIBSTATIONCANCEL_BUTTON_3_5 0X0023
#define    ID_PIBSTATIONCANCEL_BUTTON_4_5 0X0024
#define    ID_PIBSTATIONCANCEL_BUTTON_5_5 0X0025
#define    ID_PIBSTATIONCANCEL_BUTTON_6_5 0X0026
#define    ID_PIBSTATIONCANCEL_BUTTON_7_5 0X0027
#define    ID_PIBSTATIONCANCEL_BUTTON_8_5 0X0028

extern vector<CPage*>  g_PageVec;

#define  STATIONFLG_START  0
#define  STATIONFLG_END    1

class CStationCancel : public CPage
{
    DECLEAR_MESSAGE_MAP(CStationCancel)
public:
    CStationCancel();

public:
    int m_nStationFlg;

private:
    void SetStationButtonDownByID( );
    void Stationcancelstatus(int id, int stationcancel,bool m_bscset,bool flag,int statusval);
    //void SetStationButtonDownByName(QString stationName);
    //int m_stationindex;
    int stationcancel_timer;
    bool m_bSet;


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
    void OnBtn11Clk();
    void OnBtn12Clk();
    void OnBtn13Clk();
    void OnBtn14Clk();
    void OnBtn15Clk();
    void OnBtn21Clk();
    void OnBtn22Clk();
    void OnBtn23Clk();
    void OnBtn24Clk();
    void OnBtn25Clk();
    void OnBtn31Clk();
    void OnBtn32Clk();
    void OnBtn33Clk();
    void OnBtn34Clk();
    void OnBtn35Clk();
    void OnBtn41Clk();
    void OnBtn42Clk();
    void OnBtn43Clk();
    void OnBtn44Clk();
    void OnBtn45Clk();
    void OnBtn51Clk();
    void OnBtn52Clk();
    void UpdateStationColor();
    void updatastationcancelstatus();
    //void updataStationcancelstatus11( );

};

#endif // CStationCancel_H
