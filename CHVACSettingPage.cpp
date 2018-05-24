#include "CHVACSettingPage.h"
#include <qdebug.h>

ROMDATA g_PicRom_HVACSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif


#ifdef PAGE_HEADER_NEW
    //{QSTR("通信中断"),       D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),            Qt::red,                 Qt::white,                CONTROL_LABEL,          ID_CHVACSET_COMMINTERRUPT                 },
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("空调"))
    {"",                   D_FONT_BOLD(10),      QRect(100, 64, 600,  85),            Qt::black,                QColor(205,205,205),                CONTROL_TRAIN,          ID_CHVACSET_TRAIN                         },
    {"RIGHT",              D_FONT_BOLD(6),      QRect(702, 107,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_RIGHT                   },
    {"LEFT",               D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_LEFT                    },
#endif

    {"",                   D_FONT_BOLD(6),      QRect( 10, 150, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 180, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 210, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 240, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 270, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 300, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 330, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 360, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 390, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 420, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 450, 691,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 150,   1, 300),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(100, 150,   1, 300),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(250, 150,   1, 300),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(400, 150,   1, 300),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(550, 150,   1, 300),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(700, 150,   1, 301),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    //{"",                   D_FONT_BOLD(6),      QRect(475, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    //{"",                   D_FONT_BOLD(6),      QRect(550, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    //{"",                   D_FONT_BOLD(6),      QRect(625, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    //{"",                   D_FONT_BOLD(6),      QRect(700, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//（40,66,80,30）
    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(613+14, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_CHVACSET_BUTTON_FASPAGE         },

    {QSTR("运行模式"),       D_FONT_BOLD(8),      QRect( 15,  460,  80,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("自动制冷"),             D_FONT_BOLD(8),      QRect(105,  460, 115,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_CHVACSET_LABEL_RUNMODEL                },

    {QSTR("设置温度"),      D_FONT_BOLD(8),      QRect(225,  460,  80,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(315,  460, 100,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPV                   },

    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 435,  460,  60,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPDOWN               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 515,  460,  60,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPUP                 },
    {QSTR("确   定"),      D_FONT_BOLD(8),      QRect( 640,  460, 60,  30),            Qt::black,                QColor(205,205,205),               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_CONFIRM                },

    /*{QSTR("全   冷"),      D_FONT_BOLD(8),      QRect( 212, 500, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STRONGCOLD             },
    {QSTR("半   冷"),      D_FONT_BOLD(8),      QRect( 309, 500, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WEAKCOLD               },
    {QSTR("自动制冷"),      D_FONT_BOLD(8),      QRect( 406, 500, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOCOLD               },
    {QSTR("预   冷"),      D_FONT_BOLD(8),      QRect( 503, 500, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_PRECOOL             },
 //   {QSTR("紧急通风\n停止"),  D_FONT_BOLD(6),      QRect( 697, 455+8, 85,  38),            Qt::black,                Qt::green,               CONTROL_LABEL,          ID_CHVACSET_LABEL_EmergencyModeStatus             },


//    {QSTR("全   暖"),      D_FONT_BOLD(8),      QRect( 155, 500, 100,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM               },
    {QSTR("紧急通风\n测试"),   D_FONT_BOLD(6),      QRect( 309, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_HALFWARM               },
    {QSTR("紧急通风\n停止"),   D_FONT_BOLD(5),      QRect( 697, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AMERGEWIND               },
    {QSTR("通   风"),      D_FONT_BOLD(8),      QRect( 406, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WIND                   },
    {QSTR("停   止"),      D_FONT_BOLD(8),      QRect( 503, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STOP                   },*/

    {QSTR("预   冷"),      D_FONT_BOLD(8),      QRect( 105, 500, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_PRECOOL             },
    //{QSTR("半   冷"),      D_FONT_BOLD(8),      QRect( 195, 500, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WEAKCOLD               },
    //{QSTR("全   冷"),      D_FONT_BOLD(8),      QRect( 285, 500, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STRONGCOLD             },
    {QSTR("自动制冷"),      D_FONT_BOLD(8),      QRect( 225, 500, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOCOLD               },

    {QSTR("预   热"),      D_FONT_BOLD(8),      QRect( 105, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_PREWARM             },
    //{QSTR("半   暖"),   D_FONT_BOLD(8),      QRect( 195, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_HALFWARM               },
    //{QSTR("全   暖"),      D_FONT_BOLD(8),      QRect( 285, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM               },
    {QSTR("自动制暖"),   D_FONT_BOLD(8),      QRect( 225, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOWARM               },
    {QSTR("紧急通风"),   D_FONT_BOLD(8),      QRect( 465, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AMERGEWIND               },
    {QSTR("通   风"),      D_FONT_BOLD(8),      QRect( 345, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WIND                   },
    {QSTR("停   止"),      D_FONT_BOLD(8),      QRect( 585, 530, 70,  25),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STOP                   },

    {QSTR("全车"),         D_FONT_BOLD(7),      QRect( 13, 152,  86,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR                     },
    {QSTR("1"),           D_FONT_BOLD(8),      QRect(103, 152,  145,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1                    },
    {QSTR("2"),           D_FONT_BOLD(8),      QRect(253, 152,  145,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2                    },
    {QSTR("3"),           D_FONT_BOLD(8),      QRect(403, 152,  145,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3                    },
    {QSTR("4"),           D_FONT_BOLD(8),      QRect(553, 152,  145,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4                    },
    //{QSTR("5"),           D_FONT_BOLD(6),      QRect(403, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5                    },
    //{QSTR("6"),           D_FONT_BOLD(6),      QRect(478, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6                    },
    //{QSTR("7"),           D_FONT_BOLD(6),      QRect(553, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7                    },
    //{QSTR("8"),           D_FONT_BOLD(6),      QRect(628, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8                    },

{QSTR("控制模式"),      D_FONT_BOLD(7),      QRect( 13, 182 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
{QSTR("集控"),            D_FONT_BOLD(8),      QRect(105, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR1      },
{QSTR("集控"),            D_FONT_BOLD(8),      QRect(255, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR2      },
{QSTR("集控"),            D_FONT_BOLD(8),      QRect(405, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR3      },
{QSTR("集控"),            D_FONT_BOLD(8),      QRect(555, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR4      },
/*{QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(403, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR5      },
{QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(478, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR6      },
{QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(553, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR7      },
{QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(628, 182 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR8      },*/



    {QSTR("运行模式"),      D_FONT_BOLD(7),      QRect( 13, 212 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("通  风"),            D_FONT_BOLD(8),      QRect(105, 212 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
    {QSTR("通  风"),            D_FONT_BOLD(8),      QRect(255, 212 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
    {QSTR("通  风"),            D_FONT_BOLD(8),      QRect(405, 212 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
    {QSTR("通  风"),            D_FONT_BOLD(8),      QRect(555, 212 ,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },



    {QSTR("设置温度"),      D_FONT_BOLD(7),      QRect( 13, 242,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("23 ℃"),            D_FONT_BOLD(10),      QRect(105, 242,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR1     },
    {QSTR("23 ℃"),            D_FONT_BOLD(10),      QRect(255, 242,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR2     },
    {QSTR("23 ℃"),            D_FONT_BOLD(10),      QRect(405, 242,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR3     },
    {QSTR("23 ℃"),            D_FONT_BOLD(10),      QRect(555, 242,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR4     },
    //{QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(403, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR5     },
    //{QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(478, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR6     },
    //{QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(553, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR7     },
    //{QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(628, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR8     },

    {QSTR("车内温度"),      D_FONT_BOLD(7),      QRect( 13, 272,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("25 ℃"),            D_FONT_BOLD(10),      QRect(105, 272,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR1        },
    {QSTR("25 ℃"),            D_FONT_BOLD(10),      QRect(255, 272,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR2        },
    {QSTR("25 ℃"),            D_FONT_BOLD(10),      QRect(405, 272,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR3        },
    {QSTR("25 ℃"),            D_FONT_BOLD(10),      QRect(555, 272,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR4        },
    //{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(403, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR5        },
    //{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(478, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR6        },
    //{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(553, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR7        },
    //{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(628, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR8        },

{QSTR("车外温度"),      D_FONT_BOLD(7),      QRect( 13, 302,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
/*{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(105, 302,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR1        },
{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(255, 302,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR2        },
{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(405, 302,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR3        },
{QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(555, 302,  140,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR4        },*/
{QSTR("24"),               D_FONT_BOLD(10),      QRect(105, 305,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPERATUREOUTCAR1        },
{QSTR("24"),               D_FONT_BOLD(10),      QRect(255, 305,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPERATUREOUTCAR2        },
{QSTR("24"),               D_FONT_BOLD(10),      QRect(405, 305,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPERATUREOUTCAR3        },
{QSTR("24"),               D_FONT_BOLD(10),      QRect(555, 305,  140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPERATUREOUTCAR4        },


    {QSTR("压缩机"),       D_FONT_BOLD(7),      QRect( 13, 332,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(140, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(177, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(214, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(290, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(327, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(364, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS4          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS4          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(440, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS3          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(477, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS2          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(514, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS1          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS4          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(590, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS3          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(627, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS2          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(664, 334,  35,  23),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS1          },
    /*{QSTR("1"),           D_FONT_BOLD(6),      QRect(403, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(421, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(439, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(457, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(478, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(496, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(514, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(532, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(553, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(571, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(589, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(607, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS4          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS4          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS3          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS2          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS1          },*/
    {QSTR("冷凝机"),       D_FONT_BOLD(7),      QRect( 13, 362,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(140, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(177, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(214, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(290, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(327, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(364, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD4             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(440, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(477, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(514, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD1             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(590, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(627, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(664, 364,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD1             },
    /*{QSTR("1"),           D_FONT_BOLD(6),      QRect(403, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(421, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(439, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(457, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(478, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(496, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(514, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(532, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(553, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(571, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(589, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(607, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD4             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD1             },*/
    {QSTR("通风机"),       D_FONT_BOLD(7),      QRect( 13, 392,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(140, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(177, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(214, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(290, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(327, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(364, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND4             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(440, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(477, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(514, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND1             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(590, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(627, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(664, 394,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND1             },

    {QSTR("预热器"),         D_FONT_BOLD(7),      QRect( 13, 422,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1PREHEAT1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(140, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1PREHEAT2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(177, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1PREHEAT3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(214, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1PREHEAT4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2PREHEAT1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(290, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2PREHEAT2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(327, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2PREHEAT3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(364, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2PREHEAT4          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3PREHEAT4          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(440, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3PREHEAT3          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(477, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3PREHEAT2          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(514, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3PREHEAT1          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4PREHEAT4          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(590, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4PREHEAT3          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(627, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4PREHEAT2          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(664, 424,  35,  23),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4PREHEAT1          },


//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(121, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(178, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(196, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(271, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(328, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(346, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(421, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(439, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(457, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(478, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(496, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(514, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(532, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(571, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(589, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(607, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM4          },

    /*{QSTR("新风阀"),       D_FONT_BOLD(6),      QRect( 13, 362 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(103, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(139, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(178, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(214, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(253, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(289, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(328, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(364, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(421, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(403, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(439, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND2          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(478, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(496, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(478, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(514, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND2          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(571, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(553, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(589, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND2          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(628, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(664, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND1          },*/

//    {QSTR("运行模式"),      D_FONT_BOLD(6),      QRect( 13, 392 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(103, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(178, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(253, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(328, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(403, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(478, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(553, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(628, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8RUNMODEL      },





};
int g_HVACSettingRomLen = sizeof(g_PicRom_HVACSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHVACSettingPage,CPage)
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

        //ON_BTNCLK(ID_CHVACSET_BUTTON_STRONGCOLD,OnSTRONGCOLDClk)
        //ON_BTNCLK(ID_CHVACSET_BUTTON_WEAKCOLD, OnWEAKCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTOCOLD, OnAUTOCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AMERGEWIND, OnAMERGEWINDClk)
        //ON_BTNCLK(ID_CHVACSET_BUTTON_FULLWARM, OnFULLWARMClk)
        //ON_BTNCLK(ID_CHVACSET_BUTTON_HALFWARM, OnHALFWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTOWARM, OnAUTOWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_WIND, OnWINDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_STOP, OnSTOPClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_TEMPDOWN, OnThempDownClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_TEMPUP, OnThempUpClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_CONFIRM, OnConfirmClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_PRECOOL, OnPRECOOLClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_PREWARM, OnPREWARMClk)// lmh add

        ON_BTNCLK(ID_CHVACSET_LABEL_CAR,OnCarClk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR1,OnCar1Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR2,OnCar2Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR3,OnCar3Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR4,OnCar4Clk);//3.27单节车厢不选择
        ON_BTNCLK(ID_CHVACSET_BUTTON_FASPAGE,OnFASpageBtnClk);
        //ON_BTNCLK(ID_CHVACSET_LABEL_CAR5,OnCar5Clk);
        //ON_BTNCLK(ID_CHVACSET_LABEL_CAR6,OnCar6Clk);
        //ON_BTNCLK(ID_CHVACSET_LABEL_CAR7,OnCar7Clk);
        //ON_BTNCLK(ID_CHVACSET_LABEL_CAR8,OnCar8Clk);

END_MESSAGE_MAP()

CHVACSettingPage::CHVACSettingPage()
{
    m_bpreAutoTempV = false;
    m_bAutoTempV = false;
    m_bBtnPress=false;
}

void CHVACSettingPage::OnUpdatePage()
{

    updateTrain(ID_CHVACSET_TRAIN);
    updateArrow(ID_CHVACSET_ARROW_LEFT,ID_CHVACSET_ARROW_RIGHT);
    updateErrorLine(ID_CHVACSET_TRAIN);//3.5

    //UpdateCommInterrupt(ID_CHVACSET_COMMINTERRUPT);


    UpdateCarTem();
    UpdateIndoorCarTem();
    UpdateOutdoorCarTem();
    UpdateHMIActive();
    UpdateHVAC_mode();
    UpdateHVAC_RUNmode();
    UpdateHVACState();
    UpdateHVAC_Compressor();
    UpdateHVAC_Condenser();
    UpdateHVAC_EvaporatorFan();
    //UpdateHVAC_HotElectricity();
    UpdateHVAC_PreheaterState();
    UpdateHVAC_NewWind();
    updateTempV();
    UpdateEmergencyMode();

    if (m_bBtnPress==false)
    {
        updateCtrl();
    }



    //((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);

//    if (Bit( CCU_HMI_221_16, 12))
//    {
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->ChangeButtonState(LBUTTON_DOWN);
//    }

    if (m_bBtnPress==false)
    {
        static int preHide = Bit(HVAC_command_hide,1);
        if(preHide != Bit(HVAC_command_hide,1))
        {
            updateCtrl();
            preHide = Bit(HVAC_command_hide,1);
        }
    }
    if (m_bBtnPress)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            HVAC_valid_timer--;
            if (HVAC_valid_timer==0)
            {
                m_bBtnPress = false;
//                BitSet( HMI_send_data28, 6, 0);//空调模式保存命令标志位
//                BitSet( HMI_send_data28, 7, 0);//空调温度保存命令标志位
                BitSet( HMI_send_data31, 12, 0);//TC1车空调模式命令标志位
                BitSet( HMI_send_data31, 11, 0);//MP1车空调模式命令标志位
                BitSet( HMI_send_data31, 10, 0);//MP2车空调模式命令标志位
                BitSet( HMI_send_data31, 9, 0);//TC2车空调模式命令标志位

                BitSet( HMI_send_data32, 8, 0);//TC1空调温度保存命令标志位
                BitSet( HMI_send_data32, 7, 0);//MP1空调温度保存命令标志位
                BitSet( HMI_send_data32, 6, 0);//MP2空调温度保存命令标志位
                BitSet( HMI_send_data32, 5, 0);//TC2空调温度保存命令标志位

//                BitSet( HMI_send_data41, 16, 0);//TC1车空调预冷命令标志位
//                BitSet( HMI_send_data41, 15, 0);//MP1车空调预冷命令标志位
//                BitSet( HMI_send_data41, 14, 0);//MP2车空调预冷命令标志位
//                BitSet( HMI_send_data41, 13, 0);//TC2车空调预冷命令标志位

//                BitSet( HMI_send_data41, 12, 0);//TC1空调预热保存命令标志位
//                BitSet( HMI_send_data41, 11, 0);//MP1空调预热保存命令标志位
//                BitSet( HMI_send_data41, 10, 0);//MP2空调预热保存命令标志位
//                BitSet( HMI_send_data41, 9, 0);//TC2空调预热保存命令标志位



            //    HMI_send_data24=HMI_send_data24&255;
                HVAC_button_color=0;
                HVAC_mode_select=0;

                ReSetCtrlButtonState();
            }
        }
    }
}

void CHVACSettingPage::OnInitPage()
{
    #ifdef USE_RAND_DATA
        TC1_HMI = 1;

    #endif
  // TC1_HMI = 1;
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetBorderColor(Qt::white);

    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetBorderColor(Qt::white);*/

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetBorderColor(Qt::white);*/

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetBorderColor(Qt::white);*/
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetBorderColor(Qt::white);*/
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetBorderColor(Qt::white);*/
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetBorderColor(Qt::white);*/
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM4))->SetBorderColor(Qt::white);

    /*((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetBorderColor(Qt::white);*/

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetBorderColor(Qt::white);
    int nIDArray[] =
    {
      //ID_CHVACSET_BUTTON_STRONGCOLD,
      //ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      //ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_CONFIRM,
      ID_CHVACSET_BUTTON_STOP,
      //ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_PREWARM,//  lmh add

   };

    //for (int i = 0; i < 8; i++)
    for (int i = 0; i < 8; i++)
    {
        ((CButton*)GetDlgItem(nIDArray[i]))->m_bAutoUpState = false;
        //((CButton*)GetDlgItem(nIDArray[i]))->HideButton();
        ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
    }
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->HideButton();
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->HideButton();
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);//lmh 9.23

    //((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetButtonType(BUTTON_STATION); 11.28

//    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_EmergencyModeStatus))->SetBorderColor(Qt::white);

//     ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->m_bAutoUpState = false;

    OnCarClk();

}

void CHVACSettingPage::OnShowPage()
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
   // ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlBKColor(Qt::blue);
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN7))->SetButtonType(BUTTON_STATION1);
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("帮   助"));
#endif

    //update ctrl
    updateCtrl();
    prewarmflg1=0;
    prewarmflg2=0;
    prewarmflg3=0;
    prewarmflg4=0;
    prewarmflg5=0;
    precoolflg1=0;
    precoolflg2=0;
    precoolflg3=0;
    precoolflg4=0;
    precoolflg5=0;
    HVACPageSelect=1;
    this->InitPageHeader();
 //   HVAC_valid_timer = 4;
}

void CHVACSettingPage::updateCtrl()  //若激活司机钥匙，则使能各模式按钮
{
    int nIDArray[] =
    {
      //ID_CHVACSET_BUTTON_CONFIRM, 11.28
      //ID_CHVACSET_BUTTON_STRONGCOLD,
      //ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      //ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
      //ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_PREWARM,// lmh add
    };
//for (int i = 0; i < 7; i++)
   for (int i = 0; i < 7; i++)
   {
       if (Bit(HVAC_command_hide,1))
       {
//         if(((CButton*)GetDlgItem(nIDArray[i]))->IsHide())
//            ((CButton*)GetDlgItem(nIDArray[i]))->ShowButton();
           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
       }
       else
       {
          //((CButton*)GetDlgItem(nIDArray[i]))->HideButton();

           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
       }
   }
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CHVACSettingPage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CHVACSettingPage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CHVACSettingPage::OnComBtn3Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS1);
        ChangePage(PAGE_INDEX_CARSTATUS4);
    }

    void CHVACSettingPage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CHVACSettingPage::OnComBtn5Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS3);
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CHVACSettingPage::OnComBtn6Clk()
    {
        //ChangePage(PAGE_INDEX_HVACSETTING);
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CHVACSettingPage::OnComBtn7Clk()
    {
         //ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CHVACSettingPage::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTINGHELP);
    }
#else
    void CHVACSettingPage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CHVACSettingPage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CHVACSettingPage::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CHVACSettingPage::OnComBtn4Clk()
    {

    }

    void CHVACSettingPage::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CHVACSettingPage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTINGHELP);
    }
#endif


void CHVACSettingPage::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CHVACSettingPage::OnCarClk()
{
    HVAC_select_color = 0;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar1Clk()
{
    HVAC_select_color = 1;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar2Clk()
{
    HVAC_select_color = 2;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar3Clk()
{
    HVAC_select_color = 3;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar4Clk()
{
    HVAC_select_color = 4;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,0);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar5Clk()
{
    HVAC_select_color = 5;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,0);
   //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}
void CHVACSettingPage::OnCar6Clk()
{
    HVAC_select_color = 6;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,0);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}
void CHVACSettingPage::OnCar7Clk()
{
    HVAC_select_color = 7;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,0);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar8Clk()
{
    HVAC_select_color = 8;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    //SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,0);
}

void CHVACSettingPage::SetLabelBkColorCar(int id, int colorVal)
{
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CHVACSettingPage::UpdateHMIActive()  //查看激活端
{
    if (TC1_HMI == 1)
    {
            //if (Bit(DI_110_1,9)  == 1)
           //if (Bit(RIOM_111_13,11)  == 1)
        if(Bit(CCU_HMI_308_9,16))//司机室激活应取CCU判断好的
            {
                HVAC_command_hide=1;// 激活按钮
            }
            else
            {
                HVAC_command_hide=0;
            }
    }
    if (TC2_HMI == 1)
    {
            //if (Bit(RIOM_141_13,11)  == 1)
           if(Bit(CCU_HMI_308_9,15))//司机是激活活应取CCU判断好的
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }
    }
    static int preHide = -1;
    if(preHide !=  Bit(HVAC_command_hide,1))
    {
        updateCtrl();
        if(Bit(HVAC_command_hide,1))
        {
//            if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->IsHide())
//                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ShowButton();
//            if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->IsHide())
//                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ShowButton();
//            if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->IsHide())
//                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->ShowButton();


                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
        }
        else
        {
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->HideButton();
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->HideButton();
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();
            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);



        }
        preHide = Bit(HVAC_command_hide,1);
    }
}

/*void CHVACSettingPage::OnSTRONGCOLDClk()
{
    WORD HMI_senddata_temp1;
    WORD HMI_senddata_temp2;
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_STRONGCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=1;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data27=HMI_send_data27&32512;
        HMI_send_data23=0x0303;//强冷
        HMI_send_data24=0x0303;//强冷
        BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
        BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
        BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
        BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
        precoolflg1=0;
        precoolflg2=0;
        precoolflg3=0;
        precoolflg4=0;
        precoolflg5=0;
        prewarmflg1=0;
        prewarmflg2=0;
        prewarmflg3=0;
        prewarmflg4=0;
        prewarmflg5=0;

        //HVAC_mode_select=12;
        BitSet( HMI_send_data41, 16, 0);//TC1预冷
        BitSet( HMI_send_data41, 15, 0);//MP1预冷
        BitSet( HMI_send_data41, 14, 0);//MP2预冷
        BitSet( HMI_send_data41, 13, 0);//TC2预冷
        BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        BitSet( HMI_send_data41, 11, 0);//MP1
        BitSet( HMI_send_data41, 10, 0);//MP2
        BitSet( HMI_send_data41, 9, 0);//TC2
        }
        if(HVAC_select_color==1)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
         HMI_send_data23=HMI_senddata_temp2|0x0003;//TC1车强冷，其余车保持不变
         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         precoolflg2=0;
         prewarmflg2=0;
         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 12, 0);//TC1预热命
        }

        if(HVAC_select_color==2)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
         HMI_send_data23=HMI_senddata_temp2|0x0300;//MP1车强冷，其余车保持不变
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         precoolflg3=0;
         prewarmflg3=0;
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 11, 0);//MP1预热命
        }

        if(HVAC_select_color==3)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
         HMI_send_data24=HMI_senddata_temp2|0x0003;//MP2车强冷，其余车保持不变
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         precoolflg4=0;
         prewarmflg4=0;
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 10, 0);//MP2预热命
        }

        if(HVAC_select_color==4)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
         HMI_send_data24=HMI_senddata_temp2|0x0300;//TC2车强冷，其余车保持不变
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg5=0;
         prewarmflg5=0;
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
         BitSet( HMI_send_data41, 19, 0);//TC2预热命
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_STRONGCOLD);

    }
}*/

//void CHVACSettingPage::OnSTRONGCOLDClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_STRONGCOLD;
//    if (HVAC_valid_timer==0)
//    {
//        //if(HVAC_select_color=0)
//        HVAC_mode_se1ect=1;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 8, 1);//强冷

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_STRONGCOLD);
//    }
//}

/*void CHVACSettingPage::OnWEAKCOLDClk()
{
    WORD HMI_senddata_temp1;
    WORD HMI_senddata_temp2;
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_WEAKCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=2;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data27=HMI_send_data27&32512;
        HMI_send_data23=0x0202;//半冷
        HMI_send_data24=0x0202;//半冷
        BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
        BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
        BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
        BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
        precoolflg1=0;
        precoolflg2=0;
        precoolflg3=0;
        precoolflg4=0;
        precoolflg5=0;
        prewarmflg1=0;
        prewarmflg2=0;
        prewarmflg3=0;
        prewarmflg4=0;
        prewarmflg5=0;

        BitSet( HMI_send_data41, 16, 0);//TC1预冷
        BitSet( HMI_send_data41, 15, 0);//MP1预冷
        BitSet( HMI_send_data41, 14, 0);//MP2预冷
        BitSet( HMI_send_data41, 13, 0);//TC2预冷
        BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        BitSet( HMI_send_data41, 11, 0);//MP1预热
        BitSet( HMI_send_data41, 10, 0);//MP2预热
        BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        if(HVAC_select_color==1)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
         HMI_send_data23=HMI_senddata_temp2|0x0002;//TC1车半冷，其余车保持不变
         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         precoolflg2=0;
         prewarmflg2=0;
         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 12, 0);//TC1预热命令

        }

        if(HVAC_select_color==2)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
         HMI_send_data23=HMI_senddata_temp2|0x0200;//MP1车半冷，其余车保持不变
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         precoolflg3=0;
         prewarmflg3=0;
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 11, 0);//MP1预热
        }

        if(HVAC_select_color==3)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
         HMI_send_data24=HMI_senddata_temp2|0x0002;//MP2车半冷，其余车保持不变
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         precoolflg4=0;
         prewarmflg4=0;
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 10, 0);//MP2预热
        }

        if(HVAC_select_color==4)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
         HMI_send_data24=HMI_senddata_temp2|0x0200;//TC2车半冷，其余车保持不变
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg5=0;
         prewarmflg5=0;
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
         BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_WEAKCOLD);


    }
}*/
//void CHVACSettingPage::OnWEAKCOLDClk()//半冷
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_WEAKCOLD;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=2;

//        BitSet( HMI_send_data28, 6, 1);
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 7, 1);

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_WEAKCOLD);
//    }
//}
void CHVACSettingPage::OnAUTOCOLDClk()//自动制冷
{
    WORD HMI_senddata_temp1;
    WORD HMI_senddata_temp2;
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=3;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位

        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data27=HMI_send_data27&32512;
        HMI_send_data23=0x0101;//自动制冷
        HMI_send_data24=0x0101;//自动制冷
        BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
        BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
        BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
        BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
        prewarmflg1=0;
        prewarmflg2=0;
        prewarmflg3=0;
        prewarmflg4=0;
        prewarmflg5=0;

        BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        BitSet( HMI_send_data41, 11, 0);//MP1预热
        BitSet( HMI_send_data41, 10, 0);//MP2预热
        BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        if(HVAC_select_color==1)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
        HMI_send_data23=HMI_senddata_temp2|0x0001;//TC1车自动制冷，其余车保持不变
        BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
        prewarmflg2=0;
        BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        }

        if(HVAC_select_color==2)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
        HMI_send_data23=HMI_senddata_temp2|0x0100;//MP1车自动制冷，其余车保持不变
        BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
        prewarmflg3=0;
        BitSet( HMI_send_data41, 11, 0);//MP1预热
        }

        if(HVAC_select_color==3)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
        HMI_send_data24=HMI_senddata_temp2|0x0001;//MP2车自动制冷，其余车保持不变
        BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
        prewarmflg4=0;
        BitSet( HMI_send_data41, 10, 0);//MP2预热
        }

        if(HVAC_select_color==4)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
        HMI_send_data24=HMI_senddata_temp2|0x0100;//TC2车自动制冷，其余车保持不变
        BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
        prewarmflg5=0;
        BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOCOLD);
    }
}

//void CHVACSettingPage::OnAUTOCOLDClk()//自动制冷
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOCOLD;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=3;

//        BitSet( HMI_send_data28, 6, 1);
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 6, 1);

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOCOLD);
//    }
//}

void CHVACSettingPage::OnPRECOOLClk()//预冷
{
    m_PressBtnID = ID_CHVACSET_BUTTON_PRECOOL;
    if(precoolflg2==1&&precoolflg3==1&&precoolflg4==1&&precoolflg5==1)
        precoolflg1=1;
    else
        precoolflg1=0;
       if((CCU_HMI_309_5%256==1)&&(CCU_HMI_309_5/256==1)&&(CCU_HMI_309_6%256==1)&&(CCU_HMI_309_6/256==1)&&(HVAC_select_color==0))
    //if((HVAC_A11_3/256==1)&&(HVAC_A21_3/256==1)&&(HVAC_A31_3/256==1)&&(HVAC_A41_3/256==1)&&(HVAC_select_color==0))

    {
           precoolflg1=precoolflg1+1;
                if(precoolflg1%2==1)
                 {
                 //HMI_send_data41=HMI_send_data41&0Xf000;
                  ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_STATION);
                  //HVAC_mode_select=4;
                  BitSet( HMI_send_data41, 16, 1);//TC1预冷
                  BitSet( HMI_send_data41, 15, 1);//MP1预冷
                  BitSet( HMI_send_data41, 14, 1);//MP2预冷
                  BitSet( HMI_send_data41, 13, 1);//TC1预冷
                  BitSet( HMI_send_data41, 12, 0);//TC1预热命令 与自动冷重复
                  BitSet( HMI_send_data41, 11, 0);//MP1预热
                  BitSet( HMI_send_data41, 10, 0);//MP2预热
                  BitSet( HMI_send_data41, 9, 0);//TC2预热
                  prewarmflg1=0;
                  precoolflg2=1;
                  precoolflg3=1;
                  precoolflg4=1;
                  precoolflg5=1;
                 }
                else
                {
                    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
                    //HVAC_mode_select=12;
                    BitSet( HMI_send_data41, 16, 0);//TC1预冷
                    BitSet( HMI_send_data41, 15, 0);//MP1预冷
                    BitSet( HMI_send_data41, 14, 0);//MP2预冷
                    BitSet( HMI_send_data41, 13, 0);//TC1预冷
                    precoolflg1=0;
                    precoolflg2=0;//12.5
                    precoolflg3=0;
                    precoolflg4=0;
                    precoolflg5=0;
                }
            }
         else if((CCU_HMI_309_5%256==1)&&(HVAC_select_color==1))
      //else if((HVAC_A11_3/256==1)&&(HVAC_select_color==1))
       {   precoolflg2=precoolflg2+1;
             if(precoolflg2%2==1)
             {
                 ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_STATION);
                 //HVAC_mode_select=4;
                 BitSet( HMI_send_data41, 16, 1);//TC1预冷
                 BitSet( HMI_send_data41, 12, 0);//TC1预热命令
                 prewarmflg2=0;
             }
             else
             {
                 //HMI_send_data41=HMI_send_data41&32512;
                 ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
                 //HVAC_mode_select=12;
                 BitSet( HMI_send_data41, 16, 0);//TC1预冷
                 precoolflg2=0;
             }
         }
         else if((CCU_HMI_309_5/256==1)&&(HVAC_select_color==2))
         //else if((HVAC_A21_3/256==1)&&(HVAC_select_color==2))
         {   precoolflg3=precoolflg3+1;
             if(precoolflg3%2==1)
             {
            //HMI_send_data41=HMI_send_data41&32512;
                 ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_STATION);
                 //HVAC_mode_select=4;
                 BitSet( HMI_send_data41, 15, 1);//MP1预冷
                 BitSet( HMI_send_data41, 11, 0);//MP1预热
                 prewarmflg3=0;
             }
             else
             {
                 //HMI_send_data41=HMI_send_data41&32512;
                 ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
                 //HVAC_mode_select=12;
                 BitSet( HMI_send_data41, 15, 0);//MP1预冷
                 precoolflg3=0;
             }

         }
          else if((CCU_HMI_309_6%256==1)&&(HVAC_select_color==3))
         //else if((HVAC_A31_3/256==1)&&(HVAC_select_color==3))
         {   precoolflg4=precoolflg4+1;
            if(precoolflg4%2==1)
            {
                //HMI_send_data41=HMI_send_data41&32512;
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_STATION);
                //HVAC_mode_select=4;
                BitSet( HMI_send_data41, 14, 1);//MP2预冷
                BitSet( HMI_send_data41, 10, 0);//MP2预热
                prewarmflg4=0;
            }
            else
            {
                //HMI_send_data41=HMI_send_data41&32512;
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
                //HVAC_mode_select=12;
                BitSet( HMI_send_data41, 14, 0);//mp21预冷
                precoolflg4=0;
            }

        }
        else if((CCU_HMI_309_6/256==1)&&(HVAC_select_color==4))//当有制冷却未选中的无效情况是将保持原样
         //else if((HVAC_A41_3/256==1)&&(HVAC_select_color==4))//当有制冷却未选中的无效情况是将保持原样
        {   precoolflg5=precoolflg5+1;
            if(precoolflg5%2==1)
            {
                //HMI_send_data41=HMI_send_data41&32512;
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_STATION);
                //HVAC_mode_select=4;
                BitSet( HMI_send_data41, 13, 1);//TC2预冷
                BitSet( HMI_send_data41, 9, 0);//TC2预热
                prewarmflg5=0;
            }
            else
            {
                //HMI_send_data41=HMI_send_data41&32512;
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
                //HVAC_mode_select=12;
                BitSet( HMI_send_data41, 13, 0);//TC2预冷
                precoolflg5=0;
            }
        }

SetCtrlButtonState(ID_CHVACSET_BUTTON_PRECOOL);

}
//void CHVACSettingPage::OnPRECOOLClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_PRECOOL;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=4;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 5, 1);//

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_PRECOOL);

//    }
//}
void CHVACSettingPage::OnAMERGEWINDClk()
{

    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AMERGEWIND;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=6;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data23=HMI_send_data23&32512;
        //HMI_send_data24=HMI_send_data24&32512;
         HMI_send_data23=0;
         HMI_send_data24=0;
         BitSet( HMI_send_data23, 2, 1);
         BitSet( HMI_send_data23, 4, 1);//TC1紧急通风
         BitSet( HMI_send_data23, 10, 1);
         BitSet( HMI_send_data23, 12, 1);//MP1紧急通风
         BitSet( HMI_send_data24, 2, 1);//MP2紧急通风
         BitSet( HMI_send_data24, 4, 1);//MP2紧急通风
         BitSet( HMI_send_data24, 10, 1);//TC2紧急通风
         BitSet( HMI_send_data24, 12, 1);//TC2紧急通风

         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg1=0;
         precoolflg2=0;
         precoolflg3=0;
         precoolflg4=0;
         precoolflg5=0;
         prewarmflg1=0;
         prewarmflg2=0;
         prewarmflg3=0;
         prewarmflg4=0;
         prewarmflg5=0;

         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
         BitSet( HMI_send_data41, 12, 0);//TC1预热命令
         BitSet( HMI_send_data41, 11, 0);//MP1预热
         BitSet( HMI_send_data41, 10, 0);//MP2预热
         BitSet( HMI_send_data41, 9, 0);//TC2预热

        }
        if(HVAC_select_color==1)
        {
            HMI_send_data23=0;
             BitSet( HMI_send_data23, 2, 1);
             BitSet( HMI_send_data23, 4, 1);//TC1紧急通风
           BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
           precoolflg2=0;
           prewarmflg2=0;
           BitSet( HMI_send_data41, 16, 0);//TC1预冷
           BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        }

        if(HVAC_select_color==2)
        {
            HMI_send_data23=0;
            //HMI_send_data24=HMI_send_data24&32512;

             BitSet( HMI_send_data23, 10, 1);
             BitSet( HMI_send_data23, 12, 1);//MP1紧急通风
             BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
             precoolflg3=0;
             prewarmflg3=0;
             BitSet( HMI_send_data41, 15, 0);//MP1预冷
             BitSet( HMI_send_data41, 11, 0);//MP1预热
        }

        if(HVAC_select_color==3)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;

             BitSet( HMI_send_data24, 2, 1);//MP2紧急通风
             BitSet( HMI_send_data24, 4, 1);//MP2紧急通风
             BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
             precoolflg4=0;
             prewarmflg4=0;
             BitSet( HMI_send_data41, 14, 0);//MP2预冷
             BitSet( HMI_send_data41, 10, 0);//MP2预热
        }

        if(HVAC_select_color==4)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;

             BitSet( HMI_send_data24, 10, 1);//TC2紧急通风
             BitSet( HMI_send_data24, 12, 1);//TC2紧急通风
             BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
             precoolflg5=0;
             prewarmflg5=0;
             BitSet( HMI_send_data41, 13, 0);//TC2预冷
             BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AMERGEWIND);

    }
}

//void CHVACSettingPage::OnAMERGEWINDClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_AMERGEWIND;
//    {
//        HVAC_mode_se1ect=6;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 4, 1);//空调模式
//        SetCtrlButtonState(ID_CHVACSET_BUTTON_AMERGEWIND);
////        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->ChangeButtonState(LBUTTON_UP);

//    }

//}
// lmh add
/*void CHVACSettingPage::OnFULLWARMClk()
{

    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_FULLWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=7;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data23=HMI_send_data23&32512;
        //HMI_send_data24=HMI_send_data24&32512;
         HMI_send_data23=0;
         HMI_send_data24=0;
         BitSet( HMI_send_data23, 1, 1);
         BitSet( HMI_send_data23, 2, 1);
         BitSet( HMI_send_data23, 3, 1);//TC1全暖
         BitSet( HMI_send_data23, 9, 1);
         BitSet( HMI_send_data23, 10, 1);
         BitSet( HMI_send_data23, 11, 1);//MP1全暖
         BitSet( HMI_send_data24, 1, 1);
         BitSet( HMI_send_data24, 2, 1);//MP2全暖
         BitSet( HMI_send_data24, 3, 1);//MP2全暖
         BitSet( HMI_send_data24, 9, 1);
         BitSet( HMI_send_data24, 10, 1);//TC2全暖
         BitSet( HMI_send_data24, 11, 1);//TC2全暖

         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg1=0;
         precoolflg2=0;
         precoolflg3=0;
         precoolflg4=0;
         precoolflg5=0;
         prewarmflg1=0;
         prewarmflg2=0;
         prewarmflg3=0;
         prewarmflg4=0;
         prewarmflg5=0;

         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
         BitSet( HMI_send_data41, 12, 0);//TC1预热命令
         BitSet( HMI_send_data41, 11, 0);//MP1预热
         BitSet( HMI_send_data41, 10, 0);//MP2预热
         BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        if(HVAC_select_color==1)
        {
            HMI_send_data23=0;
             BitSet( HMI_send_data23, 1, 1);
             BitSet( HMI_send_data23, 2, 1);
             BitSet( HMI_send_data23, 3, 1);//TC1全暖
             BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
             precoolflg2=0;
             prewarmflg2=0;
             BitSet( HMI_send_data41, 16, 0);//TC1预冷
             BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        }

        if(HVAC_select_color==2)
        {
            HMI_send_data23=0;
            //HMI_send_data24=HMI_send_data24&32512;
             BitSet( HMI_send_data23, 9, 1);
             BitSet( HMI_send_data23, 10, 1);
             BitSet( HMI_send_data23, 11, 1);//MP1全暖
             BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
             precoolflg3=0;
             prewarmflg3=0;
             BitSet( HMI_send_data41, 15, 0);//MP1预冷
             BitSet( HMI_send_data41, 11, 0);//MP1预热
        }

        if(HVAC_select_color==3)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;
             BitSet( HMI_send_data24, 1, 1);
             BitSet( HMI_send_data24, 2, 1);//MP2全暖
             BitSet( HMI_send_data24, 3, 1);//MP2全暖
             BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
             precoolflg4=0;
             prewarmflg4=0;
             BitSet( HMI_send_data41, 14, 0);//MP2预冷
             BitSet( HMI_send_data41, 10, 0);//MP2预热
        }

        if(HVAC_select_color==4)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;
             BitSet( HMI_send_data24, 9, 1);
             BitSet( HMI_send_data24, 10, 1);//TC2全暖
             BitSet( HMI_send_data24, 11, 1);//TC2全暖
             BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
             precoolflg5=0;
             prewarmflg5=0;
             BitSet( HMI_send_data41, 13, 0);//TC2预冷
             BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_FULLWARM);

    }
}*/
//void CHVACSettingPage::OnFULLWARMClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_FULLWARM;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=7;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 16, 1);//紧急通风测试

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_FULLWARM);
//    }

//}
/*void CHVACSettingPage::OnHALFWARMClk()
{

    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_HALFWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=5;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        HMI_send_data23=0;
        HMI_send_data24=0;
         BitSet( HMI_send_data23, 2, 1);
         BitSet( HMI_send_data23, 3, 1);//TC1半暖
         BitSet( HMI_send_data23, 10, 1);
         BitSet( HMI_send_data23, 11, 1);//MP1半暖
         BitSet( HMI_send_data24, 2, 1);//MP2半暖
         BitSet( HMI_send_data24, 3, 1);//MP2半暖
         BitSet( HMI_send_data24, 10, 1);//TC2半暖
         BitSet( HMI_send_data24, 11, 1);//TC2半暖

         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg1=0;
         precoolflg2=0;
         precoolflg3=0;
         precoolflg4=0;
         precoolflg5=0;
         prewarmflg1=0;
         prewarmflg2=0;
         prewarmflg3=0;
         prewarmflg4=0;
         prewarmflg5=0;

         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
         BitSet( HMI_send_data41, 12, 0);//TC1预热命令
         BitSet( HMI_send_data41, 11, 0);//MP1预热
         BitSet( HMI_send_data41, 10, 0);//MP2预热
         BitSet( HMI_send_data41, 9, 0);//TC2预热

        }
        if(HVAC_select_color==1)
        {
            HMI_send_data23=0;

             BitSet( HMI_send_data23, 2, 1);
             BitSet( HMI_send_data23, 3, 1);//TC1半暖
             BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
             precoolflg2=0;
             prewarmflg2=0;
             BitSet( HMI_send_data41, 16, 0);//TC1预冷
             BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        }

        if(HVAC_select_color==2)
        {
            HMI_send_data23=0;
            //HMI_send_data24=HMI_send_data24&32512;

             BitSet( HMI_send_data23, 10, 1);
             BitSet( HMI_send_data23, 11, 1);//MP1半暖
             BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
             precoolflg3=0;
             prewarmflg3=0;
             BitSet( HMI_send_data41, 15, 0);//MP1预冷
             BitSet( HMI_send_data41, 11, 0);//MP1预热
        }

        if(HVAC_select_color==3)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;

             BitSet( HMI_send_data24, 2, 1);//MP2半暖
             BitSet( HMI_send_data24, 3, 1);//MP2半暖
             BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
             precoolflg4=0;
             prewarmflg4=0;
             BitSet( HMI_send_data41, 14, 0);//MP2预冷
             BitSet( HMI_send_data41, 10, 0);//MP2预热
        }

        if(HVAC_select_color==4)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;

             BitSet( HMI_send_data24, 10, 1);//TC2半暖
             BitSet( HMI_send_data24, 11, 1);//TC2半暖
             BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
             precoolflg5=0;
             prewarmflg5=0;
             BitSet( HMI_send_data41, 13, 0);//TC2预冷
             BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_HALFWARM);

    }
}*/
//void CHVACSettingPage::OnHALFWARMClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_HALFWARM;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=5;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 16, 1);//紧急通风测试

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_HALFWARM);
//    }

//}

void CHVACSettingPage::OnAUTOWARMClk()
{

    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=10;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data23=HMI_send_data23&32512;
        //HMI_send_data24=HMI_send_data24&32512;
         HMI_send_data23=0;
         HMI_send_data24=0;
         BitSet( HMI_send_data23, 1, 1);
         BitSet( HMI_send_data23, 3, 1);//TC1自动暖
         BitSet( HMI_send_data23, 9, 1);
         BitSet( HMI_send_data23, 11, 1);//MP1自动暖
         BitSet( HMI_send_data24, 1, 1);//MP2自动暖
         BitSet( HMI_send_data24, 3, 1);//MP2自动暖
         BitSet( HMI_send_data24, 9, 1);//TC2自动暖
         BitSet( HMI_send_data24, 11, 1);//TC2自动暖

         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg1=0;
         precoolflg2=0;
         precoolflg3=0;
         precoolflg4=0;
         precoolflg5=0;
         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
        }
        if(HVAC_select_color==1)
        {
            //HMI_send_data23=HMI_send_data23&32512;
             HMI_send_data23=0;
             BitSet( HMI_send_data23, 1, 1);
             BitSet( HMI_send_data23, 3, 1);//TC1自动暖
             BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
             precoolflg2=0;
             BitSet( HMI_send_data41, 16, 0);//TC1预冷
        }

        if(HVAC_select_color==2)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            //HMI_send_data24=HMI_send_data24&32512;
             HMI_send_data23=0;
             BitSet( HMI_send_data23, 9, 1);
             BitSet( HMI_send_data23, 11, 1);//MP1自动暖
             BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
             precoolflg3=0;
             BitSet( HMI_send_data41, 15, 0);//MP1预冷
        }

        if(HVAC_select_color==3)
        {
            //HMI_send_data23=HMI_send_data23&32512;
             HMI_send_data24=0;
             BitSet( HMI_send_data24, 1, 1);//MP2自动暖
             BitSet( HMI_send_data24, 3, 1);//MP2自动暖
             BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
             precoolflg4=0;
             BitSet( HMI_send_data41, 14, 0);//MP2预冷
        }

        if(HVAC_select_color==4)
        {
            //HMI_send_data23=HMI_send_data23&32512;
             HMI_send_data24=0;
             BitSet( HMI_send_data24, 9, 1);//TC2自动暖
             BitSet( HMI_send_data24, 11, 1);//TC2自动暖
             BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
             precoolflg5=0;
             BitSet( HMI_send_data41, 13, 0);//TC2预冷
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOWARM);
    }
}
//void CHVACSettingPage::OnAUTOWARMClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOWARM;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=10;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 16, 1);//紧急通风测试

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOWARM);
//    }
//}
void CHVACSettingPage::OnWINDClk()
{

    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_WIND;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=8;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        HMI_send_data23=0;
        HMI_send_data24=0;
         BitSet( HMI_send_data23, 1, 1);
         BitSet( HMI_send_data23, 4, 1);//TC1通风
         BitSet( HMI_send_data23, 9, 1);
         BitSet( HMI_send_data23, 12, 1);//MP1通风
         BitSet( HMI_send_data24, 1, 1);//MP2通风
         BitSet( HMI_send_data24, 4, 1);//MP2通风
         BitSet( HMI_send_data24, 9, 1);//TC2通风
         BitSet( HMI_send_data24, 12, 1);//TC2通风

         BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
         BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
         BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
         BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
         precoolflg1=0;
         precoolflg2=0;
         precoolflg3=0;
         precoolflg4=0;
         precoolflg5=0;
         prewarmflg1=0;
         prewarmflg2=0;
         prewarmflg3=0;
         prewarmflg4=0;
         prewarmflg5=0;

         BitSet( HMI_send_data41, 16, 0);//TC1预冷
         BitSet( HMI_send_data41, 15, 0);//MP1预冷
         BitSet( HMI_send_data41, 14, 0);//MP2预冷
         BitSet( HMI_send_data41, 13, 0);//TC2预冷
         BitSet( HMI_send_data41, 12, 0);//TC1预热命令
         BitSet( HMI_send_data41, 11, 0);//MP1预热
         BitSet( HMI_send_data41, 10, 0);//MP2预热
         BitSet( HMI_send_data41, 9, 0);//TC2预热

        }
        if(HVAC_select_color==1)
        {
            HMI_send_data23=0;

             BitSet( HMI_send_data23, 1, 1);
             BitSet( HMI_send_data23, 4, 1);//TC1通风
             BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
             precoolflg2=0;
             prewarmflg2=0;
             BitSet( HMI_send_data41, 16, 0);//TC1预冷
             BitSet( HMI_send_data41, 12, 0);//TC1预热
        }

        if(HVAC_select_color==2)
        {
            HMI_send_data23=0;
            //HMI_send_data24=HMI_send_data24&32512;

             BitSet( HMI_send_data23, 9, 1);
             BitSet( HMI_send_data23, 12, 1);//MP1通风
             BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
             precoolflg3=0;
             prewarmflg3=0;
             BitSet( HMI_send_data41, 15, 0);//MP1预冷
             BitSet( HMI_send_data41, 11, 0);//MP1预热

        }

        if(HVAC_select_color==3)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;

             BitSet( HMI_send_data24, 1, 1);//MP2通风
             BitSet( HMI_send_data24, 4, 1);//MP2通风
             BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
             precoolflg4=0;
             prewarmflg4=0;
             BitSet( HMI_send_data41, 14, 0);//MP2预冷
             BitSet( HMI_send_data41, 10, 0);//MP2预热

        }

        if(HVAC_select_color==4)
        {
            //HMI_send_data23=HMI_send_data23&32512;
            HMI_send_data24=0;

             BitSet( HMI_send_data24, 9, 1);//TC2通风
             BitSet( HMI_send_data24, 12, 1);//TC2通风
             BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
             precoolflg5=0;
             prewarmflg5=0;
             BitSet( HMI_send_data41, 13, 0);//TC2预冷
             BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_WIND);

    }
}

void CHVACSettingPage::OnSTOPClk()
{
    WORD HMI_senddata_temp1;
    WORD HMI_senddata_temp2;
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_STOP;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_select=9;
        //BitSet( HMI_send_data28, 6, 1);//命令标志位
        //BitSet( HMI_send_data32, 5, 1);//命令标志位
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PRECOOL))->SetButtonType(BUTTON_NORMAL);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
        HVAC_valid_timer=4;
        if(HVAC_select_color==0)
        {
        //HMI_send_data27=HMI_send_data27&32512;
        HMI_send_data23=0x0000;//停止
        HMI_send_data24=0x0000;//停止
        BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
        BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
        BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
        BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
        precoolflg1=0;
        precoolflg2=0;
        precoolflg3=0;
        precoolflg4=0;
        precoolflg5=0;
        prewarmflg1=0;
        prewarmflg2=0;
        prewarmflg3=0;
        prewarmflg4=0;
        prewarmflg5=0;

        BitSet( HMI_send_data41, 16, 0);//TC1预冷
        BitSet( HMI_send_data41, 15, 0);//MP1预冷
        BitSet( HMI_send_data41, 14, 0);//MP2预冷
        BitSet( HMI_send_data41, 13, 0);//TC2预冷
        BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        BitSet( HMI_send_data41, 11, 0);//MP1预热
        BitSet( HMI_send_data41, 10, 0);//MP2预热
        BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        if(HVAC_select_color==1)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
        HMI_send_data23=HMI_senddata_temp2|0x0000;//TC1车停止，其余车保持不变
       BitSet( HMI_send_data31, 12, 1);//TC1车空调模式命令标志位
       precoolflg2=0;
       prewarmflg2=0;
       BitSet( HMI_send_data41, 16, 0);//TC1预冷
       BitSet( HMI_send_data41, 12, 0);//TC1预热命令
        }

        if(HVAC_select_color==2)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data23;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
        HMI_send_data23=HMI_senddata_temp2|0x0000;//MP1车停止，其余车保持不变
        BitSet( HMI_send_data31, 11, 1);//MP1车空调模式命令标志位
        precoolflg3=0;
        prewarmflg3=0;
        BitSet( HMI_send_data41, 15, 0);//MP1预冷
        BitSet( HMI_send_data41, 11, 0);//MP1预热
        }

        if(HVAC_select_color==3)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0xff00;
        HMI_send_data24=HMI_senddata_temp2|0x0000;//MP2车停止，其余车保持不变
        BitSet( HMI_send_data31, 10, 1);//MP2车空调模式命令标志位
        precoolflg4=0;
        prewarmflg4=0;
        BitSet( HMI_send_data41, 14, 0);//MP2预冷
        BitSet( HMI_send_data41, 10, 0);//MP2预热
        }

        if(HVAC_select_color==4)
        {
        //HMI_send_data27=HMI_send_data27&32512;
         HMI_senddata_temp1=HMI_send_data24;
         HMI_senddata_temp2= HMI_senddata_temp1&0x00ff;
        HMI_send_data24=HMI_senddata_temp2|0x0000;//TC2车停止，其余车保持不变
        BitSet( HMI_send_data31, 9, 1);//TC2车空调模式命令标志位
        precoolflg5=0;
        prewarmflg5=0;
        BitSet( HMI_send_data41, 13, 0);//TC2预冷
        BitSet( HMI_send_data41, 9, 0);//TC2预热
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_STOP);
    }
}

//void CHVACSettingPage::OnSTOPClk()
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_STOP;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=9;

//        BitSet( HMI_send_data28, 6, 1);
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 1, 1);

//        SetCtrlButtonState(ID_CHVACSET_BUTTON_STOP);
//    }
//}

void CHVACSettingPage::OnPREWARMClk()// lmh add
{
    m_PressBtnID = ID_CHVACSET_BUTTON_PREWARM;
    if(prewarmflg2==1&&prewarmflg3==1&&prewarmflg4==1&&prewarmflg5==1)
        prewarmflg1=1;
    else
        prewarmflg1=0;
    if((CCU_HMI_309_5%256==5)&&(CCU_HMI_309_5/256==5)&&(CCU_HMI_309_6%256==5)&&(CCU_HMI_309_6/256==5)&&(HVAC_select_color==0))
    //if((HVAC_A11_3/256==5)&&(HVAC_A21_3/256==5)&&(HVAC_A31_3/256==5)&&(HVAC_A41_3/256==5)&&(HVAC_select_color==0))
    {
        prewarmflg1=prewarmflg1+1;
        if(prewarmflg1%2==1)
             {
               //HMI_send_data41=HMI_send_data41&32512;
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_STATION);
                //HVAC_mode_select=11;
                BitSet( HMI_send_data41, 12, 1);//TC1预热命令
                BitSet( HMI_send_data41, 11, 1);//MP1
                BitSet( HMI_send_data41, 10, 1);//MP2
                BitSet( HMI_send_data41, 9, 1);//TC2
                BitSet( HMI_send_data41, 16, 0);//TC1预冷
                BitSet( HMI_send_data41, 15, 0);//MP1预冷
                BitSet( HMI_send_data41, 14, 0);//MP2预冷
                BitSet( HMI_send_data41, 13, 0);//TC2预冷
                precoolflg1=0;
                prewarmflg2=1;//全车与分节车的交叠
                prewarmflg3=1;
                prewarmflg4=1;
                prewarmflg5=1;
               }
               else
               {
                   ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
                   BitSet( HMI_send_data41, 12, 0);//TC1预热命令
                   BitSet( HMI_send_data41, 11, 0);//MP1
                   BitSet( HMI_send_data41, 10, 0);//MP2
                   BitSet( HMI_send_data41, 9, 0);//TC2
                   prewarmflg1=0;
                   prewarmflg2=0;//12.5
                   prewarmflg3=0;
                   prewarmflg4=0;
                   prewarmflg5=0;
               }
      }

      else if((CCU_HMI_309_5%256==5)&&(HVAC_select_color==1))
      //else if((HVAC_A11_3/256==5)&&(HVAC_select_color==1))
      {
          prewarmflg2=prewarmflg2+1;
        {
               if(prewarmflg2%2==1)
               {
                   //HMI_send_data41=HMI_send_data41&32512;
                   ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_STATION);
                    //HVAC_mode_select=11;
                    BitSet( HMI_send_data41, 12, 1);//TC1预热
                    BitSet( HMI_send_data41, 16, 0);//TC1预冷 与自动暖重复
                    precoolflg2=0;//多余的，因为在设成自动暖时已清零了
               }
               else
               {
                   ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
                   BitSet( HMI_send_data41, 12, 0);//TC1预热命令
                   prewarmflg2=0;

               }
         }
      }

        else if((CCU_HMI_309_5/256==5)&&(HVAC_select_color==2))
      //else if((HVAC_A21_3/256==5)&&(HVAC_select_color==2))
      {
             prewarmflg3=prewarmflg3+1;
             if(prewarmflg3%2==1)
             {
                 //HMI_send_data41=HMI_send_data41&32512;
                 ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_STATION);
                  //HVAC_mode_select=11;
                  BitSet( HMI_send_data41, 11, 1);//MP1预热
                  BitSet( HMI_send_data41, 15, 0);//MP1预冷
                  precoolflg3=0;
             }
             else
             {
                 ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
                 BitSet( HMI_send_data41, 11, 0);//MP1预热命令
                 prewarmflg3=0;

             }
         }
        else if((CCU_HMI_309_6%256==5)&&(HVAC_select_color==3))
        //else if((HVAC_A31_3/256==5)&&(HVAC_select_color==3))
         { prewarmflg4=prewarmflg4+1;
            if(prewarmflg4%2==1)
            {
                //HMI_send_data41=HMI_send_data41&32512;
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_STATION);
                //HVAC_mode_select=11;
                 BitSet( HMI_send_data41, 10, 1);//MP2预热
                 BitSet( HMI_send_data41, 14, 0);//MP2预冷
                 precoolflg4=0;
            }
            else
            {
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
                BitSet( HMI_send_data41, 10, 0);//MP2预热命令
                prewarmflg4=0;

            }
        }
          else if((CCU_HMI_309_6/256==5)&&(HVAC_select_color==4))
        //else if((HVAC_A41_3/256==5)&&(HVAC_select_color==4))
        {
              prewarmflg5=prewarmflg5+1;
          if(prewarmflg5%2==1)
          {
              //HMI_send_data41=HMI_send_data41&32512;
              ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_STATION);
              //HVAC_mode_select=11;
               BitSet( HMI_send_data41, 9, 1);//TC2预热
               BitSet( HMI_send_data41, 13, 0);//TC2预冷
               precoolflg5=0;

          }
          else
          {
              ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PREWARM))->SetButtonType(BUTTON_NORMAL);
              BitSet( HMI_send_data41, 9, 0);//TC2预热命令
              prewarmflg5=0;

          }
      }

        SetCtrlButtonState(ID_CHVACSET_BUTTON_PREWARM);
}
//lmh add
//void CHVACSettingPage::OnPREWARMClk()// lmh add
//{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_PREWARM;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_mode_se1ect=11;
//        BitSet( HMI_send_data28, 6, 1);//命令标志位
//        HVAC_valid_timer=4;
//        HMI_send_data27=HMI_send_data27&32512;
//        BitSet( HMI_send_data27, 5, 1);//


//        SetCtrlButtonState(ID_CHVACSET_BUTTON_PREWARM);// lmh add
//    }
//}

void CHVACSettingPage::OnThempDownClk()
{
    //if (Bit(CCU_HMI_221_16,11))HEAT
     if ((CCU_HMI_309_5%256==5)||(CCU_HMI_309_5/256==5)||(CCU_HMI_309_6%256==5)||(CCU_HMI_309_6/256==5))//制热
    //if ((HVAC_A11_3/256==5)||(HVAC_A21_3/256==5)||(HVAC_A31_3/256==5)||(HVAC_A41_3/256==5))//制热
    {
        if (setting_temp2 > 12)
        {
            setting_temp2 -= 1;
        }
    }
    //if (Bit(CCU_HMI_221_16,14))COLD
    if ((CCU_HMI_309_5%256==1)||(CCU_HMI_309_5/256==1)||(CCU_HMI_309_6%256==1)||(CCU_HMI_309_6/256==1))//制冷
      //if ((HVAC_A11_3/256==1)||(HVAC_A21_3/256==1)||(HVAC_A31_3/256==1)||(HVAC_A41_3/256==1))//制冷
    {
        if (setting_temp > 19)
        {
            setting_temp -= 1;
        }
    }
}

void CHVACSettingPage::OnThempUpClk()
{
    //if (Bit(CCU_HMI_221_16,11))
    if ((CCU_HMI_309_5%256==5)||(CCU_HMI_309_5/256==5)||(CCU_HMI_309_6%256==5)||(CCU_HMI_309_6/256==5))//制热
    //if ((HVAC_A11_3/256==5)||(HVAC_A21_3/256==5)||(HVAC_A31_3/256==5)||(HVAC_A41_3/256==5))//制热
    {
        if (setting_temp2 < 20)
        {
            setting_temp2 += 1;// heat
        }
    }
    //if (Bit(CCU_HMI_221_16,14))
    if ((CCU_HMI_309_5%256==1)||(CCU_HMI_309_5/256==1)||(CCU_HMI_309_6%256==1)||(CCU_HMI_309_6/256==1))//制冷
    //if ((HVAC_A11_3/256==1)||(HVAC_A21_3/256==1)||(HVAC_A31_3/256==1)||(HVAC_A41_3/256==1))//制冷
    {
      if (setting_temp < 28)
      {
        setting_temp += 1; //cold
      }
    }
}

void CHVACSettingPage::OnConfirmClk()
{


    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_CONFIRM;
    if (HVAC_valid_timer==0)
    {

        HVAC_button_color=1;
        HVAC_valid_timer=4;
        if (HVAC_select_color==0)
        {

            if (((CCU_HMI_309_5%256==5)&&(CCU_HMI_309_5/256==5)&&(CCU_HMI_309_6%256==5)&&(CCU_HMI_309_6/256==5))==1)//制热
            //if ((HVAC_A11_3/256==5)||(HVAC_A21_3/256==5)||(HVAC_A31_3/256==5)||(HVAC_A41_3/256==5))//制热
            {
//                  HMI_send_data17=setting_temp2;
//                  HMI_send_data18=setting_temp2;
//                  HMI_send_data19=setting_temp2;
//                  HMI_send_data20=setting_temp2;
//                  HMI_send_data21=setting_temp2;
//                  HMI_send_data22=setting_temp2;
//                  HMI_send_data23=setting_temp2;
//                  HMI_send_data24=setting_temp2;

                HMI_send_data25=(setting_temp2*256)+(setting_temp2);
                HMI_send_data26=(setting_temp2*256)+(setting_temp2);
                BitSet( HMI_send_data32, 8, 1);//TC1空调温度保存命令标志位
                BitSet( HMI_send_data32, 7, 1);//MP1空调温度保存命令标志位
                BitSet( HMI_send_data32, 6, 1);//MP2空调温度保存命令标志位
                BitSet( HMI_send_data32, 5, 1);//TC2空调温度保存命令标志位
            }
            if (((CCU_HMI_309_5%256==1)&&(CCU_HMI_309_5/256==1)&&(CCU_HMI_309_6%256==1)&&(CCU_HMI_309_6/256==1))==1)//制冷
            //if ((HVAC_A11_3/256==1)||(HVAC_A21_3/256==1)||(HVAC_A31_3/256==1)||(HVAC_A41_3/256==1))//制冷
            {
//                HMI_send_data17=setting_temp*10;
//                HMI_send_data18=setting_temp*10;
//                HMI_send_data19=setting_temp*10;
//                HMI_send_data20=setting_temp*10;
//                HMI_send_data21=setting_temp*10;
//                HMI_send_data22=setting_temp*10;
//                HMI_send_data23=setting_temp*10;
//                HMI_send_data24=setting_temp*10;

                HMI_send_data25=(setting_temp*256)+(setting_temp);
                HMI_send_data26=(setting_temp*256)+(setting_temp);
                BitSet( HMI_send_data32, 8, 1);//TC1空调温度保存命令标志位
                BitSet( HMI_send_data32, 7, 1);//MP1空调温度保存命令标志位
                BitSet( HMI_send_data32, 6, 1);//MP2空调温度保存命令标志位
                BitSet( HMI_send_data32, 5, 1);//TC2空调温度保存命令标志位
            }
        }
    else
        {
         if (HVAC_select_color==1)
           {
                if (CCU_HMI_309_5%256 ==5)//制热(原先均是取自CCU，现取HVAC反馈回来的)
               //if (HVAC_A11_3/256 ==5)//制热
                {
                    HMI_send_data25=(HVAC_A21_5*256)+(setting_temp2);
                    //HMI_send_data25=((HVAC_A21_5&0x00FF)<<8)+(setting_temp2);
                    BitSet( HMI_send_data32, 8, 1);//TC1空调温度保存命令标志位
                }
                if (CCU_HMI_309_5%256 ==1)//制冷
                //if (HVAC_A11_3/256 ==1)//制冷
                {
                    //HMI_send_data25=((HVAC_A21_5&0x00FF)<<8)+(setting_temp);
                    HMI_send_data25=(HVAC_A21_5*256)+(setting_temp);
                    BitSet( HMI_send_data32, 8, 1);//TC1空调温度保存命令标志位
                }
            }
          else if (HVAC_select_color==2)
            {
                 if(CCU_HMI_309_5/256==5)//制热
                //if (HVAC_A21_3/256 ==5)//制热
                {
                      HMI_send_data25=(setting_temp2*256)+(HVAC_A11_5&0x00FF);
                      BitSet( HMI_send_data32, 7, 1);//MP1空调温度保存命令标志位
                }
                //if (HVAC_A21_3/256 ==1)//制冷
                 if (CCU_HMI_309_5/256==1)//制冷
                {
                      HMI_send_data25=(setting_temp*256)+(HVAC_A11_5&0x00FF);
                      BitSet( HMI_send_data32, 7, 1);//MP1空调温度保存命令标志位
                }
            }
            else
            {
                HMI_send_data25 = (HVAC_A21_5*256)+(HVAC_A11_5&0x00FF);//发送原来的上一次的,可删除
            }



        if (HVAC_select_color==3)
            {
              BitSet( HMI_send_data32, 6, 1);//MP1空调温度保存命令标志位
                //if (HVAC_A31_3/256 ==5)//制热
              if (CCU_HMI_309_6%256==5)//制热
                {
                      HMI_send_data26=(HVAC_A41_5*256)+(setting_temp2);
                }
                //if (HVAC_A31_3/256 ==1)//制冷
              if(CCU_HMI_309_6%256==1)//制冷
                {
                      HMI_send_data26=(HVAC_A41_5*256)+(setting_temp);
                }
            }
       else if (HVAC_select_color==4)
            {
              BitSet( HMI_send_data32, 5, 1);//MP1空调温度保存命令标志位
                //if (HVAC_A41_3/256 ==5)//制热
              if (CCU_HMI_309_6/256==5)//制热
                {
                      HMI_send_data26=(setting_temp2*256)+(HVAC_A31_5&0x00FF);
                }
                //if (HVAC_A41_3/256 ==1)//制冷
              if (CCU_HMI_309_6/256==1)//制冷
                {
                      HMI_send_data26=(setting_temp*256)+(HVAC_A31_5&0x00FF);
                }
            }
            else
            {
                //HMI_send_data26 = (HVAC_A31_5%256)<<8;//发送原来的上一次的
                HMI_send_data26 = (HVAC_A41_5&0xff00)+(HVAC_A31_5&0x00ff);//发送原来的上一次的，可删除
            }
        }
 /*           if (HVAC_select_color==5)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data21=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data21=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data21 = HVAC_850_2;

            }
            if (HVAC_select_color==6)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data22=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data22=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data22 = HVAC_860_2;

            }
            if (HVAC_select_color==7)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data23=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data23=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data23 = HVAC_870_2;

            }
            if (HVAC_select_color==8)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data24=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data24=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data24 = HVAC_880_2;
            }
        }*/

        //BitSet( HMI_send_data28, 7, 1);
       // BitSet( HMI_send_data32, 4, 1);设定温度保存标志

        SetCtrlButtonState(ID_CHVACSET_BUTTON_CONFIRM);
    }
}

//void CHVACSettingPage::UpdateHVACState()
//{

//    if (Bit( CCU_HMI_221_16, 9))
//    //if(HVAC_mode_select==1)
//    {
//        HVAC_state = QSTR("停  止");

//        m_bAutoTempV = false;
//    }
//if (Bit( CCU_HMI_221_16, 10))
//    {
//        HVAC_state = QSTR("通  风");

//        m_bAutoTempV = false;
//    }
//if (Bit( CCU_HMI_221_16, 11))
//    {
//        HVAC_state = QSTR("自动制暖");

//        m_bAutoTempV = true;
//    }
//if (Bit( CCU_HMI_221_16, 12))
//    {
//        HVAC_state = QSTR("半暖");

//        m_bAutoTempV = false;
//    }
//    if (Bit( CCU_HMI_221_16, 13))
//    {
//        HVAC_state = QSTR("预  冷");

//        m_bAutoTempV = false;
//    }
//    if (Bit( CCU_HMI_221_16, 14 ))
//    {
//        HVAC_state = QSTR("自动制冷");

//        m_bAutoTempV = true;
//    }
//    if (Bit( CCU_HMI_221_16, 15 ))
//    {
//        HVAC_state = QSTR("半   冷");

//        m_bAutoTempV = false;
//    }
//    if (Bit( CCU_HMI_221_16, 16 ))
//    {
//        HVAC_state = QSTR("全   冷");

//        m_bAutoTempV = false;
//    }
//    if (Bit( CCU_HMI_221_16, 12 ))
//    {
//        HVAC_state = QSTR("紧急通风");
//        m_bAutoTempV = false;
//    }

//    if (Bit( CCU_HMI_221_16, 11 ))
//    {
//        HVAC_state = QSTR("紧急通风停止");
//        m_bAutoTempV = false;
//    }

////    if(m_bpreAutoTempV != m_bAutoTempV)
////    {
////        m_bpreAutoTempV = m_bAutoTempV;
////        SpecialButtonState();
////    }
//    if (m_bBtnPress==false)
//    {
//        SpecialButtonState();
//    }
//    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
//}
void CHVACSettingPage::UpdateHVACState()
{


    if( HVAC_mode_select==9)
    {
        HVAC_state = QSTR("停  止");

        m_bAutoTempV = false;
    }
     if(HVAC_mode_select==8)
    {
        HVAC_state = QSTR("通  风");

        m_bAutoTempV = false;
    }
     if(HVAC_mode_select==10)
    {
        HVAC_state = QSTR("自动制暖");

        m_bAutoTempV = true;
    }
    if(HVAC_mode_select==5)
    {
        HVAC_state = QSTR(" ");

        m_bAutoTempV = false;
    }
    if(HVAC_mode_select==11)
   {
       HVAC_state = QSTR("预热");
       m_bAutoTempV = false;
   }
    if(HVAC_mode_select==7)
   {
       HVAC_state = QSTR(" ");
       m_bAutoTempV = false;
   }
     if(HVAC_mode_select==4)
    {
        HVAC_state = QSTR("预  冷");

        m_bAutoTempV = false;
    }
     if(HVAC_mode_select==3)
    {
        HVAC_state = QSTR("自动制冷");

        m_bAutoTempV = true;
    }
     if(HVAC_mode_select==2)
    {
        HVAC_state = QSTR(" ");

        m_bAutoTempV = false;
    }
     if(HVAC_mode_select==1)
    {
        HVAC_state = QSTR(" ");

        m_bAutoTempV = false;
    }
     if(HVAC_mode_select==6)
    {
        HVAC_state = QSTR("紧急通风");
        m_bAutoTempV = false;
    }
    if(HVAC_mode_select==12)
    {
        HVAC_state = QSTR(" ");
        m_bAutoTempV = false;
    }



//    if(m_bpreAutoTempV != m_bAutoTempV)
//    {
//        m_bpreAutoTempV = m_bAutoTempV;
//        SpecialButtonState();
//    }
    if (m_bBtnPress==false)
    {
        SpecialButtonState();
    }
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
}

void CHVACSettingPage::UpdateCarTem()
{

//    che1_setting_temp = HVAC_A11_5%256;取空调反馈会来的
//    che2_setting_temp = HVAC_A21_5%256;
//    che3_setting_temp = HVAC_A31_5%256;
//    che4_setting_temp = HVAC_A41_5%256;

    che1_setting_temp = CCU_HMI_309_7%256;//取CCU发给显示屏的
    che2_setting_temp = CCU_HMI_309_7/256;
    che3_setting_temp = CCU_HMI_309_8%256;
    che4_setting_temp = CCU_HMI_309_8/256;
    che5_setting_temp = DivNum(HVAC_850_2,10);
    che6_setting_temp = DivNum(HVAC_860_2,10);
    che7_setting_temp = DivNum(HVAC_870_2,10);
    che8_setting_temp = DivNum(HVAC_880_2,10);

    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR1,che1_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR2,che2_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR3,che3_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR4,che4_setting_temp);
    //SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR5,che5_setting_temp);
    //SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR6,che6_setting_temp);
    //SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR7,che7_setting_temp);
    //SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR8,che8_setting_temp);
}

void CHVACSettingPage::UpdateIndoorCarTem()
{
    //if (Bit(CCU_HMI_222_10, 8 )  == 1)
    if (Bit(CCU_HMI_308_8, 14 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_810_3, 16 ))
//        {
//            che1_indoor_temp=DivNum(32768-HVAC_810_3,10);
//        }ID_CHVACSET_LABEL_SETTEMPERATURECAR1
//        else
//        {
//            che1_indoor_temp=DivNum(HVAC_810_3,10);
//        }
        che1_indoor_temp=HVAC_A11_4%256-40;

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_308_8, 13 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_820_3, 16 ))
//        {
//            che2_indoor_temp=DivNum(32768-HVAC_820_3,10);
//        }
//        else
//        {
//            che2_indoor_temp=DivNum(HVAC_820_3,10);
//        }
        che2_indoor_temp=HVAC_A21_4%256-40;;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_308_8, 12 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_830_3, 16 ))
//        {
//            che3_indoor_temp=DivNum(32768-HVAC_830_3,10);

//        }
//        else
//        {
//            che3_indoor_temp=DivNum(HVAC_830_3,10);
//        }
        che3_indoor_temp=HVAC_A31_4%256-40;;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_308_8, 11 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_840_3, 16 ))
//        {
//            che4_indoor_temp=DivNum(32768-HVAC_840_3,10);
//        }
//        else
//        {
//            che4_indoor_temp=DivNum(HVAC_840_3,10);
//        }
        che4_indoor_temp=HVAC_A41_4%256-40;;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::white);
    }

//    if (Bit(CCU_HMI_222_10, 4 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_850_3, 16 ))
//        {
//            che5_indoor_temp=DivNum(32768-HVAC_850_3,10);
//        }
//        else
//        {
//            che5_indoor_temp=DivNum(HVAC_850_3,10);
//        }
//        che5_indoor_temp=DivNum((int16_t)HVAC_850_3,10);
//    }
//    else
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::white);
//    }

//    if (Bit(CCU_HMI_222_10, 3 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_860_3, 16 ))
//        {
//            che6_indoor_temp=DivNum(32768-HVAC_860_3,10);
//        }
//        else
//        {
//            che6_indoor_temp=DivNum(HVAC_860_3,10);
//        }
//        che6_indoor_temp=DivNum((int16_t)HVAC_860_3,10);
//    }
//    else
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::white);
//    }

//    if (Bit(CCU_HMI_222_10, 2 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR7))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_870_3, 16 ))
//        {
//            che7_indoor_temp=DivNum(32768-HVAC_870_3,10);
//        }
//        else
//        {
//            che7_indoor_temp=DivNum(HVAC_870_3,10);
//        }
//        che7_indoor_temp=DivNum((int16_t)HVAC_870_3,10);
//    }
//    else
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR7))->SetCtrlBKColor(Qt::white);
//    }

//    if (Bit(CCU_HMI_222_10, 1 )  == 1)
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR8))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_880_3, 16 ))
//        {
//            che8_indoor_temp=DivNum(32768-HVAC_880_3,10);
//        }
//        else
//        {
//            che8_indoor_temp=DivNum(HVAC_880_3,10);
//        }
//        che8_indoor_temp=DivNum((int16_t)HVAC_880_3,10);
//    }
//    else
//    {
        //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR8))->SetCtrlBKColor(Qt::white);
//    }

    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR1,che1_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR2,che2_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR3,che3_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR4,che4_indoor_temp);
    //SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR5,che5_indoor_temp);
    //SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR6,che6_indoor_temp);
    //SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR7,che7_indoor_temp);
    //SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR8,che8_indoor_temp);
}

void CHVACSettingPage::UpdateOutdoorCarTem()
{
    //if (Bit(CCU_HMI_222_10, 8 )  == 1)
    if (Bit(CCU_HMI_308_8, 14 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR1))->SetCtrlBKColor(Qt::black);

        che1_outdoor_temp=HVAC_A11_4/256-40;

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR1))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_308_8, 13 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR2))->SetCtrlBKColor(Qt::black);

        che2_outdoor_temp=HVAC_A21_4/256-40;;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR2))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_308_8, 12 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR3))->SetCtrlBKColor(Qt::black);

        che3_outdoor_temp=HVAC_A31_4/256-40;;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR3))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_308_8, 11 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR4))->SetCtrlBKColor(Qt::black);

        che4_outdoor_temp=HVAC_A41_4/256-40;;
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR4))->SetCtrlBKColor(Qt::white);
    }


    SetCarTem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR1,che1_outdoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR2,che2_outdoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR3,che3_outdoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATUREOUTCAR4,che4_outdoor_temp);

}


void CHVACSettingPage::SetCarTem(int lableId,int temperature)
{
    char buff[10] = {'\0'};
    sprintf(buff, "%d", temperature);
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString(buff).append(QSTR("℃")));
}

void CHVACSettingPage::UpdateHVAC_mode()
{
    //if (Bit( HVAC_810_12, 1 ))
    if(Bit(CCU_HMI_308_8,14)==1)
     {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR1))->SetCtrlBKColor(Qt::black);
        if (Bit( HVAC_A11_5, 16 )==1)
        {
            HVAC_mode1=QSTR("集控");
        }
        else
        {
            HVAC_mode1=QSTR("本控");
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR1))->SetCtrlBKColor(Qt::white);
    }

    //if (Bit( HVAC_820_12, 1 ))
    if(Bit(CCU_HMI_308_8,13)==1)
     {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR2))->SetCtrlBKColor(Qt::black);
        if (Bit( HVAC_A21_5, 16 )==1)
        {
            HVAC_mode2=QSTR("集控");
        }
       else
        {
            HVAC_mode2=QSTR("本控");
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR2))->SetCtrlBKColor(Qt::white);
    }
    if(Bit(CCU_HMI_308_8,12)==1)
     {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR3))->SetCtrlBKColor(Qt::black);
        if (Bit( HVAC_A31_5, 16 )==1)
        {
            HVAC_mode3=QSTR("集控");
        }
        else
        {
            HVAC_mode3=QSTR("本控");
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR3))->SetCtrlBKColor(Qt::white);
    }

    if(Bit(CCU_HMI_308_8,11)==1)
     {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR4))->SetCtrlBKColor(Qt::black);
        if (Bit( HVAC_A41_5, 16 )==1)
        {
            HVAC_mode4=QSTR("集控");
        }
        else
        {
            HVAC_mode4=QSTR("本控");
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CONTROLMODELCAR4))->SetCtrlBKColor(Qt::white);
    }

    //if (Bit( HVAC_810_9, 8))
    //(CCU_HMI_309_5%256==0)//取空调发给CCU的
    /*if (HVAC_A11_3/256==0)
    {
        HVAC_RUNmode1 = QSTR("停   止");
    }
    else if (HVAC_A11_3/256==1)//(CCU_HMI_309_5%256==1)
    {
        HVAC_RUNmode1 = QSTR("自动冷");
    }
    else if (HVAC_A11_3/256==2)//(CCU_HMI_309_5%256==2)
    {
        HVAC_RUNmode1 = QSTR("半   冷");
    }
    else if (HVAC_A11_3/256==3)
    {
        HVAC_RUNmode1 = QSTR("全   冷");
    }
    else if (HVAC_A11_3/256==5)
    {
        HVAC_RUNmode1 = QSTR("自动暖");
    }
    else if (HVAC_A11_3/256==6)
    {
        HVAC_RUNmode1 = QSTR("半   暖");
    }
    else if (HVAC_A11_3/256==7)
    {
        HVAC_RUNmode1 = QSTR("全   暖");
    }
    else if (HVAC_A11_3/256==9)
    {
        HVAC_RUNmode1 = QSTR("通   风");
    }
    else if (HVAC_A11_3/256==10)
    {
        HVAC_RUNmode1 = QSTR("紧急通风");
    }
    //(CCU_HMI_309_5/256==0)
    if (HVAC_A21_3/256==0)
    {
        HVAC_RUNmode2 = QSTR("停   止");
    }
    else if (HVAC_A21_3/256==1)
    {
        HVAC_RUNmode2 = QSTR("自动冷");
    }
    else if (HVAC_A21_3/256==2)
    {
        HVAC_RUNmode2 = QSTR("半   冷");
    }
    else if (HVAC_A21_3/256==3)
    {
        HVAC_RUNmode2 = QSTR("全   冷");
    }
    else if (HVAC_A21_3/256==5)
    {
        HVAC_RUNmode2 = QSTR("自动暖");
    }
    else if (HVAC_A21_3/256==6)
    {
        HVAC_RUNmode2 = QSTR("半   暖");
    }
    else if (HVAC_A21_3/256==7)
    {
        HVAC_RUNmode2 = QSTR("全   暖");
    }
    else if (HVAC_A21_3/256==9)
    {
        HVAC_RUNmode2 = QSTR("通   风");
    }
    else if (HVAC_A21_3/256==10)
    {
        HVAC_RUNmode2 = QSTR("紧急通风");
    }
//(CCU_HMI_309_6%256==0)
    if (HVAC_A31_3/256==0)
    {
        HVAC_RUNmode3 = QSTR("停   止");
    }
    else if (HVAC_A31_3/256==1)
    {
        HVAC_RUNmode3 = QSTR("自动冷");
    }
    else if (HVAC_A31_3/256==2)
    {
        HVAC_RUNmode3 = QSTR("半   冷");
    }
    else if (HVAC_A31_3/256==3)
    {
        HVAC_RUNmode3 = QSTR("全   冷");
    }
    else if (HVAC_A31_3/256==5)
    {
        HVAC_RUNmode3 = QSTR("自动暖");
    }
    else if (HVAC_A31_3/256==6)
    {
        HVAC_RUNmode3 = QSTR("半   暖");
    }
    else if (HVAC_A31_3/256==7)
    {
        HVAC_RUNmode3 = QSTR("全   暖");
    }
    else if (HVAC_A31_3/256==9)
    {
        HVAC_RUNmode3 = QSTR("通   风");
    }
    else if (HVAC_A31_3/256==10)
    {
        HVAC_RUNmode3 = QSTR("紧急通风");
    }
//(CCU_HMI_309_5/256==0)
    if (HVAC_A41_3/256==0)
    {
        HVAC_RUNmode4 = QSTR("停   止");
    }
    else if (HVAC_A41_3/256==1)
    {
        HVAC_RUNmode4 = QSTR("自动冷");
    }
    else if (HVAC_A41_3/256==2)
    {
        HVAC_RUNmode4 = QSTR("半   冷");
    }
    else if (HVAC_A41_3/256==3)
    {
        HVAC_RUNmode4 = QSTR("全   冷");
    }
    else if (HVAC_A41_3/256==5)
    {
        HVAC_RUNmode4 = QSTR("自动暖");
    }
    else if (HVAC_A41_3/256==6)
    {
        HVAC_RUNmode4 = QSTR("半   暖");
    }
    else if (HVAC_A41_3/256==7)
    {
        HVAC_RUNmode4 = QSTR("全   暖");
    }
    else if (HVAC_A41_3/256==9)
    {
        HVAC_RUNmode4 = QSTR("通   风");
    }
    else if (HVAC_A41_3/256==10)
    {
        HVAC_RUNmode4 = QSTR("紧急通风");
    }*/

    //if (Bit( HVAC_810_9, 8))
    //TC1
    //if(HVAC_A11_3/256==0)
    if(CCU_HMI_309_5%256==0)//取CCU发给显示屏HMI的
    {
        HVAC_RUNmode1 = QSTR("停   止");
    }
    else if (CCU_HMI_309_5%256==1)
    {
        //if(Bit( HMI_send_data41, 16)==0)//TC1预冷
        HVAC_RUNmode1 = QSTR("自动冷");
//        else
//        HVAC_RUNmode1 = QSTR("自动冷(预)");
    }
    else if (CCU_HMI_309_5%256==2)
    {
        HVAC_RUNmode1 = QSTR("半   冷");
    }
    else if (CCU_HMI_309_5%256==3)
    {
        HVAC_RUNmode1 = QSTR("全   冷");
    }
    else if (CCU_HMI_309_5%256==5)
    {
        //if(Bit( HMI_send_data41, 12)==0)//TC1预热命令
        HVAC_RUNmode1 = QSTR("自动暖");
//        else
//        HVAC_RUNmode1 = QSTR("自动暖(预)");
    }
    else if (CCU_HMI_309_5%256==6)
    {
        HVAC_RUNmode1 = QSTR("半   暖");
    }
    else if (CCU_HMI_309_5%256==7)
    {
        HVAC_RUNmode1 = QSTR("全   暖");
    }
    else if (CCU_HMI_309_5%256==9)
    {
        HVAC_RUNmode1 = QSTR("通   风");
    }
    else if (CCU_HMI_309_5%256==10)
    {
        HVAC_RUNmode1 = QSTR("紧急通风");
    }
    else
    {
        HVAC_RUNmode1 = QSTR(" ");
    }



//MP1
    //if (HVAC_A21_3/256==0)
    if (CCU_HMI_309_5/256==0)
    {
        HVAC_RUNmode2 = QSTR("停   止");
    }
    else if (CCU_HMI_309_5/256==1)
    {
        //if(Bit( HMI_send_data41, 15)==0)//MP1预冷
        HVAC_RUNmode2 = QSTR("自动冷");
//        else
//        HVAC_RUNmode2 = QSTR("自动冷(预)");
    }
    else if (CCU_HMI_309_5/256==2)
    {
        HVAC_RUNmode2 = QSTR("半   冷");
    }
    else if (CCU_HMI_309_5/256==3)
    {
        HVAC_RUNmode2 = QSTR("全   冷");
    }
    else if (CCU_HMI_309_5/256==5)
    {
        //if(Bit( HMI_send_data41, 11)==0)//MP1预热
        HVAC_RUNmode2 = QSTR("自动暖");
//        else
//        HVAC_RUNmode2 = QSTR("自动暖(预)");
    }
    else if (CCU_HMI_309_5/256==6)
    {
        HVAC_RUNmode2 = QSTR("半   暖");
    }
    else if (CCU_HMI_309_5/256==7)
    {
        HVAC_RUNmode2 = QSTR("全   暖");
    }
    else if (CCU_HMI_309_5/256==9)
    {
        HVAC_RUNmode2 = QSTR("通   风");
    }
    else if (CCU_HMI_309_5/256==10)
    {
        HVAC_RUNmode2 = QSTR("紧急通风");
    }
    else
    {
        HVAC_RUNmode2 = QSTR(" ");
    }
//MP2
    //if (HVAC_A31_3/256==0)
    if (CCU_HMI_309_6%256==0)
    {
        HVAC_RUNmode3 = QSTR("停   止");
    }
    else if (CCU_HMI_309_6%256==1)
    {
        //if(Bit( HMI_send_data41, 14)==0)//MP2预冷
        HVAC_RUNmode3 = QSTR("自动冷");
//        else
//        HVAC_RUNmode3 = QSTR("自动冷(预)");
    }
    else if (CCU_HMI_309_6%256==2)
    {
        HVAC_RUNmode3 = QSTR("半   冷");
    }
    else if (CCU_HMI_309_6%256==3)
    {
        HVAC_RUNmode3 = QSTR("全   冷");
    }
    else if (CCU_HMI_309_6%256==5)
    {
        //if(Bit( HMI_send_data41, 10)==0)//MP2预热
        HVAC_RUNmode3 = QSTR("自动暖");
        //else
        //HVAC_RUNmode3 = QSTR("自动暖(预)");
    }
    else if (CCU_HMI_309_6%256==6)
    {
        HVAC_RUNmode3 = QSTR("半   暖");
    }
    else if (CCU_HMI_309_6%256==7)
    {
        HVAC_RUNmode3 = QSTR("全   暖");
    }
    else if (CCU_HMI_309_6%256==9)
    {
        HVAC_RUNmode3 = QSTR("通   风");
    }
    else if (CCU_HMI_309_6%256==10)
    {
        HVAC_RUNmode3 = QSTR("紧急通风");
    }
    else
    {
        HVAC_RUNmode3 = QSTR(" ");
    }
//TC2
    //if (HVAC_A41_3/256==0)
    if (CCU_HMI_309_6/256==0)
    {
        HVAC_RUNmode4 = QSTR("停   止");
    }
    else if (CCU_HMI_309_6/256==1)
    {
        //if(Bit( HMI_send_data41, 13)==0)//TC2预冷
        HVAC_RUNmode4 = QSTR("自动冷");
//        else
//        HVAC_RUNmode4 = QSTR("自动冷(预)");
    }
    else if (CCU_HMI_309_6/256==2)
    {
        HVAC_RUNmode4 = QSTR("半   冷");
    }
    else if (CCU_HMI_309_6/256==3)
    {
        HVAC_RUNmode4 = QSTR("全   冷");
    }
    else if (CCU_HMI_309_6/256==5)
    {
        //if(Bit( HMI_send_data41, 9)==0)//TC2预热)
        HVAC_RUNmode4 = QSTR("自动暖");
//        else
//        HVAC_RUNmode4 = QSTR("自动暖(预)");
    }
    else if (CCU_HMI_309_6/256==6)
    {
        HVAC_RUNmode4 = QSTR("半   暖");
    }
    else if (CCU_HMI_309_6/256==7)
    {
        HVAC_RUNmode4 = QSTR("全   暖");
    }
    else if (CCU_HMI_309_6/256==9)
    {
        HVAC_RUNmode4 = QSTR("通   风");
    }
    else if (CCU_HMI_309_6/256==10)
    {
        HVAC_RUNmode4 = QSTR("紧急通风");
    }
    else
    {
        HVAC_RUNmode4 = QSTR(" ");
    }

    if(Bit(HVAC_A18_10,8)==1)
        ACStart1= QSTR("   1");
    else
        ACStart1= QSTR("   0");
    if(Bit(HVAC_A28_10,8)==1)
        ACStart2= QSTR("   1");
    else
        ACStart2= QSTR("   0");
    if(Bit(HVAC_A38_10,8)==1)
        ACStart3= QSTR("   1");
    else
        ACStart3= QSTR("   0");
    if(Bit(HVAC_A48_10,8)==1)
        ACStart4= QSTR("   1");
    else
        ACStart4= QSTR("   0");
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR1,HVAC_mode1);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR2,HVAC_mode2);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR3,HVAC_mode3);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR4,HVAC_mode4);
    /*SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR5,HVAC_mode5+"\n"+HVAC_RUNmode5);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR6,HVAC_mode6+"\n"+HVAC_RUNmode6);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR7,HVAC_mode7+"\n"+HVAC_RUNmode7);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR8,HVAC_mode8+"\n"+HVAC_RUNmode8);*/
}

void CHVACSettingPage::UpdateHVAC_RUNmode()
{

    SetHVAC_mode(ID_CHVACSET_LABEL_CAR1RUNMODEL,HVAC_RUNmode1+ACStart1);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR2RUNMODEL,HVAC_RUNmode2+ACStart2);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR3RUNMODEL,HVAC_RUNmode3+ACStart3);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR4RUNMODEL,HVAC_RUNmode4+ACStart4);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR5RUNMODEL,HVAC_RUNmode5);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR6RUNMODEL,HVAC_RUNmode6);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR7RUNMODEL,HVAC_RUNmode7);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR8RUNMODEL,HVAC_RUNmode8);
}
void CHVACSettingPage::SetHVAC_mode(int lableId, QString modeValue)
{
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(modeValue);

}

void CHVACSettingPage::UpdateHVAC_Compressor()
{
    if(Bit( HVAC_A11_6, 4 )){car1_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::black);} else{car1_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 3 )){car1_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::black);} else{car1_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 2 )){car1_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::black);} else{car1_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 1 )){car1_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::black);} else{car1_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 4 )){car2_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::black);} else{car2_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 3 )){car2_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::black);} else{car2_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 2 )){car2_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::black);} else{car2_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 1 )){car2_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::black);} else{car2_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 4 )){car3_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::black);} else{car3_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 3 )){car3_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::black);} else{car3_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 2 )){car3_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::black);} else{car3_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 1 )){car3_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::black);} else{car3_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 4 )){car4_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::black);} else{car4_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 3 )){car4_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::black);} else{car4_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 2 )){car4_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::black);} else{car4_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 1 )){car4_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::black);} else{car4_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::white);}

    if(Bit( HVAC_A11_7, 4)){car1_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 3)){car1_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 2)){car1_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 1)){car1_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 4 )){car2_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 3 )){car2_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 2 )){car2_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 1 )){car2_Compressor4=2;((CLabel *)  GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 4 )){car3_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 3 )){car3_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 2 )){car3_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 1 )){car3_Compressor4=2;((CLabel *)  GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 4 )){car4_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 3 )){car4_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 2 )){car4_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 1 )){car4_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS1,car1_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS2, car1_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS3, car1_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS4, car1_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS1, car2_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS2, car2_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS3, car2_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS4, car2_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS1, car3_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS2, car3_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS3, car3_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS4, car3_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS1, car4_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS2, car4_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS3, car4_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS4, car4_Compressor4);


}


void CHVACSettingPage::UpdateHVAC_Condenser()
{
    if(Bit( HVAC_A11_6, 16 )){car1_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::black);} else{car1_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 15 )){car1_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::black);} else{car1_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 14 )){car1_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::black);} else{car1_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 13 )){car1_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::black);} else{car1_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 16 )){car2_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::black);} else{car2_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 15 )){car2_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::black);} else{car2_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 14 )){car2_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::black);} else{car2_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 13 )){car2_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::black);} else{car2_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 16 )){car3_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::black);} else{car3_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 15 )){car3_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::black);} else{car3_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 14 )){car3_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::black);} else{car3_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 13 )){car3_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::black);} else{car3_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 16 )){car4_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::black);} else{car4_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 15 )){car4_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::black);} else{car4_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 14)){car4_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::black);} else{car4_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 13 )){car4_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::black);} else{car4_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::white);}


    if(Bit( HVAC_A11_7, 16 )){car1_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 15 )){car1_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 14 )){car1_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 13 )){car1_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 16 )){car2_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 15 )){car2_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 14 )){car2_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 13 )){car2_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 16 )){car3_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 15 )){car3_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 14 )){car3_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 13 )){car3_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 16 )){car4_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 15 )){car4_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 14 )){car4_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 13 )){car4_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::white);}


    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD1, car1_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD2, car1_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD3, car1_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD4, car1_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD1, car2_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD2, car2_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD3, car2_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD4, car2_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD1, car3_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD2, car3_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD3, car3_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD4, car3_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD1, car4_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD2, car4_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD3, car4_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD4, car4_Condenser4);



}

void CHVACSettingPage::UpdateHVAC_EvaporatorFan()
{
    if(Bit( HVAC_A11_6, 8 )){car1_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 7 )){car1_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 6 )){car1_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 5 )){car1_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 8 )){car2_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 7 )){car2_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 6 )){car2_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 5 )){car2_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 8 )){car3_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 7 )){car3_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 6 )){car3_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 5 )){car3_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 8 )){car4_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 7 )){car4_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 6 )){car4_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 5 )){car4_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::white);}


    if(Bit( HVAC_A11_7, 8 )){car1_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 7 )){car1_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 6 )){car1_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 5 )){car1_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 8 )){car2_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 7 )){car2_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 6 )){car2_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 5 )){car2_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 8 )){car3_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 7 )){car3_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 6 )){car3_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 5 )){car3_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 8 )){car4_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 7 )){car4_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 6 )){car4_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 5 )){car4_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::white);}


    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND1, car1_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND2, car1_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND3, car1_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND4, car1_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND1, car2_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND2, car2_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND3, car2_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND4, car2_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND1, car3_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND2, car3_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND3, car3_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND4, car3_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND1, car4_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND2, car4_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND3, car4_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND4, car4_EvaporatorFan4);


}

void CHVACSettingPage::UpdateHVAC_PreheaterState()
{
    if(Bit( HVAC_A11_6, 12 )){car1_Preheater1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT1))->SetTxtColor(Qt::black);} else{car1_Preheater1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 11 )){car1_Preheater2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT2))->SetTxtColor(Qt::black);} else{car1_Preheater2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 10 )){car1_Preheater3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT3))->SetTxtColor(Qt::black);} else{car1_Preheater3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_6, 9 )){car1_Preheater4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT4))->SetTxtColor(Qt::black);} else{car1_Preheater4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 12 )){car2_Preheater1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT1))->SetTxtColor(Qt::black);} else{car2_Preheater1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 11 )){car2_Preheater2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT2))->SetTxtColor(Qt::black);} else{car2_Preheater2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 10 )){car2_Preheater3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT3))->SetTxtColor(Qt::black);} else{car2_Preheater3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_6, 9 )){car2_Preheater4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT4))->SetTxtColor(Qt::black);} else{car2_Preheater4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 12 )){car3_Preheater1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT1))->SetTxtColor(Qt::black);} else{car3_Preheater1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 11 )){car3_Preheater2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT2))->SetTxtColor(Qt::black);} else{car3_Preheater2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 10 )){car3_Preheater3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT3))->SetTxtColor(Qt::black);} else{car3_Preheater3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_6, 9 )){car3_Preheater4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT4))->SetTxtColor(Qt::black);} else{car3_Preheater4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 12 )){car4_Preheater1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT1))->SetTxtColor(Qt::black);} else{car4_Preheater1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 11 )){car4_Preheater2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT2))->SetTxtColor(Qt::black);} else{car4_Preheater2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 10 )){car4_Preheater3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT3))->SetTxtColor(Qt::black);} else{car4_Preheater3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_6, 9 )){car4_Preheater4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT4))->SetTxtColor(Qt::black);} else{car4_Preheater4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT4))->SetTxtColor(Qt::white);}

    if(Bit( HVAC_A11_7, 12 )){car1_Preheater1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 11 )){car1_Preheater2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 10 )){car1_Preheater3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A11_7, 9 )){car1_Preheater4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 12 )){car2_Preheater1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 11 )){car2_Preheater2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 10 )){car2_Preheater3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A21_7, 9 )){car2_Preheater4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 12 )){car3_Preheater1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 11 )){car3_Preheater2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 10 )){car3_Preheater3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A31_7, 9 )){car3_Preheater4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 12 )){car4_Preheater1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 11 )){car4_Preheater2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 10 )){car4_Preheater3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_A41_7, 9 )){car4_Preheater4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT4))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1PREHEAT1, car1_Preheater1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1PREHEAT2, car1_Preheater2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1PREHEAT3, car1_Preheater3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1PREHEAT4, car1_Preheater4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2PREHEAT1, car2_Preheater1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2PREHEAT2, car2_Preheater2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2PREHEAT3, car2_Preheater3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2PREHEAT4, car2_Preheater4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3PREHEAT1, car3_Preheater1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3PREHEAT2, car3_Preheater2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3PREHEAT3, car3_Preheater3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3PREHEAT4, car3_Preheater4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4PREHEAT1, car4_Preheater1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4PREHEAT2, car4_Preheater2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4PREHEAT3, car4_Preheater3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4PREHEAT4, car4_Preheater4);
}
//void CHVACSettingPage::UpdateHVAC_HotElectricity()
//{
//    if(Bit(DI_110_6, 10))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_110_6, 11))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1PREHEAT2))->SetCtrlBKColor(Qt::black);;
//    }

//    if(Bit(DI_120_1, 10))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_120_1, 11))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2PREHEAT2))->SetCtrlBKColor(Qt::black);;
//    }

//    if(Bit(DI_130_1, 10))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_130_1, 11))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3PREHEAT2))->SetCtrlBKColor(Qt::black);;
//    }

//    if(Bit(DI_140_1, 10))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_140_1, 11))
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4PREHEAT2))->SetCtrlBKColor(Qt::black);;
//    }

//    if(Bit(DI_150_1, 10))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_150_1, 11))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetCtrlBKColor(Qt::black);;
//    }

//    if(Bit(DI_160_1, 10))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_160_1, 11))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetCtrlBKColor(Qt::black);;
//    }

//    if(Bit(DI_170_1, 10))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_170_1, 11))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetCtrlBKColor(Qt::black);;
//    }


//    if(Bit(DI_180_6, 10))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetCtrlBKColor(Qt::black);;
//    }
//    if(Bit(DI_180_6, 11))
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetCtrlBKColor(Qt::green);;
//    }
//    else
//    {
//        //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetCtrlBKColor(Qt::black);;
//    }


//}

void CHVACSettingPage::SetHVACStateColor(int id, int colorVal)
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

void CHVACSettingPage::UpdateHVACError()
{

    car1_HVAC_error1=Bit( hvac_status_data20, 16 )||(Bit( hvac_status_data20, 12 ))||(Bit( hvac_status_data20, 8 ))||(Bit( hvac_status_data20, 4 ))||(Bit( hvac_status_data28, 16 ))||(Bit( hvac_status_data28, 12 ))||(Bit( hvac_status_data28, 8 ));
    car1_HVAC_error2=Bit( hvac_status_data20, 15 )||(Bit( hvac_status_data20, 11 ))||(Bit( hvac_status_data20, 7 ))||(Bit( hvac_status_data20, 3 ))||(Bit( hvac_status_data28, 15 ))||(Bit( hvac_status_data28, 11 ))||(Bit( hvac_status_data28, 7 ));
    car1_HVAC_error3=Bit( hvac_status_data20, 14 )||(Bit( hvac_status_data20, 10 ))||(Bit( hvac_status_data20, 6 ))||(Bit( hvac_status_data20, 2 ))||(Bit( hvac_status_data28, 14))||(Bit( hvac_status_data28, 10 ))||(Bit( hvac_status_data28, 6 ));
    car1_HVAC_error4=Bit( hvac_status_data20, 13)||(Bit( hvac_status_data20, 9 ))||(Bit( hvac_status_data20, 5 ))||(Bit( hvac_status_data20, 1 ))||(Bit( hvac_status_data28, 13))||(Bit( hvac_status_data28, 9 ))||(Bit( hvac_status_data28, 5 ));

    car2_HVAC_error1=Bit( hvac_status_data21, 16 )||(Bit( hvac_status_data21, 12 ))||(Bit( hvac_status_data21, 8 ))||(Bit( hvac_status_data21, 4 ))||(Bit( hvac_status_data29, 16 ))||(Bit( hvac_status_data29, 12 ))||(Bit( hvac_status_data29, 8 ));
    car2_HVAC_error2=Bit( hvac_status_data21, 15 )||(Bit( hvac_status_data21, 11 ))||(Bit( hvac_status_data21, 7 ))||(Bit( hvac_status_data21, 3 ))||(Bit( hvac_status_data29, 15 ))||(Bit( hvac_status_data29, 11 ))||(Bit( hvac_status_data29, 7 ));
    car2_HVAC_error3=Bit( hvac_status_data21, 14 )||(Bit( hvac_status_data21, 10 ))||(Bit( hvac_status_data21, 6 ))||(Bit( hvac_status_data21, 2 ))||(Bit( hvac_status_data29, 14))||(Bit( hvac_status_data29, 10 ))||(Bit( hvac_status_data29, 6 ));
    car2_HVAC_error4=Bit( hvac_status_data21, 13)||(Bit( hvac_status_data21, 9 ))||(Bit( hvac_status_data21, 5 ))||(Bit( hvac_status_data21, 1 ))||(Bit( hvac_status_data29, 13))||(Bit( hvac_status_data29, 9 ))||(Bit( hvac_status_data29, 5 ));

    car3_HVAC_error1=Bit( hvac_status_data22, 16 )||(Bit( hvac_status_data22, 12 ))||(Bit( hvac_status_data22, 8 ))||(Bit( hvac_status_data22, 4 ))||(Bit( hvac_status_data30, 16 ))||(Bit( hvac_status_data30, 12 ))||(Bit( hvac_status_data30, 8 ));
    car3_HVAC_error2=Bit( hvac_status_data22, 15 )||(Bit( hvac_status_data22, 11 ))||(Bit( hvac_status_data22, 7 ))||(Bit( hvac_status_data22, 3 ))||(Bit( hvac_status_data30, 15 ))||(Bit( hvac_status_data30, 11 ))||(Bit( hvac_status_data30, 7 ));
    car3_HVAC_error3=Bit( hvac_status_data22, 14 )||(Bit( hvac_status_data22, 10 ))||(Bit( hvac_status_data22, 6 ))||(Bit( hvac_status_data22, 2 ))||(Bit( hvac_status_data30, 14))||(Bit( hvac_status_data30, 10 ))||(Bit( hvac_status_data30, 6 ));
    car3_HVAC_error4=Bit( hvac_status_data22, 13)||(Bit( hvac_status_data22, 9 ))||(Bit( hvac_status_data22, 5 ))||(Bit( hvac_status_data22, 1 ))||(Bit( hvac_status_data30, 13))||(Bit( hvac_status_data30, 9 ))||(Bit( hvac_status_data30, 5 ));

    car4_HVAC_error1=Bit( hvac_status_data23, 16 )||(Bit( hvac_status_data23, 12 ))||(Bit( hvac_status_data23, 8 ))||(Bit( hvac_status_data23, 4 ))||(Bit( hvac_status_data31, 16 ))||(Bit( hvac_status_data31, 12 ))||(Bit( hvac_status_data31, 8 ));
    car4_HVAC_error2=Bit( hvac_status_data23, 15 )||(Bit( hvac_status_data23, 11 ))||(Bit( hvac_status_data23, 7 ))||(Bit( hvac_status_data23, 3 ))||(Bit( hvac_status_data31, 15 ))||(Bit( hvac_status_data31, 11 ))||(Bit( hvac_status_data31, 7 ));
    car4_HVAC_error3=Bit( hvac_status_data23, 14 )||(Bit( hvac_status_data23, 10 ))||(Bit( hvac_status_data23, 6 ))||(Bit( hvac_status_data23, 2 ))||(Bit( hvac_status_data31, 14))||(Bit( hvac_status_data31, 10 ))||(Bit( hvac_status_data31, 6 ));
    car4_HVAC_error4=Bit( hvac_status_data23, 13)||(Bit( hvac_status_data23, 9 ))||(Bit( hvac_status_data23, 5 ))||(Bit( hvac_status_data23, 1 ))||(Bit( hvac_status_data31, 13))||(Bit( hvac_status_data31, 9 ))||(Bit( hvac_status_data31, 5 ));

    car5_HVAC_error1=Bit( hvac_status_data24, 16 )||(Bit( hvac_status_data24, 12 ))||(Bit( hvac_status_data24, 8 ))||(Bit( hvac_status_data24, 4 ))||(Bit( hvac_status_data32, 16 ))||(Bit( hvac_status_data32, 12 ))||(Bit( hvac_status_data32, 8 ));
    car5_HVAC_error2=Bit( hvac_status_data24, 15 )||(Bit( hvac_status_data24, 11 ))||(Bit( hvac_status_data24, 7 ))||(Bit( hvac_status_data24, 3 ))||(Bit( hvac_status_data32, 15 ))||(Bit( hvac_status_data32, 11 ))||(Bit( hvac_status_data32, 7 ));
    car5_HVAC_error3=Bit( hvac_status_data24, 14 )||(Bit( hvac_status_data24, 10 ))||(Bit( hvac_status_data24, 6 ))||(Bit( hvac_status_data24, 2 ))||(Bit( hvac_status_data32, 14))||(Bit( hvac_status_data32, 10 ))||(Bit( hvac_status_data32, 6 ));
    car5_HVAC_error4=Bit( hvac_status_data24, 13)||(Bit( hvac_status_data24, 9 ))||(Bit( hvac_status_data24, 5 ))||(Bit( hvac_status_data24, 1 ))||(Bit( hvac_status_data32, 13))||(Bit( hvac_status_data32, 9 ))||(Bit( hvac_status_data32, 5 ));

    car6_HVAC_error1=Bit( hvac_status_data26, 16 )||(Bit( hvac_status_data26, 12 ))||(Bit( hvac_status_data26, 8 ))||(Bit( hvac_status_data26, 4 ))||(Bit( hvac_status_data33, 16 ))||(Bit( hvac_status_data33, 12 ))||(Bit( hvac_status_data33, 8 ));
    car6_HVAC_error2=Bit( hvac_status_data26, 15 )||(Bit( hvac_status_data26, 11 ))||(Bit( hvac_status_data26, 7 ))||(Bit( hvac_status_data26, 3 ))||(Bit( hvac_status_data33, 15 ))||(Bit( hvac_status_data33, 11 ))||(Bit( hvac_status_data33, 7 ));
    car6_HVAC_error3=Bit( hvac_status_data26, 14 )||(Bit( hvac_status_data26, 10 ))||(Bit( hvac_status_data26, 6 ))||(Bit( hvac_status_data26, 2 ))||(Bit( hvac_status_data33, 14))||(Bit( hvac_status_data33, 10 ))||(Bit( hvac_status_data33, 6 ));
    car6_HVAC_error4=Bit( hvac_status_data26, 13)||(Bit( hvac_status_data26, 9 ))||(Bit( hvac_status_data26, 5 ))||(Bit( hvac_status_data26, 1 ))||(Bit( hvac_status_data33, 13))||(Bit( hvac_status_data33, 9 ))||(Bit( hvac_status_data33, 5 ));
}

void CHVACSettingPage::SetCtrlButtonState(int nID)
{
    int nIDArray[] =
    {
      ID_CHVACSET_BUTTON_CONFIRM,
      //ID_CHVACSET_BUTTON_STRONGCOLD,
      //ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      //ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
      //ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_PREWARM,//lmh add

    };
//for (int i = 0; i <8; i++)
   for (int i = 0; i <8; i++)
   {
       if (nID != nIDArray[i])
          ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
   }
}

void CHVACSettingPage::ReSetCtrlButtonState()
{
    int nIDArray[] =
    {
      //ID_CHVACSET_BUTTON_CONFIRM,//LMH 10.15  11.28
      //ID_CHVACSET_BUTTON_STRONGCOLD,
      //ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
      ID_CHVACSET_BUTTON_AMERGEWIND,
      //ID_CHVACSET_BUTTON_HALFWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
      //ID_CHVACSET_BUTTON_FULLWARM,//lmh add
      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_PREWARM,
    };
//for (int i = 0; i < 7; i++)
   for (int i = 0; i < 7; i++)
   {
      ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
   }
   if(m_bAutoTempV && Bit(HVAC_command_hide,1))
   {
       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
   }
}

void CHVACSettingPage::updateTempV()
{
    if (Bit(HVAC_command_hide,1))
    {
        char buff[10] = {'\0'};
//        if ((CCU_HMI_309_5%256==1)||(CCU_HMI_309_5/256==1)||(CCU_HMI_309_6%256==1)||(CCU_HMI_309_6/256==1))//制冷
//        {
//            //sprintf(buff, "%.1f",setting_temp);
//            sprintf(buff, "%d",setting_temp);
//            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
//        }
//        else if ((CCU_HMI_309_5%256==5)||(CCU_HMI_309_5/256==5)||(CCU_HMI_309_6%256==5)||(CCU_HMI_309_6/256==5))//制热
//        {
//            //sprintf(buff, "%.1f",setting_temp2);
//            sprintf(buff, "%d",setting_temp2);
//            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
//        }
        if ((CCU_HMI_309_5%256==1)&&(CCU_HMI_309_5/256==1)&&(CCU_HMI_309_6%256==1)&&(CCU_HMI_309_6/256==1)&&(HVAC_select_color==0))//制冷
        //if ((HVAC_A11_3/256==1)&&(HVAC_A21_3/256==1)&&(HVAC_A31_3/256==1)&&(HVAC_A41_3/256==1)&&(HVAC_select_color==0))//制冷
        {
            //sprintf(buff, "%.1f",setting_temp);
            sprintf(buff, "%d",setting_temp);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        //else if ((HVAC_A11_3/256==1)&&(HVAC_select_color==1))//制冷
        else if ((CCU_HMI_309_5%256==1)&&(HVAC_select_color==1))//制冷
        {
            //sprintf(buff, "%.1f",setting_temp);
            sprintf(buff, "%d",setting_temp);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        //else if ((HVAC_A21_3/256==1)&&(HVAC_select_color==2))//制冷
        else if ((CCU_HMI_309_5/256==1)&&(HVAC_select_color==2))//制冷
        {
            //sprintf(buff, "%.1f",setting_temp);
            sprintf(buff, "%d",setting_temp);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        //else if ((HVAC_A31_3/256==1)&&(HVAC_select_color==3))//制冷
        else if ((CCU_HMI_309_6%256==1)&&(HVAC_select_color==3))//制冷
        {
            //sprintf(buff, "%.1f",setting_temp);
            sprintf(buff, "%d",setting_temp);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        //else if ((HVAC_A41_3/256==1)&&(HVAC_select_color==4))//制冷
        else if ((CCU_HMI_309_6/256==1)&&(HVAC_select_color==4))//制冷
        {
            //sprintf(buff, "%.1f",setting_temp);
            sprintf(buff, "%d",setting_temp);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        else if ((CCU_HMI_309_5%256==5)&&(CCU_HMI_309_5/256==5)&&(CCU_HMI_309_6%256==5)&&(CCU_HMI_309_6/256==5)&&(HVAC_select_color==0))//制热
        //else if ((HVAC_A11_3/256==5)&&(HVAC_A21_3/256==5)&&(HVAC_A31_3/256==5)&&(HVAC_A41_3/256==5)&&(HVAC_select_color==0))//制热
        {
            //sprintf(buff, "%.1f",setting_temp2);
            sprintf(buff, "%d",setting_temp2);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        else if ((CCU_HMI_309_5%256==5)&&(HVAC_select_color==1))//制热
        //else if ((HVAC_A11_3/256==5)&&(HVAC_select_color==1))//制热
        {
            //sprintf(buff, "%.1f",setting_temp2);
            sprintf(buff, "%d",setting_temp2);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        else if ((CCU_HMI_309_5/256==5)&&(HVAC_select_color==2))//制热
        //else if ((HVAC_A21_3/256==5)&&(HVAC_select_color==2))//制热
        {
            //sprintf(buff, "%.1f",setting_temp2);
            sprintf(buff, "%d",setting_temp2);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        else if ((CCU_HMI_309_6%256==5)&&(HVAC_select_color==3))//制热
        //else if ((HVAC_A31_3/256==5)&&(HVAC_select_color==3))//制热
        {
            //sprintf(buff, "%.1f",setting_temp2);
            sprintf(buff, "%d",setting_temp2);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        else if ((CCU_HMI_309_6/256==5)&&(HVAC_select_color==4))//制热
        //else if ((HVAC_A41_3/256==5)&&(HVAC_select_color==4))//制热
        {
            //sprintf(buff, "%.1f",setting_temp2);
            sprintf(buff, "%d",setting_temp2);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QSTR("      ℃"));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QSTR("      ℃"));
    }
}

void CHVACSettingPage::SpecialButtonState()
{
    //if((Bit( CCU_HMI_221_16, 14 ))&&(Bit(HVAC_command_hide,1)))
    if(Bit(HVAC_command_hide,1))
    {
      if((CCU_HMI_309_5%256==1)||(CCU_HMI_309_5/256==1)||(CCU_HMI_309_6%256==1)||(CCU_HMI_309_6/256==1)||(CCU_HMI_309_5%256==5)||(CCU_HMI_309_5/256==5)||(CCU_HMI_309_6%256==5)||(CCU_HMI_309_6/256==5))
        //if((HVAC_A11_3/256==1)||(HVAC_A21_3/256==1)||(HVAC_A31_3/256==1)||(HVAC_A41_3/256==1)||(HVAC_A11_3/256==5)||(HVAC_A21_3/256==5)||(HVAC_A31_3/256==5)||(HVAC_A41_3/256==5))
      {
//        if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->IsHide())
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ShowButton();
//        if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->IsHide())
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ShowButton();
//        if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->IsHide())
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->ShowButton();
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
      }
      else
      {
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->HideButton();
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->HideButton();
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();

        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);
     }
  }
  else
  {


        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);
  }
}

void CHVACSettingPage::UpdateHVAC_NewWind()
{
    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
    {
        car1_NewWind1=1;
        /*if(Bit( HVAC_810_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_810_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_810_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_810_9, 12 ))
        {
            car1_NewWind1=0;
        }
        else
        {
            car1_NewWind1=3;
        }

    }
    if(Bit( HVAC_810_9, 1 )||Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 ))
    {
        car1_NewWind2=1;
        if(Bit( HVAC_810_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_810_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_810_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_810_9, 11 ))
        {
            car1_NewWind2=0;
        }
        else
        {
            car1_NewWind2=3;
        }

    }
    if(Bit( HVAC_820_9, 2)||Bit( HVAC_820_9, 16)||Bit( HVAC_820_9, 14 ))
    {
        car2_NewWind1=1;
        if(Bit( HVAC_820_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_820_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_820_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_820_9, 12 ))
        {
            car2_NewWind1=0;
        }
        else
        {
            car2_NewWind1=3;
        }


    }
    if(Bit( HVAC_820_9, 1 )||Bit( HVAC_820_9, 15 )||Bit( HVAC_820_9, 13 ))
    {
        car2_NewWind2=1;
        if(Bit( HVAC_820_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_820_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_820_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_820_9, 11 ))
        {
            car2_NewWind2=0;
        }
        else
        {
            car2_NewWind2=3;
        }


    }
    if(Bit( HVAC_830_9, 2)||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
    {
        car3_NewWind1=1;
        if(Bit( HVAC_830_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_830_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_830_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_830_9, 12 ))
        {
            car3_NewWind1=0;
        }
        else
        {
            car3_NewWind1=3;
        }


    }
    if(Bit( HVAC_830_9, 1 )||Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 ))
    {
        car3_NewWind2=1;
        if(Bit( HVAC_830_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_830_9, 15))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_830_9, 13))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_830_9, 11 ))
        {
            car3_NewWind2=0;
        }
        else
        {
            car3_NewWind2=3;
        }


    }
    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 2 ))
    {
        car4_NewWind1=1;
        if(Bit( HVAC_840_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_840_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_840_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_840_9, 12 ))
        {
            car4_NewWind1=0;
        }
        else
        {
            car4_NewWind1=3;
        }


    }
    if(Bit( HVAC_840_9, 1 )||Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 ))
    {
        car4_NewWind2=1;
        if(Bit( HVAC_840_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_840_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_840_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_840_9, 11 ))
        {
            car4_NewWind2=0;
        }
        else
        {
            car4_NewWind2=3;
        }


    }
    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 2 ))
    {
        car5_NewWind1=1;
        if(Bit( HVAC_850_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_850_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_850_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_850_9, 12 ))
        {
            car5_NewWind1=0;
        }
        else
        {
            car5_NewWind1=3;
        }


    }
    if(Bit( HVAC_850_9, 1 )||Bit( HVAC_850_9, 15 )||Bit( HVAC_850_9, 13 ))
    {
        car5_NewWind2=1;
        if(Bit( HVAC_850_9, 1))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_850_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_850_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_850_9, 11 ))
        {
            car5_NewWind2=0;
        }
        else
        {
            car5_NewWind2=3;
        }


    }
    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 2 ))
    {
        car6_NewWind1=1;
        if(Bit( HVAC_860_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_860_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_860_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_860_9, 12))
        {
            car6_NewWind1=0;
        }
        else
        {
            car6_NewWind1=3;
        }


    }
    if(Bit( HVAC_860_9, 1 )||Bit( HVAC_860_9, 15 )||Bit( HVAC_860_9, 13 ))
    {
        car6_NewWind2=1;
        if(Bit( HVAC_860_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_860_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_860_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_860_9, 11))
        {
            car6_NewWind2=0;
        }
        else
        {
            car6_NewWind2=3;
        }


    }
    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 2 ))
    {
        car7_NewWind1=1;
        if(Bit( HVAC_870_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_870_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_870_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_870_9, 12))
        {
            car7_NewWind1=0;
        }
        else
        {
            car7_NewWind1=3;
        }


    }
    if(Bit( HVAC_870_9, 1 )||Bit( HVAC_870_9, 15 )||Bit( HVAC_870_9, 13 ))
    {
        car7_NewWind2=1;
        if(Bit( HVAC_870_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_870_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_870_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_870_9, 11))
        {
            car7_NewWind2=0;
        }
        else
        {
            car7_NewWind2=3;
        }


    }
    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 2 ))
    {
        car8_NewWind1=1;
        if(Bit( HVAC_880_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_880_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_880_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_880_9, 12))
        {
            car8_NewWind1=0;
        }
        else
        {
            car8_NewWind1=3;
        }


    }
    if(Bit( HVAC_880_9, 1 )||Bit( HVAC_880_9, 15 )||Bit( HVAC_880_9, 13 ))
    {
        car8_NewWind2=1;
        if(Bit( HVAC_880_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_880_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_880_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_880_9, 11))
        {
            car8_NewWind2=0;
        }
        else
        {
            car8_NewWind2=3;
        }


    }*/
    /*if(Bit( HVAC_810_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR(""));
        car1_NewWind1=2;
    }
    if(Bit( HVAC_810_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR(""));
        car1_NewWind2=2;
    }

    if(Bit( HVAC_820_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR(""));
        car2_NewWind1=2;
    }
    if(Bit( HVAC_820_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR(""));
        car2_NewWind2=2;
    }

    if(Bit( HVAC_830_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR(""));
        car3_NewWind1=2;
    }
    if(Bit( HVAC_830_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR(""));
        car3_NewWind2=2;
    }

    if(Bit( HVAC_840_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR(""));
        car4_NewWind1=2;
    }
    if(Bit( HVAC_840_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR(""));
        car4_NewWind2=2;
    }

    if(Bit( HVAC_850_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR(""));
        car5_NewWind1=2;
    }
    if(Bit( HVAC_850_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR(""));
        car5_NewWind2=2;
    }

    if(Bit( HVAC_860_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR(""));
        car6_NewWind1=2;
    }
    if(Bit( HVAC_860_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR(""));
        car6_NewWind2=2;
    }

    if(Bit( HVAC_870_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR(""));
        car7_NewWind1=2;
    }
    if(Bit( HVAC_870_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR(""));
        car7_NewWind2=2;
    }

    if(Bit( HVAC_880_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR(""));
        car8_NewWind1=2;
    }
    if(Bit( HVAC_880_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR(""));
        car8_NewWind2=2;
    }*/

    /*SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);*/
    }}

void CHVACSettingPage::UpdateEmergencyMode()
{
    //int modecolor = 0;
    //if ( Bit( HVAC_810_12, 15) ||Bit( HVAC_820_12, 15)||Bit( HVAC_830_12, 15)||Bit( HVAC_840_12, 15)||Bit( HVAC_850_12, 15)||Bit( HVAC_860_12, 15)||Bit( HVAC_870_12, 15)||Bit( HVAC_880_12, 15)==1)
    if ( ( HVAC_A11_3/256==10 || HVAC_A21_3/256==10|| HVAC_A31_3/256==10|| HVAC_A41_3/256==10)==1)

    {

        //((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(true); 11.28

    }
    else
    {
        //((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(false); 11.28

    }


}

//void CHVACSettingPage::UpdateHVAC_NewWind()
//{
//    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 )||Bit( HVAC_810_9, 14 ))
//    {
//        car1_NewWind1=1;
//        if(Bit( HVAC_810_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_810_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car1_NewWind1=0;
//    }
//    if(Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
//    {
//        car1_NewWind2=1;
//        if(Bit( HVAC_810_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_810_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car1_NewWind2=0;
//    }
//    if(Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 )||Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 ))
//    {
//        car2_NewWind1=1;
//        if(Bit( HVAC_820_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_820_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car2_NewWind1=0;

//    }
//    if(Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 )||Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 ))
//    {
//        car2_NewWind2=1;
//        if(Bit( HVAC_820_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_820_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car2_NewWind2=0;

//    }
//    if(Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 )||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
//    {
//        car3_NewWind1=1;
//        if(Bit( HVAC_830_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_830_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car3_NewWind1=0;

//    }
//    if(Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 )||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
//    {
//        car3_NewWind2=1;
//        if(Bit( HVAC_830_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_830_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car3_NewWind2=0;

//    }
//    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 ))
//    {
//        car4_NewWind1=1;
//        if(Bit( HVAC_840_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_810_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car4_NewWind1=0;

//    }
//    if(Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 )||Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 ))
//    {
//        car4_NewWind2=1;
//        if(Bit( HVAC_840_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_840_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car4_NewWind2=0;

//    }
//    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 ))
//    {
//        car5_NewWind1=1;
//        if(Bit( HVAC_850_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_850_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car5_NewWind1=0;

//    }
//    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 ))
//    {
//        car5_NewWind2=1;
//        if(Bit( HVAC_850_7, 15))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_850_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car5_NewWind2=0;

//    }
//    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 ))
//    {
//        car6_NewWind1=1;
//        if(Bit( HVAC_860_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_860_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car6_NewWind1=0;

//    }
//    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 ))
//    {
//        car6_NewWind2=1;
//        if(Bit( HVAC_860_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_860_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car6_NewWind2=0;

//    }
//    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 ))
//    {
//        car7_NewWind1=1;
//        if(Bit( HVAC_870_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_870_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car7_NewWind1=0;

//    }
//    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 ))
//    {
//        car7_NewWind2=1;
//        if(Bit( HVAC_870_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_870_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car7_NewWind2=0;

//    }
//    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 ))
//    {
//        car8_NewWind1=1;
//        if(Bit( HVAC_880_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_880_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car8_NewWind1=0;

//    }
//    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 ))
//    {
//        car8_NewWind2=1;
//        if(Bit( HVAC_880_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_880_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car8_NewWind2=0;

//    }

//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);
//}

