#include "CCommStatusDebugPage.h"

ROMDATA g_PicRom_CommStatusDebug[] =
{
    /*string                font                            rc                  foreground color              background color                control type                    ID           */
    {QSTR("通信状态界面"),            D_FONT_BOLD(8),      QRect( 50,  10, 120,  25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,   50, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,   80, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  110, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  140, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  170, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  200, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  230, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  260, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  290, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  320, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  350, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  380, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  410, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  440, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  470, 744,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  500, 745,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 33,  530, 125,  1),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 33,  50, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 95,  50, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(157,  50, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(219,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(281,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(343,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(405,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(467,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(529,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(591,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(653,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(715,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(777,  50, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("w001"),                  D_FONT_BOLD(6),      QRect(  34,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCSD_LABEL_W001DATA          },
    {QSTR("word2"),                 D_FONT_BOLD(6),      QRect( 158,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD2DATA         },
    {QSTR("word3"),                 D_FONT_BOLD(6),      QRect( 282,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD3DATA         },
    {QSTR("word4"),                 D_FONT_BOLD(6),      QRect( 406,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD4DATA         },
    {QSTR("word5"),                 D_FONT_BOLD(6),      QRect( 530,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD5DATA         },
    {QSTR("word6"),                 D_FONT_BOLD(6),      QRect( 654,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716,  51, 61, 29),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD6DATA         },

    {QSTR("word7"),                 D_FONT_BOLD(6),      QRect(  34,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD7DATA         },
    {QSTR("word8"),                 D_FONT_BOLD(6),      QRect( 158,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD8DATA         },
    {QSTR("word9"),                 D_FONT_BOLD(6),      QRect( 282,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD9DATA         },
    {QSTR("word10"),                D_FONT_BOLD(6),      QRect( 406,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD10DATA        },
    {QSTR("word11"),                D_FONT_BOLD(6),      QRect( 530,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD11DATA        },
    {QSTR("word12"),                D_FONT_BOLD(6),      QRect( 654,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716,  81, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD12DATA        },

    {QSTR("word13"),                D_FONT_BOLD(6),      QRect(  34, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD13DATA        },
    {QSTR("word14"),                D_FONT_BOLD(6),      QRect( 158, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD14DATA        },
    {QSTR("word15"),                D_FONT_BOLD(6),      QRect( 282, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD15DATA        },
    {QSTR("word16"),                D_FONT_BOLD(6),      QRect( 406, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD16DATA        },
    {QSTR("word17"),                D_FONT_BOLD(6),      QRect( 530, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD17DATA        },
    {QSTR("word18"),                D_FONT_BOLD(6),      QRect( 654, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 111, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD18DATA        },

    {QSTR("word19"),                D_FONT_BOLD(6),      QRect(  34, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD19DATA        },
    {QSTR("word20"),                D_FONT_BOLD(6),      QRect( 158, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD20DATA        },
    {QSTR("word21"),                D_FONT_BOLD(6),      QRect( 282, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD21DATA        },
    {QSTR("word22"),                D_FONT_BOLD(6),      QRect( 406, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD22DATA        },
    {QSTR("word23"),                D_FONT_BOLD(6),      QRect( 530, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD23DATA        },
    {QSTR("word24"),                D_FONT_BOLD(6),      QRect( 654, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 141, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD24DATA        },

    {QSTR("word25"),                D_FONT_BOLD(6),      QRect(  34, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD25DATA        },
    {QSTR("word26"),                D_FONT_BOLD(6),      QRect( 158, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD26DATA        },
    {QSTR("word27"),                D_FONT_BOLD(6),      QRect( 282, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD27DATA        },
    {QSTR("word28"),                D_FONT_BOLD(6),      QRect( 406, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD28DATA        },
    {QSTR("word29"),                D_FONT_BOLD(6),      QRect( 530, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD29DATA        },
    {QSTR("word30"),                D_FONT_BOLD(6),      QRect( 654, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 171, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD30DATA        },

    {QSTR("word31"),                D_FONT_BOLD(6),      QRect(  34, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD31DATA        },
    {QSTR("word32"),                D_FONT_BOLD(6),      QRect( 158, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD32DATA        },
    {QSTR("word33"),                D_FONT_BOLD(6),      QRect( 282, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD33DATA        },
    {QSTR("word34"),                D_FONT_BOLD(6),      QRect( 406, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD34DATA        },
    {QSTR("word35"),                D_FONT_BOLD(6),      QRect( 530, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD35DATA        },
    {QSTR("word36"),                D_FONT_BOLD(6),      QRect( 654, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 201, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD36DATA        },

    {QSTR("word37"),                D_FONT_BOLD(6),      QRect(  34, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD37DATA        },
    {QSTR("word38"),                D_FONT_BOLD(6),      QRect( 158, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD38DATA        },
    {QSTR("word39"),                D_FONT_BOLD(6),      QRect( 282, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD39DATA        },
    {QSTR("word40"),                D_FONT_BOLD(6),      QRect( 406, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD40DATA        },
    {QSTR("word41"),                D_FONT_BOLD(6),      QRect( 530, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD41DATA        },
    {QSTR("word42"),                D_FONT_BOLD(6),      QRect( 654, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 231, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD42DATA        },

    {QSTR("word43"),                D_FONT_BOLD(6),      QRect(  34, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD43DATA        },
    {QSTR("word44"),                D_FONT_BOLD(6),      QRect( 158, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD44DATA        },
    {QSTR("word45"),                D_FONT_BOLD(6),      QRect( 282, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD45DATA        },
    {QSTR("word46"),                D_FONT_BOLD(6),      QRect( 406, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD46DATA        },
    {QSTR("word47"),                D_FONT_BOLD(6),      QRect( 530, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD47DATA        },
    {QSTR("word48"),                D_FONT_BOLD(6),      QRect( 654, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 261, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD48DATA        },

    {QSTR("word49"),                D_FONT_BOLD(6),      QRect(  34, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD49DATA        },
    {QSTR("word50"),                D_FONT_BOLD(6),      QRect( 158, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD50DATA        },
    {QSTR("word51"),                D_FONT_BOLD(6),      QRect( 282, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD51DATA        },
    {QSTR("word52"),                D_FONT_BOLD(6),      QRect( 406, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD52DATA        },
    {QSTR("word53"),                D_FONT_BOLD(6),      QRect( 530, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD53DATA        },
    {QSTR("word54"),                D_FONT_BOLD(6),      QRect( 654, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 291, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD54DATA        },

    {QSTR("word55"),                D_FONT_BOLD(6),      QRect(  34, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD55DATA        },
    {QSTR("word56"),                D_FONT_BOLD(6),      QRect( 158, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD56DATA        },
    {QSTR("word57"),                D_FONT_BOLD(6),      QRect( 282, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD57DATA        },
    {QSTR("word58"),                D_FONT_BOLD(6),      QRect( 406, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD58DATA        },
    {QSTR("word59"),                D_FONT_BOLD(6),      QRect( 530, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD59DATA        },
    {QSTR("word60"),                D_FONT_BOLD(6),      QRect( 654, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 321, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD60DATA        },

    {QSTR("word61"),                D_FONT_BOLD(6),      QRect(  34, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD61DATA        },
    {QSTR("word62"),                D_FONT_BOLD(6),      QRect( 158, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD62DATA        },
    {QSTR("word63"),                D_FONT_BOLD(6),      QRect( 282, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD63DATA        },
    {QSTR("word64"),                D_FONT_BOLD(6),      QRect( 406, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD64DATA        },
    {QSTR("word65"),                D_FONT_BOLD(6),      QRect( 530, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD65DATA        },
    {QSTR("word66"),                D_FONT_BOLD(6),      QRect( 654, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 351, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD66DATA        },

    {QSTR("word67"),                D_FONT_BOLD(6),      QRect(  34, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD67DATA        },
    {QSTR("word68"),                D_FONT_BOLD(6),      QRect( 158, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD68DATA        },
    {QSTR("word69"),                D_FONT_BOLD(6),      QRect( 282, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD69DATA        },
    {QSTR("word70"),                D_FONT_BOLD(6),      QRect( 406, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD70DATA        },
    {QSTR("word71"),                D_FONT_BOLD(6),      QRect( 530, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD71DATA        },
    {QSTR("word72"),                D_FONT_BOLD(6),      QRect( 654, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 381, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD72DATA        },

    {QSTR("word73"),                D_FONT_BOLD(6),      QRect(  34, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD73DATA        },
    {QSTR("word74"),                D_FONT_BOLD(6),      QRect( 158, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD74DATA        },
    {QSTR("word75"),                D_FONT_BOLD(6),      QRect( 282, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD75DATA        },
    {QSTR("word76"),                D_FONT_BOLD(6),      QRect( 406, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD76DATA        },
    {QSTR("word77"),                D_FONT_BOLD(6),      QRect( 530, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD77DATA        },
    {QSTR("word78"),                D_FONT_BOLD(6),      QRect( 654, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 411, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD78DATA        },

    {QSTR("word79"),                D_FONT_BOLD(6),      QRect(  34, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD79DATA        },
    {QSTR("word80"),                D_FONT_BOLD(6),      QRect( 158, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD80DATA        },
    {QSTR("word81"),                D_FONT_BOLD(6),      QRect( 282, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD81DATA        },
    {QSTR("word82"),                D_FONT_BOLD(6),      QRect( 406, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD82DATA        },
    {QSTR("word83"),                D_FONT_BOLD(6),      QRect( 530, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD83DATA        },
    {QSTR("word84"),                D_FONT_BOLD(6),      QRect( 654, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 441, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD84DATA        },

    {QSTR("word85"),                D_FONT_BOLD(6),      QRect(  34, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD85DATA        },
    {QSTR("word86"),                D_FONT_BOLD(6),      QRect( 158, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 220, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD86DATA        },
    {QSTR("word87"),                D_FONT_BOLD(6),      QRect( 282, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 344, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD87DATA        },
    {QSTR("word88"),                D_FONT_BOLD(6),      QRect( 406, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 468, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD88DATA        },
    {QSTR("word89"),                D_FONT_BOLD(6),      QRect( 530, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 592, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD89DATA        },
    {QSTR("word90"),                D_FONT_BOLD(6),      QRect( 654, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect( 716, 471, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD90DATA        },

    {QSTR("word91"),                D_FONT_BOLD(6),      QRect(  34, 501, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("####"),                  D_FONT_BOLD(6),      QRect(  96, 501, 61, 29),           Qt::white,                 Qt::gray,                CONTROL_LABEL,           ID_PIBCSD_LABEL_WORD91DATA        },

    {QSTR("运行数据"),                D_FONT(6),           QRect( 15, 555, 120,  38),          Qt::black,                 Qt::gray,               CONTROL_BUTTON,          ID_PIBCSD_BUTTON_RUNDATA           },
    {QSTR("空调和故障"),              D_FONT(6),           QRect(145, 555, 120,  38),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,          ID_PIBCSD_BUTTON_AIRFAULT          },
    {QSTR("写数据和车辆状态"),         D_FONT(6),           QRect(275, 555, 120,  38),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,          ID_PIBCSD_BUTTON_WDATASTATE        },
    {QSTR("子系统测试"),              D_FONT(6),           QRect(405, 555, 120,  38),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,          ID_PIBCSD_BUTTON_SUBSYSTEST        },
    {QSTR("试运行"),                 D_FONT(6),           QRect(535, 555, 120,  38),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,          ID_PIBCSD_BUTTON_TESTRUN           },
    {QSTR("返   回"),                D_FONT(8),           QRect(665, 555, 120,  38),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,          ID_PIBCSD_BUTTON_RETURN            },
};
int g_CommStatusDebugRomLen = sizeof(g_PicRom_CommStatusDebug)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCommStatusDebugPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_PIBCSD_BUTTON_RUNDATA, OnComBtn1Clk)
        ON_BTNCLK(ID_PIBCSD_BUTTON_AIRFAULT, OnComBtn2Clk)
        ON_BTNCLK(ID_PIBCSD_BUTTON_WDATASTATE, OnComBtn3Clk)
        ON_BTNCLK(ID_PIBCSD_BUTTON_SUBSYSTEST, OnComBtn4Clk)
        ON_BTNCLK(ID_PIBCSD_BUTTON_TESTRUN, OnComBtn5Clk)
        ON_BTNCLK(ID_PIBCSD_BUTTON_RETURN, OnComBtn6Clk)
END_MESSAGE_MAP()

CCommStatusDebugPage::CCommStatusDebugPage()
{
}

void CCommStatusDebugPage::OnUpdatePage()
{
    UpdateStatusDebug();
}

void CCommStatusDebugPage::OnInitPage()
{

}

void CCommStatusDebugPage::OnShowPage()
{

}

void CCommStatusDebugPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS2);
}

void CCommStatusDebugPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS3);
}

void CCommStatusDebugPage::OnComBtn3Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS4);
}

void CCommStatusDebugPage::OnComBtn4Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS5);
}

void CCommStatusDebugPage::OnComBtn5Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS6);
}

void CCommStatusDebugPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CCommStatusDebugPage::UpdateStatusDebug()
{

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_W001DATA, run_status_data95);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD2DATA, comm_status_data2);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD3DATA, comm_status_data3);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD4DATA, comm_status_data4);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD5DATA, comm_status_data5);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD6DATA, comm_status_data6);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD7DATA, comm_status_data7);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD8DATA, comm_status_data8);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD9DATA, comm_status_data9);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD10DATA, comm_status_data10);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD11DATA, comm_status_data11);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD12DATA, comm_status_data12);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD13DATA, comm_status_data13);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD14DATA, comm_status_data14);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD15DATA, comm_status_data15);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD16DATA, comm_status_data16);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD17DATA, comm_status_data17);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD18DATA, comm_status_data18);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD19DATA, comm_status_data19);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD20DATA, comm_status_data20);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD21DATA, comm_status_data21);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD22DATA, comm_status_data22);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD23DATA, comm_status_data23);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD24DATA, comm_status_data24);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD25DATA, comm_status_data25);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD26DATA, comm_status_data26);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD27DATA, comm_status_data27);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD28DATA, comm_status_data28);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD29DATA, comm_status_data29);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD30DATA, comm_status_data30);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD31DATA, comm_status_data31);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD32DATA, comm_status_data32);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD33DATA, comm_status_data33);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD34DATA, comm_status_data34);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD35DATA, comm_status_data35);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD36DATA, comm_status_data36);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD37DATA, comm_status_data37);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD38DATA, comm_status_data38);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD39DATA, comm_status_data39);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD40DATA, comm_status_data40);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD41DATA, comm_status_data41);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD42DATA, comm_status_data42);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD43DATA, comm_status_data43);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD44DATA, comm_status_data44);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD45DATA, comm_status_data45);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD46DATA, comm_status_data46);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD47DATA, comm_status_data47);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD48DATA, comm_status_data48);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD49DATA, comm_status_data49);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD50DATA, comm_status_data50);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD51DATA, comm_status_data51);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD52DATA, comm_status_data52);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD53DATA, comm_status_data53);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD54DATA, comm_status_data54);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD55DATA, comm_status_data55);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD56DATA, comm_status_data56);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD57DATA, comm_status_data57);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD58DATA, comm_status_data58);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD59DATA, comm_status_data59);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD60DATA, comm_status_data60);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD61DATA, comm_status_data61);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD62DATA, comm_status_data62);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD63DATA, comm_status_data63);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD64DATA, comm_status_data64);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD65DATA, comm_status_data65);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD66DATA, comm_status_data66);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD67DATA, comm_status_data67);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD68DATA, comm_status_data68);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD69DATA, comm_status_data69);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD70DATA, comm_status_data70);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD71DATA, comm_status_data71);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD72DATA, comm_status_data72);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD73DATA, comm_status_data73);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD74DATA, comm_status_data74);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD75DATA, comm_status_data75);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD76DATA, comm_status_data76);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD77DATA, comm_status_data77);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD78DATA, comm_status_data78);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD79DATA, comm_status_data79);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD80DATA, comm_status_data80);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD81DATA, comm_status_data81);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD82DATA, comm_status_data82);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD83DATA, comm_status_data83);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD84DATA, comm_status_data84);

    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD85DATA, comm_status_data85);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD86DATA, comm_status_data86);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD87DATA, comm_status_data87);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD88DATA, comm_status_data88);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD89DATA, comm_status_data89);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD90DATA, comm_status_data90);
    SetStatusDebugLabelString(ID_PIBCSD_LABEL_WORD91DATA, comm_status_data91);

}

void CCommStatusDebugPage::SetStatusDebugLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}
