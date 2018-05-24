#include "CDoorSettingPage.h"
#include <qdatetime.h>
#include <qdebug.h>

ROMDATA g_PicRom_DoorSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QSTR("时间设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("门参数\n设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif


    {"",                          D_FONT_BOLD(6),      QRect(10, 100,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 140,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 180,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 220,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 260,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 300,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 340,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 380,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 420,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 460,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(10, 500,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                          D_FONT_BOLD(6),      QRect(410, 100,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(410, 140,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(410, 180,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(410, 220,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(410, 260,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(410, 300,   310, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                          D_FONT_BOLD(6),      QRect(10, 100,   1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(140, 100,   1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(200, 100,   1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(260, 100,   1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(320, 100,   1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                          D_FONT_BOLD(6),      QRect(410, 100,   1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(540, 100,   1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(600, 100,   1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(660, 100,   1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(720, 100,   1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("参数名称"),           D_FONT_BOLD(8),      QRect(11,  101,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("范围"),           D_FONT_BOLD(8),      QRect(141,  101,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("默认"),           D_FONT_BOLD(8),      QRect(201,  101,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("设定值"),           D_FONT_BOLD(8),      QRect(261,  101,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,         ID_IGNORE        },

    {QSTR("障碍物关门力1"),           D_FONT_BOLD(8),      QRect(11,  141,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15－30"),           D_FONT_BOLD(8),      QRect(141,  141,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15"),           D_FONT_BOLD(8),      QRect(201,  141,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15"),           D_FONT_BOLD(8),      QRect(261,  141,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER1       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  145,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN1               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  145,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP1                 },



    {QSTR("障碍物关门力2"),           D_FONT_BOLD(8),      QRect(11,  181,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15－30"),           D_FONT_BOLD(8),      QRect(141,  181,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("18"),           D_FONT_BOLD(8),      QRect(201,  181,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("18"),           D_FONT_BOLD(8),      QRect(261,  181,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER2       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  185,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN2               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  185,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP2                 },

    {QSTR("障碍物关门力3"),           D_FONT_BOLD(8),      QRect(11,  221,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15－30"),           D_FONT_BOLD(8),      QRect(141,  221,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("20"),           D_FONT_BOLD(8),      QRect(201,  221,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("20"),           D_FONT_BOLD(8),      QRect(261,  221,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER3       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  225,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN3               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  225,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP3                 },

    {QSTR("障碍物关门力4"),           D_FONT_BOLD(8),      QRect(11,  261,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15－30"),           D_FONT_BOLD(8),      QRect(141,  261,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("23"),           D_FONT_BOLD(8),      QRect(201,  261,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("23"),           D_FONT_BOLD(8),      QRect(261,  261,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER4       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  265,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN4               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  265,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP4                 },

    {QSTR("障碍物关门力5"),           D_FONT_BOLD(8),      QRect(11,  301,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("15－30"),           D_FONT_BOLD(8),      QRect(141,  301,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("26"),           D_FONT_BOLD(8),      QRect(201,  301,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("26"),           D_FONT_BOLD(8),      QRect(261,  301,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER5       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  305,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN5               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  305,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP5                 },

    {QSTR("开门时间"),           D_FONT_BOLD(8),      QRect(11,  341,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("25－40"),           D_FONT_BOLD(8),      QRect(141,  341,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("30"),           D_FONT_BOLD(8),      QRect(201,  341,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("30"),           D_FONT_BOLD(8),      QRect(261,  341,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER6       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  345,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN6               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  345,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP6                 },

    {QSTR("关门时间"),           D_FONT_BOLD(8),      QRect(11,  381,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("25－40"),           D_FONT_BOLD(8),      QRect(141,  381,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("30"),           D_FONT_BOLD(8),      QRect(201,  381,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("30"),           D_FONT_BOLD(8),      QRect(261,  381,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER7       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  385,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN7               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  385,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP7                },

    {QSTR("受阻尝试开门次数"),           D_FONT_BOLD(8),      QRect(11,  421,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("1－5"),           D_FONT_BOLD(8),      QRect(141,  421,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("3"),           D_FONT_BOLD(8),      QRect(201,  421,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("3"),           D_FONT_BOLD(8),      QRect(261,  421,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER8       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  425,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN8               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  425,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP8                },

    {QSTR("受阻时开门宽度"),           D_FONT_BOLD(8),      QRect(11,  461,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("0－130"),           D_FONT_BOLD(8),      QRect(141,  461,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("40"),           D_FONT_BOLD(8),      QRect(201,  461,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("20"),           D_FONT_BOLD(8),      QRect(261,  461,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER9       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 330,  465,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN9               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 370,  465,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP9                },

    {QSTR("参数名称"),           D_FONT_BOLD(8),      QRect(411,  101,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("范围"),           D_FONT_BOLD(8),      QRect(541,  101,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("默认"),           D_FONT_BOLD(8),      QRect(601,  101,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("设定值"),           D_FONT_BOLD(8),      QRect(661,  101,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },

    {QSTR("障碍检测间隔"),           D_FONT_BOLD(8),      QRect(411,  141,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("3－30"),           D_FONT_BOLD(8),      QRect(541,  141,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("5"),           D_FONT_BOLD(8),      QRect(601,  141,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("5"),           D_FONT_BOLD(8),      QRect(661,  141,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER10       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 725,  145,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN10               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 765,  145,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP10                },

    {QSTR("开门延时"),           D_FONT_BOLD(8),      QRect(411,  181,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("0－50"),           D_FONT_BOLD(8),      QRect(541,  181,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("0"),           D_FONT_BOLD(8),      QRect(601,  181,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("0"),           D_FONT_BOLD(8),      QRect(661,  181,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER11       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 725,  185,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN11               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 765,  185,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP11                },

    {QSTR("关门延时"),           D_FONT_BOLD(8),      QRect(411,  221,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("0－50"),           D_FONT_BOLD(8),      QRect(541,  221,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("30"),           D_FONT_BOLD(8),      QRect(601,  221,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("30"),           D_FONT_BOLD(8),      QRect(661,  221,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER12       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 725,  225,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN12               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 765,  225,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP12                },

    {QSTR("重关闭延时"),           D_FONT_BOLD(8),      QRect(411,  261,  128, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("0－50"),           D_FONT_BOLD(8),      QRect(541,  261,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("20"),           D_FONT_BOLD(8),      QRect(601,  261,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("20"),           D_FONT_BOLD(8),      QRect(661,  261,  58, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_PARAMETER13       },
    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 725,  265,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARADOWN13               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 765,  265,  30,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_PARAUP13                },

    {QSTR("关门力    1＝10N"),           D_FONT_BOLD(8),      QRect(450,  340+50,  150, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_LABEL_1       },
    {QSTR("时间      1＝100ms"),           D_FONT_BOLD(8),      QRect(450,  380+50,  150, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_LABEL_2       },
    {QSTR("宽度      1＝1cm"),           D_FONT_BOLD(8),      QRect(450,  420+50,  150, 38),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_DOORSET_LABEL_3       },

    {QSTR("确   定"),      D_FONT_BOLD(10),      QRect( 660,  330, 80,  40),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_DOORSET_BUTTON_CONFIRM                },
    {QSTR("参数设定输入值"),       D_FONT_BOLD(8),      QRect( 420,  330,  120,  40),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_DOORSET_PARAMETERNAME         },
    {QSTR("  "),             D_FONT_BOLD(8),      QRect(560,  330, 60,  40),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_DOORSET_INPUTPARAMETER                },



};
int g_DoorSettingRomLen = sizeof(g_PicRom_DoorSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDoorSettingPage,CPage)
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
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN1, OnParaDown1Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP1, OnParaUp1Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN2, OnParaDown2Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP2, OnParaUp2Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN3, OnParaDown3Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP3, OnParaUp3Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN4, OnParaDown4Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP4, OnParaUp4Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN5, OnParaDown5Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP5, OnParaUp5Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN6, OnParaDown6Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP6, OnParaUp6Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN7, OnParaDown7Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP7, OnParaUp7Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN8, OnParaDown8Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP8, OnParaUp8Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN9, OnParaDown9Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP9, OnParaUp9Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN10, OnParaDown10Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP10, OnParaUp10Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN11, OnParaDown11Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP11, OnParaUp11Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN12, OnParaDown12Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP12, OnParaUp12Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARADOWN13, OnParaDown13Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_PARAUP13, OnParaUp13Clk)
        ON_BTNCLK(ID_DOORSET_BUTTON_CONFIRM, OnConfirmClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_YEAR,OnYearEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MONTH,OnMonthEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_DAY,OnDayEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_HOUR,OnHourEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MINUTE,OnMinEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_SECOND,OnSecEditClk)

//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_0, OnNum0Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_1, OnNum1Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_2, OnNum2Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_3, OnNum3Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_4, OnNum4Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_5, OnNum5Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_6, OnNum6Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_7, OnNum7Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_8, OnNum8Clk)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_9, OnNum9Clk)

//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_START, OnBtnStart)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CLEAR, OnBtnClear)
//        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CONFIRM, OnBtnConfirm)

        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME, OnHMICheckTime)
        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME, OnATCCheckTime)


END_MESSAGE_MAP()

CDoorSettingPage::CDoorSettingPage()
{
}

void CDoorSettingPage::OnUpdatePage()
{
    UpdateCCUDate();
    UpdateCCUTime();
    UpdateATCDate();
    UpdateATCTime();
    UpdateATCtimeFlg();
    UpdateParameter();


    read_time1 = 2000+CCU_HMI_308_1%256;//年
    read_time2 = CCU_HMI_308_1/256;//月
    read_time3 = CCU_HMI_308_2%256;//日
    read_time4 = CCU_HMI_308_2/256;//时
    read_time5 = CCU_HMI_308_3%256;//分
    read_time6 = CCU_HMI_308_3/256;//秒

//    ATC_time_PARA1=2000+ATC_time1/256;
//    ATC_time_PARA2=ATC_time1%256;
//    ATC_time_PARA3=ATC_time2/256;
//    ATC_time_PARA4=ATC_time2%256;
//    ATC_time_PARA5=ATC_time3/256;
//    ATC_time_PARA6=ATC_time3%256;



    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            door_settting_timer--;

            if (door_settting_timer == 0)
            {
                m_bSet = false;
                times = 0;
                m_bSet1=false;
                m_bSet2=false;
                m_bSet3=false;
                m_bSet4=false;
                m_bSet5=false;
                m_bSet6=false;
                m_bSet7=false;
                m_bSet8=false;
                m_bSet9=false;
                m_bSet10=false;
                m_bSet11=false;
                m_bSet12=false;
                m_bSet13=false;

                HMI_send_data48=0x55*256+door_setting13;
                //time_settting_timer = 4;//LMH9.24
                //BitSet(HMI_send_data28,15,0);
                //BitSet(HMI_send_data32,16,0);//时间设定保存标志
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);

            }
        }
    }
}

void CDoorSettingPage::OnInitPage()
{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_YEAR);

//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };
//    for (int i=0; i<6; i++)
//    {
//        if (i == 0)
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(4);
//        else
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(2);

//        ((CEdit*)GetDlgItem(nIDArray[i]))->m_bIsPassWord = false;
//    }

//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->m_bAutoUpState = false;
//    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL2))->SetAlignment(Qt::AlignLeft);
    ((CLabel *) GetDlgItem(ID_DOORSET_INPUTPARAMETER))->SetBorderColor(Qt::white);
    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;
    ((CLabel *) GetDlgItem(ID_DOORSET_LABEL_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *) GetDlgItem(ID_DOORSET_LABEL_2))->SetAlignment(Qt::AlignLeft);
    ((CLabel *) GetDlgItem(ID_DOORSET_LABEL_3))->SetAlignment(Qt::AlignLeft);

}

void CDoorSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返 回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("确 认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("返 回"));
#endif

    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->SetCtrlEnable(false);
//     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
//     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(false);
     door_settting_timer = 4;

//     QDate date = QDate::currentDate();
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText(QString::number(date.year()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
//     QTime time = QDateTime::currentDateTime().time();
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));
     this->InitPageHeader();//3.17
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CDoorSettingPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
            //m_bSet = false;
        }

        void CDoorSettingPage::OnComBtn2Clk()
        {

        }

        void CDoorSettingPage::OnComBtn3Clk()
        {

        }

        void CDoorSettingPage::OnComBtn4Clk()
        {

        }

        void CDoorSettingPage::OnComBtn5Clk()
        {

        }

        void CDoorSettingPage::OnComBtn6Clk()
        {

        }
        void CDoorSettingPage::OnComBtn7Clk()
        {

        }

        void CDoorSettingPage::OnComBtn8Clk()
        {
            //ChangePage(PAGE_INDEX_MAINTAIN);
            //time_setting_start = 0;
           m_bSet = true;
           door_settting_timer = 4;
           if(m_bSet1||m_bSet2||m_bSet3||m_bSet4||m_bSet5||m_bSet6||m_bSet7||m_bSet8||m_bSet9||m_bSet10||m_bSet11||m_bSet12||m_bSet13)

               HMI_send_data48=0xAA*256+door_setting13;

        }
#else
        void CDoorSettingPage::OnComBtn1Clk()
        {

        }

        void CDoorSettingPage::OnComBtn2Clk()
        {

        }

        void CDoorSettingPage::OnComBtn3Clk()
        {

        }

        void CDoorSettingPage::OnComBtn4Clk()
        {

        }

        void CDoorSettingPage::OnComBtn5Clk()
        {

        }

        void CDoorSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
            time_setting_start = 0;
        }

#endif


void CDoorSettingPage::OnParaDown1Clk()
{

       if (door_setting1 > 15&&door_setting1 <31)
       {
           door_setting1 -= 1;
           m_bSet1=true;
       }
       else
           door_setting1  =15;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting1);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力1"));

}
void CDoorSettingPage::OnParaUp1Clk()
{

       if (door_setting1 > 14&&door_setting1 <30)

       {
           door_setting1 += 1;
           m_bSet1=true;
       }
       else
           door_setting1  = 30;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting1);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力1"));
}

void CDoorSettingPage::OnParaDown2Clk()
{

       if (door_setting2 > 15&&door_setting2 <31)
       {
           door_setting2 -= 1;
           m_bSet2=true;
       }
       else
           door_setting2  =15;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting2);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力2"));

}
void CDoorSettingPage::OnParaUp2Clk()
{

       if (door_setting2 > 14&&door_setting2 <30)

       {
           door_setting2 += 1;
           m_bSet2=true;
       }
       else
           door_setting2  = 30;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting2);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力2"));
}

void CDoorSettingPage::OnParaDown3Clk()
{

       if (door_setting3 > 15&&door_setting3 <31)
       {
           door_setting3 -= 1;
           m_bSet3=true;
       }
       else
           door_setting3  =15;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting3);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力3"));

}
void CDoorSettingPage::OnParaUp3Clk()
{

       if (door_setting3 > 14&&door_setting3 <30)

       {
           door_setting3 += 1;
           m_bSet3=true;
       }
       else
           door_setting3  = 30;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting3);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力3"));
}

void CDoorSettingPage::OnParaDown4Clk()
{

       if (door_setting4 > 15&&door_setting4 <31)
       {
           door_setting4 -= 1;
           m_bSet4=true;
       }
       else
           door_setting4  =15;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting4);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力4"));

}
void CDoorSettingPage::OnParaUp4Clk()
{

       if (door_setting4 > 14&&door_setting4 <30)

       {
           door_setting4 += 1;
           m_bSet4=true;
       }
       else
           door_setting4  = 30;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting4);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力4"));
}

void CDoorSettingPage::OnParaDown5Clk()
{

       if (door_setting5 > 15&&door_setting5 <31)
       {
           door_setting5 -= 1;
           m_bSet5=true;
       }
       else
           door_setting5  =15;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting5);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力5"));

}
void CDoorSettingPage::OnParaUp5Clk()
{

       if (door_setting5 > 14&&door_setting5 <30)

       {
           door_setting5 += 1;
           m_bSet5=true;
       }
       else
           door_setting5  = 30;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting5);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物关门力5"));
}

void CDoorSettingPage::OnParaDown6Clk()
{

       if (door_setting6 > 25&&door_setting6 <41)
       {
           door_setting6 -= 1;
           m_bSet6=true;
       }
       else
           door_setting6  =25;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting6);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("开门时间"));

}
void CDoorSettingPage::OnParaUp6Clk()
{

       if (door_setting6 > 24&&door_setting6 <40)

       {
           door_setting6 += 1;
           m_bSet6=true;
       }
       else
           door_setting6  = 40;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting6);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("开门时间"));
}

void CDoorSettingPage::OnParaDown7Clk()
{

       if (door_setting7 > 25&&door_setting7 <41)
       {
           door_setting7 -= 1;
           m_bSet7=true;
       }
       else
           door_setting7  =25;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting7);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("关门时间"));

}
void CDoorSettingPage::OnParaUp7Clk()
{

       if (door_setting7 > 24&&door_setting7 <40)

       {
           door_setting7 += 1;
           m_bSet7=true;
       }
       else
           door_setting7  = 40;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting7);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("关门时间"));
}

void CDoorSettingPage::OnParaDown8Clk()
{

       if (door_setting8 > 1&&door_setting8 <6)
       {
           door_setting8 -= 1;
           m_bSet8=true;
       }
       else
           door_setting8  =1;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting8);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("受阻尝试开门次数"));

}
void CDoorSettingPage::OnParaUp8Clk()
{

       if (door_setting8 > 0&&door_setting8 <5)

       {
           door_setting8 += 1;
           m_bSet8=true;
       }
       else
           door_setting8  = 5;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting8);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("受阻尝试开门次数"));
}

void CDoorSettingPage::OnParaDown9Clk()
{

       if (door_setting9 > 0&&door_setting9 <131)
       {
           door_setting9 -= 1;
           m_bSet9=true;
       }
       else
           door_setting9  =0;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting9);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("受阻时开门宽度"));

}
void CDoorSettingPage::OnParaUp9Clk()
{

       if (door_setting9 >= 0&&door_setting9 <130)

       {
           door_setting9 += 1;
           m_bSet9=true;
       }
       else
           door_setting9  = 130;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting9);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("受阻时开门宽度"));
}

void CDoorSettingPage::OnParaDown10Clk()
{

       if (door_setting10 > 3&&door_setting10 <31)
       {
           door_setting10 -= 1;
           m_bSet10=true;
       }
       else
           door_setting10  =3;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting10);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物检测间隔"));

}
void CDoorSettingPage::OnParaUp10Clk()
{

       if (door_setting10 > 2&&door_setting10 <30)

       {
           door_setting10 += 1;
           m_bSet10=true;
       }
       else
           door_setting10  = 30;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting10);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("障碍物检测间隔"));
}

void CDoorSettingPage::OnParaDown11Clk()
{

       if (door_setting11 > 0&&door_setting11 <51)
       {
           door_setting11 -= 1;
           m_bSet11=true;
       }
       else
           door_setting11  =0;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting11);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("开门延时"));

}
void CDoorSettingPage::OnParaUp11Clk()
{

       if (door_setting11 >= 0&&door_setting11 <50)

       {
           door_setting11 += 1;
           m_bSet11=true;
       }
       else
           door_setting11  = 50;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting11);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("开门延时"));
}
void CDoorSettingPage::OnParaDown12Clk()
{

       if (door_setting12 > 0&&door_setting12 <51)
       {
           door_setting12 -= 1;
           m_bSet12=true;
       }
       else
           door_setting12  =0;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting12);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("关门延时"));

}
void CDoorSettingPage::OnParaUp12Clk()
{

       if (door_setting12 >= 0&&door_setting12 <50)

       {
           door_setting12 += 1;
           m_bSet12=true;
       }
       else
           door_setting12  = 50;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting12);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("关门延时"));
}

void CDoorSettingPage::OnParaDown13Clk()
{

       if (door_setting13 > 0&&door_setting13 <51)
       {
           door_setting13 -= 1;
           m_bSet13=true;
       }
       else
           door_setting11  =0;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting13);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("重关闭延时"));

}
void CDoorSettingPage::OnParaUp13Clk()
{

       if (door_setting13 >= 0&&door_setting13 <50)

       {
           door_setting13 += 1;
           m_bSet13=true;
       }
       else
           door_setting13  = 50;
       SetDoorParameter(ID_DOORSET_INPUTPARAMETER,door_setting13);
       ((CLabel *) GetDlgItem(ID_DOORSET_PARAMETERNAME))->SetCtrlText(QSTR("重关闭延时"));
}

void CDoorSettingPage::OnConfirmClk()
{
if(m_bSet1||m_bSet2||m_bSet3||m_bSet4||m_bSet5||m_bSet6||m_bSet7||m_bSet8||m_bSet9||m_bSet10||m_bSet11||m_bSet12||m_bSet13)
    {
    HMI_send_data48=0x55*256+door_setting13;
    HMI_send_data42=door_setting2*256+door_setting1;
    HMI_send_data43=door_setting4*256+door_setting3;
    HMI_send_data44=door_setting6*256+door_setting5;
    HMI_send_data45=door_setting8*256+door_setting7;
    HMI_send_data46=door_setting10*256+door_setting9;
    HMI_send_data47=door_setting12*256+door_setting11;
    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->SetCtrlEnable(true);
    }

}

void CDoorSettingPage::UpdateParameter()
{
    if(m_bSet1||m_bSet2||m_bSet3||m_bSet4||m_bSet5||m_bSet6||m_bSet7||m_bSet8||m_bSet9||m_bSet10||m_bSet11||m_bSet12||m_bSet13)
    {
        SetDoorParameter(ID_DOORSET_PARAMETER1,door_setting1);
        SetDoorParameter(ID_DOORSET_PARAMETER2,door_setting2);
        SetDoorParameter(ID_DOORSET_PARAMETER3,door_setting3);
        SetDoorParameter(ID_DOORSET_PARAMETER4,door_setting4);
        SetDoorParameter(ID_DOORSET_PARAMETER5,door_setting5);
        SetDoorParameter(ID_DOORSET_PARAMETER6,door_setting6);
        SetDoorParameter(ID_DOORSET_PARAMETER7,door_setting7);
        SetDoorParameter(ID_DOORSET_PARAMETER8,door_setting8);
        SetDoorParameter(ID_DOORSET_PARAMETER9,door_setting9);
        SetDoorParameter(ID_DOORSET_PARAMETER10,door_setting10);
        SetDoorParameter(ID_DOORSET_PARAMETER11,door_setting11);
        SetDoorParameter(ID_DOORSET_PARAMETER12,door_setting12);
        SetDoorParameter(ID_DOORSET_PARAMETER13,door_setting13);

    }
//    else
//    {
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER1))->SetCtrlText(QString::number(DCU_719_1));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER2))->SetCtrlText(QString::number(DCU_719_2));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER3))->SetCtrlText(QString::number(DCU_719_3));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER4))->SetCtrlText(QString::number(DCU_719_4));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER5))->SetCtrlText(QString::number(DCU_719_5));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER6))->SetCtrlText(QString::number(DCU_719_6));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER7))->SetCtrlText(QString::number(DCU_719_7));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER8))->SetCtrlText(QString::number(DCU_719_8));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER9))->SetCtrlText(QString::number(DCU_719_9));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER10))->SetCtrlText(QString::number(DCU_719_10));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER11))->SetCtrlText(QString::number(DCU_719_11));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER12))->SetCtrlText(QString::number(DCU_719_12));
////        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER13))->SetCtrlText(QString::number(DCU_719_13));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER1))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER2))->SetCtrlText(QSTR(""));//设定前和设定后是否隐藏数值
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER3))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER4))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER5))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER6))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER7))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER8))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER9))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER10))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER11))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER12))->SetCtrlText(QSTR(""));
//        ((CEdit *)GetDlgItem(ID_DOORSET_PARAMETER13))->SetCtrlText(QSTR(""));

//    }

        SetLabelColor(ID_DOORSET_PARAMETER1, m_bSet1);

        SetLabelColor(ID_DOORSET_PARAMETER2, m_bSet2);

        SetLabelColor(ID_DOORSET_PARAMETER3, m_bSet3);

        SetLabelColor(ID_DOORSET_PARAMETER4, m_bSet4);

        SetLabelColor(ID_DOORSET_PARAMETER5, m_bSet5);

        SetLabelColor(ID_DOORSET_PARAMETER6, m_bSet6);

        SetLabelColor(ID_DOORSET_PARAMETER7, m_bSet7);

        SetLabelColor(ID_DOORSET_PARAMETER8, m_bSet8);

        SetLabelColor(ID_DOORSET_PARAMETER9, m_bSet9);

        SetLabelColor(ID_DOORSET_PARAMETER10, m_bSet10);

        SetLabelColor(ID_DOORSET_PARAMETER11, m_bSet11);

        SetLabelColor(ID_DOORSET_PARAMETER12, m_bSet12);

        SetLabelColor(ID_DOORSET_PARAMETER13, m_bSet13);

}

void CDoorSettingPage::SetDoorParameter(int lableId,int parameter)
{
    //char buff[10] = {'\0'};
    //sprintf(buff, "%d", parameter);
    //((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString(buff));
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString::number(parameter));
}
void CDoorSettingPage::SetLabelColor(int id, int colorVal)
{
    //ASSERT((colorVal >= 0) && (colorVal <= 15));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CDoorSettingPage::OnDayEditClk()
{
    //SetFocusEdit(ID_PIBTIMESETTING_EDIT_DAY);
}

void CDoorSettingPage::OnHourEditClk()
{
    //SetFocusEdit(ID_PIBTIMESETTING_EDIT_HOUR);
}

void CDoorSettingPage::OnMinEditClk()
{
    //SetFocusEdit(ID_PIBTIMESETTING_EDIT_MINUTE);
}

void CDoorSettingPage::OnSecEditClk()
{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_SECOND);
}

void CDoorSettingPage::SetFocusEdit(int nEditID)
{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };

//    for (int i=0; i<6; i++)
//    {
//        if (nEditID == nIDArray[i])
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(true);
//        else
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
//    }
}

void CDoorSettingPage::KillAllEditFocus()
{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };

//    for(int i = 0; i < 6; i++)
//    {
//        ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
//    }
}

int CDoorSettingPage::GetFocusEditID()
{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };

//    bool bFind = true;
//    for (int i=0; i<6; i++)
//    {
//        if (((CEdit*)GetDlgItem(nIDArray[i]))->GetSelected())
//        {
//           return nIDArray[i];
//        }
//        else
//        {
//            bFind = false;
//        }
//    }
//    if (!bFind)
//    {
//        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR))->SetSelected(true);
//        return ID_PIBTIMESETTING_EDIT_YEAR;
//    }
}

void CDoorSettingPage::OnNum0Clk()
{
    //AddStrToFocusEdit("0");
}

void CDoorSettingPage::OnNum1Clk()
{
    //AddStrToFocusEdit("1");
}

void CDoorSettingPage::OnNum2Clk()
{
    //AddStrToFocusEdit("2");
}

void CDoorSettingPage::OnNum3Clk()
{
    //AddStrToFocusEdit("3");
}

void CDoorSettingPage::OnNum4Clk()
{
    //AddStrToFocusEdit("4");
}

void CDoorSettingPage::OnNum5Clk()
{
    //AddStrToFocusEdit("5");
}

void CDoorSettingPage::OnNum6Clk()
{
    //AddStrToFocusEdit("6");
}

void CDoorSettingPage::OnNum7Clk()
{
    //AddStrToFocusEdit("7");
}

void CDoorSettingPage::OnNum8Clk()
{
    //AddStrToFocusEdit("8");
}

void CDoorSettingPage::OnNum9Clk()
{
//    AddStrToFocusEdit("9");
}

void CDoorSettingPage::AddStrToFocusEdit(QString str)
{
//    ((CEdit*)GetDlgItem(GetFocusEditID()))->AddEditStr(str);
}

void CDoorSettingPage::OnBtnStart()
{
//    m_bSet = true;
//    CheckDateInfo();

//    time_settting_timer = 4;

//    time_setting_1 = GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->GetCtrlText().toInt();
//    time_setting_2 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText().toInt();
//    time_setting_3 = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText().toInt();
//    time_setting_4 = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText().toInt();
//    time_setting_5 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText().toInt();
//    time_setting_6 = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText().toInt();

//    HMI_send_data18=time_setting_2*256+(time_setting_1-2000);
//    HMI_send_data19=time_setting_4*256+time_setting_3;
//    HMI_send_data20=time_setting_6*256+time_setting_5;
//    SetSystemTime(time_setting_1,time_setting_2,time_setting_3,time_setting_4,time_setting_5,time_setting_6);

//    BitSet(HMI_send_data32,16,1);


}

void CDoorSettingPage::OnBtnClear()
{
//    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

//void CDoorSettingPage::OnBtnConfirm()
//{
//    KillAllEditFocus();
//    CheckDateInfo();
//    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(true);
//}

void CDoorSettingPage::UpdateCCUDate()
{
//    QString ccu_date = "";

//       ccu_date = StrFromInt( 2000+CCU_HMI_308_1%256, 10 )+"/"+StrFromInt( CCU_HMI_308_1/256, 10 )+"/"+StrFromInt( CCU_HMI_308_2%256, 10 );

//    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUDATE))->SetCtrlText(ccu_date);


}

void CDoorSettingPage::UpdateCCUTime()
{
    //QString ccu_time = "";
    //ccu_time = StrFromInt(CCU_HMI_308_2/256, 10 )+":"+StrFromInt( CCU_HMI_308_3%256, 10 )+":"+StrFromInt(CCU_HMI_308_3/256, 10 );
    //((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUTIME))->SetCtrlText(ccu_time);

}

void CDoorSettingPage::UpdateATCDate()
{
    //QString atc_date = "";

    //atc_date = StrFromInt( 2000+ATC_A10_11 % 256, 10 )+"/"+StrFromInt( ATC_A10_11 / 256, 10 )+"/"+StrFromInt(ATC_A10_12 % 256, 10 );

}

void CDoorSettingPage::UpdateATCTime()
{
    //QString atc_time = "00:00:00";

    //atc_time = StrFromInt(ATC_A10_12 / 256, 10 )+":"+StrFromInt( ATC_A10_13 % 256, 10 )+":"+StrFromInt(ATC_A10_13 / 256, 10 );

}


void CDoorSettingPage::UpdateATCtimeFlg()
{
    //((CEdit *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIMEFLG1))->SetCtrlText(QString::number(ATC_time_flag));

}




void CDoorSettingPage::CheckDateInfo()
{
//    QString str;

//    QDate date = QDate::currentDate();
//    //year
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText(QString::number(date.year()));
//    else if(str.toInt() > 2999)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText("2999");

//    //month
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
//    else if(str.toInt() > 12)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText("12");

//    //day
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
//    else if(str.toInt() > 31)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText("31");

//    QTime time = QDateTime::currentDateTime().time();
//    //hour
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
//    else if(str.toInt() > 24)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText("24");

//    //minite
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
//    else if(str.toInt() >= 60)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText("59");

//    //second
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));
//    else if(str.toInt() >= 60)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText("59");
}
