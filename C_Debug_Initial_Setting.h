#ifndef C_DEBUG_INITIAL_SETTING_H
#define C_DEBUG_INITIAL_SETTING_H



#include <QDialog>
#include "CGlobal.h"
#include <qevent.h>
#include <qmutex.h>
#include <qtimer.h>
#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBDSET_BUTTON_VERINF       0x0001
#define ID_PIBDSET_BUTTON_LIFESINGAL   0x0002
#define ID_PIBDSET_BUTTON_RIOMDEBUG    0x0003
#define ID_PIBDSET_BUTTON_FRESHTIME    0x0004
#define ID_PIBDSET_BUTTON_DATACONTROL  0x0005
#define ID_PIBDSET_BUTTON_RETURN       0x0006
#define ID_PIBDSET_BUTTON_RIOMDEBUGINFO 0x0007
#define ID_PIBDSET_LABEL_TEMP_IN_HMI   0x0008
#define ID_PIBDSET_LABEL_UDP_NUM       0x0009
#define ID_PIBDSET_LABEL_HMI_TC1orTC2  0x000A
#define ID_PIBDSET_LABEL_MVBorUDP      0x000B
#define ID_PIBDSET_BUTTON_SCREENRECTIFY      0x000C
#define ID_PIBDSET_BUTTON_RAWSETTING         0x000D
#define ID_PIBDSET_BUTTON_REBOOT       0x000E


class C_Debug_Initial_Setting : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Debug_Initial_Setting)


public:
    C_Debug_Initial_Setting();

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
    void OnBtn9Clk();


};


#endif // C_DEBUG_INITIAL_SETTING_H
