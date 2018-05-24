#ifndef CDebugMainPage_H
#define CDebugMainPage_H

#include <QDialog>
#include "CGlobal.h"
#include <qevent.h>
#include <qmutex.h>
#include <qtimer.h>
#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBDM_BUTTON_VERINF       0x0001
#define ID_PIBDM_BUTTON_LIFESINGAL   0x0002
#define ID_PIBDM_BUTTON_RIOMDEBUG    0x0003
#define ID_PIBDM_BUTTON_FRESHTIME    0x0004
#define ID_PIBDM_BUTTON_DATACONTROL  0x0005
#define ID_PIBDM_BUTTON_RETURN       0x0006
#define ID_PIBDM_BUTTON_RIOMDEBUGINFO 0x0007
#define ID_PIBDM_LABEL_TEMP_IN_HMI   0x0008
#define ID_PIBDM_LABEL_UDP_NUM       0x0009
#define ID_PIBDM_LABEL_HMI_TC1orTC2  0x000A
#define ID_PIBDM_LABEL_MVBorUDP      0x000B
#define ID_PIBDM_BUTTON_SCREENRECTIFY      0x000C
#define ID_PIBDM_BUTTON_DEBUGINISETTING   0x000D
#define ID_PIBDM_BUTTON_LEVELDEBUG   0x000E


class CDebugMainPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDebugMainPage)


public:
    CDebugMainPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnBtn1Clk();
    void OnBtn2Clk();
    void OnBtn3Clk();
    void OnBtn4Clk();
    void OnBtn5Clk();
    void OnBtn6Clk();
    void OnBtn7Clk();
    void OnBtn8Clk();
    void OnDebugIniSetting();
    void OnLevelDebug();


};

#endif // CDebugMainPage_H
