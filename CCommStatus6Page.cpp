#include "CCommStatus6Page.h"

ROMDATA g_PicRom_CommStatus6[] =
{
    {QSTR("试运行"),              D_FONT_BOLD(8),      QRect( 50,  40, 100, 30),          Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  75, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 75, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY2         },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 75, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 75, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY4         },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 75, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 75, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY6         },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 75, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 75, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY8         },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 75, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 75, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY10        },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 75, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 75, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE1_ARRAY12        },

    {QSTR("word7"),              D_FONT_BOLD(5),      QRect( 50, 100, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 100, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY2         },
    {QSTR("word8"),              D_FONT_BOLD(5),      QRect( 160, 100, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 100, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY4         },
    {QSTR("word9"),              D_FONT_BOLD(5),      QRect( 270, 100, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 100, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY6         },
    {QSTR("word10"),             D_FONT_BOLD(5),      QRect( 380, 100, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 100, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY8         },
    {QSTR("word11"),             D_FONT_BOLD(5),      QRect( 490, 100, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 100, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY10        },
    {QSTR("word12"),             D_FONT_BOLD(5),      QRect( 600, 100, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 100, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE2_ARRAY12        },

    {QSTR("word13"),             D_FONT_BOLD(5),      QRect(  50, 125, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 125, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY2         },
    {QSTR("word14"),             D_FONT_BOLD(5),      QRect( 160, 125, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 125, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY4         },
    {QSTR("word15"),             D_FONT_BOLD(5),      QRect( 270, 125, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320,  125, 60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY6         },
    {QSTR("word16"),             D_FONT_BOLD(5),      QRect( 380, 125, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 125, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY8         },
    {QSTR("word17"),             D_FONT_BOLD(5),      QRect( 490, 125, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 125, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY10        },
    {QSTR("word18"),             D_FONT_BOLD(5),      QRect( 600, 125, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 125, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE3_ARRAY12        },

    {QSTR("word19"),             D_FONT_BOLD(5),      QRect(  50, 150, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 150, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY2         },
    {QSTR("word20"),             D_FONT_BOLD(5),      QRect( 160, 150, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 150, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY4         },
    {QSTR("word21"),             D_FONT_BOLD(5),      QRect( 270, 150, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 150, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY6         },
    {QSTR("word22"),             D_FONT_BOLD(5),      QRect( 380, 150, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 150, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY8         },
    {QSTR("word23"),             D_FONT_BOLD(5),      QRect( 490, 150, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 150, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY10        },
    {QSTR("word24"),             D_FONT_BOLD(5),      QRect( 600, 150, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 150, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE4_ARRAY12        },

    {QSTR("word25"),             D_FONT_BOLD(5),      QRect(  50, 175, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 175, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY2         },
    {QSTR("word26"),             D_FONT_BOLD(5),      QRect( 160, 175, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 175, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY4         },
    {QSTR("word27"),             D_FONT_BOLD(5),      QRect( 270, 175, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 175, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY6         },

    {QSTR("AA"),                 D_FONT_BOLD(5),      QRect( 380, 175, 30, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_COMSTATUS6_LINE_CLEAR          },
    {QSTR("word28"),             D_FONT_BOLD(5),      QRect( 410, 175, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 460, 175, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY8         },
    {QSTR("word29"),             D_FONT_BOLD(5),      QRect( 520, 175, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 570, 175, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY10        },
    {QSTR("word30"),             D_FONT_BOLD(5),      QRect( 630, 175, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 680, 175, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE5_ARRAY12        },

    {QSTR("word31"),             D_FONT_BOLD(5),      QRect(  80, 200, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 130, 200, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY2         },
    {QSTR("word32"),             D_FONT_BOLD(5),      QRect( 190, 200, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 240, 200, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY4         },
    {QSTR("word33"),             D_FONT_BOLD(5),      QRect( 300, 200, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 350, 200, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY6         },
    {QSTR("word34"),             D_FONT_BOLD(5),      QRect( 410, 200, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 460, 200, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY8         },
    {QSTR("word35"),             D_FONT_BOLD(5),      QRect( 520, 200, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 570, 200, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY10        },
    {QSTR("word36"),             D_FONT_BOLD(5),      QRect( 630, 200, 50, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 680, 200, 60, 25),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LINE6_ARRAY12        },

    {QSTR("三级故障"),            D_FONT_BOLD(8),      QRect(  50, 240, 100, 30),         Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W061"),               D_FONT_BOLD(5),      QRect(  50, 275,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 275,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY2        },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 275,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 275,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY4        },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 275,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 275,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY6        },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 275,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 275,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY8        },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 275,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 275,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY10       },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 275,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 275,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE1_ARRAY12       },

    {QSTR("word67"),             D_FONT_BOLD(5),      QRect( 50,  300,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 300,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY2        },
    {QSTR("word8"),              D_FONT_BOLD(5),      QRect( 160, 300,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 300,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY4        },
    {QSTR("word9"),              D_FONT_BOLD(5),      QRect( 270, 300,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 300,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY6        },
    {QSTR("word10"),             D_FONT_BOLD(5),      QRect( 380, 300,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 300,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY8        },
    {QSTR("word11"),             D_FONT_BOLD(5),      QRect( 490, 300,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 300,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY10       },
    {QSTR("word12"),             D_FONT_BOLD(5),      QRect( 600, 300,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 300,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE2_ARRAY12       },

    {QSTR("word73"),             D_FONT_BOLD(5),      QRect( 50,  325,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 325,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY2        },
    {QSTR("word14"),             D_FONT_BOLD(5),      QRect( 160, 325,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 325,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY4        },
    {QSTR("word15"),             D_FONT_BOLD(5),      QRect( 270, 325,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 325,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY6        },
    {QSTR("word16"),             D_FONT_BOLD(5),      QRect( 380, 325,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 325,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY8        },
    {QSTR("word17"),             D_FONT_BOLD(5),      QRect( 490, 325,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 325,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY10       },
    {QSTR("word18"),             D_FONT_BOLD(5),      QRect( 600, 325,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 325,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE3_ARRAY12       },

    {QSTR("word79"),             D_FONT_BOLD(5),      QRect( 50,  350,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 350,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY2        },
    {QSTR("word20"),             D_FONT_BOLD(5),      QRect( 160, 350,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 350,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY4        },
    {QSTR("word21"),             D_FONT_BOLD(5),      QRect( 270, 350,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 350,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY6        },
    {QSTR("word22"),             D_FONT_BOLD(5),      QRect( 380, 350,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 350,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY8        },
    {QSTR("word23"),             D_FONT_BOLD(5),      QRect( 490, 350,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 350,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY10       },
    {QSTR("word24"),             D_FONT_BOLD(5),      QRect( 600, 350,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 350,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE4_ARRAY12       },

    {QSTR("word85"),             D_FONT_BOLD(5),      QRect( 50,  375,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 375,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY2        },
    {QSTR("word26"),             D_FONT_BOLD(5),      QRect( 160, 375,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 375,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY4        },
    {QSTR("word27"),             D_FONT_BOLD(5),      QRect( 270, 375,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 375,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY6        },
    {QSTR("word28"),             D_FONT_BOLD(5),      QRect( 380, 375,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 375,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY8        },
    {QSTR("word29"),             D_FONT_BOLD(5),      QRect( 490, 375,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 375,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY10       },
    {QSTR("word30"),             D_FONT_BOLD(5),      QRect( 600, 375,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 375,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE5_ARRAY12       },

    {QSTR("word91"),             D_FONT_BOLD(5),      QRect( 50,  400,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 400,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY2        },
    {QSTR("word32"),             D_FONT_BOLD(5),      QRect( 160, 400,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 400,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY4        },
    {QSTR("word33"),             D_FONT_BOLD(5),      QRect( 270, 400,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 400,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY6        },
    {QSTR("word34"),             D_FONT_BOLD(5),      QRect( 380, 400,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 400,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY8        },
    {QSTR("word35"),             D_FONT_BOLD(5),      QRect( 490, 400,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 400,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY10       },
    {QSTR("word36"),             D_FONT_BOLD(5),      QRect( 600, 400,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 400,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE6_ARRAY12       },

    {QSTR("word97"),             D_FONT_BOLD(5),      QRect( 50,  425,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 425,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY2        },
    {QSTR("word38"),             D_FONT_BOLD(5),      QRect( 160, 425,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 425,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY4        },
    {QSTR("word39"),             D_FONT_BOLD(5),      QRect( 270, 425,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 425,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY6        },
    {QSTR("word40"),             D_FONT_BOLD(5),      QRect( 380, 425,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 425,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY8        },
    {QSTR("word41"),             D_FONT_BOLD(5),      QRect( 490, 425,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 425,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY10       },
    {QSTR("word42"),             D_FONT_BOLD(5),      QRect( 600, 425,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 425,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE7_ARRAY12       },

    {QSTR("word43"),             D_FONT_BOLD(5),      QRect( 50,  450,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 450,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY2        },
    {QSTR("word44"),             D_FONT_BOLD(5),      QRect( 160, 450,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 450,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY4        },
    {QSTR("word45"),             D_FONT_BOLD(5),      QRect( 270, 450,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 450,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY6        },
    {QSTR("word46"),             D_FONT_BOLD(5),      QRect( 380, 450,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 450,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY8        },
    {QSTR("word47"),             D_FONT_BOLD(5),      QRect( 490, 450,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 450,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY10       },
    {QSTR("word48"),             D_FONT_BOLD(5),      QRect( 600, 450,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 450,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE8_ARRAY12       },

    {QSTR("word49"),             D_FONT_BOLD(5),      QRect( 50,  475,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 475,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY2        },
    {QSTR("word50"),             D_FONT_BOLD(5),      QRect( 160, 475,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 475,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY4        },
    {QSTR("word51"),             D_FONT_BOLD(5),      QRect( 270, 475,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 475,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY6        },
    {QSTR("word52"),             D_FONT_BOLD(5),      QRect( 380, 475,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 475,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY8        },
    {QSTR("word53"),             D_FONT_BOLD(5),      QRect( 490, 475,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 475,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY10       },
    {QSTR("word54"),             D_FONT_BOLD(5),      QRect( 600, 475,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 475,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE9_ARRAY12       },

    {QSTR("word55"),             D_FONT_BOLD(5),      QRect( 50,  500,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY1       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 500,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY2       },
    {QSTR("word56"),             D_FONT_BOLD(5),      QRect( 160, 500,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY3       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 500,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY4       },
    {QSTR("word57"),             D_FONT_BOLD(5),      QRect( 270, 500,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY5       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 500,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY6       },
    {QSTR("word58"),             D_FONT_BOLD(5),      QRect( 380, 500,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY7       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 500,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY8       },
    {QSTR("word59"),             D_FONT_BOLD(5),      QRect( 490, 500,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY9       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 500,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY10      },
    {QSTR("word60"),             D_FONT_BOLD(5),      QRect( 600, 500,  50, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY11      },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 500,  60, 25),         Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS6_LEVEL3_LINE10_ARRAY12      },

    {QSTR("退出"),               D_FONT_BOLD(8),      QRect( 650, 530, 80, 30),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_COMSTATUS6_QUIT                       },
};
int g_CommStatus6RomLen = sizeof(g_PicRom_CommStatus6)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCommStatus6Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()

        ON_BTNCLK(ID_COMSTATUS6_LINE_CLEAR, OnComBtnClk)

        ON_BTNCLK(ID_COMSTATUS6_QUIT, OnQuitBtnClk)

END_MESSAGE_MAP()

CCommStatus6Page::CCommStatus6Page()
{
}

void CCommStatus6Page::OnUpdatePage()
{
    UpdateCommStatusData();

}

void CCommStatus6Page::OnInitPage()
{
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY12))->SetBorderColor(Qt::white);

    //
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE_CLEAR))->SetBorderColor(Qt::white);

    //
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY12))->SetBorderColor(Qt::white);
}

void CCommStatus6Page::OnQuitBtnClk()
{
    ChangePage(PAGE_INDEX_COMMSTATUSDEBUG);
}

void CCommStatus6Page::OnComBtnClk()
{
    car1_axle1_num=0;
    car1_axle2_num=0;
    car1_axle3_num=0;
    car1_axle4_num=0;
    car2_axle1_num=0;
    car3_axle1_num=0;
    car6_axle1_num=0;
    car6_axle2_num=0;
    car6_axle3_num=0;
    car6_axle4_num=0;
    car4_axle1_num=0;
    car5_axle1_num=0;
}

void CCommStatus6Page::UpdateCommStatusData()
{
    //试运行_加速度
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY2))->SetCtrlText(StrFromInt(preoperation_acceleration, 16));

    //试运行_制动距离
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY4))->SetCtrlText( StrFromInt(preoperation_brake_distance, 16));

    //试运行_测定种类
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY6))->SetCtrlText( StrFromInt(preoperation_determine_kind, 16));

    //试运行_级位
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY8))->SetCtrlText(StrFromInt(preoperation_level, 16));

    // 试运行_制动初速
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY10))->SetCtrlText(StrFromInt(preoperation_brake_start_speed, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE1_ARRAY12))->SetCtrlText(QString::number(HMI_send_data6));


    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY2))->SetCtrlText(QString::number(HMI_send_data7));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY4))->SetCtrlText(QString::number(HMI_send_data8));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY6))->SetCtrlText(QString::number(HMI_send_data9));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY8))->SetCtrlText(QString::number(HMI_send_data10));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY10))->SetCtrlText(QString::number(HMI_send_data11));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE2_ARRAY12))->SetCtrlText(QString::number(HMI_send_data12));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY2))->SetCtrlText(QString::number(HMI_send_data13));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY4))->SetCtrlText(QString::number(HMI_send_data14));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY6))->SetCtrlText(QString::number(HMI_send_data15));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY8))->SetCtrlText(QString::number(HMI_send_data16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY10))->SetCtrlText(QString::number(HMI_send_data17));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE3_ARRAY12))->SetCtrlText(QString::number(HMI_send_data18));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY2))->SetCtrlText(QString::number(HMI_send_data19));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY4))->SetCtrlText(QString::number(HMI_send_data20));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY6))->SetCtrlText(QString::number(HMI_send_data21));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY8))->SetCtrlText(QString::number(HMI_send_data22));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY10))->SetCtrlText(QString::number(HMI_send_data23));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE4_ARRAY12))->SetCtrlText(QString::number(HMI_send_data24));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY2))->SetCtrlText(QString::number(HMI_send_data25));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY4))->SetCtrlText(QString::number(HMI_send_data26));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY6))->SetCtrlText(QString::number(HMI_send_data27));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY8))->SetCtrlText(QString::number(hvac_status_data28));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY10))->SetCtrlText(QString::number(hvac_status_data29));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE5_ARRAY12))->SetCtrlText(QString::number(hvac_status_data30));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY2))->SetCtrlText(QString::number(hvac_status_data31));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY4))->SetCtrlText(QString::number(hvac_status_data32));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY6))->SetCtrlText(QString::number(hvac_status_data33));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY8))->SetCtrlText(QString::number(hvac_status_data34));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY10))->SetCtrlText(QString::number(hvac_status_data35));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LINE6_ARRAY12))->SetCtrlText(QString::number(hvac_status_data36));
    
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY2))->SetCtrlText(StrFromInt(error_code61, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY4))->SetCtrlText(StrFromInt(error_code62, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY6))->SetCtrlText(StrFromInt(error_code63, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY8))->SetCtrlText(StrFromInt(error_code64, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY10))->SetCtrlText(StrFromInt(error_code65, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE1_ARRAY12))->SetCtrlText(StrFromInt(error_code66, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY2))->SetCtrlText(StrFromInt(error_code67, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY4))->SetCtrlText(StrFromInt(error_code68, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY6))->SetCtrlText(StrFromInt(error_code69, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY8))->SetCtrlText(StrFromInt(error_code70, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY10))->SetCtrlText(StrFromInt(error_code71, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE2_ARRAY12))->SetCtrlText(StrFromInt(error_code72, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY2))->SetCtrlText(StrFromInt(error_code73, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY4))->SetCtrlText(StrFromInt(error_code74, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY6))->SetCtrlText(StrFromInt(error_code75, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY8))->SetCtrlText(StrFromInt(error_code76, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY10))->SetCtrlText(StrFromInt(error_code77, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE3_ARRAY12))->SetCtrlText(StrFromInt(error_code78, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY2))->SetCtrlText(StrFromInt(error_code79, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY4))->SetCtrlText(StrFromInt(error_code80, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY6))->SetCtrlText(StrFromInt(error_code81, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY8))->SetCtrlText(StrFromInt(error_code82, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY10))->SetCtrlText(StrFromInt(error_code83, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE4_ARRAY12))->SetCtrlText(StrFromInt(error_code84, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY2))->SetCtrlText(StrFromInt(error_code85, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY4))->SetCtrlText(StrFromInt(error_code86, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY6))->SetCtrlText(StrFromInt(error_code87, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY8))->SetCtrlText(StrFromInt(error_code88, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY10))->SetCtrlText(StrFromInt(error_code89, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE5_ARRAY12))->SetCtrlText(StrFromInt(error_code90, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY2))->SetCtrlText(StrFromInt(error_code91, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY4))->SetCtrlText(StrFromInt(error_code92, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY6))->SetCtrlText(StrFromInt(error_code93, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY8))->SetCtrlText(StrFromInt(error_code94, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY10))->SetCtrlText(StrFromInt(error_code95, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE6_ARRAY12))->SetCtrlText(StrFromInt(error_code96, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY2))->SetCtrlText(StrFromInt(error_code97, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY4))->SetCtrlText(StrFromInt(error_code38, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY6))->SetCtrlText(StrFromInt(error_code39, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY8))->SetCtrlText(StrFromInt(error_code40, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY10))->SetCtrlText(StrFromInt(error_code41, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE7_ARRAY12))->SetCtrlText(StrFromInt(error_code42, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY2))->SetCtrlText(StrFromInt(error_code43, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY4))->SetCtrlText(StrFromInt(error_code44, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY6))->SetCtrlText(StrFromInt(error_code45, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY8))->SetCtrlText(StrFromInt(error_code46, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY10))->SetCtrlText(StrFromInt(error_code47, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE8_ARRAY12))->SetCtrlText(StrFromInt(error_code48, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY2))->SetCtrlText(StrFromInt(error_code49, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY4))->SetCtrlText(StrFromInt(error_code50, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY6))->SetCtrlText(StrFromInt(error_code51, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY8))->SetCtrlText(StrFromInt(error_code52, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY10))->SetCtrlText(StrFromInt(error_code53, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE9_ARRAY12))->SetCtrlText(StrFromInt(error_code54, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY2))->SetCtrlText(StrFromInt(error_code55, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY4))->SetCtrlText(StrFromInt(error_code56, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY6))->SetCtrlText(StrFromInt(error_code57, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY8))->SetCtrlText(StrFromInt(error_code58, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY10))->SetCtrlText(StrFromInt(error_code59, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS6_LEVEL3_LINE10_ARRAY12))->SetCtrlText(StrFromInt(error_code60, 16));

}

void CCommStatus6Page::OnShowPage()
{
}
