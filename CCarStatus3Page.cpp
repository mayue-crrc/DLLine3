#include "CCarStatus3Page.h"

ROMDATA g_PicRom_CarStatus3[] =
{


#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QSTR("第3页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_PAGEUP             },

#endif
#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("旁路") )
    {"",                          D_FONT_BOLD(10),      QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBCARS3_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QSTR("车辆状态") )

    {QSTR("通信中断"),                D_FONT_BOLD(8),      QRect( 20, 6,  162, 30),          Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS3_COMMINTERRUPT          },
    {QSTR("网压"),                   D_FONT_BOLD(8),      QRect(40, 45, 120, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(40, 66, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_V                },

    {QSTR("网流"),                   D_FONT_BOLD(8),      QRect(180, 45, 120, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(180,66, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_A                },

    {QSTR("牵引*制动级位"),            D_FONT_BOLD(8),      QRect(470, 45, 150, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(470, 66, 150, 30),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_TRACTIONMODEL    },

    {QSTR("速度"),                   D_FONT_BOLD(8),      QRect(630, 45, 80, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(630, 66, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_SPEED            },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720, 50, 65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCARS3_ICON_WARNNING          },

    {"",                            D_FONT_BOLD(5),      QRect(178,110,600, 60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCARS3_TRAIN                  },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700,128, 45, 20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS3_ARROW_RIGHT            },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(58, 128, 45, 20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS3_ARROW_LEFT             },

#endif

    {"",                            D_FONT_BOLD(6),      QRect(10, 150, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 180, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 210, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 240, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 270, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 300, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 330, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 360, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 390, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 420, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 450, 691, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(10, 150, 1, 300),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(250, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(475, 180, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(550, 180, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(625, 180, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                             D_FONT_BOLD(6),      QRect(700, 180, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("车号"),                   D_FONT_BOLD(7),      QRect(11, 151, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("牵引安全环路\n旁路"),            D_FONT_BOLD(4),      QRect(11, 181, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("门旁路"),                 D_FONT_BOLD(5),      QRect(11, 211, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("停放制动缓解\n旁路"),            D_FONT_BOLD(4),      QRect(11, 241, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("制动不缓解旁路"),            D_FONT_BOLD(7),      QRect(11, 181, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("停放制动旁路"),              D_FONT_BOLD(7),      QRect(11, 211, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("门安全线旁路"),            D_FONT_BOLD(7),      QRect(11, 241, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("ATP切除"),                D_FONT_BOLD(7),      QRect(11, 301, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急制动环线旁路"),                D_FONT_BOLD(7),      QRect(11, 271, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("常用制动施加\n旁路"),            D_FONT_BOLD(4),      QRect(11, 361, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("总风压低旁路"),            D_FONT_BOLD(5),      QRect(11, 301, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("安全环路旁路"),            D_FONT_BOLD(5),      QRect(11, 331, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("本车常用制动\n施加旁路"),               D_FONT_BOLD(4),      QRect(11, 391, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("常用制动缓解\n旁路"),               D_FONT_BOLD(4),      QRect(11, 421, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("1"),                   D_FONT_BOLD(8),      QRect(103, 153,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                   D_FONT_BOLD(8),      QRect(253, 153,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                   D_FONT_BOLD(8),      QRect(403, 153,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                   D_FONT_BOLD(8),      QRect(553, 153,  140,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //牵引安全环路旁路－－－－制动不缓解旁路
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 184, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1AEROSPEED      },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 181, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(405, 181, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 184, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4AEROSPEED      },
    //门旁路－－－－停放制动旁路
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 214, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1PLACEREMIT           },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 211, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(405, 211, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 214, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4PLACEREMIT           },
   //停放制动缓解－－－－门安全线旁路
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 244, 140, 23),          Qt::white,                Qt::green,                  CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1DOOR     },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 241, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(405, 241, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 244, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4DOOR      },
//ATP切除
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 304, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1ATPCUT    },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 301, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(405,301, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 304, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4ATPCUT    },

//紧急制动环线旁路
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 274, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1EMERBRAKE    },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(255, 271, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("-- --"),                   D_FONT_BOLD(12),      QRect(405,271, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 274, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4EMERBRAKE    },

//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(105, 364, 140, 23),          Qt::white,                Qt::green,                  CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1COMMONUSEREMIT  },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(255,361, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(405,361, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(555, 364, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4COMMONUSEREMIT  },

//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(105, 304, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1WINDPRESSLOW    },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(205, 301, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(405,301, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(328, 331, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(403, 331, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(478, 331, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(553, 331, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(555, 304, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4WINDPRESSLOW    },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(105, 334, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1JJZDHL    },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(255, 331, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(405,331, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(328, 361, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(403, 361, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(478, 361, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(553, 361, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(555, 334, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4JJZDHL    },


//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(105, 394, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass1    },
//    {QSTR(""),                   D_FONT_BOLD(6),      QRect(255, 394, 140, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass2         },
//    {QSTR(""),                   D_FONT_BOLD(6),      QRect(405, 394, 140, 23),           Qt::white,                Qt::green,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CommonBrakeAppBypass3         },
//    {QSTR(""),                   D_FONT_BOLD(6),      QRect(555, 394, 140, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass4         },
//    //{QSTR(""),                   D_FONT_BOLD(6),      QRect(403, 424, 70, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass5         },
//    //{QSTR(""),                   D_FONT_BOLD(6),      QRect(478, 424, 70, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass6         },
//    //{QSTR(""),                   D_FONT_BOLD(6),      QRect(553, 424, 70, 23),          Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass7         },
//    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(628, 424, 70,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeAppBypass8    },

//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(105, 424, 140, 23),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeRelBypass1    },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(255, 421, 140, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("-- --"),                   D_FONT_BOLD(6),      QRect(405,421, 140, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(328, 421, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(403, 451, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(478, 451, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("- -"),                   D_FONT_BOLD(6),      QRect(553, 451, 70, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(555, 424, 140,23),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CommonBrakeRelBypass2    },


    // //   {QSTR("第3页/共3页"),             D_FONT_BOLD(6),      QRect(675, 480, 120, 20),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("ATO模式"),                D_FONT_BOLD(8),      QRect(25, 500, 100, 39),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_ATOMODE             },
//    {QSTR("网络模式"),                D_FONT_BOLD(8),      QRect(155, 500, 100, 39),         Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_NETMODE             },
//    {QSTR("逆变模式"),                D_FONT_BOLD(8),      QRect(285, 500, 100, 39),         Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CONTRAVARIANTMODE   },
//    {QSTR("洗车模式"),                D_FONT_BOLD(8),      QRect(415, 500, 100, 39),         Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_WASHCARMODE         },
////    {QSTR("被救援"),                 D_FONT_BOLD(8),      QRect(545, 500, 100, 39),         Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBCARS3_BUTTON_EMERGENCYRESCUE    },
////    {"<<",                          D_FONT_BOLD(6),      QRect(675, 500, 50, 39),          Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBCARS3_BUTTON_PAGEDOWN           },
////    {">>",                          D_FONT_BOLD(6),      QRect(725, 500, 50, 39),          Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBCARS3_BUTTON_PAGEUP             },

    //{QSTR("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_ATOMODE         },
    //{QSTR("网络模式"),          D_FONT_BOLD(8),      QRect(18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_NETMODE         },
    {QSTR("高加速模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_HIGHACCEMODE         },
    {QSTR("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_WASHCARMODE         },
    {QSTR("紧急运行模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85+20,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_EMERGENCYMODE         },
    //    {QSTR("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE         },
    //    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },
    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(627, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_FASPAGE         },
    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST         },

};
int g_CarStatus3RomLen = sizeof(g_PicRom_CarStatus3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus3Page,CPage)
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
        ON_BTNCLK(  ID_PIBCARS3_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif

     //   ON_BTNCLK(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS3_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBCARS3_BUTTON_FASPAGE, OnFASpageBtnClk)
        ON_BTNCLK(ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST, OnEMERGENCYBROADCASTpageBtnClk)


END_MESSAGE_MAP()

CCarStatus3Page::CCarStatus3Page()
{
}

void CCarStatus3Page::OnUpdatePage()
{
    UpdateColor();

    UpdateATOMode();
    UpdateNETMode();
    //UpdateContravariant();
    UpdateHighAcceMode();
    UpdateWashCarMode();
    UpdateEmergencyMode();

    updateTrain(ID_PIBCARS3_TRAIN);
    updateArrow(ID_PIBCARS3_ARROW_LEFT,ID_PIBCARS3_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS3_TRAIN);//3.5


    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
#ifdef PAGE_HEADER_OLD
    UpdateCommInterrupt(ID_PIBCARS3_COMMINTERRUPT);
    updateFault(ID_PIBCARS3_ICON_WARNNING);
#endif
//    UpdateEmergencyBroadcast();


}


void CCarStatus3Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_SPEED))->SetBorderColor(Qt::white);
#endif
 //   ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    //((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_ATOMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_NETMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_EMERGENCYMODE))->SetBorderColor(Qt::white);

}

void CCarStatus3Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetButtonType(BUTTON_STATION1);
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
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void CCarStatus3Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CCarStatus3Page::OnEMERGENCYBROADCASTpageBtnClk()
{
    //pageback=3;
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus3Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus3Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus3Page::OnComBtn3Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS1);
        ChangePage(PAGE_INDEX_CARSTATUS4);
    }

    void CCarStatus3Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus3Page::OnComBtn5Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS3);
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus3Page::OnComBtn6Clk()
    {
        //ChangePage(PAGE_INDEX_HVACSETTING);
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus3Page::OnComBtn7Clk()
    {
         //ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus3Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3HELP);
    }
#else
    void CCarStatus3Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus3Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus3Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus3Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus3Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus3Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3HELP);
    }


#endif
    void CCarStatus3Page::OnPageDownBtnClk()
    {
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS2);
#endif

    }



void CCarStatus3Page::UpdateAValue()
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

    SetAValue(ID_PIBCARS3_LABEL_A, webflow);
#endif
}

void CCarStatus3Page::UpdateVValue()
{

#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBCARS3_LABEL_V);
#endif
}

void CCarStatus3Page::UpdateTractionBrak()
{

#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBCARS3_LABEL_TRACTIONMODEL);
#endif
}

void CCarStatus3Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));
#endif

}


void CCarStatus3Page::UpdateColor()
{
    int zerospeed_color1        = 0;
    int zerospeed_color2        = 0;
    int door_color1             = 0;
    int door_color2             = 0;
    int placeremit_color1       = 0;
    int placeremit_color2       = 0;
    int commonuseremit_color1   = 0;
    int commonuseremit_color2   = 0;
    int windpresslow_color1     = 0;
    int windpresslow_color2     = 0;
    int jjzdhl_color1           = 0;
    int jjzdhl_color2           = 0;
    int atpcut_color1           = 0;
    int atpcut_color2           = 0;
    int CommonBrakeAppBypass1   = 0;
    int CommonBrakeAppBypass2   = 0;
    int CommonBrakeAppBypass3   = 0;
    int CommonBrakeAppBypass4   = 0;
    int CommonBrakeAppBypass5   = 0;
    int CommonBrakeAppBypass6   = 0;
    int CommonBrakeAppBypass7   = 0;
    int CommonBrakeAppBypass8   = 0;
    int CommonBrakeRelBypass1   = 0;
    int CommonBrakeRelBypass2   = 0;
    int emerbrakebypass_color1 = 0;
    int emerbrakebypass_color2 = 0;
    //int A130A =0;//modify
    //CTHM_Tc1DI2On_B1	TC1车DI3在线
    //if ( (Bit(CCU_HMI_222_11, 14 ))== 1)
    if ( (Bit(CCU_HMI_308_6, 6 ))== 1)
    {
        //DICT_TractionSafeLoopBypassMonitTci_B1   	牵引安全环路旁路监视－－制动不缓解旁路
        //if (Bit( DI_110_3, 1 ) == 1)
        if (Bit( RIOM_111_14, 15 ) == 1)
        {
            zerospeed_color1 = 1; //绿色 闭合
        }
        else
        {
            zerospeed_color1 = 2; //黑色 断开
        }
        //DICT_BypassAllDoorsClosedTci_B1    门旁路－－停放制动旁路
        if (Bit( RIOM_111_14, 14 ) == 1)
        {
             placeremit_color1 = 1;
        }
        else
        {
            placeremit_color1 = 2;
        }
        //DICT_BypassAllPBreleasedTci_B1    旁路：停放制动缓解－－门安全线旁路
        if (Bit( RIOM_111_14, 13 ) == 1)
        {
             door_color1= 1;
        }
        else
        {
            door_color1 = 2;
        }
        //ATP切除
        if(Bit(RIOM_111_14, 3 )==1)
        {
            atpcut_color1 = 1;
        }
        else
        {
            atpcut_color1 = 2;
        }
        //紧急制动环线旁路
        if(Bit(RIOM_111_14, 10 )==1)
        {
            emerbrakebypass_color1 = 1;
        }
        else
        {
            emerbrakebypass_color1 = 2;
        }
    }
    else
    {
        zerospeed_color1 = 0;
        door_color1 = 0 ;
        placeremit_color1 = 0;//通信异常 白
        atpcut_color1 = 0;
        emerbrakebypass_color1 = 0;
    }

    //if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
    if ( (Bit(CCU_HMI_308_7, 6 ))== 1)      //制动不缓解旁路
    {
        if(Bit( RIOM_141_14, 15 ) == 1)
        {
            zerospeed_color2 = 1;
        }
        else
        {
            zerospeed_color2 = 2;
        }
        if (Bit( RIOM_141_14, 14 ) == 1)    //停放制动旁路
        {
             placeremit_color2= 1;
        }
        else
        {
            placeremit_color2 = 2;
        }
        if (Bit( RIOM_141_14, 13 ) == 1)    //门安全线旁路
        {
            door_color2 = 1;
        }
        else
        {
            door_color2 = 2;
        }
//ATP切除
        if(Bit( RIOM_141_14, 3 ) == 1)
        {
            atpcut_color2 = 1;
        }
        else
        {
            atpcut_color2=2;
        }
        //紧急制动环线旁路
        if(Bit( RIOM_141_14, 10 ) == 1)
        {
            emerbrakebypass_color2 = 1;
        }
        else
        {
            emerbrakebypass_color2=2;
        }
    }
    else
    {
        zerospeed_color2 = 0; // 白色 通信异常
        door_color2 = 0;
        placeremit_color2 = 0;
        atpcut_color2 = 0;
        emerbrakebypass_color2=0;
    }


    if ( (Bit(CCU_HMI_222_11, 13 ))== 1)
    {

        //DICT_BypassPneumaticSerBrakesTci_B1    旁路：常用制动施加
        if (Bit( DI_110_5, 8 ) == 1)
        {
            commonuseremit_color1 = 2;
        }
        else
        {
            commonuseremit_color1 = 1;
        }
        //DICT_BypassMRpressureTci_B1    旁路：总风低压
        if (Bit( DI_110_6, 9 ) == 1)
        {
            windpresslow_color1 = 2;
        }
        else
        {
            windpresslow_color1 = 1;
        }
        //DICT_BypassEmergencyLoopTci_B1    旁路：安全环路
        if(Bit( DI_110_5, 5 )==1)
        {
            jjzdhl_color1 = 2;
        }
        else
        {
            jjzdhl_color1 = 1;
        }

    }
    else
    {
        commonuseremit_color1 = 0;
        windpresslow_color1 = 0;
        jjzdhl_color1 = 0;
    }

    if ( (Bit(CCU_HMI_222_11, 12 ))== 1)
    {

        if (Bit( DI_110_7, 9 ) == 1)
        {
            CommonBrakeAppBypass1 = 2;
        }
        else
        {
            CommonBrakeAppBypass1 = 1;
        }
        //DICT_ CommonBrakeAppBypassSwitchMonitor Tci_B1    本车常用制动施加旁路开关监视
        if (Bit( DI_110_7, 10 ) == 1)
        {
            CommonBrakeRelBypass1 = 2;
        }
        else
        {
            CommonBrakeRelBypass1 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass1 = 0;
        CommonBrakeRelBypass1 = 0;
    }





if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
    {
        if (Bit( DI_180_5, 8 ) == 1)
        {
            commonuseremit_color2 = 2;
        }
        else
        {
            commonuseremit_color2 = 1;
        }
        if (Bit( DI_180_6, 9 ) == 1)
        {
            windpresslow_color2 = 2;
        }
        else
        {
            windpresslow_color2 = 1;
        }
        if(Bit( DI_180_5, 5 ) == 1)
        {
            jjzdhl_color2 = 2;
        }
        else
        {
            jjzdhl_color2=1;
        }
    }
    else
    {
        commonuseremit_color2 = 0;
        windpresslow_color2 = 0;
        jjzdhl_color2 = 0;
    }

    if ( (Bit(CCU_HMI_222_15, 4 ))== 1)
    {
        if (Bit( DI_180_7, 9 ) == 1)
        {
            CommonBrakeAppBypass8 = 2;
        }
        else
        {
            CommonBrakeAppBypass8 = 1;
        }

        if (Bit( DI_180_7, 10 ) == 1)
        {
            CommonBrakeRelBypass2 = 2;
        }
        else
        {
            CommonBrakeRelBypass2 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass8 = 0;
        CommonBrakeRelBypass2 = 0;

    }


    if ( (Bit(CCU_HMI_222_12, 6 ))== 1)
    {
        if (Bit( DI_120_3, 4 ) == 1)
        {
            CommonBrakeAppBypass2 = 2;
        }
        else
        {
            CommonBrakeAppBypass2 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass2 = 0;
    }

    if ( (Bit(CCU_HMI_222_12, 14 ))== 1)
    {
        if (Bit( DI_130_3, 4 ) == 1)
        {
            CommonBrakeAppBypass3 = 2;
        }
        else
        {
            CommonBrakeAppBypass3 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass3 = 0;
    }

    if ( (Bit(CCU_HMI_222_13, 6 ))== 1)
    {
        if (Bit( DI_140_3, 4 ) == 1)
        {
            CommonBrakeAppBypass4 = 2;
        }
        else
        {
            CommonBrakeAppBypass4 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass4 = 0;
    }

    if ( (Bit(CCU_HMI_222_13, 14 ))== 1)
    {
        if (Bit( DI_150_3, 4 ) == 1)
        {
            CommonBrakeAppBypass5 = 2;
        }
        else
        {
            CommonBrakeAppBypass5 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass5 = 0;
    }

    if ( (Bit(CCU_HMI_222_14, 6 ))== 1)
    {
        if (Bit( DI_160_3, 4 ) == 1)
        {
            CommonBrakeAppBypass6 = 2;
        }
        else
        {
            CommonBrakeAppBypass6 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass6 = 0;
    }

    if ( (Bit(CCU_HMI_222_14, 14 ))== 1)
    {
        if (Bit( DI_170_3, 4 ) == 1)
        {
            CommonBrakeAppBypass7 = 2;
        }
        else
        {
            CommonBrakeAppBypass7 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass7 = 0;
    }




    SetLabelColor(ID_PIBCARS3_LABEL_CAR1AEROSPEED,zerospeed_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR4AEROSPEED,zerospeed_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1DOOR,door_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR4DOOR,door_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1PLACEREMIT,placeremit_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR4PLACEREMIT,placeremit_color2);
//    SetLabelColor(ID_PIBCARS3_LABEL_CAR1COMMONUSEREMIT,commonuseremit_color1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CAR4COMMONUSEREMIT,commonuseremit_color2);
//    SetLabelColor(ID_PIBCARS3_LABEL_CAR1WINDPRESSLOW,windpresslow_color1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CAR4WINDPRESSLOW,windpresslow_color2);
//    SetLabelColor(ID_PIBCARS3_LABEL_CAR1JJZDHL, jjzdhl_color1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CAR4JJZDHL, jjzdhl_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ATPCUT, atpcut_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR4ATPCUT, atpcut_color2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1EMERBRAKE, emerbrakebypass_color1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR4EMERBRAKE, emerbrakebypass_color2);

//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass1, CommonBrakeAppBypass1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass2, CommonBrakeAppBypass2);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass3, CommonBrakeAppBypass3);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass4, CommonBrakeAppBypass4);
    //SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass5, CommonBrakeAppBypass5);
    //SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass6, CommonBrakeAppBypass6);
    //SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass7, CommonBrakeAppBypass7);
    //SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeAppBypass8, CommonBrakeAppBypass8);

//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeRelBypass1, CommonBrakeRelBypass1);
//    SetLabelColor(ID_PIBCARS3_LABEL_CommonBrakeRelBypass2, CommonBrakeRelBypass2);
}


void CCarStatus3Page::UpdateATOMode()
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

    //SetATOModeLabelColor(ID_PIBCARS3_LABEL_ATOMODE, ATC_invalid);
    //GetDlgItem(ID_PIBCARS3_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}

void CCarStatus3Page::UpdateNETMode()
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

    //((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_NETMODE))->SetCtrlText(net_mode);
    //SetNETModeLabelColor(ID_PIBCARS3_LABEL_NETMODE, modecolor);
}
void CCarStatus3Page::UpdateHighAcceMode()//高加速模式
{
//    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
//        {

//            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//      if (Bit(CCU_HMI_308_6, 6 )==1)
//          {
//          if ( (Bit( RIOM_111_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_510_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }
//      if (Bit(CCU_HMI_308_7, 6 )==1)
//          { if ( (Bit( RIOM_141_14, 12 ) ) == 1)
//              //if ( (Bit( TCU_520_10, 1 ) ) == 1)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->HideLabel();
//            }
//          }

//        }

//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->HideLabel();
//        }

    if (Bit(CCU_HMI_308_6, 6 )|| Bit(CCU_HMI_308_7, 6 ))
        {

            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
          if (Bit(CCU_HMI_308_6, 6 )&&Bit( RIOM_111_14, 12 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
              }
          else if (Bit(CCU_HMI_308_7, 6 )&&Bit( RIOM_141_14, 12 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->SetCtrlBKColor(Qt::green);
              }
          else
              {
                   ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->HideLabel();
              }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_HIGHACCEMODE))->HideLabel();
        }
    }


void CCarStatus3Page::UpdateEmergencyMode()//紧急运行模式
{
    if (Bit(CCU_HMI_308_6, 8 )|| Bit(CCU_HMI_308_7, 8 ))
        {
            //if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
          if (Bit(CCU_HMI_308_6, 8 )&&Bit( RIOM_111_12, 2 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
              }
          else if (Bit(CCU_HMI_308_7, 8 )&&Bit( RIOM_141_12, 2 ))
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_EMERGENCYMODE))->SetCtrlBKColor(Qt::green);
              }
          else
              {
                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_EMERGENCYMODE))->HideLabel();
              }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_EMERGENCYMODE))->HideLabel();
        }
 }

void CCarStatus3Page::UpdateWashCarMode()
{
    //if(Bit(CCU_HMI_308_6,6)||Bit(CCU_HMI_308_7,6))//RIOM DI3在线
    if(Bit(CCU_HMI_308_9,16))
        {
               if(Bit(CCU_HMI_308_6,6)&&Bit( RIOM_111_14, 6 ))
                {
                        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
                }
         }
//    else
//        {
//              ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
//        }
    else if(Bit(CCU_HMI_308_9,15))
      {
         if(Bit(CCU_HMI_308_7,6)&&Bit( RIOM_141_14, 6 ))
                {
                        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
                }

      }
   else
      {
        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
      }

}


//void CCarStatus3Page::UpdateEmergencyBroadcast()
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

void CCarStatus3Page::SetNETModeLabelColor(int id, int colorVal)
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


void CCarStatus3Page::SetATOModeLabelColor(int id,int colorVal)
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


void CCarStatus3Page::SetLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }

    return;
}

//void CCarStatus3Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus3Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}
