#include "CCommStatus5Page.h"

ROMDATA g_PicRom_CommStatus5[] =
{
    {QSTR("参数设置"),             D_FONT_BOLD(8),      QRect( 50,   5, 100, 25),          Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,   35, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100,  35, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY2         },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160,  35, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210,  35, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY4         },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270,  35, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320,  35, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY6         },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380,  35, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430,  35, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY8         },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490,  35, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540,  35, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY10        },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600,  35, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650,  35, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE1_ARRAY12        },

    {QSTR("W007"),               D_FONT_BOLD(5),      QRect( 50,   60, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100,  60, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY2         },
    {QSTR("word8"),              D_FONT_BOLD(5),      QRect( 160,  60, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210,  60, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY4         },
    {QSTR("word9"),              D_FONT_BOLD(5),      QRect( 270,  60, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320,  60, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY6         },
    {QSTR("word10"),             D_FONT_BOLD(5),      QRect( 380,  60, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430,  60, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY8         },
    {QSTR("word11"),             D_FONT_BOLD(5),      QRect( 490,  60, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540,  60, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY10        },
    {QSTR("word12"),             D_FONT_BOLD(5),      QRect( 600,  60, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650,  60, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE2_ARRAY12        },

    {QSTR("W0rd13"),             D_FONT_BOLD(5),      QRect( 50,   85, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE3_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100,  85, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE3_ARRAY2         },

    {QSTR("TCU测试"),             D_FONT_BOLD(8),      QRect( 50, 115, 100, 25),           Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  140, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 140, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY2         },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 140, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 140, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY4         },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 140, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 140, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY6         },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 140, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 140, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY8         },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 140, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 140, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY10        },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 140, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 140, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE4_ARRAY12        },

    {QSTR("word7"),              D_FONT_BOLD(5),      QRect( 50,  165, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 165, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY2         },
    {QSTR("word8"),              D_FONT_BOLD(5),      QRect( 160, 165, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 165, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY4         },
    {QSTR("word9"),              D_FONT_BOLD(5),      QRect( 270, 165, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 165, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY6         },
    {QSTR("word10"),             D_FONT_BOLD(5),      QRect( 380, 165, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 165, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY8         },
    {QSTR("word11"),             D_FONT_BOLD(5),      QRect( 490, 165, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 165, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY10        },
    {QSTR("word12"),             D_FONT_BOLD(5),      QRect( 600, 165, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 165, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE5_ARRAY12        },

    {QSTR("word13"),             D_FONT_BOLD(5),      QRect( 50,  190, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 190, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY2         },
    {QSTR("word14"),             D_FONT_BOLD(5),      QRect( 160, 190, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 190, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY4         },
    {QSTR("word15"),             D_FONT_BOLD(5),      QRect( 270, 190, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 190, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY6         },
    {QSTR("word16"),             D_FONT_BOLD(5),      QRect( 380, 190, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 190, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY8         },
    {QSTR("word17"),             D_FONT_BOLD(5),      QRect( 490, 190, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 190, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY10        },
    {QSTR("word18"),             D_FONT_BOLD(5),      QRect( 600, 190, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 190, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE6_ARRAY12        },

    {QSTR("ACU测试"),            D_FONT_BOLD(8),      QRect( 50,  215, 100, 25),           Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  240, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 240, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY2         },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 240, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 240, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY4         },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 240, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 240, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY6         },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 240, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 240, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY8         },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 240, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 240, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY10        },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 240, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 240, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE7_ARRAY12        },
 
    {QSTR("BCU测试"),             D_FONT_BOLD(8),      QRect( 50,  265, 100, 25),          Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  290, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 290, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY2         },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 290, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 290, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY4         },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 290, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 290, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY6         },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 290, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 290, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY8         },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 290, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 290, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY10        },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 290, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 290, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE8_ARRAY12        },
    
    {QSTR("BCU自检"),             D_FONT_BOLD(8),      QRect( 50,  315, 100, 25),          Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  340, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY1         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 340, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY2         },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 340, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY3         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 340, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY4         },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 340, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY5         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 340, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY6         },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 340, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY7         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 340, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY8         },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 340, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY9         },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 340, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY10        },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 340, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY11        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 340, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE9_ARRAY12        },
    
    {QSTR("W007"),               D_FONT_BOLD(5),      QRect( 50,  365, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 365, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY2        },
    {QSTR("word8"),              D_FONT_BOLD(5),      QRect( 160, 365, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 365, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY4        },
    {QSTR("word9"),              D_FONT_BOLD(5),      QRect( 270, 365, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 365, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY6        },
    {QSTR("word10"),             D_FONT_BOLD(5),      QRect( 380, 365, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 365, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY8        },
    {QSTR("word11"),             D_FONT_BOLD(5),      QRect( 490, 365, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 365, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY10       },
    {QSTR("word12"),             D_FONT_BOLD(5),      QRect( 600, 365, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 365, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE10_ARRAY12       },
    
    {QSTR("W013"),               D_FONT_BOLD(5),      QRect( 50,  390, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 390, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY2        },
    {QSTR("word14"),             D_FONT_BOLD(5),      QRect( 160, 390, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 390, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY4        },
    {QSTR("word15"),             D_FONT_BOLD(5),      QRect( 270, 390, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 390, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY6        },
    {QSTR("word16"),             D_FONT_BOLD(5),      QRect( 380, 390, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 390, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE11_ARRAY8        },
     
    {QSTR("同步时间"),            D_FONT_BOLD(8),      QRect( 50,  415, 100, 25),          Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  440, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 440, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY2        },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 440, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 440, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY4        },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 440, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 440, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY6        },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 440, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 440, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY8        },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 440, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 440, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY10       },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 440, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 440, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE12_ARRAY12       },
        
    {QSTR("运行记录"),            D_FONT_BOLD(8),      QRect( 50,  465, 100, 25),          Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  490, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 490, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY2        },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 490, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 490, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY4        },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 490, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 490, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY6        },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 490, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 490, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY8        },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 490, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 490, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY10       },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 490, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 490, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE13_ARRAY12       },
    
    {QSTR("W001"),               D_FONT_BOLD(5),      QRect( 50,  515, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY1        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 100, 515, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY2        },
    {QSTR("word2"),              D_FONT_BOLD(5),      QRect( 160, 515, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY3        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 210, 515, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY4        },
    {QSTR("word3"),              D_FONT_BOLD(5),      QRect( 270, 515, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY5        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 320, 515, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY6        },
    {QSTR("word4"),              D_FONT_BOLD(5),      QRect( 380, 515, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY7        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 430, 515, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY8        },
    {QSTR("word5"),              D_FONT_BOLD(5),      QRect( 490, 515, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY9        },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 540, 515, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY10       },
    {QSTR("word6"),              D_FONT_BOLD(5),      QRect( 600, 515, 50, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY11       },
    {QSTR(""),                   D_FONT_BOLD(5),      QRect( 650, 515, 60, 25),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_COMSTATUS5_LINE14_ARRAY12       },
    
    {QSTR("退出"),               D_FONT_BOLD(6),      QRect( 715, 500, 80, 35),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_COMSTATUS5_QUIT                },

};
int g_CommStatus5RomLen = sizeof(g_PicRom_CommStatus5)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCommStatus5Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()

        ON_BTNCLK(ID_COMSTATUS5_QUIT, OnQuitBtnClk)

END_MESSAGE_MAP()

CCommStatus5Page::CCommStatus5Page()
{
}

void CCommStatus5Page::OnUpdatePage()
{
    UpdateCommStatusData();

}

void CCommStatus5Page::OnQuitBtnClk()
{
    ChangePage(PAGE_INDEX_COMMSTATUSDEBUG);
}


void CCommStatus5Page::OnInitPage()
{
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE3_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE3_ARRAY2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY12))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY12))->SetBorderColor(Qt::white);



    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY12))->SetBorderColor(Qt::white);



    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY8))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY12))->SetBorderColor(Qt::white);


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY12))->SetBorderColor(Qt::white);

}

void CCommStatus5Page::UpdateCommStatusData()
{
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY2))->SetCtrlText(QString::number(run_status_data101));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY4))->SetCtrlText(QString::number(parameter_setting_data2));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY6))->SetCtrlText(QString::number(parameter_setting_data3));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY8))->SetCtrlText(QString::number(parameter_setting_data4));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY10))->SetCtrlText(QString::number(parameter_setting_data5));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE1_ARRAY12))->SetCtrlText(QString::number(parameter_setting_data6));

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY2))->SetCtrlText(QString::number(parameter_setting_data7));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY4))->SetCtrlText(QString::number(parameter_setting_data8));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY6))->SetCtrlText(QString::number(parameter_setting_data9));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY8))->SetCtrlText(QString::number(parameter_setting_data10));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY10))->SetCtrlText(QString::number(parameter_setting_data11));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE2_ARRAY12))->SetCtrlText(QString::number(parameter_setting_data12));

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE3_ARRAY2))->SetCtrlText(QString::number(parameter_setting_data13));

//TCU
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY2))->SetCtrlText(QString::number(TCU_test_data1));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY4))->SetCtrlText(QString::number(TCU_test_data2));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY6))->SetCtrlText(QString::number(TCU_test_data3));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY8))->SetCtrlText(QString::number(TCU_test_data4));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY10))->SetCtrlText(QString::number(TCU_test_data5));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE4_ARRAY12))->SetCtrlText(QString::number(TCU_test_data6));

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY2))->SetCtrlText(QString::number(TCU_test_data7));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY4))->SetCtrlText(QString::number(TCU_test_data8));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY6))->SetCtrlText(QString::number(TCU_test_data9));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY8))->SetCtrlText(QString::number(TCU_test_data10));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY10))->SetCtrlText(QString::number(TCU_test_data11));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE5_ARRAY12))->SetCtrlText(QString::number(TCU_test_data12));

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY2))->SetCtrlText(QString::number(TCU_test_data13));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY4))->SetCtrlText(QString::number(TCU_test_data14));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY6))->SetCtrlText(QString::number(TCU_test_data15));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY8))->SetCtrlText(QString::number(TCU_test_data16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY10))->SetCtrlText(QString::number(TCU_test_data17));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE6_ARRAY12))->SetCtrlText(QString::number(TCU_test_data18));

//ACU测试
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY2))->SetCtrlText(QString::number(ACU_test_data1));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY4))->SetCtrlText(QString::number(ACU_test_data2));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY6))->SetCtrlText(QString::number(ACU_test_data3));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY8))->SetCtrlText(QString::number(TCU_test_data4));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY10))->SetCtrlText(QString::number(TCU_test_data5));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE7_ARRAY12))->SetCtrlText(QString::number(TCU_test_data6));


// BCU 测试
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY2))->SetCtrlText(QString::number(BCU_test_data1));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY4))->SetCtrlText(QString::number(BCU_test_data2));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY6))->SetCtrlText(QString::number(BCU_test_data3));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY8))->SetCtrlText(QString::number(BCU_test_data4));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY10))->SetCtrlText(QString::number(TCU_test_data5));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE8_ARRAY12))->SetCtrlText(QString::number(TCU_test_data6));

//BCU自检
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY2))->SetCtrlText(QString::number(BCU_selftest_data1));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY4))->SetCtrlText(QString::number(BCU_selftest_data2));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY6))->SetCtrlText(QString::number(BCU_selftest_data3));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY8))->SetCtrlText(QString::number(BCU_selftest_data4));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY10))->SetCtrlText(StrFromInt(BCU_selftest_data5, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE9_ARRAY12))->SetCtrlText(StrFromInt(BCU_selftest_data6, 16));


    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY2))->SetCtrlText(StrFromInt(BCU_selftest_data7, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY4))->SetCtrlText(StrFromInt(BCU_selftest_data8, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY6))->SetCtrlText(StrFromInt(BCU_selftest_data9, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY8))->SetCtrlText(StrFromInt(BCU_selftest_data10, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY10))->SetCtrlText(StrFromInt(BCU_selftest_data11, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE10_ARRAY12))->SetCtrlText(StrFromInt(BCU_selftest_data12, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY2))->SetCtrlText(StrFromInt(BCU_selftest_data13, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY4))->SetCtrlText(StrFromInt(BCU_selftest_data14, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY6))->SetCtrlText(StrFromInt(BCU_selftest_data15, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE11_ARRAY8))->SetCtrlText(StrFromInt(BCU_selftest_data16, 16));

    // 同步时间
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY2))->SetCtrlText(StrFromInt(run_status_data98, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY4))->SetCtrlText(StrFromInt(run_status_data99, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY6))->SetCtrlText(StrFromInt(run_status_data100, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY8))->SetCtrlText(QString::number(BCU_selftest_data4));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY10))->SetCtrlText(QString::number(TCU_test_data5));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE12_ARRAY12))->SetCtrlText(QString::number(TCU_test_data6));

    //运行记录
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY2))->SetCtrlText(StrFromInt(run_record_data1, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY4))->SetCtrlText(StrFromInt(run_record_data2, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY6))->SetCtrlText(StrFromInt(run_record_data3, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY8))->SetCtrlText(StrFromInt(run_record_data4, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY10))->SetCtrlText(StrFromInt(run_record_data5, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE13_ARRAY12))->SetCtrlText(StrFromInt(run_record_data6, 16));

    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY2))->SetCtrlText(StrFromInt(run_record_data7, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY4))->SetCtrlText(StrFromInt(run_record_data8, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY6))->SetCtrlText(StrFromInt(run_record_data9, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY8))->SetCtrlText(StrFromInt(run_record_data10, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY10))->SetCtrlText(StrFromInt(run_record_data11, 16));
    ((CLabel *) GetDlgItem(ID_COMSTATUS5_LINE14_ARRAY12))->SetCtrlText(StrFromInt(run_record_data12, 16));
}


void CCommStatus5Page::OnShowPage()
{
}
