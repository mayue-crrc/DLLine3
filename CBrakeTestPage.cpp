#include "CBrakeTestPage.h"
#include <qdebug.h>
ROMDATA g_PicRom_BrakeTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR(" 制动\n试验") )
    {"",                          D_FONT_BOLD(10),      QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PICBTP_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PICBTP_RIGHTARROW                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PICBTP_LEFTARROW                 },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR("制动试验"))
    D_COMMON_PAGE_BUTTON_BAR

    {"",                           D_FONT_BOLD(5),      QRect(178, 100, 600,  60),           Qt::black,                Qt::gray,                       CONTROL_TRAIN,          ID_PICBTP_TRAIN   },
    {"RIGHT",                      D_FONT_BOLD(6),      QRect(700, 128,  45,  20),           Qt::white,                Qt::white,                      CONTROL_ARROW,          ID_PICBTP_RIGHTARROW                   },
    {"LEFT",                       D_FONT_BOLD(6),      QRect(58, 128,  45,  20),           Qt::white,                Qt::white,                      CONTROL_ARROW,          ID_PICBTP_LEFTARROW                    },

    {QSTR("牵引*制动级位"),          D_FONT_BOLD(8),      QRect( 20,  45, 150,  25),           Qt::white,                Qt::black,                      CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 20,  65, 150,  30),           Qt::white,                Qt::black,                      CONTROL_LABEL,          ID_PICBTP_LABEL_TRACTIONMODEL          },

#endif


    {"",                           D_FONT_BOLD(6),      QRect(10, 180, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 210, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 240, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 270, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 300, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 330, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 360, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 390, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 420, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 450, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10, 480, 690,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(10, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(56, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(100, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(175, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(250, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(213, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(250, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(325, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(325, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(363, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(400, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(475, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(475, 180,   1, 300),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(513, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(550, 180,   1, 301),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(625, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(625, 180,   1, 301),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(663, 210,   1, 270),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(700, 180,   1, 301),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

    {QSTR("车  号"),                 D_FONT_BOLD(8),     QRect(10, 180, 90,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),                     D_FONT_BOLD(8),     QRect(101, 180,  150,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("2"),                     D_FONT_BOLD(8),     QRect(251, 180,  150,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("3"),                     D_FONT_BOLD(8),     QRect(401, 180,  150,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("4"),                     D_FONT_BOLD(8),     QRect(551, 180,  150,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("5"),                     D_FONT_BOLD(8),     QRect(400, 180,  75,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("6"),                     D_FONT_BOLD(8),     QRect(475, 180,  75,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("7"),                     D_FONT_BOLD(8),     QRect(550, 180,  75,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("8"),                     D_FONT_BOLD(8),     QRect(625, 180,  75,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("OFF"),                   D_FONT_BOLD(8),     QRect(11, 211,  44,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_BOFF_cylinder          },
    {QSTR("B1"),                   D_FONT_BOLD(8),     QRect(11, 241,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder            },
    {QSTR("B2"),                   D_FONT_BOLD(8),     QRect(11, 271,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder            },
    {QSTR("B3"),                   D_FONT_BOLD(8),     QRect(11, 301,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder            },
    {QSTR("B4"),                   D_FONT_BOLD(8),     QRect(11, 331,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder            },
    {QSTR("B5"),                   D_FONT_BOLD(8),     QRect(11, 361,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder            },
    {QSTR("B6"),                   D_FONT_BOLD(8),     QRect(11, 391,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder            },
    {QSTR("B7"),                   D_FONT_BOLD(8),     QRect(11, 421,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder            },
    {QSTR("紧急"),                   D_FONT_BOLD(8),     QRect(11, 451,  45,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_BURGENT_cylinder       },



    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 211,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_percentage },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(102, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(177, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(252, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(327, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(402, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(477, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(552, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(627, 211,  70,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p8         },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p15         },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p16        },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p13        },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p14        },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p11         },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p12        },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p10        },
//{QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 211,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B1_cylinder_p9        },

    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 241,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICBTP_LABEL_B2_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p12         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p11        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 241,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B2_cylinder_p9        },

    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 271,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 271,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B3_cylinder_p9        },


    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 301,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 301,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B4_cylinder_p9        },



    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 331,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 331,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B5_cylinder_p9        },



    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 361,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 361,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B6_cylinder_p9        },


    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 391,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 391,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B7_cylinder_p9        },


    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 421,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 421,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B8_cylinder_p9        },

    {QSTR(""),                     D_FONT_BOLD(8),      QRect(57, 451,  43,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_percentage          },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(104, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(141, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(179, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(216, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(254, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(291, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(329, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(366, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p8         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(404, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p15         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(441, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p16        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(479, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p13        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(516, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p14        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(554, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p11         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(591, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p12        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(629, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p10        },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(666, 451,  32,  29),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PICBTP_LABEL_B9_cylinder_p9        },



    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 101, 485, 550,  25),           Qt::white,                Qt::black,                       CONTROL_LABEL,         ID_PICBTP_LABEL_STARTTEXT              },
    {QSTR("开   始"),              D_FONT_BOLD(8),      QRect( 25, 510, 100,  38),           Qt::black,                Qt::gray,                        CONTROL_BUTTON,        ID_PICBTP_BUTTON_TESTSTART             },
    {QSTR("终   止"),              D_FONT_BOLD(8),      QRect(155, 510, 100,  38),           Qt::black,                Qt::gray,                        CONTROL_BUTTON,        ID_PICBTP_BUTTON_TESTSTOP              },
    {QSTR("[注意]试验前请先施加停放制动。"),D_FONT_BOLD(8), QRect(265, 510, 300,  38),          Qt::white,                Qt::black,                       CONTROL_LABEL,         ID_IGNORE      },

};
int g_BrakeTestRomLen = sizeof(g_PicRom_BrakeTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CBrakeTestPage,CPage)
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
        ON_BTNCLK(ID_PICBTP_BUTTON_TESTSTART,OnStartBtnClk)
        ON_BTNCLK(ID_PICBTP_BUTTON_TESTSTOP,OnStopBtnClk)

END_MESSAGE_MAP()

CBrakeTestPage::CBrakeTestPage()
{
}

void CBrakeTestPage::OnUpdatePage()
{
    updateTrain(ID_PICBTP_TRAIN);
    updateArrow(ID_PICBTP_LEFTARROW,ID_PICBTP_RIGHTARROW);
    UpdateBCU_Test_OFFPage();
    UpdateTractionBrak();
    UpdateBCU_test();

    updateErrorLine(ID_PICBTP_TRAIN);//3.5
}


void CBrakeTestPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PICBTP_BUTTON_TESTSTART))->m_bAutoUpState = false;
#ifdef PAGE_HEADER_OLD
    ((CLabel *) GetDlgItem(ID_PICBTP_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
#endif
    ((CLabel *) GetDlgItem(ID_PICBTP_LABEL_STARTTEXT))->SetAlignment(Qt::AlignLeft);

}

void CBrakeTestPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("帮   助"));
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

}

void CBrakeTestPage::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_BRAKETESTHELP)
    {
        OnStopBtnClk();
    }
}

#ifdef PAGE_BUTTON_BAR_NEW
void CBrakeTestPage::OnComBtn1Clk()
{

}

void CBrakeTestPage::OnComBtn2Clk()
{

}

void CBrakeTestPage::OnComBtn3Clk()
{

}

void CBrakeTestPage::OnComBtn4Clk()
{

}

void CBrakeTestPage::OnComBtn5Clk()
{

}

void CBrakeTestPage::OnComBtn6Clk()
{

}
void CBrakeTestPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_BRAKETESTHELP);
}
void CBrakeTestPage::OnComBtn8Clk()
{
    OnStopBtnClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CBrakeTestPage::OnComBtn1Clk()
{

}

void CBrakeTestPage::OnComBtn2Clk()
{

}

void CBrakeTestPage::OnComBtn3Clk()
{

}

void CBrakeTestPage::OnComBtn4Clk()
{

}

void CBrakeTestPage::OnComBtn5Clk()
{
    ChangePage(PAGE_INDEX_BRAKETESTHELP);
}

void CBrakeTestPage::OnComBtn6Clk()
{
    OnStopBtnClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}

#endif


void CBrakeTestPage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PICBTP_LABEL_TRACTIONMODEL);

#endif

}

void CBrakeTestPage::OnStartBtnClk()
{
    BitSet( HMI_send_data28, 2, 1 );
    BCU_test_counter = 0;
    m_times = 0;
    BCU_test_timer = 0;
}

void CBrakeTestPage::OnStopBtnClk()
{
    BitSet( HMI_send_data28, 2, 0 );
    BCU_test_counter = 0;
    m_times = 0;
    BCU_test_timer = 0;
    GetDlgItem(ID_PICBTP_LABEL_STARTTEXT)->SetCtrlText(QSTR("请将制动级位放到OFF,然后点[开始]按钮开始试验"));
    ((CButton *)GetDlgItem(ID_PICBTP_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
}

void CBrakeTestPage::UpdateBCU_test()
{
    if ( Bit( HMI_send_data28, 2 )==1)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {

            m_times++;
            BCU_test_timer++;
        }


    }

    if(BCU_test_counter==0){BCU_test_hint_string=QSTR("请将制动级位放到OFF,然后点[开始]按钮开始试验");}



    if(CCU_HMI_222_3/256==0)
    {
            if(BCU_test_timer<9)
            {
                Brake1_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake1_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake1_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake1_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake1_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake1_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake1_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake1_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake1_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake1_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake1_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake1_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake1_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake1_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake1_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake1_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake1_pwm=CCU_HMI_221_14%256;

                BCU_test_color1=run_status_data92;
                BCU_test_counter=1;
            }
            if(BCU_test_timer==8)
            {
                BCU_test_counter=3;
                BCU_test_hint_string=QSTR("请将制动级位放到1/7");
            }
            if(BCU_test_timer>8)
            {
                Brake2_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake2_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake2_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake2_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake2_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake2_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake2_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake2_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake2_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake2_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake2_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake2_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake2_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake2_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake2_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake2_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake2_pwm=CCU_HMI_221_14%256;

                BCU_test_color2=run_status_data92;
            }
    }

    if(CCU_HMI_222_3/256==1)
    {

        Brake3_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
        Brake3_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
        Brake3_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
        Brake3_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
        Brake3_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
        Brake3_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
        Brake3_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
        Brake3_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
        Brake3_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
        Brake3_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
        Brake3_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
        Brake3_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
        Brake3_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
        Brake3_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
        Brake3_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
        Brake3_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

        BCU_Brake3_pwm=CCU_HMI_221_14%256;

        BCU_test_color3=run_status_data92;
        BCU_test_counter=7;
        BCU_test_hint_string=QSTR("请将制动级位放到2/7");

    }
    if(CCU_HMI_222_3/256==2)
    {
           // if(BCU_test_data1==0)
            {
                BCU_test_counter=15;
                Brake4_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake4_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake4_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake4_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake4_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake4_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake4_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake4_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake4_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake4_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake4_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake4_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake4_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake4_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake4_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake4_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake4_pwm=CCU_HMI_221_14%256;

                BCU_test_color4=run_status_data92;
                BCU_test_hint_string=QSTR("请将制动级位放到3/7");
            }

    }
    if(CCU_HMI_222_3/256==3)
    {
           // if(BCU_test_data1==0)
            {
                    BCU_test_counter=31;
                    Brake5_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                    Brake5_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                    Brake5_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                    Brake5_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                    Brake5_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                    Brake5_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                    Brake5_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                    Brake5_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                    Brake5_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                    Brake5_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                    Brake5_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                    Brake5_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                    Brake5_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                    Brake5_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                    Brake5_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                    Brake5_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                    BCU_Brake5_pwm=CCU_HMI_221_14%256;
                    BCU_test_hint_string=QSTR("请将制动级位放到4/7");

                    BCU_test_color5=run_status_data92;
            }

    }
    if(CCU_HMI_222_3/256==4)
    {
            //if(BCU_test_data1==0)
            {
                BCU_test_counter=63;
                Brake6_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake6_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake6_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake6_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake6_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake6_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake6_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake6_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake6_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake6_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake6_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake6_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake6_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake6_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake6_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake6_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake6_pwm=CCU_HMI_221_14%256;

                BCU_test_color6=run_status_data92;
                BCU_test_hint_string=QSTR("请将制动级位放到5/7");
            }

    }
    if(CCU_HMI_222_3/256==5)
    {

          //  if(BCU_test_data1==0)
            {
                BCU_test_counter=127;
                Brake7_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake7_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake7_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake7_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake7_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake7_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake7_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake7_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake7_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake7_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake7_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake7_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake7_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake7_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake7_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake7_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake7_pwm=CCU_HMI_221_14%256;

                BCU_test_hint_string=QSTR("请将制动级位放到6/7");
                BCU_test_color7=run_status_data92;
            }

    }
    if(CCU_HMI_222_3/256==6)
    {
          //  if(BCU_test_data1==0)
            {
                BCU_test_counter=255;
                Brake8_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake8_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake8_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake8_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake8_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake8_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake8_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake8_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake8_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake8_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake8_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake8_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake8_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake8_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake8_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake8_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake8_pwm=CCU_HMI_221_14%256;

                BCU_test_hint_string=QSTR("请将制动级位放到7/7");
                BCU_test_color8=run_status_data92;
            }

    }
    if(CCU_HMI_222_3/256==7)
    {
           // if(BCU_test_data1==0)
            {
                BCU_test_counter=511;
                Brake9_cylinder_pressure1=DivNum(BCU_TC1_413_423_1%256,10);
                Brake9_cylinder_pressure2=DivNum(BCU_TC1_413_423_1/256,10);
                Brake9_cylinder_pressure3=DivNum(BCU_TC1_413_423_2%256,10);
                Brake9_cylinder_pressure4=DivNum(BCU_TC1_413_423_2/256,10);
                Brake9_cylinder_pressure5=DivNum(BCU_TC1_413_423_3%256,10);
                Brake9_cylinder_pressure6=DivNum(BCU_TC1_413_423_3/256,10);
                Brake9_cylinder_pressure7=DivNum(BCU_TC1_413_423_4%256,10);
                Brake9_cylinder_pressure8=DivNum(BCU_TC1_413_423_4/256,10);
                Brake9_cylinder_pressure9=DivNum(BCU_TC2_433_443_1%256,10);
                Brake9_cylinder_pressure10=DivNum(BCU_TC2_433_443_1/256,10);
                Brake9_cylinder_pressure11=DivNum(BCU_TC2_433_443_2%256,10);
                Brake9_cylinder_pressure12=DivNum(BCU_TC2_433_443_2/256,10);
                Brake9_cylinder_pressure13=DivNum(BCU_TC2_433_443_3%256,10);
                Brake9_cylinder_pressure14=DivNum(BCU_TC2_433_443_3/256,10);
                Brake9_cylinder_pressure15=DivNum(BCU_TC2_433_443_4%256,10);
                Brake9_cylinder_pressure16=DivNum(BCU_TC2_433_443_4/256,10);

                BCU_Brake9_pwm=CCU_HMI_221_14%256;
                BCU_test_hint_string=QSTR("请将制动级位放到 紧急");
                BCU_test_color9=run_status_data92;
            }

    }
    if(CCU_HMI_222_3/256==8)
    {
        BCU_test_counter=1023;
    }
    //update tip
    SetStartLabelString( ID_PICBTP_LABEL_STARTTEXT,BCU_test_hint_string );
    //line 1 - 1/7
    updateLine1();
    updateLine2();
    updateLine3();
    updateLine4();
    updateLine5();
    updateLine6();
    updateLine7();
    updateLine8();
    updateLineState();

    return;
}


void CBrakeTestPage::UpdateBCU_Test_OFFPage()
{
    int Data_label_color = 0;

  //  ((CLabel *)GetDlgItem(ID_PICBTP_LABEL_B1_percentage))->SetCtrlText(QSTR("10%"));

    Data_label_color = Bit(BCU_TC1_414_424_5,8);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p1,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p1,Brake1_cylinder_pressure1 );

    Data_label_color = Bit(BCU_TC1_414_424_5,7);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p2,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p2,Brake1_cylinder_pressure2 );

    Data_label_color = Bit(BCU_TC1_414_424_5,6);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p3,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p3,Brake1_cylinder_pressure3 );

    Data_label_color = Bit(BCU_TC1_414_424_5,5);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p4,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p4,Brake1_cylinder_pressure4 );

    Data_label_color = Bit(BCU_TC1_414_424_5,4);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p5,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p5,Brake1_cylinder_pressure5 );

    Data_label_color = Bit(BCU_TC1_414_424_5,3);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p6,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p6,Brake1_cylinder_pressure6 );

    Data_label_color = Bit(BCU_TC1_414_424_5,2);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p7,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p7,Brake1_cylinder_pressure7 );

    Data_label_color = Bit(BCU_TC1_414_424_5,1);
    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p8,Data_label_color);
    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p8,Brake1_cylinder_pressure8 );

    Data_label_color = Bit(BCU_TC2_434_444_5,7);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p9,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p9,Brake1_cylinder_pressure9 );

    Data_label_color = Bit(BCU_TC2_434_444_5,8);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p10,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p10,Brake1_cylinder_pressure10 );

    Data_label_color = Bit(BCU_TC2_434_444_5,5);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p11,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p11,Brake1_cylinder_pressure11 );

    Data_label_color = Bit(BCU_TC2_434_444_5,6);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p12,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p12,Brake1_cylinder_pressure12 );

    Data_label_color = Bit(BCU_TC2_434_444_5,3);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p13,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p13,Brake1_cylinder_pressure13 );

    Data_label_color = Bit(BCU_TC2_434_444_5,4);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p14,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p14,Brake1_cylinder_pressure14 );

    Data_label_color = Bit(BCU_TC2_434_444_5,1);
//    SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p15,Data_label_color);
//    SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p15,Brake1_cylinder_pressure15 );

    Data_label_color = Bit(BCU_TC2_434_444_5,2);
    //SetDataLabelColor(ID_PICBTP_LABEL_B1_cylinder_p16,Data_label_color);
    //SetDataLabelString( ID_PICBTP_LABEL_B1_cylinder_p16,Brake1_cylinder_pressure16 );
}


void CBrakeTestPage::SetStartLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);
}

void CBrakeTestPage::SetDataLabelString(int id, qreal DataVal)
{
    char buff[10] = {'\0'};
    sprintf(buff, "%.1f", DataVal);
    ((CLabel *)GetDlgItem(id))->SetCtrlText(buff);

    return;
}

void CBrakeTestPage::SetDataLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CBrakeTestPage::SetCarNoLabelColor(int id, int colorVal)
{
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    return;
}

void CBrakeTestPage::updateMulLabel(int nStartLabelID, qreal realList[],int nState)
{
    int nColor[] =
    {
        Bit(BCU_TC1_414_424_5,8),
        Bit(BCU_TC1_414_424_5,7),
        Bit(BCU_TC1_414_424_5,6),
        Bit(BCU_TC1_414_424_5,5),
        Bit(BCU_TC1_414_424_5,4),
        Bit(BCU_TC1_414_424_5,3),
        Bit(BCU_TC1_414_424_5,2),
        Bit(BCU_TC1_414_424_5,1),

        Bit(BCU_TC2_434_444_5,2),
        Bit(BCU_TC2_434_444_5,1),
        Bit(BCU_TC2_434_444_5,4),
        Bit(BCU_TC2_434_444_5,3),
        Bit(BCU_TC2_434_444_5,6),
        Bit(BCU_TC2_434_444_5,5),
        Bit(BCU_TC2_434_444_5,7),
        Bit(BCU_TC2_434_444_5,8),

    };

    for(int i = 0; i < 16; i++)
    {
        if(nState)
        {
            ((CLabel*)GetDlgItem(nStartLabelID+i))->SetTxtColor(Qt::white);
            ((CLabel*)GetDlgItem(nStartLabelID+i))->SetCtrlBKColor(Qt::red);
            SetDataLabelColor(nStartLabelID+i,nColor[i]);
            SetDataLabelString(nStartLabelID+i,realList[i] );
        }
        else
        {
            ((CLabel*)GetDlgItem(nStartLabelID+i))->SetTxtColor(Qt::black);
            ((CLabel*)GetDlgItem(nStartLabelID+i))->SetCtrlBKColor(Qt::black);
        }
    }
}

void CBrakeTestPage::updateLine1()
{
    qreal realList[] =
    {
        Brake2_cylinder_pressure1,
        Brake2_cylinder_pressure2,
        Brake2_cylinder_pressure3,
        Brake2_cylinder_pressure4,
        Brake2_cylinder_pressure5,
        Brake2_cylinder_pressure6,
        Brake2_cylinder_pressure7,
        Brake2_cylinder_pressure8,
        Brake2_cylinder_pressure9,
        Brake2_cylinder_pressure10,
        Brake2_cylinder_pressure11,
        Brake2_cylinder_pressure12,
        Brake2_cylinder_pressure13,
        Brake2_cylinder_pressure14,
        Brake2_cylinder_pressure15,
        Brake2_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B2_cylinder_p1, realList, Bit(BCU_test_counter,2));
}

void CBrakeTestPage::updateLine2()
{
    qreal realList[] =
    {
        Brake3_cylinder_pressure1,
        Brake3_cylinder_pressure2,
        Brake3_cylinder_pressure3,
        Brake3_cylinder_pressure4,
        Brake3_cylinder_pressure5,
        Brake3_cylinder_pressure6,
        Brake3_cylinder_pressure7,
        Brake3_cylinder_pressure8,
        Brake3_cylinder_pressure9,
        Brake3_cylinder_pressure10,
        Brake3_cylinder_pressure11,
        Brake3_cylinder_pressure12,
        Brake3_cylinder_pressure13,
        Brake3_cylinder_pressure14,
        Brake3_cylinder_pressure15,
        Brake3_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B3_cylinder_p1, realList, Bit(BCU_test_counter,3));
}

void CBrakeTestPage::updateLine3()
{
    qreal realList[] =
    {
        Brake4_cylinder_pressure1,
        Brake4_cylinder_pressure2,
        Brake4_cylinder_pressure3,
        Brake4_cylinder_pressure4,
        Brake4_cylinder_pressure5,
        Brake4_cylinder_pressure6,
        Brake4_cylinder_pressure7,
        Brake4_cylinder_pressure8,
        Brake4_cylinder_pressure9,
        Brake4_cylinder_pressure10,
        Brake4_cylinder_pressure11,
        Brake4_cylinder_pressure12,
        Brake4_cylinder_pressure13,
        Brake4_cylinder_pressure14,
        Brake4_cylinder_pressure15,
        Brake4_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B4_cylinder_p1, realList, Bit(BCU_test_counter,4));
}

void CBrakeTestPage::updateLine4()
{
    qreal realList[] =
    {
        Brake5_cylinder_pressure1,
        Brake5_cylinder_pressure2,
        Brake5_cylinder_pressure3,
        Brake5_cylinder_pressure4,
        Brake5_cylinder_pressure5,
        Brake5_cylinder_pressure6,
        Brake5_cylinder_pressure7,
        Brake5_cylinder_pressure8,
        Brake5_cylinder_pressure9,
        Brake5_cylinder_pressure10,
        Brake5_cylinder_pressure11,
        Brake5_cylinder_pressure12,
        Brake5_cylinder_pressure13,
        Brake5_cylinder_pressure14,
        Brake5_cylinder_pressure15,
        Brake5_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B5_cylinder_p1, realList, Bit(BCU_test_counter,5));
}

void CBrakeTestPage::updateLine5()
{
    qreal realList[] =
    {
        Brake6_cylinder_pressure1,
        Brake6_cylinder_pressure2,
        Brake6_cylinder_pressure3,
        Brake6_cylinder_pressure4,
        Brake6_cylinder_pressure5,
        Brake6_cylinder_pressure6,
        Brake6_cylinder_pressure7,
        Brake6_cylinder_pressure8,
        Brake6_cylinder_pressure9,
        Brake6_cylinder_pressure10,
        Brake6_cylinder_pressure11,
        Brake6_cylinder_pressure12,
        Brake6_cylinder_pressure13,
        Brake6_cylinder_pressure14,
        Brake6_cylinder_pressure15,
        Brake6_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B6_cylinder_p1, realList, Bit(BCU_test_counter,6));
}

void CBrakeTestPage::updateLine6()
{
    qreal realList[] =
    {
        Brake7_cylinder_pressure1,
        Brake7_cylinder_pressure2,
        Brake7_cylinder_pressure3,
        Brake7_cylinder_pressure4,
        Brake7_cylinder_pressure5,
        Brake7_cylinder_pressure6,
        Brake7_cylinder_pressure7,
        Brake7_cylinder_pressure8,
        Brake7_cylinder_pressure9,
        Brake7_cylinder_pressure10,
        Brake7_cylinder_pressure11,
        Brake7_cylinder_pressure12,
        Brake7_cylinder_pressure13,
        Brake7_cylinder_pressure14,
        Brake7_cylinder_pressure15,
        Brake7_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B7_cylinder_p1, realList, Bit(BCU_test_counter,7));
}

void CBrakeTestPage::updateLine7()
{
    qreal realList[] =
    {
        Brake8_cylinder_pressure1,
        Brake8_cylinder_pressure2,
        Brake8_cylinder_pressure3,
        Brake8_cylinder_pressure4,
        Brake8_cylinder_pressure5,
        Brake8_cylinder_pressure6,
        Brake8_cylinder_pressure7,
        Brake8_cylinder_pressure8,
        Brake8_cylinder_pressure9,
        Brake8_cylinder_pressure10,
        Brake8_cylinder_pressure11,
        Brake8_cylinder_pressure12,
        Brake8_cylinder_pressure13,
        Brake8_cylinder_pressure14,
        Brake8_cylinder_pressure15,
        Brake8_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B8_cylinder_p1, realList, Bit(BCU_test_counter,8));
}

void CBrakeTestPage::updateLine8()
{
    qreal realList[] =
    {
        Brake9_cylinder_pressure1,
        Brake9_cylinder_pressure2,
        Brake9_cylinder_pressure3,
        Brake9_cylinder_pressure4,
        Brake9_cylinder_pressure5,
        Brake9_cylinder_pressure6,
        Brake9_cylinder_pressure7,
        Brake9_cylinder_pressure8,
        Brake9_cylinder_pressure9,
        Brake9_cylinder_pressure10,
        Brake9_cylinder_pressure11,
        Brake9_cylinder_pressure12,
        Brake9_cylinder_pressure13,
        Brake9_cylinder_pressure14,
        Brake9_cylinder_pressure15,
        Brake9_cylinder_pressure16
    };
    updateMulLabel(ID_PICBTP_LABEL_B9_cylinder_p1, realList, Bit(BCU_test_counter,9));
}

void CBrakeTestPage::updateLineState()
{
    int nIDArray1[]=
    {
        ID_PICBTP_LABEL_BOFF_cylinder,
        ID_PICBTP_LABEL_B1_cylinder,
        ID_PICBTP_LABEL_B2_cylinder,
        ID_PICBTP_LABEL_B3_cylinder,
        ID_PICBTP_LABEL_B4_cylinder,
        ID_PICBTP_LABEL_B5_cylinder,
        ID_PICBTP_LABEL_B6_cylinder,
        ID_PICBTP_LABEL_B7_cylinder,
        ID_PICBTP_LABEL_BURGENT_cylinder
    };

    int nIDArray2[]=
    {
       ID_PICBTP_LABEL_B1_percentage,
      ID_PICBTP_LABEL_B2_percentage,
      ID_PICBTP_LABEL_B3_percentage,
      ID_PICBTP_LABEL_B4_percentage,
      ID_PICBTP_LABEL_B5_percentage,
      ID_PICBTP_LABEL_B6_percentage,
      ID_PICBTP_LABEL_B7_percentage,
      ID_PICBTP_LABEL_B8_percentage,
      ID_PICBTP_LABEL_B9_percentage,
    };

    QString str[]=
    {
        QString::number(BCU_Brake1_pwm).append("%"),
        QString::number(BCU_Brake2_pwm).append("%"),
        QString::number(BCU_Brake3_pwm).append("%"),
        QString::number(BCU_Brake4_pwm).append("%"),
        QString::number(BCU_Brake5_pwm).append("%"),
        QString::number(BCU_Brake6_pwm).append("%"),
        QString::number(BCU_Brake7_pwm).append("%"),
        QString::number(BCU_Brake8_pwm).append("%"),
        QString::number(BCU_Brake9_pwm).append("%"),
    };


    for(int i = 0; i < 9; i++)
    {
        if(Bit(BCU_test_counter,1+i))
        {
            ((CLabel*)GetDlgItem(nIDArray1[i]))->SetCtrlBKColor(Qt::blue);
            ((CLabel*)GetDlgItem(nIDArray2[i]))->SetCtrlText(str[i]);
        }
        else
        {
            ((CLabel*)GetDlgItem(nIDArray1[i]))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(nIDArray2[i]))->SetCtrlText("");
        }
    }
}
