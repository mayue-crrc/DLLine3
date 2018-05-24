#include "CTractionSystemFaultPage.h"
#include "cfaultscommonprocess.h"
#include <qdebug.h>
#include <qdatetime.h>
#include "CFaultInfoDialog.h"

ROMDATA g_PicRom_TractionSystemFault[] =
{
    D_COMMON_PAGE_HEADER(QSTR("实时故障"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT(6),       QRect(  0,  50, 800,   1),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(  0,  90, 800,   1),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },

    {"",                            D_FONT(6),       QRect( 95,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(171,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
//  {"",                            D_FONT(6),       QRect(267,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(247,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(318,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },
    {"",                            D_FONT(6),       QRect(398,  50,   1,  40),           Qt::white,             Qt::black,                   CONTROL_LINE,          ID_IGNORE         },

    {QSTR("开始日期"),                D_FONT(8),      QRect(  1,  50,  94,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("开始时间"),                D_FONT(8),      QRect( 96,  50,  74,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
//  {QSTR("结束日期"),                D_FONT(8),      QRect(170,  50,  95,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("结束时间"),                D_FONT(8),      QRect(172,  50,  74,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("故障代码"),                D_FONT(8),      QRect(248,  50,  69,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("故障分类"),                D_FONT(8),      QRect(319,  50,  79,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },
    {QSTR("故障名称"),                D_FONT(8),      QRect(399,  50, 400,  40),           Qt::cyan,              Qt::transparent,             CONTROL_LABEL,         ID_IGNORE         },

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
    {QSTR(""),                       D_FONT(7),      QRect(  0,  92,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE1         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 112,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE2         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 132,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE3         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 152,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE4         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 172,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE5         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 192,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE6         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 212,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE7         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 232,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE8         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 252,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE9         },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 272,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE10        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 292,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE11        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 312,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE12        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 332,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE13        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 352,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE14        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 372,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE15        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 392,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE16        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 412,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE17        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 432,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE18        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 452,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE19        },
    {QSTR(""),                       D_FONT(7),      QRect(  0, 472,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_DATE20        },

// start time
    {QSTR(""),                       D_FONT(7),      QRect( 96,  92,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME1         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 112,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME2         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 132,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME3         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 152,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME4         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 172,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME5         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 192,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME6         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 212,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME7         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 232,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME8         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 252,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME9         },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 272,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME10        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 292,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME11        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 312,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME12        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 332,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME13        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 352,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME14        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 372,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME15        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 392,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME16        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 412,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME17        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 432,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME18        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 452,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME19        },
    {QSTR(""),                       D_FONT(7),      QRect( 96, 472,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_S_TIME20        },

// end date
//  {QSTR(""),                       D_FONT(7),      QRect(172,  92,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE1         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 112,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE2         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 132,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE3         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 152,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE4         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 172,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE5         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 192,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE6         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 212,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE7         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 232,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE8         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 252,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE9         },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 272,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE10        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 292,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE11        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 312,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE12        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 332,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE13        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 352,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE14        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 372,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE15        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 392,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE16        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 412,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE17        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 432,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE18        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 452,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE19        },
//  {QSTR(""),                       D_FONT(7),      QRect(172, 472,  95,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_DATE20        },

// end time
    {QSTR(""),                       D_FONT(7),      QRect(172,  92,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME1         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 112,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME2         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 132,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME3         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 152,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME4         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 172,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME5         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 192,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME6         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 212,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME7         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 232,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME8         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 252,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME9         },
    {QSTR(""),                       D_FONT(7),      QRect(172, 272,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME10        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 292,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME11        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 312,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME12        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 332,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME13        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 352,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME14        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 372,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME15        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 392,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME16        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 412,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME17        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 432,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME18        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 452,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME19        },
    {QSTR(""),                       D_FONT(7),      QRect(172, 472,  75,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_E_TIME20        },

// code
    {QSTR(""),                       D_FONT(7),      QRect(248,  92,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE1           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 112,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE2           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 132,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE3           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 152,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE4           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 172,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE5           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 192,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE6           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 212,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE7           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 232,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE8           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 252,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE9           },
    {QSTR(""),                       D_FONT(7),      QRect(248, 272,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE10          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 292,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE11          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 312,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE12          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 332,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE13          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 352,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE14          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 372,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE15          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 392,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE16          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 412,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE17          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 432,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE18          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 452,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE19          },
    {QSTR(""),                       D_FONT(7),      QRect(248, 472,  70,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CODE20          },

// category
    {QSTR(""),                       D_FONT(7),      QRect(319,  92,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY1       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 112,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY2       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 132,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY3       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 152,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY4       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 172,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY5       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 192,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY6       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 212,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY7       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 232,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY8       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 252,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY9       },
    {QSTR(""),                       D_FONT(7),      QRect(319, 272,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY10      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 292,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY11      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 312,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY12      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 332,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY13      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 352,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY14      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 372,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY15      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 392,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY16      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 412,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY17      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 432,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY18      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 452,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY19      },
    {QSTR(""),                       D_FONT(7),      QRect(319, 472,  79,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_CATEGORY20      },

// name
    {QSTR(""),                       D_FONT(7),      QRect(399,  92, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME1           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 112, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME2           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 132, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME3           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 152, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME4           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 172, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME5           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 192, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME6           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 212, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME7           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 232, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME8           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 252, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME9           },
    {QSTR(""),                       D_FONT(7),      QRect(399, 272, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME10          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 292, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME11          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 312, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME12          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 332, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME13          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 352, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME14          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 372, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME15          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 392, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME16          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 412, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME17          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 432, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME18          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 452, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME19          },
    {QSTR(""),                       D_FONT(7),      QRect(399, 472, 350,  19),           Qt::black,             Qt::white,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_NAME20          },

// detail button
    {QSTR("提示"),                       D_FONT(7),      QRect(750,  92,  49,  19),           Qt::black,             Qt::lightGray,                   CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL1           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 112,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL2           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 132,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL3           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 152,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL4           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 172,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL5           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 192,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL6           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 212,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL7           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 232,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL8           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 252,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL9           },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 272,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL10          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 292,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL11          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 312,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL12          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 332,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL13          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 352,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL14          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 372,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL15          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 392,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL16          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 412,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL17          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 432,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL18          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 452,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL19          },
    {QSTR("提示"),                       D_FONT(7),      QRect(750, 472,  49,  19),           Qt::black,             Qt::lightGray,               CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_DETAIL20          },

    {"<<",                           D_FONT_BOLD(6), QRect(565, 505,  55,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_PAGEUP            },
    {">>",                           D_FONT_BOLD(6), QRect(645, 505,  55,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_PAGEDOWN          },
    {"1/1",                          D_FONT(7),      QRect(710, 515,  65,  25),           Qt::yellow,            Qt::black,                   CONTROL_LABEL,         ID_FAULTS_LIST_PAGE_LABEL_PAGENUM         },

    {QSTR("全部"),                    D_FONT(8),      QRect( 25, 505, 100,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_ALL               },
    {QSTR("1,2级故障"),               D_FONT(8),      QRect(155, 505, 100,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_LEVEL12           },
    {QSTR("3级故障"),                 D_FONT(8),      QRect(285, 505, 100,  35),           Qt::black,             Qt::gray,                    CONTROL_BUTTON,        ID_FAULTS_LIST_PAGE_BTN_LEVEL3            },


};
int g_TractionSystemFaultRomLen = sizeof(g_PicRom_TractionSystemFault)/sizeof(ROMDATA);

int diplay_history_faults_idx_array[D_FAULTS_NUM_PER_PAGE+5];


BEGIN_MESSAGE_MAP(CTractionSystemFaultPage,CPage)
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
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_PAGEDOWN, OnPageDownBtnClk)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_PAGEUP, OnPageUpBtnClk)
        ON_LBUTTONDOWN(ID_FAULTS_LIST_PAGE_BTN_ALL, OnBtnAllDown)
        ON_LBUTTONDOWN(ID_FAULTS_LIST_PAGE_BTN_LEVEL12, OnBtnLevel12Down)
        ON_LBUTTONDOWN(ID_FAULTS_LIST_PAGE_BTN_LEVEL3, OnBtnLevel3Down)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_TODAY, OnBtnTodayClk)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL1,  OnDetailClk1)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL2,  OnDetailClk2)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL3,  OnDetailClk3)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL4,  OnDetailClk4)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL5,  OnDetailClk5)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL6,  OnDetailClk6)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL7,  OnDetailClk7)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL8,  OnDetailClk8)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL9,  OnDetailClk9)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL10, OnDetailClk10)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL11, OnDetailClk11)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL12, OnDetailClk12)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL13, OnDetailClk13)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL14, OnDetailClk14)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL15, OnDetailClk15)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL16, OnDetailClk16)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL17, OnDetailClk17)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL18, OnDetailClk18)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL19, OnDetailClk19)
        ON_BTNCLK(ID_FAULTS_LIST_PAGE_BTN_DETAIL20, OnDetailClk20)

END_MESSAGE_MAP()

CTractionSystemFaultPage::CTractionSystemFaultPage()
{
    m_eligiblecount = 0;
}

void CTractionSystemFaultPage::OnPageDownBtnClk()
{
    int maxPageNum = m_eligiblecount/D_FAULTS_NUM_PER_PAGE;
    if ((0 != (m_eligiblecount % D_FAULTS_NUM_PER_PAGE))
        || (0 == m_eligiblecount))
    {
        maxPageNum += 1;
    }

    if (g_history_faults_pagenum < maxPageNum)
    {
        g_history_faults_pagenum += 1;
    }
    UpdateHistoryPageNum();
    OnUpdatePage();
}

void CTractionSystemFaultPage::OnPageUpBtnClk()
{
    if (g_history_faults_pagenum > 1)
    {
        g_history_faults_pagenum -= 1;
    }
    UpdateHistoryPageNum();
    OnUpdatePage();
}

void CTractionSystemFaultPage::OnBtnAllDown()
{
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);

    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_ALL;
    OnUpdatePage();
}

void CTractionSystemFaultPage::OnBtnLevel12Down()
{
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);

    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
    OnUpdatePage();
}

void CTractionSystemFaultPage::OnBtnLevel3Down()
{
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_DOWN);

    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_3;
    OnUpdatePage();
}

void CTractionSystemFaultPage::OnBtnTodayClk()
{
    if (E_FAULTS_TYPE_HISTORY == g_fault_type)
    {
        SetFaultType(E_FAULTS_TYPE_TODAY);//当前标题显示
        ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_TODAY))->SetCtrlText(QSTR("历史故障"));//当前按钮显示

    }
    else
    {
        SetFaultType(E_FAULTS_TYPE_HISTORY);
        ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_TODAY))->SetCtrlText(QSTR("今日故障"));
    }
    ((CLabel *)GetDlgItem(IDLB_COM_TITLE))->SetCtrlText(g_subSystemFaultsTitle);
    OnUpdatePage();
}

void CTractionSystemFaultPage::UpdateHistoryPageNum()
{
    QString str;
    int maxPageNum = m_eligiblecount/D_FAULTS_NUM_PER_PAGE;
    if ((0 != (m_eligiblecount % D_FAULTS_NUM_PER_PAGE))
        || (0 == m_eligiblecount))
    {
        maxPageNum += 1;
    }
    str.sprintf("%d/%d", g_history_faults_pagenum, maxPageNum);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_PAGENUM))->SetCtrlText(str);
}

void CTractionSystemFaultPage::OnUpdatePage()
{
    ClearTable();
    memset(diplay_history_faults_idx_array, -1, sizeof(diplay_history_faults_idx_array));
    UpdateHistoryPage();
}

void CTractionSystemFaultPage::UpdateHistoryPage()
{
    int i = 0;
    int cnt = 0;
    int historyCnt = GetHistoryFaultsListCount();
    for (i=0; i<historyCnt; i++)
    {
        if (true == HistoryConditionFilter(i))
        {
            cnt += 1;
        }
    }
    m_eligiblecount = cnt;
    int maxPageNum = m_eligiblecount/D_FAULTS_NUM_PER_PAGE;
    if ((0 != (m_eligiblecount % D_FAULTS_NUM_PER_PAGE))
        || (0 == m_eligiblecount))
    {
        maxPageNum += 1;
    }
    if (g_history_faults_pagenum > maxPageNum)
    {
        g_history_faults_pagenum = maxPageNum;
    }
    DrawHistory();
    UpdateHistoryPageNum();
}

void CTractionSystemFaultPage::OnInitPage()
{
    for (int id=ID_FAULTS_LIST_PAGE_LABEL_NAME1; id<=ID_FAULTS_LIST_PAGE_LABEL_NAME20; id++)
    {
        ((CLabel *)GetDlgItem(id))->SetAlignment(Qt::AlignLeft);
    }
//    ((CButton*)GetDlgItem(IDLB_COM_BTN5))->SetTxtFont(D_FONT(5));
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton*)GetDlgItem(IDLB_COM_BTN7))->SetTxtFont(D_FONT(5));
#else
    ((CButton*)GetDlgItem(IDLB_COM_BTN5))->SetTxtFont(D_FONT(5));
#endif

    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_ALL))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL12))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL3))->m_bAutoUpState = false;
}

void CTractionSystemFaultPage::OnShowPage()
{

this->InitPageHeader();//3.17
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("返 回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("返 回"));
#endif
    ((CLabel *)GetDlgItem(IDLB_COM_TITLE))->SetCtrlText(g_subSystemFaultsTitle);
    if (!this->TestControlExists(ID_FAULTS_LIST_PAGE_BTN_TODAY))
    {
        this->AddControl(QSTR("今日故障"), QRect(415, 505, 100, 35), Qt::black, D_FONT(8),
                         Qt::gray, ID_FAULTS_LIST_PAGE_BTN_TODAY, CONTROL_BUTTON);
    }

    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_ALL))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL12))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_LEVEL3))->ChangeButtonState(LBUTTON_UP);
    OnBtnLevel12Down();

//    if(!g_bScannFault)
//       GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR("故障弹出已屏蔽\n点击按钮可恢复"));
//    else
//       GetDlgItem(IDLB_COM_BTN5)->SetCtrlText("");
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
        void CTractionSystemFaultPage::OnComBtn1Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn2Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn3Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn4Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn5Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn6Clk()
        {

        }
        void CTractionSystemFaultPage::OnComBtn7Clk()
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
                GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR(""));
            }
        }

        void CTractionSystemFaultPage::OnComBtn8Clk()
        {
             ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CTractionSystemFaultPage::OnComBtn1Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn2Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn3Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn4Clk()
        {

        }

        void CTractionSystemFaultPage::OnComBtn5Clk()
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

        void CTractionSystemFaultPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif


void CTractionSystemFaultPage::DrawLineHistory(int linenum,
                                               ST_HISTORY_FAULT_INFO *pHisInfo)
{
    QString str = "";
    if (!(pHisInfo->isEnd))
    {
        str = "-";
//      ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_E_DATE1 + (linenum - 1)))->SetCtrlText(str);
        ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_E_TIME1 + (linenum - 1)))->SetCtrlText(str);
    }
    else
    {
//      str.sprintf("%4d-%2d-%2d", pHisInfo->end_datetime.year, pHisInfo->end_datetime.month, pHisInfo->end_datetime.day);
//      ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_E_DATE1 + (linenum - 1)))->SetCtrlText(str);
        str.sprintf("%2d:%02d:%02d", pHisInfo->end_datetime.hour, pHisInfo->end_datetime.minute, pHisInfo->end_datetime.second);
        ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_E_TIME1 + (linenum - 1)))->SetCtrlText(str);
    }
    FAULTS_ROM_DATA *pdata = &g_faultsrom[pHisInfo->romIdx];
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
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_S_DATE1 + (linenum - 1)))->SetTxtColor(color);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_S_TIME1 + (linenum - 1)))->SetTxtColor(color);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_CODE1 + (linenum - 1)))->SetTxtColor(color);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_CATEGORY1 + (linenum - 1)))->SetTxtColor(color);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_NAME1 + (linenum - 1)))->SetTxtColor(color);
//  ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_E_DATE1 + (linenum - 1)))->SetTxtColor(color);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_E_TIME1 + (linenum - 1)))->SetTxtColor(color);

    str.sprintf("%4d-%2d-%2d", pHisInfo->start_datetime.year, pHisInfo->start_datetime.month, pHisInfo->start_datetime.day);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_S_DATE1 + (linenum - 1)))->SetCtrlText(str);

    str.sprintf("%2d:%02d:%02d", pHisInfo->start_datetime.hour, pHisInfo->start_datetime.minute, pHisInfo->start_datetime.second);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_S_TIME1 + (linenum - 1)))->SetCtrlText(str);

    str.sprintf("%4x", pdata->code);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_CODE1 + (linenum - 1)))->SetCtrlText(str);

    str = GetCategoryStr(pdata->category);
    ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_CATEGORY1 + (linenum - 1)))->SetCtrlText(str);

    int nameidx;
    if (-1 != (nameidx = FindFaultsNameTableIndex(pdata->code)))
    {
        str = GetCarriageString(pdata->pos) + g_faultsinforom[nameidx].name;
        ((CLabel *)GetDlgItem(ID_FAULTS_LIST_PAGE_LABEL_NAME1 + (linenum - 1)))->SetCtrlText(str);
    }

    ((CButton *)GetDlgItem(ID_FAULTS_LIST_PAGE_BTN_DETAIL1 + (linenum - 1)))->SetCtrlText(QSTR("提示"));
}

void CTractionSystemFaultPage::ClearTable()
{
    int i;
    ROMDATA *pdata = &g_PicRom_TractionSystemFault[0];
    for (i=0; i<g_TractionSystemFaultRomLen; i++)
    {
        if ((pdata->nID >= ID_FAULTS_LIST_PAGE_LABEL_S_DATE1)
            && (pdata->nID <= ID_FAULTS_LIST_PAGE_LABEL_E_TIME20)
            && (CONTROL_LABEL == pdata->nControlType))
        {
            ((CLabel *)GetDlgItem(pdata->nID))->SetCtrlText("");
        }
        if ((pdata->nID >= ID_FAULTS_LIST_PAGE_BTN_DETAIL1)
            && (pdata->nID <= ID_FAULTS_LIST_PAGE_BTN_DETAIL20)
            && (CONTROL_BUTTON == pdata->nControlType))
        {
            ((CButton *)GetDlgItem(pdata->nID))->SetCtrlText("");
        }
        pdata++;
    }
}

bool CTractionSystemFaultPage::HistoryConditionFilter(int idx)
{
    ST_HISTORY_FAULT_INFO *pHisInfo = NULL;

    if (D_CONDITION_FILTER_LEVEL_ALL != g_historyConditionFilter.level)
    {
        pHisInfo = GetHistoryFaultInfoAt(idx);
        char level = g_faultsrom[pHisInfo->romIdx].level;
        if (D_CONDITION_FILTER_LEVEL_12 == g_historyConditionFilter.level)
        {
            if ((1 != level) && (2 != level))
            {
                return false;
            }
        }
        else if (D_CONDITION_FILTER_LEVEL_3 == g_historyConditionFilter.level)
        {
            if (3 != level)
            {
                return false;
            }
        }
    }
    if (E_FAULTS_TYPE_TODAY == g_fault_type)
    {
        pHisInfo = GetHistoryFaultInfoAt(idx);
        QDateTime datetime = QDateTime::currentDateTime();
        if ((pHisInfo->start_datetime.day != datetime.date().day())
            || (pHisInfo->start_datetime.month != datetime.date().month()))
        {
            return false;
        }
    }
    return true;
}

void CTractionSystemFaultPage::DrawHistory()
{
    int i = 0;
    int cnt = 0;
    int num = 0;

    int min = (g_history_faults_pagenum - 1) * D_FAULTS_NUM_PER_PAGE + 1;
    int max = (g_history_faults_pagenum - 1) * D_FAULTS_NUM_PER_PAGE + D_FAULTS_NUM_PER_PAGE;

    ST_HISTORY_FAULT_INFO *pHisInfo = NULL;
    int historyCnt = GetHistoryFaultsListCount();
    for (i=0; i<historyCnt; i++)
    {
        if (true == HistoryConditionFilter(i))
        {
            cnt += 1;
            if ((cnt >= min) && (cnt <= max))
            {
                num += 1;
                pHisInfo = GetHistoryFaultInfoAt(i);
                ASSERT(NULL != pHisInfo);
                DrawLineHistory(num, pHisInfo);
                diplay_history_faults_idx_array[num - 1] = pHisInfo->romIdx;
            }
        }
        if (cnt > max)
        {
            break;
        }
    }
}

void CTractionSystemFaultPage::OnDetailClk1()
{
    OnDetailClkN(0);
}

void CTractionSystemFaultPage::OnDetailClk2()
{
    OnDetailClkN(1);
}

void CTractionSystemFaultPage::OnDetailClk3()
{
    OnDetailClkN(2);
}

void CTractionSystemFaultPage::OnDetailClk4()
{
    OnDetailClkN(3);
}

void CTractionSystemFaultPage::OnDetailClk5()
{
    OnDetailClkN(4);
}

void CTractionSystemFaultPage::OnDetailClk6()
{
    OnDetailClkN(5);
}

void CTractionSystemFaultPage::OnDetailClk7()
{
    OnDetailClkN(6);
}

void CTractionSystemFaultPage::OnDetailClk8()
{
    OnDetailClkN(7);
}

void CTractionSystemFaultPage::OnDetailClk9()
{
    OnDetailClkN(8);
}

void CTractionSystemFaultPage::OnDetailClk10()
{
    OnDetailClkN(9);
}

void CTractionSystemFaultPage::OnDetailClk11()
{
    OnDetailClkN(10);
}

void CTractionSystemFaultPage::OnDetailClk12()
{
    OnDetailClkN(11);
}

void CTractionSystemFaultPage::OnDetailClk13()
{
    OnDetailClkN(12);
}

void CTractionSystemFaultPage::OnDetailClk14()
{
    OnDetailClkN(13);
}

void CTractionSystemFaultPage::OnDetailClk15()
{
    OnDetailClkN(14);
}

void CTractionSystemFaultPage::OnDetailClk16()
{
    OnDetailClkN(15);
}

void CTractionSystemFaultPage::OnDetailClk17()
{
    OnDetailClkN(16);
}

void CTractionSystemFaultPage::OnDetailClk18()
{
    OnDetailClkN(17);
}

void CTractionSystemFaultPage::OnDetailClk19()
{
    OnDetailClkN(18);
}

void CTractionSystemFaultPage::OnDetailClk20()
{
    OnDetailClkN(19);
}

void CTractionSystemFaultPage::OnDetailClkN(int n)
{
    ASSERT((n >= 0) && (n <= (D_FAULTS_NUM_PER_PAGE - 1)));
    if (-1 == diplay_history_faults_idx_array[n])
    {
        return;
    }
    CFaultInfoDialog dlg;
    dlg.SetClkIndex(diplay_history_faults_idx_array[n]);
    dlg.setGeometry(m_pDlg->x()+60, m_pDlg->y()+60, 670, 328);
    dlg.exec();
}
