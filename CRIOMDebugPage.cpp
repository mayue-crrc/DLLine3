#include "CRIOMDebugPage.h"

ROMDATA g_PicRom_RIOMDebug[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("RIOM调试"))
    {"",                            D_FONT_BOLD(10),      QRect(100, 45, 600,  70),           Qt::black,                QColor(205,205,205),                CONTROL_TRAIN,            ID_PIBIDP_TRAIN            },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(702,  80,  45,  20),           Qt::white,                Qt::white,               CONTROL_ARROW,            ID_PIBIDP_RIGHTARROW       },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(40,  80,  45,  20),           Qt::white,                Qt::white,               CONTROL_ARROW,            ID_PIBIDP_LEFTARROW        },
//  {QSTR("B4011"),                 D_FONT_BOLD(6),      QRect(220,  56,  48,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QSTR("B4012"),                 D_FONT_BOLD(6),      QRect(285,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QSTR("B4013"),                 D_FONT_BOLD(6),      QRect(366,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QSTR("B4014"),                 D_FONT_BOLD(6),      QRect(447,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QSTR("B4015"),                 D_FONT_BOLD(6),      QRect(528,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QSTR("B4016"),                 D_FONT_BOLD(6),      QRect(613,  56,  48,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 15,  115, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  140, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  165, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  190, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  215, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  240, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  265, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  290, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  315, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  340, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  365, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  390, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  415, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  440, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  465, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  490, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  515, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  540, 686,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//    {"",                            D_FONT_BOLD(6),      QRect( 15,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(120,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(200,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(280,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(360,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(440,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(520,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(600,  115, 1,  426),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(680,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(760,  115, 1,  426),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 15,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(120,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(265,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(410,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(555,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(520,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(600,  115, 1,  426),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(680,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(760,  115, 1,  426),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(121,  116 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_1         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(201,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_2         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(281,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_3         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(361,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_4         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_5         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_6         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_7         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_8         },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  116 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_1         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(266,  116 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_2         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(411,  116 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  116 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_4         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_5         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_6         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_7         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_8         },


    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  141 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE1     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(266,  141 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE2     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(411,  141 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE3     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  141 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE4     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  141 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE5     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  141 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE6     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  141 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE7     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  141 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE8     },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  166 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_1         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(201,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_2         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(281,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  166 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_4         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_5         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_6         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_7         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(556,  166 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_8         },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  191 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE1     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(201,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE2     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(281,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE3     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  191 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE4     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE5     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE6     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE7     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(556,  191 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE8     },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  216 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_1         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(266,  216 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(411,  216 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(361,  216 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  216 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  216 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(601,  216 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  216 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_4         },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  241 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_LIFE1     },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(266,  241 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(411,  241 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(361,  241 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  241 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  241 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("--"),                    D_FONT_BOLD(6),      QRect(601,  241 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  241 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_LIFE4     },

//    {QSTR("PWM1:"),                    D_FONT_BOLD(4),      QRect(201,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM2:"),                    D_FONT_BOLD(4),      QRect(281,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM3:"),                    D_FONT_BOLD(4),      QRect(361,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM3:"),                    D_FONT_BOLD(4),      QRect(441,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM2:"),                    D_FONT_BOLD(4),      QRect(521,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM1:"),                    D_FONT_BOLD(4),      QRect(601,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM4:"),                    D_FONT_BOLD(4),      QRect(201,  291 , 32, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("PWM4:"),                    D_FONT_BOLD(4),      QRect(601,  291 , 32, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(121,  266 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(201+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM1_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(281+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM2_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(361+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM3_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM3_8         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM2_8         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(601+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM1_8         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  266 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_8         },

//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(121,  291 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_LIFE1     },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(201+30,  291 , 45, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM4_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(281,  291 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(361,  291 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  291 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  291 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(601+30,  291 , 45, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM4_8         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  291 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_LIFE8     },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  266 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_1         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(266,  266 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_2         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(411,  266 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  266 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_4         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  316 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_5         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  316 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_6         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  316 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_7         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  316 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_8         },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  291 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE1     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(266,  291 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE2     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(411,  291 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE3     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  291 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE4     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  341 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE5     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  341 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE6     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  341 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE7     },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  341 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE8     },

//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(121,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(201,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(281,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(361,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(601,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_8         },

//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(121,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_LIFE1     },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(201,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(281,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(361,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(601,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_LIFE8     },

    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(121,  316 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_AI1_1    },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(201,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_PIBIDP_AIM1_AI2_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(281,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(361,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_PIBIDP_AIM1_AI4_1         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                    D_FONT_BOLD(6),      QRect(601,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_PIBIDP_AIM1_AI2_8         },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(556,  316 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_AI1_8    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  341-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_1    },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(201,  441 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_2    },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(281,  441 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  341-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_4    },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  441 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  441 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  441 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_7    },
    //{QSTR(""),                      D_FONT_BOLD(6),      QRect(556,  341 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_8    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  366-25 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_1    },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(266,  366-25 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_2         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(411,  366-25 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_3         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(556,  366-25 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_4         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(441,  466 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_5         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(521,  466 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_6         },
//    {QSTR("--"),                    D_FONT_BOLD(6),      QRect(601,  466 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_7         },
   // {QSTR(""),                      D_FONT_BOLD(6),      QRect(556,  366 , 140, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_8    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  391-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT1           },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(266,  391-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT2           },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(411,  391-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT3           },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  391-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT4           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  491 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT5           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  491 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT6           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  491 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT7           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  491 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT8           },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(121,  416-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD1           },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(266,  416-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD2           },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(411,  416-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD3           },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(556,  416-25 , 140, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD4           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(441,  516 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD5           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(521,  516 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD6           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(601,  516 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD7           },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect(681,  516 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD8           },

    {QSTR("DIM1(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  115, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DIM1_life"),             D_FONT_BOLD(6),      QRect( 15,  140, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DIM2(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  165, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DIM2_life"),             D_FONT_BOLD(6),      QRect( 15,  190, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DIM3(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  215, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DIM3_life"),             D_FONT_BOLD(6),      QRect( 15,  240, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("PWM(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  265, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("PWM_life"),             D_FONT_BOLD(6),      QRect( 15,  290, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DOM1(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  265, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("DOM1_life"),             D_FONT_BOLD(6),      QRect( 15,  290, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("DOM2(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  365, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("DOM2_life"),             D_FONT_BOLD(6),      QRect( 15,  390, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("AIM1"),             D_FONT_BOLD(6),      QRect( 15,  315, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("AIM1_life"),             D_FONT_BOLD(6),      QRect( 15,  340-25, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("RIOM_GWlife"),             D_FONT_BOLD(6),      QRect( 15,  365-25, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("LAT"),                   D_FONT_BOLD(6),      QRect( 15,  390-25, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("RLD"),                   D_FONT_BOLD(6),      QRect( 15,  415-25, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("HMI1_GW"),               D_FONT_BOLD(6),      QRect( 685,  365, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 685,  390, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI1_GW1         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 685,  415, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI1_GW2         },
//    {QSTR("HMI2_GW"),               D_FONT_BOLD(6),      QRect( 685,  465, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 685,  490, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI2_GW1         },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 685,  515, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI2_GW2         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_RIOMDebugRomLen = sizeof(g_PicRom_RIOMDebug)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRIOMDebugPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CRIOMDebugPage::CRIOMDebugPage()
{
}

void CRIOMDebugPage::OnUpdatePage()
{
    UpdateRIOMDEBUG();
    updateTrain(ID_PIBIDP_TRAIN);

    updateErrorLine(ID_PIBIDP_TRAIN);//3.5
    updateArrow(ID_PIBIDP_LEFTARROW,ID_PIBIDP_RIGHTARROW);
}

void CRIOMDebugPage::OnInitPage()
{

}

void CRIOMDebugPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("详细信息"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
     this->InitPageHeader();//3.17
}

void CRIOMDebugPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CRIOMDebugPage::OnComBtn2Clk()
{

}

void CRIOMDebugPage::OnComBtn3Clk()
{

}

void CRIOMDebugPage::OnComBtn4Clk()
{

}

void CRIOMDebugPage::OnComBtn5Clk()
{
    ChangePage(PAGE_INDEX_IOTCTABLE);
}

void CRIOMDebugPage::OnComBtn6Clk()
{

}

void CRIOMDebugPage::UpdateRIOMDEBUG()
{
    QString data_DIM1_1 = 0;
    QString data_DIM1_2 = 0;
    QString data_DIM1_3 = 0;
    QString data_DIM1_4 = 0;
    QString data_DIM1_5 = 0;
    QString data_DIM1_6 = 0;
    QString data_DIM1_7 = 0;
    QString data_DIM1_8 = 0;
    QString data_DIM2_1 = 0;
    QString data_DIM2_2 = 0;
    QString data_DIM2_3 = 0;
    QString data_DIM2_4 = 0;
    QString data_DIM2_5 = 0;
    QString data_DIM2_6 = 0;
    QString data_DIM2_7 = 0;
    QString data_DIM2_8 = 0;
    QString data_DIM3_1 = 0;
    QString data_DIM3_4 = 0;
    QString data_DIM4_1 = 0;
    QString data_DIM4_8 = 0;
    QString data_DOM1_1 = 0;
    QString data_DOM1_2 = 0;
    QString data_DOM1_3 = 0;
    QString data_DOM1_4 = 0;
    QString data_DOM1_5 = 0;
    QString data_DOM1_6 = 0;
    QString data_DOM1_7 = 0;
    QString data_DOM1_8 = 0;
    QString data_DOM2_1 = 0;
    QString data_DOM2_8 = 0;

    QString data_temp1 = 0;
    QString data_temp2 = 0;

    int data_lat1 = 0;
    int data_lat2 = 0;
    int data_lat3 = 0;
    int data_lat4 = 0;
    int data_lat5 = 0;
    int data_lat6 = 0;
    int data_lat7 = 0;
    int data_lat8 = 0;
    int data_rld1 = 0;
    int data_rld2 = 0;
    int data_rld3 = 0;
    int data_rld4 = 0;
    int data_rld5 = 0;
    int data_rld6 = 0;
    int data_rld7 = 0;
    int data_rld8 = 0;
    int data_hmi1_gw1 = 0;
    int data_hmi1_gw2 = 0;
    int data_hmi2_gw1 = 0;
    int data_hmi2_gw2 = 0;
    //data_temp1.sprintf("%04X",Change_BigEen(DI_110_1));
    //data_temp2.sprintf("%02X",DI_110_2/256);
    //data_temp1.sprintf("%04X",Change_BigEen(RIOM_111_11));//16到24
    data_temp1.sprintf("%04X",RIOM_111_11);//16到24
    data_temp2.sprintf("%02X",RIOM_111_12%256);//1到8
    data_DIM1_1=data_temp2+data_temp1;//模块的24个开关信号1到24
//    data_temp1.sprintf("%04X",Change_BigEen(DI_120_1));
//    data_temp2.sprintf("%02X",DI_120_2/256);
    data_temp1.sprintf("%04X",RIOM_121_11);
    data_temp2.sprintf("%02X",RIOM_121_12%256);
    data_DIM1_2=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_130_1));
//    data_temp2.sprintf("%02X",DI_130_2/256);
    data_temp1.sprintf("%04X",RIOM_131_11);
    data_temp2.sprintf("%02X",RIOM_131_12%256);
    data_DIM1_3=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_140_1));
//    data_temp2.sprintf("%02X",DI_140_2/256);
    data_temp1.sprintf("%04X",RIOM_141_11);
    data_temp2.sprintf("%02X",RIOM_141_12%256);
    data_DIM1_4=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_150_1));
//    data_temp2.sprintf("%02X",DI_150_2/256);
//    data_DIM1_5=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_160_1));
//    data_temp2.sprintf("%02X",DI_160_2/256);
//    data_DIM1_6=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_170_1));
//    data_temp2.sprintf("%02X",DI_170_2/256);
//    data_DIM1_7=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_180_1));
//    data_temp2.sprintf("%02X",DI_180_2/256);
//    data_DIM1_8=data_temp2+data_temp1;

    SetRIOMLabelString( ID_PIBIDP_DIM1_1,data_DIM1_1 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_2,data_DIM1_2 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_3,data_DIM1_3 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_4,data_DIM1_4 );
    //SetRIOMLabelString( ID_PIBIDP_DIM1_5,data_DIM1_5 );
    //SetRIOMLabelString( ID_PIBIDP_DIM1_6,data_DIM1_6 );
    //SetRIOMLabelString( ID_PIBIDP_DIM1_7,data_DIM1_7 );
    //SetRIOMLabelString( ID_PIBIDP_DIM1_8,data_DIM1_8 );

    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE1, RIOM_110_4%256);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE2, RIOM_120_4%256);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE3, RIOM_130_4%256);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE4, RIOM_140_4%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE5, DI_150_2%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE6, DI_160_2%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE7, DI_170_2%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE8, DI_180_2%256);


//    data_temp1.sprintf("%04X",Change_BigEen(DI_110_3));
//    data_temp2.sprintf("%02X",DI_110_4/256);
//    data_DIM2_1=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_120_3));
//    data_temp2.sprintf("%02X",DI_120_4/256);
//    data_DIM2_2=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_130_3));
//    data_temp2.sprintf("%02X",DI_130_4/256);
//    data_DIM2_3=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_140_3));
//    data_temp2.sprintf("%02X",DI_140_4/256);
//    data_DIM2_4=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_150_3));
//    data_temp2.sprintf("%02X",DI_150_4/256);
//    data_DIM2_5=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_160_3));
//    data_temp2.sprintf("%02X",DI_160_4/256);
//    data_DIM2_6=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_170_3));
//    data_temp2.sprintf("%02X",DI_170_4/256);
//    data_DIM2_7=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_180_3));
//    data_temp2.sprintf("%02X",DI_180_4/256);
//    data_DIM2_8=data_temp2+data_temp1;

    data_temp2.sprintf("%02X",RIOM_111_12/256);//17到24
    //data_temp1.sprintf("%04X",Change_BigEen(RIOM_111_13));//1到16
    data_temp1.sprintf("%04X",RIOM_111_13);//1到16
    data_DIM2_1=data_temp1+data_temp2;

    data_temp2.sprintf("%02X",RIOM_141_12/256);
    //data_temp1.sprintf("%04X",Change_BigEen(RIOM_141_13));
    data_temp1.sprintf("%04X",RIOM_141_13);
    data_DIM2_4=data_temp1+data_temp2;

    SetRIOMLabelString( ID_PIBIDP_DIM2_1,data_DIM2_1 );
    //SetRIOMLabelString( ID_PIBIDP_DIM2_2,data_DIM2_2 );
    //SetRIOMLabelString( ID_PIBIDP_DIM2_3,data_DIM2_3 );
    SetRIOMLabelString( ID_PIBIDP_DIM2_4,data_DIM2_4 );
    //SetRIOMLabelString( ID_PIBIDP_DIM2_5,data_DIM2_5 );
    //SetRIOMLabelString( ID_PIBIDP_DIM2_6,data_DIM2_6 );
    //SetRIOMLabelString( ID_PIBIDP_DIM2_7,data_DIM2_7 );
    //SetRIOMLabelString( ID_PIBIDP_DIM2_8,data_DIM2_8 );

    SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE1, RIOM_110_4/256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE2, DI_120_4%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE3, DI_130_4%256);
    SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE4, RIOM_140_4/256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE5, DI_150_4%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE6, DI_160_4%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE7, DI_170_4%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE8, DI_180_4%256);

    data_temp1.sprintf("%04X",RIOM_111_14);
    data_temp2.sprintf("%02X",RIOM_111_15%256);
    data_DIM3_1=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",RIOM_141_14);
    data_temp2.sprintf("%02X",RIOM_141_15%256);
    data_DIM3_4=data_temp2+data_temp1;
    SetRIOMLabelString( ID_PIBIDP_DIM3_1,data_DIM3_1 );
    SetRIOMLabelString( ID_PIBIDP_DIM3_4,data_DIM3_4);

    SetRIOMDataLabelString(ID_PIBIDP_DIM3_LIFE1, RIOM_110_5%256);
    SetRIOMDataLabelString(ID_PIBIDP_DIM3_LIFE4, RIOM_140_5%256);

//    data_temp1.sprintf("%04X",Change_BigEen(DI_110_7));
//    data_temp2.sprintf("%02X",DI_110_8/256);
//    data_DIM4_1=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_180_7));
//    data_temp2.sprintf("%02X",DI_180_8/256);
//    data_DIM4_8=data_temp2+data_temp1;
    //SetRIOMLabelString( ID_PIBIDP_DIM4_1,data_DIM4_1 );
    //SetRIOMLabelString( ID_PIBIDP_DIM4_8,data_DIM4_8);

    //SetRIOMDataLabelString(ID_PIBIDP_DIM4_LIFE1, DI_110_8%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DIM4_LIFE8, DI_180_8%256);



//    data_DOM1_1 = StrFromInt(DO_118_1, 16);
//    data_DOM1_2 = StrFromInt(DO_128_1, 16);
//    data_DOM1_3 = StrFromInt(DO_138_1, 16);
//    data_DOM1_4 = StrFromInt(DO_148_1, 16);
//    data_DOM1_5 = StrFromInt(DO_158_1, 16);
//    data_DOM1_6 = StrFromInt(DO_168_1, 16);
//    data_DOM1_7 = StrFromInt(DO_178_1, 16);
//    data_DOM1_8 = StrFromInt(DO_188_1, 16);

    data_temp1.sprintf("%04X",RIOM_118_10);
    data_temp2.sprintf("%02X",RIOM_118_11%256);
    data_DOM1_1=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",RIOM_128_10);
    data_temp2.sprintf("%02X",RIOM_128_11%256);
    data_DOM1_2=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",RIOM_138_10);
    data_temp2.sprintf("%02X",RIOM_138_11%256);
    data_DOM1_3=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",RIOM_148_10);
    data_temp2.sprintf("%02X",RIOM_148_11%256);
    data_DOM1_4=data_temp2+data_temp1;

    SetRIOMLabelString(ID_PIBIDP_DOM1_1, data_DOM1_1);
    SetRIOMLabelString(ID_PIBIDP_DOM1_2, data_DOM1_2);
    SetRIOMLabelString(ID_PIBIDP_DOM1_3, data_DOM1_3);
    SetRIOMLabelString(ID_PIBIDP_DOM1_4, data_DOM1_4);
    //SetRIOMLabelString(ID_PIBIDP_DOM1_5, data_DOM1_5);
    //SetRIOMLabelString(ID_PIBIDP_DOM1_6, data_DOM1_6);
    //SetRIOMLabelString(ID_PIBIDP_DOM1_7, data_DOM1_7);
    //SetRIOMLabelString(ID_PIBIDP_DOM1_8, data_DOM1_8);

    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE1, RIOM_110_8%256);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE2, RIOM_120_8%256);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE3, RIOM_130_8%256);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE4, RIOM_140_8%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE5, DI_150_9/256);
    //SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE6, DI_160_9/256);
    //SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE7, DI_170_9/256);
    //SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE8, DI_180_9/256);

//    data_DOM2_1 = StrFromInt(DO_118_2, 16);
//    data_DOM2_8 = StrFromInt(DO_188_2, 16);
    //SetRIOMLabelString(ID_PIBIDP_DOM2_1, data_DOM2_1);
    //SetRIOMLabelString(ID_PIBIDP_DOM2_8, data_DOM2_8);

    //SetRIOMDataLabelString(ID_PIBIDP_DOM2_LIFE1, DI_110_10%256);
    //SetRIOMDataLabelString(ID_PIBIDP_DOM2_LIFE8, DI_180_10%256);

    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM1_1, AX_114_1);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM2_1, AX_114_2);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM3_1, AX_114_3);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM4_1, AX_114_4);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM4_8, AX_184_4);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM3_8, AX_184_3);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM2_8, AX_184_2);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM1_8, AX_184_1);

    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_1, RIOM_110_1%256);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_2, RIOM_120_1%256);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_3, RIOM_130_1%256);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_4, RIOM_140_1%256);
    //SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_5, DI_150_9%256);
    //SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_6, DI_160_9%256);
    //SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_7, DI_170_9%256);
    //SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_8, DI_180_9%256);

    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI1_1, AX_114_5);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI2_1, DI_120_5);
//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI3_1, AX_114_7);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI4_1, DI_140_5);
//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI1_8, AX_184_8);
//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI2_8, AX_184_7);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI2_8, DI_170_5);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_AI1_8, AX_184_5);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_1, RIOM_110_10%256);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_2, DI_120_10/256);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_4, RIOM_140_10%256);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_7, DI_170_10/256);
    //SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_8, DI_180_10/256);

    data_lat1 = Bit(RIOM_110_16,8);
    data_lat2 = Bit(RIOM_120_16,8);
    data_lat3 = Bit(RIOM_130_16,8);
    data_lat4 = Bit(RIOM_140_16,8);
    data_lat5 = Bit(DI_150_15,16);
    data_lat6 = Bit(DI_160_15,16);
    data_lat7 = Bit(DI_170_15,16);
    data_lat8 = Bit(DI_180_15,16);
    SetRIOMDataLabelString(ID_PIBIDP_LAT1, data_lat1);
    SetRIOMDataLabelString(ID_PIBIDP_LAT2, data_lat2);
    SetRIOMDataLabelString(ID_PIBIDP_LAT3, data_lat3);
    SetRIOMDataLabelString(ID_PIBIDP_LAT4, data_lat4);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT5, data_lat5);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT6, data_lat6);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT7, data_lat7);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT8, data_lat8);

    data_rld1 = Bit(RIOM_110_16,7);
    data_rld2 = Bit(RIOM_120_16,7);
    data_rld3 = Bit(RIOM_130_16,7);
    data_rld4 = Bit(RIOM_140_16,7);
    data_rld5 = Bit(DI_150_15,15);
    data_rld6 = Bit(DI_160_15,15);
    data_rld7 = Bit(DI_170_15,15);
    data_rld8 = Bit(DI_180_15,15);
    SetRIOMDataLabelString(ID_PIBIDP_RLD1, data_rld1);
    SetRIOMDataLabelString(ID_PIBIDP_RLD2, data_rld2);
    SetRIOMDataLabelString(ID_PIBIDP_RLD3, data_rld3);
    SetRIOMDataLabelString(ID_PIBIDP_RLD4, data_rld4);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD5, data_rld5);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD6, data_rld6);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD7, data_rld7);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD8, data_rld8);

        if(Bit(RIOM_110_16,7)==0)
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(RIOM_120_16,7)==0)
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD2))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD2))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(RIOM_130_16,7)==0)
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(RIOM_140_16,7)==0)
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(DI_150_15,15)==0)
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(DI_160_15,15)==0)
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(DI_170_15,15)==0)
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD7))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD7))->SetCtrlBKColor(Qt::red);
        }

        if(Bit(DI_180_15,15)==0)
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlBKColor(Qt::red);
        }

//    data_hmi1_gw1 = Bit(refresh_time80,4);
//    data_hmi1_gw2 = Bit(refresh_time80,3);
//    SetRIOMDataLabelString(ID_PIBIDP_HMI1_GW1, data_hmi1_gw1);
//    SetRIOMDataLabelString(ID_PIBIDP_HMI1_GW2, data_hmi1_gw2);

//    data_hmi2_gw1 = Bit(refresh_time80,2);
//    data_hmi2_gw2 = Bit(refresh_time80,1);
//    SetRIOMDataLabelString(ID_PIBIDP_HMI2_GW1, data_hmi2_gw1);
//    SetRIOMDataLabelString(ID_PIBIDP_HMI2_GW2, data_hmi2_gw2);

    return;
}

void CRIOMDebugPage::SetRIOMDataLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}

void CRIOMDebugPage::SetRIOMLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
