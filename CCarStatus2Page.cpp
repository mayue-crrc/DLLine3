#include "CCarStatus2Page.h"

ROMDATA g_PicRom_CarStatus2[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QSTR("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEUP             },
#endif

#ifdef PAGE_HEADER_NEW
     D_COMMON_PAGE_HEADER_NEW_DL(QSTR("牵引") )
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
    //{"",                          D_FONT_BOLD(6),      QRect( 10, 480, 691,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    // {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 180-29,   1, 330-30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(100, 180-29,   1, 330-30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(250, 180-29,   1, 330-30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(400, 180-29,   1, 330-30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(550, 180-29,   1, 330-30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(700, 180-29,   1, 330-30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(475, 180-29,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(550, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(625, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                          D_FONT_BOLD(6),      QRect(700, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {QSTR("车号"),                   D_FONT_BOLD(7),      QRect( 11, 152,  88,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),                   D_FONT_BOLD(8),      QRect( 101, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                   D_FONT_BOLD(8),      QRect( 251, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                   D_FONT_BOLD(8),      QRect( 401, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                   D_FONT_BOLD(8),      QRect( 551, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("牵引系统"),                 D_FONT_BOLD(7),      QRect( 11, 181, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("载荷"),       D_FONT_BOLD(7),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("转矩电流"),              D_FONT_BOLD(7),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("高速断路器"),             D_FONT_BOLD(7),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("线路断路器LB1"),             D_FONT_BOLD(7),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("充电断路器LB2"),              D_FONT_BOLD(7),      QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("母线断路器"),              D_FONT_BOLD(7),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("滤波电容电压"),             D_FONT_BOLD(7),      QRect( 11, 331-30, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("电流有效值"),              D_FONT_BOLD(7),      QRect( 11, 361-30, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("转矩命令"),                 D_FONT_BOLD(7),      QRect( 11, 391-30, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("实际电制动力"),        D_FONT_BOLD(7),      QRect( 11, 421-30, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("BHB辅助触点"),        D_FONT_BOLD(7),      QRect( 11, 451-30, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("U 相电流"),             D_FONT_BOLD(7),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("W 相电流"),              D_FONT_BOLD(7),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    // {QSTR("广播状态"),              D_FONT_BOLD(6),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    //载荷
//    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 241,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("1200"),                    D_FONT_BOLD(8),      QRect(255, 241,  140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU1LOADOR        },
//    {QSTR("1200"),                    D_FONT_BOLD(8),      QRect(405, 241,  140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU2LOADOR        },
////    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(328, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA4DYNAMOREV        },
////    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(403, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA5DYNAMOREV        },
////    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(478, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6DYNAMOREV        },
////    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA7DYNAMOREV        },
//    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 241,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//牵引系统状态
{QSTR("TCU1牵引允许"),          D_FONT_BOLD(8),      QRect(105, 185,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,                ID_PIBCARS2_LABEL_TCU_ENABLE1        },
{QSTR(" "),                 D_FONT_BOLD(7),      QRect(255, 185,  140, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE        },
{QSTR(" "),                 D_FONT_BOLD(7),      QRect(405, 185,  140, 21),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE        },
{QSTR("TCU2牵引允许"),          D_FONT_BOLD(8),      QRect(555, 185,  140, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU_ENABLE2        },

    //HSCB
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 211,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 215,  140,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2HSCBSTATUS        },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 215,  140,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3HSCBSTATUS        },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 211,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //LB1
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 241,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 245,  140,  23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2LB1STATE          },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 245,  140,  23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3LB1STATE          },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 241,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

////转矩电流
//    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 301,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 305,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU1TORQUECUR         },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 305,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU2TORQUECUR         },
//    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 301,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //LB2
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 271,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 275,  140,  23),           Qt::white,                Qt::green,                CONTROL_LABEL,              ID_PIBCARS2_LABEL_CRA2LB2STATE     },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 275,  140,  23),           Qt::white,                Qt::green,                CONTROL_LABEL,              ID_PIBCARS2_LABEL_CRA3LB2STATE     },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 271,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //母线断路器
//    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(105, 305,  140,  22),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 305,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2MAINLINEBREAKER          },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 305,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3MAINLINEBREAKER          },
//    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(555, 305,  140,  22),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE          },

    //滤波电容电压
    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(105, 335-30,  140,  23),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE          },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 335-30,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2FILTERCVOLTAGE          },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 335-30,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3FILTERCVOLTAGE          },
    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(555, 335-30,  140,  23),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE          },
    //电流有效值
   {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 361-30,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   {QSTR(""),                    D_FONT_BOLD(10),      QRect(255, 365-30,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CURRENTEVALUE1         },
   {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 365-30,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CURRENTEVALUE2         },
   {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 361-30,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //转矩命令
     {QSTR("-- --"),          D_FONT_BOLD(10),      QRect(105, 391-30,  140, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
     {QSTR(" "),                 D_FONT_BOLD(10),      QRect(255, 391-30,  140, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU1TORQUECOM        },
     {QSTR(" "),                 D_FONT_BOLD(10),      QRect(405, 391-30,  140, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU2TORQUECOM        },
     {QSTR("-- --"),          D_FONT_BOLD(10),      QRect(555, 391-30,  140, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

     // 牵引制动力
     {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(105, 421-30,  140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
     {QSTR("180"),                    D_FONT_BOLD(10),      QRect(255, 421-30,  140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE     },
     {QSTR("180"),                    D_FONT_BOLD(10),      QRect(405, 421-30,  140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE     },
     {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(555, 421-30,  140,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },

     // BHB辅助触点闭合
     {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(105, 455-30,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
     {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(255, 455-30,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA2BHBCLOSE     },
     {QSTR(""),                    D_FONT_BOLD(10),      QRect(405, 455-30,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA3BHBCLOSE     },
     {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(555, 455-30,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },

////U current
//{QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 421,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 425,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU1UCURRENT         },
//{QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 425,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU2UCURRENT         },
//{QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 421,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

////W current
//{QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(105, 451,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QSTR(""),                    D_FONT_BOLD(8),      QRect(255, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU1WCURRENT         },
//{QSTR(""),                    D_FONT_BOLD(8),      QRect(405, 455,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_TCU2WCURRENT         },
//{QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(555, 451,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    // k750
//    {QSTR("-- --"),              D_FONT_BOLD(6),      QRect(105, 361,  140,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("受电弓位"),                 D_FONT_BOLD(6),      QRect(255, 365,  140,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2IESSTATE         },
//    //{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("受电弓位"),                 D_FONT_BOLD(6),      QRect(405, 365,  140,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3IESSTATE         },
//    //{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("接地位"),                 D_FONT_BOLD(6),      QRect(553, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR8IESSTATE         },
//    {QSTR("-- --"),                    D_FONT_BOLD(6),      QRect(555, 361,  140,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },


    //ATC
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(103, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA1ATC1STATUS        },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(139, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA1ATC2STATUS        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(628, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6ATC1STATUS        },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(664, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CRA6ATC2STATUS        },

    // 主熔断器状态
 //   {"",                          D_FONT_BOLD(6),      QRect(138, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(325, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(288, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(475, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(438, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(513, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(588, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(663, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


//    {QSTR("-- --"),                    D_FONT_BOLD(6),      QRect(105, 395,  140,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(252, 393,  70,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2Mainfuse1         },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(327, 393,  70,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR2Mainfuse2         },
//    //{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(402, 393,  70,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3Mainfuse1         },
//    {QSTR(""),                 D_FONT_BOLD(6),      QRect(477, 393,  70,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR3Mainfuse2         },
//    //{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                 D_FONT_BOLD(6),      QRect(554, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR7Mainfuse1         },
//    //{QSTR(""),                 D_FONT_BOLD(6),      QRect(590, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS2_LABEL_CAR7Mainfuse2         },
//    {QSTR("-- --"),                    D_FONT_BOLD(6),      QRect(555, 395,  140,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

//  //  {QSTR("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_ATOMODE               },
//    {QSTR("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_NETMODE               },
//    {QSTR("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_CONTRAVARIANTMODE     },
//    {QSTR("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_WASHCARMODE           },
////    {QSTR("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),           Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBCARS2_BUTTON_EMERGENCYRESCUE      },


    //{QSTR("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_ATOMODE         },
    //{QSTR("网络模式"),          D_FONT_BOLD(8),      QRect(18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_NETMODE         },
    {QSTR("高加速模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_HIGHACCEMODE         },
    {QSTR("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_WASHCARMODE         },
    {QSTR("紧急运行模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85+20,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS2_LABEL_EMERGENCYMODE         },
    //    {QSTR("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYRESCUE         },
    //    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST         },
    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(627, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_FASPAGE         },
      {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST         },


//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEDOWN            },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBCARS2_BUTTON_PAGEUP              },

};
int g_CarStatus2RomLen = sizeof(g_PicRom_CarStatus2)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCarStatus2Page,CPage)
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
        ON_BTNCLK(ID_PIBCARS2_BUTTON_EMERGENCYBROADCAST, OnEMERGENCYBROADCASTpageBtnClk)

END_MESSAGE_MAP()

CCarStatus2Page::CCarStatus2Page()
{
}

void CCarStatus2Page::OnUpdatePage()
{

    updateTrain(ID_PIBCARS2_TRAIN);
    updateArrow(ID_PIBCARS2_ARROW_LEFT,ID_PIBCARS2_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS2_TRAIN);//3.5

    UpdateHSCB();
    UpdateLB1();
    UpdateLB2();

    UpdateDrawBCUForce();
    //UpdateDynamorev();
    UpdateMainfuse();
    //UpdateIES();
    UpdateATOMode();

    //UpdateNETMode();
    //UpdateContravariant();
    UpdateHighAcceMode();
    UpdateWashCarMode();
    //UpdateTowMode();
    UpdateEmergencyMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    UpdateTcu_Enable();
    UpdateTCUStatus();
    UpdateFCVoltage();
    UpdateTorquecom();
    //UpdateLoador();
    //UpdateU_current();
    //UpdateW_current();
    //UpdateTorquecurrent();
    UpdateCurrentEValue();
    //UpdateMainLineBreaker();
    UpdateBHBClose();

#ifdef PAGE_HEADER_OLD
    //    UpdateEmergencyBroadcast();

    UpdateCommInterrupt(ID_PIBCARS2_COMMINTERRUPT);

    updateFault(ID_PIBCARS2_ICON_WARNNING);

#endif

}



void CCarStatus2Page::OnInitPage()
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
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_EMERGENCYMODE))->SetBorderColor(Qt::white);

}

void CCarStatus2Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN4))->SetButtonType(BUTTON_STATION1);
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

void CCarStatus2Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CCarStatus2Page::OnEMERGENCYBROADCASTpageBtnClk()
{
    //pageback=2;
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus2Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus2Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus2Page::OnComBtn3Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS1);
        ChangePage(PAGE_INDEX_CARSTATUS4);
    }

    void CCarStatus2Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus2Page::OnComBtn5Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS3);
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus2Page::OnComBtn6Clk()
    {
        //ChangePage(PAGE_INDEX_HVACSETTING);
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus2Page::OnComBtn7Clk()
    {
         //ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus2Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#else
    void CCarStatus2Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus2Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus2Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus2Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus2Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus2Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#endif



void CCarStatus2Page::OnPageUpBtnClk()
{
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS3);
#endif

}

void CCarStatus2Page::OnPageDownBtnClk()
{
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS1);
#endif

}

void CCarStatus2Page::UpdateAValue()
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

void CCarStatus2Page::UpdateVValue()
{

#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBCARS2_LABEL_V);

#endif
}

void CCarStatus2Page::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBCARS2_LABEL_TRACTIONMODEL);

#endif

}

void CCarStatus2Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void CCarStatus2Page::UpdateMainfuse()
{

    int CAR2_Mainfuse1_OK  = 0;
    int CAR2_Mainfuse2_OK  = 0;
    int CAR4_Mainfuse1_OK  = 0;
    int CAR4_Mainfuse2_OK  = 0;
    int CAR7_Mainfuse1_OK  = 0;
    int CAR7_Mainfuse2_OK  = 0;

    if (Bit( DI_120_3, 2) == 1)
    {
        CAR2_Mainfuse2_OK = 1;
    }
    else
    {
        CAR2_Mainfuse2_OK = 0;
    }

    if (Bit( DI_120_3, 16)== 1)
    {
        CAR2_Mainfuse1_OK = 1;
    }
    else
    {
        CAR2_Mainfuse1_OK = 0;
    }

    if (Bit( DI_140_3, 2) == 1)
    {
        CAR4_Mainfuse2_OK = 1;
    }
    else
    {
        CAR4_Mainfuse2_OK = 0;
    }

    if (Bit( DI_140_3, 16)== 1)
    {
        CAR4_Mainfuse1_OK = 1;
    }
    else
    {
        CAR4_Mainfuse1_OK = 0;
    }

    if (Bit( DI_170_3, 2) == 1)
    {
        CAR7_Mainfuse2_OK = 1;
    }
    else
    {
        CAR7_Mainfuse2_OK = 0;
    }

    if (Bit( DI_170_3, 16)== 1)
    {
        CAR7_Mainfuse1_OK = 1;
    }
    else
    {
        CAR7_Mainfuse1_OK = 0;
    }

//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2Mainfuse1, CAR2_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR2Mainfuse2, CAR2_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR3Mainfuse1, CAR4_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR3Mainfuse2, CAR4_Mainfuse2_OK);
    //SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR7Mainfuse1, CAR7_Mainfuse1_OK);
    //SetMainfuseLabelColor(ID_PIBCARS2_LABEL_CAR7Mainfuse2, CAR7_Mainfuse2_OK);

}

void CCarStatus2Page::UpdateHSCB()
{
   // if (Bit(CCU_HMI_222_9, 2 )  == 0)
    if (Bit(CCU_HMI_308_7, 12 )  == 0)
    {
        HSCB_color1 = 3;
    }
    else
    {
        //if (Bit( TCU_510_14, 10 ) )
      //if (Bit( TCU_510_12, 4 ) )
        //{
        if (Bit( TCU_510_11, 11 ) )
          {
            if (Bit( TCU_510_8, 15 ) )//在闭合的情况下检测电路才会过流
                HSCB_color1 = 2;
                else
                HSCB_color1 = 1;
          }
          else
          {
            HSCB_color1 = 0;
          }
//       }
//      else
//      {
//          HSCB_color1 = 2;
//      }
    }

    //if (Bit(CCU_HMI_222_9, 1 )   == 0)
    if (Bit(CCU_HMI_308_7, 11 )  == 0)
    {
        HSCB_color2 = 3;//通信异常
    }
    else
    {
        //if (Bit( TCU_520_14, 10 ) )
//      if (Bit( TCU_520_12, 4 ) )
//        {
          if (Bit( TCU_520_11, 11 ) )
          {
              if (Bit( TCU_520_8, 15 ) )
                  HSCB_color2 = 2;
                  else
                 HSCB_color2 = 1;//闭合
          }
          else
          {
            HSCB_color2 = 0;//断开
          }
//        }
//      else
//       {
//          HSCB_color2 = 2;//故障，没有办法使能
//       }

//        if (Bit( TCU_521_7, 8 ) )
//        {
//            HSCB_color2 = 2;//故障
//        }
//        if (Bit( TCU_521_7, 7 ))
//        {
//            HSCB_color2 = 2;//故障
//        }
    }

//    if (Bit(CCU_HMI_222_9, 16 ) == 0)
//    {
//        HSCB_color3 = 3;
//    }
//    else
//    {
//        if (Bit( TCU_530_14, 10 ) )
//        {
//            HSCB_color3 = 1;
//        }
//        else
//        {
//            HSCB_color3 = 0;
//        }
//        if (Bit( TCU_531_7, 8 ) )
//        {
//            HSCB_color3 = 2;
//        }
//        if (Bit( TCU_531_7, 7 ) )
//        {
//            HSCB_color3 = 2;
//        }
//    }

//    if (Bit(CCU_HMI_222_9, 15 )== 0)
//    {
//        HSCB_color4 = 3;
//    }
//    else
//    {
//        if (Bit( TCU_540_14, 10 ) )
//        {
//            HSCB_color4 = 1;
//        }
//        else
//        {
//            HSCB_color4 = 0;
//        }
//        if (Bit( TCU_541_7, 8 ) )
//        {
//            HSCB_color4 = 2;
//        }
//        if (Bit( TCU_541_7, 7 ) )
//        {
//            HSCB_color4 = 2;
//        }
//    }

//    if (Bit(CCU_HMI_222_9, 14 )== 0)
//    {
//        HSCB_color5 = 3;
//    }
//    else
//    {
//        if (Bit( TCU_550_14, 10 ))
//        {
//            HSCB_color5 = 1;
//        }
//        else
//        {
//            HSCB_color5 = 0;
//        }
//        if (Bit( TCU_551_7, 8 ) )
//        {
//            HSCB_color5 = 2;
//        }
//        if (Bit( TCU_551_7, 7 ))
//        {
//            HSCB_color5 = 2;
//        }
//    }

//    if (Bit(CCU_HMI_222_9, 13 )== 0)
//    {
//        HSCB_color6 = 3;
//    }
//    else
//    {
//        if (Bit( TCU_560_14, 10 ))
//        {
//            HSCB_color6 = 1;
//        }
//        else
//        {
//            HSCB_color6 = 0;
//        }
//        if (Bit( TCU_561_7, 8 ))
//        {
//            HSCB_color6 = 2;
//        }
//        if (Bit( TCU_561_7, 7 ) )
//        {
//            HSCB_color6 = 2;
//        }
//    }

    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA2HSCBSTATUS, HSCB_color1);
    SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA3HSCBSTATUS, HSCB_color2);
    //SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA4HSCBSTATUS, HSCB_color3);
    //SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA5HSCBSTATUS, HSCB_color4);
    //SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA6HSCBSTATUS, HSCB_color5);
    //SetHscbLabelColor(ID_PIBCARS2_LABEL_CRA7HSCBSTATUS, HSCB_color6);
}

void CCarStatus2Page::UpdateLB1()
{
  if(Bit(CCU_HMI_308_7,12)==1)
   {
      if (Bit( TCU_510_11, 10 ))
       {
         if(Bit( TCU_510_9, 13 ) )
          LB11_color = 2;//故障 闭合后无法断开
         else
          LB11_color = 1;//闭合（正常）
       }
       else
       {
           if (Bit( TCU_510_8, 14 ))
            LB11_color = 2;//故障 无法闭合
           else
            LB11_color = 0;//断开（正常）
       }
//     if ( (Bit( TCU_510_8, 14 ) ) || (Bit( TCU_510_9, 13 ) ) )
//       {
//        LB11_color = 2;//故障
//       }
    }
   else
    {
       LB11_color = 3;//通信异常
    }


if(Bit(CCU_HMI_308_7,11)==1)
   {
    if (Bit( TCU_520_11, 10 ))
    {
      if (Bit( TCU_520_9, 13 ) )
        LB12_color = 2;
      else
        LB12_color = 1;
    }
    else
    {
        if (Bit( TCU_520_8, 14 ) )
          LB12_color = 2;
        else
          LB12_color = 0;
    }
//    if ( (Bit( TCU_520_8, 14 ) ) || (Bit( TCU_520_9, 13 ) ) )
//    {
//        LB12_color = 2;
//    }
  }
else
{
    LB12_color = 3;
}
//    if (Bit( TCU_530_15, 7 ) )
//    {
//        KIC3_color = 1;

//    }
//    else
//    {
//        KIC3_color = 0;
//    }
//    if ( (Bit( TCU_531_8, 6 ) ) || (Bit( TCU_531_8, 5 ) ) )
//    {
//        KIC3_color = 2;
//    }

//    if (Bit( TCU_540_15, 7 ) )
//    {
//        KIC4_color = 1;

//    }
//    else
//    {
//        KIC4_color = 0;
//    }
//    if ( (Bit( TCU_541_8, 6 ) ) || (Bit( TCU_541_8, 5 ) ) )
//    {
//        KIC4_color = 2;
//    }

//    if (Bit( TCU_550_15, 7 ) )
//    {
//        KIC5_color = 1;

//    }
//    else
//    {
//        KIC5_color = 0;
//    }
//    if ( (Bit( TCU_551_8, 6 ) ) || (Bit( TCU_551_8, 5 ) ) )
//    {
//        KIC5_color = 2;
//    }

//    if (Bit( TCU_560_15, 7 ) )
//    {
//        KIC6_color = 1;

//    }
//    else
//    {
//        KIC6_color = 0;
//    }
//    if ( (Bit( TCU_561_8, 6 ) ) || (Bit( TCU_561_8, 5 ) ) )
//    {
//        KIC6_color = 2;
//    }


    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA2LB1STATE, LB11_color);
    SetKicLabelColor(ID_PIBCARS2_LABEL_CRA3LB1STATE, LB12_color);
    //SetKicLabelColor(ID_PIBCARS2_LABEL_CRA4KICSTATE, KIC3_color);
    //SetKicLabelColor(ID_PIBCARS2_LABEL_CRA5KICSTATE, KIC4_color);
   // SetKicLabelColor(ID_PIBCARS2_LABEL_CRA6KICSTATE, KIC5_color);
    //SetKicLabelColor(ID_PIBCARS2_LABEL_CRA7KICSTATE, KIC6_color);

}

void CCarStatus2Page::UpdateLB2()
{

    if(Bit(CCU_HMI_308_7,12)==1)
     {
        if (Bit( TCU_510_11, 9 ))
         {
          LB21_color = 1;//闭合
         }
         else
         {
             if ( Bit( TCU_510_9, 1)  )
               {
                LB21_color = 2;//故障
               }
             else
              {
              LB21_color = 0;//断开
              }
         }

      }
     else
      {
         LB21_color = 3;//通信异常
      }

  if(Bit(CCU_HMI_308_7,11)==1)
     {
      if (Bit( TCU_520_11, 9 ))
      {
          LB22_color = 1;
      }
      else
      {
          if ( Bit( TCU_520_9, 1 ) )
          {
              LB22_color = 2;
          }
          else
          {
              LB22_color = 0;
          }
      }

    }
  else
  {
      LB22_color = 3;
  }

//    if (Bit( TCU_530_15, 6 ) )
//    {
//        KCC3_color = 1;

//    }
//    else
//    {
//        KCC3_color = 0;
//    }
//    if (  (Bit( TCU_531_8, 4 ) ) || (Bit( TCU_531_8, 3 ) )  )
//    {
//        KCC3_color = 2;
//    }

//    if (Bit( TCU_540_15, 6 ))
//    {
//        KCC4_color = 1;

//    }
//    else
//    {
//        KCC4_color = 0;
//    }
//    if ( (Bit( TCU_541_8, 4 ) ) || (Bit( TCU_541_8, 3 ) )  )
//    {
//        KCC4_color = 2;
//    }

//    if (Bit( TCU_550_15, 6 ))
//    {
//        KCC5_color = 1;

//    }
//    else
//    {
//        KCC5_color = 0;
//    }
//    if ( (Bit( TCU_551_8, 4 ) ) || (Bit( TCU_551_8, 3 ) )  )
//    {
//        KCC5_color = 2;
//    }

//    if (Bit( TCU_560_15, 6 ))
//    {
//        KCC6_color = 1;

//    }
//    else
//    {
//        KCC6_color = 0;
//    }
//    if ( (Bit( TCU_561_8, 4 ) ) || (Bit( TCU_561_8, 3 ) )  )
//    {
//        KCC6_color = 2;
//    }
    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA2LB2STATE, LB21_color);
    SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA3LB2STATE, LB22_color);
    //SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA4KCCCSTATE, KCC3_color);
    //SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA5KCCCSTATE, KCC4_color);
    //SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA6KCCCSTATE, KCC5_color);
    //SetKcccLabelColor(ID_PIBCARS2_LABEL_CRA7KCCCSTATE, KCC6_color);
}
/*void CCarStatus2Page::UpdateMainLineBreaker()
{
//    if(Bit(CCU_HMI_308_9,16))//司控室激活  仅显示硬线状态，无需判断司机钥匙是否激活
//        {
            if(Bit(CCU_HMI_308_6,6))//TC1的DI3在线
            {
                if(Bit(RIOM_111_14,16))//母线断路器断开按钮被按下
                {
                   ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2MAINLINEBREAKER))->SetCtrlBKColor(Qt::green);
                }
                else
                {
                   ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2MAINLINEBREAKER))->SetCtrlBKColor(Qt::black);
                }
            }
             else
            {
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2MAINLINEBREAKER))->SetCtrlBKColor(Qt::white);
            }

//    if(Bit(CCU_HMI_308_9,15))//司控室激活
//        {
            if(Bit(CCU_HMI_308_7,6))//TC2的DI3在线
            {
                if(Bit(RIOM_141_14,16))//母线断路器断开按钮被按下
                {
                   ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3MAINLINEBREAKER))->SetCtrlBKColor(Qt::green);
                }
                else
                {
                   ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3MAINLINEBREAKER))->SetCtrlBKColor(Qt::black);
                }
            }
             else
            {
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3MAINLINEBREAKER))->SetCtrlBKColor(Qt::white);
            }

}*/

void CCarStatus2Page::UpdateK750()
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

void CCarStatus2Page::UpdateATC()
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

void CCarStatus2Page::UpdatePIS()
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

void CCarStatus2Page::UpdateDrawBCUForce()
{

    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5%256)));
     TCU1_Fdbk=DivNum(TCU_511_2%256*10,25);
     TCU2_Fdbk=DivNum(TCU_521_2%256*10,25);

     char buff[10] = {'\0'};
     memset(buff, '\0', 10);
     sprintf(buff, "%.1f", TCU1_Fdbk);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString(buff).append(QSTR(" %")));
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TCU2_Fdbk);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString(buff).append(QSTR(" %")));
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6/256)));
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7%256)));
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7/256)));
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8%256)));
    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8/256)));

//    if(CCU_HMI_222_5%256>127)
//      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256-256));
//    else
//      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256));

//    if(CCU_HMI_222_5/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256));

//    if(CCU_HMI_222_6%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256));

//    if(CCU_HMI_222_6/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256));

//    if(CCU_HMI_222_7%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256));

//    if(CCU_HMI_222_7/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256));

//    if(CCU_HMI_222_8%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256));

//    if(CCU_HMI_222_8/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256));
}
void CCarStatus2Page::UpdateTorquecom()

{     TCU1_TorCom=DivNum(TCU_511_4%256*10,25);
     TCU2_TorCom=DivNum(TCU_521_4%256*10,25);

     char buff[10] = {'\0'};
     memset(buff, '\0', 10);
     sprintf(buff, "%.1f", TCU1_TorCom);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU1TORQUECOM))->SetCtrlText(QString(buff).append(QSTR(" %")));
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TCU2_TorCom);
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU2TORQUECOM))->SetCtrlText(QString(buff).append(QSTR(" %")));
}

//void CCarStatus2Page::UpdateLoador()
//{

//     TCU1_Loador=DivNum(TCU_511_1/256*10,25);
//     TCU2_Loador=DivNum(TCU_521_1/256*10,25);

//     char buff[10] = {'\0'};
//     memset(buff, '\0', 10);
//     sprintf(buff, "%.1f", TCU1_Loador);
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU1LOADOR))->SetCtrlText(QString(buff).append(QSTR(" %")));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", TCU2_Loador);
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU2LOADOR))->SetCtrlText(QString(buff).append(QSTR(" %")));
//}

//void CCarStatus2Page::UpdateDynamorev()//线电压
//{
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2DYNAMOREV))->SetCtrlText(QString::number(TCU_511_3/256*10));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3DYNAMOREV))->SetCtrlText(QString::number(TCU_521_3/256*10));
//    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA4DYNAMOREV))->SetCtrlText(QString::number(TCU_530_5));
//    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA5DYNAMOREV))->SetCtrlText(QString::number(TCU_540_5));
//    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA6DYNAMOREV))->SetCtrlText(QString::number(TCU_550_5));
//    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA7DYNAMOREV))->SetCtrlText(QString::number(TCU_560_5));
//}

//void CCarStatus2Page::UpdateU_current()//U相电流
//{
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU1UCURRENT))->SetCtrlText(QString::number(TCU_511_2/256*8).append(" A"));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU2UCURRENT))->SetCtrlText(QString::number(TCU_521_2/256*8).append(" A"));
//}

//void CCarStatus2Page::UpdateW_current()//W相电流
//{
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU1WCURRENT))->SetCtrlText(QString::number(TCU_511_3%256*8).append(" A"));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU2WCURRENT))->SetCtrlText(QString::number(TCU_521_3%256*8).append(" A"));
//}

void CCarStatus2Page::UpdateFCVoltage()//滤波电容电压
{
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2FILTERCVOLTAGE))->SetCtrlText(QString::number(TCU_510_13/256*10).append(" V"));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3FILTERCVOLTAGE))->SetCtrlText(QString::number(TCU_520_13/256*10).append(" V"));

}

//void CCarStatus2Page::UpdateTorquecurrent()//转矩电流
//{
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU1TORQUECUR))->SetCtrlText(QString::number(TCU_510_15%256*8).append(" A"));
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU2TORQUECUR))->SetCtrlText(QString::number(TCU_520_15%256*8).append(" A"));
//}
void CCarStatus2Page::UpdateCurrentEValue()//电流有效值
{
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CURRENTEVALUE1))->SetCtrlText(QString::number(TCU_510_14%256*4).append(" A"));
    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CURRENTEVALUE2))->SetCtrlText(QString::number(TCU_520_14%256*4).append(" A"));
}
void CCarStatus2Page::UpdateBHBClose()//BHB辅助触点闭合 仅MP2车
{
//    if(Bit(CCU_HMI_308_6,16))//MP1车DI1在线
//    {
//       if(Bit(RIOM_121_12,6))//BHB辅助触点闭合
//          {
//             ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2BHBCLOSE))->SetCtrlBKColor(Qt::green);//闭合
//          }
//       else
//          {
//              ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2BHBCLOSE))->SetCtrlBKColor(Qt::black);//未闭合
//          }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA2BHBCLOSE))->SetCtrlBKColor(Qt::white);//DI不在线
//    }

    if(Bit(CCU_HMI_308_6,12))//MP2车DI1在线
    {
       if(Bit(RIOM_131_12,6))//BHB辅助触点闭合
          {
             ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3BHBCLOSE))->SetCtrlBKColor(Qt::green);//闭合
          }
       else
          {
              ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3BHBCLOSE))->SetCtrlBKColor(Qt::black);//未闭合
          }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CRA3BHBCLOSE))->SetCtrlBKColor(Qt::white);//DI不在线
    }
}

void CCarStatus2Page::UpdateATOMode()
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


//void CCarStatus2Page::UpdateNETMode()
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

//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_NETMODE))->SetCtrlText(net_mode);
//    SetNETModeLabelColor(ID_PIBCARS2_LABEL_NETMODE, modecolor);
//}

void CCarStatus2Page::UpdateHighAcceMode()//高加速模式
{
//    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
//        {

//            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//      if (Bit(CCU_HMI_308_6, 6 )==1)
//          {
//          if ( (Bit( RIOM_111_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_510_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }
//      if (Bit(CCU_HMI_308_7, 6 )==1)
//          { if ( (Bit( RIOM_141_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_520_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }

//        }

//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->HideLabel();
//        }

if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
    {

            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
      if (Bit(CCU_HMI_308_6, 6 )&&Bit( RIOM_111_14, 12 ))
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
          }
      else if (Bit(CCU_HMI_308_7, 6 )&&Bit( RIOM_141_14, 12 ))
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
          }
      else
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->HideLabel();
          }

     }

    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_HIGHACCEMODE))->HideLabel();
    }

  }


void CCarStatus2Page::UpdateEmergencyMode()//紧急运行模式
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TOWMODE))->HideLabel();

//    }

//}
    //if (Bit(CCU_HMI_308_9, 16 )|| Bit(CCU_HMI_308_9, 15 ))
    if (Bit(CCU_HMI_308_6, 8 )|| Bit(CCU_HMI_308_7, 8 ))
        {
            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
          if (Bit(CCU_HMI_308_6, 8 )&&Bit( RIOM_111_12, 2 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
              }
          else if (Bit(CCU_HMI_308_7, 8 )&&Bit( RIOM_141_12, 2 ) )
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
              }
          else
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_EMERGENCYMODE))->HideLabel();
              }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_EMERGENCYMODE))->HideLabel();
        }
    }

void CCarStatus2Page::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
//
//    }
//    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
//    {

//            if(Bit(DI_110_1,9))
//            {
//                if (1 == Bit( DI_110_2, 9 ) )
//                {

//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

//                }
//                else
//                {
//                      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
//                }
//            }
//            if(Bit(DI_180_1,9))
//            {
//                if (1 == Bit( DI_180_2, 9 ) )
//                {

//                    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

//                }
//                else
//                {
//                      ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
//                }
//            }

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
//    }
    //if(Bit(CCU_HMI_308_6,6)||Bit(CCU_HMI_308_7,6))//RIOM DI3在线
    if(Bit(CCU_HMI_308_9,16))
        {
               if(Bit(CCU_HMI_308_6,6)&&Bit( RIOM_111_14, 6 ))
                    {

                        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
                    }
         }
//       else
//      {
//          ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
//      }
    else if(Bit(CCU_HMI_308_9,15))
       {
                if(Bit(CCU_HMI_308_7,6)&&Bit( RIOM_141_14, 6 ))
                    {

                        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
                    }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_WASHCARMODE))->HideLabel();
        }

}

//void CCarStatus2Page::UpdateEmergencyBroadcast()
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

void CCarStatus2Page::SetNETModeLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetATOModeLabelColor(int id,int colorVal)
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


void CCarStatus2Page::SetCommInterruptLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetHscbLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetKicLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetKcccLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetK750LabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetAtcLabelColor(int id, int colorVal)
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

void CCarStatus2Page::SetPisLabelColor(int id, int colorVal)
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

//void CCarStatus2Page::OnEmergencyResuce()
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

void CCarStatus2Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CCarStatus2Page::UpdateTcu_Enable()
{
    //if (1 == Bit(DI_110_1,16) )
    if (1 == Bit(TCU_518_8,8) )
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE1))->HideLabel();

    }
    //if (1 == Bit(DI_180_1,16) )
    if (1 == Bit(TCU_528_8,8) )
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_TCU_ENABLE2))->HideLabel();

    }
}



void CCarStatus2Page::UpdateTCUStatus()
{
    if(Bit(CCU_HMI_308_7, 12 )==1)  //TCU1在线
    {
        if(Bit( TCU_510_11, 14)==0)
        {
            if(Bit( TCU_510_12, 5)==1)
            TCU1_status=2;//VVVF故障
            else
            TCU1_status=1;//正常
        }
        else
        {
            TCU1_status=5;//VVVF已切除
        }
    }
   else
   {
       TCU1_status=3;//通信故障
   }

   if(Bit(CCU_HMI_308_7, 11 )==1)  //TCU2在线
   {
       if(Bit( TCU_520_11, 14)==0)
       {
           if(Bit( TCU_520_12, 5)==1)

           TCU2_status=2;//VVVF故障

           else

           TCU2_status=1;//正常
       }
       else
       {
           TCU2_status=5;//VVVF已切除优先级较高
       }
   }
  else
  {
      TCU2_status=3;//通信故障
  }

    SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
    SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

        }

void CCarStatus2Page::SetTCUStatusLsbelColor(int id,int colorVal)
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

void CCarStatus2Page::SetMainfuseLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }

    return;
}

//void CCarStatus2Page::UpdateIES()
//{
//    if (Bit(CCU_HMI_222_9, 2 ) )
//    {
//        if (Bit( TCU_511_6, 16 ) )
//        {
//            IES1_string = QSTR("受电弓位");
//        }
//        if (Bit( TCU_511_6, 15 ) )
//        {
//            IES1_string = QSTR("接地位");
//        }
//        if (Bit( TCU_511_6, 14 ) )
//        {
//            IES1_string = QSTR("车间电源");
//        }
//        if ( ( TCU_511_6&57344) == 0)
//        {
//            IES1_string = QSTR("-- --");
//        }
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        IES1_string = QSTR("");
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlBKColor(Qt::white);;

//    }

//    if (Bit(CCU_HMI_222_9, 16 ) )
//    {
//        if (Bit( TCU_531_6, 16 ) )
//        {
//            IES3_string = QSTR("受电弓位");
//        }
//        if (Bit( TCU_531_6, 15 ) )
//        {
//            IES3_string = QSTR("接地位");
//        }
//        if (Bit( TCU_531_6, 14 ) )
//        {
//            IES3_string = QSTR("车间电源");
//        }
//        if ( ( TCU_531_6&57344) == 0)
//        {
//            IES3_string = QSTR("-- --");
//        }
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        IES3_string = QSTR("");
//        ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlBKColor(Qt::white);;

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
//        //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::white);;

//    }



//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR2IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3IESSTATE))->SetCtrlText(IES3_string);
//    //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR8IESSTATE))->SetCtrlText(IES2_string);
//}
