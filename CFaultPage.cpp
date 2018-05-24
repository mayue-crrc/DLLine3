#include "CFaultPage.h"
#include "CTractionSystemFaultPage.h"
#include "qdebug.h"

ROMDATA g_PicRom_Fault[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW(QSTR("故障") )
    {"",                          D_FONT_BOLD(5),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_FAULT_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_FAULT_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_FAULT_ARROW_LEFT                 },

#endif
#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR("故障"))
    D_COMMON_PAGE_BUTTON_BAR

    {QSTR("通信中断"),      D_FONT_BOLD(8),    QRect( 20,  6,162, 30),             Qt::red,                 Qt::white,                CONTROL_LABEL,           ID_FAULT_COMMINTERRUPT },

    {"",                  D_FONT_BOLD(5),    QRect(178,110,600, 60),             Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_FAULT_TRAIN         },
    {"RIGHT",             D_FONT_BOLD(6),    QRect(700,140, 45, 20),             Qt::white,                Qt::white,                CONTROL_ARROW,          ID_FAULT_ARROW_RIGHT   },
    {"LEFT",              D_FONT_BOLD(6),    QRect(58,140, 45, 20),              Qt::white,                Qt::white,                CONTROL_ARROW,          ID_FAULT_ARROW_LEFT    },

    {QSTR("网压"),         D_FONT_BOLD(8),    QRect(40, 45, 120, 20),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
    {QSTR(""),            D_FONT_BOLD(8),    QRect(40, 66, 120, 30),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_LABEL_V       },

    {QSTR("网流"),         D_FONT_BOLD(8),    QRect(180, 45, 120, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
    {QSTR(""),            D_FONT_BOLD(8),    QRect(180,66, 120, 30),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_LABEL_A       },

    {QSTR("牵引*制动级位"), D_FONT_BOLD(8),    QRect(470, 45, 150, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),            D_FONT_BOLD(8),    QRect(470, 66, 150, 30),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_LABEL_TRACTIONMODEL },

    {QSTR("速度"),         D_FONT_BOLD(8),    QRect(630, 45, 80, 20),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
    {QSTR(""),            D_FONT_BOLD(8),    QRect(630, 66, 80, 30),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_LABEL_SPEED   },

    {"FaultRed.PNG",      D_DEFAULT_FONT,    QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_FAULT_ICON_WARNNING },

#endif


    {"",                  D_FONT(6),         QRect(10,  180, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  210, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  240, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  270, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  300, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  330, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  360, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  390, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  420, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  450, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(10,  480, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(10,  510, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(10,  540, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                  D_FONT(6),         QRect(10,   180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(100,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(175,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(250,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(325,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(400,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(475,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(550,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(625,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT(6),         QRect(700,  180, 1,  300),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {"",                  D_FONT(6),         QRect(185,  390, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(275,  390, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(365,  390, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(455,  390, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(545,  390, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT(6),         QRect(635,  390, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QSTR("网络故障"),    D_FONT(6),          QRect( 12, 182, 88, 28),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_CAB                      },
    {QSTR(""),            D_FONT_BOLD(6),     QRect(103, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS1                   },
    {QSTR(""),          D_FONT_BOLD(6),     QRect(178, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS2         },
    {QSTR(""),          D_FONT_BOLD(6),     QRect(253, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS3         },
    {QSTR(""),          D_FONT_BOLD(6),     QRect(328, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS4         },
    {QSTR(""),          D_FONT_BOLD(6),     QRect(403, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS5         },
    {QSTR(""),          D_FONT_BOLD(6),     QRect(478, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS6         },
    {QSTR(""),          D_FONT_BOLD(6),     QRect(553, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS7         },
    {QSTR(""),            D_FONT_BOLD(6),     QRect(628, 185, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCMS8                  },

    {QSTR("ATC故障"),      D_FONT(6),          QRect( 12, 212, 88, 28),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_ATC                     },
    {QSTR("--"),            D_FONT_BOLD(6),     QRect(103, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE                  },
    {QSTR("--"),          D_FONT_BOLD(6),     QRect(178, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),          D_FONT_BOLD(6),     QRect(253, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),          D_FONT_BOLD(6),     QRect(328, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),          D_FONT_BOLD(6),     QRect(403, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),          D_FONT_BOLD(6),     QRect(478, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),          D_FONT_BOLD(6),     QRect(553, 212, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),            D_FONT_BOLD(6),     QRect(628, 215, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_ATC6                  },

    {QSTR("牵引故障"),  D_FONT(6),          QRect( 12, 242, 88, 28),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_TCU                     },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(103, 242, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(178, 245, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCU2                  },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(253, 245, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCU3                  },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(328, 245, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCU4                  },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(403, 245, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCU5                  },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(478, 245, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCU6                  },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(553, 245, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_TCU7                  },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(628, 242, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("辅助故障"),  D_FONT(6),          QRect( 12, 272, 88, 28),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_FAULT_BTN_ACU                     },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(103, 275, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_ACU1                   },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(178, 272, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(253, 272, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(328, 272, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(403, 272, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(478, 272, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),         D_FONT_BOLD(6),      QRect(553, 272, 70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(628, 275, 70, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_ACU6                  },

    {QSTR("制动故障"),  D_FONT(6),          QRect( 12, 302, 88, 28),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_FAULT_BTN_BCU                     },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(103, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU1                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(178, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU2                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(253, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU3                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(328, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU4                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(403, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU5                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(478, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU6                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(553, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU7                  },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(628, 305, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_BCU8                  },

    {QSTR("空调故障"),  D_FONT(6),         QRect( 12, 332, 88, 28),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_FAULT_BTN_HVAC                               },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(103, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC1                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(178, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC2                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(253, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC3                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(328, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC4                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(403, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC5                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(478, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC6                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(553, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC7                 },
    {QSTR(""),            D_FONT_BOLD(6),    QRect(628, 335, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_HVAC8                 },

    {QSTR("PIS故障"),     D_FONT(6),          QRect( 12, 362, 88, 28),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_PIS                     },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(103, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS1                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(178, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS2                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(253, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS3                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(328, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS4                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(403, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS5                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(478, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS6                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(553, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS7                  },
    {QSTR(""),           D_FONT_BOLD(6),     QRect(628, 365, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_PIS8                  },

//    {QSTR("乘客报警故障"), D_FONT(6),           QRect(31, 391, 108, 28),             Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_RESERVE                 },

//    {QSTR("网络故障"),    D_FONT(6),           QRect(31, 421, 108, 28),             Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_TCMS                    },
//    {QSTR(""),           D_FONT_BOLD(6),     QRect(150, 425, 70, 20),            Qt::white,                Qt::red,                CONTROL_LABEL,           ID_FAULT_LABEL_NET1                  },
//    {QSTR(""),           D_FONT_BOLD(6),     QRect(240, 425, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_NET2                  },
//    {QSTR(""),           D_FONT_BOLD(6),     QRect(330, 425, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_NET3                  },
//    {QSTR(""),           D_FONT_BOLD(6),     QRect(420, 425, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_NET4                  },
//    {QSTR(""),           D_FONT_BOLD(6),     QRect(510, 425, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_NET5                  },
//    {QSTR(""),           D_FONT_BOLD(6),     QRect(600, 425, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_NET6                  },
//


    {QSTR("门故障"),     D_FONT(6),           QRect( 12, 392, 88, 58),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_DOOR                     },
    {QSTR("9"),          D_FONT_BOLD(6),      QRect(103, 394, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR1INFO9         },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(119, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR1INFO1         },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(133, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR1INFO2         },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(147, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR1INFO3         },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(161, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR1INFO4         },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(178, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR2INFO1         },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(196, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR2INFO2         },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(214, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR2INFO3         },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(232, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR2INFO4         },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(253, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR3INFO1         },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(271, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR3INFO2          },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(289, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR3INFO3          },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(307, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR3INFO4          },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(328, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR4INFO1        },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(346, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR4INFO2        },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(364, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR4INFO3        },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(382, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR4INFO4        },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(403, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR5INFO1         },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(421, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR5INFO2         },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(439, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR5INFO3         },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(457, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR5INFO4         },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(478, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR6INFO1         },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(496, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR6INFO2         },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(514, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR6INFO3         },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(532, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR6INFO4         },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(553, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR7INFO1         },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(571, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR7INFO2         },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(589, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR7INFO3         },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(607, 394, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR1CAR7INFO4         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(628, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR8INFO1        },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(642, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR8INFO2        },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(656, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR8INFO3        },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(670, 394, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR8INFO4        },
    {QSTR("10"),         D_FONT_BOLD(6),      QRect(685, 394,  14, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR1CAR8INF10      },

    //  {QSTR("2侧门故障"),   D_FONT(6),           QRect( 41, 481, 98, 28),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_DOOR2         },
    {QSTR("10"),          D_FONT_BOLD(6),      QRect(103, 424, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR1INF10         },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(119, 424, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR1INFO1         },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(133, 424, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR1INFO2         },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(147, 424, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR1INFO3         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(161, 424, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR1INFO4         },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(178, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR2INFO1         },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(196, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR2INFO2         },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(214, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR2INFO3         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(232, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR2INFO4         },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(253, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR3INFO1         },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(271, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR3INFO2         },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(289, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR3INFO3         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(307, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR3INFO4         },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(328, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR4INFO1        },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(346, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR4INFO2        },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(364, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR4INFO3        },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(382, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR4INFO4        },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(403, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR5INFO1         },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(421, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR5INFO2         },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(439, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR5INFO3         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(457, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR5INFO4         },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(478, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR6INFO1         },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(496, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR6INFO2         },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(514, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR6INFO3         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(532, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR6INFO4         },
    {QSTR("2"),          D_FONT_BOLD(6),      QRect(553, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR7INFO1         },
    {QSTR("4"),          D_FONT_BOLD(6),      QRect(571, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR7INFO2         },
    {QSTR("6"),          D_FONT_BOLD(6),      QRect(589, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR7INFO3         },
    {QSTR("8"),          D_FONT_BOLD(6),      QRect(607, 424, 17, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_DOOR2CAR7INFO4         },
    {QSTR("7"),          D_FONT_BOLD(6),      QRect(628, 424, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR8INFO1        },
    {QSTR("5"),          D_FONT_BOLD(6),      QRect(642, 424, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR8INFO2        },
    {QSTR("3"),          D_FONT_BOLD(6),      QRect(656, 424, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR8INFO3        },
    {QSTR("1"),          D_FONT_BOLD(6),      QRect(670, 424, 13, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR8INFO4        },
    {QSTR("9"),          D_FONT_BOLD(6),      QRect(685, 424, 14, 23),            Qt::white,                Qt::black,                CONTROL_LABEL,             ID_FAULT_LABEL_DOOR2CAR8INFO9        },


    {QSTR("FAS故障"),     D_FONT(6),           QRect( 12, 452, 88, 28),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_FAULT_BTN_TL      },
    {QSTR(""),          D_FONT_BOLD(6),      QRect(103, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS1   },
    {QSTR(""),        D_FONT_BOLD(6),      QRect(178, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS2            },
    {QSTR(""),        D_FONT_BOLD(6),      QRect(253, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS3            },
    {QSTR(""),        D_FONT_BOLD(6),      QRect(328, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS4            },
    {QSTR(""),        D_FONT_BOLD(6),      QRect(403, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS5            },
    {QSTR(""),        D_FONT_BOLD(6),      QRect(478, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS6            },
    {QSTR(""),        D_FONT_BOLD(6),      QRect(553, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS7            },
    {QSTR(""),          D_FONT_BOLD(6),      QRect(628, 455, 70, 20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_FAULT_LABEL_FAS8           },

    {QSTR("全部故障"),     D_FONT_BOLD(6),      QRect( 697, 500, 80, 38),         Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_FAULT_BUTTON_LEVEL3FAULT   },

};
int g_FaultRomLen = sizeof(g_PicRom_Fault)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CFaultPage,CPage)
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
        ON_BTNCLK(ID_FAULT_BTN_CAB, OnBtnCabClk)
        ON_BTNCLK(ID_FAULT_BTN_ATC, OnBtnAtcClk)
        ON_BTNCLK(ID_FAULT_BTN_TCU, OnBtnTcuClk)
        ON_BTNCLK(ID_FAULT_BTN_ACU, OnBtnAcuClk)
        ON_BTNCLK(ID_FAULT_BTN_BCU, OnBtnBcuClk)
        ON_BTNCLK(ID_FAULT_BTN_HVAC, OnBtnHvacClk)
        ON_BTNCLK(ID_FAULT_BTN_PIS, OnBtnPisClk)
        ON_BTNCLK(ID_FAULT_BTN_TCMS, OnBtnTcmsClk)
        ON_BTNCLK(ID_FAULT_BTN_RESERVE, OnBtnReserveClk)
        ON_BTNCLK(ID_FAULT_BTN_DOOR, OnBtnDoorClk)
        ON_BTNCLK(ID_FAULT_BTN_TL, OnBtnTlClk)
        ON_BTNCLK(ID_FAULT_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_FAULT_BUTTON_LEVEL3FAULT, OnLevel3FaultBtnCLK)
END_MESSAGE_MAP()

CFaultPage::CFaultPage()
{
}

void CFaultPage::OnUpdatePage()
{
   // UpdateNetFaultsStatus();
    UpdateDeviceFaultsStatus();
    UpdateDoorFaultsStatus();

    updateTrain(ID_FAULT_TRAIN);
    updateArrow(ID_FAULT_ARROW_LEFT,ID_FAULT_ARROW_RIGHT);

    updateErrorLine(ID_FAULT_TRAIN);//3.5


#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_FAULT_COMMINTERRUPT);

    updateFault(ID_FAULT_ICON_WARNNING);

#endif

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
}

void CFaultPage::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif


    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR1INFO9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR1INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR1INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR1INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR1INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR2INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR2INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR2INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR2INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR3INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR3INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR3INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR3INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR4INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR4INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR4INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR4INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR5INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR5INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR5INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR5INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR6INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR6INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR6INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR6INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR7INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR7INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR7INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR7INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR8INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR8INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR8INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR8INFO4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR1CAR8INF10))->SetBorderColor(Qt::white);

    //
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR1INF10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR1INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR1INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR1INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR1INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR2INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR2INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR2INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR2INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR3INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR3INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR3INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR3INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR4INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR4INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR4INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR4INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR5INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR5INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR5INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR5INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR6INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR6INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR6INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR6INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR7INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR7INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR7INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR7INFO4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR8INFO1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR8INFO2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR8INFO3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR8INFO4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_FAULT_LABEL_DOOR2CAR8INFO9))->SetBorderColor(Qt::white);

    if (this->TestControlExists(IDLB_COM_voltage))
    {
        this->UpdateVoltage(IDLB_COM_voltage);


    }

    if (this->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        this->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);


    }
}

void CFaultPage::OnShowPage()
{


#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("维修菜单"));
#endif
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CFaultPage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CFaultPage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CFaultPage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CFaultPage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CFaultPage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void CFaultPage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }
    void CFaultPage::OnComBtn7Clk()
    {
         ChangePage(PAGE_INDEX_FAULT);
    }

    void CFaultPage::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_FAULTPAGEHELP);
    }
#else
    void CFaultPage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CFaultPage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CFaultPage::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CFaultPage::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CFaultPage::OnComBtn5Clk()
    {
    }

    void CFaultPage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_FAULTPAGEHELP);
    }
#endif



void CFaultPage::UpdateAValue()
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

    SetAValue(ID_LABEL_A, webflow);

#endif

}

void CFaultPage::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD

    UpdateVoltage(ID_LABEL_V);

#endif

}

void CFaultPage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_LABEL_TRACTIONMODEL);

#endif

}

void CFaultPage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}


void CFaultPage::UpdateDeviceFaultsStatus()
{
    // 司机室故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_A))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS1))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_B))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS2))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_C))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS3))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS3))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_D))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS4))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS4))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_E))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS5))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS5))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_F))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS6))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_G))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS7))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS7))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCMS, D_POS_H))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS8))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCMS8))->SetCtrlBKColor(Qt::black);
    }


    // ATC 故障
//    if (CheckFaultExist(E_FAULTS_CATEGORY_ATC, D_POS_A))
//    {
//        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ATC1))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ATC1))->SetCtrlBKColor(Qt::black);
//    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_ATC, D_POS_H))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ATC6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ATC6))->SetCtrlBKColor(Qt::black);
    }

    // 牵引系统故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCU, D_POS_B))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU2))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCU, D_POS_C))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU3))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU3))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCU, D_POS_D))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU4))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU4))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCU, D_POS_E))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU5))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU5))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCU, D_POS_F))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU6))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_TCU, D_POS_G))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU7))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TCU7))->SetCtrlBKColor(Qt::black);
    }
    // 辅助系统故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_ACU, D_POS_A))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ACU1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ACU1))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_ACU, D_POS_H))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ACU6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_ACU6))->SetCtrlBKColor(Qt::black);
    }

    // 制动装置故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_A))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU1))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_B))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU2))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_C))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU3))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU3))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_D))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU4))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU4))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_E))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU5))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU5))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_F))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU6))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_G))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU7))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU7))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_BCU, D_POS_H))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU8))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_BCU8))->SetCtrlBKColor(Qt::black);
    }


    // 空调设置故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_A))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC1))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_B))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC2))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_C))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC3))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC3))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_D))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC4))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC4))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_E))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC5))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC5))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_F))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC6))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_G))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC7))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC7))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_HVAC, D_POS_H))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC7))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_HVAC7))->SetCtrlBKColor(Qt::black);
    }

    // PIS故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_PIS, D_POS_A))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS1))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_PIS, D_POS_B))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS2))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_PIS, D_POS_C))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS3))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS3))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_PIS, D_POS_D))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS4))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS4))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_PIS, D_POS_E))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS5))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS5))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_PIS, D_POS_F))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_PIS6))->SetCtrlBKColor(Qt::black);
    }

    // TL故障
//    if (CheckFaultExist(E_FAULTS_CATEGORY_TL, D_POS_A))
//    {
//        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TL1))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TL1))->SetCtrlBKColor(Qt::black);
//    }
//    if (CheckFaultExist(E_FAULTS_CATEGORY_TL, D_POS_F))
//    {
//        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TL6))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_TL6))->SetCtrlBKColor(Qt::black);
//    }

    //FAS故障
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_A))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS1))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_B))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS2))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_C))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS3))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS3))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_D))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS4))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS4))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_E))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS5))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS5))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_F))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS6))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS6))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_G))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS7))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS7))->SetCtrlBKColor(Qt::black);
    }
    if (CheckFaultExist(E_FAULTS_CATEGORY_FAS, D_POS_H))
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS8))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_FAULT_LABEL_FAS8))->SetCtrlBKColor(Qt::black);
    }
}

void CFaultPage::UpdateDoorFaultsStatus()
{
    int id = ID_FAULT_LABEL_DOOR1CAR1INFO1;
    int nArray1[] = {1,3,5,7,2,4,6,8};
    int nArray2[] = {D_POS_A,D_POS_B,D_POS_C};

    for(int i = 0; i < 3; i++)
    {
        for (int doornum = 0; doornum < 8; doornum++)
        {
            if (CheckDoorFaultExist(E_FAULTS_CATEGORY_DCU, nArray2[i], nArray1[+doornum]))
            {
                ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
            }
            else
            {
                ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
            }
           id++;
        }
    }

   id = ID_FAULT_LABEL_DOOR1CAR4INFO1;
   int nArray3[] = {8,6,4,2,7,5,3,1};
   int nArray4[] = {D_POS_D,D_POS_E,D_POS_F};

   for(int i = 0; i < 3; i ++)
   {
       for (int doornum = 0; doornum < 8; doornum++)
       {
           if (CheckDoorFaultExist(E_FAULTS_CATEGORY_DCU, nArray4[i], nArray3[doornum]))
           {
               ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
               ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
           }
           else
           {
               ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
               ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
           }
          id++;
       }
   }
}

void CFaultPage::OnBtnCabClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_TCMS);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnAtcClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_ATC);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnTcuClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_TCU);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnAcuClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_ACU);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnBcuClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_BCU);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnHvacClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_HVAC);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnPisClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_PIS);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnTcmsClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_TCMS);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnReserveClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_RESERVE);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnDoorClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_DOOR);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnBtnTlClk()
{
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_FAS);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

bool CFaultPage::CheckFaultExist(int category, int position)
{
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (int i=0; i<g_faultsRomLen; i++)
    {
        if ((category == pdata->category)
            && (position == pdata->pos)
            && pdata->flg
            && ((1 == pdata->level) || (2 == pdata->level)))
        {
            return true;
        }
        pdata++;
    }
    return false;
}

int CFaultPage::GetDoorNum(int errCode)
{
    return ((errCode & 0x00F0) >> 4);
}

bool CFaultPage::CheckDoorFaultExist(int category, int position, int doornum)
{
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (int i=0; i<g_faultsRomLen; i++)
    {
        if ((category == pdata->category)
            && (position == pdata->pos)
            && pdata->flg
            && ((1 == pdata->level) || (2 == pdata->level))
            && (GetDoorNum(pdata->code) == doornum)
            )
        {
            return true;
        }
        pdata++;
    }
    return false;
}

void CFaultPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::OnLevel3FaultBtnCLK()
{
    g_backtoprepage = true;
    g_subSystemFaultsTitle = QSTR("实时故障");
    g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ALL;
    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_ALL;

    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CFaultPage::UpdateNetFaultsStatus()
{
//    if(   g_atc1_comm_err_flg
//          ||g_atc2_comm_err_flg
////          g_riom1_gw123_comm_err_flg
////       || g_riom1_di1_comm_err_flg
////       || g_riom1_di2_comm_err_flg
////       || g_riom1_di3_comm_err_flg
////       || g_riom1_di4_comm_err_flg
////       || g_riom1_do1_comm_err_flg
////       || g_riom1_do2_comm_err_flg
////       || g_riom1_ai1_comm_err_flg
//       || g_acu1_comm_err_flg
//       || g_bcu1_comm_err_flg
//       ||g_pis1_comm_err_flg
//       || g_hvac1_comm_err_flg)
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET1))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET1))->SetCtrlBKColor(Qt::black);
//    }
//
//    if(
////            g_riom2_gw123_comm_err_flg
////       || g_riom2_di1_comm_err_flg
////       || g_riom2_di2_comm_err_flg
////       || g_riom2_di3_comm_err_flg
////       || g_riom2_di4_comm_err_flg
////       || g_riom2_do1_comm_err_flg
////       || g_riom2_do2_comm_err_flg
//            g_tcu1_comm_err_flg
// //      || g_riom2_ai1_comm_err_flg
//       || g_hvac2_comm_err_flg
// //      || g_atc1_comm_err_flg
//       )
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET2))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET2))->SetCtrlBKColor(Qt::black);
//    }
//
//    if(
////            g_riom3_gw123_comm_err_flg
////       || g_riom3_di1_comm_err_flg
////       || g_riom3_di2_comm_err_flg
////       || g_riom3_di3_comm_err_flg
////       || g_riom3_di4_comm_err_flg
////       || g_riom3_do1_comm_err_flg
////       || g_riom3_do2_comm_err_flg
//            g_tcu2_comm_err_flg
////       || g_riom3_ai1_comm_err_flg
//       || g_bcu2_comm_err_flg
//       || g_hvac3_comm_err_flg
//       )
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET3))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET3))->SetCtrlBKColor(Qt::black);
//    }
//
//    if(
////            g_riom4_gw123_comm_err_flg
////       || g_riom4_di1_comm_err_flg
////       || g_riom4_di2_comm_err_flg
////       || g_riom4_di3_comm_err_flg
////       || g_riom4_di4_comm_err_flg
////       || g_riom4_do1_comm_err_flg
////       || g_riom4_do2_comm_err_flg
////       || g_riom4_ai1_comm_err_flg
//        g_tcu3_comm_err_flg
//       || g_bcu3_comm_err_flg
//       || g_hvac4_comm_err_flg
//       )
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET4))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET4))->SetCtrlBKColor(Qt::black);
//    }
//
//    if(
////            g_riom5_gw123_comm_err_flg
////       || g_riom5_di1_comm_err_flg
////       || g_riom5_di2_comm_err_flg
////       || g_riom5_di3_comm_err_flg
////       || g_riom5_di4_comm_err_flg
////       || g_riom5_do1_comm_err_flg
////       || g_riom5_do2_comm_err_flg
////       || g_riom5_ai1_comm_err_flg
//       g_tcu4_comm_err_flg
//       || g_hvac5_comm_err_flg
//       )
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET5))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET5))->SetCtrlBKColor(Qt::black);
//    }
//
//    if(
//            g_atc3_comm_err_flg
//       ||g_atc4_comm_err_flg
////            g_riom6_gw123_comm_err_flg
////       || g_riom6_di1_comm_err_flg
////       || g_riom6_di2_comm_err_flg
////       || g_riom6_di3_comm_err_flg
////       || g_riom6_di4_comm_err_flg
////       || g_riom6_do1_comm_err_flg
////       || g_riom6_do2_comm_err_flg
////       || g_riom6_ai1_comm_err_flg
//       ||g_bcu4_comm_err_flg
//       || g_hvac6_comm_err_flg
//       || g_pis2_comm_err_flg)
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET6))->SetCtrlBKColor(Qt::red);
//    }
//    else
//    {
//        ((CLabel*)GetDlgItem(ID_FAULT_LABEL_NET6))->SetCtrlBKColor(Qt::black);
//    }
}
