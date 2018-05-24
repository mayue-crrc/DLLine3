#include "CDoorTestPage.h"
#include "CConfirmDialog.h"
#include <qdebug.h>

ROMDATA g_PicRom_DoorTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
//    D_COMMON_PAGE_HEADER(QSTR("电制动切除"))

//    {"",                            D_FONT_BOLD(5),      QRect(315,  80, 480,  60),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_DOORTEST_TRAIN                         },
//    {"RIGHT",                       D_FONT_BOLD(8),      QRect(730,  98,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_DOORTEST_ARROW_RIGHT                   },
//    {"LEFT",                        D_FONT_BOLD(8),      QRect(165,  98,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_DOORTEST_ARROW_LEFT                    },

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR(" 电制动\n切除") )
    {"",                          D_FONT_BOLD(10),      QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_DOORTEST_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_DOORTEST_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_DOORTEST_ARROW_LEFT                 },
#endif

    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   // {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(100, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(175, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(250, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(325, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(400, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(475, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(550, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(625, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(700, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("牵引系统状态"),                 D_FONT_BOLD(6),      QRect( 11, 183, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("牵引制动力"),        D_FONT_BOLD(6),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("电机转速"),       D_FONT_BOLD(6),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("高速断路器"),             D_FONT_BOLD(6),      QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("KIC状态"),              D_FONT_BOLD(6),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("KCCC状态"),             D_FONT_BOLD(6),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("IES状态"),             D_FONT_BOLD(6),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("主熔断器状态"),              D_FONT_BOLD(5),      QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   // {QSTR("广播状态"),              D_FONT_BOLD(6),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("1"),                   D_FONT_BOLD(6),      QRect(103, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("2"),                   D_FONT_BOLD(6),      QRect(178, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("3"),                   D_FONT_BOLD(6),      QRect(253, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("牵引安全"),          D_FONT_BOLD(8),      QRect(103, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_TCU_ENABLE1        },
    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(178, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE        },
    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(253, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE        },
    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(328, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE        },
    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(403, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE        },
    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(478, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE        },
    {QSTR("1500A"),                 D_FONT_BOLD(6),      QRect(553, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE        },
    {QSTR("牵引安全"),          D_FONT_BOLD(8),      QRect(628, 183,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_TCU_ENABLE2        },

    // 牵引制动力
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(103, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA1DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(178, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA2DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(253, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA3DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(328, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA4DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(403, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA5DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(478, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA7DRAWBCUFORCE     },
    {QSTR("180"),                    D_FONT_BOLD(6),      QRect(628, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA8DRAWBCUFORCE     },


    //电机转速
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(103, 241,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(178, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA2DYNAMOREV        },
    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(253, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA3DYNAMOREV        },
    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(328, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA4DYNAMOREV        },
    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(403, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA5DYNAMOREV        },
    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(478, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6DYNAMOREV        },
    {QSTR("1200"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA7DYNAMOREV        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(628, 241,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //HSCB
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(103, 271,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(178, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA2HSCBSTATUS        },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(253, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA3HSCBSTATUS        },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(328, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA4HSCBSTATUS        },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(403, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA5HSCBSTATUS        },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(478, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6HSCBSTATUS        },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(553, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA7HSCBSTATUS        },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(628, 271,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    // KIC
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(103, 301,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(178, 305,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA2KICSTATE          },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(253, 305,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA3KICSTATE          },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(328, 305,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA4KICSTATE          },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(403, 305,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA5KICSTATE          },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(478, 305,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6KICSTATE          },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(553, 305,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA7KICSTATE          },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(628, 301,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    // FCC
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(103, 331,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(178, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA2KCCCSTATE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(253, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA3KCCCSTATE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(328, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA4KCCCSTATE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(403, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA5KCCCSTATE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(478, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6KCCCSTATE         },
    {QSTR(""),                    D_FONT_BOLD(6),      QRect(553, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA7KCCCSTATE         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(628, 331,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    // k750
    {QSTR("- -"),              D_FONT_BOLD(6),      QRect(103, 361,  70,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("受电弓位"),                 D_FONT_BOLD(6),      QRect(178, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR1IESSTATE         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("受电弓位"),                 D_FONT_BOLD(6),      QRect(328, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR4IESSTATE         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("接地位"),                 D_FONT_BOLD(6),      QRect(553, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR8IESSTATE         },
    {QSTR("- -"),                    D_FONT_BOLD(6),      QRect(628, 361,  70,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

    //ATC
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(103, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA1ATC1STATUS        },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(139, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA1ATC2STATUS        },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(628, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6ATC1STATUS        },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(664, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_DOORTEST_LABEL_CRA6ATC2STATUS        },

    // 主熔断器状态
 //   {"",                          D_FONT_BOLD(6),      QRect(138, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(213, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(288, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(363, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(438, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(513, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(588, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(663, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {QSTR("- -"),                    D_FONT_BOLD(6),      QRect(103, 395,  70,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                 D_FONT_BOLD(6),      QRect(179, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR2Mainfuse1         },
    {QSTR(""),                 D_FONT_BOLD(6),      QRect(215, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR2Mainfuse2         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                 D_FONT_BOLD(6),      QRect(329, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR4Mainfuse1         },
    {QSTR(""),                 D_FONT_BOLD(6),      QRect(365, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR4Mainfuse2         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                 D_FONT_BOLD(6),      QRect(554, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR7Mainfuse1         },
    {QSTR(""),                 D_FONT_BOLD(6),      QRect(590, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_DOORTEST_LABEL_CAR7Mainfuse2         },
    {QSTR("- -"),                    D_FONT_BOLD(6),      QRect(628, 395,  70,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },


//    {QSTR(" "), D_FONT_BOLD(8), QRect( 50, 370+40, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_DOORTEST_LABEL_BRAKETEST_HINT1        },
//    {QSTR("【注意】切除电制动时请保持本页面，切换到其它页面会终止自检。"), D_FONT_BOLD(8), QRect( 50, 405+40, 550, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_DOORTEST_LABEL_BRAKETEST_HINT2        },
    {QSTR(""), D_FONT_BOLD(8), QRect( 50, 405+40, 550, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_DOORTEST_LABEL_BRAKETEST_HINT2        },

    {QSTR("切除电制动"),              D_FONT_BOLD(8),      QRect( 25, 460+30, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_DOORTEST_BUTTON_TESTSTART         },
    {QSTR("恢复电制动"),              D_FONT_BOLD(8),      QRect(155, 460+30, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_DOORTEST_BUTTON_TESTSTOP          },


};
int g_DoorTestRomLen = sizeof(g_PicRom_DoorTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDoorTestPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
//        ON_LEAVEPAGE()
        ON_BTNCLK(ID_DOORTEST_BUTTON_TESTSTART, OnDoorTestStartClk)
        ON_BTNCLK(ID_DOORTEST_BUTTON_TESTSTOP, OnDoorTestStopClk)
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
END_MESSAGE_MAP()

CDoorTestPage::CDoorTestPage()
{
}

void CDoorTestPage::OnUpdatePage()
{
    updateTrain(ID_DOORTEST_TRAIN);
    updateArrow(ID_DOORTEST_ARROW_LEFT,ID_DOORTEST_ARROW_RIGHT);

    UpdateHSCB();
    UpdateKIC();
    UpdateKCCC();

    UpdateDrawBCUForce();
    UpdateDynamorev();
    UpdateMainfuse();
    UpdateIES();
    UpdateTcu_Enable();
    UpdateTCUStatus();

    if(Bit(g_dataBuffer[2187] ,16) == 1)
    {
        ((CButton*)GetDlgItem(ID_DOORTEST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton*)GetDlgItem(ID_DOORTEST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
    }

}

void CDoorTestPage::OnInitPage()
{
    //((CLabel*)GetDlgItem(ID_DOORTEST_LABEL_BRAKETEST_HINT1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_DOORTEST_LABEL_BRAKETEST_HINT2))->SetAlignment(Qt::AlignLeft);

    ((CButton*)GetDlgItem(ID_DOORTEST_BUTTON_TESTSTART))->m_bAutoUpState = false;
}

void CDoorTestPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));

    this->InitPageHeader();
}

//void CDoorTestPage::OnLeavePage()
//{
////    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_DOORTESTHELP)
////    {
////        OnDoorTestStopClk();
////    }
//}

void CDoorTestPage::OnComBtn1Clk()
{

}

void CDoorTestPage::OnComBtn2Clk()
{

}

void CDoorTestPage::OnComBtn3Clk()
{

}

void CDoorTestPage::OnComBtn4Clk()
{

}

void CDoorTestPage::OnComBtn5Clk()
{

}

void CDoorTestPage::OnComBtn6Clk()
{

}

void CDoorTestPage::OnComBtn7Clk()
{

}

void CDoorTestPage::OnComBtn8Clk()
{

    ChangePage(PAGE_INDEX_MAINTAIN);
}

void CDoorTestPage::OnDoorTestStartClk()
{


    if(Bit(g_dataBuffer[2187] ,16) == 0)
    {
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("是否切除电制动!"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            BitSet( HMI_send_data28, 13, 1 );
        }

    }

}

void CDoorTestPage::OnDoorTestStopClk()
{
    if(Bit(g_dataBuffer[2187] ,16) == 1)
    {
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("是否恢复电制动!"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            BitSet( HMI_send_data28, 13, 0 );
        }
    }
}

void CDoorTestPage::UpDoorCommod()
{

}

void CDoorTestPage::SetDoorCommodColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }

}

void CDoorTestPage::UpdateDoorOpenClose()
{

}

void CDoorTestPage::SetDoorJudgeColor(int id, int colorVal)
{
   ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (0 == colorVal || 2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }

    return;

}

void CDoorTestPage::SetDoorJudgeValue(int id, QString aVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(aVal);
}

void CDoorTestPage::UpdateDoorStatus()
{

}

void CDoorTestPage::SetDoorStatusColor(int id, int colorVal)
{

}

// set label X  Bit(car1_door1,4) ==1
void CDoorTestPage::SetDoorStatusLabel(int id, int aVal)
{

}

void CDoorTestPage::ClearAllLabelState()
{

}

void CDoorTestPage::Updtate_Door_TestJudgeLabel()
{

}

void CDoorTestPage::OnLeavePage()
{
    BitSet( HMI_send_data28, 13, 0 );
}

void CDoorTestPage::UpdateMainfuse()
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

    SetMainfuseLabelColor(ID_DOORTEST_LABEL_CAR2Mainfuse1, CAR2_Mainfuse1_OK);
    SetMainfuseLabelColor(ID_DOORTEST_LABEL_CAR2Mainfuse2, CAR2_Mainfuse2_OK);
    SetMainfuseLabelColor(ID_DOORTEST_LABEL_CAR4Mainfuse1, CAR4_Mainfuse1_OK);
    SetMainfuseLabelColor(ID_DOORTEST_LABEL_CAR4Mainfuse2, CAR4_Mainfuse2_OK);
    SetMainfuseLabelColor(ID_DOORTEST_LABEL_CAR7Mainfuse1, CAR7_Mainfuse1_OK);
    SetMainfuseLabelColor(ID_DOORTEST_LABEL_CAR7Mainfuse2, CAR7_Mainfuse2_OK);

}

void CDoorTestPage::UpdateHSCB()
{
    if (Bit(CCU_HMI_222_9, 2 )  == 0)
    {
        HSCB_color1 = 3;
    }
    else
    {
        if (Bit( TCU_510_14, 10 ) )
        {
            HSCB_color1 = 1;
        }
        else
        {
            HSCB_color1 = 0;
        }
        if (Bit( TCU_511_7, 8 ) )
        {
            HSCB_color1 = 2;
        }
        if (Bit( TCU_511_7, 7 ))
        {
            HSCB_color1 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 1 )   == 0)
    {
        HSCB_color2 = 3;
    }
    else
    {
        if (Bit( TCU_520_14, 10 ) )
        {
            HSCB_color2 = 1;
        }
        else
        {
            HSCB_color2 = 0;
        }
        if (Bit( TCU_521_7, 8 ) )
        {
            HSCB_color2 = 2;
        }
        if (Bit( TCU_521_7, 7 ))
        {
            HSCB_color2 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 16 ) == 0)
    {
        HSCB_color3 = 3;
    }
    else
    {
        if (Bit( TCU_530_14, 10 ) )
        {
            HSCB_color3 = 1;
        }
        else
        {
            HSCB_color3 = 0;
        }
        if (Bit( TCU_531_7, 8 ) )
        {
            HSCB_color3 = 2;
        }
        if (Bit( TCU_531_7, 7 ) )
        {
            HSCB_color3 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 15 )== 0)
    {
        HSCB_color4 = 3;
    }
    else
    {
        if (Bit( TCU_540_14, 10 ) )
        {
            HSCB_color4 = 1;
        }
        else
        {
            HSCB_color4 = 0;
        }
        if (Bit( TCU_541_7, 8 ) )
        {
            HSCB_color4 = 2;
        }
        if (Bit( TCU_541_7, 7 ) )
        {
            HSCB_color4 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 14 )== 0)
    {
        HSCB_color5 = 3;
    }
    else
    {
        if (Bit( TCU_550_14, 10 ))
        {
            HSCB_color5 = 1;
        }
        else
        {
            HSCB_color5 = 0;
        }
        if (Bit( TCU_551_7, 8 ) )
        {
            HSCB_color5 = 2;
        }
        if (Bit( TCU_551_7, 7 ))
        {
            HSCB_color5 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 13 )== 0)
    {
        HSCB_color6 = 3;
    }
    else
    {
        if (Bit( TCU_560_14, 10 ))
        {
            HSCB_color6 = 1;
        }
        else
        {
            HSCB_color6 = 0;
        }
        if (Bit( TCU_561_7, 8 ))
        {
            HSCB_color6 = 2;
        }
        if (Bit( TCU_561_7, 7 ) )
        {
            HSCB_color6 = 2;
        }
    }

    SetHscbLabelColor(ID_DOORTEST_LABEL_CRA2HSCBSTATUS, HSCB_color1);
    SetHscbLabelColor(ID_DOORTEST_LABEL_CRA3HSCBSTATUS, HSCB_color2);
    SetHscbLabelColor(ID_DOORTEST_LABEL_CRA4HSCBSTATUS, HSCB_color3);
    SetHscbLabelColor(ID_DOORTEST_LABEL_CRA5HSCBSTATUS, HSCB_color4);
    SetHscbLabelColor(ID_DOORTEST_LABEL_CRA6HSCBSTATUS, HSCB_color5);
    SetHscbLabelColor(ID_DOORTEST_LABEL_CRA7HSCBSTATUS, HSCB_color6);
}

void CDoorTestPage::UpdateKIC()
{

    if (Bit( TCU_510_15, 7 ))
    {
        KIC1_color = 1;

    }
    else
    {
        KIC1_color = 0;
    }
    if ( (Bit( TCU_511_8, 6 ) ) || (Bit( TCU_511_8, 5 ) ) )
    {
        KIC1_color = 2;
    }

    if (Bit( TCU_520_15, 7 ))
    {
        KIC2_color = 1;

    }
    else
    {
        KIC2_color = 0;
    }
    if ( (Bit( TCU_521_8, 6 ))  || (Bit( TCU_521_8, 5 ) ) )
    {
        KIC2_color = 2;
    }

    if (Bit( TCU_530_15, 7 ) )
    {
        KIC3_color = 1;

    }
    else
    {
        KIC3_color = 0;
    }
    if ( (Bit( TCU_531_8, 6 ) ) || (Bit( TCU_531_8, 5 ) ) )
    {
        KIC3_color = 2;
    }

    if (Bit( TCU_540_15, 7 ) )
    {
        KIC4_color = 1;

    }
    else
    {
        KIC4_color = 0;
    }
    if ( (Bit( TCU_541_8, 6 ) ) || (Bit( TCU_541_8, 5 ) ) )
    {
        KIC4_color = 2;
    }

    if (Bit( TCU_550_15, 7 ) )
    {
        KIC5_color = 1;

    }
    else
    {
        KIC5_color = 0;
    }
    if ( (Bit( TCU_551_8, 6 ) ) || (Bit( TCU_551_8, 5 ) ) )
    {
        KIC5_color = 2;
    }

    if (Bit( TCU_560_15, 7 ) )
    {
        KIC6_color = 1;

    }
    else
    {
        KIC6_color = 0;
    }
    if ( (Bit( TCU_561_8, 6 ) ) || (Bit( TCU_561_8, 5 ) ) )
    {
        KIC6_color = 2;
    }


    SetKicLabelColor(ID_DOORTEST_LABEL_CRA2KICSTATE, KIC1_color);
    SetKicLabelColor(ID_DOORTEST_LABEL_CRA3KICSTATE, KIC2_color);
    SetKicLabelColor(ID_DOORTEST_LABEL_CRA4KICSTATE, KIC3_color);
    SetKicLabelColor(ID_DOORTEST_LABEL_CRA5KICSTATE, KIC4_color);
    SetKicLabelColor(ID_DOORTEST_LABEL_CRA6KICSTATE, KIC5_color);
    SetKicLabelColor(ID_DOORTEST_LABEL_CRA7KICSTATE, KIC6_color);

}

void CDoorTestPage::UpdateKCCC()
{

    if (Bit( TCU_510_15, 6 ))
    {
        KCC1_color = 1;

    }
    else
    {
        KCC1_color = 0;
    }
    if (  (Bit( TCU_511_8, 4 ) ) || (Bit( TCU_511_8, 3 ) )  )
    {
        KCC1_color = 2;
    }

    if (Bit( TCU_520_15, 6 ) )
    {
        KCC2_color = 1;

    }
    else
    {
        KCC2_color = 0;
    }
    if (  (Bit( TCU_521_8, 4 ) ) || (Bit( TCU_521_8, 3 ) )  )
    {
        KCC2_color = 2;
    }

    if (Bit( TCU_530_15, 6 ) )
    {
        KCC3_color = 1;

    }
    else
    {
        KCC3_color = 0;
    }
    if (  (Bit( TCU_531_8, 4 ) ) || (Bit( TCU_531_8, 3 ) )  )
    {
        KCC3_color = 2;
    }

    if (Bit( TCU_540_15, 6 ))
    {
        KCC4_color = 1;

    }
    else
    {
        KCC4_color = 0;
    }
    if ( (Bit( TCU_541_8, 4 ) ) || (Bit( TCU_541_8, 3 ) )  )
    {
        KCC4_color = 2;
    }

    if (Bit( TCU_550_15, 6 ))
    {
        KCC5_color = 1;

    }
    else
    {
        KCC5_color = 0;
    }
    if ( (Bit( TCU_551_8, 4 ) ) || (Bit( TCU_551_8, 3 ) )  )
    {
        KCC5_color = 2;
    }

    if (Bit( TCU_560_15, 6 ))
    {
        KCC6_color = 1;

    }
    else
    {
        KCC6_color = 0;
    }
    if ( (Bit( TCU_561_8, 4 ) ) || (Bit( TCU_561_8, 3 ) )  )
    {
        KCC6_color = 2;
    }


    SetKcccLabelColor(ID_DOORTEST_LABEL_CRA2KCCCSTATE, KCC1_color);
    SetKcccLabelColor(ID_DOORTEST_LABEL_CRA3KCCCSTATE, KCC2_color);
    SetKcccLabelColor(ID_DOORTEST_LABEL_CRA4KCCCSTATE, KCC3_color);
    SetKcccLabelColor(ID_DOORTEST_LABEL_CRA5KCCCSTATE, KCC4_color);
    SetKcccLabelColor(ID_DOORTEST_LABEL_CRA6KCCCSTATE, KCC5_color);
    SetKcccLabelColor(ID_DOORTEST_LABEL_CRA7KCCCSTATE, KCC6_color);

}

void CDoorTestPage::UpdateDrawBCUForce()
{

    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5%256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5/256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6%256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6/256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7%256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7/256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8%256)));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8/256)));

//    if(CCU_HMI_222_5%256>127)
//      ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256-256));
//    else
//      ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256));

//    if(CCU_HMI_222_5/256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256));

//    if(CCU_HMI_222_6%256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256));

//    if(CCU_HMI_222_6/256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256));

//    if(CCU_HMI_222_7%256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256));

//    if(CCU_HMI_222_7/256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256));

//    if(CCU_HMI_222_8%256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256));

//    if(CCU_HMI_222_8/256>127)
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256));
}

void CDoorTestPage::UpdateDynamorev()
{
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA2DYNAMOREV))->SetCtrlText(QString::number(TCU_510_5));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA3DYNAMOREV))->SetCtrlText(QString::number(TCU_520_5));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA4DYNAMOREV))->SetCtrlText(QString::number(TCU_530_5));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA5DYNAMOREV))->SetCtrlText(QString::number(TCU_540_5));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA6DYNAMOREV))->SetCtrlText(QString::number(TCU_550_5));
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CRA7DYNAMOREV))->SetCtrlText(QString::number(TCU_560_5));
}

void CDoorTestPage::SetHscbLabelColor(int id, int colorVal)
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

void CDoorTestPage::SetKicLabelColor(int id, int colorVal)
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

void CDoorTestPage::SetKcccLabelColor(int id, int colorVal)
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

void CDoorTestPage::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_TCU_ENABLE2))->HideLabel();

    }
}



        void CDoorTestPage::UpdateTCUStatus()
        {
            if(Bit(CCU_HMI_222_9, 2 )==1)
            {
                if(Bit( TCU_510_14, 13)==1)
                {
                    TCU1_status=1;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU1_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_511_5, 13)==1)
                {
                    TCU1_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_511_5, 12)==1)
                {
                    TCU1_status=4;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_511_5, 16)==1)
                {
                    TCU1_status=2;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU1_status=3;
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 1 )==1)
            {
                if(Bit( TCU_520_14, 13)==1)
                {
                    TCU2_status=1;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU2_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_521_5, 13)==1)
                {
                    TCU2_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_521_5, 12)==1)
                {
                    TCU2_status=4;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_521_5, 16)==1)
                {
                    TCU2_status=2;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU2_status=3;
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 16 )==1)
            {
                if(Bit( TCU_530_14, 13)==1)
                {
                    TCU3_status=1;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_530_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU3_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_531_5, 13)==1)
                {
                    TCU3_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_531_5, 12)==1)
                {
                    TCU3_status=4;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_531_5, 16)==1)
                {
                    TCU3_status=2;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU3_status=3;
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 15 )==1)
            {
                if(Bit( TCU_540_14, 13)==1)
                {
                    TCU4_status=1;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_540_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU4_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_541_5, 13)==1)
                {
                    TCU1_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_541_5, 12)==1)
                {
                    TCU4_status=4;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_541_5, 16)==1)
                {
                    TCU4_status=2;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU4_status=3;
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 14 )==1)
            {
                if(Bit( TCU_550_14, 13)==1)
                {
                    TCU5_status=1;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_550_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU5_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_551_5, 13)==1)
                {
                    TCU5_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_551_5, 12)==1)
                {
                    TCU5_status=4;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_551_5, 16)==1)
                {
                    TCU5_status=2;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU5_status=3;
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 13 )==1)
            {
                if(Bit( TCU_560_14, 13)==1)
                {
                    TCU6_status=1;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_560_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU6_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_561_5, 13)==1)
                {
                    TCU6_status=0;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_561_5, 12)==1)
                {
                    TCU6_status=4;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_561_5, 16)==1)
                {
                    TCU6_status=2;
                    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU6_status=3;
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
            }

            SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
            SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
            SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
            SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
            SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
            SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE, TCU6_status);

            if (Bit(TCU_511_5,12) || Bit(TCU_511_5,13) )
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE))->SetLabelState(6);
            else
                SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR2DRAWSYSSTATE, TCU1_status);

            if (Bit(TCU_521_5,12)|| Bit(TCU_521_5,13) )
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE))->SetLabelState(6);
            else
                SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

            if (Bit(TCU_531_5,12)||Bit(TCU_531_5,13))
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE))->SetLabelState(6);
            else
                SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR4DRAWSYSSTATE, TCU3_status);

            if (Bit(TCU_541_5,12)||Bit(TCU_541_5,13))
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE))->SetLabelState(6);
            else
                SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR5DRAWSYSSTATE, TCU4_status);

            if (Bit(TCU_551_5,12)||Bit(TCU_551_5,13))
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE))->SetLabelState(6);
            else
                SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR6DRAWSYSSTATE, TCU5_status);

            if (Bit(TCU_561_5,12)||Bit(TCU_561_5,13))
                ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE))->SetLabelState(6);
            else
                SetTCUStatusLsbelColor(ID_DOORTEST_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
        }

void CDoorTestPage::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
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
    }

    return;
}

void CDoorTestPage::SetMainfuseLabelColor(int id, int colorVal)
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

void CDoorTestPage::UpdateIES()
{
    if (Bit(CCU_HMI_222_9, 2 ) )
    {
        if (Bit( TCU_511_6, 16 ) )
        {
            IES1_string = QSTR("受电弓位");
        }
        if (Bit( TCU_511_6, 15 ) )
        {
            IES1_string = QSTR("接地位");
        }
        if (Bit( TCU_511_6, 14 ) )
        {
            IES1_string = QSTR("车间电源");
        }
        if ( ( TCU_511_6&57344) == 0)
        {
            IES1_string = QSTR("- -");
        }
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES1_string = QSTR("");
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::white);;

    }

    if (Bit(CCU_HMI_222_9, 16 ) )
    {
        if (Bit( TCU_531_6, 16 ) )
        {
            IES3_string = QSTR("受电弓位");
        }
        if (Bit( TCU_531_6, 15 ) )
        {
            IES3_string = QSTR("接地位");
        }
        if (Bit( TCU_531_6, 14 ) )
        {
            IES3_string = QSTR("车间电源");
        }
        if ( ( TCU_531_6&57344) == 0)
        {
            IES3_string = QSTR("- -");
        }
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES3_string = QSTR("");
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



    if (Bit(CCU_HMI_222_9, 13 ))
    {
        if (Bit( TCU_561_6, 16 ) )
        {
            IES2_string = QSTR("受电弓位");
        }
        if (Bit( TCU_561_6, 15 ) )
        {
            IES2_string = QSTR("接地位");
        }
        if (Bit( TCU_561_6, 14 ) )
        {
            IES2_string = QSTR("车间电源");
        }
        if ( ( TCU_561_6 & 57344) == 0)
        {
            IES2_string = QSTR("- -");
        }
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES2_string = QSTR("");
        ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR4IESSTATE))->SetCtrlText(IES3_string);
    ((CLabel *)GetDlgItem(ID_DOORTEST_LABEL_CAR8IESSTATE))->SetCtrlText(IES2_string);
}

