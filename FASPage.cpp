#include "FASPage.h"



ROMDATA g_PicRom_FASPage[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("烟火\n报警") )
    {"",                       D_FONT_BOLD(10),      QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBFASPage_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(702, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_LEFT                 },

//    {"",                       D_FONT_BOLD(5),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBFASPage_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_LEFT                 },
#endif
    {"",                        D_FONT(5),      QRect(100,190,780,150),      Qt::yellow,           Qt::black,             CONTROL_TRAINDIAGRAM,         ID_PIBFASPage_TRAINDIAGRAM },
//    {"",                          D_FONT_BOLD(6),      QRect( 40, 240, 720,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 40, 240, 1,   150),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 40, 390, 720,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 760, 240, 1,   150),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//   // {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//    {"",                          D_FONT_BOLD(6),      QRect( 10, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(100, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(175, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(250, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(325, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(400, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(475, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(550, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(625, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                          D_FONT_BOLD(6),      QRect(700, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//  //   {QSTR("1"),              D_FONT_BOLD(6),      QRect(40, 240,  720,  140),           Qt::white,                Qt::gray,          CONTROL_LABEL,           ID_IGNORE         },

////    {"",                          D_FONT_BOLD(6),      QRect( 40, 240, 720,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 40, 380, 720,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////   // {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

////    {"",                          D_FONT_BOLD(6),      QRect( 40, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(130, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(220, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(310, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(400, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(490, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(580, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(670, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(760, 240,   1, 140),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
////    {"",                          D_FONT_BOLD(6),      QRect(700, 180,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//    {QSTR("车号"),                 D_FONT_BOLD(6),      QRect( 11, 183, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("感温线缆"),        D_FONT_BOLD(6),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("烟火探头"),       D_FONT_BOLD(6),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("烟火探头"),             D_FONT_BOLD(6),      QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("烟火探头"),              D_FONT_BOLD(6),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("烟火探头"),             D_FONT_BOLD(6),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("烟火探头"),             D_FONT_BOLD(6),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("烟火探头"),              D_FONT_BOLD(6),      QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   // {QSTR("广播状态"),              D_FONT_BOLD(6),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("1"),                   D_FONT_BOLD(6),      QRect(103, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("2"),                   D_FONT_BOLD(6),      QRect(178, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("3"),                   D_FONT_BOLD(6),      QRect(253, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////CONTROL_IMAGE
////{"123.PNG",                    D_FONT_BOLD(6),      QRect(25, 211,  750,  170),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE51     },
//    {QSTR("司机台"),                    D_FONT_BOLD(6),      QRect(103, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(178, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(253, 211,  70,  28),           Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(328, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(403, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(478, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },
//    {QSTR("司机台"),                    D_FONT_BOLD(6),      QRect(628, 211,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE     },


//    //电机转速
//    {QSTR("电气柜1"),                 D_FONT_BOLD(6),      QRect(103, 241,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜1"),                    D_FONT_BOLD(6),      QRect(178, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜1"),                    D_FONT_BOLD(6),      QRect(253, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜1"),                    D_FONT_BOLD(6),      QRect(328, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜1"),                    D_FONT_BOLD(6),      QRect(403, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜1"),                    D_FONT_BOLD(6),      QRect(478, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜1"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜1"),                 D_FONT_BOLD(6),      QRect(628, 241,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },

//    //HSCB
//    {QSTR("电气柜2"),                 D_FONT_BOLD(6),      QRect(103, 271,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜2"),                    D_FONT_BOLD(6),      QRect(178, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜2"),                    D_FONT_BOLD(6),      QRect(253, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜2"),                    D_FONT_BOLD(6),      QRect(328, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜2"),                    D_FONT_BOLD(6),      QRect(403, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜2"),                    D_FONT_BOLD(6),      QRect(478, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜2"),                    D_FONT_BOLD(6),      QRect(553, 271,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜2"),                 D_FONT_BOLD(6),      QRect(628, 271,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },

//    // KIC
//    {QSTR("客室顶板1"),                 D_FONT_BOLD(6),      QRect(103, 301,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("客室顶板1"),                    D_FONT_BOLD(6),      QRect(178, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR("客室顶板1"),                    D_FONT_BOLD(6),      QRect(253, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR("客室顶板1"),                    D_FONT_BOLD(6),      QRect(328, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR("客室顶板1"),                    D_FONT_BOLD(6),      QRect(403, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR("客室顶板1"),                    D_FONT_BOLD(6),      QRect(478, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR("客室顶板1"),                    D_FONT_BOLD(6),      QRect(553, 301,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE          },
//    {QSTR("客室顶板1"),                 D_FONT_BOLD(6),      QRect(628, 301,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },

//    // FCC
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(45, 345,  80,  28),           Qt::black,                Qt::green,                 CONTROL_IMAGE,           ID_PIBFASPage_FIRE1         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(135, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE2         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(225, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE3         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(315, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE4         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(405, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE5         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(495, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE6         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(585, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE7         },
//    {"fas3.PNG",                    D_FONT_BOLD(6),      QRect(675, 345,  80,  28),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_PIBFASPage_FIRE8         },


//    {"",                    D_FONT_BOLD(7),      QRect(105, 345,  140,  22),           Qt::white,                 Qt::black,                 CONTROL_LABEL,           ID_PIBFASPage_FIRE43        },
//    {"FAU1",                    D_FONT_BOLD(7),      QRect(205, 365,  50,  30),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {"FAU2",                    D_FONT_BOLD(7),      QRect(555, 365,  50,  30),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {"",                    D_FONT_BOLD(7),      QRect(255, 375,  300,  10),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    //{"",                    D_FONT_BOLD(7),      QRect(375, 365,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBFASPage_1COMM2         },

    //    {"",                    D_FONT_BOLD(7),      QRect(405, 345,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE45         },
//    {"",                    D_FONT_BOLD(7),      QRect(555, 345,  140,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE46         },
    //{"",                    D_FONT_BOLD(7),      QRect(405, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE47         },
   // {"",                    D_FONT_BOLD(7),      QRect(495, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE48         },
    //{"",                    D_FONT_BOLD(7),      QRect(585, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE49         },
    //{"",                    D_FONT_BOLD(7),      QRect(675, 345,  80,  22),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBFASPage_FIRE50         },

//    // k750
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(103, 361,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("电气柜3"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜3"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜3"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜3"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜3"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜3"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜3"),                    D_FONT_BOLD(6),      QRect(628, 361,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("电气柜4"),                    D_FONT_BOLD(6),      QRect(103, 391,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(178, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(328, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("- -"),                 D_FONT_BOLD(6),      QRect(553, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("电气柜4"),                    D_FONT_BOLD(6),      QRect(628, 391,  70,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("提示:电气柜1为XX电器柜"),                D_FONT_BOLD(8),      QRect(6, 440, 240,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                  },
//    {QSTR("电气柜2为XX电器柜"),                D_FONT_BOLD(8),      QRect(20+30, 465, 200,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                 },
//    {QSTR("电气柜3为XX电器柜"),                D_FONT_BOLD(8),      QRect(20+30, 490, 200,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                 },
//    {QSTR("电气柜4为XX电器柜"),                D_FONT_BOLD(8),      QRect(20+30, 515, 200,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,                 },

    {QSTR("提示:"),                                                   D_FONT_BOLD(10),      QRect(26, 440-20, 45,  20),        Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE               },
    {QSTR("为电气柜烟火探头,绿色表示正常，红色表示有报警或故障"),            D_FONT_BOLD(10),      QRect(132, 439-20, 530,  20),      Qt::white,        Qt::black,      CONTROL_LABEL,   ID_PIBFASPage_LABEL1                },
    {QSTR("为客室顶板烟火探头,绿色表示正常，红色表示有报警或故障"),          D_FONT_BOLD(10),      QRect(132, 475-20, 530,  20),      Qt::white,        Qt::black,      CONTROL_LABEL,   ID_PIBFASPage_LABEL2              },
    //{QSTR("表示FAU1和FAU2之间的通信,无X表示正常，有X表示有故障"),          D_FONT_BOLD(10),      QRect(132, 510-20, 530,  20),      Qt::white,        Qt::black,      CONTROL_LABEL,   ID_PIBFASPage_LABEL3              },
    //{QSTR("有X表示有故障"),         D_FONT_BOLD(10),      QRect(119, 515, 150,  20),         Qt::white,        Qt::black,      CONTROL_LABEL,   ID_IGNORE              },


    {QSTR("fas2.PNG"),                D_FONT_BOLD(8),      QRect(80, 435-20, 34,  34),            Qt::white,               Qt::black,                CONTROL_IMAGE,           ID_PIBFASPage_ICON2                  },
    {QSTR("fas1.PNG"),                D_FONT_BOLD(8),      QRect(80, 470-20, 33,  29),            Qt::white,               Qt::black,                CONTROL_IMAGE,           ID_PIBFASPage_ICON1               },
    //{QSTR("fas3.PNG"),                D_FONT_BOLD(8),      QRect(70, 507-20, 60,  20),            Qt::white,               Qt::black,                CONTROL_IMAGE,           ID_PIBFASPage_ICON3                },

    {QSTR("消 音"),                    D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,           ID_PIBFASPage_CLEAR_VOICE         },
    {QSTR("复 位"),                    D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,             ID_PIBFASPage_RESET      },
};
int g_FASPageRomLen = sizeof(g_PicRom_FASPage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(FASPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()
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
        ON_BTNCLK(ID_PIBFASPage_CLEAR_VOICE, OnClearVoiceClk)
        ON_BTNCLK(ID_PIBFASPage_RESET, UpResetClk)
END_MESSAGE_MAP()

FASPage::FASPage()
{
}

void FASPage::OnUpdatePage()
{

    updateTrain(ID_PIBFASPage_TRAIN);

    updateErrorLine(ID_PIBFASPage_TRAIN);//3.5
    updateArrow(ID_PIBFASPage_ARROW_LEFT,ID_PIBFASPage_ARROW_RIGHT);
    updateComm();

    if (m_bBtnPress)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            FAS_button_timer--;
            if (FAS_button_timer <= 0)
            {
                m_bBtnPress = false;
                //BitSet( HMI_send_data27, 9, 0 );//HMiCT_StatusReset_B1      FAS复位
                //BitSet( HMI_send_data27, 10, 0 );//HMiCT_StatusBuzzer_B1    FAS蜂鸣器消音
                BitSet( HMI_send_data40, 16, 0 );//HMiCT_StatusReset_B1      FAS复位
                BitSet( HMI_send_data40, 15, 0 );//HMiCT_StatusBuzzer_B1    FAS蜂鸣器消音
                ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
            }
        }
    }

  //  UpdateFireState();

//    if (Bit(FAS_Master_Bi0_2,8) ||Bit(FAS_Master_Bi0_2,7)||Bit(FAS_Master_Bi0_2,6)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_2,8)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(1);
//        }
//        if (Bit(FAS_Master_Bi0_2,6) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(3);
//        }
//        if (Bit(FAS_Master_Bi0_2,7) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(2);
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(0);
//    }
    if(Bit(FAS_Master_Bi0_3,9)||Bit(FAS_Master_Bi0_4,1)||Bit(FAS_Master_Bi0_4,9)||Bit(FAS_Master_Bi0_5,1)||Bit(FAS_Master_Bi0_5,9)||Bit(FAS_Master_Bi0_6,1)||Bit(FAS_Master_Bi0_6,9)||Bit(FAS_Master_Bi0_7,1)||Bit(FAS_Master_Bi0_7,9)||Bit(FAS_Master_Bi0_8,1)||Bit(FAS_Master_Bi0_8,9)
        ||Bit(FAS_Master_Bi0_9,1)||Bit(FAS_Master_Bi0_9,9)||Bit(FAS_Master_Bi0_10,1)||Bit(FAS_Master_Bi0_10,9)||Bit(FAS_Master_Bi0_11,1)||Bit(FAS_Master_Bi0_11,9)||Bit(FAS_Master_Bi0_12,1)||Bit(FAS_Master_Bi0_12,9)||Bit(FAS_Master_Bi0_13,1))
        {
                ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->SetCtrlEnable(false);
        }
    else
        {
                ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->SetCtrlEnable(true);

        }
    //探测器编号1＃
    if (Bit(FAS_Master_Bi0_3,16) ||Bit(FAS_Master_Bi0_3,14)||Bit(FAS_Master_Bi0_3,13)||Bit(FAS_Master_Bi0_3,12) ||Bit(FAS_Master_Bi0_3,11)||Bit(FAS_Master_Bi0_3,10)||Bit(FAS_Master_Bi0_3,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_3,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_3,14)||Bit(FAS_Master_Bi0_3,13)||Bit(FAS_Master_Bi0_3,12)||Bit(FAS_Master_Bi0_3,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_3,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_3,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(1);//正常工作
    }
//探测器编号2＃
    if (Bit(FAS_Master_Bi0_4,8) ||Bit(FAS_Master_Bi0_4,6)||Bit(FAS_Master_Bi0_4,5)||Bit(FAS_Master_Bi0_4,4) ||Bit(FAS_Master_Bi0_4,3)||Bit(FAS_Master_Bi0_4,2)||Bit(FAS_Master_Bi0_4,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_4,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire2State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_4,6)||Bit(FAS_Master_Bi0_4,5)||Bit(FAS_Master_Bi0_4,4)||Bit(FAS_Master_Bi0_4,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire2State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_4,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire2State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_4,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire2State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire2State(1);//正常工作
    }
//探测器编号3＃
    if (Bit(FAS_Master_Bi0_4,16) ||Bit(FAS_Master_Bi0_4,14)||Bit(FAS_Master_Bi0_4,13)||Bit(FAS_Master_Bi0_4,12) ||Bit(FAS_Master_Bi0_4,11)||Bit(FAS_Master_Bi0_4,10)||Bit(FAS_Master_Bi0_4,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_4,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire3State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_4,14)||Bit(FAS_Master_Bi0_4,13)||Bit(FAS_Master_Bi0_4,12)||Bit(FAS_Master_Bi0_4,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire3State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_4,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire3State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_4,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire3State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire3State(1);//正常工作
    }

//探测器编号4＃
    if (Bit(FAS_Master_Bi0_5,8) ||Bit(FAS_Master_Bi0_5,6)||Bit(FAS_Master_Bi0_5,5)||Bit(FAS_Master_Bi0_5,4) ||Bit(FAS_Master_Bi0_5,3)||Bit(FAS_Master_Bi0_5,2)||Bit(FAS_Master_Bi0_5,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_5,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire4State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_5,6)||Bit(FAS_Master_Bi0_5,5)||Bit(FAS_Master_Bi0_5,4)||Bit(FAS_Master_Bi0_5,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire4State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_5,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire4State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_5,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire4State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire4State(1);//正常工作
    }
//探测器编号5＃
    if (Bit(FAS_Master_Bi0_5,16) ||Bit(FAS_Master_Bi0_5,14)||Bit(FAS_Master_Bi0_5,13)||Bit(FAS_Master_Bi0_5,12) ||Bit(FAS_Master_Bi0_5,11)||Bit(FAS_Master_Bi0_5,10)||Bit(FAS_Master_Bi0_5,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_5,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire5State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_5,14)||Bit(FAS_Master_Bi0_5,13)||Bit(FAS_Master_Bi0_5,12)||Bit(FAS_Master_Bi0_5,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire5State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_5,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire5State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_5,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire5State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire5State(1);//正常工作
    }
//探测器编号6＃
    if (Bit(FAS_Master_Bi0_6,8) ||Bit(FAS_Master_Bi0_6,6)||Bit(FAS_Master_Bi0_6,5)||Bit(FAS_Master_Bi0_6,4) ||Bit(FAS_Master_Bi0_6,3)||Bit(FAS_Master_Bi0_6,2)||Bit(FAS_Master_Bi0_6,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_6,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire6State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_6,6)||Bit(FAS_Master_Bi0_6,5)||Bit(FAS_Master_Bi0_6,4)||Bit(FAS_Master_Bi0_6,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire6State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_6,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire6State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_6,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire6State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire6State(1);//正常工作
    }
//探测器编号7＃
    if (Bit(FAS_Master_Bi0_6,16) ||Bit(FAS_Master_Bi0_6,14)||Bit(FAS_Master_Bi0_6,13)||Bit(FAS_Master_Bi0_6,12) ||Bit(FAS_Master_Bi0_6,11)||Bit(FAS_Master_Bi0_6,10)||Bit(FAS_Master_Bi0_6,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_6,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire7State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_6,14)||Bit(FAS_Master_Bi0_6,13)||Bit(FAS_Master_Bi0_6,12)||Bit(FAS_Master_Bi0_6,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire7State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_6,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire7State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_6,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire7State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire7State(1);//正常工作
    }

//探测器编号8＃
    if (Bit(FAS_Master_Bi0_7,8) ||Bit(FAS_Master_Bi0_7,6)||Bit(FAS_Master_Bi0_7,5)||Bit(FAS_Master_Bi0_7,4) ||Bit(FAS_Master_Bi0_7,3)||Bit(FAS_Master_Bi0_7,2)||Bit(FAS_Master_Bi0_7,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_7,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire8State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_7,6)||Bit(FAS_Master_Bi0_7,5)||Bit(FAS_Master_Bi0_7,4)||Bit(FAS_Master_Bi0_7,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire8State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_7,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire8State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_7,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire8State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire8State(1);//正常工作
    }
//探测器编号9＃
    if (Bit(FAS_Master_Bi0_7,16) ||Bit(FAS_Master_Bi0_7,14)||Bit(FAS_Master_Bi0_7,13)||Bit(FAS_Master_Bi0_7,12) ||Bit(FAS_Master_Bi0_7,11)||Bit(FAS_Master_Bi0_7,10)||Bit(FAS_Master_Bi0_7,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_7,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire9State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_7,14)||Bit(FAS_Master_Bi0_7,13)||Bit(FAS_Master_Bi0_7,12)||Bit(FAS_Master_Bi0_7,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire9State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_7,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire9State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_7,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire9State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire9State(1);//正常工作
    }
//探测器编号10＃
    if (Bit(FAS_Master_Bi0_8,8) ||Bit(FAS_Master_Bi0_8,6)||Bit(FAS_Master_Bi0_8,5)||Bit(FAS_Master_Bi0_8,4) ||Bit(FAS_Master_Bi0_8,3)||Bit(FAS_Master_Bi0_8,2)||Bit(FAS_Master_Bi0_8,1)== 1)
    {
        if (Bit(FAS_Master_Bi0_8,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire10State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_8,6)||Bit(FAS_Master_Bi0_8,5)||Bit(FAS_Master_Bi0_8,4)||Bit(FAS_Master_Bi0_8,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire10State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_8,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire10State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_8,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire10State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire10State(1);//正常工作
    }
//探测器编号11＃
    if (Bit(FAS_Master_Bi0_8,16) ||Bit(FAS_Master_Bi0_8,14)||Bit(FAS_Master_Bi0_8,13)||Bit(FAS_Master_Bi0_8,12) ||Bit(FAS_Master_Bi0_8,11)||Bit(FAS_Master_Bi0_8,10)||Bit(FAS_Master_Bi0_8,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_8,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire11State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_8,14)||Bit(FAS_Master_Bi0_8,13)||Bit(FAS_Master_Bi0_8,12)||Bit(FAS_Master_Bi0_8,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire11State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_8,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire11State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_8,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire11State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire11State(1);//正常工作
    }
//探测器编号12＃
    if (Bit(FAS_Master_Bi0_9,8) ||Bit(FAS_Master_Bi0_9,6)||Bit(FAS_Master_Bi0_9,5)||Bit(FAS_Master_Bi0_9,4) ||Bit(FAS_Master_Bi0_9,3)||Bit(FAS_Master_Bi0_9,2)||Bit(FAS_Master_Bi0_9,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_9,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire12State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_9,6)||Bit(FAS_Master_Bi0_9,5)||Bit(FAS_Master_Bi0_9,4)||Bit(FAS_Master_Bi0_9,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire12State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_9,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire12State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_9,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire12State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire12State(1);//正常工作
    }
//探测器编号13＃
    if (Bit(FAS_Master_Bi0_9,16) ||Bit(FAS_Master_Bi0_9,14)||Bit(FAS_Master_Bi0_9,13)||Bit(FAS_Master_Bi0_9,12) ||Bit(FAS_Master_Bi0_9,11)||Bit(FAS_Master_Bi0_9,10)||Bit(FAS_Master_Bi0_9,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_9,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire13State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_9,14)||Bit(FAS_Master_Bi0_9,13)||Bit(FAS_Master_Bi0_9,12)||Bit(FAS_Master_Bi0_9,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire13State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_9,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire13State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_9,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire13State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire13State(1);//正常工作
    }

//探测器编号14＃
    if (Bit(FAS_Master_Bi0_10,8) ||Bit(FAS_Master_Bi0_10,6)||Bit(FAS_Master_Bi0_10,5)||Bit(FAS_Master_Bi0_10,4) ||Bit(FAS_Master_Bi0_10,3)||Bit(FAS_Master_Bi0_10,2)||Bit(FAS_Master_Bi0_10,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_10,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire14State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_10,6)||Bit(FAS_Master_Bi0_10,5)||Bit(FAS_Master_Bi0_10,4)||Bit(FAS_Master_Bi0_10,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire14State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_10,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire14State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_10,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire14State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire14State(1);//正常工作
    }
//探测器编号15＃
    if (Bit(FAS_Master_Bi0_10,16) ||Bit(FAS_Master_Bi0_10,14)||Bit(FAS_Master_Bi0_10,13)||Bit(FAS_Master_Bi0_10,12) ||Bit(FAS_Master_Bi0_10,11)||Bit(FAS_Master_Bi0_10,10)||Bit(FAS_Master_Bi0_10,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_10,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire15State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_10,14)||Bit(FAS_Master_Bi0_10,13)||Bit(FAS_Master_Bi0_10,12)||Bit(FAS_Master_Bi0_10,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire15State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_10,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire15State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_10,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire15State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire15State(1);//正常工作
    }
//探测器编号16＃
    if (Bit(FAS_Master_Bi0_11,8) ||Bit(FAS_Master_Bi0_11,6)||Bit(FAS_Master_Bi0_11,5)||Bit(FAS_Master_Bi0_11,4) ||Bit(FAS_Master_Bi0_11,3)||Bit(FAS_Master_Bi0_11,2)||Bit(FAS_Master_Bi0_11,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_11,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire16State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_11,6)||Bit(FAS_Master_Bi0_11,5)||Bit(FAS_Master_Bi0_11,4)||Bit(FAS_Master_Bi0_11,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire16State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_11,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire16State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_11,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire16State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire16State(1);//正常工作
    }
//探测器编号17＃
    if (Bit(FAS_Master_Bi0_11,16) ||Bit(FAS_Master_Bi0_11,14)||Bit(FAS_Master_Bi0_11,13)||Bit(FAS_Master_Bi0_11,12) ||Bit(FAS_Master_Bi0_11,11)||Bit(FAS_Master_Bi0_11,10)||Bit(FAS_Master_Bi0_11,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_11,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire17State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_11,14)||Bit(FAS_Master_Bi0_11,13)||Bit(FAS_Master_Bi0_11,12)||Bit(FAS_Master_Bi0_11,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire17State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_11,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire17State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_11,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire17State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire17State(1);//正常工作
    }
//探测器编号18＃
    if (Bit(FAS_Master_Bi0_12,8) ||Bit(FAS_Master_Bi0_12,6)||Bit(FAS_Master_Bi0_12,5)||Bit(FAS_Master_Bi0_12,4) ||Bit(FAS_Master_Bi0_12,3)||Bit(FAS_Master_Bi0_12,2)||Bit(FAS_Master_Bi0_12,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_12,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire18State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_12,6)||Bit(FAS_Master_Bi0_12,5)||Bit(FAS_Master_Bi0_12,4)||Bit(FAS_Master_Bi0_12,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire18State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_12,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire18State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_12,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire18State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire18State(1);//正常工作
    }
//探测器编号19＃
    if (Bit(FAS_Master_Bi0_12,16) ||Bit(FAS_Master_Bi0_12,14)||Bit(FAS_Master_Bi0_12,13)||Bit(FAS_Master_Bi0_12,12) ||Bit(FAS_Master_Bi0_12,11)||Bit(FAS_Master_Bi0_12,10)||Bit(FAS_Master_Bi0_12,9)== 1)
    {
        if(Bit(FAS_Master_Bi0_12,16)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_12,14)||Bit(FAS_Master_Bi0_12,13)||Bit(FAS_Master_Bi0_12,12)||Bit(FAS_Master_Bi0_12,11)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_12,9) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_12,10) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(1);//正常工作
    }
//探测器编号20＃
    if (Bit(FAS_Master_Bi0_13,8) ||Bit(FAS_Master_Bi0_13,6)||Bit(FAS_Master_Bi0_13,5)||Bit(FAS_Master_Bi0_13,4) ||Bit(FAS_Master_Bi0_13,3)||Bit(FAS_Master_Bi0_13,2)||Bit(FAS_Master_Bi0_13,1)== 1)
    {
        if(Bit(FAS_Master_Bi0_13,8)==1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire20State(4);//屏蔽
        }
        if (Bit(FAS_Master_Bi0_13,6)||Bit(FAS_Master_Bi0_13,5)||Bit(FAS_Master_Bi0_13,4)||Bit(FAS_Master_Bi0_13,3)== 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire20State(3);//故障
        }
        if (Bit(FAS_Master_Bi0_13,1) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire20State(2);//火警
        }
        if (Bit(FAS_Master_Bi0_13,2) == 1)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire20State(0);//通信故障
        }
    }
    else
    {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire20State(1);//正常工作
    }

//    if (Bit(FAS_Master_Bi0_13,16) ||Bit(FAS_Master_Bi0_13,14)||Bit(FAS_Master_Bi0_13,13)||Bit(FAS_Master_Bi0_13,12) ||Bit(FAS_Master_Bi0_13,11)||Bit(FAS_Master_Bi0_13,10)||Bit(FAS_Master_Bi0_13,9)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_13,16)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(4);//屏蔽
//        }
//        if (Bit(FAS_Master_Bi0_13,14)||Bit(FAS_Master_Bi0_13,13)||Bit(FAS_Master_Bi0_13,12)||Bit(FAS_Master_Bi0_13,11)== 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(3);//故障
//        }
//        if (Bit(FAS_Master_Bi0_13,9) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(2);//火警
//        }
//        if (Bit(FAS_Master_Bi0_13,10) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(0);//通信故障
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire19State(1);//正常工作
//    }


//    if (Bit(FAS_Master_Bi0_7,4)||Bit(FAS_Master_Bi0_7,3)||Bit(FAS_Master_Bi0_7,2) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_7,4) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire22State(1);
//        }
//        if (Bit(FAS_Master_Bi0_7,2) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire22State(3);
//        }
//        if (Bit(FAS_Master_Bi0_7,3) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire22State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire22State(0);
//    }

//    if (Bit(FAS_Master_Bi0_7,16)||Bit(FAS_Master_Bi0_7,15)||Bit(FAS_Master_Bi0_7,14) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_7,16) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire23State(1);
//        }
//        if (Bit(FAS_Master_Bi0_7,14) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire23State(3);
//        }
//        if (Bit(FAS_Master_Bi0_7,15) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire23State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire23State(0);
//    }


//    if (Bit(FAS_Master_Bi0_7,12)||Bit(FAS_Master_Bi0_7,11)||Bit(FAS_Master_Bi0_7,10) == 1)
//    {

//        if (Bit(FAS_Master_Bi0_7,12) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire24State(1);
//        }
//        if (Bit(FAS_Master_Bi0_7,10) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire24State(3);
//        }
//        if (Bit(FAS_Master_Bi0_7,11) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire24State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire24State(0);
//    }

//    if (Bit(FAS_Master_Bi0_8,8) ||Bit(FAS_Master_Bi0_8,7)||Bit(FAS_Master_Bi0_8,6)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_8,8)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire25State(1);
//        }
//        if (Bit(FAS_Master_Bi0_8,6) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire25State(3);
//        }
//        if (Bit(FAS_Master_Bi0_8,7) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire25State(2);
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire25State(0);
//    }

//    if (Bit(FAS_Master_Bi0_8,4)||Bit(FAS_Master_Bi0_8,3)||Bit(FAS_Master_Bi0_8,2) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_8,4) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire26State(1);
//        }
//        if (Bit(FAS_Master_Bi0_8,2) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire26State(3);
//        }
//        if (Bit(FAS_Master_Bi0_8,3) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire26State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire26State(0);
//    }

//    if (Bit(FAS_Master_Bi0_8,16)||Bit(FAS_Master_Bi0_8,15)||Bit(FAS_Master_Bi0_8,14) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_8,16) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire27State(1);
//        }
//        if (Bit(FAS_Master_Bi0_8,14) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire27State(3);
//        }
//        if (Bit(FAS_Master_Bi0_8,15) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire27State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire27State(0);
//    }


//    if (Bit(FAS_Master_Bi0_8,12)||Bit(FAS_Master_Bi0_8,11)||Bit(FAS_Master_Bi0_8,10) == 1)
//    {

//        if (Bit(FAS_Master_Bi0_8,12) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire28State(1);
//        }
//        if (Bit(FAS_Master_Bi0_8,10) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire28State(3);
//        }
//        if (Bit(FAS_Master_Bi0_8,11) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire28State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire28State(0);
//    }

//    if (Bit(FAS_Master_Bi0_9,8) ||Bit(FAS_Master_Bi0_9,7)||Bit(FAS_Master_Bi0_9,6)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_9,8)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire29State(1);
//        }
//        if (Bit(FAS_Master_Bi0_9,6) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire29State(3);
//        }
//        if (Bit(FAS_Master_Bi0_9,7) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire29State(2);
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire29State(0);
//    }

//    if (Bit(FAS_Master_Bi0_9,4)||Bit(FAS_Master_Bi0_9,3)||Bit(FAS_Master_Bi0_9,2) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_9,4) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire30State(1);
//        }
//        if (Bit(FAS_Master_Bi0_9,2) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire30State(3);
//        }
//        if (Bit(FAS_Master_Bi0_9,3) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire30State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire30State(0);
//    }

//    if (Bit(FAS_Master_Bi0_9,16)||Bit(FAS_Master_Bi0_9,15)||Bit(FAS_Master_Bi0_9,14) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_9,16) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire31State(1);
//        }
//        if (Bit(FAS_Master_Bi0_9,14) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire31State(3);
//        }
//        if (Bit(FAS_Master_Bi0_9,15) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire31State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire31State(0);
//    }


//    if (Bit(FAS_Master_Bi0_9,12)||Bit(FAS_Master_Bi0_9,11)||Bit(FAS_Master_Bi0_9,10) == 1)
//    {

//        if (Bit(FAS_Master_Bi0_9,12) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire32State(1);
//        }
//        if (Bit(FAS_Master_Bi0_9,10) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire32State(3);
//        }
//        if (Bit(FAS_Master_Bi0_9,11) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire32State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire32State(0);
//    }

//    if (Bit(FAS_Master_Bi0_10,8) ||Bit(FAS_Master_Bi0_10,7)||Bit(FAS_Master_Bi0_10,6)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_10,8)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire33State(1);
//        }
//        if (Bit(FAS_Master_Bi0_10,6) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire33State(3);
//        }
//        if (Bit(FAS_Master_Bi0_10,7) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire33State(2);
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire33State(0);
//    }

//    if (Bit(FAS_Master_Bi0_10,4)||Bit(FAS_Master_Bi0_10,3)||Bit(FAS_Master_Bi0_10,2) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_10,4) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire34State(1);
//        }
//        if (Bit(FAS_Master_Bi0_10,2) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire34State(3);
//        }
//        if (Bit(FAS_Master_Bi0_10,3) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire34State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire34State(0);
//    }

//    if (Bit(FAS_Master_Bi0_10,16)||Bit(FAS_Master_Bi0_10,15)||Bit(FAS_Master_Bi0_10,14) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_10,16) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire35State(1);
//        }
//        if (Bit(FAS_Master_Bi0_10,14) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire35State(3);
//        }
//        if (Bit(FAS_Master_Bi0_10,15) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire35State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire35State(0);
//    }


//    if (Bit(FAS_Master_Bi0_10,12)||Bit(FAS_Master_Bi0_10,11)||Bit(FAS_Master_Bi0_10,10) == 1)
//    {

//        if (Bit(FAS_Master_Bi0_10,12) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire36State(1);
//        }
//        if (Bit(FAS_Master_Bi0_10,10) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire36State(3);
//        }
//        if (Bit(FAS_Master_Bi0_10,11) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire36State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire36State(0);
//    }

//    if (Bit(FAS_Master_Bi0_11,8) ||Bit(FAS_Master_Bi0_11,7)||Bit(FAS_Master_Bi0_11,6)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_11,8)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire37State(1);
//        }
//        if (Bit(FAS_Master_Bi0_11,6) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire37State(3);
//        }
//        if (Bit(FAS_Master_Bi0_11,7) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire37State(2);
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire37State(0);
//    }

//    if (Bit(FAS_Master_Bi0_11,4)||Bit(FAS_Master_Bi0_11,3)||Bit(FAS_Master_Bi0_11,2) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_11,4) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire38State(1);
//        }
//        if (Bit(FAS_Master_Bi0_11,2) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire38State(3);
//        }
//        if (Bit(FAS_Master_Bi0_11,3) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire38State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire38State(0);
//    }

//    if (Bit(FAS_Master_Bi0_11,16)||Bit(FAS_Master_Bi0_11,15)||Bit(FAS_Master_Bi0_11,14) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_11,16) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire39State(1);
//        }
//        if (Bit(FAS_Master_Bi0_11,14) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire39State(3);
//        }
//        if (Bit(FAS_Master_Bi0_11,15) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire39State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire39State(0);
//    }


//    if (Bit(FAS_Master_Bi0_11,12)||Bit(FAS_Master_Bi0_11,11)||Bit(FAS_Master_Bi0_11,10) == 1)
//    {

//        if (Bit(FAS_Master_Bi0_11,12) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire40State(1);
//        }
//        if (Bit(FAS_Master_Bi0_11,10) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire40State(3);
//        }
//        if (Bit(FAS_Master_Bi0_11,11) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire40State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire40State(0);
//    }

//    if (Bit(FAS_Master_Bi0_12,8) ||Bit(FAS_Master_Bi0_12,7)||Bit(FAS_Master_Bi0_12,6)== 1)
//    {
//        if(Bit(FAS_Master_Bi0_12,8)==1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire41State(1);
//        }
//        if (Bit(FAS_Master_Bi0_12,6) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire41State(3);
//        }
//        if (Bit(FAS_Master_Bi0_12,7) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire41State(2);
//        }
//    }
//    else
//    {
//         ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire41State(0);
//    }

//    if (Bit(FAS_Master_Bi0_12,4)||Bit(FAS_Master_Bi0_12,3)||Bit(FAS_Master_Bi0_12,2) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_12,4) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire42State(1);
//        }
//        if (Bit(FAS_Master_Bi0_12,2) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire42State(3);
//        }
//        if (Bit(FAS_Master_Bi0_12,3) == 1)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire42State(2);
//        }
//    }
//    else
//    {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire42State(0);
//    }



//    if (Bit(FAS_Master_Bi0_12,16)||Bit(FAS_Master_Bi0_12,15)||Bit(FAS_Master_Bi0_12,14) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_12,16) == 1)
//        {
//            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE43))->SetLabelState(9);
//        }
//        if (Bit(FAS_Master_Bi0_12,14) == 1)
//        {
//            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE43))->SetLabelState(11);
//        }
//        if (Bit(FAS_Master_Bi0_12,15) == 1)
//        {
//            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE43))->SetLabelState(10);
//        }
//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE43))->SetLabelState(12);
//    }


//    if (Bit(FAS_Master_Bi0_12,12)||Bit(FAS_Master_Bi0_12,11)||Bit(FAS_Master_Bi0_12,10) == 1)
//    {
//        if (Bit(FAS_Master_Bi0_12,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE44))->SetLabelState(9);
//        }
//        if (Bit(FAS_Master_Bi0_12,10) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE44))->SetLabelState(11);
//        }
//        if (Bit(FAS_Master_Bi0_12,11) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE44))->SetLabelState(10);
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE44))->SetLabelState(12);
//    }


//    if (Bit(FAS_Master_Bi0_13,8) ||Bit(FAS_Master_Bi0_13,7)||Bit(FAS_Master_Bi0_13,6)== 1)
//    {
//        if (Bit(FAS_Master_Bi0_13,8) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE45))->SetLabelState(9);
//        }
//        if (Bit(FAS_Master_Bi0_13,6) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE45))->SetLabelState(11);
//        }
//        if (Bit(FAS_Master_Bi0_13,7) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE45))->SetLabelState(10);
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE45))->SetLabelState(12);
//    }



//    if (Bit(FAS_Master_Bi0_13,4)||Bit(FAS_Master_Bi0_13,3)||Bit(FAS_Master_Bi0_13,2) == 1)
//    {

//        if (Bit(FAS_Master_Bi0_13,4) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE46))->SetLabelState(9);
//        }
//        if (Bit(FAS_Master_Bi0_13,2) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE46))->SetLabelState(11);
//        }
//        if (Bit(FAS_Master_Bi0_13,3) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE46))->SetLabelState(10);
//        }
//    }
//    else
//    {
//         ((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE46))->SetLabelState(12);
//    }

    if (Bit(FAS_Master_Bi0_13,16)||Bit(FAS_Master_Bi0_13,15)||Bit(FAS_Master_Bi0_13,14) == 1)
    {

        if (Bit(FAS_Master_Bi0_13,16) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE47))->SetLabelState(9);
        }
        if (Bit(FAS_Master_Bi0_13,14) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE47))->SetLabelState(11);
        }
        if (Bit(FAS_Master_Bi0_13,15) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE47))->SetLabelState(10);
        }


    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE47))->SetLabelState(12);
    }

    if (Bit(FAS_Master_Bi0_13,12)||Bit(FAS_Master_Bi0_13,11)||Bit(FAS_Master_Bi0_13,10) == 1)
    {

        if (Bit(FAS_Master_Bi0_13,12) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE48))->SetLabelState(9);
        }
        if (Bit(FAS_Master_Bi0_13,10) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE48))->SetLabelState(11);
        }
        if (Bit(FAS_Master_Bi0_13,11) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE48))->SetLabelState(10);
        }

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE48))->SetLabelState(12);
    }

    if (Bit(FAS_Master_Bi0_14,8)||Bit(FAS_Master_Bi0_14,7)||Bit(FAS_Master_Bi0_14,6) == 1)
    {

        if (Bit(FAS_Master_Bi0_14,8) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE49))->SetLabelState(9);
        }
        if (Bit(FAS_Master_Bi0_14,6) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE49))->SetLabelState(11);
        }
        if (Bit(FAS_Master_Bi0_14,7) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE49))->SetLabelState(10);
        }
    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE49))->SetLabelState(12);
    }

    if (Bit(FAS_Master_Bi0_14,4)||Bit(FAS_Master_Bi0_14,3)||Bit(FAS_Master_Bi0_14,2) == 1)
    {

        if (Bit(FAS_Master_Bi0_14,4) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE50))->SetLabelState(9);
        }
        if (Bit(FAS_Master_Bi0_14,2) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE50))->SetLabelState(11);
        }
        if (Bit(FAS_Master_Bi0_14,3) == 1)
        {
            //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE50))->SetLabelState(10);
        }
    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBFASPage_FIRE50))->SetLabelState(12);
    }
//模拟报警和故障
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(3);
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire9State(2);

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->DrawTrainDiagramCtrl();


#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBMAIN_COMMINTERRUPT);

    updateFault(ID_PIBMAIN_ICON_WARNNING);

#endif
}

void FASPage::updateComm()
{
    int communication;
    if(Bit(FAS_Master_Bi0_2,7)==1)
        communication=1;
    else
        communication=0;
    //SetLabelColor(ID_PIBFASPage_1COMM2,communication);

}

void FASPage::SetLabelColor(int id, int colorVal)
{
    //ASSERT((colorVal >= 0) && (colorVal <= 15));
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (0 == colorVal)
    {
     ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::transparent);
     ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
}

void FASPage::OnInitPage()
{

//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE1))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE2))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE3))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE4))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE5))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE6))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE7))->ShowImage();
//    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_FIRE8))->ShowImage();

    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_ICON1))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_PIBFASPage_ICON2))->ShowImage();
    //((CImageCtrl*)GetDlgItem(ID_PIBFASPage_ICON3))->ShowImage();

    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->m_bAutoUpState = false;
    ((CLabel*)GetDlgItem(ID_PIBFASPage_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBFASPage_LABEL2))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(ID_PIBFASPage_LABEL3))->SetAlignment(Qt::AlignLeft);
}

void FASPage::OnLeavePage()
{
//    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_ACCESSORYSYSTEMTESTHELP)
//    {
        m_bBtnPress = false;
        //BitSet( HMI_send_data27, 9, 0 );//HMiCT_StatusReset_B1      FAS复位
        //BitSet( HMI_send_data27, 10, 0 );//HMiCT_StatusBuzzer_B1    FAS蜂鸣器消音
        BitSet( HMI_send_data40, 16, 0 );//HMiCT_StatusReset_B1      FAS复位
        BitSet( HMI_send_data40, 15, 0 );//HMiCT_StatusBuzzer_B1    FAS蜂鸣器消音
        ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
//    }
}

void FASPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));

#endif
    this->InitPageHeader();

    FAS_button_timer = 0;
    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->SetCtrlEnable(true);
    if(CGlobal::m_nPrePageIndex!=PAGE_INDEX_REALTIMEFAULT)
    {
        m_fas_PrePageIndex=CGlobal::m_nPrePageIndex;
    }

}


#ifdef PAGE_BUTTON_BAR_NEW
void FASPage::OnComBtn1Clk()
{

}

void FASPage::OnComBtn2Clk()
{

}

void FASPage::OnComBtn3Clk()
{

}

void FASPage::OnComBtn4Clk()
{

}

void FASPage::OnComBtn5Clk()
{

}

void FASPage::OnComBtn6Clk()
{

}
void FASPage::OnComBtn7Clk()
{
    //ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP);
}
void FASPage::OnComBtn8Clk()
{

    m_bBtnPress = false;
//    BitSet( HMI_send_data27, 9, 0 );//HMiCT_StatusReset_B1      FAS复位
//    BitSet( HMI_send_data27, 10, 0 );//HMiCT_StatusBuzzer_B1    FAS蜂鸣器消音
    BitSet( HMI_send_data40, 16, 0 );//HMiCT_StatusReset_B1      FAS复位
    BitSet( HMI_send_data40, 15, 0 );//HMiCT_StatusBuzzer_B1    FAS蜂鸣器消音
    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
    if(CGlobal::m_nPrePageIndex==PAGE_INDEX_REALTIMEFAULT)
    {
        ChangePage(m_fas_PrePageIndex);
    }
    else
    {
        ChangePage(CGlobal::m_nPrePageIndex);
    }

}

void FASPage::OnClearVoiceClk()
{
    m_bBtnPress = true;
//    if (FAS_button_timer==0)
//    {
        //BitSet( HMI_send_data27, 10, 1 );
    BitSet( HMI_send_data40, 15, 1 );
        FAS_button_timer=3;
//    }
}

void FASPage::UpResetClk()
{
    m_bBtnPress = true;
//    if (FAS_button_timer==0)
//    {
        //BitSet( HMI_send_data27, 9, 1 );
    BitSet( HMI_send_data40, 16, 1 );
        FAS_button_timer=3;
//    }
}

void FASPage::UpdateFireState()
{
    if (Bit(FAS_Master_Bi0_2,8) == 0)
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(1);
    }

    if (Bit(FAS_Master_Bi0_2,7) == 0)
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(2);
    }

    if (Bit(FAS_Master_Bi0_2,6) == 0)
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->setFire1State(3);
    }
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PIBFASPage_TRAINDIAGRAM))->DrawTrainDiagramCtrl();
}
#else
void FASPage::OnComBtn1Clk()
{

}

void FASPage::OnComBtn2Clk()
{

}

void FASPage::OnComBtn3Clk()
{

}

void FASPage::OnComBtn4Clk()
{

}

void FASPage::OnComBtn5Clk()
{

}

void FASPage::OnComBtn6Clk()
{

}



//void FASPage::OnUpdatePage()
//{
//   //    UpdateTrainDiagram();
//}






#endif

