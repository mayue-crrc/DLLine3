#include "CCarStatus1Page.h"

ROMDATA g_PicRom_CarStatus1[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QSTR("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW

    //D_COMMON_PAGE_HEADER_NEW(QSTR("车辆状态") )
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("辅助") )
    {"",                          D_FONT_BOLD(10),      QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QSTR("车辆状态") )

    {QSTR("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),         Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS1_COMMINTERRUPT              },
    {QSTR("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_V                    },

    {QSTR("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_A                    },

    {QSTR("牵引*制动级位"),         D_FONT_BOLD(8),      QRect(470,  45, 150,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_TRACTIONMODEL        },

    {QSTR("速度"),                 D_FONT_BOLD(8),       QRect(630,  45, 80,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                    D_FONT_BOLD(8),       QRect(630,  66, 80,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_SPEED                },

    {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBCARS1_ICON_WARNNING              },
    {"",                          D_FONT_BOLD(5),      QRect(178, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
    {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
    {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },
#endif

    {"",                          D_FONT_BOLD(6),      QRect( 10, 150, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(250, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(550, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    /*{"",                          D_FONT_BOLD(6),      QRect(475, 180,   1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(550, 180,   1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(625, 180,   1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 180,   1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },*/

    {QSTR("车号"),                 D_FONT_BOLD(7),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("辅助系统"),              D_FONT_BOLD(7),      QRect( 11, 181,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("SIV输入电压"),              D_FONT_BOLD(7),      QRect( 11, 211,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
  //  {QSTR("烟火报警"),               D_FONT_BOLD(6),      QRect( 11, 241,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QSTR("SIV输出电压"),             D_FONT_BOLD(7),      QRect( 11, 241,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("SIV输出频率"),             D_FONT_BOLD(7),      QRect( 11, 271,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    //{QSTR("充电机输出电压"),             D_FONT_BOLD(6),      QRect( 11, 361-60,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("SIV输出电流"),             D_FONT_BOLD(7),      QRect( 11, 301,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("蓄电池电压"),              D_FONT_BOLD(7),      QRect( 11, 331,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("蓄电池温度"),            D_FONT_BOLD(7),      QRect( 11, 361,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QSTR("转向架载荷"),            D_FONT_BOLD(6),      QRect( 11, 421,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QSTR("逃生门状态"),            D_FONT_BOLD(6),      QRect( 11, 451,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QSTR("1"),                   D_FONT_BOLD(8),      QRect(105, 151,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("2"),                   D_FONT_BOLD(8),      QRect(255, 151,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("3"),                   D_FONT_BOLD(8),      QRect(405, 151,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("4"),                   D_FONT_BOLD(8),      QRect(555, 151,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QSTR("5"),                   D_FONT_BOLD(6),      QRect(403, 181,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QSTR("6"),                   D_FONT_BOLD(6),      QRect(478, 181,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QSTR("7"),                   D_FONT_BOLD(6),      QRect(553, 181,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QSTR("8"),                   D_FONT_BOLD(6),      QRect(628, 181,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    //受电弓状态
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(103, 214,  70,  22),          Qt::white,             Qt::transparent,             CONTROL_LABEL,          ID_IGNORE          },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(178, 212,  70,  26),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2Pantograph        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 211,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(328, 212,  70,  26),          Qt::white,                Qt::yellow,               CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4Pantograph        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 211,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 211,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(553, 212,  70,  26),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7Pantograph        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(628, 214,  70,  22),          Qt::white,             Qt::transparent,                CONTROL_LABEL,          ID_IGNORE          },

//    //抑制扩展
//    {QSTR("抑制扩展"),                 D_FONT_BOLD(6),      QRect(103, 215,  140,  23),          Qt::black,             Qt::green,             CONTROL_LABEL,          ID_PIBCARS1_LABEL_InhibitKAUXClose1          },
//    {QSTR("- -"),                    D_FONT_BOLD(6),      QRect(178, 215,  140,  23),          Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 215,  140,  23),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("抑制扩展"),                 D_FONT_BOLD(6),      QRect(628, 215,  140,  23),          Qt::black,             Qt::green,                CONTROL_LABEL,       ID_PIBCARS1_LABEL_InhibitKAUXClose2          },

    //输入电压
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(105, 215,  140,  23),          Qt::white,             Qt::black,             CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU1INVOLTAGE          },
    {QSTR("-- --"),                    D_FONT_BOLD(12),      QRect(255, 215,  140,  23),          Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(405, 215,  140,  23),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(10),      QRect(555, 215,  140,  23),          Qt::white,             Qt::black,                CONTROL_LABEL,       ID_PIBCARS1_LABEL_ACU2INVOLTAGE          },
//输出电压
    {QSTR(""),                  D_FONT_BOLD(10),      QRect(105, 241,  140,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU1OUTVOLTAGE         },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 241,  140,  23),         Qt::white,               Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("-- --"),                  D_FONT_BOLD(12),      QRect(405, 241,  140,  23),          Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR(""),                   D_FONT_BOLD(10),      QRect(555, 241,  140,  23),          Qt::white,                Qt:: black,          CONTROL_LABEL,           ID_PIBCARS1_LABEL_ACU2OUTVOLTAGE        },
//输出频率
{QSTR(""),                  D_FONT_BOLD(10),      QRect(105, 271,  140,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU1FREQUENCY         },
{QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 271,  140,  23),         Qt::white,               Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QSTR("-- --"),                  D_FONT_BOLD(12),      QRect(405, 271,  140,  23),          Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE       },
{QSTR(""),                   D_FONT_BOLD(10),      QRect(555, 271,  140,  23),          Qt::white,                Qt:: black,          CONTROL_LABEL,           ID_PIBCARS1_LABEL_ACU2FREQUENCY        },

//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(103, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(153, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(178, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(228, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(253, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(303, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(328, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(358, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(403, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR5RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(453, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(478, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(528, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(553, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(603, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("75"),                  D_FONT_BOLD(6),      QRect(628, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8RIDINGRATE        },
//    {QSTR("%"),                   D_FONT_BOLD(6),      QRect(678, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },


   /* {"",                          D_FONT_BOLD(6),      QRect(138, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(213, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(288, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(363, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(438, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(513, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(588, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(663, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },*/

    /*{QSTR("4.1"),                 D_FONT_BOLD(6),      QRect(104, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1VEER1LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(141, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(179, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2VEER1LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(216, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(254, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3VEER1LOAD        },
    {QSTR("4.1"),                 D_FONT_BOLD(6),      QRect(291, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(329, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4VEER1LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(366, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(404, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR5VEER1LOAD        },
    {QSTR("3.9"),                 D_FONT_BOLD(6),      QRect(441, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR5VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(479, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6VEER1LOAD        },
    {QSTR("7.1"),                 D_FONT_BOLD(6),      QRect(516, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(554, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7VEER1LOAD        },
    {QSTR("7.1"),                 D_FONT_BOLD(6),      QRect(591, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7VEER2LOAD        },
    {QSTR("7.6"),                 D_FONT_BOLD(6),      QRect(629, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8VEER2LOAD        },
    {QSTR("7.1"),                 D_FONT_BOLD(6),      QRect(666, 424,  32,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8VEER1LOAD        },*/
//在线与否
      {QSTR(" "),                 D_FONT_BOLD(10),      QRect(105, 183,  140,  23),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS       },
    //{QSTR("380V\n25A"),                 D_FONT_BOLD(8),      QRect(103, 304-60,  70,  54),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS       },
   // {QSTR("V"),                   D_FONT_BOLD(8),      QRect(158, 304-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS_V     },
   // {QSTR("停机"),                 D_FONT_BOLD(8),      QRect(103, 322-60,  70,  18),          Qt::green,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL2_CAR1ASSISTSYS       },
   // {QSTR("120"),                 D_FONT_BOLD(8),      QRect(103, 339-60,  55,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL3_CAR1ASSISTSYS       },
   // {QSTR("A"),                   D_FONT_BOLD(8),      QRect(158, 339-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS_A     },
    {QSTR("扩展供电"),                 D_FONT_BOLD(8),      QRect(255, 183,  140,  23),          Qt::black,                Qt::green,          CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2KAUXSTATE        },
    {QSTR("-- --"),                 D_FONT_BOLD(8),      QRect(405, 183,  140,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2KAUXSTATE1        },
    /*{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 301-60,  70,  58),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 301-60,  70,  58),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 301-60,  70,  58),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 301-60,  70,  58),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("380V\n25A"),                 D_FONT_BOLD(8),      QRect(628, 304-60,  70,  54),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS       },*/
    {QSTR(" "),                 D_FONT_BOLD(10),      QRect(555, 183,  140,  23),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR4ASSISTSYS       },
//    {QSTR("V"),                   D_FONT_BOLD(8),      QRect(683, 304-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS_V     },
//    {QSTR("停机"),                 D_FONT_BOLD(8),      QRect(628, 322-60,  70,  18),          Qt::green,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL2_CAR6ASSISTSYS       },
//    {QSTR("120"),                 D_FONT_BOLD(8),      QRect(628, 339-60,  55,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL3_CAR6ASSISTSYS       },
//    {QSTR("A"),                   D_FONT_BOLD(8),      QRect(683, 339-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS_A     },

    //acu reset button
//    {QSTR("复位ACU"),              D_FONT_BOLD(8),      QRect(675, 310,  85,  40),          Qt::black,                Qt::gray,                  CONTROL_BUTTON,          ID_PIBCARS1_BUTTON_ACURESET     },

//    {QSTR("- -"),             D_FONT_BOLD(8),      QRect(103, 361-60,  70,  28),          Qt::white,                Qt::transparent,                  CONTROL_LABEL,                 ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(178, 361-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 361-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//   // {QSTR("- -"),                    D_FONT_BOLD(6),      QRect(328, 364-60,  70,  22),          Qt::black,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3KAUXSTATE        },
//    {QSTR("- -"),                    D_FONT_BOLD(6),      QRect(328, 364-60,  70,  22),          Qt::black,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 361-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 361-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 361-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),             D_FONT_BOLD(8),      QRect(628, 361-60,  70,  28),          Qt::white,                Qt::transparent,                  CONTROL_LABEL,                 ID_IGNORE        },
//    {QSTR("116 V"),                 D_FONT_BOLD(6),      QRect(103, 392-60,  70,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1VOLTAGE          },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(178, 391-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 391-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 391-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 391-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 391-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 391-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("114 V"),                 D_FONT_BOLD(6),      QRect(628, 392-60,  70,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6VOLTAGE          },

      {QSTR("116 V"),                 D_FONT_BOLD(10),      QRect(105, 305,  140,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU1OUTCURRENT          },
      {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(255, 305,  140,  23),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
      {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(405, 305,  140,  23),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
      {QSTR("114 V"),                 D_FONT_BOLD(10),      QRect(555, 305,  140,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU2OUTCURRENT          },


//    {QSTR("36 A"),                  D_FONT_BOLD(6),      QRect(105, 362,  140,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1CHARGECURRENT    },
//    {QSTR("-- --"),                 D_FONT_BOLD(6),      QRect(255, 362,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("-- --"),                 D_FONT_BOLD(6),      QRect(405, 361,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    /*{QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 421-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 421-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 421-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 421-60,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },*/
//    {QSTR("75 A"),                  D_FONT_BOLD(6),      QRect(555, 362,  140,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4CHARGECURRENT    },

    {QSTR("36 A"),                  D_FONT_BOLD(10),      QRect(105, 335,  140,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU1BATVOLTAGE    },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(255, 335,  140,  23),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(405, 335,  140,  23),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("75 A"),                  D_FONT_BOLD(10),      QRect(555, 335,  140,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ACU2BATVOLTAGE    },

//蓄电池温度
    {QSTR("38"),                  D_FONT_BOLD(10),      QRect(105, 452-90,  140,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1BATTERTEMP       },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(255, 451-90,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("-- --"),                 D_FONT_BOLD(12),      QRect(405, 451-90,  140,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("38"),                  D_FONT_BOLD(10),      QRect(555, 452-90,  140,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4BATTERTEMP       },

    /*{QSTR(""),                  D_FONT_BOLD(6),        QRect(103, 452,  70,  26),          Qt::white,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR       },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(178, 451,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 451,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 451,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 451,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 451,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 451,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QSTR(""),                  D_FONT_BOLD(6),        QRect(628, 452,  70,  26),          Qt::white,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR       },*/

//    {QSTR("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ATOMODE              },
//    {QSTR("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_NETMODE              },
//    {QSTR("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CONTRAVARIANTMODE    },
//    {QSTR("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_WASHCARMODE          },
////    {QSTR("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),          Qt::black,                Qt::lightGray,            CONTROL_BUTTON,         ID_PIBCARS1_BUTTON_EMERGENCYRESCUE     },

    //{QSTR("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_ATOMODE         },
    //{QSTR("网络模式"),          D_FONT_BOLD(8),      QRect(18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_NETMODE         },
    {QSTR("高加速模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_HIGHACCEMODE         },
    {QSTR("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_WASHCARMODE         },
    {QSTR("紧急运行模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85+20,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,         ID_PIBCARS1_LABEL_EMERGENCYMODE            },
    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,              ID_PIBCARS1_LABEL_EMERGENCYBROADCAST     },
    //    {QSTR("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE         },
    //    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },
    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(627, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_FASPAGE         },
    //  {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },


};
int g_CarStatus1RomLen = sizeof(g_PicRom_CarStatus1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Page,CPage)
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
#else
        ON_BTNCLK(  ID_PIBCARS1_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif

      //  ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS1_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBCARS1_BUTTON_FASPAGE, OnFASpageBtnClk)
        ON_BTNCLK(ID_PIBCARS1_LABEL_EMERGENCYBROADCAST, OnEMERGENCYBROADCASTpageBtnClk)

//        ON_BTNCLK(ID_PIBCARS1_BUTTON_ACURESET, OnACUReset)
END_MESSAGE_MAP()

CCarStatus1Page::CCarStatus1Page()
{
}

void CCarStatus1Page::OnUpdatePage()
{
    updateTrain(ID_PIBCARS1_TRAIN);
    updateArrow(ID_PIBCARS1_ARROW_LEFT,ID_PIBCARS1_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS1_TRAIN);//3.5



    UpdateACU();
    UpdateKAUX();
    UpdateVeerLoad();
    UpdateATOMode();
    UpdateNETMode();
    UpdateChargeCurrent();
    Update110Voltage();
    UpdateBatteryTemp();
    //UpdateInhibitKAUXClose();
     UpdateInPutVoltage();
     UpdateOutPutVoltage();
     UpdateOutFrequency();
     UpdateOutCurrent();
     UpdateBatVoltage();

    //UpdateContravariant();
     UpdateHighAcceMode();
    UpdateWashCarMode();
    //UpdateTowMode();
    UpdateEmergencyMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();

    UpdateEscapeDoor();




#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBCARS1_COMMINTERRUPT);

    updateFault(ID_PIBCARS1_ICON_WARNNING);

#endif
//    UpdateEmergencyBroadcast();

//    if (m_bResetACU)
//    {
//        static int times = 0;
//        times++;
//        if (times%times_nimes_n == 0)
//        {
//            ACU_test_timer--;
//            if (ACU_test_timer <= 0)
//            {
//                m_bResetACU = false;
//                BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮
//                ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->ChangeButtonState(LBUTTON_UP);
//            }
//        }
//    }

    //update acu button state
//    if(ACU_status1 == 3 || ACU_status2 == 3)
//    {
//        if(((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->IsHide())
//            ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->ShowButton();
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->HideButton();
//    }
}

void CCarStatus1Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

 //   ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_EMERGENCYMODE))->SetBorderColor(Qt::white);

   // ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->m_bAutoUpState = false;
}

void CCarStatus1Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    //((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("辅助状态"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("旁路状态"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("空调设置"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("故   障"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));

    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("辅助状态"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN5))->SetButtonType(BUTTON_STATION1);
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
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    ACU_test_timer = 3;
    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮

    this->InitPageHeader();
}

void CCarStatus1Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CCarStatus1Page::OnEMERGENCYBROADCASTpageBtnClk()
{
 //pageback=1;
 ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus1Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus1Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus1Page::OnComBtn3Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS1);
        ChangePage(PAGE_INDEX_CARSTATUS4);
    }

    void CCarStatus1Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus1Page::OnComBtn5Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS3);
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus1Page::OnComBtn6Clk()
    {
        //ChangePage(PAGE_INDEX_HVACSETTING);
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus1Page::OnComBtn7Clk()
    {
         //ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus1Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
    }
#else
    void CCarStatus1Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus1Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus1Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus1Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus1Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus1Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
    }
#endif



void CCarStatus1Page::OnPageUpBtnClk()
{
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS2);
#endif

}

void CCarStatus1Page::UpdateRidingRate()
{
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(train_status_data7));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(train_status_data8));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(train_status_data9));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(train_status_data10));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(train_status_data11));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(train_status_data12));


}

void CCarStatus1Page::UpdateACU()//辅助状态
{
  //  BitSet(comm_status_data86, 14,1 );
  //  BitSet(comm_status_data86, 14,1 );
    if(Bit(CCU_HMI_308_7, 10))
    {
        if(Bit(ACU_610_11,8)==0)
        {
            if(Bit(ACU_610_11,1)==0)
            {
            ACU_status1 = 0;//正常在线
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("  "));
            }
            else
            {
             ACU_status1 = 4;//SIV停机
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("停机"));
            }
        }
        else
        {
            ACU_status1 = 1;//故障
            if(Bit(ACU_610_8,8))
            {
              //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("过载"));
            }
            else if(Bit(ACU_610_8,7))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("IGBT过流"));
            }
            else if(Bit(ACU_610_8,15))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("SIV输出欠压"));
            }
            else if(Bit(ACU_610_9,5))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("过热"));
            }
            else if(Bit(ACU_610_9,1))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("SIV输出过压"));
            }
            else
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("  "));
            }
        }
    }
    else
    {
         ACU_status1 = 5;//不在线
         ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("  "));
    }

    if(Bit(CCU_HMI_308_7, 9))
    {
        if(Bit(ACU_620_11,8)==0)
        {
            if(Bit(ACU_620_11,1)==0)
            {
            ACU_status2 = 0;//正常在线
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("  "));
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("停机"));
                ACU_status2 = 4;//SIV停机
            }
        }
        else
        {
            ACU_status2 = 1;//故障
            if(Bit(ACU_620_8,8))
            {
              //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("过载"));
            }
            else if(Bit(ACU_620_8,7))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("IGBT过流"));
            }
            else if(Bit(ACU_620_8,15))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("SIV输出欠压"));
            }
            else if(Bit(ACU_620_9,5))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("过热"));
            }
            else if(Bit(ACU_620_9,1))
            {
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("输出过压"));
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("  "));
            }
        }
    }
    else
    {
         ACU_status2 = 5;//不在线
         ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("  "));
    }


//    if (Bit(CCU_HMI_222_9, 5 ) )
//    {
//        if (Bit( ACU_621_7, 16 ) || Bit( ACU_621_7, 15 ) || Bit( ACU_621_8, 6 ) )
//        {
//             if (Bit( ACU_620_8, 8 ) )
//             {
//                 ACU_status2 = 2;
//             }
//             if (Bit( ACU_621_7, 15 ) )
//             {
//                 ACU_status2 = 3;
//             }
//             if (Bit( ACU_621_7, 16 ) )
//             {
//                 ACU_status2 = 1;
//             }
//        }
//        else
//        {
//            ACU_status2 = 0;
//            if (Bit( ACU_621_7, 13 ) )
//            {
//                ACU_status2 = 4;
//            }
//        }
//    }
//    else
//    {
//        ACU_status2 = 5;
//    }


//    if ( 0 == ACU_status1 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V")+"\n"+QString::number(ACU_610_5/256 * 2).append(" A"));
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V"));


//    }
//    if ( 1 == ACU_status1 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText("");

//    }
//    if ( 2 == ACU_status1 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V")+"\n"+QString::number(ACU_610_5/256 * 2).append(" A"));
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V"));

//    }
//    if ( 3 == ACU_status1 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("可复位"));

//    }
//    if ( 4 == ACU_status1 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QSTR("停机"));

//    }
//    if ( 5 == ACU_status1 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText("");
//    }

//    if ( 0 == ACU_status2 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetTxtColor(Qt::black);
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V")+"\n"+QString::number(ACU_620_5/256 * 2).append(" A"));
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V"));

//    }
//    if ( 1 == ACU_status2 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText("");

//    }
//    if ( 2 == ACU_status2 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetTxtColor(Qt::white);
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V")+"\n"+QString::number(ACU_620_5/256 * 2).append(" A"));
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V"));

//    }
//    if ( 3 == ACU_status2 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("可复位"));

//    }
//    if ( 4 == ACU_status2 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText(QSTR("停机"));

//    }
//    if ( 5 == ACU_status2 )
//    {

//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS))->SetCtrlText("");
//    }


    SetAcuLabelColor(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS, ACU_status1);
    SetAcuLabelColor(ID_PIBCARS1_LABEL1_CAR4ASSISTSYS, ACU_status2);

}

void CCarStatus1Page::UpdateIES()
{
//    if (Bit( train_status2_data13, 13 ) )
//    {
//        if (Bit( train_status2_data13, 16 ) )
//        {
//            IES1_string = QSTR("集电靴");
//        }
//        if (Bit( train_status2_data13, 15 ) )
//        {
//            IES1_string = QSTR("接地");
//        }
//        if (Bit( train_status2_data13, 14 ) )
//        {
//            IES1_string = QSTR("车间电源");
//        }
//    }

//    if ( ( train_status2_data13&61440) == 0)
//    {
//        IES1_string = QSTR("- -");
//    }

//    if (Bit( train_status2_data13, 9 ) )
//    {
//        if (Bit( train_status2_data13, 12 ) )
//        {
//            IES2_string = QSTR("集电靴");
//        }
//        if (Bit( train_status2_data13, 11 ) )
//        {
//            IES2_string = QSTR("接地");
//        }
//        if (Bit( train_status2_data13, 10 ) )
//        {
//            IES2_string = QSTR("车间电源");
//        }
//    }

//    if ( ( train_status2_data13 & 3840) == 0)
//    {
//        IES2_string = QSTR("- -");
//    }

//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6IESSTATE))->SetCtrlText(IES2_string);
}

void CCarStatus1Page::UpdateKAUX()//扩展供电 仅MP1车
{


    int kaux_color1 = 0;
if(Bit(CCU_HMI_308_6,16)==1)
    {
        if (Bit(RIOM_121_12,7) == 0)
        {
            kaux_color1 = 0;
        }
        else if (Bit(RIOM_121_12,7) == 1)
        {
            kaux_color1 = 1;
        }
    }
else
    {
            kaux_color1 = 2;
    }

    SetKauxLabelColor(ID_PIBCARS1_LABEL_CAR2KAUXSTATE, kaux_color1);

//    int kaux_color2 = 0;
//if(Bit(CCU_HMI_308_6,12)==1)
//    {
//        if (Bit(RIOM_131_12,7) == 0)
//        {
//            kaux_color2 = 0;
//        }
//        else if (Bit(RIOM_131_12,7) == 1)
//        {
//            kaux_color2 = 1;
//        }
//    }
//else
//   {
//    kaux_color2 = 2;
//   }
//    //kaux_color = 1;
//    SetKauxLabelColor(ID_PIBCARS1_LABEL_CAR2KAUXSTATE1, kaux_color2);


}

void CCarStatus1Page::UpdateVeerLoad()
{
    int veerload1_color = 0;
    int veerload2_color = 0;
    int veerload3_color = 0;
    int veerload4_color = 0;
    int veerload5_color = 0;
    int veerload6_color = 0;
    int veerload7_color = 0;
    int veerload8_color = 0;
    int veerload9_color = 0;
    int veerload10_color = 0;
    int veerload11_color = 0;
    int veerload12_color = 0;
    int veerload13_color = 0;
    int veerload14_color = 0;
    int veerload15_color = 0;
    int veerload16_color = 0;

    BCU_Mass1 = DivNum(BCU_TC1_410_420_2 , 10);
    BCU_Mass2 = DivNum(BCU_TC1_410_420_3 , 10);
    BCU_Mass3 = DivNum(BCU_TC1_410_420_4 , 10);
    BCU_Mass4 = DivNum(BCU_TC1_410_420_5 , 10);
    BCU_Mass5 = DivNum(BCU_TC1_410_420_6 , 10);
    BCU_Mass6 = DivNum(BCU_TC1_410_420_7 , 10);
    BCU_Mass7 = DivNum(BCU_TC1_410_420_8 , 10);
    BCU_Mass8 = DivNum(BCU_TC1_410_420_9 , 10);
    BCU_Mass9 = DivNum(BCU_TC2_430_440_2 , 10);
    BCU_Mass10 = DivNum(BCU_TC2_430_440_3 , 10);
    BCU_Mass11 = DivNum(BCU_TC2_430_440_4 , 10);
    BCU_Mass12 = DivNum(BCU_TC2_430_440_5 , 10);
    BCU_Mass13 = DivNum(BCU_TC2_430_440_6 , 10);
    BCU_Mass14 = DivNum(BCU_TC2_430_440_7 , 10);
    BCU_Mass15 = DivNum(BCU_TC2_430_440_8 , 10);
    BCU_Mass16 = DivNum(BCU_TC2_430_440_9 , 10);

    char buff[10] = {'\0'};

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass1);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass2);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass3);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass4);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass5);
   // ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR3VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass6);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR3VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass7);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass8);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass15);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR5VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass16);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR5VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass13);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass14);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass11);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass12);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass9);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass10);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8VEER2LOAD))->SetCtrlText(buff);

    if (Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
    {

        if (Bit(BCU_TC1_413_423_9,16) == 0)
        {
            veerload1_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,16) == 1)
        {
            veerload1_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,15) == 0)
        {
            veerload2_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,15) == 1)
        {
            veerload2_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,14) == 0)
        {
            veerload3_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,14) == 1)
        {
            veerload3_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,13) == 0)
        {
            veerload4_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,13) == 1)
        {
            veerload4_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,12) == 0)
        {
            veerload5_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,12) == 1)
        {
            veerload5_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,11) == 0)
        {
            veerload6_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,11) == 1)
        {
            veerload6_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,10) == 0)
        {
            veerload7_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,10) == 1)
        {
            veerload7_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,9) == 0)
        {
            veerload8_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,9) == 1)
        {
            veerload8_color = 1;
        }

    }
    else
    {
        veerload1_color = 2;
        veerload2_color = 2;
        veerload3_color = 2;
        veerload4_color = 2;
        veerload5_color = 2;
        veerload6_color = 2;
        veerload7_color = 2;
        veerload8_color = 2;

    }

    if (Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 ))
    {

        if (Bit(BCU_TC2_433_443_9,16) == 0)
        {
            veerload9_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,16) == 1)
        {
            veerload9_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,15) == 0)
        {
            veerload10_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,15) == 1)
        {
            veerload10_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,14) == 0)
        {
            veerload11_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,14) == 1)
        {
            veerload11_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,13) == 0)
        {
            veerload12_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,13) == 1)
        {
            veerload12_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,12) == 0)
        {
            veerload13_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,12) == 1)
        {
            veerload13_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,11) == 0)
        {
            veerload14_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,11) == 1)
        {
            veerload14_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,10) == 0)
        {
            veerload15_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,10) == 1)
        {
            veerload15_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,9) == 0)
        {
            veerload16_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,9) == 1)
        {
            veerload16_color = 1;
        }
    }
    else
    {
        veerload9_color = 2;
        veerload10_color = 2;
        veerload11_color = 2;
        veerload12_color = 2;
        veerload13_color = 2;
        veerload14_color = 2;
        veerload15_color = 2;
        veerload16_color = 2;
    }

    /*SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR1VEER1LOAD, veerload1_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR1VEER2LOAD, veerload2_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR2VEER1LOAD, veerload3_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR2VEER2LOAD, veerload4_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR3VEER1LOAD, veerload5_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR3VEER2LOAD, veerload6_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR4VEER1LOAD, veerload7_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR4VEER2LOAD, veerload8_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR5VEER2LOAD, veerload16_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR5VEER1LOAD, veerload15_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR6VEER2LOAD, veerload14_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR6VEER1LOAD, veerload13_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR7VEER2LOAD, veerload12_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR7VEER1LOAD, veerload11_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR8VEER2LOAD, veerload10_color);
    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR8VEER1LOAD, veerload9_color);*/

}


void CCarStatus1Page::UpdateAValue()
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

    SetAValue(ID_PIBCARS1_LABEL_A, webflow);

#endif
}

void CCarStatus1Page::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD

    UpdateVoltage(ID_PIBCARS1_LABEL_V);

#endif

}

void CCarStatus1Page::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBCARS1_LABEL_TRACTIONMODEL);

#endif

}

void CCarStatus1Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void CCarStatus1Page::UpdateATOMode()
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

    //SetATOModeLabelColor(ID_PIBCARS1_LABEL_ATOMODE, ATC_invalid);
    //GetDlgItem(ID_PIBCARS1_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}



void CCarStatus1Page::UpdateNETMode()
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

    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_NETMODE))->SetCtrlText(net_mode);
    //SetNETModeLabelColor(ID_PIBCARS1_LABEL_NETMODE, modecolor);
}

void CCarStatus1Page::UpdateChargeCurrent()
{

    //AXiCT_BatCur_I8	直流电池电流
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1CHARGECURRENT))->SetCtrlText(QString::number(((int8_t)(ACU_610_4/256) )* 2).append(" A"));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4CHARGECURRENT))->SetCtrlText(QString::number(((int8_t)(ACU_620_4/256) )* 2).append(" A"));

}

void CCarStatus1Page::Update110Voltage()
{
    //AXiCT_DCOutputVolt_U8	直流输出电压
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1VOLTAGE))->SetCtrlText(QString::number(ACU_610_3/256).append(" V"));
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6VOLTAGE))->SetCtrlText(QString::number(ACU_620_3/256).append(" V"));

}

void CCarStatus1Page::UpdateBatteryTemp()
{
    //AXiCT_BatTemp_I8	电池温度
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1BATTERTEMP))->SetCtrlText(QString::number(CCU_HMI_308_11).append(QSTR(" ℃")));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4BATTERTEMP))->SetCtrlText(QString::number(CCU_HMI_308_12).append(QSTR(" ℃")));
}
void CCarStatus1Page::UpdateHighAcceMode()
{
//    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
//        {

//            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//      if (Bit(CCU_HMI_308_6, 6 )==1)
//          {
//          if ( (Bit( RIOM_111_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_510_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }
//      if (Bit(CCU_HMI_308_7, 6 )==1)
//          { if ( (Bit( RIOM_141_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_520_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }

//        }

//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->HideLabel();
//        }
    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
        {
                //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
          if (Bit(CCU_HMI_308_6, 6 )&&Bit( RIOM_111_14, 12 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
              }
          else if (Bit(CCU_HMI_308_7, 6 )&&Bit( RIOM_141_14, 12 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
              }
          else
              {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->HideLabel();
              }
        }
    else
      {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_HIGHACCEMODE))->HideLabel();
      }
 }
//void CRunStatePage::UpdateTowMode()
void CCarStatus1Page::UpdateEmergencyMode()
{
    if (Bit(CCU_HMI_308_6, 8 )|| Bit(CCU_HMI_308_7, 8 ))
        {
            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
      if (Bit(CCU_HMI_308_6, 8 )&&Bit( RIOM_111_12, 2 ))
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
          }
      else if (Bit(CCU_HMI_308_7, 8 )&&Bit( RIOM_141_12, 2 ))
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
          }
      else
          {
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_EMERGENCYMODE))->HideLabel();
          }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_EMERGENCYMODE))->HideLabel();
        }
}
void CCarStatus1Page::UpdateWashCarMode()
{
    //if(Bit(CCU_HMI_308_6,6)||Bit(CCU_HMI_308_7,6))//RIOM DI3在线
    if(Bit(CCU_HMI_308_9,16))
        {
               if(Bit(CCU_HMI_308_6,6)&&Bit( RIOM_111_14, 6 ))
                    {

                        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
                    }
         }
//    else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
//        }
    else if(Bit(CCU_HMI_308_9,15))
        {
                if(Bit(CCU_HMI_308_7,6)&&Bit( RIOM_141_14, 6 ))
                    {

                        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
                    }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
        }

}



//void CCarStatus1Page::UpdateEmergencyBroadcast()
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

void CCarStatus1Page::SetNETModeLabelColor(int id, int colorVal)
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

void CCarStatus1Page::SetATOModeLabelColor(int id,int colorVal)
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


void CCarStatus1Page::SetAcuLabelColor(int id, int colorVal)
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
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);//停机
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }

    return;
}

void CCarStatus1Page::SetKauxLabelColor(int id, int colorVal)
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

void CCarStatus1Page::SetVeerLoadLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

//void CCarStatus1Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus1Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

//void CCarStatus1Page::OnACUReset()
//{
//    m_bResetACU = true;
//
//    BitSet( HMI_send_data24, 7, 1 );
//    ACU_test_timer=3;
//}

//void CCarStatus1Page::UpdateInhibitKAUXClose()
void CCarStatus1Page::UpdateInPutVoltage()//输入电压
{
//    if (1 == Bit(ACU_610_7,9) )
//    {
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose1))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose1))->SetCtrlBKColor(Qt::black);

//    }
//    if (1 == Bit(ACU_620_7,9) )
//    {
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose2))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose2))->SetCtrlBKColor(Qt::black);

//    }
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1INVOLTAGE))->SetCtrlText(QString::number(ACU_610_13/256*12).append(QSTR(" V")));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU2INVOLTAGE))->SetCtrlText(QString::number(ACU_620_13/256*12).append(QSTR(" V")));

}

void CCarStatus1Page::UpdateOutPutVoltage()//逆变器输出电压
{
    char buff[10] = {'\0'};
    ACU1_OutVoltage=ACU_610_14%256*3.52;
    ACU2_OutVoltage=ACU_620_14%256*3.52;

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ACU1_OutVoltage);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1OUTVOLTAGE))->SetCtrlText(QString(buff).append(QSTR(" V")));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ACU2_OutVoltage);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU2OUTVOLTAGE))->SetCtrlText(QString(buff).append(QSTR(" V")));

}

void CCarStatus1Page::UpdateOutFrequency()//逆变器输出频率
{
    char buff[10] = {'\0'};
    ACU1_Frequency=ACU_610_14/256*0.3;
    ACU2_Frequency=ACU_620_14/256*0.3;

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ACU1_Frequency);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1FREQUENCY))->SetCtrlText(QString(buff).append(QSTR(" HZ")));
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1FREQUENCY))->SetCtrlText(QString(buff));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ACU2_Frequency);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU2FREQUENCY))->SetCtrlText(QString(buff).append(QSTR(" HZ")));

}

void CCarStatus1Page::UpdateOutCurrent()//逆变器输出电流
{
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1OUTCURRENT))->SetCtrlText(QString::number(ACU_610_15%256*2).append(" A"));
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1OUTCURRENT))->SetCtrlText(QString::number(ACU_610_15%256*2));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU2OUTCURRENT))->SetCtrlText(QString::number(ACU_620_15%256*2).append(" A"));
}

void CCarStatus1Page::UpdateBatVoltage()//蓄电池电压
{
    char buff[10] = {'\0'};
    ACU1_BatVoltage=ACU_610_15/256*0.5;
    ACU2_BatVoltage=ACU_620_15/256*0.5;

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ACU1_BatVoltage);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU1BATVOLTAGE))->SetCtrlText(QString(buff).append(" V"));

    memset(buff, '\0', 10);
    sprintf(buff, "%d", ACU2_BatVoltage);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ACU2BATVOLTAGE))->SetCtrlText(QString(buff).append(" V"));
}

void CCarStatus1Page::UpdatePantographStatus()
{

//    if ((Bit(DI_120_3,12)&&Bit(CCU_HMI_222_12, 6 )) ||(Bit(DI_120_1,1)&&Bit(CCU_HMI_222_12, 7 ))== 1)
//    {

//        //DICT_PantographInDownpositionMpi_B1    降弓到位监视	高电平代表降弓到位
//        if (Bit(DI_120_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        //DICT_PantographInOnpositonMpi_B1    	升弓到位监视	高电平代表升弓到位
//        if (Bit(DI_120_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_12, 6 )&&Bit(CCU_HMI_222_12, 7 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::white);
//        }

//    }

//    if ((Bit(DI_140_3,12)&&Bit(CCU_HMI_222_13, 6 )) ||(Bit(DI_140_1,1)&&Bit(CCU_HMI_222_13, 7 ))== 1)
//    {
//        if (Bit(DI_140_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        if (Bit(DI_140_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }else
//    {
//        if((Bit(CCU_HMI_222_13, 6 )&&Bit(CCU_HMI_222_13, 7 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::white);
//        }

//    }

//    if ((Bit(DI_170_3,12)&&Bit(CCU_HMI_222_14, 14 )) ||(Bit(DI_170_1,1)&&Bit(CCU_HMI_222_14, 15 ))== 1)
//    {
//        if (Bit(DI_170_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        if (Bit(DI_170_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_14, 14 )&&Bit(CCU_HMI_222_14, 15 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::white);
//        }
//    }


}

void CCarStatus1Page::UpdateEscapeDoor()
{
    if ( (Bit(CCU_HMI_222_11, 15 ))&&(Bit(CCU_HMI_222_11, 16 ))== 1)
    {
        if (1 == Bit(DI_110_5,4) )
        {
            //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::green);

        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::red);
        }
    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::white);
    }

    if (  (Bit(CCU_HMI_222_15, 8 )) &&(Bit(CCU_HMI_222_15, 7 ))== 1 )
    {
        if (1 == Bit(DI_180_5,4) )
        {
            //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::green);

        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::red);
        }
    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::white);
    }

}
