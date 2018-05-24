#include "CVialSignalPage.h"

ROMDATA g_PicRom_VialSignal[] =
{
    D_COMMON_PAGE_HEADER(QSTR("生命信号"))
    {"",                            D_FONT_BOLD(10),      QRect(100, 45, 600,  70),           Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBVSP_TRAIN               },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(702, 80, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVSP_RIGHTARROW          },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(40,  80, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVSP_LEFTARROW           },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 120, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 150, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 180, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 210, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 240, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 270, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 300, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 330, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 360, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 390, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 420, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 450, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 480, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 510, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 15, 540, 686,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {"",                       D_FONT_BOLD(6),      QRect( 5, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(60, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(150, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(240, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(330, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(420, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                       D_FONT_BOLD(6),      QRect(510, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                       D_FONT_BOLD(6),      QRect(600, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(15, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(120, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(265, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(410, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(555, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("CCU"),        D_FONT_BOLD(8),      QRect( 16, 121,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("ERM"),        D_FONT_BOLD(8),      QRect( 16, 151,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("IO-GW"),      D_FONT_BOLD(8),      QRect( 16, 181,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("DI"),        D_FONT_BOLD(6),      QRect( 16, 211,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("DO"),        D_FONT_BOLD(6),      QRect( 16, 241,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("AX"),        D_FONT_BOLD(6),      QRect( 16, 271,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("BCU:MVB"),        D_FONT_BOLD(8),      QRect( 16, 211,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("BCU:EPC"),        D_FONT_BOLD(8),      QRect( 16, 211+30,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("BCU:WSP"),        D_FONT_BOLD(8),      QRect( 16, 211+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("TCU"),          D_FONT_BOLD(8),      QRect( 16, 241+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("EDCU"),            D_FONT_BOLD(8),      QRect( 16, 271+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("HVAC"),            D_FONT_BOLD(8),      QRect( 16, 301+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("PIS"),        D_FONT_BOLD(8),      QRect( 16, 331+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("FAS"),           D_FONT_BOLD(8),      QRect( 16, 361+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("ATC"),          D_FONT_BOLD(6),      QRect( 16, 511,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("ACU"),          D_FONT_BOLD(8),      QRect( 16, 391+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("HMI"),          D_FONT_BOLD(8),      QRect( 16, 421+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("PDS"),          D_FONT_BOLD(8),      QRect( 16, 451+60,  105, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 61,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },


    {QSTR(""),                      D_FONT_BOLD(8),      QRect(  121,121, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect( 266,121, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU1            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 411,121, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("ERM"),                   D_FONT_BOLD(6),      QRect( 511,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU2            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,121,140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },

{QSTR(""),                      D_FONT_BOLD(8),      QRect(  121,151, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ERM            },
{QSTR("-- --"),                   D_FONT_BOLD(12),      QRect( 266,151, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 411,151, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 556,151,140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE           },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,181, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_IO_GW11            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266,181, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW22            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411,181, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW33            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,181, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW44            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW55            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW66            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW77            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW88            },
//{QSTR(""),                      D_FONT_BOLD(6),      QRect( 121,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DI11            },
//{QSTR(""),                      D_FONT_BOLD(6),      QRect( 266,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DI22            },
//{QSTR(""),                      D_FONT_BOLD(6),      QRect( 411,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DI33            },
//{QSTR(""),                      D_FONT_BOLD(6),      QRect( 556,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DI44            },LMH ZHANSHI


    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_BCUMVB1SIGNAL            },
    //{QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    //{QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUMVB2SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUMVB3SIGNAL            },
    //{QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    //{QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,211, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUMVB4SIGNAL           },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,211+30, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUEPC1SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266,211+30, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUEPC2SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411,211+30, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUEPC3SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,211+30, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUEPC4SIGNAL           },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,211+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUWSP1SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266,211+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUWSP2SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411,211+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUWSP3SIGNAL            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,211+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCUWSP4SIGNAL           },

    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 121,241+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266,241+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU22            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411,241+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU33            },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU44            },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU55            },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU66            },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU77            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 556,241+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121+15,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_EDCU1            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121+85,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_EDCU2            },
    {QSTR("1:"),                      D_FONT_BOLD(8),      QRect( 121,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("2:"),                      D_FONT_BOLD(8),      QRect( 121+75,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266+15,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_EDCU3            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266+85,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_EDCU4            },
    {QSTR("3:"),                      D_FONT_BOLD(8),      QRect( 266,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("4:"),                      D_FONT_BOLD(8),      QRect( 266+75,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },


    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411+15,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_EDCU5            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411+85,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_EDCU6            },
    {QSTR("5:"),                      D_FONT_BOLD(8),      QRect( 411,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("6:"),                      D_FONT_BOLD(8),      QRect( 411+75,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },


    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556+15,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_EDCU7            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556+85,271+60, 58, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_EDCU8            },
    {QSTR("7:"),                      D_FONT_BOLD(8),      QRect( 556,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("8:"),                      D_FONT_BOLD(8),      QRect( 556+75,271+60, 13, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },


    //    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,241, 140, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP5            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,241, 140, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP6            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,241, 140, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP7            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 691,241, 140, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP8            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 61,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGW1            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 151,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW2            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 241,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW3            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 331,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW4            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW5            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW6            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW7            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 691,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW8            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,301+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HVAC11            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266,301+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC22            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411,301+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC33            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,301+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC44            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC55            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC66            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC77            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC88            },


    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,331+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_PA11            },
    {QSTR("TV1:"),                      D_FONT_BOLD(8),      QRect( 266,331+60, 38, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("TV2:"),                      D_FONT_BOLD(8),      QRect( 411,331+60, 38, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 266+40,331+60, 100, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PATV11            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 411+40,331+60, 100, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PATV88            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,331+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA88            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,361+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_FAS1            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 266,361+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 411,361+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,361+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_FAS8            },

//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 61,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC10            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121,391+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_ACU11            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 266,391+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 411,391+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,391+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU88            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121, 421+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HMI1            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 266,421+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 411,421+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,421+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI2            },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 121, 451+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_PDS1            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 266,451+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("-- --"),                      D_FONT_BOLD(12),      QRect( 411,451+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 556,451+60, 140, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PDS2            },




    D_COMMON_PAGE_BUTTON_BAR
};
int g_VialSignalRomLen = sizeof(g_PicRom_VialSignal)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVialSignalPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVialSignalPage::CVialSignalPage()
{
}

void CVialSignalPage::OnUpdatePage()
{
    UpdateVialSignal();
    updateTrain(ID_PIBVSP_TRAIN);

    updateErrorLine(ID_PIBVSP_TRAIN);//3.5
    updateArrow(ID_PIBVSP_LEFTARROW,ID_PIBVSP_RIGHTARROW);
}

void CVialSignalPage::OnInitPage()
{

}

void CVialSignalPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    this->InitPageHeader();//3.17
}

void CVialSignalPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVialSignalPage::OnComBtn2Clk()
{

}

void CVialSignalPage::OnComBtn3Clk()
{

}

void CVialSignalPage::OnComBtn4Clk()
{

}

void CVialSignalPage::OnComBtn5Clk()
{

}

void CVialSignalPage::OnComBtn6Clk()
{

}

void CVialSignalPage::UpdateVialSignal()
{

//    QString door_gw1 = 0;
//    QString door_gw2 = 0;
//    QString door_gw3 = 0;
//    QString door_gw4 = 0;
//    QString door_gw5 = 0;
//    QString door_gw6 = 0;

     //SetVSDataLabelString(ID_PIBVSP_LABEL_CCU1, CCU_HMI_220_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_CCU1, CCU_HMI_308_4);

//    // lijian
    //SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU1, ERM_F02_7);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU2, ERM_F12_7);
    SetVSDataLabelString(ID_PIBVSP_LABEL_ERM, ERM_210_1);


    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW11,RIOM_110_1%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW22,RIOM_120_1%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW33,RIOM_130_1%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW44,RIOM_140_1%256 );
    //SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW55,DI_150_9%256 );
    //SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW66,DI_160_9%256 );
    //SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW77,DI_170_9%256 );
    //SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW88,DI_180_9%256 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DI11,RIOM_110_1%256 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DI22,RIOM_120_1%256 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DI33,RIOM_130_1%256 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DI44,RIOM_140_1%256 );LMH ZHANSHI
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUMVB1SIGNAL,BCU_410_15%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUMVB2SIGNAL,BCU_420_15%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUMVB3SIGNAL,BCU_430_15%256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUMVB4SIGNAL,BCU_440_15%256);

    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUEPC1SIGNAL,BCU_410_15/256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUEPC2SIGNAL,BCU_420_15/256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUEPC3SIGNAL,BCU_430_15/256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUEPC4SIGNAL,BCU_440_15/256);

    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUWSP1SIGNAL,BCU_411_12/256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUWSP2SIGNAL,BCU_421_12/256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUWSP3SIGNAL,BCU_431_12/256);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCUWSP4SIGNAL,BCU_441_12/256);

    SetVSATCUDataLabelString(ID_PIBVSP_LABEL_TCU22,(TCU_510_2%256*256+TCU_510_1/256),Bit(TCU_510_13,6));
    SetVSATCUDataLabelString(ID_PIBVSP_LABEL_TCU33,(TCU_520_2%256*256+TCU_520_1/256),Bit(TCU_520_13,6));
    //SetVSDataLabelString(ID_PIBVSP_LABEL_TCU44,TCU_530_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_TCU55,TCU_540_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_TCU66,TCU_550_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_TCU77,TCU_560_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU1, DCU_712_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU2, DCU_722_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU3, DCU_732_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU4, DCU_742_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU5, DCU_752_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU6, DCU_762_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU7, DCU_772_11);
    SetVSDataLabelString(ID_PIBVSP_LABEL_EDCU8, DCU_782_11);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP5, DCU_OLD_750_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP6, DCU_OLD_760_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP7, DCU_OLD_770_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP8, DCU_OLD_780_1);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW1, DCU_OLD_790_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW2, DCU_OLD_7A0_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW3, DCU_OLD_7B0_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW4, DCU_OLD_7C0_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW5, DCU_OLD_7D0_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW6, DCU_OLD_7E0_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW7, DCU_OLD_7F0_1);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW8, DCU_OLD_700_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC11, HVAC_A11_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC22, HVAC_A21_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC33, HVAC_A31_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC44, HVAC_A41_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC55, HVAC_850_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC66, HVAC_860_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC77, HVAC_870_1);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC88, HVAC_880_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_PATV11, PIS_910_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_PATV88, PIS_920_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_PA11, PIS_911_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_PA88, PIS_921_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS1, FAS_B10_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS8, FAS_B20_1);

    //SetVSDataLabelString(ID_PIBVSP_LABEL_ATC10, ATC_A10_1);

    SetVSATCUDataLabelString(ID_PIBVSP_LABEL_ACU11,((ACU_610_2%256)*256+ACU_610_1/256),Bit(ACU_610_13,6));
    SetVSATCUDataLabelString(ID_PIBVSP_LABEL_ACU88,(ACU_620_2%256*256+ACU_620_1/256),Bit(ACU_620_13,6));

    if(Bit(CCU_HMI_308_5,5)==1)
    {
        if(TC1_HMI==1)
        {
            SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,HMI_send_data1 );
        }
        else
        {
            SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,g_dataBuffer_MVB[208] );
        }
    }
    else
    {
            SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,0 );
    }
    if(Bit(CCU_HMI_308_5,4)==1)
    {
        if(TC2_HMI==1)
        {
            SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,HMI_send_data1);
        }
        else
        {
            SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,g_dataBuffer_MVB[272] );
        }
    }
    else
    {
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,0);
    }
    SetVSDataLabelString(ID_PIBVSP_LABEL_PDS1,PDS_C10_1 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_PDS2,PDS_C20_1);








//    // lijian
//    SetVialSigLabelString(ID_PIBVSP_LABEL_DCCU2, software_version1);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2, run_status_data97);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_GW2, comm_status_data78);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC20, comm_status_data73);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC21, comm_status_data74);


//    door_gw1 = StrFromInt(comm_status_data79/256, 2);
//    door_gw2 = StrFromInt(comm_status_data80/256, 2);
//    door_gw3 = StrFromInt(comm_status_data81/256, 2);
//    door_gw4 = StrFromInt(comm_status_data82/256, 2);
//    door_gw5 = StrFromInt(comm_status_data83/256, 2);
//    door_gw6 = StrFromInt(comm_status_data84/256, 2);



//    return;
}

void CVialSignalPage::SetVSDataLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}
void CVialSignalPage::SetVSATCUDataLabelString(int id, int DataVal1,int DataVal2)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal1)+QSTR("  ")+QString::number(DataVal2));

    return;
}

void CVialSignalPage::SetVialSigLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
