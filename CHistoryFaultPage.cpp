#include "CHistoryFaultPage.h"

ROMDATA g_PicRom_HistoryFault[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("故障记录"))
    {"",                            D_FONT_BOLD(6),      QRect( 0,  50, 800,   1),             Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 0,  90, 800,   1),             Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect( 0,  91, 800, 420),             Qt::gray,               Qt::gray,                 CONTROL_LINE,            ID_IGNORE         },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,   92,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE1    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76,  92,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME1    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,  92,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE1    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226,  92, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME1    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376,  92,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS1   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451,  92, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP1    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  112,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE2    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 112,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME2    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 112,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE2    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 112, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME2    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 112,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS2   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 112, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP2    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  132,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE3    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 132,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME3    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 132,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE3    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 132, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME3    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 132,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS3   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 132, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP3    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  152,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE4    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 152,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME4    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 152,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE4    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 152, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME4    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 152,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS4   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 152, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP4    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  172,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE5    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 172,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME5    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 172,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE5    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 172, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME5    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 172,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS5   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 172, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP5    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  192,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE6    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 192,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME6    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 192,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE6    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 192, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME6    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 192,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS6   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 192, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP6    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  212,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE7    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 212,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME7    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 212,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE7    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 212, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME7    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 212,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS7   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 212, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP7    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  232,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE8    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 232,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME8    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 232,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE8    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 232, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME8    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 232,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS8   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 232, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP8    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  252,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE9    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 252,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME9    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 252,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE9    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 252, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME9    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 252,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS9   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 252, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP9    },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  272,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE10   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 272,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME10   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 272,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE10   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 272, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME10   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 272,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS10  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 272, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP10   },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  292,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE11   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 292,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME11   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 292,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE11   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 292, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME11   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 292,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS11  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 292, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP11   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  312,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE12   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 312,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME12   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 312,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE12   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 312, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME12   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 312,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS12  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 312, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP12   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  332,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE13   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 332,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME13   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 332,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE13   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 332, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME13   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 332,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS13  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 332, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP13   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  352,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE14   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 352,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME14   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 352,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE14   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 352, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME14   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 352,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS14  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 352, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP14   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  372,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE15   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 372,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME15   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 372,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE15   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 372, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME15   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 372,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS15  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 372, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP15   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  392,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE16   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 392,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME16   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 392,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE16   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 392, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME16   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 392,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS16  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 392, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP16   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  412,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE17   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 412,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME17   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 412,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE17   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 412, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME17   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 412,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS17  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 412, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP17   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  432,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE18   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 432,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME18   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 432,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE18   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 432, 149,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME18   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 432,  74,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS18  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 432, 348,  19),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP18   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  452,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE19   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 452,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME19   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 452,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE19   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 452, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME19   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 452,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS19  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 452, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP19   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  1,  472,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FDATE20   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  76, 472,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FTIME20   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151, 472,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCODE20   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 226, 472, 149,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FNAME20   },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 376, 472,  74,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FCLASS20  },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 451, 472, 348,  19),           Qt::green,              Qt::white,                CONTROL_LABEL,           ID_PICCHF_LABEL_FHELP20   },
    {"",                            D_FONT_BOLD(6),      QRect( 75,   50,   1,  40),           Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(150,   50,   1,  40),           Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(225,   50,   1,  40),           Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(375,   50,   1,  40),           Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450,   50,   1,  40),           Qt::white,              Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("报警日期"),                D_FONT_BOLD(8),      QRect(  0, 50, 75, 40),               Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("报警时间"),                D_FONT_BOLD(8),      QRect( 75, 50, 75, 40),               Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("变量名"),                  D_FONT_BOLD(8),      QRect(150, 50, 75, 40),               Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("报警类型"),                D_FONT_BOLD(8),      QRect(225, 50, 150, 40),              Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("报警组名"),                D_FONT_BOLD(8),      QRect(375, 50, 75, 40),               Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("变量描述"),                D_FONT_BOLD(8),      QRect(450, 50, 350, 40),              Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_HistoryFaultRomLen = sizeof(g_PicRom_HistoryFault)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHistoryFaultPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CHistoryFaultPage::CHistoryFaultPage()
{
}

void CHistoryFaultPage::OnUpdatePage()
{

}

void CHistoryFaultPage::OnInitPage()
{

}

void CHistoryFaultPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("返   回"));
}

void CHistoryFaultPage::OnComBtn1Clk()
{

}

void CHistoryFaultPage::OnComBtn2Clk()
{

}

void CHistoryFaultPage::OnComBtn3Clk()
{

}

void CHistoryFaultPage::OnComBtn4Clk()
{

}

void CHistoryFaultPage::OnComBtn5Clk()
{

}

void CHistoryFaultPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_TODAYFAULT);
}

