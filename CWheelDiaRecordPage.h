#ifndef CWheelDiaRecordPage_H
#define CWheelDiaRecordPage_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;



#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME1  0x0001
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME2  0x0002
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME3  0x0003
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME4  0x0004
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME5  0x0005
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME6  0x0006
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME7  0x0007
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME8  0x0008
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME9  0x0009
#define   ID_WHEELDIA_LABEL_RECORDSETTINGTIME10  0x000A


#define   ID_WHEELDIA_LABEL_RECORD1  0x000B
#define   ID_WHEELDIA_LABEL_RECORD2  0x000C
#define   ID_WHEELDIA_LABEL_RECORD3  0x000D
#define   ID_WHEELDIA_LABEL_RECORD4  0x000E
#define   ID_WHEELDIA_LABEL_RECORD5  0x000F
#define   ID_WHEELDIA_LABEL_RECORD6  0x0010
#define   ID_WHEELDIA_LABEL_RECORD7  0x0011
#define   ID_WHEELDIA_LABEL_RECORD8  0x0012
#define   ID_WHEELDIA_LABEL_RECORD9  0x0013
#define   ID_WHEELDIA_LABEL_RECORD10  0x0014

#define   ID_WHEELRECORD_LABEL_PARAMETER  0x0015

#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE1  0x0016
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE2  0x0017
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE3  0x0018
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE4  0x0019
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE5  0x001A
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE6  0x001B
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE7  0x001C
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE8  0x001D
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE9  0x001E
#define   ID_WHEELDIA_LABEL_RECORDSETTINGDATE10  0x001F




class CWheelDiaRecordPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CWheelDiaRecordPage)
public:
    CWheelDiaRecordPage();

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
    void UpdateTable();
    void UpdateWheelRecord();
    void SetStringValue(int id, QString vVal);
};

#endif // CWheelDiaRecordPage_H
