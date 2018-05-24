/****************************************************************************

  (c) CNRERD  DaLian

  Project:      大连地铁1,2号线显示屏 QT 程序

  Description:  用于定义每个页面的最小显示单元 ROMDATA 结构，定义每个页面显示单元（ROMDATA）数组，

  -------------------------------------------------------------------------

                $File: target.c,v

                $Author: 李时智

                $Revision: 1.1 $  $Date: 2013/7/02  $

                $State: 2013年7月整理

                Build Environment:
                KEIL uVision 2

  -------------------------------------------------------------------------

  Revision History:


****************************************************************************/
/****************************************************************************

  (c) CNRERD  DaLian

  Project:      大连地铁1,2号线显示屏 QT 程序

  Description:  用于定义每个页面的最小显示单元 ROMDATA 结构，定义每个页面显示单元（ROMDATA）数组，

  -------------------------------------------------------------------------

                $File: target.c,v

                $Author: 李时智

                $Revision: 1.1 $  $Date: 2013/7/02  $

                $State: 2013年7月整理

                Build Environment:
                KEIL uVision 2

  -------------------------------------------------------------------------

  Revision History:


****************************************************************************/
#ifndef ROM_H
#define ROM_H

#include <qcolor.h>
#include <qstring.h>
#include <qrect.h>
#include "CGlobal.h"
#include "ui_dialog.h"
#include <qmessagebox.h>

//rom data
struct ROMDATA
{
    QString showStr;
    QFont   font;
    QRect   rc;
    QColor  fgColor;
    QColor  bkColor;
    int     nControlType;
    int     nID;
    ROMDATA* operator ->()
    {
        return this;
    }
};

//rom info
struct ROMINFO
{
  ROMDATA* pRom;
  int      nRomSize;
};

extern int g_nTotalRomNum;
extern ROMINFO g_PicRom[];

extern ROMDATA g_PicRom_CommStatus[];
extern int g_CommStatusRomLen;
extern ROMDATA g_PicRom_CommStatusHelp[];
extern int g_CommStatusHelpRomLen;
extern ROMDATA g_PicRom_Main[];
extern int g_MainRomLen;
extern ROMDATA g_PicRom_InitialSetting[];
extern int g_InitialSettingRomLen;
extern ROMDATA g_PicRom_ReserveSetting[];
extern int g_ReserveSettingRomLen;
extern ROMDATA g_PicRom_StationSetting[];
extern int g_StationSettingRomLen;
extern ROMDATA g_PicRom_DirectionConfirm[];
extern int g_DirectionConfirmRomLen;
extern ROMDATA g_PicRom_RunState[];
extern int g_RunStateRomLen;
extern ROMDATA g_PicRom_RunHelp1[];
extern int g_RunHelp1RomLen;
extern ROMDATA g_PicRom_RunHelp2[];
extern int g_RunHelp2RomLen;
extern ROMDATA g_PicRom_RunHelp3[];
extern int g_RunHelp3RomLen;
extern ROMDATA g_PicRom_RunHelp4[];
extern int g_RunHelp4RomLen;
extern ROMDATA g_PicRom_CarStatus1[];
extern int g_CarStatus1RomLen;
extern ROMDATA g_PicRom_CarStatus1Help1[];
extern int g_CarStatus1Help1RomLen;
extern ROMDATA g_PicRom_CarStatus1Help2[];
extern int g_CarStatus1Help2RomLen;
extern ROMDATA g_PicRom_CarStatus1Help3[];
extern int g_CarStatus1Help3RomLen;
extern ROMDATA g_PicRom_CarStatus2[];
extern int g_CarStatus2RomLen;
//lmh add
extern ROMDATA g_PicRom_CarStatus4[];
extern int g_CarStatus4RomLen;

extern ROMDATA g_PicRom_CarStatusHelp[];
extern int g_CarStatusHelpRomLen;
extern ROMDATA g_PicRom_CarStatus3[];
extern int g_CarStatus3RomLen;
extern ROMDATA g_PicRom_CarStatus3Help[];
extern int g_CarStatus3HelpRomLen;
extern ROMDATA g_PicRom_Fault[];
extern int g_FaultRomLen;
extern ROMDATA g_PicRom_HVACSetting[];
extern int g_HVACSettingRomLen;
extern ROMDATA g_PicRom_HVACSettingHelp[];
extern int g_HVACSettingHelpRomLen;
extern ROMDATA g_PicRom_Maintain[];
extern int g_MaintainRomLen;
extern ROMDATA g_PicRom_ParameterSetting1[];
extern int g_ParameterSetting1RomLen;
extern ROMDATA g_PicRom_ParameterSetting2[];
extern int g_ParameterSetting2RomLen;
extern ROMDATA g_PicRom_WheelDiaRecord[];
extern int g_WheelDiaRecordRomLen;
extern ROMDATA g_PicRom_DoorTest[];
extern int g_DoorTestRomLen;
extern ROMDATA g_PicRom_DoorTestHelp[];
extern int g_DoorTestHelpRomLen;
extern ROMDATA g_PicRom_TractionSystemTest[];
extern int g_TractionSystemTestRomLen;
extern ROMDATA g_PicRom_TractionSystemTestHelp[];
extern int g_TractionSystemTestHelpRomLen;
extern ROMDATA g_PicRom_AccessorySystemTest[];
extern int g_AccessorySystemTestRomLen;
extern ROMDATA g_PicRom_AccessorySystemTestHelp[];
extern int g_AccessorySystemTestHelpRomLen;
extern ROMDATA g_PicRom_BrakeTest[];
extern int g_BrakeTestRomLen;
extern ROMDATA g_PicRom_BrakeTestHelp[];
extern int g_BrakeTestHelpRomLen;
extern ROMDATA g_PicRom_BrakeSelfTest[];
extern int g_BrakeSelfTestRomLen;
extern ROMDATA g_PicRom_BrakeSelfTestHelp[];
extern int g_BrakeSelfTestHelpRomLen;
extern ROMDATA g_PicRom_TodayFault[];
extern int g_TodayFaultRomLen;
extern ROMDATA g_PicRom_RunRecord[];
extern int g_RunRecordRomLen;
extern ROMDATA g_PicRom_TryRunTest[];
extern int g_TryRunTestRomLen;
extern ROMDATA g_PicRom_Password[];
extern int g_PasswordRomLen;
extern ROMDATA g_PicRom_ResetRunRecord[];
extern int g_ResetRunRecordRomLen;
extern ROMDATA g_PicRom_InstancyBroadcast[];
extern int g_InstancyBroadcastRomLen;
extern ROMDATA g_PicRom_RealTimeFault[];
extern int g_RealTimeFaultRomLen;
extern ROMDATA g_PicRom_HistoryFault[];
extern int g_HistoryFaultRomLen;
extern ROMDATA g_PicRom_TractionSystemFault[];
extern int g_TractionSystemFaultRomLen;
extern ROMDATA g_PicRom_DebugMain[];
extern int g_DebugMainRomLen;
extern ROMDATA g_PicRom_VersionInfo[];
extern int g_VersionInfoRomLen;
extern ROMDATA g_PicRom_VialSignal[];
extern int g_VialSignalRomLen;
extern ROMDATA g_PicRom_RIOMDebug[];
extern int g_RIOMDebugRomLen;
extern ROMDATA g_PicRom_RefreshTime[];
extern int g_RefreshTimeRomLen;
//extern ROMDATA g_PicRom_CommStatusDebug[];
//extern int g_CommStatusDebugRomLen;
extern ROMDATA g_PicRom_PasswordModify[];
extern int g_PasswordModifyRomLen;
extern ROMDATA g_PicRom_TimeSetting[];
extern int g_TimeSettingRomLen;
extern ROMDATA g_PicRom_FaultInfo[];
extern int g_FaultInfoRomLen;
extern ROMDATA g_PicRom_WheelDiaRecordSelect[];
extern int g_WheelDiaRecordSelectRomLen;

extern ROMDATA g_PicRom_DOTable[];
extern int g_DOTableRomLen;
extern ROMDATA g_PicRom_IOMTable[];
extern int g_IOMTableRomLen;
extern ROMDATA g_PicRom_IOTCTable[];
extern int g_IOTCTableRomLen;
extern ROMDATA g_PicRom_UdpDataPage1[];
extern int g_UdpDataPage1RomLen;

extern ROMDATA g_PicRom_AW0Setting[];
extern int g_AW0SettingRomLen;
extern ROMDATA g_PicRom_FASPage[];
extern int g_FASPageRomLen;
extern ROMDATA g_PicRom_RefreshTime2[];
extern int g_RefreshTime2RomLen;

extern ROMDATA g_PicRom_FaultPageHelp[];
extern int g_FaultPageHelpRomLen;

extern ROMDATA g_PicRom_DoorSetting[];
extern int g_DoorSettingRomLen;
extern ROMDATA g_PicRom_DebugSetting[];
extern int g_DebugSettingRomLen;

extern ROMDATA g_PicRom_StationCancel[];
extern int g_StationCancelRomLen;

extern ROMDATA g_PicRom_CarStatus4Help[];
extern int g_CarStatus4HelpRomLen;
extern ROMDATA g_PicRom_CarStatus4Help1[];
extern int g_CarStatus4Help1RomLen;

extern ROMDATA g_PicRom_RunRecordSetting[];
extern int g_RunRecordSettingRomLen;

extern ROMDATA g_PicRom_LevelDebug[];
extern int g_LevelDebugRomLen;

extern ROMDATA g_PicRom_HVACDebug[];
extern int g_HVACDebugRomLen;

extern ROMDATA g_PicRom_RunHelp5[];
extern int g_RunHelp5RomLen;

//Control id

// common page header control id
//
#define ID_IGNORE               0xFFFF
//
#define IDLB_COM_TITLE           0xFF01
#define IDLB_COM_DATE            0xFF02
#define IDLB_COM_TIME            0xFF03
#define IDLB_COM_BTN1            0xFF04
#define IDLB_COM_BTN2            0xFF05
#define IDLB_COM_BTN3            0xFF06
#define IDLB_COM_BTN4            0xFF07
#define IDLB_COM_BTN5            0xFF08
#define IDLB_COM_BTN6            0xFF09

#define IDLB_COM_voltage           0xFF0A
#define IDLB_COM_current           0xFF0B
#define IDLB_COM_speed             0xFF0C
#define IDLB_COM_level             0xFF0D
#define IDLB_COM_CurrentStation    0xFF0E
#define IDLB_COM_NextStation       0xFF0F
#define IDLB_COM_FinalStation      0xFF10
#define IDLB_COM_TrainFault        0xFF11
#define IDLB_COM_BTN7              0xFF12
#define IDLB_COM_BTN8              0xFF13
#define IDLB_COM_CarSpeedMode      0xFF14



//common rom macro
#ifdef USE_RAND_DATA
#define D_FONT(T)               QFont("SimHei",  T+6, QFont::Normal, FALSE)// T+10
#define D_FONT_BOLD(T)          QFont("SimHei",  T+6, QFont::Normal, FALSE)
#endif

#ifdef USE_SERIAL_DATA
#define D_FONT(T)               QFont("SimHei",  T+9, QFont::Normal, FALSE)
#define D_FONT_BOLD(T)          QFont("SimHei",  T+9, QFont::Bold, FALSE)
#endif

#ifdef USE_MVB_DATA
#define D_FONT(T)               QFont("SimHei",  T+9, QFont::Normal, FALSE)
#define D_FONT_BOLD(T)          QFont("SimHei",  T+9, QFont::Bold, FALSE)
#endif

#define D_DEFAULT_FONT          D_FONT(7)


#define D_COMMON_PAGE_HEADER(T)    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,   2, 796,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,  40, 796,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,   2,   1,  38), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(797,   2,   1,  38), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(200,   2,   1,  38), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(500,   2,   1,  38), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {T,                    D_FONT_BOLD(10),     QRect(202,   4, 296,  36), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_TITLE },          \
    {"2010年07月10日",      D_FONT_BOLD(10),     QRect(510,   9, 170,  30), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_DATE },           \
    {"11:23:00",           D_FONT_BOLD(10),     QRect(680,   9, 105,  30), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_TIME },           \


#define D_COMMON_PAGE_HEADER_NEW(T)    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */     \
    {QSTR(""),          D_FONT_BOLD(8),      QRect(187,   2,   88,  33), Qt::black,                     Qt::black,                    CONTROL_LABEL,          IDLB_COM_CarSpeedMode    },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,  32+3, 796,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,  68+3, 706,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 104+3, 796,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(94,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(186,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(276,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(399,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(502,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(605,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(708,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(798,   32+3,   1,  72), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {QSTR("网压"),                D_FONT_BOLD(8),      QRect(  3,   33+3,   90,  34), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("网流"),                D_FONT_BOLD(8),      QRect(95,   33+3,   90,  34), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("速度"),                D_FONT_BOLD(8),      QRect(187,   33+3,   88,  34), QColor(250,250,250),           Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("牵引/制动级位"),        D_FONT_BOLD(8),      QRect(277,   33+3,   121,  34), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("当前站"),              D_FONT_BOLD(8),      QRect(400,   33+3,   101,  34), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("下一站"),              D_FONT_BOLD(8),      QRect(503,   33+3,   101,  34), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("终点站"),              D_FONT_BOLD(8),      QRect(606,   33+3,   101,  34), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(4,   33+4+36,  89,  33),           Qt::white,            Qt::black,             CONTROL_LABEL,           IDLB_COM_voltage        }, \
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(96,   33+4+36, 89,  33),           Qt::white,            Qt::black,             CONTROL_LABEL,           IDLB_COM_current        }, \
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(188,  33+4+36,  87,  33),           Qt::white,            Qt::black,             CONTROL_LABEL,           IDLB_COM_speed        },   \
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(278,  33+4+36, 120,  33),           Qt::white,            Qt::black,             CONTROL_LABEL,           IDLB_COM_level        },   \
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(400,   33+3+36, 101,  34),           Qt::white,           Qt::black,             CONTROL_LABEL,           IDLB_COM_CurrentStation        },\
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(503,  33+3+36,  101,  34),           Qt::white,           Qt::black,             CONTROL_LABEL,           IDLB_COM_NextStation        },\
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(606,  33+3+36, 101,  34),           Qt::white,            Qt::black,             CONTROL_LABEL,           IDLB_COM_FinalStation        },\
    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(716,  33+3+2,  72,  68),         Qt::black,              Qt::black,             CONTROL_IMAGE,           IDLB_COM_TrainFault       },\
    {T,                    D_FONT_BOLD(10),     QRect(300,   0+3, 134,  30), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_TITLE },          \
    {"2010-07-10",      D_FONT_BOLD(9),     QRect(510,   0+5, 170,  30), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_DATE },           \
    {"11:23:00",           D_FONT_BOLD(9),     QRect(680,   0+5, 105,  30), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_TIME },           \


#define D_COMMON_PAGE_HEADER_NEW_DL(T)    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,  3, 797,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  82+68-30,  33, 554-68+30,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,  62, 797,   1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(150-30,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(220-30,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(300,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(410,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(485,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(560,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(635,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(730,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(798,  3,   1,  60), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },     \
    {T,                    D_FONT_BOLD(16),     QRect(  3,   4,   78+38,  58), Qt::white,                    Qt::black,                      CONTROL_LABEL,          IDLB_COM_TITLE },          \
    {QSTR("网压"),                D_FONT_BOLD(10),      QRect(  152-30,   4,  66,  28), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("速度"),                D_FONT_BOLD(10),      QRect(221-30,   4,   78+30,  28), QColor(250,250,250),           Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("牵引/制动级位"),        D_FONT_BOLD(10),      QRect(301,   4,   108,  28), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("当前站"),              D_FONT_BOLD(10),      QRect(411,   4,   73,  28), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("下一站"),              D_FONT_BOLD(10),      QRect(486,   4,   73,  28), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {QSTR("终点站"),              D_FONT_BOLD(10),      QRect(561,   4,   73,  28), QColor(250,250,250),          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },     \
    {"2013-11-5",                 D_FONT_BOLD(12),     QRect(637,    4, 93,  28),   Qt::white,                    Qt::black,               CONTROL_LABEL,           IDLB_COM_DATE },          \
    {"11:23:00",                 D_FONT_BOLD(12),     QRect(637,    34, 93,  28),   Qt::white,                    Qt::black,               CONTROL_LABEL,           IDLB_COM_TIME },          \
    {"FaultRed.PNG",             D_DEFAULT_FONT,     QRect(734,    6,  60,  54),     Qt::black,              Qt::black,             CONTROL_IMAGE,           IDLB_COM_TrainFault       },\
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(152-30,   35,  66+1,  27),          QColor(0,176,240),            Qt::black,             CONTROL_LABEL,           IDLB_COM_voltage        }, \
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(222-30,  35,  78+30,  27),           QColor(0,176,240),            Qt::black,             CONTROL_LABEL,           IDLB_COM_speed        },   \
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(302,  35, 107.5,  27),           QColor(0,176,240),            Qt::black,             CONTROL_LABEL,           IDLB_COM_level        },   \
    {QSTR(""),                 D_FONT_BOLD(9),      QRect(411,   35, 73,  27),           QColor(0,176,240),           Qt::black,             CONTROL_LABEL,           IDLB_COM_CurrentStation        },\
    {QSTR(""),                 D_FONT_BOLD(9),      QRect(486,   35,  73,  27),           QColor(0,176,240),           Qt::black,             CONTROL_LABEL,           IDLB_COM_NextStation        },\
    {QSTR(""),                 D_FONT_BOLD(9),      QRect(561,   35, 73,  27),           QColor(0,176,240),            Qt::black,             CONTROL_LABEL,           IDLB_COM_FinalStation        },\




#define D_COMMON_PAGE_BUTTON_BAR    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 550, 796,   1), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 596, 796,   1), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 550,   1,  46), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(797, 550,   1,  46), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_FONT(10),          QRect( 25, 555, 100,  38), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN1       },     \
    {"",                   D_FONT(10),          QRect(155, 555, 100,  38), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN2       },     \
    {"",                   D_FONT(10),          QRect(285, 555, 100,  38), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN3       },     \
    {"",                   D_FONT(10),          QRect(415, 555, 100,  38), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN4       },     \
    {"",                   D_FONT(10),          QRect(545, 555, 100,  38), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN5       },     \
    {"",                   D_FONT(10),          QRect(675, 555, 100,  38), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN6       },     \

//#define D_COMMON_PAGE_BUTTON_BAR_NEW    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */     \
   /* {"",                   D_DEFAULT_FONT,      QRect(  2, 560, 796,   1), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 596, 797,   1), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 560,   1,  36), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(797, 560,   1,  36), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_FONT(10),          QRect( 18, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN1       },     \
    {"",                   D_FONT(10),          QRect(115, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN2       },     \
    {"",                   D_FONT(10),          QRect(212, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN3       },     \
    {"",                   D_FONT(10),          QRect(309, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN4       },     \
    {"",                   D_FONT(10),          QRect(406, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN5       },     \
    {"",                   D_FONT(10),          QRect(503, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN6       },     \
    {"",                   D_FONT(10),          QRect(600, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN7       },     \
    {"",                   D_FONT(10),          QRect(697, 565, 85,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN8       },     \*/
    #define D_COMMON_PAGE_BUTTON_BAR_NEW    \
     /*string                font                       rc                  foreground color              background color                control type                   ID           */     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 520+40, 796,   1), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 556+40, 797,   1), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  2, 520+40,   1,  36), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(797, 520+40,   1,  36), QColor(250,250,250),          QColor( 50, 50, 50),            CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_FONT(10),          QRect( 18, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN1       },     \
    {"",                   D_FONT(10),          QRect(103+2, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN2       },     \
    {"",                   D_FONT(10),          QRect(188+4, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN3       },     \
    {"",                   D_FONT(10),          QRect(273+6, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN4       },     \
    {"",                   D_FONT(10),          QRect(358+8, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN5       },     \
    {"",                   D_FONT(10),          QRect(443+10, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN6       },     \
    {"",                   D_FONT(10),          QRect(528+12, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN7       },     \
{"",                   D_FONT(10),          QRect(698+16, 525+40, 73,  28), Qt::black,                    QColor(200,200,200) ,           CONTROL_BUTTON,         IDLB_COM_BTN8       },     \




#endif // ROM_H
