#include "CRunStatePage.h"
#include "CRealTimeFaultsWarnningDialog.h"
#include <QDebug>



ROMDATA g_PicRom_RunState[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
//    D_COMMON_PAGE_HEADER_NEW(QSTR(" 运    行") )
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("运行") )


    {"RIGHT",                  D_FONT_BOLD(6),      QRect(702, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_LEFT                 },
    {"",                       D_FONT_BOLD(10),      QRect(100, 64, 600,  85),           Qt::black,                 QColor(205,205,205),                CONTROL_TRAIN,           ID_PIBRUNSTATE_TRAIN         },
//    {QSTR("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR(" 运行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QSTR("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_V        },

    {QSTR("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBRUNSTATE_ICON_WARNNING       },

    {QSTR("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TRACTIONMODEL        },

    {QSTR("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_SPEED        },

    {QSTR("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG        },
//    {QSTR("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL2_ARRIVETERMINALFLAG        },
    {QSTR("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_LEFT         },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2        },

#endif

//横线
    {"",                       D_FONT_BOLD(6),      QRect( 10, 151, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 180, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 210, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 240, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 270, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 300, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 330, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 360, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 390, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 420, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 450, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 480, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 510, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect( 10, 510, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect( 10, 540, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //竖线
    {"",                       D_FONT_BOLD(6),      QRect( 10, 180-29,   1, 300+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 180-29,   1, 300+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(250, 180-29,   1, 300+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(400, 180-29,   1, 300+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(550, 180-29,   1, 300+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(700, 180-29,   1, 300+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {QSTR("高加速模式"),          D_FONT_BOLD(8),      QRect(715, 380-15, 75,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_HIGHACCEMODE         },
//    {QSTR("洗车模式"),          D_FONT_BOLD(8),      QRect(715, 440-25, 75,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WASHCARMODE         },
//    {QSTR("紧急运行模式"),          D_FONT_BOLD(8),      QRect(715, 500-35, 75,  40),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_EMERGENCYMODE         },
    {QSTR("高加速模式"),          D_FONT_BOLD(8),      QRect(115, 500+20, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_HIGHACCEMODE         },
    {QSTR("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500+20, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WASHCARMODE         },
    {QSTR("紧急运行模式"),          D_FONT_BOLD(8),      QRect(309, 500+20, 105,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_EMERGENCYMODE         },

//{"EmgyBrkButnDwn.PNG",              D_DEFAULT_FONT,      QRect(400,  500+20,  90,  38),          Qt::white,                Qt::white,                  CONTROL_IMAGE,          ID_EMGY_BRK_BTN_DWN1              },
//{"EmgyBrkButnUp.PNG",              D_DEFAULT_FONT,      QRect(400,  500+20,  90,  38),          Qt::white,                 Qt::white,                 CONTROL_IMAGE,          ID_EMGY_BRK_BTN_UP1              },
//{"EmgyBrkButnDwn.PNG",              D_DEFAULT_FONT,      QRect(510,  500+20,  90,  38),          Qt::white,                Qt::white,                  CONTROL_IMAGE,          ID_EMGY_BRK_BTN_DWN2              },
//{"EmgyBrkButnUp.PNG",              D_DEFAULT_FONT,      QRect(510,  500+20,  90,  38),          Qt::white,                 Qt::white,                 CONTROL_IMAGE,          ID_EMGY_BRK_BTN_UP2              },

//    {"EmgyBrkButnUp.PNG",              D_DEFAULT_FONT,      QRect(117,  103,  20,  22),          Qt::white,                 Qt::white,                 CONTROL_IMAGE,          ID_EMGY_BRK_BTN_1              },
//    {"EmgyBrkButnUp.PNG",              D_DEFAULT_FONT,      QRect(661,  103,  20,  22),          Qt::white,                 Qt::white,                 CONTROL_IMAGE,          ID_EMGY_BRK_BTN_2             },




    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(613+14, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_FASPAGE         },
    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(705, 500+20, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },

    {QSTR("旁路"),          D_FONT_BOLD(8),      QRect( 720, 140, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_ByPass         },
    {QSTR("烟火"),          D_FONT_BOLD(8),      QRect(720, 200, 60,  40),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_FAS_status         },
    {QSTR(""),          D_FONT_BOLD(8),      QRect(720, 260, 60,  40),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_DOOR_status         },

    {QSTR("空调设定模式"),          D_FONT_BOLD(6),      QRect( 705, 300, 90,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),          D_FONT_BOLD(8),      QRect( 710, 345, 80,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_HVACRUNMODE         },
    {QSTR("空调设定温度"),          D_FONT_BOLD(6),      QRect(705, 400, 90,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE         },
    {QSTR(""),          D_FONT_BOLD(8),      QRect(710, 445, 80,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_HVACSETTEMP         },


    {QSTR("车号"),                   D_FONT_BOLD(7),      QRect( 11, 152,  88,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),                   D_FONT_BOLD(8),      QRect( 101, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                   D_FONT_BOLD(8),      QRect( 251, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                   D_FONT_BOLD(8),      QRect( 401, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                   D_FONT_BOLD(8),      QRect( 551, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    {QSTR("辅助系统状态"),        D_FONT_BOLD(7),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("牵引系统状态"),      D_FONT_BOLD(7),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("空气制动"),        D_FONT_BOLD(7),      QRect( 11, 241,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("制动缸压力"),        D_FONT_BOLD(7),      QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("转向架切除"),          D_FONT_BOLD(7),      QRect( 11, 301,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("整车制动切除"),            D_FONT_BOLD(7),      QRect( 11, 331,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("1侧门"),            D_FONT_BOLD(7),      QRect( 11, 361,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("2侧门"),            D_FONT_BOLD(7),      QRect( 11, 391,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("车内温度"),        D_FONT_BOLD(7),      QRect( 11, 421,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("车外温度"),        D_FONT_BOLD(7),      QRect( 11, 421,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("空压机状态"),           D_FONT_BOLD(7),      QRect( 11, 451,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("保持制动"),           D_FONT_BOLD(7),      QRect( 11, 451,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("停放制动"),          D_FONT_BOLD(7),      QRect( 11, 481,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("乘车率"),          D_FONT_BOLD(7),      QRect( 11, 481,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("376 V"),                 D_FONT_BOLD(10),      QRect(105, 185,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V        },
    {QSTR("扩展供电"),               D_FONT_BOLD(7),      QRect(255, 185,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE        },
    {QSTR("扩展供电"),               D_FONT_BOLD(7),      QRect(405, 185,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE2        },
    {QSTR("380 V"),                 D_FONT_BOLD(10),      QRect(555, 185, 140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V        },

    {QSTR("TCU1牵引允许"),          D_FONT_BOLD(8),      QRect(105, 215,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,                ID_PIBRUNSTATE_LABEL_TCU_ENABLE1        },
    //{QSTR(""),          D_FONT_BOLD(8),      QRect(105, 215,  140, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,                ID_IGNORE        },
    {QSTR(" "),                 D_FONT_BOLD(10),      QRect(255, 215,  140, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE        },
    {QSTR(" "),                 D_FONT_BOLD(10),      QRect(405, 215,  140, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE        },
    {QSTR("TCU2牵引允许"),          D_FONT_BOLD(8),      QRect(555, 215,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TCU_ENABLE2        },
    //{QSTR(""),          D_FONT_BOLD(8),      QRect(555, 215,  140, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {"",                       D_FONT_BOLD(6),      QRect(175, 300,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(325, 300,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(475, 300,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(625, 300,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//空气制动
    {QSTR("  "),              D_FONT_BOLD(7),      QRect(105, 244,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_AIRBRK1        },
    //{QSTR("  "),              D_FONT_BOLD(6),      QRect(177, 244,  70, 25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2        },
    {QSTR("  "),              D_FONT_BOLD(7),      QRect(255, 244,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_AIRBRK2        },
    //{QSTR("  "),              D_FONT_BOLD(6),       QRect(327, 244,  70, 25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE2        },
    {QSTR("  "),              D_FONT_BOLD(7),      QRect(405, 244,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_AIRBRK3        },
    //{QSTR("7.1"),              D_FONT_BOLD(6),      QRect(477, 244,  70, 25),            Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2        },
    {QSTR("  "),              D_FONT_BOLD(7),      QRect(555, 244,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_AIRBRK4        },
//制动缸压力
    {QSTR("  "),              D_FONT_BOLD(10),      QRect(105, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1        },
    {QSTR("  "),              D_FONT_BOLD(10),      QRect(255, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE1        },
    {QSTR("  "),              D_FONT_BOLD(10),      QRect(405, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1        },
    {QSTR("  "),              D_FONT_BOLD(10),      QRect(555, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1        },
//转向架切除
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(102, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(177, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(252, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE1        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(327, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE2        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(402, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(477, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(552, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(627, 304,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1        },
//整车制动切除
    {QSTR(""),               D_FONT_BOLD(10),      QRect(105, 334,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WHOLECAR1BRAKECUT        },
    {QSTR(""),               D_FONT_BOLD(10),      QRect(255, 334,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WHOLECAR2BRAKECUT         },
    {QSTR(""),               D_FONT_BOLD(10),      QRect(405, 334,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WHOLECAR3BRAKECUT         },
    {QSTR(""),               D_FONT_BOLD(10),      QRect(555, 334,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WHOLECAR4BRAKECUT         },



    {QSTR("1"),                D_FONT_BOLD(10),      QRect( 104, 364,  70, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR1        },
    {QSTR("3"),                D_FONT_BOLD(10),      QRect( 177, 364,  70, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR3        },


    {QSTR("1"),                D_FONT_BOLD(10),      QRect( 254, 364,  45, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR1        },
    {QSTR("3"),                D_FONT_BOLD(10),      QRect( 302, 364,  45, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR3        },
    {QSTR("5"),                D_FONT_BOLD(10),      QRect( 350, 364,  45, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR5        },

    {QSTR("1"),                D_FONT_BOLD(10),       QRect( 500, 394,  45, 23),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR1        },
    {QSTR("3"),                D_FONT_BOLD(10),       QRect( 452, 394,  45, 23),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR3        },
    {QSTR("5"),                D_FONT_BOLD(10),       QRect( 404, 394,  45, 23),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR5        },

    {QSTR("1"),                D_FONT_BOLD(10),     QRect( 627, 394,  70, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR1        },
    {QSTR("3"),                D_FONT_BOLD(10),      QRect( 554, 394,  70, 23),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR3        },


    {QSTR("2"),                D_FONT_BOLD(10),      QRect( 104, 394,  70, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR2        },
    {QSTR("4"),                D_FONT_BOLD(10),      QRect( 177, 394,  70, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR4        },
    {QSTR("2"),                D_FONT_BOLD(10),      QRect( 254, 394,  45, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR2        },
    {QSTR("4"),                D_FONT_BOLD(10),      QRect( 302, 394,  45, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR4        },
    {QSTR("6"),                D_FONT_BOLD(10),      QRect( 350, 394,  45, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR6        },
    {QSTR("2"),                D_FONT_BOLD(10),     QRect( 500, 364,  45, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR2        },
    {QSTR("4"),                D_FONT_BOLD(10),      QRect( 452, 364,  45, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR4        },
    {QSTR("6"),                D_FONT_BOLD(10),      QRect( 404, 364,  45, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR6        },
    {QSTR("2"),                D_FONT_BOLD(10),      QRect( 627, 364,  70, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR2        },
    {QSTR("4"),                D_FONT_BOLD(10),      QRect( 554, 364,  70, 23),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR4        },


//车内温度
    {QSTR("24"),               D_FONT_BOLD(10),      QRect(105, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP        },
    {QSTR("24"),               D_FONT_BOLD(10),      QRect(255, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP        },
    {QSTR("24"),               D_FONT_BOLD(10),      QRect(405, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP        },
    {QSTR("24"),               D_FONT_BOLD(10),      QRect(555, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP        },
//车外温度
//    {QSTR("24"),               D_FONT_BOLD(10),      QRect(105, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1SIDETEMPOUT        },
//    {QSTR("24"),               D_FONT_BOLD(10),      QRect(255, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2SIDETEMPOUT        },
//    {QSTR("24"),               D_FONT_BOLD(10),      QRect(405, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3SIDETEMPOUT        },
//    {QSTR("24"),               D_FONT_BOLD(10),      QRect(555, 424,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4SIDETEMPOUT        },
//空压机状态
    {QSTR(""),                 D_FONT_BOLD(7),      QRect(106,454,  140, 23),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE        },
    {QSTR(""),               D_FONT_BOLD(7),      QRect(256, 452,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),               D_FONT_BOLD(7),      QRect(406, 452,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(7),      QRect(556, 454,  140, 23),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4AIRCOMPRESSORSTATE        },
////保持制动2014.2.21
//    {QSTR(""),                 D_FONT_BOLD(7),      QRect(106,453,  140, 25),          Qt::white,               Qt::darkRed,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1BRAVEKEEP        },
//    {QSTR(""),               D_FONT_BOLD(7),      QRect(256, 453,  140, 25),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BRAVEKEEP        },
//    {QSTR(""),               D_FONT_BOLD(7),      QRect(406, 453,  140, 25),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BRAVEKEEP        },
//    {QSTR(""),                 D_FONT_BOLD(7),      QRect(556, 453,  140, 25),         Qt::white,                Qt::darkRed,                CONTROL_LABEL,         ID_PIBRUNSTATE_LABEL_CAR4BRAVEKEEP        },
////停放制动
//    {QSTR(""),              D_FONT_BOLD(7),      QRect(106, 486,  140, 21),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE        },
//    {QSTR(""),              D_FONT_BOLD(7),      QRect(256, 486,  140, 21),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2PLACESTATE        },
//    {QSTR(""),              D_FONT_BOLD(7),      QRect(406, 486,  140, 21),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE        },
//    {QSTR(""),              D_FONT_BOLD(7),      QRect(556, 486,  140, 21),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE        },

    {QSTR("75"),                  D_FONT_BOLD(10),      QRect(106, 483,  140,  25),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE        },
    {QSTR("75"),                  D_FONT_BOLD(10),      QRect(256, 483,  140,  25),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR2RIDINGRATE        },
    {QSTR("75"),                  D_FONT_BOLD(10),      QRect(406, 483,  140,  25),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE        },
    {QSTR("75"),                  D_FONT_BOLD(10),      QRect(556, 483,  140,  25),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE        },

};
int g_RunStateRomLen = sizeof(g_PicRom_RunState)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunStatePage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif
        ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_FASPAGE, OnFASpageBtnClk)
 //       ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST, OnBroadCastBtnClk)
        ON_BTNCLK(ID_PIBRUNSTATE_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
END_MESSAGE_MAP()

CRunStatePage::CRunStatePage()
{

}

void CRunStatePage::OnUpdatePage()
{
     updateTrain(ID_PIBRUNSTATE_TRAIN);
    updateArrow(ID_PIBRUNSTATE_ARROW_LEFT,ID_PIBRUNSTATE_ARROW_RIGHT);
//    UpdateCommInterrupt(ID_PIBRUNSTATE_INTERRUPT);

     UpdateCompressorStatus();
     UpdateTCUStatus();
    // UpdateBCUPressure();
     UpdateAirBrk();
     //UpdatePlaceStatus();
     UpdateBCUSeparater();
     //UpdateNETMode();
     UpdateATOMode();
     UpdateTcu_Enable();
     UpdateCarTem();
     UpdateDoor();
     UpdateACU();
     UpdateRidingRate();
     //UpdateContravariant();
     UpdateHighAcceMode();
     UpdateWashCarMode();
     //UpdateTowMode();
     UpdateEmergencyMode();
     UpdateFAS_status_Hide();
     UpdateByPass_Hide();
     UpdateDisEBTest();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    updateArrFinalStation();
    //UpdateBravekeepStatus();
    UpdateBCUPressure();
    UpdateWBrakeCut();

    UpdateDoorStatus();
    updateErrorLine(ID_PIBRUNSTATE_TRAIN);
    UpdateHVACState();


//DrawRushromBtnCtrl(1,1);
//DrawRushromBtnCtrl(Bit(RIOM_111_14,1),Bit(RIOM_141_14,1));



//    if(Bit(RIOM_111_14,1) == 0)
//    {
//        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_1))->SetCtrlText("EmgyBrkButnDwn.PNG");
//        qDebug()<<"hahaha";
//    }

//    else
//    {
//        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_1))->SetCtrlText("EmgyBrkButnUp.PNG");
//    }

//    if(Bit(RIOM_141_14,1) == 0)
//    {
//        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_2))->SetCtrlText("EmgyBrkButnDwn.PNG");
//    }
//    else
//    {
//        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_2))->SetCtrlText("EmgyBrkButnUp.PNG");
//    }
}

void CRunStatePage::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

//    ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN))->ShowImage();


   // ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_FASPAGE))->m_bAutoUpState = false;
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetBorderColor(Qt::white);LMH
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_EMERGENCYMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->SetBorderColor(Qt::white);

    //   time setting
//    static int flg = 0;
//    if(flg != Bit(CCU_HMI_222_9, 8 ) && Bit(CCU_HMI_222_9, 8 )!=0)
//    {
//        ATC_time_temp1 = 2000+CCU_HMI_221_10%256;
//        ATC_time_temp2 = CCU_HMI_221_10/256;
//        ATC_time_temp3 = CCU_HMI_221_11%256;
//        ATC_time_temp4 = CCU_HMI_221_11/256;
//        ATC_time_temp5 = CCU_HMI_221_12%256;
//        ATC_time_temp6 = CCU_HMI_221_12/256;
//        SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
//    }
//    flg = Bit(CCU_HMI_222_9, 8 );

#ifndef USE_RAND_DATA
    if(Bit(CCU_HMI_222_9, 8 ))
    {
        ATC_time_temp1 = 2000+CCU_HMI_221_10%256;
        ATC_time_temp2 = CCU_HMI_221_10/256;
        ATC_time_temp3 = CCU_HMI_221_11%256;
        ATC_time_temp4 = CCU_HMI_221_11/256;
        ATC_time_temp5 = CCU_HMI_221_12%256;
        ATC_time_temp6 = CCU_HMI_221_12/256;
        SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
    }
#endif


}

void CRunStatePage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetButtonType(BUTTON_STATION1);
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    UpdateEmergencyBroadcast();
    this->InitPageHeader();
}

void CRunStatePage::updateArrFinalStation()
{

#ifdef PAGE_HEADER_OLD

    if(run_status_data3 == run_status_data6)
        arrive_final_station = 1;
    else
        arrive_final_station = 0;

    if (Bit(arrive_final_station,1))
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->ShowLabel();
    else
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->HideLabel();

#endif

}
#ifdef PAGE_BUTTON_BAR_NEW
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS4);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CRunStatePage::OnComBtn5Clk()
    {

        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn6Clk()
    {

        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CRunStatePage::OnComBtn7Clk()
    {
         //ChangePage(PAGE_INDEX_FAULT);

        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {

    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_FAULT);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif


void CRunStatePage::OnBroadCastBtnClk()
{
    //pageback=5;
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}
void CRunStatePage::UpdateHVACState()
{
    if (HVAC_A11_3/256==0)
        {
            HVAC_RUNmodefeedback1 = QSTR("停   止");
        }
        else if (HVAC_A11_3/256==1)
        {
            HVAC_RUNmodefeedback1 = QSTR("自动冷");
        }
        else if (HVAC_A11_3/256==2)
        {
            HVAC_RUNmodefeedback1 = QSTR("半   冷");
        }
        else if (HVAC_A11_3/256==3)
        {
            HVAC_RUNmodefeedback1 = QSTR("全   冷");
        }
        else if (HVAC_A11_3/256==5)
        {
            HVAC_RUNmodefeedback1 = QSTR("自动暖");
        }
        else if (HVAC_A11_3/256==6)
        {
            HVAC_RUNmodefeedback1 = QSTR("半   暖");
        }
        else if (HVAC_A11_3/256==7)
        {
            HVAC_RUNmodefeedback1 = QSTR("全   暖");
        }
        else if (HVAC_A11_3/256==9)
        {
            HVAC_RUNmodefeedback1 = QSTR("通   风");
        }
        else if (HVAC_A11_3/256==10)
        {
            HVAC_RUNmodefeedback1 = QSTR("紧急通风");
        }
        else
        {
            HVAC_RUNmodefeedback1 = QSTR(" ");
        }

    SetHVAC_mode(ID_PIBRUNSTATE_LABEL_HVACRUNMODE,HVAC_RUNmodefeedback1);
    SetCarTem(ID_PIBRUNSTATE_LABEL_HVACSETTEMP,che1_setting_temp);

}


void CRunStatePage::UpdateACU()
{
    //  BitSet(comm_status_data86, 14,1 );
    //  BitSet(comm_status_data86, 14,1 );
    char buff[10] = {'\0'};
    ACU1_OutVoltage=ACU_610_14%256*3.52;
    ACU2_OutVoltage=ACU_620_14%256*3.52;


      if(Bit(CCU_HMI_308_7, 10))
      {
          if(Bit(ACU_610_11,8)==0)
          {
              if(Bit(ACU_610_11,1)==0)
              {
              ACU_status1 = 0;//正常在线 绿
              //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR(" "));
              memset(buff, '\0', 10);
              sprintf(buff, "%d", ACU1_OutVoltage);
              //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(ACU_610_14%256*3.52).append(" V"));//输出电压
              ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString(buff).append(QSTR(" V")));//输出电压
              }
              else
              {
               ACU_status1 = 4;//SIV停机 黑
               //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
              ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("停机"));
              }
          }
          else
          {
              ACU_status1 = 1;//故障 红
              if(Bit(ACU_610_8,8))
              {
                //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("过载"));
              }
              else if(Bit(ACU_610_8,7))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("IGBT过流"));
              }
              else if(Bit(ACU_610_8,15))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("SIV输出欠压"));
              }
              else if(Bit(ACU_610_9,5))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("过热"));
              }
              else if(Bit(ACU_610_9,1))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("SIV输出过压"));
              }
              else
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("  "));
              }
          }
      }
      else
      {
           ACU_status1 = 5;//不在线 白
           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QSTR("  "));
      }

      if(Bit(CCU_HMI_308_7, 9))
      {
          if(Bit(ACU_620_11,8)==0)
          {
              if(Bit(ACU_620_11,1)==0)
              {
              ACU_status2 = 0;//正常在线
              //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("  "));
              //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QString::number(ACU_620_14%256*3.52).append(" V"));//输出电压
              memset(buff, '\0', 10);
              sprintf(buff, "%d", ACU2_OutVoltage);
              ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QString(buff).append(QSTR(" V")));
              }
              else
              {
                  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("停机"));
                  ACU_status2 = 4;//SIV停机
              }
          }
          else
          {
              ACU_status2 = 1;//故障
              if(Bit(ACU_620_8,8))
              {
                //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("过载"));
              }
              else if(Bit(ACU_620_8,7))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("IGBT过流"));
              }
              else if(Bit(ACU_620_8,15))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("SIV输出欠压"));
              }
               else if(Bit(ACU_620_9,5))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("过热"));
              }
              else if(Bit(ACU_620_9,1))
              {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("输出过压"));
              }
              else
              {
              ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("  "));
              }
          }
      }
      else
      {
           ACU_status2 = 5;//不在线
           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V))->SetCtrlText(QSTR("  "));
      }
    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V, ACU_status1);
    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASSISTSYS_V, ACU_status2);



    // KAUX
    int kaux_color = 0;
    int kaux_color1 = 0;
    //Bit(DI_140_1,2)=DICT_KAUXFdMp3_B1    	KAUX feedback	K-AUX反馈信号(仅Mp3车)
    //if (Bit(DI_140_1,2) == 0)
if(Bit(CCU_HMI_308_6,16)==1)
    {
        if (Bit(RIOM_121_12,7) == 0)
        {
            kaux_color = 0;
        }
        else if (Bit(RIOM_121_12,7) == 1)
        {
            kaux_color = 1;
        }
    }
else
{
    kaux_color = 2;
}
    //kaux_color = 1;
    SetKauxLabelColor(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE, kaux_color);
if(Bit(CCU_HMI_308_6,12)==1)
    {
        if (Bit(RIOM_131_12,7) == 0)
        {
            kaux_color1 = 0;
        }
        else if (Bit(RIOM_131_12,7) == 1)
        {
            kaux_color1 = 1;
        }
    }
else
    {
        kaux_color1 = 2;
    }
    //kaux_color = 1;
    SetKauxLabelColor(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE2, kaux_color1);


}

void CRunStatePage::UpdateCompressorStatus()//空压机状态
{
            //BCU1在线                 TC1车的DI1在线
    //if((Bit(CCU_HMI_308_7,16)==1)&&(Bit(CCU_HMI_308_6,8)==1))
    if((Bit(CCU_HMI_308_6,8)==1))
    {
       if(Bit(RIOM_111_11,10)==1)
        {  if(Bit(RIOM_111_11,9)==0)

             CompressorStarted1 = 1;//正常运行

          else
             CompressorStarted1 = 2; //过载故障
        }
       else
       {
           CompressorStarted1 = 0; //未运行
       }
    }
    else
    {
      CompressorStarted1 = 3;//通信异常
    }

    //if((Bit(CCU_HMI_308_7,15)==1)&&(Bit(CCU_HMI_308_7,8)==1))
    if((Bit(CCU_HMI_308_7,8)==1))
    {
        if(Bit(RIOM_141_11,10)==1)
         {  if(Bit(RIOM_141_11,9)==0)

             CompressorStarted4 = 1;//正常运行

          else
             CompressorStarted4 = 2; //过载故障
         }
       else
       {
           CompressorStarted4 = 0; //未运行
       }
    }
    else
    {
      CompressorStarted4 = 3;
    }


//    if (Bit( DI_110_3, 8 ) == 1)
//    {
//        CompressorStarted1 = 1;
//    }
//    else
//    {
//        CompressorStarted1 = 0;
//    }
//    if (Bit( DI_180_3, 8 ) == 1)
//    {
//        CompressorStarted2 = 1;
//    }
//    else
//    {
//        CompressorStarted2 = 0;
//    }
//    if (Bit( DI_180_3, 8 ) == 1)
//    {
//        CompressorStarted3 = 1;
//    }
//    else
//    {
//        CompressorStarted3 = 0;
//    }
//    if (Bit( DI_180_3, 8 ) == 1)
//    {
//        CompressorStarted4 = 1;
//    }
//    else
//    {
//        CompressorStarted4 = 0;
//    }

    SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE, CompressorStarted1);
    //SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6AIRCOMPRESSORSTATE, CompressorStarted2);
    //SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR2AIRCOMPRESSORSTATE, CompressorStarted3);
    SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4AIRCOMPRESSORSTATE, CompressorStarted4);
}


void CRunStatePage::UpdateTCUStatus()
{
    //CTHM_TCU1On_B1	TCU1在线
    //if(Bit(CCU_HMI_222_9, 2 )==1)
//    if(Bit( TCU_510_11, 14)==0)   //CCU  未切除
//    {
//        //Bit( TCU_510_14, 13)=TRiCT_InvPlsFir_B1	逆变器脉冲施加
//        //if(Bit( TCU_510_14, 13)==1)

//        if(Bit(CCU_HMI_308_7, 12 )==1)  //TCU1在线
//        {

//             TCU1_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            //TCU_510_4=TRiCT_MotCrt_U16	电机平均电流
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_14%256*4 ).append(" A"));


//        }else
//        {
//            TCU1_status=3;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//    }
//   else
//   {
//       TCU1_status=5;
//       ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//   }

    if(Bit(CCU_HMI_308_7, 12 )==1)  //TCU1在线
    {
        if(Bit( TCU_510_11, 14)==0)
        {
            if(Bit( TCU_510_12, 5)==1)
            {
            TCU1_status=2;//VVVF故障
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
            }
            else
            {
             TCU1_status=1;//正常
             ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_14%256*4).append(" A"));//电流有效值
            }
        }
        else
        {
            TCU1_status=5;//VVVF已切除
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
        }
    }
   else
   {
       TCU1_status=3;//通信故障
       ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
   }

   if(Bit(CCU_HMI_308_7, 11 )==1)  //TCU2在线
   {
       if(Bit( TCU_520_11, 14)==0)
       {
           if(Bit( TCU_520_12, 5)==1)
           {
           TCU2_status=2;//VVVF故障
           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
           }
           else
           {
           TCU2_status=1;//正常
           //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_14%256*4).append(" A"));//电流有效值
           }
       }
       else
       {
           TCU2_status=5;//VVVF已切除优先级较高
           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
       }
   }
  else
  {
      TCU2_status=3;//通信故障
      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
  }

//        {
//            TCU1_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_511_5, 13)==1)
//        {
//            TCU1_status=5;
        //            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_511_5, 12)==1)
//        {
//            TCU1_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_511_5, 16)==1)
//        {
//            TCU1_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
    //}
//    else
//    {
//        TCU1_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//    }

//   if(Bit( TCU_520_11, 14)==0)   //CCU  未切除
//   {
//       //Bit( TCU_510_14, 13)=TRiCT_InvPlsFir_B1	逆变器脉冲施加
//       //if(Bit( TCU_510_14, 13)==1)

//       if(Bit(CCU_HMI_308_7, 13 )==1)  //TCU1在线
//       {

//            TCU1_status=1;
//           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
//           //TCU_510_4=TRiCT_MotCrt_U16	电机平均电流
//           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_14%256*4 ).append(" A"));


//       }else
//       {
//           TCU1_status=3;
//           ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
//       }
//  }
//  else
//  {
//      TCU1_status=5;
//      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
//  }


//    if(Bit(CCU_HMI_222_9, 1 )==1)
//    {
//        if(Bit( TCU_520_14, 13)==1)
//        {
//            TCU2_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_4 ).append(" A"));

//          //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//        }else
//        {
//            TCU2_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_521_5, 13)==1)
//        {
//            TCU2_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");


//        }
//        if(Bit( TCU_521_5, 12)==1)
//        {
//            TCU2_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");

//        }
//        if(Bit( TCU_521_5, 16)==1)
//        {
//            TCU2_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
//        }
//    }
//    else
//    {
//        TCU2_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
//    }

//    if(Bit(CCU_HMI_222_9, 16 )==1)
//    {
//        if(Bit( TCU_530_14, 13)==1)
//        {
//            TCU3_status=1;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_530_4 ).append(" A"));

//          //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//        }else
//        {
//            TCU3_status=0;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_531_5, 13)==1)
//        {
//            TCU3_status=5;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");


//        }
//        if(Bit( TCU_531_5, 12)==1)
//        {
//            TCU3_status=4;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");

//        }
//        if(Bit( TCU_531_5, 16)==1)
//        {
//            TCU3_status=2;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
//        }
//    }
//    else
//    {
//        TCU3_status=3;
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
//    }

//    if(Bit(CCU_HMI_222_9, 15 )==1)
//    {
//        if(Bit( TCU_540_14, 13)==1)
//        {
//            TCU4_status=1;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_540_4 ).append(" A"));

//          //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//        }else
//        {
//            TCU4_status=0;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_541_5, 13)==1)
//        {
//            TCU4_status=5;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");


//        }
//        if(Bit( TCU_541_5, 12)==1)
//        {
//            TCU4_status=4;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");

//        }
//        if(Bit( TCU_541_5, 16)==1)
//        {
//            TCU4_status=2;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
//        }
//    }
//    else
//    {
//        TCU4_status=3;
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
//    }

//    if(Bit(CCU_HMI_222_9, 14 )==1)
//    {
//        if(Bit( TCU_550_14, 13)==1)
//        {
//            TCU5_status=1;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_550_4 ).append(" A"));

//          //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//        }else
//        {
//            TCU5_status=0;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_551_5, 13)==1)
//        {
//            TCU5_status=5;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");


//        }
//        if(Bit( TCU_551_5, 12)==1)
//        {
//            TCU5_status=4;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");

//        }
//        if(Bit( TCU_551_5, 16)==1)
//        {
//            TCU5_status=2;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
//        }
//    }
//    else
//    {
//        TCU5_status=3;
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
//    }

//    if(Bit(CCU_HMI_222_9, 13 )==1)
//    {
//        if(Bit( TCU_560_14, 13)==1)
//        {
//            TCU6_status=1;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_560_4 ).append(" A"));

//          //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//        }else
//        {
//            TCU6_status=0;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_561_5, 13)==1)
//        {
//            TCU6_status=5;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");


//        }
//        if(Bit( TCU_561_5, 12)==1)
//        {
//            TCU6_status=4;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");

//        }
//        if(Bit( TCU_561_5, 16)==1)
//        {
//            TCU6_status=2;
//            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//        }
//    }
//    else
//    {
//        TCU6_status=3;
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//    }

    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
    //SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
    //SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
    //SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
    //SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE, TCU6_status);

//    if (Bit(TCU_511_5,12) || Bit(TCU_511_5,13) )
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE, TCU1_status);

//    if (Bit(TCU_521_5,12)|| Bit(TCU_521_5,13) )
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

//    if (Bit(TCU_531_5,12)||Bit(TCU_531_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE, TCU3_status);

//    if (Bit(TCU_541_5,12)||Bit(TCU_541_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE, TCU4_status);

//    if (Bit(TCU_551_5,12)||Bit(TCU_551_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE, TCU5_status);

//    if (Bit(TCU_561_5,12)||Bit(TCU_561_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
}

void CRunStatePage::UpdateAirBrk()
{

    int AirBrk_color1  = 0;
    int AirBrk_color2  = 0;
    int AirBrk_color3  = 0;
    int AirBrk_color4  = 0;

if(Bit(CCU_HMI_308_7,16)==1)
 {
    if(Bit( BCU_410_6,16)==1)//空气制动正常
    {
        if(Bit( BCU_410_6, 5))
         AirBrk_color1 = 2;//空气制动施加 深红
        else if(Bit( BCU_410_6, 6))
         AirBrk_color1 = 1;//空气制动缓解 绿
        else
          AirBrk_color1 = 4;  //黑色 什么都不做
    }
    else
    {
        AirBrk_color1 = 3;//空气制动不正常 红
    }
 }
else
 {
    AirBrk_color1= 0;//不在线
 }
if(Bit(CCU_HMI_308_7,15)==1)
 {
    if (Bit( BCU_420_6, 16)==1)//空气制动正常
    {
        if(Bit( BCU_420_6, 5))
         AirBrk_color2 = 2;//空气制动施加 深红
        else if(Bit( BCU_420_6, 6))
         AirBrk_color2 = 1;//空气制动缓解 绿
        else
          AirBrk_color2 = 4;
    }
    else
    {
        AirBrk_color2 = 3;//空气制动不正常 红
    }
 }
else
 {
    AirBrk_color2= 0;//不在线
 }
if(Bit(CCU_HMI_308_7,14)==1)
 {
    if (Bit( BCU_430_6, 16)==1)//空气制动正常
    {
        if(Bit( BCU_430_6, 5))
         AirBrk_color3 = 2;//空气制动施加 深红
        else if(Bit( BCU_430_6, 6))
         AirBrk_color3 = 1;//空气制动缓解 绿
        else
         AirBrk_color3 = 4;
    }
    else
    {
        AirBrk_color3 = 3;//空气制动不正常 红
    }
  }
else
 {
    AirBrk_color3= 0;//不在线
 }

if(Bit(CCU_HMI_308_7,13)==1)
 {
    if (Bit( BCU_440_6, 16)==1)//空气制动正常
    {
        if(Bit( BCU_440_6, 5))
         AirBrk_color4 = 2;//空气制动施加 深红
        else if(Bit( BCU_440_6, 6))
         AirBrk_color4 = 1;//空气制动缓解 绿
        else
         AirBrk_color4 = 4;
    }
    else
    {
        AirBrk_color4 = 3;//空气制动不正常 红
    }
 }
else
 {
    AirBrk_color4= 0;//不在线 白

 }
    SetAirBrkLabelColor(ID_PIBRUNSTATE_LABEL_AIRBRK1,AirBrk_color1);
    SetAirBrkLabelColor(ID_PIBRUNSTATE_LABEL_AIRBRK2,AirBrk_color2);
    SetAirBrkLabelColor(ID_PIBRUNSTATE_LABEL_AIRBRK3,AirBrk_color3);
    SetAirBrkLabelColor(ID_PIBRUNSTATE_LABEL_AIRBRK4,AirBrk_color4);

}
void CRunStatePage::SetAirBrkLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("(P)"));

    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
    }
    return;
}

void CRunStatePage::UpdateBCUPressure() //制动缸压力
  {
            int BCU1_pressure_color  = 0;
            int BCU2_pressure_color  = 0;
            int BCU3_pressure_color  = 0;
            int BCU4_pressure_color  = 0;



            Brake_cylinder_pressure1 = DivNum(BCU_410_2,100);
            Brake_cylinder_pressure2 = DivNum(BCU_420_2,100);
            Brake_cylinder_pressure3 = DivNum(BCU_430_2,100);
            Brake_cylinder_pressure4 = DivNum(BCU_440_2,100);

            char buff[10];

            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure1);
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(buff);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));


            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure2);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));



            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure3);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));


            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure4);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));

            if (Bit(CCU_HMI_308_7, 16 )==1)
            {
                if(Bit(BCU_410_6,1)==1)

                    BCU1_pressure_color = 0;//制动缸压力有效 黑

                else

                    BCU1_pressure_color = 1;//制动缸压力无效 灰
            }
            else
            {
                 BCU1_pressure_color = 2;//通信异常 白
            }

            if (Bit(CCU_HMI_308_7, 15 )==1)
            {
                if(Bit(BCU_420_6,1)==1)

                    BCU2_pressure_color = 0;

                else

                    BCU2_pressure_color = 1;
            }
            else
            {
                 BCU2_pressure_color = 2;
            }

            if (Bit(CCU_HMI_308_7, 14 )==1)
            {
                if(Bit(BCU_430_6,1)==1)

                    BCU3_pressure_color = 0;

                else

                    BCU3_pressure_color = 1;
            }
            else
            {
                 BCU3_pressure_color = 2;
            }

            if (Bit(CCU_HMI_308_7, 13 )==1)
            {
                if(Bit(BCU_440_6,1)==1)

                    BCU4_pressure_color = 0;

                else

                    BCU4_pressure_color = 1;
            }
            else
            {
                 BCU4_pressure_color = 2;
            }
            SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1, BCU1_pressure_color);
            SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE1, BCU2_pressure_color);
            SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1, BCU3_pressure_color);
            SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1, BCU4_pressure_color);
  }


/*void CRunStatePage::UpdateWarning()
{
//    int warning1_color  = 0;
//    int warning2_color  = 0;
//    int warning3_color  = 0;
//    int warning4_color  = 0;
//    int warning5_color  = 0;
//    int warning6_color  = 0;
//    int warning7_color  = 0;
//    int warning8_color  = 0;
//    int warning9_color  = 0;
//    int warning10_color = 0;
//    int warning11_color = 0;
//    int warning12_color = 0;
//    int warning13_color = 0;
//    int warning14_color = 0;
//    int warning15_color = 0;
//    int warning16_color = 0;


//    if (Bit( PIS_Master_9i1_4, 9) == 0)
//    {
//        warning1_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 9) == 1)
//    {
//        warning1_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 11) == 0)
//    {
//        warning2_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 11) == 1)
//    {
//        warning2_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 13) == 0)
//    {
//        warning3_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 13) == 1)
//    {
//        warning3_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 15) == 0)
//    {
//        warning4_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 15) == 1)
//    {
//        warning4_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 1) == 0)
//    {
//        warning5_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 1) == 1)
//    {
//        warning5_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 3) == 0)
//    {
//        warning6_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 3) == 1)
//    {
//        warning6_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 5) == 0)
//    {
//        warning7_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 5) == 1)
//    {
//        warning7_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 7) == 0)
//    {
//        warning8_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 7) == 1)
//    {
//        warning8_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 9) == 0)
//    {
//        warning9_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 9) == 1)
//    {
//        warning9_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 11) == 0)
//    {
//        warning10_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 11) == 1)
//    {
//        warning10_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 13) == 0)
//    {
//        warning11_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 13) == 1)
//    {
//        warning11_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 15) == 0)
//    {
//        warning12_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 15) == 1)
//    {
//        warning12_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 1) == 0)
//    {
//        warning13_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 1) == 1)
//    {
//        warning13_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 3) == 0)
//    {
//        warning14_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 3) == 1)
//    {
//        warning14_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 5) == 0)
//    {
//        warning15_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 5) == 1)
//    {
//        warning15_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 7) == 0)
//    {
//        warning16_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 7) == 1)
//    {
//        warning16_color = 1;
//    }

//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING1, warning1_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING2, warning2_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING1, warning3_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING2, warning4_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING1, warning5_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING2, warning6_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING1, warning7_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING2, warning8_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING1, warning9_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING2, warning10_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING1, warning11_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING2, warning12_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING1, warning13_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING2, warning14_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING1, warning15_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING2, warning16_color);

}*/

//void CRunStatePage::UpdateASPressure()
//{
//    int AS1_pressure  = 0;
//    int AS2_pressure  = 0;
//    int AS3_pressure  = 0;
//    int AS4_pressure  = 0;
//    int AS5_pressure  = 0;
//    int AS6_pressure  = 0;
//    int AS7_pressure  = 0;
//    int AS8_pressure  = 0;
//    int AS9_pressure  = 0;
//    int AS10_pressure = 0;
//    int AS11_pressure = 0;
//    int AS12_pressure = 0;

//    BogieASP1 = DivNum(run_status_data77 , 10);
//    BogieASP2 = DivNum(run_status_data78 , 10);
//    BogieASP3 = DivNum(run_status_data79 , 10);
//    BogieASP4 = DivNum(run_status_data80 , 10);
//    BogieASP5 = DivNum(run_status_data81 , 10);
//    BogieASP6 = DivNum(run_status_data82 , 10);
//    BogieASP7 = DivNum(run_status_data88 , 10);
//    BogieASP8 = DivNum(run_status_data87 , 10);
//    BogieASP9 = DivNum(run_status_data86 , 10);
//    BogieASP10 = DivNum(run_status_data85 , 10);
//    BogieASP11 = DivNum(run_status_data84 , 10);
//    BogieASP12 = DivNum(run_status_data83 , 10);

//    char buff[10];

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP1);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP2);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP4);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP5);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP6);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP7);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP8);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP9);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP10);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP11);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", BogieASP12);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2))->SetCtrlText(buff);

//    if (Bit( run_status_data89, 16) == 0)
//    {
//        AS1_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 16) == 1)
//    {
//        AS1_pressure = 1;
//    }

//    if (Bit( run_status_data89, 15) == 0)
//    {
//        AS2_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 15) == 1)
//    {
//        AS2_pressure = 1;
//    }

//    if (Bit( run_status_data89, 14) == 0)
//    {
//        AS3_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 14) == 1)
//    {
//        AS3_pressure = 1;
//    }

//    if (Bit( run_status_data89, 13) == 0)
//    {
//        AS4_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 13) == 1)
//    {
//        AS4_pressure = 1;
//    }

//    if (Bit( run_status_data89, 12) == 0)
//    {
//        AS5_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 12) == 1)
//    {
//        AS5_pressure = 1;
//    }

//    if (Bit( run_status_data89, 11) == 0)
//    {
//        AS6_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 11) == 1)
//    {
//        AS6_pressure = 1;
//    }

//    if (Bit( run_status_data89, 5) == 0)
//    {
//        AS7_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 5) == 1)
//    {
//        AS7_pressure = 1;
//    }

//    if (Bit( run_status_data89, 6) == 0)
//    {
//        AS8_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 6) == 1)
//    {
//        AS8_pressure = 1;
//    }

//    if (Bit( run_status_data89, 7) == 0)
//    {
//        AS9_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 7) == 1)
//    {
//        AS9_pressure = 1;
//    }

//    if (Bit( run_status_data89, 8) == 0)
//    {
//        AS10_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 8) == 1)
//    {
//        AS10_pressure = 1;
//    }

//    if (Bit( run_status_data89, 9) == 0)
//    {
//        AS11_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 9) == 1)
//    {
//        AS11_pressure = 1;
//    }

//    if (Bit( run_status_data89, 10) == 0)
//    {
//        AS12_pressure = 0;
//    }
//    else if (Bit( run_status_data89, 10) == 1)
//    {
//        AS12_pressure = 1;
//    }

//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1, AS1_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2, AS2_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1, AS3_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2, AS4_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1, AS5_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2, AS6_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1, AS7_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2, AS8_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1, AS9_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2, AS10_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1, AS11_pressure);
//    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2, AS12_pressure);

//}

/*void CRunStatePage::UpdateBravekeepStatus()
{
    int keep1_status  = 0;
    int keep2_status  = 0;
    int keep3_status  = 0;
    int keep4_status  = 0;

  if(Bit(CCU_HMI_308_7, 16 ))
    {

        if((Bit( BCU_410_6, 15)==0))
            {
              if(Bit(BCU_410_6,13)==1&&Bit(BCU_410_6,14)==0)
                keep1_status=0;
              else if(Bit(BCU_410_6,13)==1&&Bit(BCU_410_6,14)==1)
                keep1_status=0;
              else if(Bit(BCU_410_6,14)==1&&Bit(BCU_410_6,13)==0)
                keep1_status=1;
              else
                keep1_status=4;
            }
        else
            {
            keep1_status=2;//x geli
            }
    }
  else
    {
      keep1_status=3;
    }

  if(Bit(CCU_HMI_308_7, 15 ))
    {

        if((Bit( BCU_420_6, 15)==0))
            {
              if(Bit(BCU_420_6,13)==1&&Bit(BCU_420_6,14)==0)
                keep2_status=0;
              else if(Bit(BCU_420_6,13)==1&&Bit(BCU_420_6,14)==1)
                keep2_status=0;
              else if(Bit(BCU_420_6,14)==1&&Bit(BCU_420_6,13)==0)
                keep2_status=1;
              else
                keep2_status=4;
            }
        else
            {
            keep2_status=2;//x geli
            }
    }
  else
    {
      keep2_status=3;
    }

  if(Bit(CCU_HMI_308_7, 14 ))
    {

        if((Bit( BCU_430_6, 15)==0))
            {
              if(Bit(BCU_430_6,13)==1&&Bit(BCU_430_6,14)==0)
                keep3_status=0;
              else if(Bit(BCU_430_6,13)==1&&Bit(BCU_430_6,14)==1)
                keep3_status=0;
              else if(Bit(BCU_430_6,14)==1&&Bit(BCU_430_6,13)==0)
                keep3_status=1;
              else
                keep3_status=4;
            }
        else
            {
            keep3_status=2;//x geli
            }
    }
  else
    {
      keep3_status=3;
    }

  if(Bit(CCU_HMI_308_7, 13 ))
    {
            //if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
        if((Bit( BCU_440_6, 15)==0))
            {
              if(Bit(BCU_440_6,13)==1&&Bit(BCU_440_6,14)==0)
                keep4_status=0;//施加
              else if(Bit(BCU_440_6,13)==1&&Bit(BCU_440_6,14)==1)
                keep4_status=0;//施加
              else if(Bit(BCU_440_6,14)==1&&Bit(BCU_440_6,13)==0)
                keep4_status=1;//缓解
              else
                 keep4_status=4;//什么都没有

            }
        else
            {
            keep4_status=2;//x 隔离
            }
    }
  else
    {
      keep4_status=3;//通信异常
    }

    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BRAVEKEEP, keep1_status);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR2BRAVEKEEP, keep2_status);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BRAVEKEEP, keep3_status);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BRAVEKEEP, keep4_status);
}


void CRunStatePage::UpdatePlaceStatus()
{
    int Place1_status  = 0;
    int Place2_status  = 0;
    int Place3_status  = 0;
    int Place4_status  = 0;
//    int Place5_status  = 0;
//    int Place6_status  = 0;
//    int Place7_status  = 0;
//    int Place8_status  = 0;

        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
        //if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
  if(Bit(CCU_HMI_308_7, 16 ))
    {
            //if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
        if((Bit( BCU_419_8, 11)==0))
            {
              if(Bit(BCU_419_8,12)==1)
                Place1_status=0;
              else
                Place1_status=1;
            }
        else
            {
            Place1_status=2;//x geli
            }
    }
  else
    {
      Place1_status=3;
    }

  if(Bit(CCU_HMI_308_7, 15 ))
    {
            //if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
        if((Bit( BCU_419_8, 15)==0))
            {
              if(Bit(BCU_419_8,16)==1)
                Place2_status=0;
              else
                Place2_status=1;
            }
        else
            {
            Place2_status=2;//x geli
            }
    }
  else
    {
      Place2_status=3;
    }

  if(Bit(CCU_HMI_308_7, 14 ))
    {
            //if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
        if((Bit( BCU_419_9, 3)==0))
            {
              if(Bit(BCU_419_9,4)==1)
                Place3_status=0;
              else
                Place3_status=1;
            }
        else
            {
            Place3_status=2;//x geli
            }
    }
  else
    {
      Place3_status=3;
    }

  if(Bit(CCU_HMI_308_7, 13 ))
    {
            //if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
        if((Bit( BCU_419_9, 7)==0))
            {
              if(Bit(BCU_419_9,8)==1)
                Place4_status=0;
              else
                Place4_status=1;
            }
        else
            {
            Place4_status=2;//x geli
            }
    }
  else
    {
      Place4_status=3;
    }
//            if(Bit(CCU_HMI_222_11, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_11, 15 ))
//                {
//                    if(Bit( DI_110_2, 13) == 0)
//                    {
//                        Place1_status=0;
//                    }
//                    else
//                    {
//                        Place1_status=1;
//                    }
//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 8) == 0)
//                    {
//                        Place1_status=0;
//                    }
//                    else
//                    {
//                        Place1_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place1_status=2;
//            }

//        }

//        if(Bit(CCU_HMI_222_12, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_120_1, 14)==0) ||(Bit( BCU_TC1_413_423_11, 7)== 0))
//            {
//                Place2_status=0;
//            }
//            else
//            {
//                Place2_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 7 ))
//                {
//                    if(Bit( DI_120_1, 14) == 0)
//                    {
//                        Place2_status=0;
//                    }
//                    else
//                    {
//                        Place2_status=1;
//                    }
//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 7)== 0)
//                    {
//                        Place2_status=0;
//                    }
//                    else
//                    {
//                        Place2_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place2_status=2;
//            }

//        }

//        if(Bit(CCU_HMI_222_12, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_130_1, 14)==0 )||(Bit( BCU_TC1_413_423_11, 6)== 0))
//            {
//                Place3_status=0;
//            }
//            else
//            {
//                Place3_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 15 ))
//                {
//                    if(Bit( DI_130_1, 14) == 0)
//                    {
//                        Place3_status=0;
//                    }
//                    else
//                    {
//                        Place3_status=1;
//                    }

//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 6)== 0)
//                    {
//                        Place3_status=0;
//                    }
//                    else
//                    {
//                        Place3_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place3_status=2;
//            }

//        }

//        if(Bit(CCU_HMI_222_13, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if((Bit( DI_140_1, 14)==0) ||(Bit( BCU_TC1_413_423_11, 5)== 0))
//            {
//                Place4_status=0;
//            }
//            else
//            {
//                Place4_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_13, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_13, 7 ))
//                {
//                    if(Bit( DI_140_1, 14) == 0)
//                    {
//                        Place4_status=0;
//                    }
//                    else
//                    {
//                        Place4_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//                {
//                    if(Bit( BCU_TC1_413_423_11, 5)== 0)
//                    {
//                        Place4_status=0;
//                    }
//                    else
//                    {
//                        Place4_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place4_status=2;
//            }

//        }


//        if(Bit(CCU_HMI_222_13, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_150_1, 14)==0)|| (Bit( BCU_TC2_433_443_11, 5) == 0))
//            {
//                Place5_status=0;
//            }
//            else
//            {
//                Place5_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_13, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_13, 15 ))
//                {
//                    if(Bit( DI_150_1, 14)== 0)
//                    {
//                        Place5_status=0;
//                    }
//                    else
//                    {
//                        Place5_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if( Bit( BCU_TC2_433_443_11, 5) == 0)
//                    {
//                        Place5_status=0;
//                    }
//                    else
//                    {
//                        Place5_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place5_status=2;
//            }
//        }

//        if(Bit(CCU_HMI_222_14, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_160_1, 14)==0)|| (Bit( BCU_TC2_433_443_11, 6)== 0))
//            {
//                Place6_status=0;
//            }
//            else
//            {
//                Place6_status=1;
//            }
//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_14, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_14, 7 ))
//                {
//                    if(Bit( DI_160_1, 14)== 0)
//                    {
//                        Place6_status=0;
//                    }
//                    else
//                    {
//                        Place6_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if( Bit( BCU_TC2_433_443_11, 6)== 0)
//                    {
//                        Place6_status=0;
//                    }
//                    else
//                    {
//                        Place6_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place6_status=2;
//            }
//        }

//        if(Bit(CCU_HMI_222_14, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_170_1, 14)==0) || (Bit( BCU_TC2_433_443_11, 7) == 0))
//            {
//                Place7_status=0;
//            }
//            else
//            {
//                Place7_status=1;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_14, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_14, 15 ))
//                {
//                    if(Bit( DI_170_1, 14)  == 0)
//                    {
//                        Place7_status=0;
//                    }
//                    else
//                    {
//                        Place7_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if( Bit( BCU_TC2_433_443_11, 7) == 0)
//                    {
//                        Place7_status=0;
//                    }
//                    else
//                    {
//                        Place7_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place7_status=2;
//            }
//        }

//        if(Bit(CCU_HMI_222_15, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if((Bit( DI_180_2, 13)==0) || (Bit( BCU_TC2_433_443_11, 8)== 0))
//            {
//                Place8_status=0;
//            }
//            else
//            {
//                Place8_status=1;
//            }
//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_15, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_15, 7 ))
//                {
//                    if(Bit( DI_180_2, 13) == 0)
//                    {
//                        Place8_status=0;
//                    }
//                    else
//                    {
//                        Place8_status=1;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if(Bit( BCU_TC2_433_443_11, 8)== 0)
//                    {
//                        Place8_status=0;
//                    }
//                    else
//                    {
//                        Place8_status=1;
//                    }
//                }
//            }
//            else
//            {
//                Place8_status=2;
//            }
//        }


    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE, Place1_status);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR2PLACESTATE, Place2_status);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE, Place3_status);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE, Place4_status);
    //SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE, Place5_status);
    //SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE, Place6_status);
    //SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR7PLACESTATE, Place7_status);
    //SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE, Place8_status);

}*/

void CRunStatePage::UpdateBCUSeparater()//
{
    int CAR1_Bogie1_separater  = 0;
    int CAR1_Bogie2_separater  = 0;
    int CAR2_Bogie1_separater  = 0;
    int CAR2_Bogie2_separater  = 0;
    int CAR3_Bogie1_separater  = 0;
    int CAR3_Bogie2_separater  = 0;
    int CAR4_Bogie1_separater  = 0;
    int CAR4_Bogie2_separater  = 0;


    // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
    //if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//    if(Bit(CCU_HMI_308_7, 16 )==1)
//    {
        //if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
        if(Bit(BCU_419_8,9)==1)
        {
            CAR1_Bogie1_separater = 1;
        }
        else
        {
            CAR1_Bogie1_separater = 0;
        }

        //if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
        if(Bit(BCU_419_8,10)==1)
        {
            CAR1_Bogie2_separater = 1;
        }
        else
        {
            CAR1_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR1_Bogie1_separater = 2;
//            CAR1_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 15 )==1)
//    {
        //if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
        if(Bit(BCU_419_8,13)==1)
        {
            CAR2_Bogie1_separater = 1;
        }
        else
        {
            CAR2_Bogie1_separater = 0;
        }

        //if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
        if(Bit(BCU_419_8,14)==1)
        {
            CAR2_Bogie2_separater = 1;
        }
        else
        {
            CAR2_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR2_Bogie1_separater = 2;
//            CAR2_Bogie2_separater = 2;
//    }

//    if(Bit(CCU_HMI_308_7, 14 )==1)
//    {
        //if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
        if(Bit(BCU_419_9,1)==1)
        {
            CAR3_Bogie1_separater = 1;
        }
        else
        {
            CAR3_Bogie1_separater = 0;
        }

        //if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
        if(Bit(BCU_419_9,2)==1)
        {
            CAR3_Bogie2_separater = 1;
        }
        else
        {
            CAR3_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR3_Bogie1_separater = 2;
//            CAR3_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 13 )==1)
//    {
        //if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
        if(Bit(BCU_419_9,5)==1)
        {
            CAR4_Bogie1_separater = 1;
        }
        else
        {
            CAR4_Bogie1_separater = 0;
        }

        //if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
        if(Bit(BCU_419_9,6)==1)
        {
            CAR4_Bogie2_separater = 1;
        }
        else
        {
            CAR4_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR4_Bogie1_separater = 2;
//            CAR4_Bogie2_separater = 2;

//    }
//    else
//    {
//        if(Bit(CCU_HMI_222_11, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if(Bit(CCU_HMI_222_11, 15 ))
//            {
//                if (Bit( DI_110_1, 4) == 1)
//                {
//                    CAR1_Bogie1_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie1_separater = 0;
//                }

//                if (Bit( DI_110_1, 5)== 1)
//                {
//                    CAR1_Bogie2_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie2_separater = 0;
//                }
//            }
//            if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//            {
//                if (Bit( BCU_TC1_413_423_13, 13) == 1)
//                {
//                    CAR1_Bogie1_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie1_separater = 0;
//                }

//                if (Bit( BCU_TC1_413_423_13, 12)== 1)
//                {
//                    CAR1_Bogie2_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie2_separater = 0;
//                }
//            }
//        }
//        else
//        {
//            CAR1_Bogie1_separater=2;
//            CAR1_Bogie2_separater=2;
//        }

//    }

//        if(Bit(CCU_HMI_222_12, 6 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if (Bit( BCU_TC1_413_423_13, 11) ||Bit( DI_120_3, 10)== 1)
//            {
//                CAR2_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR2_Bogie1_separater = 0;
//            }

//            if (Bit( BCU_TC1_413_423_13, 10) ||Bit( DI_120_3, 11)== 1)
//            {
//                CAR2_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR2_Bogie2_separater = 0;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 6 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 6 ))
//                {
//                    if (Bit( DI_120_3, 10)== 1)
//                    {
//                        CAR2_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie1_separater = 0;
//                    }

//                    if (Bit( DI_120_3, 11)== 1)
//                    {
//                        CAR2_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie2_separater = 0;
//                    }
//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if (Bit( BCU_TC1_413_423_13, 11) == 1)
//                    {
//                        CAR2_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie1_separater = 0;
//                    }

//                    if (Bit( BCU_TC1_413_423_13, 10) == 1)
//                    {
//                        CAR2_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie2_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR2_Bogie1_separater = 2;
//                CAR2_Bogie2_separater = 2;
//            }

//        }

    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1, CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2, CAR1_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE1, CAR2_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE2, CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1, CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2, CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1, CAR4_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2, CAR4_Bogie2_separater);

//    ((CLabel *)GetDlgItem( ID_PIBRUNSTATE_LABEL_NUM1))->SetCtrlText(QString::number(currency_data3));
//    ((CLabel *)GetDlgItem( ID_PIBRUNSTATE_LABEL_NUM2))->SetCtrlText(QString::number(currency_data3));

}
void CRunStatePage::UpdateDoorStatus()
{
    if(Bit(CCU_HMI_308_9,16))//TC1 active trust the active
    {
        if(TC1_HMI == 1)
        {
            if(Bit(RIOM_111_11, 3))//right
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("右门使能"));
            }else if(Bit(RIOM_111_11, 4))//left
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("左门使能"));
            }else
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);
            }

        }else if(TC2_HMI == 1)
        {
            if(Bit(RIOM_111_11, 3))//right
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("左门使能"));
            }else if(Bit(RIOM_111_11, 4))//left
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("右门使能"));
            }else
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);
            }
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);
        }
    }else if(Bit(CCU_HMI_308_9,15))
    {
        if(TC2_HMI == 1)
        {
            if(Bit(RIOM_141_11, 3))//right
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("右门使能"));
            }else if(Bit(RIOM_141_11, 4))//left
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("左门使能"));
            }else
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);
            }

        }else if(TC1_HMI == 1)
        {
            if(Bit(RIOM_141_11, 3))//right
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("左门使能"));
            }else if(Bit(RIOM_141_11, 4))//left
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlText(QSTR("右门使能"));
            }else
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);
            }
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DOOR_status))->SetCtrlBKColor(Qt::black);

    }



}

void CRunStatePage::UpdateWBrakeCut()//整车制动切除
{

        if(Bit(CCU_HMI_308_6,7)) //TC1 DI2在线
        {
            if(Bit(RIOM_111_13,6)==0) //位有效
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR1BRAKECUT))->SetCtrlBKColor(Qt::black);//切除
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR1BRAKECUT))->SetLabelState(6);
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR1BRAKECUT))->SetCtrlBKColor(Qt::black);//无此状态
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR1BRAKECUT))->SetCtrlBKColor(Qt::white);//通信异常DI不在线
        }

        if(Bit(CCU_HMI_308_7,7))
        {
            if(Bit(RIOM_141_13,6)==0)
            {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR4BRAKECUT))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR4BRAKECUT))->SetLabelState(6);
            }
            else
            {
               ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR4BRAKECUT))->SetCtrlBKColor(Qt::black);
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR4BRAKECUT))->SetCtrlBKColor(Qt::white);
        }

        if(Bit(CCU_HMI_308_6,16))//MP车DI1在线
        {
            if(Bit(RIOM_121_12,1)==0)
            {

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR2BRAKECUT))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR2BRAKECUT))->SetLabelState(6);
            }
            else
            {

                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR2BRAKECUT))->SetCtrlBKColor(Qt::black);
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR2BRAKECUT))->SetCtrlBKColor(Qt::white);
        }

        if(Bit(CCU_HMI_308_6,12))
        {
            if(Bit(RIOM_131_12,1)==0)
            {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR3BRAKECUT))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR3BRAKECUT))->SetLabelState(6);
            }
            else
            {
               ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR3BRAKECUT))->SetCtrlBKColor(Qt::black);
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WHOLECAR3BRAKECUT))->SetCtrlBKColor(Qt::white);
        }

}
//void CRunStatePage::UpdateNETMode()
//{
//    int modecolor = 0;

//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_16, 10 ) ) == 1)
//        {
//            net_mode = QSTR ("备用模式");
//            modecolor = 1;
//        }
//        else
//        {
//            net_mode = QSTR ("网络模式");
//            modecolor = 0;
//        }
//    }
//    else
//    {
//        net_mode = QSTR ("MVB\n网络异常");
//        modecolor = 2;
//    }

//    GetDlgItem(ID_PIBRUNSTATE_LABEL_NETMODE)->SetCtrlText(net_mode);
//    SetNETModeLabelColor(ID_PIBRUNSTATE_LABEL_NETMODE, modecolor);
//}



void CRunStatePage::UpdateATOMode()
{

    // 首先判断ATC是否切除
    if((Bit( DI_110_3, 14 )&&Bit(DI_110_1,9))||(Bit( DI_180_3, 14 )&&Bit(DI_180_1,9)))
    {
        ATC_status = QSTR ("ATC切除");
        ATC_invalid = 1;
    }
    else
    {
        // CTHM_ATCOn_B1	ATC在线
        if (Bit(CCU_HMI_222_9, 4 ) == 1)
        {

            if ( (Bit( ATC_A10_2, 5 ) ) == 1)
            {
                ATC_status = QSTR ("人工向后");
                ATC_invalid = 0;
            }
            if ( (Bit( ATC_A10_2, 4 ) )  == 1)
            {
                ATC_status = QSTR ("人工向前");
                ATC_invalid = 0;
            }

            if ( (Bit( ATC_A10_2, 3 )  ) == 1)
            {
                ATC_status = QSTR ("手动模式");
                ATC_invalid = 0;
            }
            if ( (Bit( ATC_A10_2, 2 ) ) == 1)
            {
                ATC_status = QSTR ("ATO模式");
                ATC_invalid = 0;
            }
            if ( (Bit( ATC_A10_2, 1 ) ) == 1)
            {
                ATC_status = QSTR ("自动折返");
                ATC_invalid = 0;
            }
            if ( (ATC_A10_2 & 31)== 0)
            {
                  ATC_status = QSTR ("ATC无效");
                  ATC_invalid = 1;
             }

        }
        else
        {
            ATC_status = QSTR ("ATC\n通信异常");
            ATC_invalid = 2;
        }
    }

    //SetATOModeLabelColor(ID_PIBRUNSTATE_LABEL_ATOMODE, ATC_invalid);LMH
   // GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE)->SetCtrlText(ATC_status);LMH
}

void CRunStatePage::UpdateAValue()
{

#ifdef PAGE_HEADER_OLD

    if (currency_data2>32767)
    {
       webflow = currency_data2-65536;
    }
    else
    {
       webflow = currency_data2;
    }

    SetAValue(ID_PIBRUNSTATE_LABEL_A, webflow);

#endif

}

void CRunStatePage::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBRUNSTATE_LABEL_V);

#endif

}

/*void CRunStatePage::UpdateStation()//3.18
{

#ifdef PAGE_HEADER_OLD


    if ( (run_status_data3 > 20) && (run_status_data3 < 64) )
    {
        if (run_status_data3 == 21)
        {
            DestStation = QSTR("西苑");
        }
        if (run_status_data3 == 23)
        {
            DestStation = QSTR("圆明园");
        }
        if (run_status_data3 == 25)
        {
            DestStation = QSTR("双清路");
        }
        if (run_status_data3 == 27)
        {
            DestStation = QSTR("六道口");
        }
        if (run_status_data3 == 29)
        {
            DestStation = QSTR("北沙滩");
        }
        if (run_status_data3 == 31)
        {
            DestStation = QSTR("奥林匹克公园");
        }
        if (run_status_data3 == 33)
        {
            DestStation = QSTR("大屯");
        }
        if (run_status_data3 == 35)
        {
            DestStation = QSTR("大屯路东");
        }
        if (run_status_data3 == 37)
        {
            DestStation = QSTR("关庄");
        }
        if (run_status_data3 == 39)
        {
            DestStation = QSTR("望京西");
        }
        if (run_status_data3 == 41)
        {
            DestStation = QSTR("望京");
        }
        if (run_status_data3 == 43)
        {
            DestStation = QSTR("望京东");
        }
        if (run_status_data3 == 45)
        {
            DestStation = QSTR("崔各庄");
        }
        if (run_status_data3 == 47)
        {
            DestStation = QSTR("马泉营");
        }
        if (run_status_data3 == 49)
        {
            DestStation = QSTR("孙河");
        }
        if (run_status_data3 == 51)
        {
            DestStation = QSTR("国展");
        }
        if (run_status_data3 == 53)
        {
            DestStation = QSTR("花梨坎");
        }
        if (run_status_data3 == 55)
        {
            DestStation = QSTR("后沙峪");
        }
        if (run_status_data3 == 57)
        {
            DestStation = QSTR("南法信");
        }
        if (run_status_data3 == 59)
        {
            DestStation = QSTR("石门");
        }
        if (run_status_data3 == 61)
        {
            DestStation = QSTR("顺义");
        }
        if (run_status_data3 == 63)
        {
            DestStation = QSTR("俸伯");
        }
    }
    else
    {
        DestStation = QString::number(run_status_data3);
        DestStation = QSTR("东小营");
    }

    if ( (run_status_data6 > 20) && (run_status_data6 < 64) )
    {
        if (run_status_data6 == 21)
        {
            CurrentStation = QSTR("西苑");
        }
        if (run_status_data6 == 23)
        {
            CurrentStation = QSTR("圆明园");
        }
        if (run_status_data6 == 25)
        {
            CurrentStation = QSTR("双清路");
        }
        if (run_status_data6 == 27)
        {
            CurrentStation = QSTR("六道口");
        }
        if (run_status_data6 == 29)
        {
            CurrentStation = QSTR("北沙滩");
        }
        if (run_status_data6 == 31)
        {
            CurrentStation = QSTR("奥林匹克公园");
        }
        if (run_status_data6 == 33)
        {
            CurrentStation = QSTR("大屯");
        }
        if (run_status_data6 == 35)
        {
            CurrentStation = QSTR("大屯路东");
        }
        if (run_status_data6 == 37)
        {
            CurrentStation = QSTR("关庄");
        }
        if (run_status_data6 == 39)
        {
            CurrentStation = QSTR("望京西");
        }
        if (run_status_data6 == 41)
        {
            CurrentStation = QSTR("望京");
        }
        if (run_status_data6 == 43)
        {
            CurrentStation = QSTR("望京东");
        }
        if (run_status_data6 == 45)
        {
            CurrentStation = QSTR("崔各庄");
        }
        if (run_status_data6 == 47)
        {
            CurrentStation = QSTR("马泉营");
        }
        if (run_status_data6 == 49)
        {
            CurrentStation = QSTR("孙河");
        }
        if (run_status_data6 == 51)
        {
            CurrentStation = QSTR("国展");
        }
        if (run_status_data6 == 53)
        {
            CurrentStation = QSTR("花梨坎");
        }
        if (run_status_data6 == 55)
        {
            CurrentStation = QSTR("后沙峪");
        }
        if (run_status_data6 == 57)
        {
            CurrentStation = QSTR("南法信");
        }
        if (run_status_data6 == 59)
        {
            CurrentStation = QSTR("石门");
        }
        if (run_status_data6 == 61)
        {
            CurrentStation = QSTR("顺义");
        }
        if (run_status_data6 == 63)
        {
            CurrentStation = QSTR("俸伯");
        }
    }
    else
    {
         CurrentStation = QString::number(run_status_data6);
         CurrentStation = QSTR("郝家府");
    }

    if ( (run_status_data7 > 20) && (run_status_data7 < 64) )
    {
        if (run_status_data7 == 21)
        {
            NextStation = QSTR("西苑");
        }
        if (run_status_data7 == 23)
        {
            NextStation = QSTR("圆明园");
        }
        if (run_status_data7 == 25)
        {
            NextStation = QSTR("双清路");
        }
        if (run_status_data7 == 27)
        {
            NextStation = QSTR("六道口");
        }
        if (run_status_data7 == 29)
        {
            NextStation = QSTR("北沙滩");
        }
        if (run_status_data7 == 31)
        {
            NextStation = QSTR("奥林匹克公园");
        }
        if (run_status_data7 == 33)
        {
            NextStation = QSTR("大屯");
        }
        if (run_status_data7 == 35)
        {
            NextStation = QSTR("大屯路东");
        }
        if (run_status_data7 == 37)
        {
            NextStation = QSTR("关庄");
        }
        if (run_status_data7 == 39)
        {
            NextStation = QSTR("望京西");
        }
        if (run_status_data7 == 41)
        {
            NextStation = QSTR("望京");
        }
        if (run_status_data7 == 43)
        {
            NextStation = QSTR("望京东");
        }
        if (run_status_data7 == 45)
        {
            NextStation = QSTR("崔各庄");
        }
        if (run_status_data7 == 47)
        {
            NextStation = QSTR("马泉营");
        }
        if (run_status_data7 == 49)
        {
            NextStation = QSTR("孙河");
        }
        if (run_status_data7 == 51)
        {
            NextStation = QSTR("国展");
        }
        if (run_status_data7 == 53)
        {
            NextStation = QSTR("花梨坎");
        }
        if (run_status_data7 == 55)
        {
            NextStation = QSTR("后沙峪");
        }
        if (run_status_data7 == 57)
        {
            NextStation = QSTR("南法信");
        }
        if (run_status_data7 == 59)
        {
            NextStation = QSTR("石门");
        }
        if (run_status_data7 == 61)
        {
            NextStation = QSTR("顺义");
        }
        if (run_status_data7 == 63)
        {
            NextStation = QSTR("俸伯");
        }
    }
    else
    {
        NextStation = QString::number(run_status_data7);
        NextStation = QSTR("东小营");
    }

    if (Bit(error_code,6))
    {
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1, CurrentStation);
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2, NextStation);
    }
    if (Bit(error_code,14) )
    {
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1, NextStation);
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2, CurrentStation);
    }

    SetStation(ID_PIBRUNSTATE_LABEL_TERMINALSTATION, DestStation);

#endif

}*/


void CRunStatePage::UpdateCarTem()
{
    //if (Bit(CCU_HMI_222_10, 8 )  == 1)
    if (Bit(CCU_HMI_308_8, 14 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::black);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMPOUT))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_810_3, 16 ))
//        {
//            TempPassengerCar1=DivNum(32768-HVAC_810_3,10);
//        }
//        else
//        {
//            TempPassengerCar1=DivNum(HVAC_810_3,10);
//        }
 //       HVAC_810_3=32767;
        //TempPassengerCar1=DivNum((int16_t)HVAC_810_3,10);
        TempPassengerCar1=HVAC_A11_4%256-40;
        TempPassengerCar5=HVAC_A11_4/256-40;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::white);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMPOUT))->SetCtrlBKColor(Qt::white);
    }

    //if (Bit(CCU_HMI_222_10, 7 )  == 1)
    if (Bit(CCU_HMI_308_8, 13 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP))->SetCtrlBKColor(Qt::black);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2SIDETEMPOUT))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_820_3, 16 ))
//        {
//            TempPassengerCar2=DivNum(32768-HVAC_820_3,10);
//        }
//        else
//        {
//            TempPassengerCar2=DivNum(HVAC_820_3,10);
//        }
        //TempPassengerCar2=DivNum((int16_t)HVAC_820_3,10);
        //TempPassengerCar2=DivNum(HVAC_A21_4%256,1)-40;
        TempPassengerCar2=HVAC_A21_4%256-40;
        TempPassengerCar6=HVAC_A21_4/256-40;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP))->SetCtrlBKColor(Qt::white);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2SIDETEMPOUT))->SetCtrlBKColor(Qt::white);
    }

    //if (Bit(CCU_HMI_222_10, 6 )  == 1)
    if (Bit(CCU_HMI_308_8, 12 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::black);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMPOUT))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_830_3, 16 ))
//        {
//            TempPassengerCar3=DivNum(32768-HVAC_830_3,10);

//        }
//        else
//        {
//            TempPassengerCar3=DivNum(HVAC_830_3,10);
//        }
        TempPassengerCar3=HVAC_A31_4%256-40;
        TempPassengerCar7=HVAC_A31_4/256-40;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::white);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMPOUT))->SetCtrlBKColor(Qt::white);
    }

    //if (Bit(CCU_HMI_222_10, 5 )  == 1)
    if (Bit(CCU_HMI_308_8, 11 )  == 1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::black);
         //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMPOUT))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_840_3, 16 ))
//        {
//            TempPassengerCar4=DivNum(32768-HVAC_840_3,10);
//        }
//        else
//        {
//            TempPassengerCar4=DivNum(HVAC_840_3,10);
//        }
         TempPassengerCar4=HVAC_A41_4%256-40;

         TempPassengerCar8=HVAC_A41_4/256-40;

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::white);
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMPOUT))->SetCtrlBKColor(Qt::white);
    }

//    if (Bit(CCU_HMI_222_10, 4 )  == 1)
//    {
         //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_850_3, 16 ))
//        {
//            TempPassengerCar5=DivNum(32768-HVAC_850_3,10);
//        }
//        else
//        {
//            TempPassengerCar5=DivNum(HVAC_850_3,10);
//        }
//         TempPassengerCar5=DivNum((int16_t)HVAC_850_3,10);
//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::white);
//    }

//    if (Bit(CCU_HMI_222_10, 3 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_860_3, 16 ))
//        {
//            TempPassengerCar6=DivNum(32768-HVAC_860_3,10);
//        }
//        else
//        {
//            TempPassengerCar6=DivNum(HVAC_860_3,10);
//        }
//        TempPassengerCar6=DivNum((int16_t)HVAC_860_3,10);
//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::white);
//    }

//    if (Bit(CCU_HMI_222_10, 2 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_870_3, 16 ))
//        {
//            TempPassengerCar7=DivNum(32768-HVAC_870_3,10);
//        }
//        else
//        {
//            TempPassengerCar7=DivNum(HVAC_870_3,10);
//        }
//        TempPassengerCar7=DivNum((int16_t)HVAC_870_3,10);
//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7SIDETEMP))->SetCtrlBKColor(Qt::white);
//    }

//    if (Bit(CCU_HMI_222_10, 1 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_880_3, 16 ))
//        {
//            TempPassengerCar8=DivNum(32768-HVAC_880_3,10);
//        }
//        else
//        {
//            TempPassengerCar8=DivNum(HVAC_880_3,10);
//        }
//        TempPassengerCar8=DivNum((int16_t)HVAC_880_3,10);
//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::white);
//    }

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%d", TempPassengerCar1);
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlText(buff);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", TempPassengerCar2);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", TempPassengerCar3);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", TempPassengerCar4);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", TempPassengerCar5);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMPOUT))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", TempPassengerCar6);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2SIDETEMPOUT))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", TempPassengerCar7);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMPOUT))->SetCtrlText(QString(buff).append(QSTR(" ℃")));

//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", TempPassengerCar8);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMPOUT))->SetCtrlText(QString(buff).append(QSTR(" ℃")));
}


void CRunStatePage::UpdateDoor()
{

    /*if (Bit(CCU_HMI_222_10, 16 )  == 1 )
        {
            if((DCU_OLD_710_2%256)==1)
            {
                car1_GW1 = 1;
            }
            if((DCU_OLD_710_2%256)==2)
            {
                car1_GW1 = 2;
            }
            if((DCU_OLD_710_2%256)==0)
            {
                car1_GW1 = 3;
            }
        }
        else
        {
            car1_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 8 )  == 1  )
        {
            if((DCU_OLD_790_2%256)==1)
            {
                car1_GW2 = 1;
            }
            if((DCU_OLD_790_2%256)==2)
            {
                car1_GW2 = 2;
            }
            if((DCU_OLD_790_2%256)==0)
            {
                car1_GW2 = 3;
            }
        }
        else
        {
            car1_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 15 )  == 1  )
        {
            if((DCU_OLD_720_2%256)==1)
            {
                car2_GW1 = 1;
            }
            if((DCU_OLD_720_2%256)==2)
            {
                car2_GW1 = 2;
            }
            if((DCU_OLD_720_2%256)==0)
            {
                car2_GW1 = 3;
            }
        }
        else
        {
            car2_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 7 )  == 1  )
        {
            if((DCU_OLD_7A0_2%256)==1)
            {
                car2_GW2 = 1;
            }
            if((DCU_OLD_7A0_2%256)==2)
            {
                car2_GW2 = 2;
            }
            if((DCU_OLD_7A0_2%256)==0)
            {
                car2_GW2 = 3;
            }
        }
        else
        {
            car2_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 14 )  == 1 )
        {
            if((DCU_OLD_730_2%256)==1)
            {
                car3_GW1 = 1;
            }
            if((DCU_OLD_730_2%256)==2)
            {
                car3_GW1 = 2;
            }
            if((DCU_OLD_730_2%256)==0)
            {
                car3_GW1 = 3;
            }
        }
        else
        {
            car3_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 6 )  == 1  )
        {
            if((DCU_OLD_7B0_2%256)==1)
            {
                car3_GW2 = 1;
            }
            if((DCU_OLD_7B0_2%256)==2)
            {
                car3_GW2 = 2;
            }
            if((DCU_OLD_7B0_2%256)==0)
            {
                car3_GW2 = 3;
            }
        }
        else
        {
            car3_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 13 )  == 1 )
        {
            if((DCU_OLD_740_2%256)==1)
            {
                car4_GW1 = 1;
            }
            if((DCU_OLD_740_2%256)==2)
            {
                car4_GW1 = 2;
            }
            if((DCU_OLD_740_2%256)==0)
            {
                car4_GW1 = 3;
            }
        }
        else
        {
            car4_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 5 )  == 1  )
        {
            if((DCU_OLD_7C0_2%256)==1)
            {
                car4_GW2 = 1;
            }
            if((DCU_OLD_7C0_2%256)==2)
            {
                car4_GW2 = 2;
            }
            if((DCU_OLD_7C0_2%256)==0)
            {
                car4_GW2 = 3;
            }
        }
        else
        {
            car4_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 12 )  == 1  )
        {
            if((DCU_OLD_750_2%256)==1)
            {
                car5_GW1 = 1;
            }
            if((DCU_OLD_750_2%256)==2)
            {
                car5_GW1 = 2;
            }
            if((DCU_OLD_750_2%256)==0)
            {
                car5_GW1 = 3;
            }
        }
        else
        {
            car5_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 4 )  == 1 )
        {
            if((DCU_OLD_7D0_2%256)==1)
            {
                car5_GW2 = 1;
            }
            if((DCU_OLD_7D0_2%256)==2)
            {
                car5_GW2 = 2;
            }
            if((DCU_OLD_7D0_2%256)==0)
            {
                car5_GW2 = 3;
            }
        }
        else
        {
            car5_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 11 )  == 1  )
        {
            if((DCU_OLD_760_2%256)==1)
            {
                car6_GW1 = 1;
            }
            if((DCU_OLD_760_2%256)==2)
            {
                car6_GW1 = 2;
            }
            if((DCU_OLD_760_2%256)==0)
            {
                car6_GW1 = 3;
            }
        }
        else
        {
            car6_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 3 )  == 1 )
        {
            if((DCU_OLD_7E0_2%256)==1)
            {
                car6_GW2 = 1;
            }
            if((DCU_OLD_7E0_2%256)==2)
            {
                car6_GW2 = 2;
            }
            if((DCU_OLD_7E0_2%256)==0)
            {
                car6_GW2 = 3;
            }
        }
        else
        {
            car6_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 10 )  == 1  )
        {
            if((DCU_OLD_770_2%256)==1)
            {
                car7_GW1 = 1;
            }
            if((DCU_OLD_770_2%256)==2)
            {
                car7_GW1 = 2;
            }
            if((DCU_OLD_770_2%256)==0)
            {
                car7_GW1 = 3;
            }
        }
        else
        {
            car7_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 2 )  == 1 )
        {
            if((DCU_OLD_7F0_2%256)==1)
            {
                car7_GW2 = 1;
            }
            if((DCU_OLD_7F0_2%256)==2)
            {
                car7_GW2 = 2;
            }
            if((DCU_OLD_7F0_2%256)==0)
            {
                car7_GW2 = 3;
            }
        }
        else
        {
            car7_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 9 )  == 1  )
        {
            if((DCU_OLD_780_2%256)==1)
            {
                car8_GW1 = 1;
            }
            if((DCU_OLD_780_2%256)==2)
            {
                car8_GW1 = 2;
            }
            if((DCU_OLD_780_2%256)==0)
            {
                car8_GW1 = 3;
            }
        }
        else
        {
            car8_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 1 )  == 1 )
        {
            if((DCU_OLD_700_2%256)==1)
            {
                car8_GW2 = 1;
            }
            if((DCU_OLD_700_2%256)==2)
            {
                car8_GW2 = 2;
            }
            if((DCU_OLD_700_2%256)==0)
            {
                car8_GW2 = 3;
            }
        }
        else
        {
            car8_GW2 = 0;

        }
        if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
        {
                if(Bit( DCU_710_11, 4 )==1) {car1_door9=0;}  //
                if(Bit( DCU_710_11, 3 )==1) {car1_door9=1;}
                if(Bit( DCU_710_11, 15)==1) {car1_door9=2;}
                if(Bit( DCU_710_11, 11 )==1) {car1_door9=6;}
                if(Bit( DCU_710_11, 14 )==1) {car1_door9=5;}
                if((Bit( DCU_710_11, 1 )||Bit( DCU_710_11, 2 ))==1) {car1_door9=4;}
                if(Bit( DCU_710_11, 16 )==1) {car1_door9=8;}
          //      if((DCU_710_11&58383)==0){car1_door9=3;}
        }
        else
        {
            car1_door9=3;
        }   //  1车厢门9
        if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
        {
            if(Bit( DCU_710_12, 4 )==1) {car1_door10=0;}  //
            if(Bit( DCU_710_12, 3 )==1) {car1_door10=1;}
            if(Bit( DCU_710_12, 15)==1) {car1_door10=2;}
            if(Bit( DCU_710_12, 11 )==1) {car1_door10=6;}
            if(Bit( DCU_710_12, 14 )==1) {car1_door10=5;}
            if((Bit( DCU_710_12, 1 )||Bit( DCU_710_12, 2 ))==1) {car1_door10=4;}
            if(Bit( DCU_710_12, 16 )==1) {car1_door10=8;}
     //       if((DCU_710_12&58383)==0){car1_door10=3;}
        }
        else
        {
            car1_door10=3;
        }   //  1车厢门10


    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_3, 3 )==1) {car1_door1=0;}  //
            if(Bit( DCU_710_3, 2 )==1) {car1_door1=1;}
            if(Bit( DCU_710_3, 13)==1) {car1_door1=2;}
            if(Bit( DCU_710_3, 14 )==1) {car1_door1=6;}
            if(Bit( DCU_710_3, 11 )==1) {car1_door1=5;}
            if((Bit( DCU_710_3, 1 )||Bit( DCU_710_3, 16 ))==1) {car1_door1=4;}
            if(Bit( DCU_710_3, 15 )==1) {car1_door1=8;}
       //     if((DCU_710_3&62471)==0){car1_door1=3;}
    }
    else
    {
        car1_door1=3;
    }   //  1车厢门1
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_4, 3 )==1) {car1_door2=0;}  //
            if(Bit( DCU_710_4, 2 )==1) {car1_door2=1;}
            if(Bit( DCU_710_4, 13)==1) {car1_door2=2;}
            if(Bit( DCU_710_4, 14 )==1) {car1_door2=6;}
            if(Bit( DCU_710_4, 11 )==1) {car1_door2=5;}
            if((Bit( DCU_710_4, 1 )||Bit( DCU_710_4, 16 ))==1) {car1_door2=4;}
            if(Bit( DCU_710_4, 15 )==1) {car1_door2=8;}
       //     if((DCU_710_4&62471)==0){car1_door2=3;}
    }
    else
    {
        car1_door2=3;
    }   //  1车厢门2
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_5, 3 )==1) {car1_door3=0;}  //
            if(Bit( DCU_710_5, 2 )==1) {car1_door3=1;}
            if(Bit( DCU_710_5, 13)==1) {car1_door3=2;}
            if(Bit( DCU_710_5, 14 )==1) {car1_door3=6;}
            if(Bit( DCU_710_5, 11 )==1) {car1_door3=5;}
            if((Bit( DCU_710_5, 1 )||Bit( DCU_710_5, 16 ))==1) {car1_door3=4;}
            if(Bit( DCU_710_5, 15 )==1) {car1_door3=8;}
        //    if((DCU_710_5&62471)==0){car1_door3=3;}
    }
    else
    {
        car1_door3=3;
    }   //  1车厢门3
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_6, 3 )==1) {car1_door4=0;}  //
            if(Bit( DCU_710_6, 2 )==1) {car1_door4=1;}
            if(Bit( DCU_710_6, 13)==1) {car1_door4=2;}
            if(Bit( DCU_710_6, 14 )==1) {car1_door4=6;}
            if(Bit( DCU_710_6, 11 )==1) {car1_door4=5;}
            if((Bit( DCU_710_6, 1 )||Bit( DCU_710_6, 16 ))==1) {car1_door4=4;}
            if(Bit( DCU_710_6, 15 )==1) {car1_door4=8;}
       //     if((DCU_710_6&62471)==0){car1_door4=3;}
    }
    else
    {
        car1_door4=3;
    }   //  1车厢门4
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_7, 3 )==1) {car1_door5=0;}  //
            if(Bit( DCU_710_7, 2 )==1) {car1_door5=1;}
            if(Bit( DCU_710_7, 13)==1) {car1_door5=2;}
            if(Bit( DCU_710_7, 14 )==1) {car1_door5=6;}
            if(Bit( DCU_710_7, 11 )==1) {car1_door5=5;}
            if((Bit( DCU_710_7, 1 )||Bit( DCU_710_7, 16 ))==1) {car1_door5=4;}
            if(Bit( DCU_710_7, 15 )==1) {car1_door5=8;}
       //     if((DCU_710_7&62471)==0){car1_door5=3;}
    }
    else
    {
        car1_door5=3;
    }   //  1车厢门5
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_8, 3 )==1) {car1_door6=0;}  //
            if(Bit( DCU_710_8, 2 )==1) {car1_door6=1;}
            if(Bit( DCU_710_8, 13)==1) {car1_door6=2;}
            if(Bit( DCU_710_8, 14 )==1) {car1_door6=6;}
            if(Bit( DCU_710_8, 11 )==1) {car1_door6=5;}
            if((Bit( DCU_710_8, 1 )||Bit( DCU_710_8, 16 ))==1) {car1_door6=4;}
            if(Bit( DCU_710_8, 15 )==1) {car1_door6=8;}
        //    if((DCU_710_8&62471)==0){car1_door6=3;}
    }
    else
    {
        car1_door6=3;
    }   //  1车厢门6
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_9, 3 )==1) {car1_door7=0;}  //
            if(Bit( DCU_710_9, 2 )==1) {car1_door7=1;}
            if(Bit( DCU_710_9, 13)==1) {car1_door7=2;}
            if(Bit( DCU_710_9, 14 )==1) {car1_door7=6;}
            if(Bit( DCU_710_9, 11 )==1) {car1_door7=5;}
            if((Bit( DCU_710_9, 1 )||Bit( DCU_710_9, 16 ))==1) {car1_door7=4;}
            if(Bit( DCU_710_9, 15 )==1) {car1_door7=8;}
        //    if((DCU_710_9&62471)==0){car1_door7=3;}
    }
    else
    {
        car1_door7=3;
    }   //  1车厢门7
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_10, 3 )==1) {car1_door8=0;}  //
            if(Bit( DCU_710_10, 2 )==1) {car1_door8=1;}
            if(Bit( DCU_710_10, 13)==1) {car1_door8=2;}
            if(Bit( DCU_710_10, 14 )==1) {car1_door8=6;}
            if(Bit( DCU_710_10, 11 )==1) {car1_door8=5;}
            if((Bit( DCU_710_10, 1 )||Bit( DCU_710_10, 16 ))==1) {car1_door8=4;}
            if(Bit( DCU_710_10, 15 )==1) {car1_door8=8;}
        //    if((DCU_710_10&62471)==0){car1_door8=3;}
    }
    else
    {
        car1_door8=3;
    }   //  1车厢门8


    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_3, 3 )==1) {car2_door1=0;}  //
            if(Bit( DCU_720_3, 2 )==1) {car2_door1=1;}
            if(Bit( DCU_720_3, 13)==1) {car2_door1=2;}
            if(Bit( DCU_720_3, 14 )==1) {car2_door1=6;}
            if(Bit( DCU_720_3, 11 )==1) {car2_door1=5;}
            if((Bit( DCU_720_3, 1 )||Bit( DCU_720_3, 16 ))==1) {car2_door1=4;}
            if(Bit( DCU_720_3, 15 )==1) {car2_door1=8;}
        //    if((DCU_720_3&62471)==0){car2_door1=3;}
    }
    else
    {
        car2_door1=3;
    }   //  2车厢门1
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_4, 3 )==1) {car2_door2=0;}  //
            if(Bit( DCU_720_4, 2 )==1) {car2_door2=1;}
            if(Bit( DCU_720_4, 13)==1) {car2_door2=2;}
            if(Bit( DCU_720_4, 14 )==1) {car2_door2=6;}
            if(Bit( DCU_720_4, 11 )==1) {car2_door2=5;}
            if((Bit( DCU_720_4, 1 )||Bit( DCU_720_4, 16 ))==1) {car2_door2=4;}
            if(Bit( DCU_720_4, 15 )==1) {car2_door2=8;}
       //     if((DCU_720_4&62471)==0){car2_door2=3;}
    }
    else
    {
        car2_door2=3;
    }   //  2车厢门2
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_5, 3 )==1) {car2_door3=0;}  //
            if(Bit( DCU_720_5, 2 )==1) {car2_door3=1;}
            if(Bit( DCU_720_5, 13)==1) {car2_door3=2;}
            if(Bit( DCU_720_5, 14 )==1) {car2_door3=6;}
            if(Bit( DCU_720_5, 11 )==1) {car2_door3=5;}
            if((Bit( DCU_720_5, 1 )||Bit( DCU_720_5, 16 ))==1) {car2_door3=4;}
            if(Bit( DCU_720_5, 15 )==1) {car2_door3=8;}
        //    if((DCU_720_5&62471)==0){car2_door3=3;}
    }
    else
    {
        car2_door3=3;
    }   //  2车厢门3
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_6, 3 )==1) {car2_door4=0;}  //
            if(Bit( DCU_720_6, 2 )==1) {car2_door4=1;}
            if(Bit( DCU_720_6, 13)==1) {car2_door4=2;}
            if(Bit( DCU_720_6, 14 )==1) {car2_door4=6;}
            if(Bit( DCU_720_6, 11 )==1) {car2_door4=5;}
            if((Bit( DCU_720_6, 1 )||Bit( DCU_720_6, 16 ))==1) {car2_door4=4;}
            if(Bit( DCU_720_6, 15 )==1) {car2_door4=8;}
        //    if((DCU_720_6&62471)==0){car2_door4=3;}
    }
    else
    {
        car2_door4=3;
    }   //  2车厢门4
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_7, 3 )==1) {car2_door5=0;}  //
            if(Bit( DCU_720_7, 2 )==1) {car2_door5=1;}
            if(Bit( DCU_720_7, 13)==1) {car2_door5=2;}
            if(Bit( DCU_720_7, 14 )==1) {car2_door5=6;}
            if(Bit( DCU_720_7, 11 )==1) {car2_door5=5;}
            if((Bit( DCU_720_7, 1 )||Bit( DCU_720_7, 16 ))==1) {car2_door5=4;}
            if(Bit( DCU_720_7, 15 )==1) {car2_door5=8;}
          //  if((DCU_720_7&62471)==0){car2_door5=3;}
    }
    else
    {
        car2_door5=3;
    }   //  2车厢门5
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_8, 3 )==1) {car2_door6=0;}  //
            if(Bit( DCU_720_8, 2 )==1) {car2_door6=1;}
            if(Bit( DCU_720_8, 13)==1) {car2_door6=2;}
            if(Bit( DCU_720_8, 14 )==1) {car2_door6=6;}
            if(Bit( DCU_720_8, 11 )==1) {car2_door6=5;}
            if((Bit( DCU_720_8, 1 )||Bit( DCU_720_8, 16 ))==1) {car2_door6=4;}
            if(Bit( DCU_720_8, 15 )==1) {car2_door6=8;}
         //   if((DCU_720_8&62471)==0){car2_door6=3;}
    }
    else
    {
        car2_door6=3;
    }   //  2车厢门6
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_9, 3 )==1) {car2_door7=0;}  //
            if(Bit( DCU_720_9, 2 )==1) {car2_door7=1;}
            if(Bit( DCU_720_9, 13)==1) {car2_door7=2;}
            if(Bit( DCU_720_9, 14 )==1) {car2_door7=6;}
            if(Bit( DCU_720_9, 11 )==1) {car2_door7=5;}
            if((Bit( DCU_720_9, 1 )||Bit( DCU_720_9, 16 ))==1) {car2_door7=4;}
            if(Bit( DCU_720_9, 15 )==1) {car2_door7=8;}
         //   if((DCU_720_9&62471)==0){car2_door7=3;}
    }
    else
    {
        car2_door7=3;
    }   //  2车厢门7
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_10, 3 )==1) {car2_door8=0;}  //
            if(Bit( DCU_720_10, 2 )==1) {car2_door8=1;}
            if(Bit( DCU_720_10, 13)==1) {car2_door8=2;}
            if(Bit( DCU_720_10, 14 )==1) {car2_door8=6;}
            if(Bit( DCU_720_10, 11 )==1) {car2_door8=5;}
            if((Bit( DCU_720_10, 1 )||Bit( DCU_720_10, 16 ))==1) {car2_door8=4;}
            if(Bit( DCU_720_10, 15 )==1) {car2_door8=8;}
         //   if((DCU_720_10&62471)==0){car2_door8=3;}
    }
    else
    {
        car2_door8=3;
    }   //  2车厢门8

    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_3, 3 )==1) {car3_door1=0;}  //
            if(Bit( DCU_730_3, 2 )==1) {car3_door1=1;}
            if(Bit( DCU_730_3, 13)==1) {car3_door1=2;}
            if(Bit( DCU_730_3, 14 )==1) {car3_door1=6;}
            if(Bit( DCU_730_3, 11 )==1) {car3_door1=5;}
            if((Bit( DCU_730_3, 1 )||Bit( DCU_730_3, 16 ))==1) {car3_door1=4;}
            if(Bit( DCU_730_3, 15 )==1) {car3_door1=8;}
         //   if((DCU_730_3&62471)==0){car3_door1=3;}
    }
    else
    {
        car3_door1=3;
    }   //  3车厢门1
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_4, 3 )==1) {car3_door2=0;}  //
            if(Bit( DCU_730_4, 2 )==1) {car3_door2=1;}
            if(Bit( DCU_730_4, 13)==1) {car3_door2=2;}
            if(Bit( DCU_730_4, 14 )==1) {car3_door2=6;}
            if(Bit( DCU_730_4, 11 )==1) {car3_door2=5;}
            if((Bit( DCU_730_4, 1 )||Bit( DCU_730_4, 16 ))==1) {car3_door2=4;}
            if(Bit( DCU_730_4, 15 )==1) {car3_door2=8;}
        //    if((DCU_730_4&62471)==0){car3_door2=3;}
    }
    else
    {
        car3_door2=3;
    }   //  3车厢门2
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_5, 3 )==1) {car3_door3=0;}  //
            if(Bit( DCU_730_5, 2 )==1) {car3_door3=1;}
            if(Bit( DCU_730_5, 13)==1) {car3_door3=2;}
            if(Bit( DCU_730_5, 14 )==1) {car3_door3=6;}
            if(Bit( DCU_730_5, 11 )==1) {car3_door3=5;}
            if((Bit( DCU_730_5, 1 )||Bit( DCU_730_5, 16 ))==1) {car3_door3=4;}
            if(Bit( DCU_730_5, 15 )==1) {car3_door3=8;}
       //     if((DCU_730_5&62471)==0){car3_door3=3;}
    }
    else
    {
        car3_door3=3;
    }   //  3车厢门3
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_6, 3 )==1) {car3_door4=0;}  //
            if(Bit( DCU_730_6, 2 )==1) {car3_door4=1;}
            if(Bit( DCU_730_6, 13)==1) {car3_door4=2;}
            if(Bit( DCU_730_6, 14 )==1) {car3_door4=6;}
            if(Bit( DCU_730_6, 11 )==1) {car3_door4=5;}
            if((Bit( DCU_730_6, 1 )||Bit( DCU_730_6, 16 ))==1) {car3_door4=4;}
            if(Bit( DCU_730_6, 15 )==1) {car3_door4=8;}
       //     if((DCU_730_6&62471)==0){car3_door4=3;}
    }
    else
    {
        car3_door4=3;
    }   //  3车厢门4
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_7, 3 )==1) {car3_door5=0;}  //
            if(Bit( DCU_730_7, 2 )==1) {car3_door5=1;}
            if(Bit( DCU_730_7, 13)==1) {car3_door5=2;}
            if(Bit( DCU_730_7, 14 )==1) {car3_door5=6;}
            if(Bit( DCU_730_7, 11 )==1) {car3_door5=5;}
            if((Bit( DCU_730_7, 1 )||Bit( DCU_730_7, 16 ))==1) {car3_door5=4;}
            if(Bit( DCU_730_7, 15 )==1) {car3_door5=8;}
       //     if((DCU_730_7&62471)==0){car3_door5=3;}
    }
    else
    {
        car3_door5=3;
    }   //  3车厢门5
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_8, 3 )==1) {car3_door6=0;}  //
            if(Bit( DCU_730_8, 2 )==1) {car3_door6=1;}
            if(Bit( DCU_730_8, 13)==1) {car3_door6=2;}
            if(Bit( DCU_730_8, 14 )==1) {car3_door6=6;}
            if(Bit( DCU_730_8, 11 )==1) {car3_door6=5;}
            if((Bit( DCU_730_8, 1 )||Bit( DCU_730_8, 16 ))==1) {car3_door6=4;}
            if(Bit( DCU_730_8, 15 )==1) {car3_door6=8;}
       //     if((DCU_730_8&62471)==0){car3_door6=3;}
    }
    else
    {
        car3_door6=3;
    }   //  3车厢门6
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_9, 3 )==1) {car3_door7=0;}  //
            if(Bit( DCU_730_9, 2 )==1) {car3_door7=1;}
            if(Bit( DCU_730_9, 13)==1) {car3_door7=2;}
            if(Bit( DCU_730_9, 14 )==1) {car3_door7=6;}
            if(Bit( DCU_730_9, 11 )==1) {car3_door7=5;}
            if((Bit( DCU_730_9, 1 )||Bit( DCU_730_9, 16 ))==1) {car3_door7=4;}
            if(Bit( DCU_730_9, 15 )==1) {car3_door7=8;}
       //     if((DCU_730_9&62471)==0){car3_door7=3;}
    }
    else
    {
        car3_door7=3;
    }   //  3车厢门7
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_10, 3 )==1) {car3_door8=0;}  //
            if(Bit( DCU_730_10, 2 )==1) {car3_door8=1;}
            if(Bit( DCU_730_10, 13)==1) {car3_door8=2;}
            if(Bit( DCU_730_10, 14 )==1) {car3_door8=6;}
            if(Bit( DCU_730_10, 11 )==1) {car3_door8=5;}
            if((Bit( DCU_730_10, 1 )||Bit( DCU_730_10, 16 ))==1) {car3_door8=4;}
            if(Bit( DCU_730_10, 15 )==1) {car3_door8=8;}
       //     if((DCU_730_10&62471)==0){car3_door8=3;}
    }
    else
    {
        car3_door8=3;
    }   //  3车厢门8

    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_3, 3 )==1) {car4_door1=0;}  //
            if(Bit( DCU_740_3, 2 )==1) {car4_door1=1;}
            if(Bit( DCU_740_3, 13)==1) {car4_door1=2;}
            if(Bit( DCU_740_3, 14 )==1) {car4_door1=6;}
            if(Bit( DCU_740_3, 11 )==1) {car4_door1=5;}
            if((Bit( DCU_740_3, 1 )||Bit( DCU_740_3, 16 ))==1) {car4_door1=4;}
            if(Bit( DCU_740_3, 15 )==1) {car4_door1=8;}
       //     if((DCU_740_3&62471)==0){car4_door1=3;}
    }
    else
    {
        car4_door1=3;
    }   //  4车厢门1
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_4, 3 )==1) {car4_door2=0;}  //
            if(Bit( DCU_740_4, 2 )==1) {car4_door2=1;}
            if(Bit( DCU_740_4, 13)==1) {car4_door2=2;}
            if(Bit( DCU_740_4, 14 )==1) {car4_door2=6;}
            if(Bit( DCU_740_4, 11 )==1) {car4_door2=5;}
            if((Bit( DCU_740_4, 1 )||Bit( DCU_740_4, 16 ))==1) {car4_door2=4;}
            if(Bit( DCU_740_4, 15 )==1) {car4_door2=8;}
         //   if((DCU_740_4&62471)==0){car4_door2=3;}
    }
    else
    {
        car4_door2=3;
    }   //  4车厢门2
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_5, 3 )==1) {car4_door3=0;}  //
            if(Bit( DCU_740_5, 2 )==1) {car4_door3=1;}
            if(Bit( DCU_740_5, 13)==1) {car4_door3=2;}
            if(Bit( DCU_740_5, 14 )==1) {car4_door3=6;}
            if(Bit( DCU_740_5, 11 )==1) {car4_door3=5;}
            if((Bit( DCU_740_5, 1 )||Bit( DCU_740_5, 16 ))==1) {car4_door3=4;}
            if(Bit( DCU_740_5, 15 )==1) {car4_door3=8;}
         //   if((DCU_740_5&62471)==0){car4_door3=3;}
    }
    else
    {
        car4_door3=3;
    }   //  4车厢门3
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_6, 3 )==1) {car4_door4=0;}  //
            if(Bit( DCU_740_6, 2 )==1) {car4_door4=1;}
            if(Bit( DCU_740_6, 13)==1) {car4_door4=2;}
            if(Bit( DCU_740_6, 14 )==1) {car4_door4=6;}
            if(Bit( DCU_740_6, 11 )==1) {car4_door4=5;}
            if((Bit( DCU_740_6, 1 )||Bit( DCU_740_6, 16 ))==1) {car4_door4=4;}
            if(Bit( DCU_740_6, 15 )==1) {car4_door4=8;}
        //    if((DCU_740_6&62471)==0){car4_door4=3;}
    }
    else
    {
        car4_door4=3;
    }   //  4车厢门4
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_7, 3 )==1) {car4_door5=0;}  //
            if(Bit( DCU_740_7, 2 )==1) {car4_door5=1;}
            if(Bit( DCU_740_7, 13)==1) {car4_door5=2;}
            if(Bit( DCU_740_7, 14 )==1) {car4_door5=6;}
            if(Bit( DCU_740_7, 11 )==1) {car4_door5=5;}
            if((Bit( DCU_740_7, 1 )||Bit( DCU_740_7, 16 ))==1) {car4_door5=4;}
            if(Bit( DCU_740_7, 15 )==1) {car4_door5=8;}
         //   if((DCU_740_7&62471)==0){car4_door5=3;}
    }
    else
    {
        car4_door5=3;
    }   //  4车厢门5
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_8, 3 )==1) {car4_door6=0;}  //
            if(Bit( DCU_740_8, 2 )==1) {car4_door6=1;}
            if(Bit( DCU_740_8, 13)==1) {car4_door6=2;}
            if(Bit( DCU_740_8, 14 )==1) {car4_door6=6;}
            if(Bit( DCU_740_8, 11 )==1) {car4_door6=5;}
            if((Bit( DCU_740_8, 1 )||Bit( DCU_740_8, 16 ))==1) {car4_door6=4;}
            if(Bit( DCU_740_8, 15 )==1) {car4_door6=8;}
         //   if((DCU_740_8&62471)==0){car4_door6=3;}
    }
    else
    {
        car4_door6=3;
    }   //  4车厢门6
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_9, 3 )==1) {car4_door7=0;}  //
            if(Bit( DCU_740_9, 2 )==1) {car4_door7=1;}
            if(Bit( DCU_740_9, 13)==1) {car4_door7=2;}
            if(Bit( DCU_740_9, 14 )==1) {car4_door7=6;}
            if(Bit( DCU_740_9, 11 )==1) {car4_door7=5;}
            if((Bit( DCU_740_9, 1 )||Bit( DCU_740_9, 16 ))==1) {car4_door7=4;}
            if(Bit( DCU_740_9, 15 )==1) {car4_door7=8;}
         //   if((DCU_740_9&62471)==0){car4_door7=3;}
    }
    else
    {
        car4_door7=3;
    }   //  4车厢门7
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_10, 3 )==1) {car4_door8=0;}  //
            if(Bit( DCU_740_10, 2 )==1) {car4_door8=1;}
            if(Bit( DCU_740_10, 13)==1) {car4_door8=2;}
            if(Bit( DCU_740_10, 14 )==1) {car4_door8=6;}
            if(Bit( DCU_740_10, 11 )==1) {car4_door8=5;}
            if((Bit( DCU_740_10, 1 )||Bit( DCU_740_10, 16 ))==1) {car4_door8=4;}
            if(Bit( DCU_740_10, 15 )==1) {car4_door8=8;}
        //    if((DCU_740_10&62471)==0){car4_door8=3;}
    }
    else
    {
        car4_door8=3;
    }   //  4车厢门8

    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_3, 3 )==1) {car5_door1=0;}  //
            if(Bit( DCU_750_3, 2 )==1) {car5_door1=1;}
            if(Bit( DCU_750_3, 13)==1) {car5_door1=2;}
            if(Bit( DCU_750_3, 14 )==1) {car5_door1=6;}
            if(Bit( DCU_750_3, 11 )==1) {car5_door1=5;}
            if((Bit( DCU_750_3, 1 )||Bit( DCU_750_3, 16 ))==1) {car5_door1=4;}
            if(Bit( DCU_750_3, 15 )==1) {car5_door1=8;}
        //    if((DCU_750_3&62471)==0){car5_door1=3;}
    }
    else
    {
        car5_door1=3;
    }   //  5车厢门1
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_4, 3 )==1) {car5_door2=0;}  //
            if(Bit( DCU_750_4, 2 )==1) {car5_door2=1;}
            if(Bit( DCU_750_4, 13)==1) {car5_door2=2;}
            if(Bit( DCU_750_4, 14 )==1) {car5_door2=6;}
            if(Bit( DCU_750_4, 11 )==1) {car5_door2=5;}
            if((Bit( DCU_750_4, 1 )||Bit( DCU_750_4, 16 ))==1) {car5_door2=4;}
            if(Bit( DCU_750_4, 15 )==1) {car5_door2=8;}
        //    if((DCU_750_4&62471)==0){car5_door2=3;}
    }
    else
    {
        car5_door2=3;
    }   //  5车厢门2
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_5, 3 )==1) {car5_door3=0;}  //
            if(Bit( DCU_750_5, 2 )==1) {car5_door3=1;}
            if(Bit( DCU_750_5, 13)==1) {car5_door3=2;}
            if(Bit( DCU_750_5, 14 )==1) {car5_door3=6;}
            if(Bit( DCU_750_5, 11 )==1) {car5_door3=5;}
            if((Bit( DCU_750_5, 1 )||Bit( DCU_750_5, 16 ))==1) {car5_door3=4;}
            if(Bit( DCU_750_5, 15 )==1) {car5_door3=8;}
        //    if((DCU_750_5&62471)==0){car5_door3=3;}
    }
    else
    {
        car5_door3=3;
    }   //  5车厢门3
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_6, 3 )==1) {car5_door4=0;}  //
            if(Bit( DCU_750_6, 2 )==1) {car5_door4=1;}
            if(Bit( DCU_750_6, 13)==1) {car5_door4=2;}
            if(Bit( DCU_750_6, 14 )==1) {car5_door4=6;}
            if(Bit( DCU_750_6, 11 )==1) {car5_door4=5;}
            if((Bit( DCU_750_6, 1 )||Bit( DCU_750_6, 16 ))==1) {car5_door4=4;}
            if(Bit( DCU_750_6, 15 )==1) {car5_door4=8;}
         //   if((DCU_750_6&62471)==0){car5_door4=3;}
    }
    else
    {
        car5_door4=3;
    }   //  5车厢门4
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_7, 3 )==1) {car5_door5=0;}  //
            if(Bit( DCU_750_7, 2 )==1) {car5_door5=1;}
            if(Bit( DCU_750_7, 13)==1) {car5_door5=2;}
            if(Bit( DCU_750_7, 14 )==1) {car5_door5=6;}
            if(Bit( DCU_750_7, 11 )==1) {car5_door5=5;}
            if((Bit( DCU_750_7, 1 )||Bit( DCU_750_7, 16 ))==1) {car5_door5=4;}
            if(Bit( DCU_750_7, 15 )==1) {car5_door5=8;}
        //    if((DCU_750_7&62471)==0){car5_door5=3;}
    }
    else
    {
        car5_door5=3;
    }   //  5车厢门5
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_8, 3 )==1) {car5_door6=0;}  //
            if(Bit( DCU_750_8, 2 )==1) {car5_door6=1;}
            if(Bit( DCU_750_8, 13)==1) {car5_door6=2;}
            if(Bit( DCU_750_8, 14 )==1) {car5_door6=6;}
            if(Bit( DCU_750_8, 11 )==1) {car5_door6=5;}
            if((Bit( DCU_750_8, 1 )||Bit( DCU_750_8, 16 ))==1) {car5_door6=4;}
            if(Bit( DCU_750_8, 15 )==1) {car5_door6=8;}
         //   if((DCU_750_8&62471)==0){car5_door6=3;}
    }
    else
    {
        car5_door6=3;
    }   //  5车厢门6
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_9, 3 )==1) {car5_door7=0;}  //
            if(Bit( DCU_750_9, 2 )==1) {car5_door7=1;}
            if(Bit( DCU_750_9, 13)==1) {car5_door7=2;}
            if(Bit( DCU_750_9, 14 )==1) {car5_door7=6;}
            if(Bit( DCU_750_9, 11 )==1) {car5_door7=5;}
            if((Bit( DCU_750_9, 1 )||Bit( DCU_750_9, 16 ))==1) {car5_door7=4;}
            if(Bit( DCU_750_9, 15 )==1) {car5_door7=8;}
         //   if((DCU_750_9&62471)==0){car5_door7=3;}
    }
    else
    {
        car5_door7=3;
    }   //  5车厢门7
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_10, 3 )==1) {car5_door8=0;}  //
            if(Bit( DCU_750_10, 2 )==1) {car5_door8=1;}
            if(Bit( DCU_750_10, 13)==1) {car5_door8=2;}
            if(Bit( DCU_750_10, 14 )==1) {car5_door8=6;}
            if(Bit( DCU_750_10, 11 )==1) {car5_door8=5;}
            if((Bit( DCU_750_10, 1 )||Bit( DCU_750_10, 16 ))==1) {car5_door8=4;}
            if(Bit( DCU_750_10, 15 )==1) {car5_door8=8;}
        //    if((DCU_750_10&62471)==0){car5_door8=3;}
    }
    else
    {
        car5_door8=3;
    }   //  5车厢门8

    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_3, 3 )==1) {car6_door1=0;}  //
            if(Bit( DCU_760_3, 2 )==1) {car6_door1=1;}
            if(Bit( DCU_760_3, 13)==1) {car6_door1=2;}
            if(Bit( DCU_760_3, 14 )==1) {car6_door1=6;}
            if(Bit( DCU_760_3, 11 )==1) {car6_door1=5;}
            if((Bit( DCU_760_3, 1 )||Bit( DCU_760_3, 16 ))==1) {car6_door1=4;}
            if(Bit( DCU_760_3, 15 )==1) {car6_door1=8;}
        //    if((DCU_760_3&62471)==0){car6_door1=3;}
    }
    else
    {
        car6_door1=3;
    }   //  6车厢门1
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_4, 3 )==1) {car6_door2=0;}  //
            if(Bit( DCU_760_4, 2 )==1) {car6_door2=1;}
            if(Bit( DCU_760_4, 13)==1) {car6_door2=2;}
            if(Bit( DCU_760_4, 14 )==1) {car6_door2=6;}
            if(Bit( DCU_760_4, 11 )==1) {car6_door2=5;}
            if((Bit( DCU_760_4, 1 )||Bit( DCU_760_4, 16 ))==1) {car6_door2=4;}
            if(Bit( DCU_760_4, 15 )==1) {car6_door2=8;}
         //   if((DCU_760_4&62471)==0){car6_door2=3;}
    }
    else
    {
        car6_door2=3;
    }   //  6车厢门2
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_5, 3 )==1) {car6_door3=0;}  //
            if(Bit( DCU_760_5, 2 )==1) {car6_door3=1;}
            if(Bit( DCU_760_5, 13)==1) {car6_door3=2;}
            if(Bit( DCU_760_5, 14 )==1) {car6_door3=6;}
            if(Bit( DCU_760_5, 11 )==1) {car6_door3=5;}
            if((Bit( DCU_760_5, 1 )||Bit( DCU_760_5, 16 ))==1) {car6_door3=4;}
            if(Bit( DCU_760_5, 15 )==1) {car6_door3=8;}
        //    if((DCU_760_5&62471)==0){car6_door3=3;}
    }
    else
    {
        car6_door3=3;
    }   //  6车厢门3
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_6, 3 )==1) {car6_door4=0;}  //
            if(Bit( DCU_760_6, 2 )==1) {car6_door4=1;}
            if(Bit( DCU_760_6, 13)==1) {car6_door4=2;}
            if(Bit( DCU_760_6, 14 )==1) {car6_door4=6;}
            if(Bit( DCU_760_6, 11 )==1) {car6_door4=5;}
            if((Bit( DCU_760_6, 1 )||Bit( DCU_760_6, 16 ))==1) {car6_door4=4;}
            if(Bit( DCU_760_6, 15 )==1) {car6_door4=8;}
         //   if((DCU_760_6&62471)==0){car6_door4=3;}
    }
    else
    {
        car6_door4=3;
    }   //  6车厢门4
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_7, 3 )==1) {car6_door5=0;}  //
            if(Bit( DCU_760_7, 2 )==1) {car6_door5=1;}
            if(Bit( DCU_760_7, 13)==1) {car6_door5=2;}
            if(Bit( DCU_760_7, 14 )==1) {car6_door5=6;}
            if(Bit( DCU_760_7, 11 )==1) {car6_door5=5;}
            if((Bit( DCU_760_7, 1 )||Bit( DCU_760_7, 16 ))==1) {car6_door5=4;}
            if(Bit( DCU_760_7, 15 )==1) {car6_door5=8;}
        //    if((DCU_760_7&62471)==0){car6_door5=3;}
    }
    else
    {
        car6_door5=3;
    }   //  6车厢门5
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_8, 3 )==1) {car6_door6=0;}  //
            if(Bit( DCU_760_8, 2 )==1) {car6_door6=1;}
            if(Bit( DCU_760_8, 13)==1) {car6_door6=2;}
            if(Bit( DCU_760_8, 14 )==1) {car6_door6=6;}
            if(Bit( DCU_760_8, 11 )==1) {car6_door6=5;}
            if((Bit( DCU_760_8, 1 )||Bit( DCU_760_8, 16 ))==1) {car6_door6=4;}
            if(Bit( DCU_760_8, 15 )==1) {car6_door6=8;}
        //    if((DCU_760_8&62471)==0){car6_door6=3;}
    }
    else
    {
        car6_door6=3;
    }   //  6车厢门6
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_9, 3 )==1) {car6_door7=0;}  //
            if(Bit( DCU_760_9, 2 )==1) {car6_door7=1;}
            if(Bit( DCU_760_9, 13)==1) {car6_door7=2;}
            if(Bit( DCU_760_9, 14 )==1) {car6_door7=6;}
            if(Bit( DCU_760_9, 11 )==1) {car6_door7=5;}
            if((Bit( DCU_760_9, 1 )||Bit( DCU_760_9, 16 ))==1) {car6_door7=4;}
            if(Bit( DCU_760_9, 15 )==1) {car6_door7=8;}
        //    if((DCU_760_9&62471)==0){car6_door7=3;}
    }
    else
    {
        car6_door7=3;
    }   //  6车厢门7
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_10, 3 )==1) {car6_door8=0;}  //
            if(Bit( DCU_760_10, 2 )==1) {car6_door8=1;}
            if(Bit( DCU_760_10, 13)==1) {car6_door8=2;}
            if(Bit( DCU_760_10, 14 )==1) {car6_door8=6;}
            if(Bit( DCU_760_10, 11 )==1) {car6_door8=5;}
            if((Bit( DCU_760_10, 1 )||Bit( DCU_760_10, 16 ))==1) {car6_door8=4;}
            if(Bit( DCU_760_10, 15 )==1) {car6_door8=8;}
       //     if((DCU_760_10&62471)==0){car6_door8=3;}
    }
    else
    {
        car6_door8=3;
    }   //  6车厢门8


    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_3, 3 )==1) {car7_door1=0;}  //
            if(Bit( DCU_770_3, 2 )==1) {car7_door1=1;}
            if(Bit( DCU_770_3, 13)==1) {car7_door1=2;}
            if(Bit( DCU_770_3, 14 )==1) {car7_door1=6;}
            if(Bit( DCU_770_3, 11 )==1) {car7_door1=5;}
            if((Bit( DCU_770_3, 1 )||Bit( DCU_770_3, 16 ))==1) {car7_door1=4;}
            if(Bit( DCU_770_3, 15 )==1) {car7_door1=8;}
         //   if((DCU_770_3&62471)==0){car7_door1=3;}
    }
    else
    {
        car7_door1=3;
    }   //  7车厢门1
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_4, 3 )==1) {car7_door2=0;}  //
            if(Bit( DCU_770_4, 2 )==1) {car7_door2=1;}
            if(Bit( DCU_770_4, 13)==1) {car7_door2=2;}
            if(Bit( DCU_770_4, 14 )==1) {car7_door2=6;}
            if(Bit( DCU_770_4, 11 )==1) {car7_door2=5;}
            if((Bit( DCU_770_4, 1 )||Bit( DCU_770_4, 16 ))==1) {car7_door2=4;}
            if(Bit( DCU_770_4, 15 )==1) {car7_door2=8;}
          //  if((DCU_770_4&62471)==0){car7_door2=3;}
    }
    else
    {
        car7_door2=3;
    }   //  7车厢门2
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_5, 3 )==1) {car7_door3=0;}  //
            if(Bit( DCU_770_5, 2 )==1) {car7_door3=1;}
            if(Bit( DCU_770_5, 13)==1) {car7_door3=2;}
            if(Bit( DCU_770_5, 14 )==1) {car7_door3=6;}
            if(Bit( DCU_770_5, 11 )==1) {car7_door3=5;}
            if((Bit( DCU_770_5, 1 )||Bit( DCU_770_5, 16 ))==1) {car7_door3=4;}
            if(Bit( DCU_770_5, 15 )==1) {car7_door3=8;}
       //     if((DCU_770_5&62471)==0){car7_door3=3;}
    }
    else
    {
        car7_door3=3;
    }   //  7车厢门3
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_6, 3 )==1) {car7_door4=0;}  //
            if(Bit( DCU_770_6, 2 )==1) {car7_door4=1;}
            if(Bit( DCU_770_6, 13)==1) {car7_door4=2;}
            if(Bit( DCU_770_6, 14 )==1) {car7_door4=6;}
            if(Bit( DCU_770_6, 11 )==1) {car7_door4=5;}
            if((Bit( DCU_770_6, 1 )||Bit( DCU_770_6, 16 ))==1) {car7_door4=4;}
            if(Bit( DCU_770_6, 15 )==1) {car7_door4=8;}
        //    if((DCU_770_6&62471)==0){car7_door4=3;}
    }
    else
    {
        car7_door4=3;
    }   //  7车厢门4
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_7, 3 )==1) {car7_door5=0;}  //
            if(Bit( DCU_770_7, 2 )==1) {car7_door5=1;}
            if(Bit( DCU_770_7, 13)==1) {car7_door5=2;}
            if(Bit( DCU_770_7, 14 )==1) {car7_door5=6;}
            if(Bit( DCU_770_7, 11 )==1) {car7_door5=5;}
            if((Bit( DCU_770_7, 1 )||Bit( DCU_770_7, 16 ))==1) {car7_door5=4;}
            if(Bit( DCU_770_7, 15 )==1) {car7_door5=8;}
        //    if((DCU_770_7&62471)==0){car7_door5=3;}
    }
    else
    {
        car7_door5=3;
    }   //  7车厢门5
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_8, 3 )==1) {car7_door6=0;}  //
            if(Bit( DCU_770_8, 2 )==1) {car7_door6=1;}
            if(Bit( DCU_770_8, 13)==1) {car7_door6=2;}
            if(Bit( DCU_770_8, 14 )==1) {car7_door6=6;}
            if(Bit( DCU_770_8, 11 )==1) {car7_door6=5;}
            if((Bit( DCU_770_8, 1 )||Bit( DCU_770_8, 16 ))==1) {car7_door6=4;}
            if(Bit( DCU_770_8, 15 )==1) {car7_door6=8;}
        //    if((DCU_770_8&62471)==0){car7_door6=3;}
    }
    else
    {
        car7_door6=3;
    }   //  7车厢门6
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_9, 3 )==1) {car7_door7=0;}  //
            if(Bit( DCU_770_9, 2 )==1) {car7_door7=1;}
            if(Bit( DCU_770_9, 13)==1) {car7_door7=2;}
            if(Bit( DCU_770_9, 14 )==1) {car7_door7=6;}
            if(Bit( DCU_770_9, 11 )==1) {car7_door7=5;}
            if((Bit( DCU_770_9, 1 )||Bit( DCU_770_9, 16 ))==1) {car7_door7=4;}
            if(Bit( DCU_770_9, 15 )==1) {car7_door7=8;}
        //    if((DCU_770_9&62471)==0){car7_door7=3;}
    }
    else
    {
        car7_door7=3;
    }   //  7车厢门7
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_10, 3 )==1) {car7_door8=0;}  //
            if(Bit( DCU_770_10, 2 )==1) {car7_door8=1;}
            if(Bit( DCU_770_10, 13)==1) {car7_door8=2;}
            if(Bit( DCU_770_10, 14 )==1) {car7_door8=6;}
            if(Bit( DCU_770_10, 11 )==1) {car7_door8=5;}
            if((Bit( DCU_770_10, 1 )||Bit( DCU_770_10, 16 ))==1) {car7_door8=4;}
            if(Bit( DCU_770_10, 15 )==1) {car7_door8=8;}
        //    if((DCU_770_10&62471)==0){car7_door8=3;}
    }
    else
    {
        car7_door8=3;
    }   //  7车厢门8

    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_3, 3 )==1) {car8_door1=0;}  //
            if(Bit( DCU_780_3, 2 )==1) {car8_door1=1;}
            if(Bit( DCU_780_3, 13)==1) {car8_door1=2;}
            if(Bit( DCU_780_3, 14 )==1) {car8_door1=6;}
            if(Bit( DCU_780_3, 11 )==1) {car8_door1=5;}
            if((Bit( DCU_780_3, 1 )||Bit( DCU_780_3, 16 ))==1) {car8_door1=4;}
            if(Bit( DCU_780_3, 15 )==1) {car8_door1=8;}
         //   if((DCU_780_3&62471)==0){car8_door1=3;}
    }
    else
    {
        car8_door1=3;
    }   //  8车厢门1
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_4, 3 )==1) {car8_door2=0;}  //
            if(Bit( DCU_780_4, 2 )==1) {car8_door2=1;}
            if(Bit( DCU_780_4, 13)==1) {car8_door2=2;}
            if(Bit( DCU_780_4, 14 )==1) {car8_door2=6;}
            if(Bit( DCU_780_4, 11 )==1) {car8_door2=5;}
            if((Bit( DCU_780_4, 1 )||Bit( DCU_780_4, 16 ))==1) {car8_door2=4;}
            if(Bit( DCU_780_4, 15 )==1) {car8_door2=8;}
        //    if((DCU_780_4&62471)==0){car8_door2=3;}
    }
    else
    {
        car8_door2=3;
    }   //  8车厢门2
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_5, 3 )==1) {car8_door3=0;}  //
            if(Bit( DCU_780_5, 2 )==1) {car8_door3=1;}
            if(Bit( DCU_780_5, 13)==1) {car8_door3=2;}
            if(Bit( DCU_780_5, 14 )==1) {car8_door3=6;}
            if(Bit( DCU_780_5, 11 )==1) {car8_door3=5;}
            if((Bit( DCU_780_5, 1 )||Bit( DCU_780_5, 16 ))==1) {car8_door3=4;}
            if(Bit( DCU_780_5, 15 )==1) {car8_door3=8;}
        //    if((DCU_780_5&62471)==0){car8_door3=3;}
    }
    else
    {
        car8_door3=3;
    }   //  8车厢门3
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_6, 3 )==1) {car8_door4=0;}  //
            if(Bit( DCU_780_6, 2 )==1) {car8_door4=1;}
            if(Bit( DCU_780_6, 13)==1) {car8_door4=2;}
            if(Bit( DCU_780_6, 14 )==1) {car8_door4=6;}
            if(Bit( DCU_780_6, 11 )==1) {car8_door4=5;}
            if((Bit( DCU_780_6, 1 )||Bit( DCU_780_6, 16 ))==1) {car8_door4=4;}
            if(Bit( DCU_780_6, 15 )==1) {car8_door4=8;}
         //   if((DCU_780_6&62471)==0){car8_door4=3;}
    }
    else
    {
        car8_door4=3;
    }   //  8车厢门4
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_7, 3 )==1) {car8_door5=0;}  //
            if(Bit( DCU_780_7, 2 )==1) {car8_door5=1;}
            if(Bit( DCU_780_7, 13)==1) {car8_door5=2;}
            if(Bit( DCU_780_7, 14 )==1) {car8_door5=6;}
            if(Bit( DCU_780_7, 11 )==1) {car8_door5=5;}
            if((Bit( DCU_780_7, 1 )||Bit( DCU_780_7, 16 ))==1) {car8_door5=4;}
            if(Bit( DCU_780_7, 15 )==1) {car8_door5=8;}
         //   if((DCU_780_7&62471)==0){car8_door5=3;}
    }
    else
    {
        car8_door5=3;
    }   //  8车厢门5
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_8, 3 )==1) {car8_door6=0;}  //
            if(Bit( DCU_780_8, 2 )==1) {car8_door6=1;}
            if(Bit( DCU_780_8, 13)==1) {car8_door6=2;}
            if(Bit( DCU_780_8, 14 )==1) {car8_door6=6;}
            if(Bit( DCU_780_8, 11 )==1) {car8_door6=5;}
            if((Bit( DCU_780_8, 1 )||Bit( DCU_780_8, 16 ))==1) {car8_door6=4;}
            if(Bit( DCU_780_8, 15 )==1) {car8_door6=8;}
        //    if((DCU_780_8&62471)==0){car8_door6=3;}
    }
    else
    {
        car8_door6=3;
    }   //  8车厢门6
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_9, 3 )==1) {car8_door7=0;}  //
            if(Bit( DCU_780_9, 2 )==1) {car8_door7=1;}
            if(Bit( DCU_780_9, 13)==1) {car8_door7=2;}
            if(Bit( DCU_780_9, 14 )==1) {car8_door7=6;}
            if(Bit( DCU_780_9, 11 )==1) {car8_door7=5;}
            if((Bit( DCU_780_9, 1 )||Bit( DCU_780_9, 16 ))==1) {car8_door7=4;}
            if(Bit( DCU_780_9, 15 )==1) {car8_door7=8;}
        //    if((DCU_780_9&62471)==0){car8_door7=3;}
    }
    else
    {
        car8_door7=3;
    }   //  8车厢门7
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_10, 3 )==1) {car8_door8=0;}  //
            if(Bit( DCU_780_10, 2 )==1) {car8_door8=1;}
            if(Bit( DCU_780_10, 13)==1) {car8_door8=2;}
            if(Bit( DCU_780_10, 14 )==1) {car8_door8=6;}
            if(Bit( DCU_780_10, 11 )==1) {car8_door8=5;}
            if((Bit( DCU_780_10, 1 )||Bit( DCU_780_10, 16 ))==1) {car8_door8=4;}
            if(Bit( DCU_780_10, 15 )==1) {car8_door8=8;}
       //     if((DCU_780_10&62471)==0){car8_door8=3;}
    }
    else
    {
        car8_door8=3;
    }   //  8车厢门8

    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_11, 4 )==1) {car8_door9=0;}  //
            if(Bit( DCU_780_11, 3 )==1) {car8_door9=1;}
            if(Bit( DCU_780_11, 15)==1) {car8_door9=2;}
            if(Bit( DCU_780_11, 11 )==1) {car8_door9=6;}
            if(Bit( DCU_780_11, 14 )==1) {car8_door9=5;}
            if((Bit( DCU_780_11, 1 )||Bit( DCU_780_11, 2 ))==1) {car8_door9=4;}
            if(Bit( DCU_780_11, 16 )==1) {car8_door9=8;}
       //     if((DCU_780_11&58383)==0){car8_door9=3;}
    }
    else
    {
        car8_door9=3;
    }   //  8车厢门9
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
        if(Bit( DCU_780_12, 4 )==1) {car8_door10=0;}  //
        if(Bit( DCU_780_12, 3 )==1) {car8_door10=1;}
        if(Bit( DCU_780_12, 15)==1) {car8_door10=2;}
        if(Bit( DCU_780_12, 11 )==1) {car8_door10=6;}
        if(Bit( DCU_780_12, 14 )==1) {car8_door10=5;}
        if((Bit( DCU_780_12, 1 )||Bit( DCU_780_12, 2 ))==1) {car8_door10=4;}
        if(Bit( DCU_780_12, 16 )==1) {car8_door10=8;}
    //    if((DCU_780_12&58383)==0){car8_door10=3;}
    }
    else
    {
        car8_door10=3;
    }   //  8车厢门10


    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
   if ( (Bit(DCU_OLD_710_11,12)==0 ) && (Bit(DCU_OLD_790_11,12) ==0) )
   {
        car1_door9= 3;
   }

   if ( (Bit(DCU_OLD_710_12,12)==0 ) && (Bit(DCU_OLD_790_12,12)==0 ))
   {
       car1_door10= 3;
   }


   if ( (Bit(DCU_OLD_710_3,9)==0 ) && (Bit(DCU_OLD_790_3,9) ==0) )
   {
       car1_door1= 3;
   }

   if ( (Bit(DCU_OLD_710_4,9) ==0) && (Bit(DCU_OLD_790_4,9)==0 ))
   {
       car1_door2 = 3;
   }

   if ( (Bit(DCU_OLD_710_5,9) ==0) && (Bit(DCU_OLD_790_5,9) ==0)  )
   {
       car1_door3 = 3;
   }

   if ( (Bit(DCU_OLD_710_6,9)==0 ) && (Bit(DCU_OLD_790_6,9)==0 ) )
   {
       car1_door4 = 3;
   }

   if ( (Bit(DCU_OLD_710_7,9)==0 ) && (Bit(DCU_OLD_790_7,9)==0 ) )
   {
       car1_door5 = 3;
   }

   if ( (Bit(DCU_OLD_710_8,9) ==0) && (Bit(DCU_OLD_790_8,9)==0 ) )
   {
       car1_door6 = 3;
   }

   if ( (Bit(DCU_OLD_710_9,9)==0 ) && (Bit(DCU_OLD_790_9,9) ==0) )
   {
       car1_door7 = 3;
   }

   if ( (Bit(DCU_OLD_710_10,9) ==0) && (Bit(DCU_OLD_790_10,9) ==0))
   {
       car1_door8 = 3;
   }


   if ( (Bit(DCU_OLD_720_3,9) ==0) && (Bit(DCU_OLD_7A0_3,9)==0 ) )
   {
       car2_door1 = 3;
   }

   if ( (Bit(DCU_OLD_720_4,9) ==0) && (Bit(DCU_OLD_7A0_4,9) ==0))
   {
       car2_door2 = 3;
   }

   if ( (Bit(DCU_OLD_720_5,9)==0 ) && (Bit(DCU_OLD_7A0_5,9)==0 ) )
   {
       car2_door3 = 3;
   }

   if ( (Bit(DCU_OLD_720_6,9)==0 ) && (Bit(DCU_OLD_7A0_6,9)==0 ) )
   {
       car2_door4 = 3;
   }

   if ( (Bit(DCU_OLD_720_7,9) ==0) && (Bit(DCU_OLD_7A0_7,9) ==0)  )
   {
       car2_door5 = 3;
   }

   if ( (Bit(DCU_OLD_720_8,9)==0 ) && (Bit(DCU_OLD_7A0_8,9)==0 ) )
   {
       car2_door6 = 3;
   }

   if ( (Bit(DCU_OLD_720_9,9) ==0) && (Bit(DCU_OLD_7A0_9,9) ==0) )
   {
       car2_door7 = 3;
   }

   if ( (Bit(DCU_OLD_720_10,9) ==0) && (Bit(DCU_OLD_7A0_10,9)==0 ))
   {
       car2_door8 = 3;
   }

   if ( (Bit(DCU_OLD_730_3,9)==0 ) && (Bit(DCU_OLD_7B0_3,9) ==0))
   {
       car3_door1 = 3;
   }

   if ( (Bit(DCU_OLD_730_4,9) ==0) && (Bit(DCU_OLD_7B0_4,9) ==0))
   {
       car3_door2 = 3;
   }

   if ( (Bit(DCU_OLD_730_5,9) ==0) && (Bit(DCU_OLD_7B0_5,9) ==0) )
   {
       car3_door3 = 3;
   }

   if ( (Bit(DCU_OLD_730_6,9) ==0) && (Bit(DCU_OLD_7B0_6,9) ==0)  )
   {
       car3_door4 = 3;
   }

   if ( (Bit(DCU_OLD_730_7,9) ==0) && (Bit(DCU_OLD_7B0_7,9) ==0)  )
   {
       car3_door5 = 3;
   }

   if ( (Bit(DCU_OLD_730_8,9) ==0) && (Bit(DCU_OLD_7B0_8,9)==0 ) )
   {
       car3_door6 = 3;
   }

   if ( (Bit(DCU_OLD_730_9,9) ==0) && (Bit(DCU_OLD_7B0_9,9)==0 ))
   {
       car3_door7 = 3;
   }

   if ( (Bit(DCU_OLD_730_10,9)==0 ) && (Bit(DCU_OLD_7B0_10,9) ==0))
   {
       car3_door8 = 3;
   }


   if ( (Bit(DCU_OLD_740_3,9) ==0) && (Bit(DCU_OLD_7C0_3,9) ==0))
   {
       car4_door1 = 3;
   }

   if ( (Bit(DCU_OLD_740_4,9) ==0) && (Bit(DCU_OLD_7C0_4,9) ==0))
   {
       car4_door2 = 3;
   }

   if ( (Bit(DCU_OLD_740_5,9) ==0) && (Bit(DCU_OLD_7C0_5,9) ==0)  )
   {
       car4_door3 = 3;
   }

   if ( (Bit(DCU_OLD_740_6,9) ==0) && (Bit(DCU_OLD_7C0_6,9) ==0) )
   {
       car4_door4 = 3;
   }

   if ( (Bit(DCU_OLD_740_7,9)==0 ) && (Bit(DCU_OLD_7C0_7,9) ==0) )
   {
       car4_door5 = 3;
   }

   if ( (Bit(DCU_OLD_740_8,9) ==0) && (Bit(DCU_OLD_7C0_8,9)==0 ))
   {
       car4_door6 = 3;
   }

   if ( (Bit(DCU_OLD_740_9,9) ==0) && (Bit(DCU_OLD_7C0_9,9) ==0) )
   {
       car4_door7 = 3;
   }

   if ( (Bit(DCU_OLD_740_10,9) ==0) && (Bit(DCU_OLD_7C0_10,9) ==0))
   {
       car4_door8 = 3;
   }

   if ( (Bit(DCU_OLD_750_3,9) ==0) && (Bit(DCU_OLD_7D0_3,9)==0 ) )
   {
       car5_door1 = 3;
   }

   if ( (Bit(DCU_OLD_750_4,9) ==0) && (Bit(DCU_OLD_7D0_4,9) ==0))
   {
       car5_door2 = 3;
   }

   if ( (Bit(DCU_OLD_750_5,9) ==0) && (Bit(DCU_OLD_7D0_5,9) ==0)  )
   {
       car5_door3 = 3;
   }

   if ( (Bit(DCU_OLD_750_6,9) ==0) && (Bit(DCU_OLD_7D0_6,9) ==0) )
   {
       car5_door4 = 3;
   }

   if ( (Bit(DCU_OLD_750_7,9)==0) && (Bit(DCU_OLD_7D0_7,9) ==0)  )
   {
       car5_door5 = 3;
   }

   if ( (Bit(DCU_OLD_750_8,9)==0 ) && (Bit(DCU_OLD_7D0_8,9) ==0) )
   {
       car5_door6 = 3;
   }

   if ( (Bit(DCU_OLD_750_9,9) ==0) && (Bit(DCU_OLD_7D0_9,9)==0 ))
   {
       car5_door7 = 3;
   }

   if ( (Bit(DCU_OLD_750_10,9) ==0) && (Bit(DCU_OLD_7D0_10,9) ==0))
   {
       car5_door8 = 3;
   }


   if ( (Bit(DCU_OLD_760_3,9)==0 ) && (Bit(DCU_OLD_7E0_3,9)==0 ) )
   {
       car6_door1 = 3;
   }

   if ( (Bit(DCU_OLD_760_4,9) ==0) && (Bit(DCU_OLD_7E0_4,9)==0 ))
   {
       car6_door2 = 3;
   }

   if ( (Bit(DCU_OLD_760_5,9)==0 ) && (Bit(DCU_OLD_7E0_5,9)==0 ) )
   {
       car6_door3 = 3;
   }

   if ( (Bit(DCU_OLD_760_6,9) ==0) && (Bit(DCU_OLD_7E0_6,9) ==0) )
   {
       car6_door4 = 3;
   }

   if ( (Bit(DCU_OLD_760_7,9) ==0) && (Bit(DCU_OLD_7E0_7,9)==0 ) )
   {
       car6_door5 = 3;
   }

   if ( (Bit(DCU_OLD_760_8,9)==0 ) && (Bit(DCU_OLD_7E0_8,9)==0 ) )
   {
       car6_door6 = 3;
   }

   if ( (Bit(DCU_OLD_760_9,9) ==0) && (Bit(DCU_OLD_7E0_9,9)==0 ) )
   {
       car6_door7 = 3;
   }

   if ( (Bit(DCU_OLD_760_10,9) ==0) && (Bit(DCU_OLD_7E0_10,9) ==0))
   {
       car6_door8 = 3;
   }


   if ( (Bit(DCU_OLD_770_3,9) ==0) && (Bit(DCU_OLD_7F0_3,9)==0 ) )
   {
       car7_door1 = 3;
   }

   if ( (Bit(DCU_OLD_770_4,9) ==0) && (Bit(DCU_OLD_7F0_4,9) ==0))
   {
       car7_door2 = 3;
   }

   if ( (Bit(DCU_OLD_770_5,9)==0 ) && (Bit(DCU_OLD_7F0_5,9) ==0) )
   {
       car7_door3 = 3;
   }

   if ( (Bit(DCU_OLD_770_6,9) ==0) && (Bit(DCU_OLD_7F0_6,9) ==0)  )
   {
       car7_door4 = 3;
   }

   if ( (Bit(DCU_OLD_770_7,9) ==0) &&(Bit(DCU_OLD_7F0_7,9) ==0)  )
   {
       car7_door5 = 3;
   }

   if ( (Bit(DCU_OLD_770_8,9) ==0) && (Bit(DCU_OLD_7F0_8,9)==0 ))
   {
       car7_door6 = 3;
   }

   if ( (Bit(DCU_OLD_770_9,9) ==0) && (Bit(DCU_OLD_7F0_9,9) ==0) )
   {
       car7_door7 = 3;
   }

   if ( (Bit(DCU_OLD_770_10,9)==0 ) && (Bit(DCU_OLD_7F0_10,9) ==0))
   {
       car7_door8 = 3;
   }


   if ( (Bit(DCU_OLD_780_3,9)==0 ) && (Bit(DCU_OLD_700_3,9) ==0))
   {
       car8_door1 = 3;
   }

   if ( (Bit(DCU_OLD_780_4,9) ==0) && (Bit(DCU_OLD_700_4,9)==0 ))
   {
       car8_door2 = 3;
   }

   if ( (Bit(DCU_OLD_780_5,9) ==0) && (Bit(DCU_OLD_700_5,9)==0 )  )
   {
       car8_door3 = 3;
   }

   if ( (Bit(DCU_OLD_780_6,9) ==0) && (Bit(DCU_OLD_700_6,9) ==0)  )
   {
       car8_door4 = 3;
   }

   if ( (Bit(DCU_OLD_780_7,9)==0 ) && (Bit(DCU_OLD_700_7,9) ==0) )
   {
       car8_door5 = 3;
   }

   if ( (Bit(DCU_OLD_780_8,9) ==0) && (Bit(DCU_OLD_700_8,9)==0 ) )
   {
       car8_door6 = 3;
   }

   if ( (Bit(DCU_OLD_780_9,9) ==0) && (Bit(DCU_OLD_700_9,9) ==0) )
   {
       car8_door7 = 3;
   }

   if ( (Bit(DCU_OLD_780_10,9) ==0) && (Bit(DCU_OLD_700_10,9) ==0))
   {
       car8_door8 = 3;
   }


   if ( (Bit(DCU_OLD_780_11,12) ==0) && (Bit(DCU_OLD_700_11,12) ==0) )
   {
       car8_door9 = 3;
   }

   if ( (Bit(DCU_OLD_780_12,12) ==0) && (Bit(DCU_OLD_700_12,12)==0 ))
   {
       car8_door10 = 3;
   }*/
    //1车厢
    if(Bit(CCU_HMI_308_8,8)||Bit(CCU_HMI_308_8,7))
    {   //门1
        if(Bit(g_dataBuffer[3192],2)==1) car1_door1=8;//门隔离
        else if(Bit(g_dataBuffer[3192],3)==1) car1_door1=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3192],15)==1) car1_door1=5;//有严重故障
        else if(Bit(g_dataBuffer[3192],14)==1) car1_door1=7;//有轻微故障
        else if(Bit(g_dataBuffer[3192],1)==1) car1_door1=6;//有障碍物
        else if(Bit(g_dataBuffer[3192],4)==1) car1_door1=1;//门已开启
        else if(Bit(g_dataBuffer[3192],5)==1) car1_door1=0;//门已关好
        else car1_door1=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3193],2)==1) car1_door2=8;//门隔离
        else if(Bit(g_dataBuffer[3193],3)==1) car1_door2=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3193],15)==1) car1_door2=5;//有严重故障
        else if(Bit(g_dataBuffer[3193],14)==1) car1_door2=7;//有轻微故障
        else if(Bit(g_dataBuffer[3193],1)==1) car1_door2=6;//有障碍物
        else if(Bit(g_dataBuffer[3193],4)==1) car1_door2=1;//门已开启
        else if(Bit(g_dataBuffer[3193],5)==1) car1_door2=0;//门已关好
        else car1_door2=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3194],2)==1) car1_door3=8;//门隔离
        else if(Bit(g_dataBuffer[3194],3)==1) car1_door3=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3194],15)==1) car1_door3=5;//有严重故障
        else if(Bit(g_dataBuffer[3194],14)==1) car1_door3=7;//有轻微故障
        else if(Bit(g_dataBuffer[3194],1)==1) car1_door3=6;//有障碍物
        else if(Bit(g_dataBuffer[3194],4)==1) car1_door3=1;//门已开启
        else if(Bit(g_dataBuffer[3194],5)==1) car1_door3=0;//门已关好
        else car1_door3=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3195],2)==1) car1_door4=8;//门隔离
        else if(Bit(g_dataBuffer[3195],3)==1) car1_door4=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3195],15)==1) car1_door4=5;//有严重故障
        else if(Bit(g_dataBuffer[3195],14)==1) car1_door4=7;//有轻微故障
        else if(Bit(g_dataBuffer[3195],1)==1) car1_door4=6;//有障碍物
        else if(Bit(g_dataBuffer[3195],4)==1) car1_door4=1;//门已开启
        else if(Bit(g_dataBuffer[3195],5)==1) car1_door4=0;//门已关好
        else car1_door4=2;//门动作中改为无效状态


    }
    else
    {
         car1_door1=3;//通信异常
         car1_door2=3;
         car1_door3=3;
         car1_door4=3;
    }
//2车厢
    if(Bit(CCU_HMI_308_8,6)||Bit(CCU_HMI_308_8,5))
    {
        if(Bit(g_dataBuffer[3240],2)==1) car2_door1=8;//门隔离
        else if(Bit(g_dataBuffer[3240],3)==1) car2_door1=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3240],15)==1) car2_door1=5;//有严重故障
        else if(Bit(g_dataBuffer[3240],14)==1) car2_door1=7;//有轻微故障
        else if(Bit(g_dataBuffer[3240],1)==1) car2_door1=6;//有障碍物
        else if(Bit(g_dataBuffer[3240],4)==1) car2_door1=1;//门已开启
        else if(Bit(g_dataBuffer[3240],5)==1) car2_door1=0;//门已关好
        else car2_door1=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3241],2)==1) car2_door2=8;//门隔离
        else if(Bit(g_dataBuffer[3241],3)==1) car2_door2=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3241],15)==1) car2_door2=5;//有严重故障
        else if(Bit(g_dataBuffer[3241],14)==1) car2_door2=7;//有轻微故障
        else if(Bit(g_dataBuffer[3241],1)==1) car2_door2=6;//有障碍物
        else if(Bit(g_dataBuffer[3241],4)==1) car2_door2=1;//门已开启
        else if(Bit(g_dataBuffer[3241],5)==1) car2_door2=0;//门已关好
        else car2_door2=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3242],2)==1) car2_door3=8;//门隔离
        else if(Bit(g_dataBuffer[3242],3)==1) car2_door3=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3242],15)==1) car2_door3=5;//有严重故障
        else if(Bit(g_dataBuffer[3242],14)==1) car2_door3=7;//有轻微故障
        else if(Bit(g_dataBuffer[3242],1)==1) car2_door3=6;//有障碍物
        else if(Bit(g_dataBuffer[3242],4)==1) car2_door3=1;//门已开启
        else if(Bit(g_dataBuffer[3242],5)==1) car2_door3=0;//门已关好
        else car2_door3=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3243],2)==1) car2_door4=8;//门隔离
        else if(Bit(g_dataBuffer[3243],3)==1) car2_door4=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3243],15)==1) car2_door4=5;//有严重故障
        else if(Bit(g_dataBuffer[3243],14)==1) car2_door4=7;//有轻微故障
        else if(Bit(g_dataBuffer[3243],1)==1) car2_door4=6;//有障碍物
        else if(Bit(g_dataBuffer[3243],4)==1) car2_door4=1;//门已开启
        else if(Bit(g_dataBuffer[3243],5)==1) car2_door4=0;//门已关好
        else car2_door4=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3244],2)==1) car2_door5=8;//门隔离
        else if(Bit(g_dataBuffer[3244],3)==1) car2_door5=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3244],15)==1) car2_door5=5;//有严重故障
        else if(Bit(g_dataBuffer[3244],14)==1) car2_door5=7;//有轻微故障
        else if(Bit(g_dataBuffer[3244],1)==1) car2_door5=6;//有障碍物
        else if(Bit(g_dataBuffer[3244],4)==1) car2_door5=1;//门已开启
        else if(Bit(g_dataBuffer[3244],5)==1) car2_door5=0;//门已关好
        else car2_door5=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3245],2)==1) car2_door6=8;//门隔离
        else if(Bit(g_dataBuffer[3245],3)==1) car2_door6=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3245],15)==1) car2_door6=5;//有严重故障
        else if(Bit(g_dataBuffer[3245],14)==1) car2_door6=7;//有轻微故障
        else if(Bit(g_dataBuffer[3245],1)==1) car2_door6=6;//有障碍物
        else if(Bit(g_dataBuffer[3245],4)==1) car2_door6=1;//门已开启
        else if(Bit(g_dataBuffer[3245],5)==1) car2_door6=0;//门已关好
        else car2_door6=2;//门动作中改为无效状态
    }
    else
    {
        car2_door1=3;//通信异常
        car2_door2=3;
        car2_door3=3;
        car2_door4=3;
        car2_door5=3;
        car2_door6=3;
    }
//3车厢
    if(Bit(CCU_HMI_308_8,4)||Bit(CCU_HMI_308_8,3))
    {
        if(Bit(g_dataBuffer[3288],2)==1) car3_door1=8;//门隔离
        else if(Bit(g_dataBuffer[3288],3)==1) car3_door1=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3288],15)==1) car3_door1=5;//有严重故障
        else if(Bit(g_dataBuffer[3288],14)==1) car3_door1=7;//有轻微故障
        else if(Bit(g_dataBuffer[3288],1)==1) car3_door1=6;//有障碍物
        else if(Bit(g_dataBuffer[3288],4)==1) car3_door1=1;//门已开启
        else if(Bit(g_dataBuffer[3288],5)==1) car3_door1=0;//门已关好
        else car3_door1=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3289],2)==1) car3_door2=8;//门隔离
        else if(Bit(g_dataBuffer[3289],3)==1) car3_door2=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3289],15)==1) car3_door2=5;//有严重故障
        else if(Bit(g_dataBuffer[3289],14)==1) car3_door2=7;//有轻微故障
        else if(Bit(g_dataBuffer[3289],1)==1) car3_door2=6;//有障碍物
        else if(Bit(g_dataBuffer[3289],4)==1) car3_door2=1;//门已开启
        else if(Bit(g_dataBuffer[3289],5)==1) car3_door2=0;//门已关好
        else car3_door2=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3290],2)==1) car3_door3=8;//门隔离
        else if(Bit(g_dataBuffer[3290],3)==1) car3_door3=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3290],15)==1) car3_door3=5;//有严重故障
        else if(Bit(g_dataBuffer[3290],14)==1) car3_door3=7;//有轻微故障
        else if(Bit(g_dataBuffer[3290],1)==1) car3_door3=6;//有障碍物
        else if(Bit(g_dataBuffer[3290],4)==1) car3_door3=1;//门已开启
        else if(Bit(g_dataBuffer[3290],5)==1) car3_door3=0;//门已关好
        else car3_door3=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3291],2)==1) car3_door4=8;//门隔离
        else if(Bit(g_dataBuffer[3291],3)==1) car3_door4=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3291],15)==1) car3_door4=5;//有严重故障
        else if(Bit(g_dataBuffer[3291],14)==1) car3_door4=7;//有轻微故障
        else if(Bit(g_dataBuffer[3291],1)==1) car3_door4=6;//有障碍物
        else if(Bit(g_dataBuffer[3291],4)==1) car3_door4=1;//门已开启
        else if(Bit(g_dataBuffer[3291],5)==1) car3_door4=0;//门已关好
        else car3_door4=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3292],2)==1) car3_door5=8;//门隔离
        else if(Bit(g_dataBuffer[3292],3)==1) car3_door5=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3292],15)==1) car3_door5=5;//有严重故障
        else if(Bit(g_dataBuffer[3292],14)==1) car3_door5=7;//有轻微故障
        else if(Bit(g_dataBuffer[3292],1)==1) car3_door5=6;//有障碍物
        else if(Bit(g_dataBuffer[3292],4)==1) car3_door5=1;//门已开启
        else if(Bit(g_dataBuffer[3292],5)==1) car3_door5=0;//门已关好
        else car3_door5=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3293],2)==1) car3_door6=8;//门隔离
        else if(Bit(g_dataBuffer[3293],3)==1) car3_door6=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3293],15)==1) car3_door6=5;//有严重故障
        else if(Bit(g_dataBuffer[3293],14)==1) car3_door6=7;//有轻微故障
        else if(Bit(g_dataBuffer[3293],1)==1) car3_door6=6;//有障碍物
        else if(Bit(g_dataBuffer[3293],4)==1) car3_door6=1;//门已开启
        else if(Bit(g_dataBuffer[3293],5)==1) car3_door6=0;//门已关好
        else car3_door6=2;//门动作中改为无效状态

    }
    else
    {
        car3_door1=3;
        car3_door2=3;
        car3_door3=3;
        car3_door4=3;
        car3_door5=3;
        car3_door6=3;
    }
//4车厢
    if(Bit(CCU_HMI_308_8,2)||Bit(CCU_HMI_308_8,1))
    {
        if(Bit(g_dataBuffer[3336],2)==1) car4_door1=8;//门隔离
        else if(Bit(g_dataBuffer[3336],3)==1) car4_door1=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3336],15)==1) car4_door1=5;//有严重故障
        else if(Bit(g_dataBuffer[3336],14)==1) car4_door1=7;//有轻微故障
        else if(Bit(g_dataBuffer[3336],1)==1) car4_door1=6;//有障碍物
        else if(Bit(g_dataBuffer[3336],4)==1) car4_door1=1;//门已开启
        else if(Bit(g_dataBuffer[3336],5)==1) car4_door1=0;//门已关好
        else car4_door1=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3337],2)==1) car4_door2=8;//门隔离
        else if(Bit(g_dataBuffer[3337],3)==1) car4_door2=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3337],15)==1) car4_door2=5;//有严重故障
        else if(Bit(g_dataBuffer[3337],14)==1) car4_door2=7;//有轻微故障
        else if(Bit(g_dataBuffer[3337],1)==1) car4_door2=6;//有障碍物
        else if(Bit(g_dataBuffer[3337],4)==1) car4_door2=1;//门已开启
        else if(Bit(g_dataBuffer[3337],5)==1) car4_door2=0;//门已关好
        else car4_door2=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3338],2)==1) car4_door3=8;//门隔离
        else if(Bit(g_dataBuffer[3338],3)==1) car4_door3=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3338],15)==1) car4_door3=5;//有严重故障
        else if(Bit(g_dataBuffer[3338],14)==1) car4_door3=7;//有轻微故障
        else if(Bit(g_dataBuffer[3338],1)==1) car4_door3=6;//有障碍物
        else if(Bit(g_dataBuffer[3338],4)==1) car4_door3=1;//门已开启
        else if(Bit(g_dataBuffer[3338],5)==1) car4_door3=0;//门已关好
        else car4_door3=2;//门动作中改为无效状态

        if(Bit(g_dataBuffer[3339],2)==1) car4_door4=8;//门隔离
        else if(Bit(g_dataBuffer[3339],3)==1) car4_door4=4;//门紧急解锁状态
        else if(Bit(g_dataBuffer[3339],15)==1) car4_door4=5;//有严重故障
        else if(Bit(g_dataBuffer[3339],14)==1) car4_door4=7;//有轻微故障
        else if(Bit(g_dataBuffer[3339],1)==1) car4_door4=6;//有障碍物
        else if(Bit(g_dataBuffer[3339],4)==1) car4_door4=1;//门已开启
        else if(Bit(g_dataBuffer[3339],5)==1) car4_door4=0;//门已关好
        else car4_door4=2;//门动作中改为无效状态
    }
   else
    {
   car4_door1=3;
   car4_door2=3;
   car4_door3=3;
   car4_door4=3;
    }

    //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
    if ((Bit(DI_110_1,9)  == 1)||(Bit(DI_180_1,9) == 1))
    {
        if (Bit(DI_180_1,9)  == 1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR1))->SetCtrlText(QSTR("32"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR3))->SetCtrlText(QSTR("31"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR5))->SetCtrlText(QSTR("30"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR7))->SetCtrlText(QSTR("29"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR1))->SetCtrlText(QSTR("28"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR3))->SetCtrlText(QSTR("27"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR5))->SetCtrlText(QSTR("26"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR7))->SetCtrlText(QSTR("25"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR1))->SetCtrlText(QSTR("24"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR3))->SetCtrlText(QSTR("23"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR5))->SetCtrlText(QSTR("22"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR7))->SetCtrlText(QSTR("21"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR1))->SetCtrlText(QSTR("20"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR3))->SetCtrlText(QSTR("19"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR5))->SetCtrlText(QSTR("18"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR7))->SetCtrlText(QSTR("17"));

            /*((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR1))->SetCtrlText(QSTR("16"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR3))->SetCtrlText(QSTR("15"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR5))->SetCtrlText(QSTR("14"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR7))->SetCtrlText(QSTR("13"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR1))->SetCtrlText(QSTR("12"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR3))->SetCtrlText(QSTR("11"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR5))->SetCtrlText(QSTR("10"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR7))->SetCtrlText(QSTR("9"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR1))->SetCtrlText(QSTR("8"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR3))->SetCtrlText(QSTR("7"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR5))->SetCtrlText(QSTR("6"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR7))->SetCtrlText(QSTR("5"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR8))->SetCtrlText(QSTR("4"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR6))->SetCtrlText(QSTR("3"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR4))->SetCtrlText(QSTR("2"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR2))->SetCtrlText(QSTR("1"));*/


            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR2))->SetCtrlText(QSTR("32"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR4))->SetCtrlText(QSTR("31"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR6))->SetCtrlText(QSTR("30"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR8))->SetCtrlText(QSTR("29"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR2))->SetCtrlText(QSTR("28"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR4))->SetCtrlText(QSTR("27"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR6))->SetCtrlText(QSTR("26"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR8))->SetCtrlText(QSTR("25"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR2))->SetCtrlText(QSTR("24"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR4))->SetCtrlText(QSTR("23"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR6))->SetCtrlText(QSTR("22"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR8))->SetCtrlText(QSTR("21"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR2))->SetCtrlText(QSTR("20"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR4))->SetCtrlText(QSTR("19"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR6))->SetCtrlText(QSTR("18"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR8))->SetCtrlText(QSTR("17"));

            /*((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR2))->SetCtrlText(QSTR("16"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR4))->SetCtrlText(QSTR("15"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR6))->SetCtrlText(QSTR("14"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR8))->SetCtrlText(QSTR("13"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR2))->SetCtrlText(QSTR("12"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR4))->SetCtrlText(QSTR("11"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR6))->SetCtrlText(QSTR("10"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR8))->SetCtrlText(QSTR("9"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR2))->SetCtrlText(QSTR("8"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR4))->SetCtrlText(QSTR("7"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR6))->SetCtrlText(QSTR("6"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR8))->SetCtrlText(QSTR("5"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR7))->SetCtrlText(QSTR("4"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR5))->SetCtrlText(QSTR("3"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR3))->SetCtrlText(QSTR("2"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR1))->SetCtrlText(QSTR("1"));*/
        }

        if (Bit(DI_110_1,9)  == 1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR1))->SetCtrlText(QSTR("1"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR3))->SetCtrlText(QSTR("2"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR5))->SetCtrlText(QSTR("3"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR7))->SetCtrlText(QSTR("4"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR1))->SetCtrlText(QSTR("5"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR3))->SetCtrlText(QSTR("6"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR5))->SetCtrlText(QSTR("7"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR7))->SetCtrlText(QSTR("8"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR1))->SetCtrlText(QSTR("9"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR3))->SetCtrlText(QSTR("10"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR5))->SetCtrlText(QSTR("11"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR7))->SetCtrlText(QSTR("12"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR1))->SetCtrlText(QSTR("13"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR3))->SetCtrlText(QSTR("14"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR5))->SetCtrlText(QSTR("15"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR7))->SetCtrlText(QSTR("16"));

            /*((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR1))->SetCtrlText(QSTR("17"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR3))->SetCtrlText(QSTR("18"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR5))->SetCtrlText(QSTR("19"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR7))->SetCtrlText(QSTR("20"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR1))->SetCtrlText(QSTR("21"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR3))->SetCtrlText(QSTR("22"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR5))->SetCtrlText(QSTR("23"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR7))->SetCtrlText(QSTR("24"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR1))->SetCtrlText(QSTR("25"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR3))->SetCtrlText(QSTR("26"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR5))->SetCtrlText(QSTR("27"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR7))->SetCtrlText(QSTR("28"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR8))->SetCtrlText(QSTR("29"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR6))->SetCtrlText(QSTR("30"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR4))->SetCtrlText(QSTR("31"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR2))->SetCtrlText(QSTR("32"));*/


            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR2))->SetCtrlText(QSTR("1"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR4))->SetCtrlText(QSTR("2"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR6))->SetCtrlText(QSTR("3"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR8))->SetCtrlText(QSTR("4"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR2))->SetCtrlText(QSTR("5"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR4))->SetCtrlText(QSTR("6"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR6))->SetCtrlText(QSTR("7"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR8))->SetCtrlText(QSTR("8"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR2))->SetCtrlText(QSTR("9"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR4))->SetCtrlText(QSTR("10"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR6))->SetCtrlText(QSTR("11"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR8))->SetCtrlText(QSTR("12"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR2))->SetCtrlText(QSTR("13"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR4))->SetCtrlText(QSTR("14"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR6))->SetCtrlText(QSTR("15"));
            //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR8))->SetCtrlText(QSTR("16"));

            /*((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR2))->SetCtrlText(QSTR("17"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR4))->SetCtrlText(QSTR("18"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR6))->SetCtrlText(QSTR("19"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR8))->SetCtrlText(QSTR("20"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR2))->SetCtrlText(QSTR("21"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR4))->SetCtrlText(QSTR("22"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR6))->SetCtrlText(QSTR("23"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR8))->SetCtrlText(QSTR("24"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR2))->SetCtrlText(QSTR("25"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR4))->SetCtrlText(QSTR("26"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR6))->SetCtrlText(QSTR("27"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR8))->SetCtrlText(QSTR("28"));

            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR7))->SetCtrlText(QSTR("29"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR5))->SetCtrlText(QSTR("30"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR3))->SetCtrlText(QSTR("31"));
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR1))->SetCtrlText(QSTR("32"));*/
        }
    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR1))->SetCtrlText(QSTR("1"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR3))->SetCtrlText(QSTR("2"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR5))->SetCtrlText(QSTR("3"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR7))->SetCtrlText(QSTR("4"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR1))->SetCtrlText(QSTR("5"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR3))->SetCtrlText(QSTR("6"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR5))->SetCtrlText(QSTR("7"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR7))->SetCtrlText(QSTR("8"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR1))->SetCtrlText(QSTR("9"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR3))->SetCtrlText(QSTR("10"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR5))->SetCtrlText(QSTR("11"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR7))->SetCtrlText(QSTR("12"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR1))->SetCtrlText(QSTR("13"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR3))->SetCtrlText(QSTR("14"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR5))->SetCtrlText(QSTR("15"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR7))->SetCtrlText(QSTR("16"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR1))->SetCtrlText(QSTR("17"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR3))->SetCtrlText(QSTR("18"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR5))->SetCtrlText(QSTR("19"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR7))->SetCtrlText(QSTR("20"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR1))->SetCtrlText(QSTR("21"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR3))->SetCtrlText(QSTR("22"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR5))->SetCtrlText(QSTR("23"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR7))->SetCtrlText(QSTR("24"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR1))->SetCtrlText(QSTR("25"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR3))->SetCtrlText(QSTR("26"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR5))->SetCtrlText(QSTR("27"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR7))->SetCtrlText(QSTR("28"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR8))->SetCtrlText(QSTR("29"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR6))->SetCtrlText(QSTR("30"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR4))->SetCtrlText(QSTR("31"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR2))->SetCtrlText(QSTR("32"));


//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR2))->SetCtrlText(QSTR("1"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR4))->SetCtrlText(QSTR("2"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR6))->SetCtrlText(QSTR("3"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1DOOR8))->SetCtrlText(QSTR("4"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR2))->SetCtrlText(QSTR("5"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR4))->SetCtrlText(QSTR("6"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR6))->SetCtrlText(QSTR("7"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2DOOR8))->SetCtrlText(QSTR("8"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR2))->SetCtrlText(QSTR("9"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR4))->SetCtrlText(QSTR("10"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR6))->SetCtrlText(QSTR("11"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DOOR8))->SetCtrlText(QSTR("12"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR2))->SetCtrlText(QSTR("13"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR4))->SetCtrlText(QSTR("14"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR6))->SetCtrlText(QSTR("15"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DOOR8))->SetCtrlText(QSTR("16"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR2))->SetCtrlText(QSTR("17"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR4))->SetCtrlText(QSTR("18"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR6))->SetCtrlText(QSTR("19"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DOOR8))->SetCtrlText(QSTR("20"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR2))->SetCtrlText(QSTR("21"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR4))->SetCtrlText(QSTR("22"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR6))->SetCtrlText(QSTR("23"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DOOR8))->SetCtrlText(QSTR("24"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR2))->SetCtrlText(QSTR("25"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR4))->SetCtrlText(QSTR("26"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR6))->SetCtrlText(QSTR("27"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7DOOR8))->SetCtrlText(QSTR("28"));

//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR7))->SetCtrlText(QSTR("29"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR5))->SetCtrlText(QSTR("30"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR3))->SetCtrlText(QSTR("31"));
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8DOOR1))->SetCtrlText(QSTR("32"));
//    }



    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR9,car1_door9);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR10,car1_door10);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR1,car1_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR2,car1_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR3,car1_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR4,car1_door4);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR5,car1_door5);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR6,car1_door6);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR7,car1_door7);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR8,car1_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR1,car2_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR2,car2_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR3,car2_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR4,car2_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR5,car2_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR6,car2_door6);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR7,car2_door7);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR8,car2_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR1,car3_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR2,car3_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR3,car3_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR4,car3_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR5,car3_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR6,car3_door6);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR7,car3_door7);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR8,car3_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR1,car4_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR2,car4_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR3,car4_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR4,car4_door4);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR5,car4_door5);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR6,car4_door6);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR7,car4_door7);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR8,car4_door8);
    /*SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR1,car5_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR2,car5_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR3,car5_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR4,car5_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR5,car5_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR6,car5_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR7,car5_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR8,car5_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR1,car6_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR2,car6_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR3,car6_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR4,car6_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR5,car6_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR6,car6_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR7,car6_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR6DOOR8,car6_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR1,car7_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR2,car7_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR3,car7_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR4,car7_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR5,car7_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR6,car7_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR7,car7_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR7DOOR8,car7_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR1,car8_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR2,car8_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR3,car8_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR4,car8_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR5,car8_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR6,car8_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR7,car8_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR8,car8_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR9,car8_door9);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR10,car8_door10);*/
}



void CRunStatePage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL);

#endif

}

void CRunStatePage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetCtrlText(QString::number(udp_num));

#endif

}

//void CRunStatePage::UpdateContravariant()
void CRunStatePage::UpdateHighAcceMode()
{
//    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
//        {

//            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//      if (Bit(CCU_HMI_308_6, 6 )==1)
//          {
//          if ( (Bit( RIOM_111_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_510_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }
//      else if (Bit(CCU_HMI_308_7, 6 )==1)
//          { if ( (Bit( RIOM_141_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_520_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }

//        }
//      else
//          {
//              ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->HideLabel();
//          }

      if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
          {

              //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
        if (Bit(CCU_HMI_308_6, 6 )&&Bit( RIOM_111_14, 12 ) )
            {
                  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
            }
        else if (Bit(CCU_HMI_308_7, 6 )&&Bit( RIOM_141_14, 12 ) )
            {
                  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
            }
        else
              {
                  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->HideLabel();
              }
          }
        else
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_HIGHACCEMODE))->HideLabel();
            }

 }
//void CRunStatePage::UpdateTowMode()
void CRunStatePage::UpdateEmergencyMode()
{
    if (Bit(CCU_HMI_308_6, 8 )|| Bit(CCU_HMI_308_7, 8 ))
    {
            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
      if (Bit(CCU_HMI_308_6, 8 )&& Bit( RIOM_111_12, 2 ))
          {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
          }
      else if (Bit(CCU_HMI_308_7, 8 )&& Bit( RIOM_141_12, 2 ) )
          {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
          }
      else
          {
               ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_EMERGENCYMODE))->HideLabel();
          }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_EMERGENCYMODE))->HideLabel();
    }

}

void CRunStatePage::UpdateWashCarMode()
{
    //if(Bit(CCU_HMI_308_6,6)||Bit(CCU_HMI_308_7,6))//RIOM DI3在线
     if(Bit(CCU_HMI_308_9,16))
      {
           if(Bit(CCU_HMI_308_6,6)&&Bit( RIOM_111_14, 6 ))//RIOM DI3 在线
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
            }
            else
            {
                  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
            }
      }
//      else
//        {
//              ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
//        }
     else if(Bit(CCU_HMI_308_9,15))
      {
             if(Bit(CCU_HMI_308_7,6)&&Bit( RIOM_141_14, 6 ))
            {
                ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
            }
            else
            {
                  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
            }
      }
    else
     {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
     }

}


void CRunStatePage::UpdateEmergencyBroadcast()
{
//    if (reserve_hide)
//    {
//        ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->ShowButton();
//
//    }
//    else
//    {
//        ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->HideButton();
//    }
}
void CRunStatePage::SetCarTem(int lableId,int temperature)
{
    char buff[10] = {'\0'};
    sprintf(buff, "%d", temperature);
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString(buff).append(QSTR("℃")));
}
void CRunStatePage::SetHVAC_mode(int lableId, QString modeValue)
{

    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(modeValue);


}
void CRunStatePage::SetCommInterruptLabelColor(int id, int colorVal)
{


    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;


}


void CRunStatePage::SetDoorLabelColor(int id, int colorVal)
{
    if (0 == colorVal )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,0,255));
    }
    else if (7 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
    }
    else if (8 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetLabelState(8);
    }
    return;
}

void CRunStatePage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

void CRunStatePage::SetCompressorStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetTCUStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {

    }((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);

    return;
}

void CRunStatePage::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetWarningLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetASPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetPlaceStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("(P)"));
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::green);
    }
    else if (2 == colorVal)
    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);

    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);

    }
    return;
}

void CRunStatePage::SetBCUSeparaterLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if(2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetNETModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetATOModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }

    return;
}

//void CRunStatePage::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}
void CRunStatePage::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void CRunStatePage::OnRealTimeFaultsWarnningIconClk()
{

    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CRunStatePage::UpdateTcu_Enable()
{
    //if (1 == Bit(DI_110_1,16) )
    if (1 == Bit(TCU_518_8,8) )
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(TCU_528_8,8) )
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->HideLabel();

    }
}

void CRunStatePage::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetKauxLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    return;
}

void CRunStatePage::UpdateRidingRate()
{
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(ERM_210_14%256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(ERM_210_14/256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(ERM_210_15%256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(ERM_210_15/256).append(" %"));
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_13/256).append(" %"));
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_14%256).append(" %"));
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_14/256).append(" %"));
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_15%256).append(" %"));


}

void CRunStatePage::UpdateFAS_status_Hide()
{

//        if(Bit(FAS_B10_2,7)||Bit(FAS_B10_2,3)||Bit(FAS_B10_2,15)||Bit(FAS_B10_2,11)||Bit(FAS_B10_3,7)||Bit(FAS_B10_3,3)||Bit(FAS_B10_3,15)||Bit(FAS_B10_3,11)||Bit(FAS_B10_4,7)||Bit(FAS_B10_4,3)||Bit(FAS_B10_4,15)||Bit(FAS_B10_4,11)
//         ||Bit(FAS_B10_5,7)||Bit(FAS_B10_5,3)||Bit(FAS_B10_5,15)||Bit(FAS_B10_5,11)||Bit(FAS_B10_6,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_6,15)||Bit(FAS_B10_6,11)||Bit(FAS_B10_7,7)||Bit(FAS_B10_7,3)||Bit(FAS_B10_7,15)||Bit(FAS_B10_7,11)
//         ||Bit(FAS_B10_8,7)||Bit(FAS_B10_8,3)||Bit(FAS_B10_8,15)||Bit(FAS_B10_8,11)||Bit(FAS_B10_9,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_9,15)||Bit(FAS_B10_9,11)||Bit(FAS_B10_10,7)||Bit(FAS_B10_10,3)||Bit(FAS_B10_10,15)||Bit(FAS_B10_10,11)
//         ||Bit(FAS_B10_11,7)||Bit(FAS_B10_11,3)||Bit(FAS_B10_11,15)||Bit(FAS_B10_11,11)||Bit(FAS_B10_12,7)||Bit(FAS_B10_12,3)||Bit(FAS_B10_12,15)||Bit(FAS_B10_12,11)||Bit(FAS_B10_13,7)||Bit(FAS_B10_13,3)||Bit(FAS_B10_13,15)||Bit(FAS_B10_13,11)
//         ||Bit(FAS_B10_14,7)||Bit(FAS_B10_14,3))
    if(Bit(FAS_Master_Bi0_3,9)||Bit(FAS_Master_Bi0_4,1)||Bit(FAS_Master_Bi0_4,9)||Bit(FAS_Master_Bi0_5,1)||Bit(FAS_Master_Bi0_5,9)||Bit(FAS_Master_Bi0_6,1)||Bit(FAS_Master_Bi0_6,9)||Bit(FAS_Master_Bi0_7,1)||Bit(FAS_Master_Bi0_7,9)||Bit(FAS_Master_Bi0_8,1)
        ||Bit(FAS_Master_Bi0_8,9)||Bit(FAS_Master_Bi0_9,1)||Bit(FAS_Master_Bi0_9,9)||Bit(FAS_Master_Bi0_10,1)||Bit(FAS_Master_Bi0_10,9)||Bit(FAS_Master_Bi0_11,1)||Bit(FAS_Master_Bi0_11,9)||Bit(FAS_Master_Bi0_12,1)||Bit(FAS_Master_Bi0_12,9)||Bit(FAS_Master_Bi0_13,1))
    {
             ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_FAS_status))->ShowLabel();
        }
        else
        {
             ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_FAS_status))->HideLabel();
        }


}
void CRunStatePage::UpdateByPass_Hide()
{

//    if (Bit( DI_110_3, 1 )||Bit( DI_110_5, 6 )|| Bit( DI_110_5, 7 )||Bit( DI_110_5, 8 ) ||Bit( DI_110_6, 9 )||Bit( DI_110_1, 3 )||Bit( DI_110_3, 14 )
//      ||Bit( DI_180_3, 1 )||Bit( DI_180_5, 6 )|| Bit( DI_180_5, 7 )||Bit( DI_180_5, 8 ) ||Bit( DI_180_6, 9 )||Bit( DI_180_1, 3 )||Bit( DI_180_3, 14 ))
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->ShowLabel();
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->HideLabel();
//    }

    int zerospeed_color1        = 0;
    int zerospeed_color2        = 0;
    int door_color1             = 0;
    int door_color2             = 0;
    int placeremit_color1       = 0;
    int placeremit_color2       = 0;
    int commonuseremit_color1   = 0;
    int commonuseremit_color2   = 0;
    int windpresslow_color1     = 0;
    int windpresslow_color2     = 0;
    int jjzdhl_color1           = 0;
    int jjzdhl_color2           = 0;
    int atpcut_color1           = 0;
    int atpcut_color2           = 0;
    int CommonBrakeAppBypass1   = 0;
    int CommonBrakeAppBypass2   = 0;
    int CommonBrakeAppBypass3   = 0;
    int CommonBrakeAppBypass4   = 0;
    int CommonBrakeAppBypass5   = 0;
    int CommonBrakeAppBypass6   = 0;
    int CommonBrakeAppBypass7   = 0;
    int CommonBrakeAppBypass8   = 0;
    int CommonBrakeRelBypass1   = 0;
    int CommonBrakeRelBypass2   = 0;
    //int A130A =0;//modify
    //CTHM_Tc1DI2On_B1	TC1车DI2在线
//    if ( (Bit(CCU_HMI_222_11, 14 ))== 1)
//    {
//        //DICT_TractionSafeLoopBypassMonitTci_B1   	牵引安全环路旁路监视
//        if (Bit( DI_110_3, 1 ) == 1)
//        {
//            zerospeed_color1 = 2;
//        }
//        else
//        {
//            zerospeed_color1 = 1;
//        }

//        if(Bit( DI_110_3, 14 )==1)
//        {
//            atccut_color1 = 2;
//        }
//        else
//        {
//            atccut_color1 = 1;
//        }
//    }
//    else
//    {
//        zerospeed_color1 = 0;
//        atccut_color1 = 0;

//    }
//    if ( (Bit(CCU_HMI_222_11, 13 ))== 1)
//    {
//        //DICT_BypassAllDoorsClosedTci_B1    门旁路
//        if (Bit( DI_110_5, 6 ) == 1)
//        {
//            door_color1 = 2;
//        }
//        else
//        {
//            door_color1 = 1;
//        }
//        //DICT_BypassAllPBreleasedTci_B1    旁路：停放制动缓解
//        if (Bit( DI_110_5, 7 ) == 1)
//        {
//            placeremit_color1 = 2;
//        }
//        else
//        {
//            placeremit_color1 = 1;
//        }
//        //DICT_BypassPneumaticSerBrakesTci_B1    旁路：常用制动施加
//        if (Bit( DI_110_5, 8 ) == 1)
//        {
//            commonuseremit_color1 = 2;
//        }
//        else
//        {
//            commonuseremit_color1 = 1;
//        }
//        //DICT_BypassMRpressureTci_B1    旁路：总风低压
//        if (Bit( DI_110_6, 9 ) == 1)
//        {
//            windpresslow_color1 = 2;
//        }
//        else
//        {
//            windpresslow_color1 = 1;
//        }
//        //DICT_BypassEmergencyLoopTci_B1    旁路：安全环路
//        if(Bit( DI_110_5, 5 )==1)
//        {
//            jjzdhl_color1 = 2;
//        }
//        else
//        {
//            jjzdhl_color1 = 1;
//        }

//    }
//    else
//    {
//        door_color1 = 0;
//        placeremit_color1 = 0;
//        commonuseremit_color1 = 0;
//        windpresslow_color1 = 0;
//        jjzdhl_color1 = 0;

//    }
//    if ( (Bit(CCU_HMI_222_11, 12 ))== 1)
//    {

//        if (Bit( DI_110_7, 9 ) == 1)
//        {
//            CommonBrakeAppBypass1 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass1 = 1;
//        }
//        //DICT_ CommonBrakeAppBypassSwitchMonitor Tci_B1    本车常用制动施加旁路开关监视
//        if (Bit( DI_110_7, 10 ) == 1)
//        {
//            CommonBrakeRelBypass1 = 2;
//        }
//        else
//        {
//            CommonBrakeRelBypass1 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass1 = 0;
//        CommonBrakeRelBypass1 = 0;
//    }



//    if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
//    {
//        if (Bit( DI_180_3, 1 ) == 1)
//        {
//            zerospeed_color2 = 2;
//        }
//        else
//        {
//            zerospeed_color2 = 1;
//        }

//        if(Bit( DI_180_3, 14 ) == 1)
//        {
//            atccut_color2 = 2;
//        }
//        else
//        {
//            atccut_color2=1;
//        }
//    }
//    else
//    {
//        zerospeed_color2 = 0;
//        atccut_color2 = 0;

//    }

//    if ( (Bit(CCU_HMI_222_15, 5 ))== 1)
//    {
//        if (Bit( DI_180_5, 6 ) == 1)
//        {
//            door_color2 = 2;
//        }
//        else
//        {
//            door_color2 = 1;
//        }
//        if (Bit( DI_180_5,7 ) == 1)
//        {
//            placeremit_color2 = 2;
//        }
//        else
//        {
//            placeremit_color2 = 1;
//        }
//        if (Bit( DI_180_5, 8 ) == 1)
//        {
//            commonuseremit_color2 = 2;
//        }
//        else
//        {
//            commonuseremit_color2 = 1;
//        }
//        if (Bit( DI_180_6, 9 ) == 1)
//        {
//            windpresslow_color2 = 2;
//        }
//        else
//        {
//            windpresslow_color2 = 1;
//        }
//        if(Bit( DI_180_5, 5 ) == 1)
//        {
//            jjzdhl_color2 = 2;
//        }
//        else
//        {
//            jjzdhl_color2=1;
//        }
//    }
//    else
//    {
//        door_color2 = 0;
//        placeremit_color2 = 0;
//        commonuseremit_color2 = 0;
//        windpresslow_color2 = 0;
//        jjzdhl_color2 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_15, 4 ))== 1)
//    {
//        if (Bit( DI_180_7, 9 ) == 1)
//        {
//            CommonBrakeAppBypass8 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass8 = 1;
//        }

//        if (Bit( DI_180_7, 10 ) == 1)
//        {
//            CommonBrakeRelBypass2 = 2;
//        }
//        else
//        {
//            CommonBrakeRelBypass2 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass8 = 0;
//        CommonBrakeRelBypass2 = 0;

//    }


//    if ( (Bit(CCU_HMI_222_12, 6 ))== 1)
//    {
//        if (Bit( DI_120_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass2 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass2 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass2 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_12, 14 ))== 1)
//    {
//        if (Bit( DI_130_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass3 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass3 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass3 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_13, 6 ))== 1)
//    {
//        if (Bit( DI_140_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass4 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass4 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass4 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_13, 14 ))== 1)
//    {
//        if (Bit( DI_150_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass5 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass5 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass5 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_14, 6 ))== 1)
//    {
//        if (Bit( DI_160_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass6 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass6 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass6 = 0;
//    }

//    if ( (Bit(CCU_HMI_222_14, 14 ))== 1)
//    {
//        if (Bit( DI_170_3, 4 ) == 1)
//        {
//            CommonBrakeAppBypass7 = 2;
//        }
//        else
//        {
//            CommonBrakeAppBypass7 = 1;
//        }
//    }
//    else
//    {
//        CommonBrakeAppBypass7 = 0;
//    }

    if ( (Bit(CCU_HMI_308_6, 6 ))== 1)
    {
        //DICT_TractionSafeLoopBypassMonitTci_B1   	牵引安全环路旁路监视－－制动不缓解旁路
        //if (Bit( DI_110_3, 1 ) == 1)
        if (Bit( RIOM_111_14, 15 ) == 1)
        {
            zerospeed_color1 = 2;
        }
        else
        {
            zerospeed_color1 = 1;
        }
        //DICT_BypassAllDoorsClosedTci_B1    门旁路－－停放制动旁路
        if (Bit( RIOM_111_14, 14 ) == 1)
        {
             placeremit_color1 = 2;
        }
        else
        {
            placeremit_color1 = 1;
        }
        //DICT_BypassAllPBreleasedTci_B1    旁路：停放制动缓解－－门安全线旁路
        if (Bit( RIOM_111_14, 13 ) == 1)
        {
             door_color1= 2;
        }
        else
        {
            door_color1 = 1;
        }
        //ATP切除
        if(Bit(RIOM_111_14, 3 )==1)
        {
            atpcut_color1 = 2;
        }
        else
        {
            atpcut_color1 = 1;
        }
    }
    else
    {
        zerospeed_color1 = 0;
        door_color1 = 0 ;
        placeremit_color1 = 0;
        atpcut_color1 = 0;
    }

    //if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
    if ( (Bit(CCU_HMI_308_7, 6 ))== 1)      //制动不缓解旁路
    {
        if(Bit( RIOM_141_14, 15 ) == 1)
        {
            zerospeed_color2 = 2;
        }
        else
        {
            zerospeed_color2 = 1;
        }
        if (Bit( RIOM_141_14, 14 ) == 1)    //停放制动旁路
        {
             placeremit_color2= 2;
        }
        else
        {
            placeremit_color2 = 1;
        }
        if (Bit( RIOM_141_14, 13 ) == 1)    //门安全线旁路
        {
            door_color2 = 2;
        }
        else
        {
            door_color2 = 1;
        }
//ATP切除
        if(Bit( RIOM_141_14, 3 ) == 1)
        {
            atpcut_color2 = 2;
        }
        else
        {
            atpcut_color2=1;
        }
    }
    else
    {
        zerospeed_color2 = 0;
        door_color2 = 0;
        placeremit_color2 = 0;
        atpcut_color2 = 0;
    }

//    if (Bit( zerospeed_color1, 2 )||Bit( zerospeed_color2, 2 )|| Bit( door_color1, 2 )||Bit( door_color2, 2 ) ||Bit( placeremit_color1, 2 )||Bit( placeremit_color2, 2 )||Bit( commonuseremit_color1, 2 )||Bit( commonuseremit_color2, 2 )||Bit( CommonBrakeRelBypass1, 2 )||Bit( CommonBrakeRelBypass2, 2)
//      ||Bit( CommonBrakeAppBypass1, 2 )||Bit( CommonBrakeAppBypass2, 2 )|| Bit( CommonBrakeAppBypass3, 2 )||Bit( CommonBrakeAppBypass4, 2 ) ||Bit( CommonBrakeAppBypass5, 2 )||Bit( CommonBrakeAppBypass6, 2 )||Bit( CommonBrakeAppBypass7, 2 )||Bit( CommonBrakeAppBypass8, 2 )
//      ||Bit( windpresslow_color1, 2 )||Bit( windpresslow_color2, 2 )|| Bit( jjzdhl_color1, 2 )||Bit( jjzdhl_color2, 2 ) ||Bit( atccut_color1, 2)||Bit( atccut_color2, 2 ))
        if (Bit( zerospeed_color1, 2 )||Bit( zerospeed_color2, 2 )|| Bit( door_color1, 2 )||Bit( door_color2, 2 ) ||Bit( placeremit_color1, 2 )||Bit( placeremit_color2, 2 ) ||Bit( atpcut_color1, 2)||Bit( atpcut_color2, 2 ))

    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->ShowLabel();
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->HideLabel();
    }


}

void CRunStatePage::UpdateDisEBTest()
{

    if(Bit(g_dataBuffer[2187] ,16) == 1)
    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DisEBTest))->ShowLabel();
    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DisEBTest))->HideLabel();
    }

}

void CRunStatePage::DrawRushromBtnCtrl(WORD nGuide1, WORD nGuide2)
{

if (nGuide1 == 1)
{
    if(nGuide2 == 1)
    {
        qDebug()<< "1 DOWM 2DOWM";
            ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN1))->ShowImage();
            ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN2))->ShowImage();
            ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP1))->HideImage();
            ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP2))->HideImage();

    }
    if(nGuide2 ==0)
    {
        qDebug()<< "1 DOWM 2UP";

        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN1))->ShowImage();
        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP2))->ShowImage();
        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP1))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN2))->HideImage();

    }

}else
 {

     if(nGuide2 == 1)
     {
         qDebug()<< "1 UP 2DOWM";

         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN2))->ShowImage();
         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP1))->ShowImage();
         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN1))->HideImage();
         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP2))->HideImage();
     }
     if(nGuide2 == 0)
     {
         qDebug()<< "1 UP 2UP";

         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP1))->ShowImage();
         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_UP2))->ShowImage();
         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN1))->HideImage();
         ((CImageCtrl*)GetDlgItem(ID_EMGY_BRK_BTN_DWN2))->HideImage();
     }
 }

}

