#include "CTryRunTestPage.h"

ROMDATA g_PicRom_TryRunTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR(" 加减速度\n试验") )

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR("加减速度试验"))
    D_COMMON_PAGE_BUTTON_BAR

    {QSTR("网压"),                   D_FONT_BOLD(8),      QRect(  4,   4,  56,  34),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 62,   2,  80,  38),           Qt::white,                Qt::green,          CONTROL_LABEL,          ID_TRTP_LABEL_V                     },

    {QSTR("网流"),                   D_FONT_BOLD(8),      QRect(143,   4,  56,  34),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(200,   2,  80,  38),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_A                     },
    {QSTR("牵引*制动级位"),          D_FONT_BOLD(8),      QRect(540,  45, 150,  20),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(540,  66, 150,  30),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_TRTP_LABEL_TRACTIONMODEL         },

    {QSTR("速度"),                  D_FONT_BOLD(8),      QRect(700,  45,  70,  20),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(700,  66,  70,  30),            Qt::white,                Qt::black,         CONTROL_LABEL,           ID_TRTP_LABEL_SPEED                },

#endif



//    {"",                            D_FONT_BOLD(6),      QRect( 10,  50, 520,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 10,  75, 520,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 10, 100, 520,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 10, 125, 521,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//
//    {"",                            D_FONT_BOLD(6),      QRect( 10,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 90, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(130,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(170, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(210,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(250, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(290,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(330, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(370,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(410, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(450,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(490, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(530,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },


//    {"",                            D_FONT_BOLD(6),      QRect( 10,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 90, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(130,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(170, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(210,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(250, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(290,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(330, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(370,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(410, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(450,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(490, 100,   1,  25),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(530,  50,   1,  75),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },

//    {QSTR("KN"),                    D_FONT_BOLD(6),      QRect( 11,  77,  35,  18),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("BCP"),                   D_FONT_BOLD(6),      QRect( 11, 102,  35,  18),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("1"),                     D_FONT_BOLD(6),      QRect( 70,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("2"),                     D_FONT_BOLD(6),      QRect(150,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("3"),                     D_FONT_BOLD(6),      QRect(230,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("4"),                     D_FONT_BOLD(6),      QRect(310,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("5"),                     D_FONT_BOLD(6),      QRect(390,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("6"),                     D_FONT_BOLD(6),      QRect(470,  52,  40,  21),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("60"),                    D_FONT_BOLD(6),      QRect( 71,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN1                   },
//    {QSTR("60"),                    D_FONT_BOLD(6),      QRect(150,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN2                   },
//    {QSTR("60"),                    D_FONT_BOLD(6),      QRect(230,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN3                   },
//    {QSTR("60"),                    D_FONT_BOLD(6),      QRect(310,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN4                   },
//    {QSTR("60"),                    D_FONT_BOLD(6),      QRect(390,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN5                   },
//    {QSTR("60"),                    D_FONT_BOLD(6),      QRect(470,  77,  40,  23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_TRTP_LABEL_KN6                   },
//    {QSTR("4.1"),                   D_FONT_BOLD(6),      QRect( 54, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP1                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect( 92, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP2                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(133, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP3                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(173, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP4                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(213, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP5                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(253, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP6                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(293, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP7                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(333, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP8                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(373, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP9                  },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(413, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP10                 },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(453, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP11                 },
//    {QSTR("7.6"),                   D_FONT_BOLD(6),      QRect(493, 103,  36,  20),           Qt::white,                Qt::red,            CONTROL_LABEL,          ID_TRTP_LABEL_BCP12                 },

    {"",                            D_FONT_BOLD(6),      QRect( 10, 140, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 172, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 204, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 236, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 268, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 300, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 332, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 364, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 396, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 428, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 460, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 492, 780,   1),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 10, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 42, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(173, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(294, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(405, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(467, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(563, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(638, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(717, 140,   1, 352),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(790, 140,   1, 353),           Qt::white,                Qt::black,          CONTROL_LINE,           ID_IGNORE         },

    {QSTR("1"),                     D_FONT_BOLD(8),      QRect( 11, 173,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("2"),                     D_FONT_BOLD(8),      QRect( 11, 205,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("3"),                     D_FONT_BOLD(8),      QRect( 11, 237,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("4"),                     D_FONT_BOLD(8),      QRect( 11, 269,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("5"),                     D_FONT_BOLD(8),      QRect( 11, 301,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("6"),                     D_FONT_BOLD(8),      QRect( 11, 333,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("7"),                     D_FONT_BOLD(8),      QRect( 11, 365,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("8"),                     D_FONT_BOLD(8),      QRect( 11, 397,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("9"),                     D_FONT_BOLD(8),      QRect( 11, 429,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("10"),                    D_FONT_BOLD(8),      QRect( 11, 461,  31,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("时 间"),                 D_FONT_BOLD(8),      QRect( 43, 142, 130,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 173, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME1                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 205, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME2                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 237, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME3                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 269, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME4                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 301, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME5                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 333, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME6                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 365, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME7                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 397, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME8                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 429, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME9                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 43, 461, 130,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TIME10                },
    {QSTR("测定种类"),               D_FONT_BOLD(8),      QRect(174, 141, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 173, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE1             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 205, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE2             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 237, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE3             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 269, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE4             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 301, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE5             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 333, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE6             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 365, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE7             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 397, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE8             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 429, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE9             },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(174, 461, 120,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_TESTTYPE10            },
    {QSTR("加减速度"),               D_FONT_BOLD(8),      QRect(295, 141, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 173, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED1              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 205, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED2              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 237, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED3              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 269, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED4              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 301, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED5              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 333, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED6              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 365, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED7              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 397, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED8              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 429, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED9              },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(295, 461, 110,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_ADSPEED10             },
    {QSTR("级位"),                   D_FONT_BOLD(8),      QRect(406, 141,  61,  31),           Qt::white,               Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 173,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW1                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 205,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW2                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 237,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW3                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 269,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW4                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 301,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW5                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 333,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW6                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 365,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW7                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 397,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW8                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 429,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW9                   },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(406, 461,  61,  31),           Qt::white,               Qt::black,            CONTROL_LABEL,          ID_TRTP_LABEL_JW10                  },
    {QSTR("再生"),                   D_FONT_BOLD(8),      QRect(468, 141, 95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 173,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE1            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 205,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE2            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 237,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE3            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 269,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE4            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 301,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE5            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 333,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE6            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 365,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE7            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 397,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE8            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 429,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE9            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(468, 461,  95,  31),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_REPRODUCE10           },
    {QSTR("紧急制动"),               D_FONT_BOLD(8),      QRect(565, 141,  73,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 174,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD1                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 206,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD2                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 238,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD3                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 270,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD4                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 302,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD5                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 334,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD6                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 366,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD7                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 398,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD8                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 430,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD9                 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(565, 462,  73,  30),           Qt::white,               Qt::black,             CONTROL_LABEL,          ID_TRTP_LABEL_JJZD10                },
    {QSTR("制动初速"),               D_FONT_BOLD(8),      QRect(639, 141,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 174,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED1      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 206,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED2      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 238,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED3      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 270,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED4      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 302,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED5      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 334,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED6      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 366,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED7      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 398,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED8      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 430,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED9      },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(639, 462,  76,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKESTARTSPEED10     },
    {QSTR("制动距离"),               D_FONT_BOLD(8),      QRect(718, 141,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 174,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE1        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 206,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE2        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 238,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE3        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 270,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE4        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 302,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE5        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 334,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE6        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 366,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE7        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 398,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE8        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 430,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE9        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(718, 462,  72,  30),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_TRTP_LABEL_BRAKEDISTANCE10       },

    {QSTR("开   始"),               D_FONT_BOLD(8),      QRect( 25, 500, 100,  38),           Qt::black,               Qt::gray,            CONTROL_BUTTON,         ID_TRTP_BUTTON_TESTSTART     },
    {QSTR("终   止"),               D_FONT_BOLD(8),      QRect(155, 500, 100,  38),           Qt::black,               Qt::gray,            CONTROL_BUTTON,         ID_TRTP_BUTTON_TESTSTOP     },
    {QSTR("按[开始]键开始测定。"),    D_FONT_BOLD(8),      QRect(256, 500, 250,  40),           Qt::white,               Qt::black,           CONTROL_LABEL,          ID_IGNORE         },



};
int g_TryRunTestRomLen = sizeof(g_PicRom_TryRunTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTryRunTestPage,CPage)
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
        ON_BTNCLK(ID_TRTP_BUTTON_TESTSTART, OnStartClk)
        ON_BTNCLK(ID_TRTP_BUTTON_TESTSTOP, OnStopClk)
END_MESSAGE_MAP()

CTryRunTestPage::CTryRunTestPage()
{
}

void CTryRunTestPage::OnUpdatePage()
{
    UpdataTry_RunData();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
}


void CTryRunTestPage::OnInitPage()
{
   ((CButton*)GetDlgItem(ID_TRTP_BUTTON_TESTSTART))->m_bAutoUpState = false;
#ifdef PAGE_HEADER_OLD

   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_V))->SetBorderColor(Qt::white);
   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_A))->SetBorderColor(Qt::white);

   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
   ((CLabel *) GetDlgItem(ID_TRTP_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif


}

void CTryRunTestPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));
#endif
    this->InitPageHeader();
}

void CTryRunTestPage::OnLeavePage()
{
    OnStopClk();
}
#ifdef PAGE_BUTTON_BAR_NEW
void CTryRunTestPage::OnComBtn1Clk()
{

}

void CTryRunTestPage::OnComBtn2Clk()
{

}

void CTryRunTestPage::OnComBtn3Clk()
{

}

void CTryRunTestPage::OnComBtn4Clk()
{

}

void CTryRunTestPage::OnComBtn5Clk()
{

}

void CTryRunTestPage::OnComBtn6Clk()
{

}
void CTryRunTestPage::OnComBtn7Clk()
{

}
void CTryRunTestPage::OnComBtn8Clk()
{
    OnStopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CTryRunTestPage::OnComBtn1Clk()
{

}

void CTryRunTestPage::OnComBtn2Clk()
{

}

void CTryRunTestPage::OnComBtn3Clk()
{

}

void CTryRunTestPage::OnComBtn4Clk()
{

}

void CTryRunTestPage::OnComBtn5Clk()
{

}

void CTryRunTestPage::OnComBtn6Clk()
{
    OnStopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif

void CTryRunTestPage::OnStartClk()
{
    BitSet(HMI_send_data28,12,1);
}

void CTryRunTestPage::OnStopClk()
{
    ((CButton*)GetDlgItem(ID_TRTP_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
    BitSet(HMI_send_data28,12,0);
}

void CTryRunTestPage::UpdateAValue()
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

    SetAValue(ID_TRTP_LABEL_A, webflow);

#endif

}

void CTryRunTestPage::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD

    UpdateVoltage(ID_TRTP_LABEL_V);

#endif

}

void CTryRunTestPage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_TRTP_LABEL_TRACTIONMODEL);

#endif

}

void CTryRunTestPage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

     ((CLabel *)GetDlgItem(ID_TRTP_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void CTryRunTestPage::UpdataTry_RunData()
{
    //time str
    QString timestr = GetTimeStr();
    tr_testtype = ERM_F01_4%256;

    tr_testtype_record=(tr_testtype^tr_testtype_temp)&tr_testtype;

    if (tr_testtype_record!=0)
    {
        tr_testtype_temp=tr_testtype;
        if (tr_testtimes%10==0)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date1=timestr;
                tr_testtype1=QSTR("加速度1");
                tr_levelcolor1=1;
                tr_ADSpeed1=DivNum(ERM_F01_1,100);
                tr_BrakeDistance1=ERM_F01_3;
                tr_BrakeInitalSpeed1=ERM_F01_5%256;
                tr_regeneration1=Bit(ERM_F01_5,16);
                tr_level1=ERM_F01_4;
                tr_emergencybraking1=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date1=timestr;
                tr_testtype1=QSTR("加速度2");
                tr_levelcolor1=1;
                tr_ADSpeed1=DivNum(ERM_F01_1,100);
                tr_BrakeDistance1=ERM_F01_3;
                tr_BrakeInitalSpeed1=ERM_F01_5%256;
                tr_regeneration1=Bit(ERM_F01_5,16);
                tr_level1=ERM_F01_4;
                tr_emergencybraking1=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date1=timestr;
                tr_testtype1=QSTR("减速度");
                tr_levelcolor1=2;
                tr_ADSpeed1=DivNum(ERM_F01_1,100);
                tr_BrakeDistance1=ERM_F01_3;
                tr_BrakeInitalSpeed1=ERM_F01_5%256;
                tr_regeneration1=Bit(ERM_F01_5,16);
                tr_level1=ERM_F01_4;
                tr_emergencybraking1=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==1)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date2=timestr;
                tr_testtype2=QSTR("加速度1");
                tr_levelcolor2=1;
                tr_ADSpeed2=DivNum(ERM_F01_1,100);
                tr_BrakeDistance2=ERM_F01_3;
                tr_BrakeInitalSpeed2=ERM_F01_5%256;
                tr_regeneration2=Bit(ERM_F01_5,16);
                tr_level2=ERM_F01_4;
                tr_emergencybraking2=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date2=timestr;
                tr_testtype2=QSTR("加速度2");
                tr_levelcolor2=1;
                tr_ADSpeed2=DivNum(ERM_F01_1,100);
                tr_BrakeDistance2=ERM_F01_3;
                tr_BrakeInitalSpeed2=ERM_F01_5%256;
                tr_regeneration2=Bit(ERM_F01_5,16);
                tr_level2=ERM_F01_4;
                tr_emergencybraking2=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date2=timestr;
                tr_testtype2=QSTR("减速度");
                tr_levelcolor2=2;
                tr_ADSpeed2=DivNum(ERM_F01_1,100);
                tr_BrakeDistance2=ERM_F01_3;
                tr_BrakeInitalSpeed2=ERM_F01_5%256;
                tr_regeneration2=Bit(ERM_F01_5,16);
                tr_level2=ERM_F01_4;
                tr_emergencybraking2=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==2)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date3=timestr;
                tr_testtype3=QSTR("加速度1");
                tr_levelcolor3=1;
                tr_ADSpeed3=DivNum(ERM_F01_1,100);
                tr_BrakeDistance3=ERM_F01_3;
                tr_BrakeInitalSpeed3=ERM_F01_5%256;
                tr_regeneration3=Bit(ERM_F01_5,16);
                tr_level3=ERM_F01_4;
                tr_emergencybraking3=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date3=timestr;
                tr_testtype3=QSTR("加速度2");
                tr_levelcolor3=1;
                tr_ADSpeed3=DivNum(ERM_F01_1,100);
                tr_BrakeDistance3=ERM_F01_3;
                tr_BrakeInitalSpeed3=ERM_F01_5%256;
                tr_regeneration3=Bit(ERM_F01_5,16);
                tr_level3=ERM_F01_4;
                tr_emergencybraking3=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date3=timestr;
                tr_testtype3=QSTR("减速度");
                tr_levelcolor3=2;
                tr_ADSpeed3=DivNum(ERM_F01_1,100);
                tr_BrakeDistance3=ERM_F01_3;
                tr_BrakeInitalSpeed3=ERM_F01_5%256;
                tr_regeneration3=Bit(ERM_F01_5,16);
                tr_level3=ERM_F01_4;
                tr_emergencybraking3=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==3)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date4=timestr;
                tr_testtype4=QSTR("加速度1");
                tr_levelcolor4=1;
                tr_ADSpeed4=DivNum(ERM_F01_1,100);
                tr_BrakeDistance4=ERM_F01_3;
                tr_BrakeInitalSpeed4=ERM_F01_5%256;
                tr_regeneration4=Bit(ERM_F01_5,16);
                tr_level4=ERM_F01_4;
                tr_emergencybraking4=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date4=timestr;
                tr_testtype4=QSTR("加速度2");
                tr_levelcolor4=1;
                tr_ADSpeed4=DivNum(ERM_F01_1,100);
                tr_BrakeDistance4=ERM_F01_3;
                tr_BrakeInitalSpeed4=ERM_F01_5%256;
                tr_regeneration4=Bit(ERM_F01_5,16);
                tr_level4=ERM_F01_4;
                tr_emergencybraking4=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date4=timestr;
                tr_testtype4=QSTR("减速度");
                tr_levelcolor4=2;
                tr_ADSpeed4=DivNum(ERM_F01_1,100);
                tr_BrakeDistance4=ERM_F01_3;
                tr_BrakeInitalSpeed4=ERM_F01_5%256;
                tr_regeneration4=Bit(ERM_F01_5,16);
                tr_level4=ERM_F01_4;
                tr_emergencybraking4=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==4)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date5=timestr;
                tr_testtype5=QSTR("加速度1");
                tr_levelcolor5=1;
                tr_ADSpeed5=DivNum(ERM_F01_1,100);
                tr_BrakeDistance5=ERM_F01_3;
                tr_BrakeInitalSpeed5=ERM_F01_5%256;
                tr_regeneration5=Bit(ERM_F01_5,16);
                tr_level5=ERM_F01_4;
                tr_emergencybraking5=CCU_HMI_222_15;
            }
             if (Bit(tr_testtype_record,2)==1)
            {
                tr_date5=timestr;
                tr_testtype5=QSTR("加速度2");
                tr_levelcolor5=1;
                tr_ADSpeed5=DivNum(ERM_F01_1,100);
                tr_BrakeDistance5=ERM_F01_3;
                tr_BrakeInitalSpeed5=ERM_F01_5%256;
                tr_regeneration5=Bit(ERM_F01_5,16);
                tr_level5=ERM_F01_4;
                tr_emergencybraking5=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date5=timestr;
                tr_testtype5=QSTR("减速度");
                tr_levelcolor5=2;
                tr_ADSpeed5=DivNum(ERM_F01_1,100);
                tr_BrakeDistance5=ERM_F01_3;
                tr_BrakeInitalSpeed5=ERM_F01_5%256;
                tr_regeneration5=Bit(ERM_F01_5,16);
                tr_level5=ERM_F01_4;
                tr_emergencybraking5=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==5)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date6=timestr;
                tr_testtype6=QSTR("加速度1");
                tr_levelcolor6=1;
                tr_ADSpeed6=DivNum(ERM_F01_1,100);
                tr_BrakeDistance6=ERM_F01_3;
                tr_BrakeInitalSpeed6=ERM_F01_5%256;
                tr_regeneration6=Bit(ERM_F01_5,16);
                tr_level6=ERM_F01_4;
                tr_emergencybraking6=CCU_HMI_222_15;
            }
             if (Bit(tr_testtype_record,2)==1)
            {
                tr_date6=timestr;
                tr_testtype6=QSTR("加速度2");tr_levelcolor6=1;
                tr_ADSpeed6=DivNum(ERM_F01_1,100);
                tr_BrakeDistance6=ERM_F01_3;
                tr_BrakeInitalSpeed6=ERM_F01_5%256;
                tr_regeneration6=Bit(ERM_F01_5,16);
                tr_level6=ERM_F01_4;
                tr_emergencybraking6=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date6=timestr;
                tr_testtype6=QSTR("减速度");
                tr_levelcolor6=2;
                tr_ADSpeed6=DivNum(ERM_F01_1,100);
                tr_BrakeDistance6=ERM_F01_3;
                tr_BrakeInitalSpeed6=ERM_F01_5%256;
                tr_regeneration6=Bit(ERM_F01_5,16);
                tr_level6=ERM_F01_4;
                tr_emergencybraking6=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==6)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date7=timestr;
                tr_testtype7=QSTR("加速度1");
                tr_levelcolor7=1;
                tr_ADSpeed7=DivNum(ERM_F01_1,100);
                tr_BrakeDistance7=ERM_F01_3;
                tr_BrakeInitalSpeed7=ERM_F01_5%256;
                tr_regeneration7=Bit(ERM_F01_5,16);
                tr_level7=ERM_F01_4;
                tr_emergencybraking7=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date7=timestr;
                tr_testtype7=QSTR("加速度2");
                tr_levelcolor7=1;
                tr_ADSpeed7=DivNum(ERM_F01_1,100);
                tr_BrakeDistance7=ERM_F01_3;
                tr_BrakeInitalSpeed7=ERM_F01_5%256;
                tr_regeneration7=Bit(ERM_F01_5,16);
                tr_level7=ERM_F01_4;
                tr_emergencybraking7=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date7=timestr;
                tr_testtype7=QSTR("减速度");
                tr_levelcolor7=2;
                tr_ADSpeed7=DivNum(ERM_F01_1,100);
                tr_BrakeDistance7=ERM_F01_3;
                tr_BrakeInitalSpeed7=ERM_F01_5%256;
                tr_regeneration7=Bit(ERM_F01_5,16);
                tr_level7=ERM_F01_4;
                tr_emergencybraking7=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==7)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date8=timestr;
                tr_testtype8=QSTR("加速度1");
                tr_levelcolor8=1;
                tr_ADSpeed8=DivNum(ERM_F01_1,100);
                tr_BrakeDistance8=ERM_F01_3;
                tr_BrakeInitalSpeed8=ERM_F01_5%256;
                tr_regeneration8=Bit(ERM_F01_5,16);
                tr_level8=ERM_F01_4;
                tr_emergencybraking8=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date8=timestr;
                tr_testtype8=QSTR("加速度2");
                tr_levelcolor8=1;
                tr_ADSpeed8=DivNum(ERM_F01_1,100);
                tr_BrakeDistance8=ERM_F01_3;
                tr_BrakeInitalSpeed8=ERM_F01_5%256;
                tr_regeneration8=Bit(ERM_F01_5,16);
                tr_level8=ERM_F01_4;
                tr_emergencybraking8=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date8=timestr;
                tr_testtype8=QSTR("减速度");
                tr_levelcolor8=2;
                tr_ADSpeed8=DivNum(ERM_F01_1,100);
                tr_BrakeDistance8=ERM_F01_3;
                tr_BrakeInitalSpeed8=ERM_F01_5%256;
                tr_regeneration8=Bit(ERM_F01_5,16);
                tr_level8=ERM_F01_4;
                tr_emergencybraking8=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==8)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date9=timestr;
                tr_testtype9=QSTR("加速度1");
                tr_levelcolor9=1;
                tr_ADSpeed9=DivNum(ERM_F01_1,100);
                tr_BrakeDistance9=ERM_F01_3;
                tr_BrakeInitalSpeed9=ERM_F01_5%256;
                tr_regeneration9=Bit(ERM_F01_5,16);
                tr_level9=ERM_F01_4;
                tr_emergencybraking9=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date9=timestr;
                tr_testtype9=QSTR("加速度2");
                tr_levelcolor9=1;
                tr_ADSpeed9=DivNum(ERM_F01_1,100);
                tr_BrakeDistance9=ERM_F01_3;
                tr_BrakeInitalSpeed9=ERM_F01_5%256;
                tr_regeneration9=Bit(ERM_F01_5,16);
                tr_level9=ERM_F01_4;
                tr_emergencybraking9=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date9=timestr;
                tr_testtype9=QSTR("减速度");
                tr_levelcolor9=2;
                tr_ADSpeed9=DivNum(ERM_F01_1,100);
                tr_BrakeDistance9=ERM_F01_3;
                tr_BrakeInitalSpeed9=ERM_F01_5%256;
                tr_regeneration9=Bit(ERM_F01_5,16);
                tr_level9=ERM_F01_4;
                tr_emergencybraking9=CCU_HMI_222_15;
            }
        }
        if (tr_testtimes%10==9)
        {
            if (Bit(tr_testtype_record,1)==1)
            {
                tr_date10=timestr;
                tr_testtype10=QSTR("加速度1");
                tr_levelcolor10=1;
                tr_ADSpeed10=DivNum(ERM_F01_1,100);
                tr_BrakeDistance10=ERM_F01_3;
                tr_BrakeInitalSpeed10=ERM_F01_5%256;
                tr_regeneration10=Bit(ERM_F01_5,16);
                tr_level10=ERM_F01_4;
                tr_emergencybraking10=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,2)==1)
            {
                tr_date10=timestr;
                tr_testtype10=QSTR("加速度2");
                tr_levelcolor10=1;
                tr_ADSpeed10=DivNum(ERM_F01_1,100);
                tr_BrakeDistance10=ERM_F01_3;
                tr_BrakeInitalSpeed10=ERM_F01_5%256;
                tr_regeneration10=Bit(ERM_F01_5,16);
                tr_level10=ERM_F01_4;
                tr_emergencybraking10=CCU_HMI_222_15;
            }
            if (Bit(tr_testtype_record,3)==1)
            {
                tr_date10=timestr;
                tr_testtype10=QSTR("减速度");
                tr_levelcolor10=2;
                tr_ADSpeed10=DivNum(ERM_F01_1,100);
                tr_BrakeDistance10=ERM_F01_3;
                tr_BrakeInitalSpeed10=ERM_F01_5%256;
                tr_regeneration10=Bit(ERM_F01_5,16);
                tr_level10=ERM_F01_4;
                tr_emergencybraking10=CCU_HMI_222_15;
            }
        }
//        //update
        int levelcolor[] =
        {
            tr_levelcolor1,
            tr_levelcolor2,
            tr_levelcolor3,
            tr_levelcolor4,
            tr_levelcolor5,
            tr_levelcolor6,
            tr_levelcolor7,
            tr_levelcolor8,
            tr_levelcolor9,
            tr_levelcolor10,
        };
        updateLevelLabelColor(ID_TRTP_LABEL_JW1+tr_testtimes%10,levelcolor[tr_testtimes%10]);

        int EmergencybrakingColor[] =
        {
            tr_emergencybraking1,
            tr_emergencybraking2,
            tr_emergencybraking3,
            tr_emergencybraking4,
            tr_emergencybraking5,
            tr_emergencybraking6,
            tr_emergencybraking7,
            tr_emergencybraking8,
            tr_emergencybraking9,
            tr_emergencybraking10,
        };
        updateEmergencybrakingLabelColor(ID_TRTP_LABEL_JJZD1+tr_testtimes%10,Bit(EmergencybrakingColor[tr_testtimes%10],13));

        //time str
        GetDlgItem(ID_TRTP_LABEL_TIME1 + tr_testtimes%10)->SetCtrlText(timestr);

        //test type
        QString testtypeArray[] =
        {
            tr_testtype1,
            tr_testtype2,
            tr_testtype3,
            tr_testtype4,
            tr_testtype5,
            tr_testtype6,
            tr_testtype7,
            tr_testtype8,
            tr_testtype9,
            tr_testtype10,
        };

        GetDlgItem(ID_TRTP_LABEL_TESTTYPE1 + tr_testtimes%10)->SetCtrlText(testtypeArray[tr_testtimes%10]);

        //AD speed
        tr_ADSpeed1=(float)(ERM_F01_1/100);
         char buff[15] = {'\0'};
        memset(buff, '\0', 15);
        sprintf(buff, "%.2f", tr_ADSpeed1);
        GetDlgItem(ID_TRTP_LABEL_ADSPEED1 + tr_testtimes%10)->SetCtrlText(buff);




        //brake distance
        GetDlgItem(ID_TRTP_LABEL_BRAKEDISTANCE1 + tr_testtimes%10)->SetCtrlText(QString::number(ERM_F01_3));

        //level
        GetDlgItem(ID_TRTP_LABEL_JW1 + tr_testtimes%10)->SetCtrlText(QString::number(ERM_F01_4/256));

        //reproduce
        GetDlgItem(ID_TRTP_LABEL_REPRODUCE1 + tr_testtimes%10)->SetCtrlText(QString::number(Bit(ERM_F01_5,16)));

        //emergencybraking
       // GetDlgItem(ID_TRTP_LABEL_JJZD1 + tr_testtimes%10)->SetCtrlText(QString::number(CCU_HMI_222_15));

        //brake_start_speed
        GetDlgItem(ID_TRTP_LABEL_BRAKESTARTSPEED1 + tr_testtimes%10)->SetCtrlText(QString::number(ERM_F01_5%256));

       tr_testtimes++;
    }

    if (Bit(CCU_HMI_222_15,13)==1)
    {
        Traction_brake_select=3; pull_brake_hide=0;
        BitSet( pull_brake_hide, 4, 1);
    }
    else
    {
        if (Bit(CCU_HMI_222_15,14)==1)
        {
            Traction_brake_select=0;
            pull_brake_hide=0;
            BitSet( pull_brake_hide, 3, 1);
        }
        if (Bit(CCU_HMI_222_15,15)==1)
        {
            Traction_brake_select=1;
            pull_brake_hide=0;
            BitSet( pull_brake_hide, 2, 1);
        }
        if (Bit(CCU_HMI_222_15,16)==1)
        {
            Traction_brake_select=2;
            pull_brake_hide=0;
            BitSet( pull_brake_hide, 1, 1);
        }
    }

    if (currency_data2>32767)
    {
       webflow = currency_data2-65536;
    }
    else
    {
       webflow = currency_data2;
    }

    if ((500<currency_data1) && (currency_data1<900))
    {
        voltage_color = 0;
    }
    if (900 < currency_data1)
    {
         voltage_color = 2;
    }
    if (currency_data1 < 500)
    {
         voltage_color=1;
    }
    if (currency_data1==0)
    {
         voltage_color = 3;
    }

//    //run_status_data10=67;
//    Brake_cylinder_pressure1=DivNum(run_status_data10,10);
//    Brake_cylinder_pressure2=DivNum(run_status_data11,10);
//    Brake_cylinder_pressure3=DivNum(run_status_data12,10);
//    Brake_cylinder_pressure4=DivNum(run_status_data13,10);
//    Brake_cylinder_pressure5=DivNum(run_status_data14,10);
//    Brake_cylinder_pressure6=DivNum(run_status_data15,10);
//    Brake_cylinder_pressure7=DivNum(run_status_data21,10);
//    Brake_cylinder_pressure8=DivNum(run_status_data20,10);
//    Brake_cylinder_pressure9=DivNum(run_status_data19,10);
//    Brake_cylinder_pressure10=DivNum(run_status_data18,10);
//    Brake_cylinder_pressure11=DivNum(run_status_data17,10);
//    Brake_cylinder_pressure12=DivNum(run_status_data16,10);
//
//    //run_status_data10=67;
//
//    char buff[10];
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP1,Bit( run_status_data92,16 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure1);
//    GetDlgItem(ID_TRTP_LABEL_BCP1)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP2,Bit( run_status_data92,15 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure2);
//    GetDlgItem(ID_TRTP_LABEL_BCP2)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP3,Bit( run_status_data92,14 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure3);
//    GetDlgItem(ID_TRTP_LABEL_BCP3)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP4,Bit( run_status_data92,13 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure4);
//    GetDlgItem(ID_TRTP_LABEL_BCP4)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP5,Bit( run_status_data92,12 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure5);
//    GetDlgItem(ID_TRTP_LABEL_BCP5)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP6,Bit( run_status_data92,11 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure6);
//    GetDlgItem(ID_TRTP_LABEL_BCP6)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP7,Bit( run_status_data92,5 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure7);
//    GetDlgItem(ID_TRTP_LABEL_BCP7)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP8,Bit( run_status_data92,8 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure8);
//    GetDlgItem(ID_TRTP_LABEL_BCP8)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP9,Bit( run_status_data92,7 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure9);
//    GetDlgItem(ID_TRTP_LABEL_BCP9)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP10,Bit( run_status_data92,8 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure10);
//    GetDlgItem(ID_TRTP_LABEL_BCP10)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP11,Bit( run_status_data92,9 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure11);
//    GetDlgItem(ID_TRTP_LABEL_BCP11)->SetCtrlText(buff);
//
//    updateBCPLabelColor(ID_TRTP_LABEL_BCP12,Bit( run_status_data92,10 ));
//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", Brake_cylinder_pressure12);
//    GetDlgItem(ID_TRTP_LABEL_BCP12)->SetCtrlText(buff);
//
//    if(train_status2_data1>127)
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN1))->SetCtrlText(QString::number(train_status2_data1-256));
//    else
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN1))->SetCtrlText(QString::number(train_status2_data1));
//
//    if(train_status2_data2>127)
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN2))->SetCtrlText(QString::number(train_status2_data2-256));
//    else
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN2))->SetCtrlText(QString::number(train_status2_data2));
//
//    if(train_status2_data3>127)
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN3))->SetCtrlText(QString::number(train_status2_data3-256));
//    else
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN3))->SetCtrlText(QString::number(train_status2_data3));
//
//    if(train_status2_data4>127)
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN4))->SetCtrlText(QString::number(train_status2_data4-256));
//    else
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN4))->SetCtrlText(QString::number(train_status2_data4));
//
//    if(train_status2_data5>127)
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN5))->SetCtrlText(QString::number(train_status2_data5-256));
//    else
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN5))->SetCtrlText(QString::number(train_status2_data5));
//
//    if(train_status2_data6>127)
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN6))->SetCtrlText(QString::number(train_status2_data6-256));
//    else
//      ((CLabel *)GetDlgItem(ID_TRTP_LABEL_KN6))->SetCtrlText(QString::number(train_status2_data6));
}

void CTryRunTestPage::updateBCPLabelColor(int nID,int nFlag)
{
    switch(nFlag)
    {
    case 0:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::black);
        break;
    case 1:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::red);
        break;
    default:
        break;
    }
}

void CTryRunTestPage::updateLevelLabelColor(int nID,int nFlag)
{
    switch(nFlag)
    {
    case 0:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::black);
        break;
    case 1:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::green);
        break;
    case 2:
        GetDlgItem(nID)->SetCtrlBKColor(QColor(255,102,51));
        break;
    default:
        break;
    }
}

void CTryRunTestPage::updateEmergencybrakingLabelColor(int nID,int nFlag)
{
    switch(nFlag)
    {
    case 0:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::black);
        break;
    case 1:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::red);
        break;
    case 2:
        GetDlgItem(nID)->SetCtrlBKColor(Qt::red);
        break;
    default:
        break;
    }
}

