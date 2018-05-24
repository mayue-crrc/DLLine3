#ifndef CInitialSettingPage_H
#define CInitialSettingPage_H

#include "CPage.h"
#include "DataBuffer.h"

#define    ID_PIBIS_BUTTON_ORIGINATOR            0X0001
#define    ID_PIBIS_BUTTON_TERMINUS              0X0002
#define    ID_PIBIS_EDIT_NEWORIGINATOR           0X0003
#define    ID_PIBIS_EDIT_NEWTERMINUS             0X0004
#define    ID_PIBIS_EDIT_CURRENTORIGINATOR       0X0005
#define    ID_PIBIS_EDIT_CURRENTTERMINUS         0X0006
#define    ID_PIBIS_BUTTON_DIRECTIONCONFIRM      0X0007
#define    ID_PIBIS_BUTTON_RESERVESET            0X0008
#define    ID_PIBIS_LABEL_EXPLAIN                0X0009
#define    ID_PIBIS_BUTTON_CURRENTSTATION         0X000A
#define    ID_PIBIS_EDIT_NEWCURRENTSTATION       0X000B
#define    ID_PIBIS_EDIT_CURRENTCURRENTSTATION   0X000C
#define    ID_PIBIS_BUTTON_NEXTSTATION         0X000D
#define    ID_PIBIS_EDIT_NEWNEXTSTATION       0X000E
#define    ID_PIBIS_EDIT_CURRENTNEXTSTATION   0X000F

extern vector<CPage*>  g_PageVec;

class CInitialSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CInitialSettingPage)
public:
    CInitialSettingPage();

private:
    QString GetStationNameByID(int nStationID);
    void updateStationName();
    bool m_bConfirmDown;

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
    void OnDirectConfirmBtnClk();
    void OnReserveSetBtnClk();
    void OnStartStationClk();
    void OnEndStationClk();
    void OnCurrentStationClk();
    void OnNextStationClk();
};

#endif // CInitialSettingPage_H
