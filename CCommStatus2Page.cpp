#include "CCommStatus2Page.h"

ROMDATA g_PicRom_CommStatus2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QSTR("运行界面"),                D_FONT_BOLD(8),     QRect(  7,  15, 120, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  50, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  80, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 110, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 140, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 170, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 200, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 230, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 260, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 290, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 320, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 350, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 380, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 410, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 440, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 470, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 500, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 530, 744,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 560, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33, 590, 125,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 33,  50, 1,  540),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 95,  50, 1,  540),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(157,  50, 1,  540),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(219,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(281,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(343,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(405,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(467,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(529,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(591,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(653,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(715,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(777,  50, 1,  510),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 109,  14, 78,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 109,  44, 78,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 109,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 186,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 194,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 194,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 194,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 256,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 264,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 264,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 264,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 326,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 334,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 334,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 334,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 396,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 404,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 404,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 404,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 466,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 474,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 474,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 474,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 536,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 544,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 544,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 544,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 606,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 614,  14, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 614,  44, 63,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 614,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 676,  14, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("w001"),                  D_FONT_BOLD(6),      QRect(  34,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_PIBCS2_LABEL_W001DATA          },
    {QSTR("word2"),                 D_FONT_BOLD(6),      QRect( 158,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_PIBCS2_LABEL_WORD2DATA         },
    {QSTR("word3"),                 D_FONT_BOLD(6),      QRect( 282,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_PIBCS2_LABEL_WORD3DATA         },
    {QSTR("word4"),                 D_FONT_BOLD(6),      QRect( 406,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_PIBCS2_LABEL_WORD4DATA         },
    {QSTR("word5"),                 D_FONT_BOLD(6),      QRect( 530,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_PIBCS2_LABEL_WORD5DATA         },
    {QSTR("word6"),                 D_FONT_BOLD(6),      QRect( 654,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,          ID_PIBCS2_LABEL_WORD6DATA         },

    {QSTR("word7"),                 D_FONT_BOLD(6),      QRect(  34,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD7DATA        },
    {QSTR("word8"),                 D_FONT_BOLD(6),      QRect( 158,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD8DATA        },
    {QSTR("word9"),                 D_FONT_BOLD(6),      QRect( 282,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD9DATA        },
    {QSTR("word10"),                D_FONT_BOLD(6),      QRect( 406,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD10DATA       },
    {QSTR("word11"),                D_FONT_BOLD(6),      QRect( 530,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD11DATA       },
    {QSTR("word12"),                D_FONT_BOLD(6),      QRect( 654,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716,  81, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD12DATA       },

    {QSTR("word13"),                D_FONT_BOLD(6),      QRect(  34, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD13DATA       },
    {QSTR("word14"),                D_FONT_BOLD(6),      QRect( 158, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD14DATA       },
    {QSTR("word15"),                D_FONT_BOLD(6),      QRect( 282, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD15DATA       },
    {QSTR("word16"),                D_FONT_BOLD(6),      QRect( 406, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD16DATA       },
    {QSTR("word17"),                D_FONT_BOLD(6),      QRect( 530, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD17DATA       },
    {QSTR("word18"),                D_FONT_BOLD(6),      QRect( 654, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 111, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD18DATA       },

    {QSTR("word19"),                D_FONT_BOLD(6),      QRect(  34, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD19DATA       },
    {QSTR("word20"),                D_FONT_BOLD(6),      QRect( 158, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD20DATA       },
    {QSTR("word21"),                D_FONT_BOLD(6),      QRect( 282, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD21DATA       },
    {QSTR("word22"),                D_FONT_BOLD(6),      QRect( 406, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD22DATA       },
    {QSTR("word23"),                D_FONT_BOLD(6),      QRect( 530, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD23DATA       },
    {QSTR("word24"),                D_FONT_BOLD(6),      QRect( 654, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 141, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD24DATA       },

    {QSTR("word25"),                D_FONT_BOLD(6),      QRect(  34, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD25DATA       },
    {QSTR("word26"),                D_FONT_BOLD(6),      QRect( 158, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD26DATA       },
    {QSTR("word27"),                D_FONT_BOLD(6),      QRect( 282, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD27DATA       },
    {QSTR("word28"),                D_FONT_BOLD(6),      QRect( 406, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD28DATA       },
    {QSTR("word29"),                D_FONT_BOLD(6),      QRect( 530, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD29DATA       },
    {QSTR("word30"),                D_FONT_BOLD(6),      QRect( 654, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 171, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD30DATA       },

    {QSTR("word31"),                D_FONT_BOLD(6),      QRect(  34, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD31DATA       },
    {QSTR("word32"),                D_FONT_BOLD(6),      QRect( 158, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD32DATA       },
    {QSTR("word33"),                D_FONT_BOLD(6),      QRect( 282, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD33DATA       },
    {QSTR("word34"),                D_FONT_BOLD(6),      QRect( 406, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD34DATA       },
    {QSTR("word35"),                D_FONT_BOLD(6),      QRect( 530, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD35DATA       },
    {QSTR("word36"),                D_FONT_BOLD(6),      QRect( 654, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 201, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD36DATA       },

    {QSTR("word37"),                D_FONT_BOLD(6),      QRect(  34, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD37DATA       },
    {QSTR("word38"),                D_FONT_BOLD(6),      QRect( 158, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD38DATA       },
    {QSTR("word39"),                D_FONT_BOLD(6),      QRect( 282, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD39DATA       },
    {QSTR("word40"),                D_FONT_BOLD(6),      QRect( 406, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD40DATA       },
    {QSTR("word41"),                D_FONT_BOLD(6),      QRect( 530, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD41DATA       },
    {QSTR("word42"),                D_FONT_BOLD(6),      QRect( 654, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 231, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD42DATA       },

    {QSTR("word43"),                D_FONT_BOLD(6),      QRect(  34, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD43DATA       },
    {QSTR("word44"),                D_FONT_BOLD(6),      QRect( 158, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD44DATA       },
    {QSTR("word45"),                D_FONT_BOLD(6),      QRect( 282, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD45DATA       },
    {QSTR("word46"),                D_FONT_BOLD(6),      QRect( 406, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD46DATA       },
    {QSTR("word47"),                D_FONT_BOLD(6),      QRect( 530, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD47DATA       },
    {QSTR("word48"),                D_FONT_BOLD(6),      QRect( 654, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 261, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD48DATA       },

    {QSTR("word49"),                D_FONT_BOLD(6),      QRect(  34, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD49DATA       },
    {QSTR("word50"),                D_FONT_BOLD(6),      QRect( 158, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD50DATA       },
    {QSTR("word51"),                D_FONT_BOLD(6),      QRect( 282, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD51DATA       },
    {QSTR("word52"),                D_FONT_BOLD(6),      QRect( 406, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD52DATA       },
    {QSTR("word53"),                D_FONT_BOLD(6),      QRect( 530, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD53DATA       },
    {QSTR("word54"),                D_FONT_BOLD(6),      QRect( 654, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 291, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD54DATA       },

    {QSTR("word55"),                D_FONT_BOLD(6),      QRect(  34, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD55DATA       },
    {QSTR("word56"),                D_FONT_BOLD(6),      QRect( 158, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD56DATA       },
    {QSTR("word57"),                D_FONT_BOLD(6),      QRect( 282, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD57DATA       },
    {QSTR("word58"),                D_FONT_BOLD(6),      QRect( 406, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD58DATA       },
    {QSTR("word59"),                D_FONT_BOLD(6),      QRect( 530, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD59DATA       },
    {QSTR("word60"),                D_FONT_BOLD(6),      QRect( 654, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 321, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD60DATA       },

    {QSTR("word61"),                D_FONT_BOLD(6),      QRect(  34, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD61DATA       },
    {QSTR("word62"),                D_FONT_BOLD(6),      QRect( 158, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD62DATA       },
    {QSTR("word63"),                D_FONT_BOLD(6),      QRect( 282, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD63DATA       },
    {QSTR("word64"),                D_FONT_BOLD(6),      QRect( 406, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD64DATA       },
    {QSTR("word65"),                D_FONT_BOLD(6),      QRect( 530, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD65DATA       },
    {QSTR("word66"),                D_FONT_BOLD(6),      QRect( 654, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 351, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD66DATA       },

    {QSTR("word67"),                D_FONT_BOLD(6),      QRect(  34, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD67DATA       },
    {QSTR("word68"),                D_FONT_BOLD(6),      QRect( 158, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD68DATA       },
    {QSTR("word69"),                D_FONT_BOLD(6),      QRect( 282, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD69DATA       },
    {QSTR("word70"),                D_FONT_BOLD(6),      QRect( 406, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD70DATA       },
    {QSTR("word71"),                D_FONT_BOLD(6),      QRect( 530, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD71DATA       },
    {QSTR("word72"),                D_FONT_BOLD(6),      QRect( 654, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 381, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD72DATA       },

    {QSTR("word73"),                D_FONT_BOLD(6),      QRect(  34, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD73DATA       },
    {QSTR("word74"),                D_FONT_BOLD(6),      QRect( 158, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD74DATA       },
    {QSTR("word75"),                D_FONT_BOLD(6),      QRect( 282, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD75DATA       },
    {QSTR("word76"),                D_FONT_BOLD(6),      QRect( 406, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD76DATA       },
    {QSTR("word77"),                D_FONT_BOLD(6),      QRect( 530, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD77DATA       },
    {QSTR("word78"),                D_FONT_BOLD(6),      QRect( 654, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 411, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD78DATA       },

    {QSTR("word79"),                D_FONT_BOLD(6),      QRect(  34, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD79DATA       },
    {QSTR("word80"),                D_FONT_BOLD(6),      QRect( 158, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD80DATA       },
    {QSTR("word81"),                D_FONT_BOLD(6),      QRect( 282, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD81DATA       },
    {QSTR("word82"),                D_FONT_BOLD(6),      QRect( 406, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD82DATA       },
    {QSTR("word83"),                D_FONT_BOLD(6),      QRect( 530, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD83DATA       },
    {QSTR("word84"),                D_FONT_BOLD(6),      QRect( 654, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 441, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD84DATA       },

    {QSTR("word85"),                D_FONT_BOLD(6),      QRect(  34, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD85DATA       },
    {QSTR("word86"),                D_FONT_BOLD(6),      QRect( 158, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD86DATA       },
    {QSTR("word87"),                D_FONT_BOLD(6),      QRect( 282, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD87DATA       },
    {QSTR("word88"),                D_FONT_BOLD(6),      QRect( 406, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD88DATA       },
    {QSTR("word89"),                D_FONT_BOLD(6),      QRect( 530, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD89DATA       },
    {QSTR("word90"),                D_FONT_BOLD(6),      QRect( 654, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 471, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD90DATA       },

    {QSTR("word91"),                D_FONT_BOLD(6),      QRect(  34, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD91DATA       },
    {QSTR("word92"),                D_FONT_BOLD(6),      QRect( 158, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD92DATA       },
    {QSTR("word93"),                D_FONT_BOLD(6),      QRect( 282, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD93DATA       },
    {QSTR("word94"),                D_FONT_BOLD(6),      QRect( 406, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD94DATA       },
    {QSTR("word95"),                D_FONT_BOLD(6),      QRect( 530, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD95DATA       },
    {QSTR("word96"),                D_FONT_BOLD(6),      QRect( 654, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 501, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD96DATA       },

    {QSTR("word97"),                D_FONT_BOLD(6),      QRect(  34, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD97DATA       },
    {QSTR("word98"),                D_FONT_BOLD(6),      QRect( 158, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD98DATA       },
    {QSTR("word99"),                D_FONT_BOLD(6),      QRect( 282, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD99DATA       },
    {QSTR("word100"),               D_FONT_BOLD(6),      QRect( 406, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD100DATA      },
    {QSTR("word101"),               D_FONT_BOLD(6),      QRect( 530, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD101DATA      },
    {QSTR("word102"),               D_FONT_BOLD(6),      QRect( 654, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 531, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD102DATA      },

    {QSTR("word103"),               D_FONT_BOLD(6),      QRect(  34, 561, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 561, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_WORD103DATA      },

    {QSTR("curr_date"),             D_FONT_BOLD(6),      QRect( 110, 15, 76, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE          },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 195, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE1       },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 265, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE2       },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 335, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE3       },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 405, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE4       },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 475, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE5       },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 545, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE6       },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 615, 15, 61, 29),            Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCS2_LABEL_CURR_DATE7       },

    {QSTR("退  出"),                 D_FONT(6),           QRect(715, 565, 75,  30),          Qt::black,                Qt::gray,                  CONTROL_BUTTON,          ID_PIBCS2_BUTTON_QUIT            },

};
int g_CommStatus2RomLen = sizeof(g_PicRom_CommStatus2)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCommStatus2Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_PIBCS2_BUTTON_QUIT, OnBtnQuitClk)
END_MESSAGE_MAP()

CCommStatus2Page::CCommStatus2Page()
{
}

void CCommStatus2Page::OnUpdatePage()
{
    UpdateCommStatus2();
}

void CCommStatus2Page::OnInitPage()
{
}

void CCommStatus2Page::OnShowPage()
{
}

void CCommStatus2Page::OnBtnQuitClk()
{
    ChangePage(PAGE_INDEX_COMMSTATUSDEBUG);
}

void CCommStatus2Page::UpdateCommStatus2()
{
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE1,currency_data1);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE2,currency_data2);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE3,currency_data3);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE4,currency_data4);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE5,currency_data5);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE6,currency_data6);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_CURR_DATE7,currency_data7);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_W001DATA, run_status_data1);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD2DATA, run_status_data2);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD3DATA, run_status_data3);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD4DATA, run_status_data4);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD5DATA, run_status_data5);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD6DATA, run_status_data6);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD7DATA, run_status_data7);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD8DATA, run_status_data8);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD9DATA, run_status_data9);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD10DATA,run_status_data10);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD11DATA,run_status_data11);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD12DATA,run_status_data12);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD13DATA, run_status_data13);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD14DATA, run_status_data14);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD15DATA, run_status_data15);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD16DATA, run_status_data16);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD17DATA, run_status_data17);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD18DATA, run_status_data18);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD19DATA, run_status_data19);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD20DATA, run_status_data20);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD21DATA, run_status_data21);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD22DATA, run_status_data22);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD23DATA, run_status_data23);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD24DATA, run_status_data24);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD25DATA, run_status_data25);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD26DATA, run_status_data26);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD27DATA, run_status_data27);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD28DATA, run_status_data28);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD29DATA, run_status_data29);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD30DATA, run_status_data30);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD31DATA, run_status_data31);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD32DATA, run_status_data32);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD33DATA, run_status_data33);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD34DATA, run_status_data34);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD35DATA, run_status_data35);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD36DATA, run_status_data36);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD37DATA, run_status_data37);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD38DATA, run_status_data38);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD39DATA, run_status_data39);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD40DATA, run_status_data40);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD41DATA, run_status_data41);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD42DATA, run_status_data42);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD43DATA, run_status_data43);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD44DATA, run_status_data44);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD45DATA, run_status_data45);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD46DATA, run_status_data46);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD47DATA, run_status_data47);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD48DATA, run_status_data48);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD49DATA, run_status_data49);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD50DATA, run_status_data50);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD51DATA, run_status_data51);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD52DATA, run_status_data52);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD53DATA, run_status_data53);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD54DATA, run_status_data54);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD55DATA, run_status_data55);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD56DATA, run_status_data56);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD57DATA, run_status_data57);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD58DATA, run_status_data58);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD59DATA, run_status_data59);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD60DATA, run_status_data60);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD61DATA, run_status_data61);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD62DATA, run_status_data62);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD63DATA, run_status_data63);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD64DATA, run_status_data64);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD65DATA, run_status_data65);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD66DATA, run_status_data66);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD67DATA, run_status_data67);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD68DATA, run_status_data68);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD69DATA, run_status_data69);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD70DATA, run_status_data70);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD71DATA, run_status_data71);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD72DATA, run_status_data72);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD73DATA, run_status_data73);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD74DATA, run_status_data74);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD75DATA, run_status_data75);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD76DATA, run_status_data76);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD77DATA, run_status_data77);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD78DATA, run_status_data78);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD79DATA, run_status_data79);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD80DATA, run_status_data80);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD81DATA, run_status_data81);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD82DATA, run_status_data82);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD83DATA, run_status_data83);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD84DATA, run_status_data84);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD85DATA, run_status_data85);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD86DATA, run_status_data86);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD87DATA, run_status_data87);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD88DATA, run_status_data88);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD89DATA, run_status_data89);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD90DATA, run_status_data90);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD91DATA, run_status_data91);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD92DATA, run_status_data92);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD93DATA, run_status_data93);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD94DATA, run_status_data94);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD95DATA, run_status_data95);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD96DATA, run_status_data96);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD97DATA, run_status_data97);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD98DATA, run_status_data98);

    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD99DATA, run_status_data99);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD100DATA, run_status_data100);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD101DATA, run_status_data101);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD102DATA, run_status_data102);
    SetCommStatues2LabelString(ID_PIBCS2_LABEL_WORD103DATA, run_status_data103);
}

void CCommStatus2Page::SetCommStatues2LabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}
