#include "CRealTimeFaultPage.h"
#include "CFaultInfoDialog.h"
#include <qdatetime.h>
#include <qdebug.h>

ROMDATA g_PicRom_RealTimeFault[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("实时故障"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT(6),       QRect(  0,  50, 800,   1),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(  0,  90, 800,   1),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },

    {"",                            D_FONT(6),       QRect( 95,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(181,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(257,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(343,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },

    {QSTR("开始日期"),                D_FONT(8),      QRect(  1,  50,  94,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("开始时间"),                D_FONT(8),      QRect( 96,  50,  84,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("故障代码"),                D_FONT(8),      QRect(182,  50,  74,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("故障分类"),                D_FONT(8),      QRect(258,  50,  84,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("故障名称"),                D_FONT(8),      QRect(344,  50, 456,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },

// H Line
    {"",                             D_FONT(6),      QRect(  0,  111, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  131, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  151, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  171, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  191, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  211, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  231, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  251, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  271, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  291, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  311, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  331, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  351, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  371, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  391, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  411, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  431, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  451, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  471, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                             D_FONT(6),      QRect(  0,  491, 800,  1),           Qt::darkGray,          Qt::black,                   CONTROL_LINE,          ID_IGNORE         },

// start date
    {QSTR(""),                       D_FONT(7),      QRect(  1,  92,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE1         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 112,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE2         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 132,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE3         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 152,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE4         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 172,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE5         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 192,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE6         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 212,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE7         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 232,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE8         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 252,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE9         },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 272,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE10        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 292,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE11        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 312,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE12        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 332,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE13        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 352,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE14        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 372,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE15        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 392,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE16        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 412,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE17        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 432,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE18        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 452,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE19        },
    {QSTR(""),                       D_FONT(7),      QRect(  1, 472,  94,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_DATE20        },

// start time
    {QSTR(""),                       D_FONT(7),      QRect( 96,  92,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME1         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 112,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME2         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 132,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME3         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 152,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME4         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 172,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME5         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 192,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME6         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 212,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME7         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 232,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME8         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 252,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME9         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 272,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME10        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 292,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME11        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 312,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME12        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 332,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME13        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 352,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME14        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 372,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME15        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 392,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME16        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 412,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME17        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 432,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME18        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 452,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME19        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 472,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_S_TIME20        },

// code
    {QSTR(""),                       D_FONT(7),      QRect(182,  92,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE1           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 112,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE2           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 132,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE3           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 152,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE4           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 172,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE5           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 192,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE6           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 212,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE7           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 232,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE8           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 252,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE9           },
    {QSTR(""),                       D_FONT(7),      QRect(182, 272,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE10          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 292,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE11          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 312,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE12          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 332,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE13          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 352,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE14          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 372,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE15          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 392,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE16          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 412,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE17          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 432,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE18          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 452,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE19          },
    {QSTR(""),                       D_FONT(7),      QRect(182, 472,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CODE20          },

// category
    {QSTR(""),                       D_FONT(7),      QRect(258,  92,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY1       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 112,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY2       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 132,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY3       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 152,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY4       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 172,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY5       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 192,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY6       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 212,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY7       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 232,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY8       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 252,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY9       },
    {QSTR(""),                       D_FONT(7),      QRect(258, 272,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY10      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 292,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY11      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 312,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY12      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 332,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY13      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 352,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY14      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 372,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY15      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 392,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY16      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 412,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY17      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 432,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY18      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 452,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY19      },
    {QSTR(""),                       D_FONT(7),      QRect(258, 472,  85,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_CATEGORY20      },

// name
    {QSTR(""),                       D_FONT(7),      QRect(344,  92, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME1           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 112, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME2           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 132, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME3           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 152, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME4           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 172, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME5           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 192, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME6           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 212, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME7           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 232, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME8           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 252, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME9           },
    {QSTR(""),                       D_FONT(7),      QRect(344, 272, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME10          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 292, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME11          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 312, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME12          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 332, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME13          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 352, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME14          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 372, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME15          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 392, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME16          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 412, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME17          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 432, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME18          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 452, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME19          },
    {QSTR(""),                       D_FONT(7),      QRect(344, 472, 405,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_NAME20          },

// confirm button
    {QSTR("提示"),                     D_FONT(7),      QRect(750,  92, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM1           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 112, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM2           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 132, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM3           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 152, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM4           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 172, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM5           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 192, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM6           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 212, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM7           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 232, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM8           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 252, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM9           },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 272, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM10          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 292, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM11          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 312, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM12          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 332, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM13          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 352, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM14          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 372, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM15          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 392, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM16          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 412, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM17          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 432, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM18          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 452, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM19          },
    {QSTR("提示"),                     D_FONT(7),      QRect(750, 472, 49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,         ID_RTF_PAGE_BTN_CFM20          },

    {"<<",                           D_FONT_BOLD(6), QRect(565, 505,  55,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_RTF_PAGE_BTN_PAGEUP            },
    {">>",                           D_FONT_BOLD(6), QRect(645, 505,  55,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_RTF_PAGE_BTN_PAGEDOWN          },
    {"1/1",                          D_FONT(7),      QRect(710, 515,  50,  25),           Qt::yellow,            Qt::black,                   CONTROL_LABEL,         ID_RTF_PAGE_LABEL_PAGENUM         },

    {QSTR("全部"),                    D_FONT(8),      QRect( 25, 505, 100,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_RTF_PAGE_BTN_ALL               },
    {QSTR("1,2级故障"),               D_FONT(8),      QRect(155, 505, 100,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_RTF_PAGE_BTN_LEVEL12           },
    {QSTR("3级故障"),                 D_FONT(8),      QRect(285, 505, 100,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_RTF_PAGE_BTN_LEVEL3            },

};

int g_RealTimeFaultRomLen = sizeof(g_PicRom_RealTimeFault)/sizeof(ROMDATA);

int diplay_realtime_faults_idx_array[D_FAULTS_NUM_PER_PAGE];

BEGIN_MESSAGE_MAP(CRealTimeFaultPage,CPage)
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
        ON_BTNCLK(ID_RTF_PAGE_BTN_PAGEDOWN, OnPageDownBtnClk)
        ON_BTNCLK(ID_RTF_PAGE_BTN_PAGEUP, OnPageUpBtnClk)
        ON_LBUTTONDOWN(ID_RTF_PAGE_BTN_ALL, OnBtnAllDown)
        ON_LBUTTONDOWN(ID_RTF_PAGE_BTN_LEVEL12, OnBtnLevel12Down)
        ON_LBUTTONDOWN(ID_RTF_PAGE_BTN_LEVEL3, OnBtnLevel3Down)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM1,  OnDetailClk1)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM2,  OnDetailClk2)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM3,  OnDetailClk3)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM4,  OnDetailClk4)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM5,  OnDetailClk5)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM6,  OnDetailClk6)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM7,  OnDetailClk7)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM8,  OnDetailClk8)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM9,  OnDetailClk9)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM10, OnDetailClk10)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM11, OnDetailClk11)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM12, OnDetailClk12)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM13, OnDetailClk13)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM14, OnDetailClk14)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM15, OnDetailClk15)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM16, OnDetailClk16)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM17, OnDetailClk17)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM18, OnDetailClk18)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM19, OnDetailClk19)
        ON_BTNCLK(ID_RTF_PAGE_BTN_CFM20, OnDetailClk20)
END_MESSAGE_MAP()

CRealTimeFaultPage::CRealTimeFaultPage()
{
    m_eligiblecount = 0;
}

void CRealTimeFaultPage::OnPageDownBtnClk()
{
    int maxPageNum = m_eligiblecount/D_FAULTS_NUM_PER_PAGE;
    if ((0 != (m_eligiblecount % D_FAULTS_NUM_PER_PAGE))
        || (0 == m_eligiblecount))
    {
        maxPageNum += 1;
    }

    if (g_current_faults_pagenum < maxPageNum)
    {
        g_current_faults_pagenum += 1;
    }
    UpdateRealTimePageNum();

    OnUpdatePage();
}

void CRealTimeFaultPage::OnPageUpBtnClk()
{
    if (g_current_faults_pagenum > 1)
    {
        g_current_faults_pagenum -= 1;
    }
    UpdateRealTimePageNum();
    OnUpdatePage();
}

void CRealTimeFaultPage::OnBtnAllDown()
{
//    g_subSystemFaultsTitle = QSTR("实时全部故障");
//    ((CLabel *)GetDlgItem(IDLB_COM_TITLE))->SetCtrlText(g_subSystemFaultsTitle);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);

    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_ALL;
    OnUpdatePage();
}

void CRealTimeFaultPage::OnBtnLevel12Down()
{
//    g_subSystemFaultsTitle = QSTR("实时1，2级故障");
//    ((CLabel *)GetDlgItem(IDLB_COM_TITLE))->SetCtrlText(g_subSystemFaultsTitle);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);

    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
    OnUpdatePage();
}

void CRealTimeFaultPage::OnBtnLevel3Down()
{
//    g_subSystemFaultsTitle = QSTR("实时3级故障");
//    ((CLabel *)GetDlgItem(IDLB_COM_TITLE))->SetCtrlText(g_subSystemFaultsTitle);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_DOWN);

    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_3;
    OnUpdatePage();
}

void CRealTimeFaultPage::UpdateRealTimePageNum()
{
    QString str;
    int maxPageNum = m_eligiblecount/D_FAULTS_NUM_PER_PAGE;
    if ((0 != (m_eligiblecount % D_FAULTS_NUM_PER_PAGE))
        || (0 == m_eligiblecount))
    {
        maxPageNum += 1;
    }
    str.sprintf("%d/%d", g_current_faults_pagenum, maxPageNum);
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_PAGENUM))->SetCtrlText(str);//下方的1/20 页码
}

void CRealTimeFaultPage::OnUpdatePage()//更新页面，开始画新的页面
{
    ClearTable();
    memset(diplay_realtime_faults_idx_array, -1, sizeof(diplay_realtime_faults_idx_array));

    UpdateRealTimePage();
}

void CRealTimeFaultPage::UpdateRealTimePage()
{
    int cnt = 0;
    for (int i = 0; i < g_realtimeFaultsList.size(); i++)
    {
        if (RealTimeConditionFilter(g_realtimeFaultsList[i].nRomIndex))
        {
            cnt += 1;
        }
    }
    m_eligiblecount = cnt;

    int maxPageNum = m_eligiblecount/D_FAULTS_NUM_PER_PAGE;// 故障页数
    if ((0 != (m_eligiblecount % D_FAULTS_NUM_PER_PAGE)) //不能整除20 则页数＋1
        || (0 == m_eligiblecount))
    {
        maxPageNum += 1;
    }
    if (g_current_faults_pagenum > maxPageNum)
    {
        g_current_faults_pagenum = maxPageNum;//当前页页数
    }
    DrawRealTime();
    UpdateRealTimePageNum();
}

void CRealTimeFaultPage::OnInitPage()
{
    for (int id=ID_RTF_PAGE_LABEL_NAME1; id<=ID_RTF_PAGE_LABEL_NAME20; id++)//ID 就是一个数字 故障名称
    {
        ((CLabel *)GetDlgItem(id))->SetAlignment(Qt::AlignLeft);
    }


#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton*)GetDlgItem(IDLB_COM_BTN7))->SetTxtFont(D_FONT(5));
#else
    ((CButton*)GetDlgItem(IDLB_COM_BTN5))->SetTxtFont(D_FONT(5));
#endif

    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->m_bAutoUpState = false;
}

void CRealTimeFaultPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     this->InitPageHeader();//3.17
     if(g_backtoprepage)
     {

        #ifdef PAGE_BUTTON_BAR_NEW
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("返   回"));
        #else
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
             ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("返   回"));
        #endif
    }
        else
     {
        #ifdef PAGE_BUTTON_BAR_NEW
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("确   定"));
        #else
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
             ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
             ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   定"));
        #endif
    }
     ((CLabel *)GetDlgItem(IDLB_COM_TITLE))->SetCtrlText(g_subSystemFaultsTitle);

     //g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;

     ((CButton*)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ShowButton();
     ((CButton*)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ShowButton();
     ((CButton*)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ShowButton();

     if(D_CONDITION_FILTER_LEVEL_12 == g_realTimeConditionFilter.level)
     {
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);
     }

     if(D_CONDITION_FILTER_LEVEL_ALL == g_realTimeConditionFilter.level)
     {
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_UP);
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);
     }

     if(D_CONDITION_FILTER_LEVEL_3 == g_realTimeConditionFilter.level)
     {
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_UP);
         ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_DOWN);
     }

     if(!g_bScannFault)
     {

            #ifdef PAGE_BUTTON_BAR_NEW
                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QSTR("故障弹出已屏蔽\n点击按钮可恢复"));
            #else
                GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR("故障弹出已屏蔽\n点击按钮可恢复"));
            #endif
            }
     else
     {
            #ifdef PAGE_BUTTON_BAR_NEW
                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText("");
            #else
                GetDlgItem(IDLB_COM_BTN5)->SetCtrlText("");
            #endif
     }

 }


#ifdef PAGE_BUTTON_BAR_NEW
        void CRealTimeFaultPage::OnComBtn1Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn2Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn3Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn4Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn5Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn6Clk()
        {

        }
        void CRealTimeFaultPage::OnComBtn7Clk()
        {
            g_nStopBtnTimes++;

            if(g_nStopBtnTimes == 3)
            {
                g_bScannFault = false;
                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QSTR("故障弹出已屏蔽\n点击按钮可恢复"));
            }
            if(g_nStopBtnTimes> 3 && g_nStopBtnTimes%3 == 1)
            {
                g_bScannFault = true;
                g_nStopBtnTimes = 0;
                //GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR(""));  不知是否之前的有误
                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QSTR(""));
            }
        }

        void CRealTimeFaultPage::OnComBtn8Clk()
        {
            if(g_backtoprepage)
                ChangePage(CGlobal::m_nPrePageIndex);
            else
                ChangePage(PAGE_INDEX_RUNSTATE);
        }
#else
        void CRealTimeFaultPage::OnComBtn1Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn2Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn3Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn4Clk()
        {

        }

        void CRealTimeFaultPage::OnComBtn5Clk()
        {
            g_nStopBtnTimes++;

            if(g_nStopBtnTimes == 3)
            {
                g_bScannFault = false;
                GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR("故障弹出已屏蔽\n点击按钮可恢复"));
            }
            if(g_nStopBtnTimes> 3 && g_nStopBtnTimes%3 == 1)
            {
                g_bScannFault = true;
                g_nStopBtnTimes = 0;
                GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR(""));
            }
        }

        void CRealTimeFaultPage::OnComBtn6Clk()
        {
            if(g_backtoprepage)
                ChangePage(CGlobal::m_nPrePageIndex);//返回前一页
            else
                ChangePage(PAGE_INDEX_RUNSTATE);
        }
#endif



void CRealTimeFaultPage::DrawLineRealTime(int linenum, ST_REALTIME_FAULT_INFO& realtimeFaultInfo)
{
    QString str = "";
    FAULTS_ROM_DATA *pdata = &g_faultsrom[realtimeFaultInfo.nRomIndex];
    QColor color;
    if (1 == pdata->level)
    {
        color = Qt::red;
    }
    else if (2 == pdata->level)
    {
        color = Qt::darkRed;
    }
    else
    {
        color = Qt::black;
    }
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_S_DATE1 + (linenum - 1)))->SetTxtColor(color);//日期
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_S_TIME1 + (linenum - 1)))->SetTxtColor(color);//时间
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_CODE1 + (linenum - 1)))->SetTxtColor(color);//代码
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_CATEGORY1 + (linenum - 1)))->SetTxtColor(color);//故障分类
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_NAME1 + (linenum - 1)))->SetTxtColor(color);//故障名称

    ST_DATETIME datatime = realtimeFaultInfo.start_datetime;
    str.sprintf("%4d-%2d-%2d", datatime.year, datatime.month, datatime.day);
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_S_DATE1 + (linenum - 1)))->SetCtrlText(str);

    str.sprintf("%2d:%02d:%02d", datatime.hour, datatime.minute, datatime.second);
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_S_TIME1 + (linenum - 1)))->SetCtrlText(str);

    str.sprintf("%4x", pdata->code);
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_CODE1 + (linenum - 1)))->SetCtrlText(str);

    str = GetCategoryStr(pdata->category);
    ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_CATEGORY1 + (linenum - 1)))->SetCtrlText(str);

    int nameidx;
    if (-1 != (nameidx = FindFaultsNameTableIndex(pdata->code)))
    {
        str = GetCarriageString(pdata->pos) + g_faultsinforom[nameidx].name;
        ((CLabel *)GetDlgItem(ID_RTF_PAGE_LABEL_NAME1 + (linenum - 1)))->SetCtrlText(str);
    }

    ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_CFM1 + (linenum - 1)))->SetCtrlText(QSTR("提示"));
//    if (pdata->confirm)
//    {
//        ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_CFM1 + (linenum - 1)))->SetCtrlText("Y");
//    }
//    else
//    {
//        ((CButton *)GetDlgItem(ID_RTF_PAGE_BTN_CFM1 + (linenum - 1)))->SetCtrlText("N");
//    }
}

void CRealTimeFaultPage::ClearTable()
{
    int i;
    ROMDATA *pdata = &g_PicRom_RealTimeFault[0];
    for (i=0; i<g_RealTimeFaultRomLen; i++)
    {
        if ((pdata->nID >= ID_RTF_PAGE_LABEL_S_DATE1)
            && (pdata->nID <= ID_RTF_PAGE_LABEL_NAME20)
            && (CONTROL_LABEL == pdata->nControlType))
        {
            ((CLabel *)GetDlgItem(pdata->nID))->SetCtrlText("");
        }
        else if ((pdata->nID >= ID_RTF_PAGE_BTN_CFM1)
            && (pdata->nID <= ID_RTF_PAGE_BTN_CFM20)
            && (CONTROL_BUTTON == pdata->nControlType))
        {
            ((CButton *)GetDlgItem(pdata->nID))->SetCtrlText("");
        }
        pdata++;
    }
}

bool CRealTimeFaultPage::RealTimeConditionFilter(int idx)
{
    FAULTS_ROM_DATA *pdata = &g_faultsrom[idx];
    if (D_CONDITION_FILTER_LEVEL_ALL != g_realTimeConditionFilter.level)
    {
        if (D_CONDITION_FILTER_LEVEL_12 == g_realTimeConditionFilter.level)
        {
            if ((1 != pdata->level) && (2 != pdata->level))
            {
                return false;
            }
        }
        else if (D_CONDITION_FILTER_LEVEL_3 == g_realTimeConditionFilter.level)
        {
            if (3 != pdata->level)
            {
                return false;
            }
        }
    }
    if (E_FAULTS_CATEGORY_ALL != g_realTimeConditionFilter.category)
    {
        if (pdata->category != g_realTimeConditionFilter.category)
        {
            return false;
        }
    }
    return true;
}

void CRealTimeFaultPage::DrawRealTime()
{
    int nNum = 0;
    int nCnt = 0;
    int min = (g_current_faults_pagenum - 1) * D_FAULTS_NUM_PER_PAGE;

    for(int i = 0; i < g_realtimeFaultsList.size(); i++)
    {
        if(RealTimeConditionFilter(g_realtimeFaultsList[i].nRomIndex)) //过滤出当前故障等级的故障
        {
            nCnt++;
            if(nCnt > min)// if(nCnt >= min)
            {
                DrawLineRealTime(nNum + 1, g_realtimeFaultsList[i]);//画出20条中的一条
                diplay_realtime_faults_idx_array[nNum] = g_realtimeFaultsList[i].nRomIndex;
                nNum++;
                if(nNum == D_FAULTS_NUM_PER_PAGE)//满20条
                    break;
            }
        }
    }
}

void CRealTimeFaultPage::OnDetailClk1()
{
    OnDetailClkN(0);
}

void CRealTimeFaultPage::OnDetailClk2()
{
    OnDetailClkN(1);
}

void CRealTimeFaultPage::OnDetailClk3()
{
    OnDetailClkN(2);
}

void CRealTimeFaultPage::OnDetailClk4()
{
    OnDetailClkN(3);
}

void CRealTimeFaultPage::OnDetailClk5()
{
    OnDetailClkN(4);
}

void CRealTimeFaultPage::OnDetailClk6()
{
    OnDetailClkN(5);
}

void CRealTimeFaultPage::OnDetailClk7()
{
    OnDetailClkN(6);
}

void CRealTimeFaultPage::OnDetailClk8()
{
    OnDetailClkN(7);
}

void CRealTimeFaultPage::OnDetailClk9()
{
    OnDetailClkN(8);
}

void CRealTimeFaultPage::OnDetailClk10()
{
    OnDetailClkN(9);
}

void CRealTimeFaultPage::OnDetailClk11()
{
    OnDetailClkN(10);
}

void CRealTimeFaultPage::OnDetailClk12()
{
    OnDetailClkN(11);
}

void CRealTimeFaultPage::OnDetailClk13()
{
    OnDetailClkN(12);
}

void CRealTimeFaultPage::OnDetailClk14()
{
    OnDetailClkN(13);
}

void CRealTimeFaultPage::OnDetailClk15()
{
    OnDetailClkN(14);
}

void CRealTimeFaultPage::OnDetailClk16()
{
    OnDetailClkN(15);
}

void CRealTimeFaultPage::OnDetailClk17()
{
    OnDetailClkN(16);
}

void CRealTimeFaultPage::OnDetailClk18()
{
    OnDetailClkN(17);
}

void CRealTimeFaultPage::OnDetailClk19()
{
    OnDetailClkN(18);
}

void CRealTimeFaultPage::OnDetailClk20()
{
    OnDetailClkN(19);
}

void CRealTimeFaultPage::OnDetailClkN(int n)
{
    ASSERT((n >= 0) && (n <= (D_FAULTS_NUM_PER_PAGE - 1)));
    if (-1 == diplay_realtime_faults_idx_array[n])
    {
        return;
    }
    g_faultsrom[diplay_realtime_faults_idx_array[n]].confirm = true;
    CFaultInfoDialog dlg;
    dlg.SetClkIndex(diplay_realtime_faults_idx_array[n]);
    dlg.setGeometry(m_pDlg->x()+60, m_pDlg->y()+120, 670, 328);
    dlg.exec();
}
