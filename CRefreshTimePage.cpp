#include "CRefreshTimePage.h"

ROMDATA g_PicRom_RefreshTime[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("刷新时间"))

    {"Head",                    D_FONT(8),      QRect(30,   9, 110,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_PIBRT_LABEL_HEAD },

    {"",                            D_FONT_BOLD(6),      QRect( 8,   60, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,   82, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  104, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  126, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  148, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  170, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  192, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  214, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  236, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  258, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  280, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  302, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  324, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  346, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  368, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  390, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  412, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  434, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  456, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  478, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  500, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  522, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(  8,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 60,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 140,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(190,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(270,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(320,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(530,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(580,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(660,  60, 3,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(710,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(640,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(674,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(718,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  463),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{QSTR("MVB_UDP"),               D_FONT_BOLD(7),      QRect(  61,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("MVB_UDP"),               D_FONT_BOLD(7),      QRect( 191,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("MVB_UDP"),               D_FONT_BOLD(7),      QRect( 321,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("MVB_UDP"),               D_FONT_BOLD(7),      QRect( 451,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("MVB_UDP"),               D_FONT_BOLD(7),      QRect( 581,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("MVB_UDP"),               D_FONT_BOLD(7),      QRect( 711,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("地址"),                  D_FONT_BOLD(8),      QRect(  8,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(8),      QRect(  61,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(8),      QRect( 141,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(8),      QRect( 191,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(8),      QRect( 271,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(8),      QRect( 321,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(8),      QRect( 401,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(8),      QRect( 451,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                  D_FONT_BOLD(8),      QRect( 531,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(8),      QRect( 581,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("地址"),                   D_FONT_BOLD(8),      QRect( 661,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("刷新时间"),               D_FONT_BOLD(8),      QRect( 711,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //{QSTR("100"),                   D_FONT_BOLD(6),      QRect(  8,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("预留"),                   D_FONT_BOLD(6),      QRect(61,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("110"),                 D_FONT_BOLD(8),      QRect(  9, 104-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 105-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_110TIME         },
    {QSTR("111"),                   D_FONT_BOLD(8),      QRect(  9, 126-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 127-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_111TIME         },
    {QSTR("120"),                   D_FONT_BOLD(8),      QRect(  8, 148-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 149-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_120TIME         },
    {QSTR("121"),                   D_FONT_BOLD(8),      QRect(  8, 170-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 171-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_121TIME         },
    {QSTR("130"),                   D_FONT_BOLD(8),      QRect(  8, 192-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 193-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_130TIME         },
    {QSTR("131"),                   D_FONT_BOLD(8),      QRect(  8, 214-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 215-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_131TIME         },
    {QSTR("140"),                   D_FONT_BOLD(8),      QRect(  8, 236-22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 237-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_140TIME         },
    {QSTR("141"),                   D_FONT_BOLD(8),      QRect(  8, 258-22, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 259-22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_141TIME         },
{QSTR("210"),                   D_FONT_BOLD(8),      QRect(  8, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_210TIME         },
{QSTR("211"),                   D_FONT_BOLD(8),      QRect(  8, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_211TIME         },
{QSTR("212"),                   D_FONT_BOLD(8),      QRect(  8, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_212TIME         },
{QSTR("213"),                   D_FONT_BOLD(8),      QRect(  8, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_213TIME         },


    //{QSTR("180_1"),                   D_FONT_BOLD(6),      QRect(  8, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
        //{QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_180TIME         },
    //{QSTR("184_1"),                   D_FONT_BOLD(6),      QRect(  8, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(61, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_184TIME         },
    //    {QSTR("200_4"),                   D_FONT_BOLD(6),      QRect(  8, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_200TIME         },
    //{QSTR("170_1"),                   D_FONT_BOLD(6),      QRect(  8, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_170TIME         },



{QSTR("410"),                   D_FONT_BOLD(8),      QRect(141,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_410TIME         },
{QSTR("411"),                   D_FONT_BOLD(8),      QRect(141, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_411TIME         },
{QSTR("420"),                   D_FONT_BOLD(8),      QRect(141, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_420TIME         },
{QSTR("421"),                   D_FONT_BOLD(8),      QRect(141, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_421TIME         },
{QSTR("430"),                   D_FONT_BOLD(8),      QRect(141, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_430TIME         },
{QSTR("431"),                   D_FONT_BOLD(8),      QRect(141, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_431TIME         },
{QSTR("440"),                   D_FONT_BOLD(8),      QRect(141, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_440TIME         },
{QSTR("441"),                   D_FONT_BOLD(8),      QRect(141, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_441TIME         },
{QSTR("510"),                   D_FONT_BOLD(8),      QRect(141, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_510TIME         },
{QSTR("511"),                   D_FONT_BOLD(8),      QRect(141, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_511TIME         },
{QSTR("520"),                   D_FONT_BOLD(8),      QRect(141, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_520TIME         },
{QSTR("521"),                   D_FONT_BOLD(8),      QRect(141, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_521TIME         },
{QSTR("610"),                   D_FONT_BOLD(8),      QRect(141, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_610TIME         },
{QSTR("611"),                   D_FONT_BOLD(8),      QRect(141, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_611TIME         },
{QSTR("620"),                   D_FONT_BOLD(8),      QRect(141, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_620TIME         },
{QSTR("621"),                   D_FONT_BOLD(8),      QRect(141, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_621TIME         },
{QSTR("710"),                   D_FONT_BOLD(8),      QRect(141, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_710TIME         },
{QSTR("711"),                   D_FONT_BOLD(8),      QRect(141, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_711TIME         },
{QSTR("712"),                   D_FONT_BOLD(8),      QRect(141, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_712TIME         },
{QSTR("720"),                   D_FONT_BOLD(8),      QRect(141, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(191, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_720TIME         },






{QSTR("721"),                   D_FONT_BOLD(8),      QRect(271,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                   D_FONT_BOLD(8),      QRect(321,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_721TIME         },
{QSTR("722"),                   D_FONT_BOLD(8),      QRect(271, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_722TIME         },
{QSTR("730"),                   D_FONT_BOLD(8),      QRect(271, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_730TIME         },
{QSTR("731"),                   D_FONT_BOLD(8),      QRect(271, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_731TIME         },
{QSTR("732"),                   D_FONT_BOLD(8),      QRect(271, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_732TIME         },
{QSTR("740"),                   D_FONT_BOLD(8),      QRect(271, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_740TIME         },
{QSTR("741"),                   D_FONT_BOLD(8),      QRect(271, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_741TIME         },
{QSTR("742"),                   D_FONT_BOLD(8),      QRect(271, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_742TIME         },
{QSTR("750"),                   D_FONT_BOLD(8),      QRect(271, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_750TIME         },
{QSTR("751"),                   D_FONT_BOLD(8),      QRect(271, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_751TIME         },
{QSTR("752"),                   D_FONT_BOLD(8),      QRect(271, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_752TIME         },
{QSTR("760"),                   D_FONT_BOLD(8),      QRect(271, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_760TIME         },
{QSTR("761"),                   D_FONT_BOLD(8),      QRect(271, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_761TIME         },
{QSTR("762"),                   D_FONT_BOLD(8),      QRect(271, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_762TIME         },
{QSTR("770"),                   D_FONT_BOLD(8),      QRect(271, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_770TIME         },
{QSTR("771"),                   D_FONT_BOLD(8),      QRect(271, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_771TIME         },
{QSTR("772"),                   D_FONT_BOLD(8),      QRect(271, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_772TIME         },
{QSTR("780"),                   D_FONT_BOLD(8),      QRect(271, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_780TIME         },
{QSTR("781"),                   D_FONT_BOLD(8),      QRect(271, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_781TIME         },
{QSTR("782"),                   D_FONT_BOLD(8),      QRect(271, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(321, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_782TIME         },




    //{QSTR("710_4"),                   D_FONT_BOLD(6),      QRect(401,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_710TIME         },
{QSTR("910"),                   D_FONT_BOLD(8),      QRect(401,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                   D_FONT_BOLD(8),      QRect(451,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_910TIME         },
{QSTR("911"),                   D_FONT_BOLD(8),      QRect(401, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_911TIME         },
{QSTR("920"),                   D_FONT_BOLD(8),      QRect(401, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_920TIME         },
{QSTR("921"),                   D_FONT_BOLD(8),      QRect(401, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_921TIME         },
{QSTR("A10"),                   D_FONT_BOLD(8),      QRect(401, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A10TIME         },
{QSTR("A11"),                   D_FONT_BOLD(8),      QRect(401, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A11TIME         },
{QSTR("A20"),                   D_FONT_BOLD(8),      QRect(401, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A20TIME         },
{QSTR("A21"),                   D_FONT_BOLD(8),      QRect(401, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A21TIME         },
{QSTR("A30"),                   D_FONT_BOLD(8),      QRect(401, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A30TIME         },
{QSTR("A31"),                   D_FONT_BOLD(8),      QRect(401, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A31TIME         },
{QSTR("A40"),                   D_FONT_BOLD(8),      QRect(401, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A40TIME         },
{QSTR("A41"),                   D_FONT_BOLD(8),      QRect(401, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A41TIME         },
{QSTR("B10"),                   D_FONT_BOLD(8),      QRect(401, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B10TIME         },
{QSTR("B20"),                   D_FONT_BOLD(8),      QRect(401, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B20TIME         },
{QSTR("C10"),                   D_FONT_BOLD(8),      QRect(401, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_C10TIME         },
{QSTR("C20"),                   D_FONT_BOLD(8),      QRect(401, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_C20TIME         },





    //{QSTR("752"),                   D_FONT_BOLD(6),      QRect(531,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_752TIME         },//LMH
{QSTR("118"),                   D_FONT_BOLD(8),      QRect(531,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                   D_FONT_BOLD(8),      QRect(581,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_118TIME         },
{QSTR("128"),                   D_FONT_BOLD(8),      QRect(531, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_128TIME         },
{QSTR("138"),                   D_FONT_BOLD(8),      QRect(531, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_138TIME         },
{QSTR("148"),                   D_FONT_BOLD(8),      QRect(531, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_148TIME         },
{QSTR("218"),                   D_FONT_BOLD(8),      QRect(531, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_218TIME         },
{QSTR("308"),                   D_FONT_BOLD(8),      QRect(531, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_308TIME         },
{QSTR("309"),                   D_FONT_BOLD(8),      QRect(531, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_309TIME         },
{QSTR("318"),                   D_FONT_BOLD(8),      QRect(531, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_318TIME         },
{QSTR("328"),                   D_FONT_BOLD(8),      QRect(531, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_328TIME         },
{QSTR("418"),                   D_FONT_BOLD(8),      QRect(531, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_418TIME         },
{QSTR("419"),                   D_FONT_BOLD(8),      QRect(531, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_419TIME         },
{QSTR("518"),                   D_FONT_BOLD(8),      QRect(531, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_518TIME         },
{QSTR("528"),                   D_FONT_BOLD(8),      QRect(531, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_528TIME         },
{QSTR("618"),                   D_FONT_BOLD(8),      QRect(531, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_618TIME         },
{QSTR("628"),                   D_FONT_BOLD(8),      QRect(531, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_628TIME         },
{QSTR("718"),                   D_FONT_BOLD(8),      QRect(531, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_718TIME         },
{QSTR("719"),                   D_FONT_BOLD(8),      QRect(531, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_719TIME         },
{QSTR("71A"),                   D_FONT_BOLD(8),      QRect(531, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_71ATIME         },
{QSTR("72A"),                   D_FONT_BOLD(8),      QRect(531, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_72ATIME         },
{QSTR("73A"),                   D_FONT_BOLD(8),      QRect(531, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(581, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_73ATIME         },



    //{QSTR("910_4"),                   D_FONT_BOLD(6),      QRect(661,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_910TIME         },

{QSTR("74A"),                   D_FONT_BOLD(8),      QRect(661,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                   D_FONT_BOLD(8),      QRect(711,  83, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_74ATIME         },
{QSTR("75A"),                   D_FONT_BOLD(8),      QRect(661, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_75ATIME         },
{QSTR("76A"),                   D_FONT_BOLD(8),      QRect(661, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_76ATIME         },
{QSTR("77A"),                   D_FONT_BOLD(8),      QRect(661, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_77ATIME         },
{QSTR("78A"),                   D_FONT_BOLD(8),      QRect(661, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_78ATIME         },
{QSTR("918"),                   D_FONT_BOLD(8),      QRect(661, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_918TIME         },
{QSTR("928"),                   D_FONT_BOLD(8),      QRect(661, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_928TIME         },
{QSTR("A18"),                   D_FONT_BOLD(8),      QRect(661, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A18TIME         },
{QSTR("A28"),                   D_FONT_BOLD(8),      QRect(661, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A28TIME         },
{QSTR("A38"),                   D_FONT_BOLD(8),      QRect(661, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A38TIME         },
{QSTR("A48"),                   D_FONT_BOLD(8),      QRect(661, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A48TIME         },
{QSTR("B18"),                   D_FONT_BOLD(8),      QRect(661, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B18TIME         },
{QSTR("30A"),                   D_FONT_BOLD(8),      QRect(661, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
{QSTR(""),                      D_FONT_BOLD(8),      QRect(711, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_30ATIME         },






    //{QSTR("510_1"),                   D_FONT_BOLD(6),      QRect(271, 104, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_510TIME         },
    //{QSTR("711_8"),                   D_FONT_BOLD(6),      QRect(401, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_711TIME         },
    //{QSTR("762"),                   D_FONT_BOLD(6),      QRect(  531, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_762TIME         },//
    //{QSTR("911_4"),                   D_FONT_BOLD(6),      QRect(661, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 105, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_911TIME         },


    //{QSTR("114_1"),                   D_FONT_BOLD(6),      QRect(  9, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   // {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_114TIME         },


    //{QSTR("412_1"),                   D_FONT_BOLD(6),      QRect(141, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_412TIME         },


  //{QSTR("511_4"),                   D_FONT_BOLD(6),      QRect(271, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_511TIME         },
    //{QSTR("720_4"),                   D_FONT_BOLD(6),      QRect(401, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_720TIME         },
    //{QSTR("772"),                   D_FONT_BOLD(6),      QRect(  531, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_772TIME         },
    //{QSTR("920_4"),                   D_FONT_BOLD(6),      QRect(661, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 127, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_920TIME         },


//    {QSTR("413_1"),                   D_FONT_BOLD(6),      QRect(141, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_413TIME         },


    //{QSTR("520_1"),                   D_FONT_BOLD(6),      QRect(271, 148, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_520TIME         },
    //{QSTR("721_8"),                   D_FONT_BOLD(6),      QRect(401, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_721TIME         },
    //{QSTR("7C1_8"),                   D_FONT_BOLD(6),      QRect(  531, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7C1TIME         },

    //{QSTR("782"),                   D_FONT_BOLD(6),      QRect(  531, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_782TIME         },//LMH

   // {QSTR("921_4"),                   D_FONT_BOLD(6),      QRect(661, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 149, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_921TIME         },

    //{QSTR("130_1"),                   D_FONT_BOLD(6),      QRect(  8, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_130TIME         },


//    {QSTR("414_4"),                   D_FONT_BOLD(6),      QRect(141, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_414TIME         },


    //{QSTR("521_4"),                   D_FONT_BOLD(6),      QRect(271, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_521TIME         },
    //{QSTR("730_4"),                   D_FONT_BOLD(6),      QRect(401, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_730TIME         },
    //{QSTR("7D0_4"),                   D_FONT_BOLD(6),      QRect(  531, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7D0TIME         },
    //{QSTR("A00_1"),                   D_FONT_BOLD(6),      QRect(661, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   // {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 171, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A00TIME         },

    //{QSTR("140_1"),                   D_FONT_BOLD(6),      QRect(  8, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_140TIME         },


//    {QSTR("420_1"),                   D_FONT_BOLD(6),      QRect(141, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_420TIME         },



//    {QSTR("530_1"),                   D_FONT_BOLD(6),      QRect(271, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_530TIME         },

        //{QSTR("73A"),                   D_FONT_BOLD(6),      QRect(271, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
        //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_73ATIME         },

    //{QSTR("731_8"),                   D_FONT_BOLD(6),      QRect(401, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_731TIME         },
    //{QSTR("7D1_8"),                   D_FONT_BOLD(6),      QRect(  531, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7D1TIME         },
    //{QSTR("A10_2"),                   D_FONT_BOLD(6),      QRect(661, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 193, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A10TIME         },

    //{QSTR("150_1"),                   D_FONT_BOLD(6),      QRect(  8, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_150TIME         },


//    {QSTR("421_1"),                   D_FONT_BOLD(6),      QRect(141, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_421TIME         },


    //{QSTR("531_4"),                   D_FONT_BOLD(6),      QRect(271, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_531TIME         },

    //{QSTR("74A"),                   D_FONT_BOLD(6),      QRect(271, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_74ATIME         },
    //{QSTR("740_4"),                   D_FONT_BOLD(6),      QRect(401, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_740TIME         },
    //{QSTR("7E0_4"),                   D_FONT_BOLD(6),      QRect(  531, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7E0TIME         },
    //{QSTR("A11_2"),                   D_FONT_BOLD(6),      QRect(661, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 215, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A11TIME         },

    //{QSTR("160_1"),                   D_FONT_BOLD(6),      QRect(  8, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_160TIME         },


//    {QSTR("422_1"),                   D_FONT_BOLD(6),      QRect(141, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_422TIME         },


    //{QSTR("540_1"),                   D_FONT_BOLD(6),      QRect(271, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_540TIME         },
    //{QSTR("75A"),                   D_FONT_BOLD(6),      QRect(271, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_75ATIME         },
    //{QSTR("741_8"),                   D_FONT_BOLD(6),      QRect(401, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_741TIME         },
    //{QSTR("7E1_8"),                   D_FONT_BOLD(6),      QRect(  531, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7E1TIME         },
    //{QSTR("B00_4"),                   D_FONT_BOLD(6),      QRect(661, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 237, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B00TIME         },




    //{QSTR("423_1"),                   D_FONT_BOLD(6),      QRect(141, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_423TIME         },
    //{QSTR("541_4"),                   D_FONT_BOLD(6),      QRect(271, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_541TIME         },
     //{QSTR("76A"),                   D_FONT_BOLD(6),      QRect(271, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_76ATIME         },
    //{QSTR("750_4"),                   D_FONT_BOLD(6),      QRect(401, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_750TIME         },
    //{QSTR("7F0_4"),                   D_FONT_BOLD(6),      QRect(  531, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7F0TIME         },
    //{QSTR("A38"),                   D_FONT_BOLD(6),      QRect(  531, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A38TIME         },
    //{QSTR("B10_4"),                   D_FONT_BOLD(6),      QRect(661, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 259, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B10TIME         },


    //{QSTR("424_4"),                   D_FONT_BOLD(6),      QRect(141, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_424TIME         },
    //{QSTR("550_1"),                   D_FONT_BOLD(6),      QRect(271, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_550TIME         },

    //{QSTR("77A"),                   D_FONT_BOLD(6),      QRect(271, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_77ATIME         },
    //{QSTR("751_8"),                   D_FONT_BOLD(6),      QRect(401, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_751TIME         },
    //{QSTR("7F1_8"),                   D_FONT_BOLD(6),      QRect(  531, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,         ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7F1TIME         },
    //{QSTR("A48"),                   D_FONT_BOLD(6),      QRect(  531, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,         ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A48TIME         },
    //{QSTR("B20_4"),                   D_FONT_BOLD(6),      QRect(661, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   // {QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 281, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B20TIME         },


    //{QSTR("430_1"),                   D_FONT_BOLD(6),      QRect(141, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_430TIME         },
    //{QSTR("551_4"),                   D_FONT_BOLD(6),      QRect(271, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_551TIME         },
    //{QSTR("78A"),                   D_FONT_BOLD(6),      QRect(271, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_78ATIME         },
    //{QSTR("760_4"),                   D_FONT_BOLD(6),      QRect(401, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_760TIME         },
    //{QSTR("800_1"),                   D_FONT_BOLD(6),      QRect(  531, 303, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("预留"),                      D_FONT_BOLD(4),      QRect(581, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
     //{QSTR("718"),                   D_FONT_BOLD(6),      QRect(  531, 303, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_718TIME         },

    //{QSTR("F00_4"),                   D_FONT_BOLD(6),      QRect(661, 303, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F00TIME         },

    //{QSTR("71A"),                   D_FONT_BOLD(6),      QRect(661, 303, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 303, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_71ATIME         },


    {QSTR("310"),                   D_FONT_BOLD(8),      QRect(  8, 324+22, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 325+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_310TIME         },

    //{QSTR("431_1"),                   D_FONT_BOLD(6),      QRect(141, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_431TIME         },
    //{QSTR("560_1"),                   D_FONT_BOLD(6),      QRect(271, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_560TIME         },
    //{QSTR("761_8"),                   D_FONT_BOLD(6),      QRect(401, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_761TIME         },
    //{QSTR("810_4"),                   D_FONT_BOLD(6),      QRect(  531, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_810TIME         },
      //{QSTR("A20"),                   D_FONT_BOLD(6),      QRect(  531, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
      //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A20TIME         },

    //{QSTR("F01_4"),                   D_FONT_BOLD(6),      QRect(661, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F01TIME         },

    //{QSTR("72A"),                   D_FONT_BOLD(6),      QRect(661, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 325, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_72ATIME         },

//    {QSTR("201_4"),                   D_FONT_BOLD(6),      QRect(  8, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(4),      QRect(61, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_201TIME         },

     {QSTR("311"),                   D_FONT_BOLD(8),      QRect(  8, 346+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QSTR(""),                     D_FONT_BOLD(8),      QRect(61, 347+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_311TIME         },

    //{QSTR("432_1"),                   D_FONT_BOLD(6),      QRect(141, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_432TIME         },
    //{QSTR("561_4"),                   D_FONT_BOLD(6),      QRect(271, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_561TIME         },
    //{QSTR("770_4"),                   D_FONT_BOLD(6),      QRect(401, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("----"),                  D_FONT_BOLD(4),      QRect(451, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_770TIME         },
    //{QSTR("820_4"),                   D_FONT_BOLD(6),      QRect(  531, 346, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_820TIME         },
    //{QSTR("A21"),                   D_FONT_BOLD(6),      QRect(  531, 346, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A21TIME         },

    //{QSTR("F02_4"),                   D_FONT_BOLD(6),      QRect(661, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 347, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F02TIME         },

    //{QSTR("202_4"),                   D_FONT_BOLD(6),      QRect(  8, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_202TIME         },

    {QSTR("312"),                   D_FONT_BOLD(8),      QRect(  8, 368+22, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 369+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_312TIME         },

    //{QSTR("433_1"),                   D_FONT_BOLD(6),      QRect(141, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_433TIME         },
    //{QSTR("719"),                   D_FONT_BOLD(6),      QRect(271, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("预留"),                      D_FONT_BOLD(4),      QRect(321, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_719TIME         },
    //{QSTR("771_8"),                   D_FONT_BOLD(6),      QRect(401, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_771TIME         },
    //{QSTR("830_4"),                   D_FONT_BOLD(6),      QRect(  531, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_830TIME         },
    //{QSTR("A30"),                   D_FONT_BOLD(6),      QRect(  531, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(581, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A30TIME         },

    //{QSTR("F03_4"),                   D_FONT_BOLD(6),      QRect(661, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 369, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F03TIME         },

    //{QSTR("203_4"),                   D_FONT_BOLD(6),      QRect(  8, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(61, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_203TIME         },

    {QSTR("313"),                   D_FONT_BOLD(8),      QRect(  8, 390+22, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(61, 391+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_313TIME         },

    //{QSTR("434_4"),                   D_FONT_BOLD(6),      QRect(141, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_434TIME         },
    //{QSTR("610_1"),                   D_FONT_BOLD(6),      QRect(271, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_610TIME         },
    //{QSTR("780_4"),                   D_FONT_BOLD(6),      QRect(401, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_780TIME         },
    //{QSTR("840_4"),                   D_FONT_BOLD(6),      QRect(  531, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_840TIME         },
    //{QSTR("A31"),                   D_FONT_BOLD(6),      QRect(  531, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A31TIME         },

    //{QSTR("F10_4"),                   D_FONT_BOLD(6),      QRect(661, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 391, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F10TIME         },

//    {QSTR("280_4"),                   D_FONT_BOLD(6),      QRect(  8, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("----"),                  D_FONT_BOLD(4),      QRect(61, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_280TIME         },

    {QSTR("320"),                   D_FONT_BOLD(8),      QRect(  8, 412+22, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("----"),                  D_FONT_BOLD(8),      QRect(61, 413+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_320TIME         },

    //{QSTR("440_1"),                    D_FONT_BOLD(6),      QRect(141, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_440TIME         },
    //{QSTR("611_4"),                   D_FONT_BOLD(6),      QRect(271, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_611TIME         },
    //{QSTR("781_8"),                   D_FONT_BOLD(6),      QRect(401, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_781TIME         },
    //{QSTR("850_4"),                   D_FONT_BOLD(6),      QRect(  531, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_850TIME         },
    //{QSTR("A40"),                   D_FONT_BOLD(6),      QRect(  531, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A40TIME         },

    //{QSTR("F11_4"),                   D_FONT_BOLD(6),      QRect(661, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 413, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F11TIME         },

//    {QSTR("281_4"),                   D_FONT_BOLD(6),      QRect(  8, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_281TIME         },

    {QSTR("321"),                   D_FONT_BOLD(8),      QRect(  8, 434+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 435+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_321TIME         },

    //{QSTR("441_1"),                   D_FONT_BOLD(6),      QRect(141, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_441TIME         },
    //{QSTR("620_1"),                   D_FONT_BOLD(6),      QRect(271, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_620TIME         },
    //{QSTR("790_4"),                   D_FONT_BOLD(6),      QRect(401, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_712TIME         },
    //{QSTR("712"),                   D_FONT_BOLD(6),      QRect(401, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_712TIME         },
    //{QSTR("860_4"),                   D_FONT_BOLD(6),      QRect(  531, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_860TIME         },
    //{QSTR("A41"),                   D_FONT_BOLD(6),      QRect(  531, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A41TIME         },
    //{QSTR("F12_4"),                   D_FONT_BOLD(6),      QRect(661, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 435, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F12TIME         },

//    {QSTR("282_4"),                   D_FONT_BOLD(6),      QRect(  8, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_282TIME         },

    {QSTR("322"),                   D_FONT_BOLD(8),      QRect(  8, 456+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 457+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_322TIME         },

    //{QSTR("442_1"),                   D_FONT_BOLD(6),      QRect(141, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_442TIME         },
    //{QSTR("621_4"),                   D_FONT_BOLD(6),      QRect(271, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_621TIME         },
    //{QSTR("722"),                   D_FONT_BOLD(6),      QRect(401, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(451, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_722TIME         },//LMH
    //{QSTR("870_4"),                   D_FONT_BOLD(6),      QRect(  531, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_870TIME         },
    //{QSTR("A18"),                   D_FONT_BOLD(6),      QRect(  531, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A18TIME         },
    //{QSTR("F13_4"),                   D_FONT_BOLD(6),      QRect(661, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 457, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_F13TIME         },

//    {QSTR("283_4"),                   D_FONT_BOLD(6),      QRect(  8, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_283TIME         },

   {QSTR("323"),                   D_FONT_BOLD(8),      QRect(  8, 478+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   {QSTR(""),                      D_FONT_BOLD(8),      QRect(61, 479+22, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_323TIME         },

    //{QSTR("443_1"),                   D_FONT_BOLD(6),      QRect(141, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_443TIME         },
    //{QSTR("700_4"),                   D_FONT_BOLD(6),      QRect(271, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
   //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_700TIME         },
    //{QSTR("732"),                   D_FONT_BOLD(6),      QRect(401, 478, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("----"),                  D_FONT_BOLD(4),      QRect(451, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_732TIME         },//LMH
    //{QSTR("880_4"),                   D_FONT_BOLD(6),      QRect(  531, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_880TIME         },
    //{QSTR("A28"),                   D_FONT_BOLD(6),      QRect(  531, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A28TIME         },
    //{QSTR(""),                   D_FONT_BOLD(6),      QRect(661, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },

    //{QSTR("918"),                   D_FONT_BOLD(6),      QRect(661, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 479, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_918TIME         },

    //{QSTR("271"),                   D_FONT_BOLD(6),      QRect(  8, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("预留"),                      D_FONT_BOLD(6),      QRect(61, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("444_4"),                   D_FONT_BOLD(6),      QRect(141, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_444TIME         },
    //{QSTR("701_8"),                   D_FONT_BOLD(6),      QRect(271, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_701TIME         },
    //{QSTR("742"),                   D_FONT_BOLD(6),      QRect(401, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(451, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_742TIME         },//LMH
    //{QSTR("900_1"),                   D_FONT_BOLD(6),      QRect(  531, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("预留"),                      D_FONT_BOLD(4),      QRect(581, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("418"),                   D_FONT_BOLD(6),      QRect(  531, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(581, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_418TIME         },

    //{QSTR(""),                   D_FONT_BOLD(6),      QRect(661, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },

    //{QSTR("B18"),                   D_FONT_BOLD(6),      QRect(661, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(711, 501, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B18TIME         },

    //{QSTR("308"),                   D_FONT_BOLD(6),      QRect(  8, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(61, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_308TIME         },
   // {QSTR("309"),                   D_FONT_BOLD(6),      QRect(141, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(191, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_309TIME         },
   // {QSTR("318"),                   D_FONT_BOLD(6),      QRect(271, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_318TIME         },
    //{QSTR("328"),                   D_FONT_BOLD(6),      QRect(401, 522+5, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(4),      QRect(451, 523+5, 78, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_328TIME         },


    D_COMMON_PAGE_BUTTON_BAR
};
int g_RefreshTimeRomLen = sizeof(g_PicRom_RefreshTime)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRefreshTimePage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CRefreshTimePage::CRefreshTimePage()
{
}

void CRefreshTimePage::OnUpdatePage()
{
    UpdateRefreshTime();
    UpdateTimeoutRemind();
    ((CLabel *)GetDlgItem(ID_PIBRT_LABEL_HEAD))->SetCtrlText(QSTR("列车号:")+QString::number(CCU_HMI_309_9/256));
}

void CRefreshTimePage::OnInitPage()
{

}

void CRefreshTimePage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
    this->InitPageHeader();//3.17
}

void CRefreshTimePage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CRefreshTimePage::OnComBtn2Clk()
{

}

void CRefreshTimePage::OnComBtn3Clk()
{

}

void CRefreshTimePage::OnComBtn4Clk()
{

}

void CRefreshTimePage::OnComBtn5Clk()
{

}

void CRefreshTimePage::OnComBtn6Clk()
{
//    ChangePage(PAGE_INDEX_REFRESHTIME2);
}

void CRefreshTimePage::UpdateRefreshTime()
{


//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_100TIME,refresh_time_100);
   // SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110,65535);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110,refresh_time_udp_110);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_114TIME,65535-refresh_time_114,refresh_time_udp_114);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_111TIME,65535-refresh_time_111,refresh_time_udp_114);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_120TIME,65535-refresh_time_120,refresh_time_udp_120);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_121TIME,65535-refresh_time_121,refresh_time_udp_114);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130,refresh_time_udp_130);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_131TIME,65535-refresh_time_131,refresh_time_udp_114);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_140TIME,65535-refresh_time_140,refresh_time_udp_140);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_141TIME,65535-refresh_time_141,refresh_time_udp_114);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_210TIME,65535-refresh_time_210,refresh_time_udp_150);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_211TIME,65535-refresh_time_211,refresh_time_udp_160);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_212TIME,65535-refresh_time_212,refresh_time_udp_170);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_213TIME,65535-refresh_time_213,refresh_time_udp_180);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_310TIME,65535-refresh_time_310,refresh_time_udp_200);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_311TIME,65535-refresh_time_311,refresh_time_udp_201);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_312TIME,65535-refresh_time_312,refresh_time_udp_202);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_313TIME,65535-refresh_time_313,refresh_time_udp_203);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_320TIME,65535-refresh_time_320,refresh_time_udp_280);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321,refresh_time_udp_281);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322,refresh_time_udp_282);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_323TIME,65535-refresh_time_323,refresh_time_udp_283);


 //   SetRefreshTimeLabelString(ID_PIBRT_LABEL_400TIME,65535-refresh_time_400,refresh_time_udp_110);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_410TIME,65535-refresh_time_410,refresh_time_udp_410);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_411TIME,65535-refresh_time_411,refresh_time_udp_411);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_420TIME,65535-refresh_time_420,refresh_time_udp_420);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_421TIME,65535-refresh_time_421,refresh_time_udp_421);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_430TIME,65535-refresh_time_430,refresh_time_udp_430);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_431TIME,65535-refresh_time_431,refresh_time_udp_431);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_440TIME,65535-refresh_time_440,refresh_time_udp_440);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_441TIME,65535-refresh_time_441,refresh_time_udp_441);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_510TIME,65535-refresh_time_510,refresh_time_udp_510);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_511TIME,65535-refresh_time_511,refresh_time_udp_511);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_520TIME,65535-refresh_time_520,refresh_time_udp_520);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_521TIME,65535-refresh_time_521,refresh_time_udp_521);


        SetRefreshTimeLabelString(ID_PIBRT_LABEL_73ATIME,65535-refresh_time_73A,refresh_time_udp_530);//
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_74ATIME,65535-refresh_time_74A,refresh_time_udp_531);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_75ATIME,65535-refresh_time_75A,refresh_time_udp_540);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_76ATIME,65535-refresh_time_76A,refresh_time_udp_541);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_77ATIME,65535-refresh_time_77A,refresh_time_udp_550);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_78ATIME,65535-refresh_time_78A,refresh_time_udp_551);//



    SetRefreshTimeLabelString(ID_PIBRT_LABEL_610TIME,65535-refresh_time_610,refresh_time_udp_610);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_611TIME,65535-refresh_time_611,refresh_time_udp_611);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_620TIME,65535-refresh_time_620,refresh_time_udp_620);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_621TIME,65535-refresh_time_621,refresh_time_udp_621);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710,refresh_time_udp_710);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711,refresh_time_udp_711);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720,refresh_time_udp_720);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721,refresh_time_udp_721);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_730TIME,65535-refresh_time_730,refresh_time_udp_730);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_731TIME,65535-refresh_time_731,refresh_time_udp_731);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_740TIME,65535-refresh_time_740,refresh_time_udp_740);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_741TIME,65535-refresh_time_741,refresh_time_udp_741);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_750TIME,65535-refresh_time_750,refresh_time_udp_750);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_751TIME,65535-refresh_time_751,refresh_time_udp_751);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_760TIME,65535-refresh_time_760,refresh_time_udp_760);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_761TIME,65535-refresh_time_761,refresh_time_udp_761);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_770TIME,65535-refresh_time_770,refresh_time_udp_770);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_771TIME,65535-refresh_time_771,refresh_time_udp_771);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_780TIME,65535-refresh_time_780,refresh_time_udp_780);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_781TIME,65535-refresh_time_781,refresh_time_udp_781);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_712TIME,65535-refresh_time_712,refresh_time_udp_790);//

      SetRefreshTimeLabelString(ID_PIBRT_LABEL_722TIME,65535-refresh_time_722,refresh_time_udp_791);
      SetRefreshTimeLabelString(ID_PIBRT_LABEL_732TIME,65535-refresh_time_732,refresh_time_udp_7A0);
      SetRefreshTimeLabelString(ID_PIBRT_LABEL_742TIME,65535-refresh_time_742,refresh_time_udp_7A1);

      SetRefreshTimeLabelString(ID_PIBRT_LABEL_752TIME,65535-refresh_time_752,refresh_time_udp_7B0);
      SetRefreshTimeLabelString(ID_PIBRT_LABEL_762TIME,65535-refresh_time_762,refresh_time_udp_7B1);
      SetRefreshTimeLabelString(ID_PIBRT_LABEL_772TIME,65535-refresh_time_772,refresh_time_udp_7C0);
      SetRefreshTimeLabelString(ID_PIBRT_LABEL_782TIME,65535-refresh_time_782,refresh_time_udp_7C1);


        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A38TIME,65535-refresh_time_A38,refresh_time_udp_7F0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A48TIME,65535-refresh_time_A48,refresh_time_udp_7F1);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A20TIME,65535-refresh_time_A20,refresh_time_udp_810);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A21TIME,65535-refresh_time_A21,refresh_time_udp_820);//LMH

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A30TIME,65535-refresh_time_A30,refresh_time_udp_830);//LMH

         SetRefreshTimeLabelString(ID_PIBRT_LABEL_A31TIME,65535-refresh_time_A31,refresh_time_udp_840);//LMH

         SetRefreshTimeLabelString(ID_PIBRT_LABEL_A40TIME,65535-refresh_time_A40,refresh_time_udp_850);//LMH

         SetRefreshTimeLabelString(ID_PIBRT_LABEL_A41TIME,65535-refresh_time_A41,refresh_time_udp_860);//LMH

         SetRefreshTimeLabelString(ID_PIBRT_LABEL_A18TIME,65535-refresh_time_A18,refresh_time_udp_870);//LMH

         SetRefreshTimeLabelString(ID_PIBRT_LABEL_A28TIME,65535-refresh_time_A28,refresh_time_udp_880);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_910TIME,65535-refresh_time_910,refresh_time_udp_910);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_911TIME,65535-refresh_time_911,refresh_time_udp_911);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_920TIME,65535-refresh_time_920,refresh_time_udp_920);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_921TIME,65535-refresh_time_921,refresh_time_udp_921);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_918TIME,65535-refresh_time_918,refresh_time_udp_921);//lmh
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_928TIME,65535-refresh_time_928,refresh_time_udp_921);//lmh
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B18TIME,65535-refresh_time_B18,refresh_time_udp_921);//lmh
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_418TIME,65535-refresh_time_418,refresh_time_udp_921);//lmh
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_419TIME,65535-refresh_time_419,refresh_time_udp_F13);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_718TIME,65535-refresh_time_718,refresh_time_udp_921);//lmh
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_719TIME,65535-refresh_time_719,refresh_time_udp_921);//lmh

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A10TIME,65535-refresh_time_A10,refresh_time_udp_A10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_A11TIME,65535-refresh_time_A11,refresh_time_udp_A11);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10,refresh_time_udp_B10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_B20TIME,65535-refresh_time_B20,refresh_time_udp_B20);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_71ATIME,65535-refresh_time_71A,refresh_time_udp_F00);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_72ATIME,65535-refresh_time_72A,refresh_time_udp_F01);



        SetRefreshTimeLabelString(ID_PIBRT_LABEL_118TIME,65535-refresh_time_118,refresh_time_udp_F02);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_128TIME,65535-refresh_time_128,refresh_time_udp_F03);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_138TIME,65535-refresh_time_138,refresh_time_udp_F10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_148TIME,65535-refresh_time_148,refresh_time_udp_F11);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_218TIME,65535-refresh_time_218,refresh_time_udp_F12);

        SetRefreshTimeLabelString(ID_PIBRT_LABEL_518TIME,65535-refresh_time_518,refresh_time_udp_F02);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_528TIME,65535-refresh_time_528,refresh_time_udp_F03);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_618TIME,65535-refresh_time_618,refresh_time_udp_F10);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_628TIME,65535-refresh_time_628,refresh_time_udp_F11);



        SetRefreshTimeLabelString(ID_PIBRT_LABEL_308TIME,65535-refresh_time_308,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_309TIME,65535-refresh_time_309,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_30ATIME,65535-refresh_time_30A,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_318TIME,65535-refresh_time_318,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_328TIME,65535-refresh_time_328,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_C10TIME,65535-refresh_time_C10,0);
        SetRefreshTimeLabelString(ID_PIBRT_LABEL_C20TIME,65535-refresh_time_C20,0);


}
void CRefreshTimePage::UpdateTimeoutRemind()
{
    //    SetRefreshTimeLabelString(ID_PIBRT_LABEL_100TIME,refresh_time_100);
       // SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110,65535);

        SetTimeoutRemind_1(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_111TIME,65535-refresh_time_111);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_120TIME,65535-refresh_time_120);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_121TIME,65535-refresh_time_121);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_131TIME,65535-refresh_time_131);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_140TIME,65535-refresh_time_140);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_141TIME,65535-refresh_time_141);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_210TIME,65535-refresh_time_210);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_211TIME,65535-refresh_time_211);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_212TIME,65535-refresh_time_212);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_213TIME,65535-refresh_time_213);

   if(TC2_HMI==1)

        {
        SetTimeoutRemind_2(ID_PIBRT_LABEL_310TIME,65535-refresh_time_310);
        SetTimeoutRemind_2(ID_PIBRT_LABEL_311TIME,65535-refresh_time_311);
        SetTimeoutRemind_2(ID_PIBRT_LABEL_312TIME,65535-refresh_time_312);
        SetTimeoutRemind_2(ID_PIBRT_LABEL_313TIME,65535-refresh_time_313);
       }
    else
       {
        SetTimeoutRemind_2(ID_PIBRT_LABEL_320TIME,65535-refresh_time_320);
        SetTimeoutRemind_2(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);
        SetTimeoutRemind_2(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);
        SetTimeoutRemind_2(ID_PIBRT_LABEL_323TIME,65535-refresh_time_323);
       }
        SetTimeoutRemind_1(ID_PIBRT_LABEL_410TIME,65535-refresh_time_410);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_411TIME,65535-refresh_time_411);

        SetTimeoutRemind_1(ID_PIBRT_LABEL_420TIME,65535-refresh_time_420);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_421TIME,65535-refresh_time_421);

        SetTimeoutRemind_1(ID_PIBRT_LABEL_430TIME,65535-refresh_time_430);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_431TIME,65535-refresh_time_431);

        SetTimeoutRemind_1(ID_PIBRT_LABEL_440TIME,65535-refresh_time_440);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_441TIME,65535-refresh_time_441);

        SetTimeoutRemind_1(ID_PIBRT_LABEL_510TIME,65535-refresh_time_510);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_511TIME,65535-refresh_time_511);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_520TIME,65535-refresh_time_520);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_521TIME,65535-refresh_time_521);

        SetTimeoutRemind_5(ID_PIBRT_LABEL_71ATIME,65535-refresh_time_71A);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_72ATIME,65535-refresh_time_72A);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_73ATIME,65535-refresh_time_73A);//
        SetTimeoutRemind_5(ID_PIBRT_LABEL_74ATIME,65535-refresh_time_74A);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_75ATIME,65535-refresh_time_75A);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_76ATIME,65535-refresh_time_76A);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_77ATIME,65535-refresh_time_77A);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_78ATIME,65535-refresh_time_78A);//



        SetTimeoutRemind_1(ID_PIBRT_LABEL_610TIME,65535-refresh_time_610);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_611TIME,65535-refresh_time_611);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_620TIME,65535-refresh_time_620);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_621TIME,65535-refresh_time_621);

        SetTimeoutRemind_5(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_730TIME,65535-refresh_time_730);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_731TIME,65535-refresh_time_731);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_740TIME,65535-refresh_time_740);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_741TIME,65535-refresh_time_741);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_750TIME,65535-refresh_time_750);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_751TIME,65535-refresh_time_751);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_760TIME,65535-refresh_time_760);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_761TIME,65535-refresh_time_761);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_770TIME,65535-refresh_time_770);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_771TIME,65535-refresh_time_771);
        SetTimeoutRemind_5(ID_PIBRT_LABEL_780TIME,65535-refresh_time_780);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_781TIME,65535-refresh_time_781);

      SetTimeoutRemind_3(ID_PIBRT_LABEL_712TIME,65535-refresh_time_712);//
      SetTimeoutRemind_3(ID_PIBRT_LABEL_722TIME,65535-refresh_time_722);
      SetTimeoutRemind_3(ID_PIBRT_LABEL_732TIME,65535-refresh_time_732);
      SetTimeoutRemind_3(ID_PIBRT_LABEL_742TIME,65535-refresh_time_742);
      SetTimeoutRemind_3(ID_PIBRT_LABEL_752TIME,65535-refresh_time_752);
      SetTimeoutRemind_3(ID_PIBRT_LABEL_762TIME,65535-refresh_time_762);
      SetTimeoutRemind_3(ID_PIBRT_LABEL_772TIME,65535-refresh_time_772);
      SetTimeoutRemind_3(ID_PIBRT_LABEL_782TIME,65535-refresh_time_782);


        SetTimeoutRemind_3(ID_PIBRT_LABEL_A38TIME,65535-refresh_time_A38);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A48TIME,65535-refresh_time_A48);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A20TIME,65535-refresh_time_A20);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A21TIME,65535-refresh_time_A21);//LMH
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A30TIME,65535-refresh_time_A30);//LMH
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A31TIME,65535-refresh_time_A31);//LMH
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A40TIME,65535-refresh_time_A40);//LMH
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A41TIME,65535-refresh_time_A41);//LMH
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A18TIME,65535-refresh_time_A18);//LMH
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A28TIME,65535-refresh_time_A28);

        SetTimeoutRemind_3(ID_PIBRT_LABEL_910TIME,65535-refresh_time_910);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_911TIME,65535-refresh_time_911);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_920TIME,65535-refresh_time_920);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_921TIME,65535-refresh_time_921);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_918TIME,65535-refresh_time_918);//lmh
        SetTimeoutRemind_3(ID_PIBRT_LABEL_928TIME,65535-refresh_time_928);//lmh
        SetTimeoutRemind_3(ID_PIBRT_LABEL_B18TIME,65535-refresh_time_B18);//lmh
        SetTimeoutRemind_4(ID_PIBRT_LABEL_418TIME,65535-refresh_time_418);//lmh
        SetTimeoutRemind_0(ID_PIBRT_LABEL_419TIME,65535-refresh_time_419);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_718TIME,65535-refresh_time_718);//lmh
        SetTimeoutRemind_3(ID_PIBRT_LABEL_719TIME,65535-refresh_time_719);//lmh

        SetTimeoutRemind_3(ID_PIBRT_LABEL_A10TIME,65535-refresh_time_A10);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_A11TIME,65535-refresh_time_A11);

        SetTimeoutRemind_3(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_B20TIME,65535-refresh_time_B20);





            SetTimeoutRemind_0(ID_PIBRT_LABEL_118TIME,65535-refresh_time_118);
            SetTimeoutRemind_0(ID_PIBRT_LABEL_128TIME,65535-refresh_time_128);
            SetTimeoutRemind_0(ID_PIBRT_LABEL_138TIME,65535-refresh_time_138);
            SetTimeoutRemind_0(ID_PIBRT_LABEL_148TIME,65535-refresh_time_148);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_218TIME,65535-refresh_time_218);

            SetTimeoutRemind_1(ID_PIBRT_LABEL_518TIME,65535-refresh_time_518);
            SetTimeoutRemind_1(ID_PIBRT_LABEL_528TIME,65535-refresh_time_528);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_618TIME,65535-refresh_time_618);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_628TIME,65535-refresh_time_628);



            SetTimeoutRemind_1(ID_PIBRT_LABEL_308TIME,65535-refresh_time_308);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_309TIME,65535-refresh_time_309);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_30ATIME,65535-refresh_time_30A);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_318TIME,65535-refresh_time_318);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_328TIME,65535-refresh_time_328);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_C10TIME,65535-refresh_time_C10);
            SetTimeoutRemind_3(ID_PIBRT_LABEL_C20TIME,65535-refresh_time_C20);

}
void CRefreshTimePage::SetTimeoutRemind_0(int id, int DataVal)
{
   if (DataVal>32)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_1(int id, int DataVal)
{
   if (DataVal>64)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_2(int id, int DataVal)
{
   if (DataVal>128)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_3(int id, int DataVal)
{
   if (DataVal>256)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_4(int id, int DataVal)
{
   if (DataVal>512)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_5(int id, int DataVal)
{
   if (DataVal>1024)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}


void CRefreshTimePage::SetRefreshTimeLabelString(int id, int DataVal,int DataVal2)
{
    //((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal)+"_"+QString::number(DataVal2));//3.10
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));


    return;
}
