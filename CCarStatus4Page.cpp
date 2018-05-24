#include "CCarStatus4Page.h"

ROMDATA g_PicRom_CarStatus4[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QSTR("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEUP             },
#endif

#ifdef PAGE_HEADER_NEW
     D_COMMON_PAGE_HEADER_NEW_DL(QSTR("制动") )
    {"",                          D_FONT_BOLD(10),       QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBCARS2_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS2_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS2_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QSTR("车辆状态") )

        {QSTR("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS2_COMMINTERRUPT          },
        {QSTR("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QSTR(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_V                },

        {QSTR("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QSTR(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_A                },

        {QSTR("牵引*制动级位"),          D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QSTR(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TRACTIONMODEL    },

        {QSTR("速度"),                 D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QSTR(""),                    D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_SPEED            },

        {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCARS2_ICON_WARNNING          },
        {"",                          D_FONT_BOLD(5),      QRect(178, 110, 600,  60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCARS2_TRAIN                  },
        {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS2_ARROW_RIGHT            },
        {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS2_ARROW_LEFT             },

#endif


//  {"",                          D_FONT_BOLD(6),      QRect( 40, 180, 628,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 151, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 510, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 180-29,   1, 330+30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(100, 180-29,   1, 330+30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(250, 180-29,   1, 330+30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(400, 180-29,   1, 330+30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(550, 180-29,   1, 330+30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(700, 180-29,   1, 330+30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(475, 180-29,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(550, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(625, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(700, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {QSTR("车号"),                   D_FONT_BOLD(7),      QRect( 11, 152,  88,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),                   D_FONT_BOLD(8),      QRect( 101, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                   D_FONT_BOLD(8),      QRect( 251, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                   D_FONT_BOLD(8),      QRect( 401, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                   D_FONT_BOLD(8),      QRect( 551, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("电制动切除请求"),                 D_FONT_BOLD(7),      QRect( 11, 183, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("制动缸压力"),        D_FONT_BOLD(7),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("计算载重"),       D_FONT_BOLD(7),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("基准轴速度"),             D_FONT_BOLD(7),      QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("KIC状态"),              D_FONT_BOLD(6),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("KCCC状态"),             D_FONT_BOLD(6),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("IES状态"),             D_FONT_BOLD(6),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("主熔断器状态"),              D_FONT_BOLD(5),      QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("总风压力"),              D_FONT_BOLD(7),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("空簧压力"),             D_FONT_BOLD(7),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("保持制动"),             D_FONT_BOLD(7),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("停放制动"),              D_FONT_BOLD(7),      QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("牵引载重PWM"),             D_FONT_BOLD(6),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电制动反馈值PWM"),              D_FONT_BOLD(5),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("零速信号"),             D_FONT_BOLD(7),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("防滑系统"),              D_FONT_BOLD(7),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急制动"),              D_FONT_BOLD(7),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("空气制动"),              D_FONT_BOLD(5),      QRect( 11, 481, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("轴防滑"),              D_FONT_BOLD(7),      QRect( 11, 481, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    // {QSTR("广播状态"),              D_FONT_BOLD(6),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("1"),                   D_FONT_BOLD(6),      QRect(103, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("2"),                   D_FONT_BOLD(6),      QRect(178, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("3"),                   D_FONT_BOLD(6),      QRect(253, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("牵引安全"),          D_FONT_BOLD(8),      QRect(103, 183,  140, 24),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU_ENABLE1        },
    {QSTR(" "),                 D_FONT_BOLD(8),      QRect(253, 183,  140, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2EBCUTOUT        },
    {QSTR(" "),                 D_FONT_BOLD(8),      QRect(403, 183,  140, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3EBCUTOUT        },
//    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(328, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE        },
//    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(403, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE        },
//    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(478, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE        },
//    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(553, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE        },
    {QSTR("牵引安全"),          D_FONT_BOLD(8),      QRect(553, 183,  140, 24),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU_ENABLE2        },

    // 制动缸压力
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(105, 214,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1BCUPRESSURE1    },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(255, 214,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2BCUPRESSURE1     },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(405, 214,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3BCUPRESSURE1     },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(555, 214,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4BCUPRESSURE1     },
//    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(403, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE     },
//    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(478, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE     },
//    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE     },
//    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(628, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE     },

//{"",                       D_FONT_BOLD(6),      QRect(175, 270,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//{"",                       D_FONT_BOLD(6),      QRect(325, 270,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//{"",                       D_FONT_BOLD(6),      QRect(475, 270,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//{"",                       D_FONT_BOLD(6),      QRect(625, 270,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    //制动隔离
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(102, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1BCUSEPARATE1        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(177, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1BCUSEPARATE2        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(252, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2BCUSEPARATE1        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(327, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2BCUSEPARATE2        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(402, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3BCUSEPARATE1        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(477, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3BCUSEPARATE2        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(552, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4BCUSEPARATE1        },
//{QSTR(""),                 D_FONT_BOLD(8),      QRect(627, 274,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4BCUSEPARATE2        },
//基准轴速度
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1ABSPEED        },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(255, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2ABSPEED        },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(405, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3ABSPEED        },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 274,  140, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4ABSPEED        },


//空压机状态
//{QSTR(""),                 D_FONT_BOLD(6),      QRect(105, 245,  140,  23),           Qt::black,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1AIRCOMPRESSORSTATE         },
//{QSTR(""),                    D_FONT_BOLD(6),      QRect(255, 245,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QSTR(""),                    D_FONT_BOLD(6),      QRect(405, 245,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QSTR(""),                 D_FONT_BOLD(6),      QRect(555, 245,  140,  23),           Qt::black,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4AIRCOMPRESSORSTATE         },
//计算载重
{QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 245,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1LOADCAPACITY         },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(255, 245,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2LOADCAPACITY        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(405, 245,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3LOADCAPACITY        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 245,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4LOADCAPACITY         },

//总风压力
{QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 305,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS4_LABEL_CRA1MAINAIRPRESS         },
//{QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 305,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CRA2MAINAIRPRESS          },
//{QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 305,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CRA3MAINAIRPRESS          },
{QSTR(" -- -- "),                    D_FONT_BOLD(10),      QRect(255, 305,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE          },
{QSTR(" -- -- "),                    D_FONT_BOLD(10),      QRect(405, 305,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE          },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 305,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS4_LABEL_CRA4MAINAIRPRESS         },

    // 空簧压力
{"",                       D_FONT_BOLD(6),      QRect(175, 330,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(325, 330,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(475, 330,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(625, 330,   1, 31),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(102, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1ASPRESS1        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(177, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1ASPRESS2        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(252, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2ASPRESS1        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(327, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2ASPRESS2        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(402, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3ASPRESS1        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(477, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3ASPRESS2        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(552, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4ASPRESS1        },
{QSTR(""),                 D_FONT_BOLD(10),      QRect(627, 334,  70, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4ASPRESS2        },

//    // 整车制动切除
//     {QSTR(" "),              D_FONT_BOLD(8),      QRect(105, 365,  140,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR1IESSTATE        },
//     {QSTR(""),                 D_FONT_BOLD(8),      QRect(255, 365,  140,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2IESSTATE         },
//     {QSTR(""),                 D_FONT_BOLD(8),      QRect(405, 365,  140,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3IESSTATE         },
//     {QSTR(" "),                    D_FONT_BOLD(8),      QRect(555, 365,  140,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR4IESSTATE        },


//   //保持制动切除
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(105, 395,  140,  20),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2Mainfuse1         },
//    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(255, 395,  140,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(405, 395,  140,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(555, 395,  140,  20),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2Mainfuse2         },
    // 保持制动
     {QSTR(" "),              D_FONT_BOLD(8),      QRect(105, 365,  140,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1BRAVEKEEP        },
     {QSTR(""),                 D_FONT_BOLD(8),      QRect(255, 365,  140,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2BRAVEKEEP         },
     {QSTR(""),                 D_FONT_BOLD(8),      QRect(405, 365,  140,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3BRAVEKEEP         },
     {QSTR(" "),                    D_FONT_BOLD(8),      QRect(555, 365,  140,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4BRAVEKEEP        },


   //停放制动
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 395,  140,  20),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR1PLACESTATE         },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 395,  140,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR2PLACESTATE         },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 395,  140,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR3PLACESTATE         },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 395,  140,  20),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS4_LABEL_CAR4PLACESTATE         },

//    //牵引载重PWM
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(105, 425,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(255, 425,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_TCU1LOADPWM          },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(405, 425,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_TCU2LOADPWM          },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(555, 425,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_IGNORE         },

//    //电制动反馈值PWM
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(105, 455,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(255, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_FDBK1PWM          },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(405, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_FDBK2PWM          },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(555, 455,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_IGNORE         },

    //零速信号
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 425,  140,  23),           Qt::black,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS4_LABEL_ZREOSPEED1         },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 425,  140,  23),           Qt::black,                Qt::black,                CONTROL_LABEL,        ID_PIBCARS4_LABEL_ZREOSPEED2             },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 425,  140,  23),           Qt::black,                Qt::black,                CONTROL_LABEL,         ID_PIBCARS4_LABEL_ZREOSPEED3            },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 425,  140,  23),           Qt::black,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS4_LABEL_ZREOSPEED4         },

//    //防滑系统 暂时取消
//    {QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 455,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS4_LABEL_WSP1         },
//    {QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_WSP2          },
//    {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_WSP3          },
//    {QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 455,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS4_LABEL_WSP4         },
    //紧急制动线状态
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 455,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1         },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2          },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3          },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 455,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4         },

    //空气制动
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(105, 485,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS4_LABEL_AIRBRK1         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(255, 485,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_AIRBRK2          },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(405, 485,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_AIRBRK3          },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(555, 485,  140,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS4_LABEL_AIRBRK4         },
//轴防滑
{QSTR("1"),           D_FONT_BOLD(10),      QRect(103, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX1WSP1          },
{QSTR("2"),           D_FONT_BOLD(10),      QRect(140, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX2WSP1          },
{QSTR("3"),           D_FONT_BOLD(10),      QRect(177, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX3WSP1          },
{QSTR("4"),           D_FONT_BOLD(10),      QRect(214, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX4WSP1          },
{QSTR("1"),           D_FONT_BOLD(10),      QRect(253, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX1WSP2          },
{QSTR("2"),           D_FONT_BOLD(10),      QRect(290, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX2WSP2          },
{QSTR("3"),           D_FONT_BOLD(10),      QRect(327, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX3WSP2          },
{QSTR("4"),           D_FONT_BOLD(10),      QRect(364, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX4WSP2          },
{QSTR("1"),           D_FONT_BOLD(10),      QRect(403, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX1WSP3          },
{QSTR("2"),           D_FONT_BOLD(10),      QRect(440, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX2WSP3          },
{QSTR("3"),           D_FONT_BOLD(10),      QRect(477, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX3WSP3          },
{QSTR("4"),           D_FONT_BOLD(10),      QRect(514, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX4WSP3          },
{QSTR("1"),           D_FONT_BOLD(10),      QRect(553, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX1WSP4          },
{QSTR("2"),           D_FONT_BOLD(10),      QRect(590, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX2WSP4          },
{QSTR("3"),           D_FONT_BOLD(10),      QRect(627, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX3WSP4          },
{QSTR("4"),           D_FONT_BOLD(10),      QRect(664, 484,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS4_LABEL_AX4WSP4          },

//  //  {QSTR("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_ATOMODE               },
//    {QSTR("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_NETMODE               },
//    {QSTR("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CONTRAVARIANTMODE     },
//    {QSTR("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_WASHCARMODE           },
////    {QSTR("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),           Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBCARS2_BUTTON_EMERGENCYRESCUE      },


    //{QSTR("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_ATOMODE         },
    //{QSTR("网络模式"),          D_FONT_BOLD(8),      QRect(18, 500+20, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_NETMODE         },
    {QSTR("高加速模式"),          D_FONT_BOLD(8),      QRect(115, 500+20, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_HIGHACCEMODE         },
    {QSTR("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500+20, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_WASHCARMODE         },
    {QSTR("紧急运行模式"),          D_FONT_BOLD(8),      QRect(309, 500+20, 105,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS4_LABEL_EMERGENCYMODE         },
    //    {QSTR("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYRESCUE         },
    //    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST         },
    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(627, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_FASPAGE         },
      {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 520, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS4_BUTTON_EMERGENCYBROADCAST         },


//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEDOWN            },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEUP              },

};
int g_CarStatus4RomLen = sizeof(g_PicRom_CarStatus4)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCarStatus4Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)

        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#else
        ON_BTNCLK(  ID_PIBCARS2_BUTTON_PAGEUP, OnPageUpBtnClk)
        ON_BTNCLK(  ID_PIBCARS2_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif


    //    ON_BTNCLK(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS2_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBCARS2_BUTTON_FASPAGE, OnFASpageBtnClk)
        ON_BTNCLK(ID_PIBCARS4_BUTTON_EMERGENCYBROADCAST, OnEMERGENCYBROADCASTpageBtnClk)

END_MESSAGE_MAP()

CCarStatus4Page::CCarStatus4Page()
{
}

void CCarStatus4Page::OnUpdatePage()
{

    updateTrain(ID_PIBCARS2_TRAIN);
    updateArrow(ID_PIBCARS2_ARROW_LEFT,ID_PIBCARS2_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS2_TRAIN);//3.5

    //UpdateHSCB();
    //UpdateKIC();
    //UpdateKCCC();

    //UpdateDrawBCUForce();
    //UpdateDynamorev();
    //UpdateMainfuse();
    //UpdateIES();
    UpdateATOMode();

    UpdateNETMode();
    //UpdateContravariant();
    UpdateHighAcceMode();
    UpdateWashCarMode();
    UpdateEmergencyMode();
    //UpdateTowMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    UpdateTcu_Enable();
    //UpdateTCUStatus();
    UpdateBCUPressure();
    UpdateASPressure();
    UpdateMainAirPress();
    //UpdateCompressorStatus();
    //UpdateBCUSeparater();
    UpdateLoadCapacity();
    UpdateABSpeed();
    //UpdatePWM();
    UpdateZeroSpeed();
    //UpdateWSP();
    UpdateEBCutOutReq();
    UpdateAXWSP();
    //UpdateAirBrk();
    UpdateEBCircuitStatus();//紧急制动线状态
    UpdatePlaceStatus();
    UpdateBravekeepStatus();

#ifdef PAGE_HEADER_OLD
    //    UpdateEmergencyBroadcast();

    UpdateCommInterrupt(ID_PIBCARS2_COMMINTERRUPT);

    updateFault(ID_PIBCARS2_ICON_WARNNING);

#endif

}



void CCarStatus4Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS2_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif
//    ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EMERGENCYMODE))->SetBorderColor(Qt::white);

}

void CCarStatus4Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetButtonType(BUTTON_STATION1);
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("紧急广播"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void CCarStatus4Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CCarStatus4Page::OnEMERGENCYBROADCASTpageBtnClk()
{
    //pageback=4;
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus4Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus4Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus4Page::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS4);
    }

    void CCarStatus4Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus4Page::OnComBtn5Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS3);
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus4Page::OnComBtn6Clk()
    {
        //ChangePage(PAGE_INDEX_HVACSETTING);
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus4Page::OnComBtn7Clk()
    {
         //ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus4Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS4HELP);
        //ChangePage(PAGE_INDEX_FAULT);//故障界面
    }
#else
    void CCarStatus4Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus4Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus4Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus4Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus4Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus4Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#endif



void CCarStatus4Page::OnPageUpBtnClk()
{
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS3);
#endif

}

void CCarStatus4Page::OnPageDownBtnClk()
{
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS1);
#endif

}

void CCarStatus4Page::UpdateAValue()
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

    SetAValue(ID_PIBCARS2_LABEL_A, webflow);

#endif
}

void CCarStatus4Page::UpdateVValue()
{

#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBCARS2_LABEL_V);

#endif
}

void CCarStatus4Page::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBCARS2_LABEL_TRACTIONMODEL);

#endif

}

void CCarStatus4Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

/*void CCarStatus4Page::UpdateMainfuse()//保持制动切除
{

    int CAR2_Mainfuse1_OK  = 0;
    int CAR2_Mainfuse2_OK  = 0;
//    int CAR4_Mainfuse1_OK  = 0;
//    int CAR4_Mainfuse2_OK  = 0;
//    int CAR7_Mainfuse1_OK  = 0;
//    int CAR7_Mainfuse2_OK  = 0;
if(Bit(CCU_HMI_308_9,16)==1)
  {
        if (Bit(CCU_HMI_308_6,6))
        {
            if(Bit( RIOM_111_14, 11) )
            {
                CAR2_Mainfuse1_OK = 1;// 绿 进行保持制动切除操作
            }
            else
            {
                CAR2_Mainfuse1_OK = 3; //黑 无操作
            }
        }
        else
            CAR2_Mainfuse1_OK = 0; //白 DI不在线  通信异常
  }
else
 {
    CAR2_Mainfuse1_OK = 3; // 司机室未激活
 }
if(Bit(CCU_HMI_308_9,15)==1)
 {
    if (Bit(CCU_HMI_308_7,6)== 1)
    {
        if(Bit(RIOM_141_14, 11))
        {
            CAR2_Mainfuse2_OK = 1;
        }
        else
        {
            CAR2_Mainfuse2_OK = 3;
        }
    }
    else
    {
        CAR2_Mainfuse2_OK = 0;
    }
}
else
{
    CAR2_Mainfuse2_OK = 3;
}

//    if (Bit( DI_140_3, 2) == 1)
//    {
//        CAR4_Mainfuse2_OK = 1;
//    }
//    else
//    {
//        CAR4_Mainfuse2_OK = 0;
//    }

//    if (Bit( DI_140_3, 16)== 1)
//    {
//        CAR4_Mainfuse1_OK = 1;
//    }
//    else
//    {
//        CAR4_Mainfuse1_OK = 0;
//    }

//    if (Bit( DI_170_3, 2) == 1)
//    {
//        CAR7_Mainfuse2_OK = 1;
//    }
//    else
//    {
//        CAR7_Mainfuse2_OK = 0;
//    }

//    if (Bit( DI_170_3, 16)== 1)
//    {
//        CAR7_Mainfuse1_OK = 1;
//    }
//    else
//    {
//        CAR7_Mainfuse1_OK = 0;
//    }

    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2Mainfuse1, CAR2_Mainfuse1_OK);
    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2Mainfuse2, CAR2_Mainfuse2_OK);
    //SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR3Mainfuse1, CAR4_Mainfuse1_OK);
    //SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR3Mainfuse2, CAR4_Mainfuse2_OK);
    //SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR7Mainfuse1, CAR7_Mainfuse1_OK);
    //SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR7Mainfuse2, CAR7_Mainfuse2_OK);
}*/

void CCarStatus4Page::UpdateZeroSpeed()
{

    int ZeroSpeed1  = 0;
    int ZeroSpeed2  = 0;
    int ZeroSpeed3  = 0;
    int ZeroSpeed4  = 0;

if(Bit(CCU_HMI_308_7,16)==1)
    {if (Bit( BCU_411_10, 5) == 1)
    {

        if(Bit( BCU_411_10, 13))
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED1))->SetCtrlText(QSTR("1"));
            ZeroSpeed1 = 1;
        else
         //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED1))->SetCtrlText(QSTR("0"));
            ZeroSpeed1 = 3;
    }
    else
    {
        ZeroSpeed1 = 4;
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED1))->SetCtrlText(QSTR(""));
    }
  }
else
 {
    ZeroSpeed1= 0;
    //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED1))->SetCtrlText(QSTR(""));
 }
if(Bit(CCU_HMI_308_7,15)==1)
{  if (Bit(BCU_421_10, 5)== 1)
   {
        if(Bit( BCU_421_10, 13))
            ZeroSpeed2 =1;                                                              //绿
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED2))->SetCtrlText(QSTR("1"));//零速信号有效且为1
        else
            ZeroSpeed2 =3;                                                             //黑
         //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED2))->SetCtrlText(QSTR("0"));//零速信号有效值为0
    }
    else
    {
        ZeroSpeed2 = 4;
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED2))->SetCtrlText(QSTR(""));//零速信号无效 灰
    }

}
else
{
    ZeroSpeed2 = 0;
    //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED2))->SetCtrlText(QSTR(""));//通信异常 白
}

if(Bit(CCU_HMI_308_7,14)==1)
{  if (Bit(BCU_431_10, 5)== 1)
   {

        if(Bit( BCU_431_10, 13))
            ZeroSpeed3 =1;
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED3))->SetCtrlText(QSTR("1"));
        else
            ZeroSpeed3 =3;
         //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED3))->SetCtrlText(QSTR("0"));
    }
    else
    {
        ZeroSpeed3 = 4;
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED3))->SetCtrlText(QSTR(" "));
    }

}
else
{
    ZeroSpeed3 = 0;
    //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED3))->SetCtrlText(QSTR(" "));
}

if(Bit(CCU_HMI_308_7,13)==1)
{  if (Bit(BCU_441_10, 5)== 1)
   {

        if(Bit( BCU_441_10, 13))
            ZeroSpeed4 =1;
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED4))->SetCtrlText(QSTR("1"));
        else
            ZeroSpeed4 =3;
         //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED4))->SetCtrlText(QSTR("0"));
    }
    else
    {
        ZeroSpeed4 = 4;
        //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED4))->SetCtrlText(QSTR(""));
    }

}
else
{
    ZeroSpeed4 = 0;
    //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_ZREOSPEED4))->SetCtrlText(QSTR(""));
}

    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_ZREOSPEED1,ZeroSpeed1);
    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_ZREOSPEED2,ZeroSpeed2);
    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_ZREOSPEED3,ZeroSpeed3);
    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_ZREOSPEED4,ZeroSpeed4);
}
void CCarStatus4Page::UpdateEBCircuitStatus()//紧急制动线状态
{
    if(Bit(CCU_HMI_308_7,16))//BCU1在线
    {
        if(Bit(BCU_410_6,8)==0)//紧急制动线得电
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1))->SetCtrlText(QSTR("紧急制动"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1))->SetCtrlText(QSTR(" "));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1))->SetCtrlBKColor(Qt::white);//通信异常
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS1))->SetCtrlText(QSTR(" "));
    }

    if(Bit(CCU_HMI_308_7,15))//BCU2在线
    {
        if(Bit(BCU_420_6,8)==0)//紧急制动线得电
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2))->SetCtrlText(QSTR("紧急制动"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2))->SetCtrlText(QSTR(" "));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2))->SetCtrlBKColor(Qt::white);//通信异常
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS2))->SetCtrlText(QSTR(" "));
    }

    if(Bit(CCU_HMI_308_7,14))//BCU3在线
    {
        if(Bit(BCU_430_6,8)==0)//紧急制动线得电
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3))->SetCtrlText(QSTR("紧急制动"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3))->SetCtrlText(QSTR(" "));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3))->SetCtrlBKColor(Qt::white);//通信异常
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS3))->SetCtrlText(QSTR(" "));
    }

    if(Bit(CCU_HMI_308_7,13))//BCU4在线
    {
        if(Bit(BCU_440_6,8)==0)//紧急制动线得电
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4))->SetCtrlText(QSTR("紧急制动"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4))->SetCtrlText(QSTR(" "));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4))->SetCtrlBKColor(Qt::white);//通信异常
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EBCIRCUITESTATUS4))->SetCtrlText(QSTR(" "));
    }
}
//void CCarStatus4Page::UpdateWSP()//防滑系统
//{

//    int WSP1  = 0;
//    int WSP2  = 0;
//    int WSP3  = 0;
//    int WSP4  = 0;

//if(Bit(CCU_HMI_308_7,16)==1)
//  {
//    if (Bit( BCU_411_10, 16)==1) //防滑系统工作正常
//    {
//        if(Bit( BCU_411_10, 8))
//         WSP1 = 1;//防滑系统有防滑控制 绿
//        else
//         WSP1 = 3;//防滑系统没有防滑控制 黑
//    }
//    else
//    {
//        WSP1 = 2;//防滑系统工作不正常 红
//    }
//  }
//else
// {
//    WSP1= 0;//不在线 白

// }
//if(Bit(CCU_HMI_308_7,15)==1)
//{  if (Bit(BCU_421_10, 16)== 1)
//   {
//        if(Bit( BCU_421_10, 8))
//        WSP2 =1;
//        else
//       WSP2=3;
//    }
//    else
//    {
//        WSP2 = 2;
//    }
//}
//else
//{
//    WSP2 = 0;
//}

//if(Bit(CCU_HMI_308_7,14)==1)
//{  if (Bit(BCU_431_10, 16)== 1)
//   {
//        if(Bit( BCU_431_10, 8))
//        WSP3 =1;
//        else
//        WSP3=3;
//    }
//    else
//    {
//        WSP3 = 2;
//    }
//}
//else
//{
//    WSP3 = 0;
//}

//if(Bit(CCU_HMI_308_7,13)==1)
//{  if (Bit(BCU_441_10, 16)== 1)
//   {
//        if(Bit( BCU_441_10, 8))
//        WSP4 =1;
//        else
//        WSP4 =3;
//    }
//    else
//    {
//        WSP4 = 2;
//    }
//}
//else
//{
//    WSP4 = 0;
//}
//    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_WSP1,WSP1);
//    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_WSP2,WSP2);
//    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_WSP3,WSP3);
//    SetMainfuseLabelColor(ID_PIBCARS4_LABEL_WSP4,WSP4);
//}

//void CCarStatus4Page::UpdateAirBrk()
//{

//    int AirBrk_color1  = 0;
//    int AirBrk_color2  = 0;
//    int AirBrk_color3  = 0;
//    int AirBrk_color4  = 0;

//if(Bit(CCU_HMI_308_7,16)==1)
//    {if (Bit( BCU_410_6, 16)==1)//空气制动正常
//    {
//        if(Bit( BCU_410_6, 5))
//         AirBrk_color1 = 1;//空气制动施加 绿
//        if(Bit( BCU_410_6, 6))
//         AirBrk_color1 = 2;//空气制动缓解 黄
//    }
//    else
//    {
//        AirBrk_color1 = 3;//空气制动不正常 红
//    }
//  }
//else
// {
//    AirBrk_color1= 0;//不在线

// }
//if(Bit(CCU_HMI_308_7,15)==1)
//    {if (Bit( BCU_420_6, 16)==1)//空气制动正常
//    {
//        if(Bit( BCU_420_6, 5))
//         AirBrk_color2 = 1;//空气制动施加 绿
//        if(Bit( BCU_420_6, 6))
//         AirBrk_color2 = 2;//空气制动缓解 黄
//    }
//    else
//    {
//        AirBrk_color2 = 3;//空气制动不正常 红
//    }
//  }
//else
// {
//    AirBrk_color2= 0;//不在线
// }
//if(Bit(CCU_HMI_308_7,14)==1)
//    {if (Bit( BCU_430_6, 16)==1)//空气制动正常
//    {
//        if(Bit( BCU_430_6, 5))
//         AirBrk_color3 = 1;//空气制动施加 绿
//        if(Bit( BCU_430_6, 6))
//         AirBrk_color3 = 2;//空气制动缓解 黄
//    }
//    else
//    {
//        AirBrk_color3 = 3;//空气制动不正常 红
//    }
//  }
//else
// {
//    AirBrk_color3= 0;//不在线

// }

//if(Bit(CCU_HMI_308_7,13)==1)
//    {if (Bit( BCU_440_6, 16)==1)//空气制动正常
//    {
//        if(Bit( BCU_440_6, 5))
//         AirBrk_color4 = 1;//空气制动施加 绿
//        if(Bit( BCU_440_6, 6))
//         AirBrk_color4 = 2;//空气制动缓解 黄
//    }
//    else
//    {
//        AirBrk_color4 = 3;//空气制动不正常 红
//    }
//  }
//else
// {
//    AirBrk_color4= 0;//不在线

// }
//    SetAirBrkLabelColor(ID_PIBCARS4_LABEL_AIRBRK1,AirBrk_color4);
//    SetAirBrkLabelColor(ID_PIBCARS4_LABEL_AIRBRK2,AirBrk_color2);
//    SetAirBrkLabelColor(ID_PIBCARS4_LABEL_AIRBRK3,AirBrk_color3);
//    SetAirBrkLabelColor(ID_PIBCARS4_LABEL_AIRBRK4,AirBrk_color4);

//}
void CCarStatus4Page::UpdateLoadCapacity()
{
    int loadvalid_color1;
    int loadvalid_color2;
    int loadvalid_color3;
    int loadvalid_color4;

    LoadCapacity1 = DivNum(BCU_410_5,100);
    LoadCapacity2 = DivNum(BCU_420_5,100);
    LoadCapacity3 = DivNum(BCU_430_5,100);
    LoadCapacity4 = DivNum(BCU_440_5,100);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", LoadCapacity1);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1LOADCAPACITY))->SetCtrlText(QString(buff).append(QSTR(" t")));
     //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1LOADCAPACITY))->SetCtrlText(QString(buff));


    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", LoadCapacity2);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2LOADCAPACITY))->SetCtrlText(QString(QString(buff).append(QSTR(" t"))));



    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", LoadCapacity3);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3LOADCAPACITY))->SetCtrlText(QString(QString(buff).append(QSTR(" t"))));


    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", LoadCapacity4);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4LOADCAPACITY))->SetCtrlText(QString(QString(buff).append(QSTR(" t"))));

    if(Bit(CCU_HMI_308_7,16))//BCU在线
    {
          if(Bit(BCU_410_6,2))
              loadvalid_color1=0;// 载重有效 黑
          else
              loadvalid_color1=1;// 载重有效 灰
    }
    else
    {
        loadvalid_color1=2;// 载重有效 白
    }

    if(Bit(CCU_HMI_308_7,15))//BCU在线
    {
          if(Bit(BCU_420_6,2))
              loadvalid_color2=0;// 载重有效 黑
          else
              loadvalid_color2=1;// 载重有效 灰
    }
    else
    {
        loadvalid_color2=2;// 载重有效 白
    }

    if(Bit(CCU_HMI_308_7,14))//BCU在线
    {
          if(Bit(BCU_430_6,2))
              loadvalid_color3=0;// 载重有效 黑
          else
              loadvalid_color3=1;// 载重有效 灰
    }
    else
    {
        loadvalid_color3=2;// 载重有效 白
    }

    if(Bit(CCU_HMI_308_7,14))//BCU在线
    {
          if(Bit(BCU_440_6,2))
              loadvalid_color4=0;// 载重有效 黑
          else
              loadvalid_color4=1;// 载重有效 灰
    }
    else
    {
        loadvalid_color4=2;// 载重有效 白
    }
   SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR1LOADCAPACITY,loadvalid_color1);
   SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR2LOADCAPACITY,loadvalid_color2);
   SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR3LOADCAPACITY,loadvalid_color3);
   SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR4LOADCAPACITY,loadvalid_color4);

}

void CCarStatus4Page::UpdateABSpeed()
{
//    ABSpeed1 = DivNum(BCU_411_9,10);
//    ABSpeed2 = DivNum(BCU_421_9,10);
//    ABSpeed3 = DivNum(BCU_431_9,10);
//    ABSpeed4 = DivNum(BCU_441_9,10);
    ABSpeed1 = BCU_411_9;
    ABSpeed2 = BCU_421_9;
    ABSpeed3 = BCU_431_9;
    ABSpeed4 = BCU_441_9;

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ABSpeed1);
    //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ABSPEED))->SetCtrlText(buff);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ABSPEED))->SetCtrlText(QString(buff).append(QSTR(" HZ")));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ABSpeed2);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ABSPEED))->SetCtrlText(QString(buff).append(QSTR(" HZ")));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ABSpeed3);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ABSPEED))->SetCtrlText(QString(buff).append(QSTR(" HZ")));


    memset(buff, '\0', 10);
    sprintf(buff, "%d", ABSpeed4);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ABSPEED))->SetCtrlText(QString(buff).append(QSTR(" HZ")));

}

//void CCarStatus4Page::UpdatePWM()
//{
//    TCU1LoadPWM = BCU_420_10;
//    TCU2LoadPWM = BCU_430_10;
//    FDBK1PWM = BCU_430_12;
//    FDBK2PWM = BCU_440_12;

//    char buff[10];

//    memset(buff, '\0', 10);
//    sprintf(buff, "%d", TCU1LoadPWM);
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_TCU1LOADPWM))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%d", TCU2LoadPWM);
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_TCU2LOADPWM))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%d", FDBK1PWM);
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_FDBK1PWM))->SetCtrlText(buff);

//    memset(buff, '\0', 10);
//    sprintf(buff, "%d", FDBK2PWM);
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_FDBK2PWM))->SetCtrlText(buff);

//}


void CCarStatus4Page::UpdateMainAirPress()
{
     int MainAirPress1_color=0 ;
     //int MainAirPress2_color=0 ;
     //int MainAirPress3_color=0 ;
     int MainAirPress4_color=0 ;


    MainAir_cylinder_pressure1 = DivNum(BCU_410_14,100);
    //MainAir_cylinder_pressure2 = DivNum(BCU_420_14,100);
    //MainAir_cylinder_pressure3 = DivNum(BCU_430_14,100);
    MainAir_cylinder_pressure4 = DivNum(BCU_440_14,100);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", MainAir_cylinder_pressure1);
    //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CRA1MAINAIRPRESS))->SetCtrlText(buff);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CRA1MAINAIRPRESS))->SetCtrlText(QString(buff).append(QSTR(" bar")));


//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", MainAir_cylinder_pressure2);
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CRA2MAINAIRPRESS))->SetCtrlText(QString(buff).append(QSTR(" bar")));



//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", MainAir_cylinder_pressure3);
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CRA3MAINAIRPRESS))->SetCtrlText(QString(buff).append(QSTR(" bar")));


    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", MainAir_cylinder_pressure4);
    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CRA4MAINAIRPRESS))->SetCtrlText(QString(buff).append(QSTR(" bar")));

    if (Bit(CCU_HMI_308_7, 16 )==1)
    {
        if(Bit(BCU_410_6,3)==1)
        {
           if(Bit(BCU_410_7,3)==0)
               MainAirPress1_color = 0;//总风压力正常 黑
           else
               MainAirPress1_color = 1;//总风压力欠压 红
        }
       else
       {
         MainAirPress1_color = 2;//总风压力无效 灰
       }
    }
    else
    {
        MainAirPress1_color = 3;//通信异常 白
    }

//    if (Bit(CCU_HMI_308_7, 15 )==1)
//    {
//        if(Bit(BCU_420_6,3)==1)
//        {
//           if(Bit(BCU_420_7,3)==0)
//               MainAirPress2_color = 0;
//           else
//               MainAirPress2_color = 1;
//        }
//       else
//       {
//         MainAirPress2_color = 2;
//       }
//    }
//    else
//    {
//        MainAirPress2_color = 3;
//    }


//    if (Bit(CCU_HMI_308_7, 14 )==1)
//    {
//        if(Bit(BCU_430_6,3)==1)
//        {
//           if(Bit(BCU_430_7,3)==0)
//               MainAirPress3_color = 0;
//           else
//               MainAirPress3_color = 1;
//        }
//       else
//       {
//         MainAirPress3_color = 2;
//       }
//    }
//    else
//    {
//        MainAirPress3_color = 3;
//    }

    if (Bit(CCU_HMI_308_7, 13 )==1)
    {
        if(Bit(BCU_440_6,3)==1)
        {
           if(Bit(BCU_440_7,3)==0)
               MainAirPress4_color = 0;
           else
               MainAirPress4_color = 1;
        }
       else
       {
         MainAirPress4_color = 2;
       }
    }
    else
    {
        MainAirPress4_color = 3;
    }
    SetMainAirPressureLabelColor(ID_PIBCARS4_LABEL_CRA1MAINAIRPRESS, MainAirPress1_color);
//    SetMainAirPressureLabelColor(ID_PIBCARS4_LABEL_CRA2MAINAIRPRESS, MainAirPress2_color);
//    SetMainAirPressureLabelColor(ID_PIBCARS4_LABEL_CRA3MAINAIRPRESS, MainAirPress3_color);
    SetMainAirPressureLabelColor(ID_PIBCARS4_LABEL_CRA4MAINAIRPRESS, MainAirPress4_color);

}



void CCarStatus4Page::UpdateK750()
{

    if (Bit( train_status_data5, 12 ) )
    {
        K750_color1 = 1;
    }
    else
    {
        K750_color1 = 0;
    }
    if (Bit( train_status_data5, 13 ) )
    {
        K750_color1 = 2;
    }
    if (Bit( train_status_data1, 14 ) )
    {
        K750_color1 = 2;
    }
    if (Bit( train_status_data6, 12 ) )
    {
        K750_color2 = 1;
    }
    else
    {
        K750_color2 = 0;
    }
    if (Bit( train_status_data6, 13 ) )
    {
        K750_color2 = 2;
    }
    if (Bit( train_status_data6, 14 ) )
    {
        K750_color2 = 2;
    }

    SetK750LabelColor(ID_PIBCARS2_LABEL_CRA1K750STATUS, K750_color1);
    SetK750LabelColor(ID_PIBCARS2_LABEL_CRA6K750STATUS, K750_color2);

}

void CCarStatus4Page::UpdateATC()
{

    if ( (Bit( train_status_data31, 16 ) ) || (Bit( train_status_data31, 15 ) )
        || (Bit( train_status_data31, 14 ) ) )
    {
        ATC10_color = 3;
    }
    if (Bit( train_status_data31, 13 ) )
    {
        ATC10_color = 0;
        if (Bit( train_status_data31, 12 ) == 0)
        {
            ATC10_color = 1;
        }
        if ( (Bit( train_status_data31, 16 ) ) || (Bit( train_status_data31, 15 ) )
            || (Bit( train_status_data31, 14 ) ) )
        {
            ATC10_color = 3;
        }
    }
    else
    {
        ATC10_color = 2;
    }

    if (Bit( train_status_data31, 5 ) )
    {
        ATC11_color = 0;
        if (Bit( train_status_data31, 4 ) == 0)
        {
            ATC11_color = 1;
        }
        if ( (Bit( train_status_data31, 8 ) ) || (Bit( train_status_data31, 7 ) )
            || (Bit( train_status_data31, 6 ) ) )
        {
            ATC11_color = 3;
        }
    }
    else
    {
        ATC11_color = 2;
    }

    if (Bit( train_status_data33, 13 ) )
    {
        ATC20_color = 0;
        if (Bit( train_status_data33, 12 ) == 0)
        {
            ATC20_color = 1;
        }
        if ( (Bit( train_status_data33, 16 ) ) || (Bit( train_status_data33, 15 ) )
            || (Bit( train_status_data33, 14 ) ) )
        {
            ATC20_color = 3;
        }
    }
    else
    {
        ATC20_color = 2;
    }

    if (Bit( train_status_data33, 5 ) )
    {
        ATC21_color = 0;
        if (Bit( train_status_data33, 4 ) ==0 )
        {
            ATC21_color = 1;
        }
        if ( (Bit( train_status_data33, 8 ) ) || (Bit( train_status_data33, 7 ) )
            ||(Bit( train_status_data33, 6 ) ) )
        {
            ATC21_color = 3;
        }
    }
    else
    {
        ATC21_color = 2;
    }

    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA1ATC1STATUS, ATC10_color);
    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA1ATC2STATUS, ATC11_color);
    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA6ATC1STATUS, ATC20_color);
    SetAtcLabelColor(ID_PIBCARS2_LABEL_CRA6ATC2STATUS, ATC21_color);
}

void CCarStatus4Page::UpdatePIS()
{
    if (Bit( train_status_data32, 14 ) )
    {
        train_pis1_color = 0;
        if (Bit( train_status_data32, 13 ) == 0)
        {
            train_pis1_color = 1;
        }
        if ( (Bit( train_status_data32, 16 ) ) || (Bit( train_status_data32, 15 ) )
            || (Bit( train_status_data32, 12 ) ) || (Bit( train_status_data32, 11 ) ) )
        {
            train_pis1_color = 3;
        }
    }
    else
    {
        train_pis1_color = 2;
    }

    if (Bit( train_status_data32, 6 ) )
    {
        train_pis2_color = 0;
        if (Bit( train_status_data32, 5 ) == 0)
        {
            train_pis2_color = 1;
        }
        if ( (Bit( train_status_data32, 8 ) ) || (Bit( train_status_data32, 7 ) )
            || (Bit( train_status_data32, 4 ) ) || (Bit( train_status_data32, 3 ) ) )
        {
            train_pis2_color = 3;
        }
    }
    else
    {
        train_pis2_color = 2;
    }

    SetPisLabelColor(ID_PIBCARS2_LABEL_CRA1PISSTATUS,train_pis1_color);
    SetPisLabelColor(ID_PIBCARS2_LABEL_CRA6PISSTATUS,train_pis2_color);

}

void CCarStatus4Page::UpdateBCUPressure()
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
            //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(buff);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));


            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure2);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));



            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure3);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));


            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure4);
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4BCUPRESSURE1))->SetCtrlText(QString(buff).append(QSTR(" bar")));

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
            SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR1BCUPRESSURE1, BCU1_pressure_color);
            SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR2BCUPRESSURE1, BCU2_pressure_color);
            SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR3BCUPRESSURE1, BCU3_pressure_color);
            SetBCUPressureLabelColor(ID_PIBCARS4_LABEL_CAR4BCUPRESSURE1, BCU4_pressure_color);
        }


//void CCarStatus4Page::UpdateCompressorStatus()//空压机状态
//{
//            //BCU1在线                 TC1车的DI1在线
//    if((Bit(CCU_HMI_308_7,16)==1)&&(Bit(CCU_HMI_308_6,8)==1))
//    {
//       if(Bit(RIOM_111_11,10)==1)
//        {  if(Bit(RIOM_111_11,9)==0)

//             CompressorStarted1 = 1;//正常运行

//          else
//             CompressorStarted1 = 2; //过载故障
//        }
//       else
//       {
//           CompressorStarted1 = 0; //未运行
//       }
//    }
//    else
//    {
//      CompressorStarted1 = 0;
//    }

//    if((Bit(CCU_HMI_308_7,15)==1)&&(Bit(CCU_HMI_308_7,8)==1))
//    {
//        if(Bit(RIOM_141_11,10)==1)
//         {  if(Bit(RIOM_141_11,9)==0)

//             CompressorStarted4 = 1;//正常运行

//          else
//             CompressorStarted4 = 2; //过载故障
//        }
//       else
//       {
//           CompressorStarted4 = 0; //未运行
//       }
//    }
//    else
//    {
//      CompressorStarted4 = 0;
//    }
//    SetCompressorStatusLabelColor(ID_PIBCARS4_LABEL_CAR1AIRCOMPRESSORSTATE, CompressorStarted1);
//    SetCompressorStatusLabelColor(ID_PIBCARS4_LABEL_CAR4AIRCOMPRESSORSTATE, CompressorStarted4);
//}

//void CCarStatus4Page::UpdateBCUSeparater()
//{
//    int CAR1_Bogie1_separater  = 0;
//    int CAR1_Bogie2_separater  = 0;
//    int CAR2_Bogie1_separater  = 0;
//    int CAR2_Bogie2_separater  = 0;
//    int CAR3_Bogie1_separater  = 0;
//    int CAR3_Bogie2_separater  = 0;
//    int CAR4_Bogie1_separater  = 0;
//    int CAR4_Bogie2_separater  = 0;

//    if(Bit(CCU_HMI_308_7, 16 )==1)
//    {

//        if(Bit(BCU_419_8,9)==1)
//        {
//            CAR1_Bogie1_separater = 1;
//        }
//        else
//        {
//            CAR1_Bogie1_separater = 0;
//        }

//        if(Bit(BCU_419_8,10)==1)
//        {
//            CAR1_Bogie2_separater = 1;
//        }
//        else
//        {
//            CAR1_Bogie2_separater = 0;
//        }

//    }
//    else
//    {
//            CAR1_Bogie1_separater = 2;
//            CAR1_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 15 )==1)
//    {

//        if(Bit(BCU_419_8,13)==1)
//        {
//            CAR2_Bogie1_separater = 1;
//        }
//        else
//        {
//            CAR2_Bogie1_separater = 0;
//        }

//        if(Bit(BCU_419_8,14)==1)
//        {
//            CAR2_Bogie2_separater = 1;
//        }
//        else
//        {
//            CAR2_Bogie2_separater = 0;
//        }

//    }
//    else
//    {
//            CAR2_Bogie1_separater = 2;
//            CAR2_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 14 )==1)
//    {

//        if(Bit(BCU_419_9,1)==1)
//        {
//            CAR3_Bogie1_separater = 1;
//        }
//        else
//        {
//            CAR3_Bogie1_separater = 0;
//        }


//        if(Bit(BCU_419_9,2)==1)
//        {
//            CAR3_Bogie2_separater = 1;
//        }
//        else
//        {
//            CAR3_Bogie2_separater = 0;
//        }

//    }
//    else
//    {
//            CAR3_Bogie1_separater = 2;
//            CAR3_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 13 )==1)
//    {

//        if(Bit(BCU_419_9,5)==1)
//        {
//            CAR4_Bogie1_separater = 1;
//        }
//        else
//        {
//            CAR4_Bogie1_separater = 0;
//        }

//        if(Bit(BCU_419_9,6)==1)
//        {
//            CAR4_Bogie2_separater = 1;
//        }
//        else
//        {
//            CAR4_Bogie2_separater = 0;
//        }

//    }
//    else
//    {
//            CAR4_Bogie1_separater = 2;
//            CAR4_Bogie2_separater = 2;

//    }


//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR1BCUSEPARATE1, CAR1_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR1BCUSEPARATE2, CAR1_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR2BCUSEPARATE1, CAR2_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR2BCUSEPARATE2, CAR2_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR3BCUSEPARATE1, CAR3_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR3BCUSEPARATE2, CAR3_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR4BCUSEPARATE1, CAR4_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBCARS4_LABEL_CAR4BCUSEPARATE2, CAR4_Bogie2_separater);
//}

void CCarStatus4Page::UpdateASPressure()
{
//    if(Bit(CCU_HMI_308_7, 16)==1)
//    {
//     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS1))->SetCtrlText(QString::number(BCU_410_3));
//     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS2))->SetCtrlText(QString::number(BCU_410_4));
//    }
//    else
//    {
//     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS1))->SetCtrlText(QSTR(" "));//通信异常
//     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS2))->SetCtrlText(QSTR(" "));
//    }

//  if(Bit(CCU_HMI_308_7, 15)==1)
//    {
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ASPRESS1))->SetCtrlText(QString::number(BCU_420_3));
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ASPRESS2))->SetCtrlText(QString::number(BCU_420_4));
//    }
//  else
//    {
//  ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ASPRESS1))->SetCtrlText(QSTR(" "));
//  ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ASPRESS2))->SetCtrlText(QSTR(" "));
//    }
//  if(Bit(CCU_HMI_308_7, 14)==1)
//    {
//     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ASPRESS1))->SetCtrlText(QString::number(BCU_430_3));
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ASPRESS2))->SetCtrlText(QString::number(BCU_430_4));
//    }
//  else
//    {
//       ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ASPRESS1))->SetCtrlText(QSTR(" "));
//      ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ASPRESS2))->SetCtrlText(QSTR(" "));
//    }
//  if(Bit(CCU_HMI_308_7, 13)==1)
//    {
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ASPRESS1))->SetCtrlText(QString::number(BCU_440_3));
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ASPRESS2))->SetCtrlText(QString::number(BCU_440_4));
//    }
//  else
//    {
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ASPRESS1))->SetCtrlText(QSTR(" "));
//    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ASPRESS2))->SetCtrlText(QSTR(" "));
//    }
    int asp_color1 = 0;
    int asp_color2 = 0;
    int asp_color3 = 0;
    int asp_color4 = 0;
    int asp_color5 = 0;
    int asp_color6 = 0;
    int asp_color7 = 0;
    int asp_color8 = 0;

      if(Bit(CCU_HMI_308_7,16))
      {
          asp_color1 =  Bit(BCU_411_1,11);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR1ASPRESS1,asp_color1);

          asp_color2 =  Bit(BCU_411_1,12);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR1ASPRESS2,asp_color2);
      }
      else
      {
          asp_color1 = 2;
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR1ASPRESS1,asp_color1);
          asp_color2 = 2;
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR1ASPRESS2,asp_color2);
      }

     if(Bit(CCU_HMI_308_7,15))
      {
          asp_color3 =  Bit(BCU_421_1,11);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR2ASPRESS1,asp_color3);

          asp_color4 =  Bit(BCU_421_1,12);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR2ASPRESS2,asp_color4);
     }
     else
     {
         asp_color3 =  2;
         SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR2ASPRESS1,asp_color3);

         asp_color4 =  2;
         SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR2ASPRESS2,asp_color4);
     }

     if(Bit(CCU_HMI_308_7,14))
     {
          asp_color5 =  Bit(BCU_431_1,11);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR3ASPRESS1,asp_color5);

          asp_color6 =  Bit(BCU_431_1,12);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR3ASPRESS2,asp_color6);
     }
     else
     {
         asp_color5 =  2;
         SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR3ASPRESS1,asp_color5);

         asp_color6 =  2;
         SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR3ASPRESS2,asp_color6);
     }

     if(Bit(CCU_HMI_308_7,13))
     {
          asp_color7 =  Bit(BCU_441_1,11);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR4ASPRESS1,asp_color7);

          asp_color8 =  Bit(BCU_441_1,12);
          SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR4ASPRESS2,asp_color8);
     }
     else
     {
         asp_color7 =  2;
         SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR4ASPRESS1,asp_color7);

         asp_color8 =  2;
         SetBCU_selftest_LabelColor(ID_PIBCARS4_LABEL_CAR4ASPRESS2,asp_color8);
     }

     BogieASP1 = DivNum(BCU_410_3,100);
     BogieASP2 = DivNum(BCU_410_4,100);
     BogieASP3 = DivNum(BCU_420_3,100);
     BogieASP4 = DivNum(BCU_420_4,100);
     BogieASP5 = DivNum(BCU_430_3,100);
     BogieASP6 = DivNum(BCU_430_4,100);
     BogieASP7 = DivNum(BCU_440_3,100);
     BogieASP8 = DivNum(BCU_440_4,100);

     char buff[10];

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP1);
     //((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS1))->SetCtrlText(buff);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS1))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP2);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR1ASPRESS2))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP3);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ASPRESS1))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP4);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR2ASPRESS2))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP5);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ASPRESS1))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP6);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR3ASPRESS2))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP7);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ASPRESS1))->SetCtrlText(QString(buff).append(QSTR(" bar")));

     memset(buff, '\0', 10);
     sprintf(buff, "%.1f",BogieASP8);
     ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_CAR4ASPRESS2))->SetCtrlText(QString(buff).append(QSTR(" bar")));

}
void CCarStatus4Page::SetBCU_selftest_LabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
       // ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (2 == colorVal)
    {
      ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}


void CCarStatus4Page::UpdateATOMode()
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

    //SetATOModeLabelColor(ID_PIBCARS2_LABEL_ATOMODE, ATC_invalid);
    //GetDlgItem(ID_PIBCARS2_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}


void CCarStatus4Page::UpdateNETMode()
{

    int modecolor = 0;

    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
    {

        if ( (Bit( CCU_HMI_222_16, 10 ) ) == 1)
        {
            net_mode = QSTR ("备用模式");
            modecolor = 1;
        }
        else
        {
            net_mode = QSTR ("网络模式");
            modecolor = 0;
        }
    }
    else
    {
        net_mode = QSTR ("MVB\n网络异常");
        modecolor = 2;
    }

    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_NETMODE))->SetCtrlText(net_mode);
    //SetNETModeLabelColor(ID_PIBCARS2_LABEL_NETMODE, modecolor);
}
void CCarStatus4Page::UpdateHighAcceMode()//高加速模式
{
//    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
//        {

//            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//      if (Bit(CCU_HMI_308_6, 6 )==1)
//          {
//          if ( (Bit( RIOM_111_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_510_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }
//      if (Bit(CCU_HMI_308_7, 6 )==1)
//          { if ( (Bit( RIOM_141_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_520_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }

//        }

//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->HideLabel();
//        }

    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
        {
            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
          if (Bit(CCU_HMI_308_6, 6 )&&Bit( RIOM_111_14, 12 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
              }
          else if (Bit(CCU_HMI_308_7, 6 )&&Bit( RIOM_141_14, 12 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
              }
          else
              {
                ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->HideLabel();
              }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_HIGHACCEMODE))->HideLabel();
        }
}


void CCarStatus4Page::UpdateEmergencyMode()//紧急运行模式
{

    if (Bit(CCU_HMI_308_6, 8 )|| Bit(CCU_HMI_308_7, 8 ))
        {

            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
          if (Bit(CCU_HMI_308_6, 8 )&&Bit( RIOM_111_12, 2 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
              }
          else if (Bit(CCU_HMI_308_7, 8 )&&Bit( RIOM_141_12, 2 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
              }
          else
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EMERGENCYMODE))->HideLabel();
              }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_EMERGENCYMODE))->HideLabel();
        }

    }

void CCarStatus4Page::UpdateWashCarMode()
{
    //if(Bit(CCU_HMI_308_6,6)||Bit(CCU_HMI_308_7,6))//RIOM DI3在线
    if(Bit(CCU_HMI_308_9,16))
        {
               if(Bit(CCU_HMI_308_6,6)&&Bit( RIOM_111_14, 6 ))
                {
                        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->HideLabel();
                }
        }
//    else
//      {
//        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->HideLabel();
//      }
    else if(Bit(CCU_HMI_308_9,15))
    {
            if(Bit(CCU_HMI_308_7,6)&&Bit( RIOM_141_14, 6 ))
                {
                    ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->HideLabel();
                }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS4_LABEL_WASHCARMODE))->HideLabel();
    }

}

//void CCarStatus4Page::UpdateEmergencyBroadcast()
//{
//    if (reserve_hide)
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->ShowButton();
//
//    }
//    else
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->HideButton();
//    }
//}
void CCarStatus4Page::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);//压力无效为灰色
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}


void CCarStatus4Page::SetCompressorStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
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

    return;
}

void CCarStatus4Page::SetBCUSeparaterLabelColor(int id, int colorVal)
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

void CCarStatus4Page::SetNETModeLabelColor(int id, int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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

void CCarStatus4Page::SetATOModeLabelColor(int id,int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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


void CCarStatus4Page::SetCommInterruptLabelColor(int id, int colorVal)
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

void CCarStatus4Page::SetHscbLabelColor(int id, int colorVal)
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

void CCarStatus4Page::SetMainAirPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CCarStatus4Page::SetKcccLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
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

    return;
}

void CCarStatus4Page::SetK750LabelColor(int id, int colorVal)
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

void CCarStatus4Page::SetAtcLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCarStatus4Page::SetPisLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

//void CCarStatus4Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus4Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CCarStatus4Page::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE2))->HideLabel();

    }
}



void CCarStatus4Page::UpdateEBCutOutReq()
{
    int EBCutOutReq1  = 0;
    int EBCutOutReq2  = 0;


if(Bit(CCU_HMI_308_7,15)==1)
    {if (Bit( BCU_420_9, 10)==1)
    {
        EBCutOutReq1 = 1;//有电制动切除请求 绿
    }
    else
    {
        EBCutOutReq1 = 3;//无电制动切除请求 黑
    }
  }
else
 {
    EBCutOutReq1= 0;//不在线 白

 }
if(Bit(CCU_HMI_308_7,14)==1)
{  if (Bit(BCU_430_9, 10)== 1)
   {
     EBCutOutReq2=1;

    }
    else
    {
        EBCutOutReq2 = 3;
    }
}
else
{
    EBCutOutReq2 = 0;
}

    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2EBCUTOUT, EBCutOutReq1);
    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR3EBCUTOUT, EBCutOutReq2);
}
void CCarStatus4Page::UpdateAXWSP()
{
    int AX1WSP1,AX2WSP1,AX3WSP1,AX4WSP1;
    int AX1WSP2,AX2WSP2,AX3WSP2,AX4WSP2;
    int AX1WSP3,AX2WSP3,AX3WSP3,AX4WSP3;
    int AX1WSP4,AX2WSP4,AX3WSP4,AX4WSP4;
if(Bit(CCU_HMI_308_7,16)==1)
    {
      if(Bit(BCU_411_10,16)==1)
         {
           if(Bit(BCU_411_10,1)==1)
               AX1WSP1=1;//1轴有防滑控制 绿
           else
               AX1WSP1=0;//1轴无防滑控制 黑

           if(Bit(BCU_411_10,2)==1)
               AX2WSP1=1;//1轴有防滑控制
           else
               AX2WSP1=0;//1轴无防滑控制

           if(Bit(BCU_411_10,3)==1)
               AX3WSP1=1;//1轴有防滑控制
           else
               AX3WSP1=0;//1轴无防滑控制

           if(Bit(BCU_411_10,4)==1)
               AX4WSP1=1;//1轴有防滑控制
           else
               AX4WSP1=0;//1轴无防滑控制
         }
        else
        {
            AX1WSP1=2;//防滑系统工作不正常 红
            AX2WSP1=2;
            AX3WSP1=2;
            AX4WSP1=2;
        }
    }
else
   {
    AX1WSP1=3;//制动系统通信异常 白
    AX2WSP1=3;
    AX3WSP1=3;
    AX4WSP1=3;
   }

if(Bit(CCU_HMI_308_7,15)==1)
    {
      if(Bit(BCU_421_10,16)==1)
         {
           if(Bit(BCU_421_10,1)==1)
               AX1WSP2=1;//2轴有防滑控制
           else
               AX1WSP2=0;//2轴无防滑控制

           if(Bit(BCU_421_10,2)==1)
               AX2WSP2=1;//2轴有防滑控制
           else
               AX2WSP2=0;//2轴无防滑控制

           if(Bit(BCU_421_10,3)==1)
               AX3WSP2=1;//2轴有防滑控制
           else
               AX3WSP2=0;//2轴无防滑控制

           if(Bit(BCU_421_10,4)==1)
               AX4WSP2=1;//2轴有防滑控制
           else
               AX4WSP2=0;//2轴无防滑控制
         }
        else
        {
            AX1WSP2=2;//防滑系统工作不正常
            AX2WSP2=2;
            AX3WSP2=2;
            AX4WSP2=2;
        }
    }
else
   {
    AX1WSP2=3;//制动系统通信异常
    AX2WSP2=3;
    AX3WSP2=3;
    AX4WSP2=3;
   }
if(Bit(CCU_HMI_308_7,14)==1)
    {
      if(Bit(BCU_431_10,16)==1)
         {
           if(Bit(BCU_431_10,1)==1)
               AX1WSP3=1;//3轴有防滑控制
           else
               AX1WSP3=0;//3轴无防滑控制

           if(Bit(BCU_431_10,2)==1)
               AX2WSP3=1;//3轴有防滑控制
           else
               AX2WSP3=0;//3轴无防滑控制

           if(Bit(BCU_431_10,3)==1)
               AX3WSP3=1;//3轴有防滑控制
           else
               AX3WSP3=0;//3轴无防滑控制

           if(Bit(BCU_431_10,4)==1)
               AX4WSP3=1;//3轴有防滑控制
           else
               AX4WSP3=0;//3轴无防滑控制
         }
        else
        {
            AX1WSP3=2;//防滑系统工作不正常
            AX2WSP3=2;
            AX3WSP3=2;
            AX4WSP3=2;
        }
    }
else
   {
    AX1WSP3=3;//制动系统通信异常
    AX2WSP3=3;
    AX3WSP3=3;
    AX4WSP3=3;
   }

if(Bit(CCU_HMI_308_7,13)==1)
    {
      if(Bit(BCU_441_10,16)==1)
         {
           if(Bit(BCU_441_10,1)==1)
               AX1WSP4=1;//1轴有防滑控制
           else
               AX1WSP4=0;//1轴无防滑控制

           if(Bit(BCU_441_10,2)==1)
               AX2WSP4=1;//1轴有防滑控制
           else
               AX2WSP4=0;//1轴无防滑控制

           if(Bit(BCU_441_10,3)==1)
               AX3WSP4=1;//1轴有防滑控制
           else
               AX3WSP4=0;//1轴无防滑控制

           if(Bit(BCU_441_10,4)==1)
               AX4WSP4=1;//1轴有防滑控制
           else
               AX4WSP4=0;//1轴无防滑控制
         }
        else
        {
            AX1WSP4=2;//防滑系统工作不正常
            AX2WSP4=2;
            AX3WSP4=2;
            AX4WSP4=2;
        }
    }
else
   {
    AX1WSP4=3;//制动系统通信异常
    AX2WSP4=3;
    AX3WSP4=3;
    AX4WSP4=3;
   }
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX1WSP1, AX1WSP1 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX2WSP1, AX2WSP1 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX3WSP1, AX3WSP1 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX4WSP1, AX4WSP1 );

SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX1WSP2, AX1WSP2 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX2WSP2, AX2WSP2 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX3WSP2, AX3WSP2 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX4WSP2, AX4WSP2 );

SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX1WSP3, AX1WSP3 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX2WSP3, AX2WSP3 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX3WSP3, AX3WSP3 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX4WSP3, AX4WSP3 );

SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX1WSP4, AX1WSP4 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX2WSP4, AX2WSP4 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX3WSP4, AX3WSP4 );
SetTCUStatusLsbelColor(ID_PIBCARS4_LABEL_AX4WSP4, AX4WSP4 );
}

void CCarStatus4Page::SetTCUStatusLsbelColor(int id,int colorVal)
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

void CCarStatus4Page::SetMainfuseLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);

    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }

    return;
}

void CCarStatus4Page::SetAirBrkLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("(P)"));

    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);

    }
    return;
}

/*void CCarStatus4Page::UpdateIES()//整车制动切除
{
//    if (Bit(CCU_HMI_308_9, 16 )||Bit(CCU_HMI_308_9, 15 ) )//司机室激活
//    {
        if(Bit(CCU_HMI_308_6,7)) //DI1在线
        {
            if(Bit(RIOM_111_13,6)) //位有效
            {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::green);//切除
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::black);//无此状态
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::white);//通信异常DI不在线
        }

        if(Bit(CCU_HMI_308_7,7))
        {
            if(Bit(RIOM_141_13,6))
            {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::green);
            }
            else
            {
               ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::black);
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::white);
        }

        if(Bit(CCU_HMI_308_6,16))
        {
            if(Bit(RIOM_121_12,1)==1)
            {

            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlBKColor(Qt::green);
            }
            else
            {

                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlBKColor(Qt::black);
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlBKColor(Qt::white);
        }

        if(Bit(CCU_HMI_308_6,12))
        {
            if(Bit(RIOM_131_12,1)==1)
            {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlBKColor(Qt::green);
            }
            else
            {
               ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlBKColor(Qt::black);
            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlBKColor(Qt::white);
        }
//    }
//    else
//    {
//        //IES3_string = QSTR("");
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlBKColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlBKColor(Qt::white);

//    }

//    if (Bit(CCU_HMI_222_9, 13 ))
//    {
//        if (Bit( TCU_561_6, 16 ) )
//        {
//            IES2_string = QSTR("受电弓位");
//        }
//        if (Bit( TCU_561_6, 15 ) )
//        {
//            IES2_string = QSTR("接地位");
//        }
//        if (Bit( TCU_561_6, 14 ) )
//        {
//            IES2_string = QSTR("车间电源");
//        }
//        if ( ( TCU_561_6 & 57344) == 0)
//        {
//            IES2_string = QSTR("- -");
//        }
//        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        IES2_string = QSTR("");
        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::white);;

    //}



    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlText(IES1_string);
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlText(IES3_string);lmh
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlText(IES2_string);
}*/
void CCarStatus4Page::UpdatePlaceStatus()
{
    int Place1_status  = 0;
    int Place2_status  = 0;
    int Place3_status  = 0;
    int Place4_status  = 0;

        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
        //if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
  if(Bit(CCU_HMI_308_7, 16 ))
    {
            //if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
        if((Bit( BCU_419_8, 11)==0))
            {
              if(Bit(BCU_419_8,12)==1)
                Place1_status=0;//施加
              else
                Place1_status=1;//未施加
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

    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR1PLACESTATE, Place1_status);
    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR2PLACESTATE, Place2_status);
    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR3PLACESTATE, Place3_status);
    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR4PLACESTATE, Place4_status);

}
void CCarStatus4Page::UpdateBravekeepStatus()
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

    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR1BRAVEKEEP, keep1_status);
    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR2BRAVEKEEP, keep2_status);
    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR3BRAVEKEEP, keep3_status);
    SetPlaceStatusLabelColor(ID_PIBCARS4_LABEL_CAR4BRAVEKEEP, keep4_status);
}
void CCarStatus4Page::SetPlaceStatusLabelColor(int id, int colorVal)
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

