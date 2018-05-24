#include "CCommStatusPage.h"

ROMDATA g_PicRom_CommStatus[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    //D_COMMON_PAGE_HEADER(QSTR("网络"))


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("网络") )
    //{QSTR("网络"),      D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCOMMINTERRUPT             },bylmh
    //{"FaultRed.PNG",      D_DEFAULT_FONT,      QRect(962, 34,  10 ,  10),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCS_ICON_WARNNING           },
    //{"",                  D_FONT_BOLD(5),      QRect(100, 64, 600,  85),           Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,           ID_PIBCS_TRAIN                   },
    {"",                       D_FONT_BOLD(10),      QRect(100,64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBCS_TRAIN                      },
    {"RIGHT",             D_FONT_BOLD(6),      QRect(702, 107,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCS_ARROW_RIGHT             },
    {"LEFT",              D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCS_ARROW_LEFT              },
#endif
    // main MVB net
    {"",                  D_FONT_BOLD(6),      QRect( 70, 150, 660,   8),           Qt::blue,                 Qt::white,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 150, 660,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 158, 660,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //  vertical MVB net
    {"",                  D_FONT_BOLD(6),      QRect(130, 158,   7, 330),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(130, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(136, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(270, 158,   7, 330),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(270, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(276, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(420, 158,   7, 330),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(420, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(426, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(570, 158,   7, 330),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(570, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(576, 158,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
      // door frame
    {"",                  D_FONT_BOLD(6),      QRect( 174-70, 530-42,  121+1,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 174-70, 530-42,  1,   60+1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 174-70, 590-42,  122,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(295-70, 530-42,   1,  60+1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect( 354-110, 530-42,  122,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 354-110, 530-42,  1,   61),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 354-110, 590-42,  122,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(475-110, 530-42,   1,  61),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect( 544-140, 530-42,  122,   1),            Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 544-140, 530-42,  1,   61),            Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 544-140, 590-42,  122,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 665-140, 530-42,   1,  61),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect( 724-170, 530-42,  122,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 724-170, 530-42,  1,   61),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 724-170, 590-42,  122,  1),            Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(845-170, 530-42,   1,  61),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {QSTR("CCU1"),        D_FONT_BOLD(8),      QRect( 10, 140,  60,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CCU1              },
    {QSTR("CCU2"),        D_FONT_BOLD(8),      QRect(730, 140,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CCU2              },
// tcp/ip
    /*{"",                  D_FONT_BOLD(6),      QRect(51, 150,   6, 28),           Qt::black,                 Qt::cyan,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI1_UPD         },
    {"",                  D_FONT_BOLD(6),      QRect(50, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(57, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(705, 150,   6, 28),           Qt::black,                 Qt::cyan,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI2_UPD         },
    {"",                  D_FONT_BOLD(6),      QRect(704, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(711, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },*/

//    {QSTR("0"),           D_FONT_BOLD(5),      QRect(67, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR9         },
//    {QSTR("0"),           D_FONT_BOLD(5),      QRect(67, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR10         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(176-70+2, 532-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR1         },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(236-70, 532-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR3         },
    //{QSTR("3"),           D_FONT_BOLD(5),      QRect(166, 532-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR5         },
    //{QSTR("4"),           D_FONT_BOLD(5),      QRect(166, 561-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR7         },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(176-70+2, 561-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR2         },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(236-70, 561-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR4         },
    //{QSTR("7"),           D_FONT_BOLD(5),      QRect(266-70, 532-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR6         },
    //{QSTR("8"),           D_FONT_BOLD(5),      QRect(266-70, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR8         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(248, 532-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR1         },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(287, 532-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR3         },
    {QSTR("5"),           D_FONT_BOLD(6),      QRect(326, 532-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR5         },
    //{QSTR("4"),           D_FONT_BOLD(5),      QRect(386-110, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR7         },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(248, 561-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR2         },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(287, 561-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR4         },
    {QSTR("6"),           D_FONT_BOLD(6),      QRect(326, 561-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR6         },
    //{QSTR("8"),           D_FONT_BOLD(5),      QRect(446-110, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR8         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(485, 561-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR1         },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(446, 561-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR3         },
    {QSTR("5"),           D_FONT_BOLD(6),      QRect(407, 561-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR5         },
    //{QSTR("5"),           D_FONT_BOLD(5),      QRect(576-140, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR7         },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(485, 532-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR2         },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(446, 532-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR4         },
    {QSTR("6"),           D_FONT_BOLD(6),      QRect(407, 532-42,  37,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR6         },
    //{QSTR("1"),           D_FONT_BOLD(5),      QRect(636-140, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR8         },

    {QSTR("1"),           D_FONT_BOLD(6),      QRect(616, 561-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR1         },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(558, 561-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR3         },
    //{QSTR("6"),           D_FONT_BOLD(5),      QRect(756-170, 532-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR5         },
    //{QSTR("5"),           D_FONT_BOLD(5),      QRect(756-170, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR7         },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(616, 532-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR2         },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(558, 532-42,  55,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR4         },
    //{QSTR("2"),           D_FONT_BOLD(5),      QRect(816-170, 532-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR6         },
    //{QSTR("1"),           D_FONT_BOLD(5),      QRect(816-170, 561-42,  28,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR8         },
    /*lmh
//    {QSTR("17"),           D_FONT_BOLD(5),      QRect(384, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR1         },
//    {QSTR("18"),           D_FONT_BOLD(5),      QRect(401, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR3         },
//    {QSTR("19"),           D_FONT_BOLD(5),      QRect(418, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR5         },
//    {QSTR("20"),           D_FONT_BOLD(5),      QRect(435, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR7         },
//    {QSTR("17"),           D_FONT_BOLD(5),      QRect(384, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR2         },
//    {QSTR("18"),           D_FONT_BOLD(5),      QRect(401, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR4         },
//    {QSTR("19"),           D_FONT_BOLD(5),      QRect(418, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR6         },
//    {QSTR("20"),           D_FONT_BOLD(5),      QRect(435, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR8         },
//    {QSTR("21"),           D_FONT_BOLD(5),      QRect(459, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR1         },
//    {QSTR("22"),           D_FONT_BOLD(5),      QRect(476, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR3         },
//    {QSTR("23"),           D_FONT_BOLD(5),      QRect(493, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR5         },
//    {QSTR("24"),           D_FONT_BOLD(5),      QRect(510, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR7         },
//    {QSTR("21"),           D_FONT_BOLD(5),      QRect(459, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR2         },
//    {QSTR("22"),           D_FONT_BOLD(5),      QRect(476, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR4         },
//    {QSTR("23"),           D_FONT_BOLD(5),      QRect(493, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR6         },
//    {QSTR("24"),           D_FONT_BOLD(5),      QRect(510, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR8         },
//    {QSTR("25"),           D_FONT_BOLD(5),      QRect(534, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR1         },
//    {QSTR("26"),           D_FONT_BOLD(5),      QRect(551, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR3         },
//    {QSTR("27"),           D_FONT_BOLD(5),      QRect(568, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR5         },
//    {QSTR("28"),           D_FONT_BOLD(5),      QRect(585, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR7         },
//    {QSTR("25"),           D_FONT_BOLD(5),      QRect(534, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR2         },
//    {QSTR("26"),           D_FONT_BOLD(5),      QRect(551, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR4         },
//    {QSTR("27"),           D_FONT_BOLD(5),      QRect(568, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR6         },
//    {QSTR("28"),           D_FONT_BOLD(5),      QRect(585, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR8         },
//    {QSTR("29"),           D_FONT_BOLD(5),      QRect(609, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR1         },
//    {QSTR("30"),           D_FONT_BOLD(5),      QRect(626, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR3         },
//    {QSTR("31"),           D_FONT_BOLD(5),      QRect(643, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR5         },
//    {QSTR("32"),           D_FONT_BOLD(5),      QRect(660, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR7         },
//    {QSTR("29"),           D_FONT_BOLD(5),      QRect(609, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR2         },
//    {QSTR("30"),           D_FONT_BOLD(5),      QRect(626, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR4         },
//    {QSTR("31"),           D_FONT_BOLD(5),      QRect(643, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR6         },
//    {QSTR("32"),           D_FONT_BOLD(5),      QRect(660, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR8         },
//    {QSTR("0"),           D_FONT_BOLD(5),      QRect(677, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR10         },
//    {QSTR("0"),           D_FONT_BOLD(5),      QRect(677, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR9         },
    lmh*/



    /*{QSTR("GW1"),         D_FONT_BOLD(6),      QRect(67, 510,   41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(110, 510,  41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(159, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(193, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(234, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(268, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(309, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(343, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(384, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(418, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(459, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(493, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(534, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(568, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(609, 510,  41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(652, 510,  41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_GW2          },lmh*/
    // MVB horizontal NET

    {"",                  D_FONT_BOLD(6),      QRect(206-70, 220-22-10,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(207-70, 220-22-10,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(207-70, 225-22-10,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(206-70, 230,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(207-70, 230,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(207-70, 235,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        //add lmh
{"",                  D_FONT_BOLD(6),      QRect(206-70, 340-22-25-5,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 340-22-25-5,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 345-22-25-5,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//PDS
{"",                  D_FONT_BOLD(6),      QRect(101, 340-52+20,  31,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(101, 340-52+20,  30,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(101, 345-52+20,  30,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206-70, 380-22-30,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 380-22-30,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 385-22-30,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206-70, 420-22-35,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 420-22-35,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 425-22-35,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206-70, 460-22-40,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 460-22-40,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 465-22-40,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206-70, 500-22-45,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 500-22-45,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 505-22-45,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206-70, 540-22-50,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 540-22-50,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207-70, 545-22-50,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },




    {QSTR("RIOM"),        D_FONT_BOLD(8),      QRect(217-70, 209-22-10,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_RIOM         },
    {QSTR("ACU"),         D_FONT_BOLD(8),      QRect(217-70, 219,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_ACU          },
    //LMH{QSTR("ATC"),       D_FONT_BOLD(6),      QRect(217-70, 289-22-20,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_ATC10             },
    {QSTR("BCU"),         D_FONT_BOLD(8),      QRect(217-70, 329-22-25-5,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_BCU          },
    {QSTR("PDS"),       D_FONT_BOLD(8),      QRect(46, 284+13,  55,  26),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBCS_LABEL_PDS1             },
    {QSTR("FAU"),       D_FONT_BOLD(8),      QRect(217-70, 369-22-30,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_FAS1             },
    {QSTR("HVAC"),        D_FONT_BOLD(8),      QRect(217-70, 409-22-35,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_HVAC         },
    {QSTR("PIS"),         D_FONT_BOLD(8),      QRect(217-70, 449-22-40,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_PIS          },
    {QSTR("EDCU1"),         D_FONT_BOLD(8),      QRect(217-70, 489-22-45,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_EDCU1          },
    {QSTR("EDCU2"),         D_FONT_BOLD(8),      QRect(217-70, 529-22-50,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_EDCU2          },
   //RIOM 1-8  lmh

//CAR2
{"",                  D_FONT_BOLD(6),      QRect(387-110-1, 220-32,  10+1,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 220-32,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 225-32,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(386-110, 280-37,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 280-37,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 285-37,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(386-110, 340-47,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 340-47,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 345-47,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(386-110, 420-57,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 420-57,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 425-57,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(386-110, 500-67,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 500-67,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 505-67,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(386-110, 540-72,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 540-72,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(387-110, 545-72,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },




    {QSTR("RIOM"),        D_FONT_BOLD(8),      QRect(217+180-110, 209-32,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_RIOM         },
    {QSTR("TCU"),         D_FONT_BOLD(8),      QRect(217+180-110, 269-37,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_TCU          },
    {QSTR("BCU"),         D_FONT_BOLD(8),      QRect(217+180-110, 329-47,  55,  26),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_BCU          },
{QSTR("HVAC"),        D_FONT_BOLD(8),      QRect(217+180-110, 409-57,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_HVAC         },
{QSTR("EDCU3"),         D_FONT_BOLD(8),      QRect(217+180-110, 489-67,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_EDCU3          },
{QSTR("EDCU4"),         D_FONT_BOLD(8),      QRect(217+180-110, 529-72,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_EDCU4          },
//car3
{"",                  D_FONT_BOLD(6),      QRect(566-140, 220-32,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 220-32,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 225-32,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(566-140, 280-37,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 280-37,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 285-37,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(566-140, 340-47,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 340-47,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 345-47,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


{"",                  D_FONT_BOLD(6),      QRect(566-140, 420-57,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 420-57,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 425-57,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(566-140, 500-67,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 500-67,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 505-67,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(566-140, 540-72,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 540-72,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(567-140, 545-72,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{QSTR("RIOM"),        D_FONT_BOLD(8),      QRect(577-140, 209-32,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_RIOM         },
 {QSTR("TCU"),         D_FONT_BOLD(8),      QRect(577-140, 269-37,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_TCU          },
{QSTR("BCU"),         D_FONT_BOLD(8),      QRect(577-140, 329-47,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_BCU          },
{QSTR("HVAC"),        D_FONT_BOLD(8),      QRect(577-140, 409-57,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_HVAC         },
{QSTR("EDCU5"),         D_FONT_BOLD(8),      QRect(577-140, 489-67,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_EDCU5          },
{QSTR("EDCU6"),         D_FONT_BOLD(8),      QRect(577-140, 529-72,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_EDCU6          },
//car4
{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 220-32,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 220-32,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 225-32,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 230,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 230,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 235,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 300-42,  10,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 300-42,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 305-42,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//add lmh
{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 340-47-5,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 340-47-5,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 345-47-5,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 340-52+20,  91,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 340-52+20,  90,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 345-52+20,  90,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 380-52,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 380-52,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 385-52,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 420-57,  11,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 420-57,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 425-57,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 460-62,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 460-62,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 465-62,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 500-67,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 500-67,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 505-67,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(206+540-170, 540-72,  11,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 540-72,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(207+540-170, 545-72,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{QSTR("RIOM"),        D_FONT_BOLD(8),      QRect(757-170, 209-32,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_RIOM         },
{QSTR("ACU"),         D_FONT_BOLD(8),      QRect(757-170, 219,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_ACU          },
//LMH{QSTR("ATC"),       D_FONT_BOLD(6),      QRect(757-170, 289-42,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_ATC10             },
{QSTR("BCU"),         D_FONT_BOLD(8),      QRect(757-170, 329-47-5,  55,  26),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_BCU          },
{QSTR("PDS"),         D_FONT_BOLD(8),      QRect(666, 297,  55,  26),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBCS_LABEL_PDS2          },
{QSTR("FAU"),       D_FONT_BOLD(8),      QRect(757-170, 369-52,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_FAS2             },
{QSTR("HVAC"),        D_FONT_BOLD(8),      QRect(757-170, 409-57,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_HVAC         },
{QSTR("PIS"),         D_FONT_BOLD(8),      QRect(757-170, 449-62,  55,  26),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_PIS          },
{QSTR("EDCU7"),         D_FONT_BOLD(8),      QRect(757-170, 489-67,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_EDCU7          },
{QSTR("EDCU8"),         D_FONT_BOLD(8),      QRect(757-170, 529-72,  55,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_EDCU8          },


{"",                  D_FONT_BOLD(6),      QRect(161-70, 240-22-10,  40,   5),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(161-70, 240-22-10,  40,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(161-70, 245-22-10,  40,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{QSTR("ERM"),       D_FONT_BOLD(8),         QRect(99-70+2, 228-22-10,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_DCCU1             },


{"",                  D_FONT_BOLD(6),      QRect(171-70, 320-22-20-15,  30,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(171-70, 320-22-20-15,  30,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(171-70, 325-22-20-15,  30,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

{"",                  D_FONT_BOLD(6),      QRect(132-70, 306-22-20-15,  40,   1),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(132-70, 340-22-20-15,  40,   1),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(132-70, 306-22-20-15,  1,   35),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(171-70, 306-22-20-15,  1,   35),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },

{QSTR("HMI"),         D_FONT_BOLD(8),      QRect(134-70+1, 308-22-20-15,  35,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_HMI          },

{"",                  D_FONT_BOLD(6),      QRect(746-170, 320-42-15,  91,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(747-170, 320-42-15,  90,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(747-170, 325-42-15,  90,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(837-170, 306-42-15,  40,   1),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(837-170, 340-42-15,  40,   1),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(837-170, 306-42-15,  1,   35),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },
{"",                  D_FONT_BOLD(6),      QRect(876-170, 306-42-15,  1,   35),           Qt::white,                Qt::white,                CONTROL_LINE,            ID_IGNORE         },


{QSTR("HMI"),         D_FONT_BOLD(8),      QRect(839-170, 308-42-15,  35,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_HMI          },//lmh

};

int g_CommStatusRomLen = sizeof(g_PicRom_CommStatus)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCommStatusPage,CPage)
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

        ON_BTNCLK(ID_PIBCS_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)

END_MESSAGE_MAP()

CCommStatusPage::CCommStatusPage()
{
}

void CCommStatusPage::OnUpdatePage()
{
    UpdateCCU();
    UpdateUDP();
    UpdateRIOM();
    UpdateACU();
    UpdateTCU();
    UpdateFAS();
    UpdateHMI();
    UpdateBCU();
    UpdateHVAC();
    UpdatePIS();
    UpdateEDCU();
    UpdateDOOR();
    UpdateGW();
    //UpdateRLD();
    //UpdateCommInterrupt(ID_PIBCOMMINTERRUPT);
    updateTrain(ID_PIBCS_TRAIN);
    updateArrow(ID_PIBCS_ARROW_LEFT,ID_PIBCS_ARROW_RIGHT);
    //updateFault(ID_PIBCS_ICON_WARNNING);
    updateErrorLine(ID_PIBCS_TRAIN);//3.5
    UpdatePDS();


}

void CCommStatusPage::OnInitPage()
{


}

void CCommStatusPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("调试页面"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
#else
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
           // ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("调试页面"));
            ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("帮   助"));
#endif
this->InitPageHeader();

}

void CCommStatusPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAIN);
}

void CCommStatusPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CCommStatusPage::OnComBtn3Clk()
{

}

void CCommStatusPage::OnComBtn4Clk()
{
}

void CCommStatusPage::OnComBtn5Clk()
{
}

void CCommStatusPage::OnComBtn6Clk()
{

#ifdef PAGE_BUTTON_BAR_NEW

#else
       ChangePage(PAGE_INDEX_COMMSTATUSHELP);
#endif
}

#ifdef PAGE_BUTTON_BAR_NEW
void CCommStatusPage::OnComBtn7Clk()
{

}

void CCommStatusPage::OnComBtn8Clk()
{

       ChangePage(PAGE_INDEX_COMMSTATUSHELP);
}

#endif


void CCommStatusPage::UpdateCCU()
{
    //CTHM_CCU1On_B1	CCU1在线 openpcs根据Vxworks传来的CTHM_MPU1Status_U8判断是否在线
    //if (Bit(CCU_HMI_222_9, 8 ) == 1)
  if(Bit(hmi_485_error,5)==0)
  {
      if (Bit(CCU_HMI_308_5, 8 ) == 1)
      {
        //CTHM_MPU1Dev_U8  mpu1设备为主  1=mpu1为主
        //if (CCU_HMI_221_15/256 == 1)//LMH
        if (Bit(CCU_HMI_308_9,2 )== 1)//LMH
        {
            ccu1_color = 1;
        }
        else
        {
            ccu1_color = 2;
        }
    }
    else
    {
        ccu1_color = 0;//通信异常
    }

    //if (Bit(CCU_HMI_222_9, 7 ) == 1)
    if (Bit(CCU_HMI_308_5, 7 ) == 1)//LMH
    {
        //if (CCU_HMI_221_16%256 == 1)
        if (Bit(CCU_HMI_308_9,1 )== 1)//LMH
        {
            ccu2_color = 1;
        }
        else
        {
            ccu2_color = 2;
        }
    }
    else
    {
        ccu2_color = 0;
    }
 }
else
 {
  ccu1_color = 0;
  ccu2_color = 0;
 }


    //if (Bit(CCU_HMI_222_16, 2 ) == 1)   //CTHM_ERM1On_B1  ERM1在线
    if (Bit(CCU_HMI_308_5, 6 ) == 1)   //CTHM_ERM1On_B1  ERM1在线
    {
        dccu1_color = 1;
    }
    else
    {
        dccu1_color = 0;
    }
    //if (Bit(CCU_HMI_222_16, 1 ) == 1)
    //{
    //    dccu2_color = 1;
    //}
    //else
    //{
    //    dccu2_color = 0;
    //}

    SetCcuLabelColor(ID_PIBCS_LABEL_CCU1, ccu1_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_CCU2, ccu2_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_DCCU1, dccu1_color);
    //SetCcuLabelColor(ID_PIBCS_LABEL_DCCU2, dccu2_color);LMH
}

void CCommStatusPage::UpdateRIOM()
{

     //if (((Bit(CCU_HMI_222_11, 9 )) &&(Bit(CCU_HMI_222_11, 10 ))&&(Bit(CCU_HMI_222_11, 11 ))&&(Bit(CCU_HMI_222_11, 12 ))&&(Bit(CCU_HMI_222_11, 13 ))
     //&&(Bit(CCU_HMI_222_11, 14 ))&&(Bit(CCU_HMI_222_11, 15 ))&&(Bit(CCU_HMI_222_11, 16 ))) == 1)
    if (((Bit(CCU_HMI_308_5, 16 )) &&(Bit(CCU_HMI_308_6, 8 ))&&(Bit(CCU_HMI_308_6, 7 ))&&(Bit(CCU_HMI_308_6, 6 ))&&(Bit(CCU_HMI_308_6, 5 ))
         &&(Bit(CCU_HMI_308_6, 4 ))) == 1)
    {
        io1_color = 1;
    }
    else
    {
        io1_color = 0;
    }

    //if (((Bit(CCU_HMI_222_12, 8 )) &&(Bit(CCU_HMI_222_12, 7 ))&&(Bit(CCU_HMI_222_12, 6 ))
    //&&(Bit(CCU_HMI_222_12, 3 ))&&(Bit(CCU_HMI_222_12, 1 ))) == 1)
    if (((Bit(CCU_HMI_308_5, 15 )) &&(Bit(CCU_HMI_308_6, 16 ))&&(Bit(CCU_HMI_308_6, 15 ))) == 1)

    {
        io2_color = 1;
    }
    else
    {
        io2_color = 0;
    }

    //if (((Bit(CCU_HMI_222_12, 16 )) &&(Bit(CCU_HMI_222_12, 15 ))&&(Bit(CCU_HMI_222_12, 14 ))
    //&&(Bit(CCU_HMI_222_12, 11 ))) == 1)
    if (((Bit(CCU_HMI_308_5, 14 )) &&(Bit(CCU_HMI_308_6, 12 ))&&(Bit(CCU_HMI_308_6, 11 ))) == 1)
    {
        io3_color = 1;
    }
    else
    {
        io3_color = 0;
    }

    //if (((Bit(CCU_HMI_222_13, 8 )) &&(Bit(CCU_HMI_222_13, 7 ))&&(Bit(CCU_HMI_222_13, 6 ))
    //&&(Bit(CCU_HMI_222_13, 3 ))&&(Bit(CCU_HMI_222_13, 1 ))) == 1)

    if (((Bit(CCU_HMI_308_5, 13 )) &&(Bit(CCU_HMI_308_7, 8 ))&&(Bit(CCU_HMI_308_7, 7 ))
    &&(Bit(CCU_HMI_308_7, 6 ))&&(Bit(CCU_HMI_308_7, 5 ))&&(Bit(CCU_HMI_308_7, 4 ))) == 1)
    {
        io4_color = 1;
    }
    else
    {
        io4_color = 0;
    }

//    if (((Bit(CCU_HMI_222_13, 16 )) &&(Bit(CCU_HMI_222_13, 15 ))&&(Bit(CCU_HMI_222_13, 14 ))
//    &&(Bit(CCU_HMI_222_13, 11 ))) == 1)
//    {
//        io5_color = 1;
//    }
//    else
//    {
//        io5_color = 0;
//    }

//    if (((Bit(CCU_HMI_222_14, 8 )) &&(Bit(CCU_HMI_222_14, 7 ))&&(Bit(CCU_HMI_222_14, 6 ))
//    &&(Bit(CCU_HMI_222_14, 3 ))) == 1)
//    {
//        io6_color = 1;
//    }
//    else
//    {
//        io6_color = 0;
//    }

//    if (((Bit(CCU_HMI_222_14, 16 )) &&(Bit(CCU_HMI_222_14, 15 ))&&(Bit(CCU_HMI_222_14, 14 ))
//    &&(Bit(CCU_HMI_222_14, 11 ))&&(Bit(CCU_HMI_222_14, 9 ))) == 1)
//    {
//        io7_color = 1;
//    }
//    else
//    {
//        io7_color = 0;
//    }

//    if (((Bit(CCU_HMI_222_15, 8 )) &&(Bit(CCU_HMI_222_15, 7 ))&&(Bit(CCU_HMI_222_15, 6 ))&&(Bit(CCU_HMI_222_15, 5 ))&&(Bit(CCU_HMI_222_15, 4 ))
//    &&(Bit(CCU_HMI_222_15, 3))&&(Bit(CCU_HMI_222_15, 2 ))&&(Bit(CCU_HMI_222_15, 1 ))) == 1)
//    {
//        io8_color = 1;
//    }
//    else
//    {
//        io8_color = 0;
//    }

    SetRiomLabelColor(ID_PIBCS_LABEL_CAR1_RIOM, io1_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR2_RIOM, io2_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR3_RIOM, io3_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR4_RIOM, io4_color);
    //SetRiomLabelColor(ID_PIBCS_LABEL_CAR5_RIOM, io5_color);
    //SetRiomLabelColor(ID_PIBCS_LABEL_CAR6_RIOM, io6_color);
    //SetRiomLabelColor(ID_PIBCS_LABEL_CAR7_RIOM, io7_color);
    //SetRiomLabelColor(ID_PIBCS_LABEL_CAR8_RIOM, io8_color);

    return;
}

void CCommStatusPage::UpdatePDS()
{

    //if (Bit(CCU_HMI_222_9, 6 ) == 1)
    if (Bit(CCU_HMI_308_9, 8 ) == 1)
    {
        pds1_color=1;
    }
    else
    {
        pds1_color = 0;
    }
    //if (Bit(CCU_HMI_222_9, 5 ) == 1)
    if (Bit(CCU_HMI_308_9, 7 ) == 1)
    {
        pds2_color = 1;
    }
    else
    {
        pds2_color = 0;
    }

    SetPdsLabelColor(ID_PIBCS_LABEL_PDS1, pds1_color);
    SetPdsLabelColor(ID_PIBCS_LABEL_PDS2, pds2_color);

}

void CCommStatusPage::UpdateACU()
{

    //if (Bit(CCU_HMI_222_9, 6 ) == 1)
    if (Bit(CCU_HMI_308_7, 10 ) == 1)
    {
        acu1_color=1;
    }
    else
    {
        acu1_color = 0;
    }
    //if (Bit(CCU_HMI_222_9, 5 ) == 1)
    if (Bit(CCU_HMI_308_7, 9 ) == 1)
    {
        acu2_color = 1;
    }
    else
    {
        acu2_color = 0;
    }

    SetAcuLabelColor(ID_PIBCS_LABEL_CAR1_ACU, acu1_color);
    SetAcuLabelColor(ID_PIBCS_LABEL_CAR4_ACU, acu2_color);

}

void CCommStatusPage::UpdateTCU()
{

    //if (Bit(CCU_HMI_222_9, 2 ) == 1)
    if (Bit(CCU_HMI_308_7, 12 ) == 1)
    {
        tcu1_color = 1;
    }
    else
    {
        tcu1_color = 0;
    }
    if (Bit(CCU_HMI_308_7, 11 ) == 1)
    {
        tcu2_color = 1;
    }
    else
    {
        tcu2_color = 0;
    }
    //if (Bit(CCU_HMI_222_9, 16 ) == 1)
//    if (Bit(CCU_HMI_308_7, 11 ) == 1)
//    {
//        tcu3_color = 1;
//    }
//    else
//    {
//        tcu3_color = 0;
//    }
//    if (Bit(CCU_HMI_222_9, 15 ) == 1)
//    {
//        tcu4_color = 1;
//    }
//    else
//    {
//        tcu4_color = 0;
//    }
//    if (Bit(CCU_HMI_222_9, 14 ) == 1)
//    {
//        tcu5_color = 1;
//    }
//    else
//    {
//        tcu5_color = 0;
//    }
//    if (Bit(CCU_HMI_222_9, 13 ) == 1)
//    {
//        tcu6_color = 1;
//    }
//    else
//    {
//        tcu6_color = 0;
//    }

    SetTcuLabelColor(ID_PIBCS_LABEL_CAR2_TCU, tcu1_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR3_TCU, tcu2_color);
    //SetTcuLabelColor(ID_PIBCS_LABEL_CAR4_TCU, tcu3_color);
    //SetTcuLabelColor(ID_PIBCS_LABEL_CAR5_TCU, tcu4_color);
    //SetTcuLabelColor(ID_PIBCS_LABEL_CAR6_TCU, tcu5_color);
    //SetTcuLabelColor(ID_PIBCS_LABEL_CAR7_TCU, tcu6_color);


}

void CCommStatusPage::UpdateFAS()//FAS
{

//    if (Bit(CCU_HMI_222_9, 4 ) == 1)
//    {
//            atc1_color = 1;
//    }
//    else
//    {
//        atc1_color = 0;
//    }


    //  CTHM_FAS1On_B1	FAS1在线
    //if (Bit(CCU_HMI_222_16,4) == 1)
    if (Bit(CCU_HMI_308_8,10) == 1)
    {
        //FAiCT _ControlUnitSymbol_U8	控制器主、备机标志
        //if (FAS_B10_16%256 == 0)//?
        if (Bit(CCU_HMI_308_9,4) == 1)
        {
            atc3_color = 1;//绿色
        }
       else
        {
           atc3_color = 2;//黄色
        }
    }
    else
    {
        atc3_color = 0;//白色
    }
    //  CTHM_FAS2On_B1	FAS2在线
    if (Bit(CCU_HMI_308_8,9) == 1)
    {
        //FAiCT _ControlUnitSymbol_U8	控制器主、备机标志
        //if (FAS_B20_16%256 == 0)
        if (Bit(CCU_HMI_308_9,3) == 1)
        {
            atc4_color = 1;
        }
       else
        {
           atc4_color = 2;
        }
    }
    else
    {
        atc4_color = 0;
    }
    //SetAtcLabelColor(ID_PIBCS_LABEL_ATC10, atc1_color);
//    SetAtcLabelColor(ID_PIBCS_LABEL_ATC11, atc2_color);
    SetAtcLabelColor(ID_PIBCS_LABEL_FAS1, atc3_color);
    SetAtcLabelColor(ID_PIBCS_LABEL_FAS2, atc4_color);
}

void CCommStatusPage::UpdateHMI()
{
    //显示屏MVB通信正常则首先信任CCU发送的HMI状态标志，如果状态异常则再判断显示屏所处位置
    // 对于本侧显示屏通过 CCU发送的 MVB和UDP生命信号判断（两个生命信号都停止则显示白色）
    // 对于对侧显示屏通过 对侧显示屏发送的 UDP包生命信号判断

     // CTHM_HMI1On_B1	HMI1在线
    //if (Bit(CCU_HMI_222_16,6))
    if (Bit(CCU_HMI_308_5,5))
    {
        //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
        //if (Bit(DI_110_1,9)  == 1)
        if (Bit(CCU_HMI_308_9,16)  == 1)
        {
            hmi1_color = 1;
        }
        else
        {
            hmi1_color = 2;
        }
    }
    else
    {
        hmi1_color = 0;
    }
//        if(TC2_HMI==1)
//        {
//            // 对于对侧显示屏通过 对侧显示屏发送的 UDP包生命信号判断
//            if((Bit(hmi_485_error,7)==1))
//            {
//                if (Bit(DI_110_1,9)  == 1)
//                {
//                    hmi1_color = 1;
//                }
//                else
//                {
//                    hmi1_color = 2;
//                }
//            }
//            else
//            {
//                hmi1_color = 0;
//            }
//        }
//        else
//        {
//            // 对于本侧显示屏通过 CCU发送的 MVB和UDP生命信号判断（两个生命信号都停止则显示白色）
//            if(TC1_HMI==1)
//            {
//                if(g_485_comm_err_flg1&&g_udp_comm_err_flg1==1)
//                {
//                     hmi2_color = 0;
//                }
//                else
//                {
//                    if (Bit(DI_110_1,9)  == 1)
//                    {
//                        hmi2_color = 1;
//                    }
//                    else
//                    {
//                        hmi2_color = 2;
//                    }
//                }
//            }
//            else
//            {
//                hmi1_color = 0;





    if (Bit(CCU_HMI_308_5,4))
    {
        //if (Bit(DI_180_1,9) == 1)
        if (Bit(CCU_HMI_308_9,15)  == 1)
        {
            hmi2_color = 1;
        }
        else
        {
            hmi2_color = 2;
        }
    }
    else
    {
        hmi2_color = 0;
//        if(TC1_HMI==1)
//        {
//            if((Bit(hmi_485_error,7)==1))
//            {
//                if (Bit(DI_180_1,9)  == 1)
//                {
//                    hmi2_color = 1;
//                }
//                else
//                {
//                    hmi2_color = 2;
//                }
//            }
//            else
//            {
//                hmi2_color = 0;
//            }
//        }
//        else
//        {
//            if(TC2_HMI==1)
//            {
//                if(g_485_comm_err_flg2&&g_udp_comm_err_flg2==1)
//                {
//                     hmi2_color = 0;
//                }
//                else
//                {
//                    if (Bit(DI_180_1,9)  == 1)
//                    {
//                        hmi2_color = 1;
//                    }
//                    else
//                    {
//                        hmi2_color = 2;
//                    }
//                }
//            }
//            else
//            {
//                hmi2_color = 0;
//            }

//        }
    }

    SetHmiLabelColor(ID_PIBCS_LABEL_CAR1_HMI, hmi1_color);
    SetHmiLabelColor(ID_PIBCS_LABEL_CAR4_HMI, hmi2_color);

}

void CCommStatusPage::UpdateBCU()
{

    //if (Bit(CCU_HMI_222_9, 12 ) == 1)   //CTHM_BCU1On_B1	BCU1在线
    if (Bit(CCU_HMI_308_7, 16 ) == 1)   //CTHM_BCU1On_B1	BCU1在线
    {
        bcu1_color = 1;
//        if(Bit(BCU_413_12,11)==0)  //BRiCT_MGW_B1  Gateway is master   1= 主网关阀
//        {
//            bcu1_color = 2;
//        }
    }
    else
    {
        bcu1_color = 0;
    }
    //if (Bit(CCU_HMI_222_9, 11 ) == 1)
    if (Bit(CCU_HMI_308_7, 15 ) == 1)
    {
        bcu2_color = 1;
//        if(Bit(BCU_423_12,11)==0)
//        {
//            bcu2_color = 2;
//        }
    }
    else
    {
        bcu2_color = 0;
    }
    //if (Bit(CCU_HMI_222_9, 10 ) == 1)
    if (Bit(CCU_HMI_308_7, 14 ) == 1)   //CTHM_BCU1On_B1	BCU1在线
    {
        bcu3_color = 1;
//        if(Bit(BCU_433_12,11)==0)
//        {
//            bcu3_color = 2;
//        }
    }
    else
    {
        bcu3_color = 0;
    }
    //if (Bit(CCU_HMI_222_9, 9 ) == 1)
    if (Bit(CCU_HMI_308_7, 13 ) == 1)   //CTHM_BCU1On_B1	BCU1在线
    {
        bcu4_color = 1;
//        if(Bit(BCU_443_12,11)==0)
//        {
//            bcu4_color = 2;
//        }
    }
    else
    {
        bcu4_color = 0;
    }

    //    if ( Bit(CCU_HMI_222_9, 12 )&& Bit(CCU_HMI_222_9, 11 ) )
    //    {

    //            if (Bit(BCU_TC1_413_423_15 , 14) )  //BRiCT_CanNotOK_B1	Can Not Ok        CAN总线故障
    //            {
    //                BCU_CAN1 = 0;
    //            }
    //            else
    //            {
    //                BCU_CAN1 = 2;
    //            }

    //    }
    //    else
    //    {
    //        BCU_CAN1 = 0;
    //    }
    //    if (Bit(CCU_HMI_222_9, 10 ) && Bit(CCU_HMI_222_9, 9 ) )
    //    {
    //        if (Bit(BCU_TC2_433_443_15, 14) )
    //        {
    //            BCU_CAN2 = 0;
    //        }
    //        else
    //        {
    //            BCU_CAN2 = 2;
    //        }
    //    }
    //    else
    //    {
    //        BCU_CAN2 = 0;
    //    }

    SetBcuLabelColor(ID_PIBCS_LABEL_CAR1_BCU, bcu1_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR2_BCU, bcu2_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR3_BCU, bcu3_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR4_BCU, bcu4_color);
    //SetBcucanLabelColor(ID_PIBCS_LABEL_BCU1INTO3, BCU_CAN1);
    //SetBcucanLabelColor(ID_PIBCS_LABEL_BCU4INTO6, BCU_CAN2);

}

void CCommStatusPage::UpdateHVAC()
{

    //if (Bit(CCU_HMI_222_10, 8 )  == 1)
    if (Bit(CCU_HMI_308_8, 14 )  == 1)
    {
         hvac1_color=1;
         car1_HVAC_error1 = Bit( hvac_status_data20, 16 ) || (Bit( hvac_status_data20, 12 ) )
                            || (Bit( hvac_status_data20, 8 ) ) || (Bit( hvac_status_data20, 4 ) )
                            || (Bit( hvac_status_data28, 16 ) ) || (Bit( hvac_status_data28, 12 ) )
                            || (Bit( hvac_status_data28, 8 ) );
         car1_HVAC_error2 = Bit( hvac_status_data20, 15 ) || (Bit( hvac_status_data20, 11 ) )
                            || (Bit( hvac_status_data20, 7 ) ) || (Bit( hvac_status_data20, 3 ) )
                            || (Bit( hvac_status_data28, 15 ) ) || (Bit( hvac_status_data28, 11 ) )
                            || (Bit( hvac_status_data28, 7 ) );
         car1_HVAC_error3 = Bit( hvac_status_data20, 14 ) || (Bit( hvac_status_data20, 10 ) )
                            || (Bit( hvac_status_data20, 6 ) ) || (Bit( hvac_status_data20, 2 ) )
                            || (Bit( hvac_status_data28, 14) ) || (Bit( hvac_status_data28, 10 ) )
                            || (Bit( hvac_status_data28, 6 ) );
         car1_HVAC_error4 = Bit( hvac_status_data20, 13) || (Bit( hvac_status_data20, 9 ) )
                           || (Bit( hvac_status_data20, 5 ) ) || (Bit( hvac_status_data20, 1 ) )
                           || (Bit( hvac_status_data28, 13) ) || (Bit( hvac_status_data28, 9 ) )
                           || (Bit( hvac_status_data28, 5 ) );
//         if ( (car1_HVAC_error1 | car1_HVAC_error2|car1_HVAC_error3 | car1_HVAC_error4)!= 0)
//         {
//             hvac1_color = 2;
//         }
     }
    else
    {
        hvac1_color = 0;
    }   //HVAC1
    //if (Bit(CCU_HMI_222_10, 7 )  == 1)
    if (Bit(CCU_HMI_308_8, 13 )  == 1)
    {
        hvac2_color=1;
        car2_HVAC_error1 = Bit( hvac_status_data21, 16 ) || (Bit( hvac_status_data21, 12 ) )
                          || (Bit( hvac_status_data21, 8 ) ) || (Bit( hvac_status_data21, 4 ) )
                          || (Bit( hvac_status_data29, 16 )) || (Bit( hvac_status_data29, 12 ) )
                          || (Bit( hvac_status_data29, 8 ) );
        car2_HVAC_error2 = Bit( hvac_status_data21, 15 ) || (Bit( hvac_status_data21, 11 ) )
                           || (Bit( hvac_status_data21, 7 ) ) || (Bit( hvac_status_data21, 3 ) )
                           || (Bit( hvac_status_data29, 15 ) ) || (Bit( hvac_status_data29, 11 ) )
                           || (Bit( hvac_status_data29, 7 ) );
        car2_HVAC_error3 = Bit( hvac_status_data21, 14 ) || (Bit( hvac_status_data21, 10 ) )
                           || (Bit( hvac_status_data21, 6 ) ) || (Bit( hvac_status_data21, 2 ) )
                           || (Bit( hvac_status_data29, 14) ) || (Bit( hvac_status_data29, 10 ) )
                           || (Bit( hvac_status_data29, 6 ) );
        car2_HVAC_error4 = Bit( hvac_status_data21, 13) || (Bit( hvac_status_data21, 9 ) )
                           || (Bit( hvac_status_data21, 5 ) ) || (Bit( hvac_status_data21, 1 ) )
                           || (Bit( hvac_status_data29, 13) ) || (Bit( hvac_status_data29, 9 ) )
                           || (Bit( hvac_status_data29, 5 ) );
//        if ( (car2_HVAC_error1 | car2_HVAC_error2 | car2_HVAC_error3 | car2_HVAC_error4) != 0 )
//        {
//            hvac2_color = 2;
//        }
    }
    else
    {
        hvac2_color = 0;
    }
    //if (Bit(CCU_HMI_222_10, 6 )  == 1)
    if (Bit(CCU_HMI_308_8, 12 )  == 1)
    {
        hvac3_color = 1;
        car3_HVAC_error1 = Bit( hvac_status_data22, 16 ) || (Bit( hvac_status_data22, 12 ) )
                           || (Bit( hvac_status_data22, 8 ) ) || (Bit( hvac_status_data22, 4 ) )
                           || (Bit( hvac_status_data30, 16 ) ) || (Bit( hvac_status_data30, 12 ) )
                           || (Bit( hvac_status_data30, 8 ) );
        car3_HVAC_error2 = Bit( hvac_status_data22, 15 ) || (Bit( hvac_status_data22, 11 ) )
                           || (Bit( hvac_status_data22, 7 ) ) || (Bit( hvac_status_data22, 3 ) )
                           || (Bit( hvac_status_data30, 15 ) ) || (Bit( hvac_status_data30, 11 ) )
                           || (Bit( hvac_status_data30, 7 ) );
        car3_HVAC_error3 = Bit( hvac_status_data22, 14 ) || (Bit( hvac_status_data22, 10 ))
                           ||(Bit( hvac_status_data22, 6 ))||(Bit( hvac_status_data22, 2 ))
                           ||(Bit( hvac_status_data30, 14))||(Bit( hvac_status_data30, 10 ))
                           ||(Bit( hvac_status_data30, 6 ));
        car3_HVAC_error4 = Bit( hvac_status_data22, 13) || (Bit( hvac_status_data22, 9 ) )
                           || (Bit( hvac_status_data22, 5 ) ) || (Bit( hvac_status_data22, 1 ) )
                           || (Bit( hvac_status_data30, 13) ) || (Bit( hvac_status_data30, 9 ) )
                           || (Bit( hvac_status_data30, 5 ) );
//        if ( (car3_HVAC_error1 | car3_HVAC_error2 | car3_HVAC_error3 | car3_HVAC_error4) != 0)
//        {
//            hvac3_color = 2;
//        }
     }
    else
    {
        hvac3_color = 0;
    }
    //if (Bit(CCU_HMI_222_10, 5 )  == 1)
    if (Bit(CCU_HMI_308_8, 11 )  == 1)
    {
        hvac4_color = 1;
        car4_HVAC_error1 = Bit( hvac_status_data23, 16 ) || (Bit( hvac_status_data23, 12 ) )
                           || (Bit( hvac_status_data23, 8 ) ) || (Bit( hvac_status_data23, 4 ) )
                           || (Bit( hvac_status_data31, 16 ) ) || (Bit( hvac_status_data31, 12 ) )
                           || (Bit( hvac_status_data31, 8 ) );
        car4_HVAC_error2 = Bit( hvac_status_data23, 15 ) || (Bit( hvac_status_data23, 11 ) )
                           || (Bit( hvac_status_data23, 7 ) ) || (Bit( hvac_status_data23, 3 ) )
                           || (Bit( hvac_status_data31, 15 ) ) || (Bit( hvac_status_data31, 11 ) )
                           || (Bit( hvac_status_data31, 7 ) );
        car4_HVAC_error3 = Bit( hvac_status_data23, 14 ) || (Bit( hvac_status_data23, 10 ) )
                           || (Bit( hvac_status_data23, 6 ) ) || (Bit( hvac_status_data23, 2 ) )
                           || (Bit( hvac_status_data31, 14) ) || (Bit( hvac_status_data31, 10 ) )
                           || (Bit( hvac_status_data31, 6 ) );
        car4_HVAC_error4 = Bit( hvac_status_data23, 13) || (Bit( hvac_status_data23, 9 ) )
                           || (Bit( hvac_status_data23, 5 ) ) || (Bit( hvac_status_data23, 1 ) )
                           || (Bit( hvac_status_data31, 13) ) || (Bit( hvac_status_data31, 9 ) )
                           || (Bit( hvac_status_data31, 5 ) );
//        if ( (car4_HVAC_error1 | car4_HVAC_error2 | car4_HVAC_error3|car4_HVAC_error4)!= 0)
//        {
//            hvac4_color = 2;
//        }
    }
    else
    {
        hvac4_color = 0;
    }
//    if (Bit(CCU_HMI_222_10, 4 )  == 1)
//    {
//        hvac5_color = 1;
//        car5_HVAC_error1 = Bit( hvac_status_data24, 16 ) || (Bit( hvac_status_data24, 12 ) )
//                           || (Bit( hvac_status_data24, 8 ) ) || (Bit( hvac_status_data24, 4 ) )
//                           || (Bit( hvac_status_data32, 16 ) ) || (Bit( hvac_status_data32, 12 ) )
//                           || (Bit( hvac_status_data32, 8 ) );
//        car5_HVAC_error2 = Bit( hvac_status_data24, 15 ) || (Bit( hvac_status_data24, 11 ) )
//                           || (Bit( hvac_status_data24, 7 ) ) || (Bit( hvac_status_data24, 3 ) )
//                           || (Bit( hvac_status_data32, 15 ) ) || (Bit( hvac_status_data32, 11 ) )
//                           || (Bit( hvac_status_data32, 7 ) );
//        car5_HVAC_error3 = Bit( hvac_status_data24, 14 ) || (Bit( hvac_status_data24, 10 ) )
//                           || (Bit( hvac_status_data24, 6 ) ) || (Bit( hvac_status_data24, 2 ) )
//                           || (Bit( hvac_status_data32, 14) ) || (Bit( hvac_status_data32, 10 ) )
//                           || (Bit( hvac_status_data32, 6 ) );
//        car5_HVAC_error4 = Bit( hvac_status_data24, 13) || (Bit( hvac_status_data24, 9 ) )
//                           || (Bit( hvac_status_data24, 5 ) ) || (Bit( hvac_status_data24, 1 ) )
//                           || (Bit( hvac_status_data32, 13) ) || (Bit( hvac_status_data32, 9 ) )
//                           || (Bit( hvac_status_data32, 5 ) );
////        if ( (car5_HVAC_error1 | car5_HVAC_error2 | car5_HVAC_error3 | car5_HVAC_error4) != 0)
////        {
////            hvac5_color = 2;
////        }
//    }
//    else
//    {
//        hvac5_color = 0;
//    }
//    if (Bit(CCU_HMI_222_10, 3 )  == 1)
//    {
//        hvac6_color = 1;
//        car6_HVAC_error1 = Bit( hvac_status_data26, 16 ) || (Bit( hvac_status_data26, 12 ) )
//                           || (Bit( hvac_status_data26, 8 ) ) || (Bit( hvac_status_data26, 4 ) )
//                           || (Bit( hvac_status_data33, 16 ) ) || (Bit( hvac_status_data33, 12 ) )
//                           || (Bit( hvac_status_data33, 8 ) );
//        car6_HVAC_error2 = Bit( hvac_status_data26, 15 ) || (Bit( hvac_status_data26, 11 ) )
//                           || (Bit( hvac_status_data26, 7 ) ) || (Bit( hvac_status_data26, 3 ) )
//                           || (Bit( hvac_status_data33, 15 ) ) || (Bit( hvac_status_data33, 11 ) )
//                           || (Bit( hvac_status_data33, 7 ) );
//        car6_HVAC_error3 = Bit( hvac_status_data26, 14 ) || (Bit( hvac_status_data26, 10 ) )
//                           || (Bit( hvac_status_data26, 6 ) ) || (Bit( hvac_status_data26, 2 ) )
//                           || (Bit( hvac_status_data33, 14) ) || (Bit( hvac_status_data33, 10 ) )
//                           || (Bit( hvac_status_data33, 6 ) );
//        car6_HVAC_error4 = Bit( hvac_status_data26, 13) || (Bit( hvac_status_data26, 9 ) )
//                           || (Bit( hvac_status_data26, 5 ) ) || (Bit( hvac_status_data26, 1 ) )
//                           || (Bit( hvac_status_data33, 13) ) || (Bit( hvac_status_data33, 9 ) )
//                           || (Bit( hvac_status_data33, 5 ) );
////        if ( (car6_HVAC_error1 | car6_HVAC_error2 | car6_HVAC_error3 | car6_HVAC_error4) != 0)
////        {
////            hvac6_color = 2;
////        }
//    }
//    else
//    {
//        hvac6_color = 0;
//    }

//    if (Bit(CCU_HMI_222_10, 2 )  == 1)
//    {
//        hvac7_color = 1;

//    }
//    else
//    {
//        hvac7_color = 0;
//    }

//    if (Bit(CCU_HMI_222_10, 1 )  == 1)
//    {
//        hvac8_color = 1;

//    }
//    else
//    {
//        hvac8_color = 0;
//    }
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR1_HVAC, hvac1_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR2_HVAC, hvac2_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR3_HVAC, hvac3_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR4_HVAC, hvac4_color);
    //SetHvacLabelColor(ID_PIBCS_LABEL_CAR5_HVAC, hvac5_color);
    //SetHvacLabelColor(ID_PIBCS_LABEL_CAR6_HVAC, hvac6_color);
    //SetHvacLabelColor(ID_PIBCS_LABEL_CAR7_HVAC, hvac7_color);
    //SetHvacLabelColor(ID_PIBCS_LABEL_CAR8_HVAC, hvac8_color);
}

void CCommStatusPage::UpdatePIS()
{

    //if (Bit(CCU_HMI_222_16, 8 ) == 1)   //PIS1
    if (Bit(CCU_HMI_308_8, 16 ) == 1)   //PIS1
    {
        //PAiCT_ACSUIsMstr_B1	ACSU是主机  1=主机   如果主机从机标志位都没有给出则显示白色
        //if (Bit(PIS_911_3,8) == 0)
        if (Bit(CCU_HMI_308_9, 6) == 1)
        {
            pis1_color = 1;
            //if (Bit(PIS_911_3,7) == 1)

//            {
//                pis1_color = 1;
//            }
//            else
//            {
//                pis1_color = 2;
//            }
        }
       else
        {
           pis1_color = 2;
        }
    }
    else
    {
        pis1_color = 0;
    }
    //if (Bit(CCU_HMI_222_16, 7 ) == 1)   //PIS2
     if (Bit(CCU_HMI_308_8, 15 ) == 1)   //PIS2
    {
        //if (Bit(PIS_921_3,8)== 0 )
         if (Bit(CCU_HMI_308_9, 5 )== 1)
        {
           pis2_color = 1;
        }
        else
        {
            pis2_color = 2;
        }
    }
    else
    {
        pis2_color = 0;
    }

    SetPisLabelColor(ID_PIBCS_LABEL_CAR1_PIS, pis1_color);
    SetPisLabelColor(ID_PIBCS_LABEL_CAR4_PIS, pis2_color);
}

void CCommStatusPage::UpdateEDCU()
{
     if(Bit(CCU_HMI_308_8,8)==1)
    {
         if(DCU_712_13==1)//是否与未颠倒有关系
         edcu1_color = 1;//门控器为主 绿
        else if(DCU_712_13==2)
         edcu1_color = 3;//门控器为从 黄
        else if(DCU_712_13==3)
         edcu1_color = 4;//门控器为部分主 蓝
        else if(DCU_712_13==0)
         edcu1_color = 2;//门控器为部分主 红
        else
         edcu1_color = 2;//门控器故障 红
     }
     else
     {
          edcu1_color = 0;//门控器不在线 白
      }
     if(Bit(CCU_HMI_308_8,7)==1)
    {
         if(DCU_722_13==1)
         edcu2_color = 1;//门控器为主 绿
        else if(DCU_722_13==2)
         edcu2_color = 3;//门控器为从 黄
        else if(DCU_722_13==3)
         edcu2_color = 4;//门控器为部分主 蓝
        else if(DCU_722_13==0)
         edcu2_color = 2;//门控器error 红
        else
         edcu2_color = 2;//门控器故障 红
     }
     else
     {
          edcu2_color = 0;
      }
     if(Bit(CCU_HMI_308_8,6)==1)
    {
         if(DCU_732_13==1)
         edcu3_color = 1;//门控器为主 绿
        else if(DCU_732_13==2)
         edcu3_color = 3;//门控器为从 黄
        else if(DCU_732_13==3)
         edcu3_color = 4;//门控器为部分主 蓝
        else if(DCU_732_13==0)
         edcu3_color = 2;//门控器error 红
        else
         edcu3_color = 2;//门控器故障 红
     }
     else
     {
          edcu3_color = 0;
      }
     if(Bit(CCU_HMI_308_8,5)==1)
    {
         if(DCU_742_13==1)
         edcu4_color = 1;//门控器为主 绿
        else if(DCU_742_13==2)
         edcu4_color = 3;//门控器为从 黄
        else if(DCU_742_13==3)
         edcu4_color = 4;//门控器为部分主 蓝
        else if(DCU_742_13==0)
         edcu4_color = 2;//门控器error 红
        else
         edcu4_color = 2;//门控器故障 红
     }
     else
     {
          edcu4_color = 0;
      }
     if(Bit(CCU_HMI_308_8,4)==1)
    {
         if(DCU_752_13==1)
         edcu5_color = 1;//门控器为主 绿
        else if(DCU_752_13==2)
         edcu5_color = 3;//门控器为从 黄
        else if(DCU_752_13==3)
         edcu5_color = 4;//门控器为部分主 蓝
        else if(DCU_752_13==0)
         edcu5_color = 2;//门控器error 红
        else
         edcu5_color = 2;//门控器故障 红
     }
     else
     {
          edcu5_color = 0;
      }
     if(Bit(CCU_HMI_308_8,3)==1)
    {
         if(DCU_762_13==1)
         edcu6_color = 1;//门控器为主 绿
        else if(DCU_762_13==2)
         edcu6_color = 3;//门控器为从 黄
        else if(DCU_762_13==3)
         edcu6_color = 4;//门控器为部分主 蓝
        else if(DCU_762_13==0)
         edcu6_color = 2;//门控器error 红
        else
         edcu6_color = 2;//门控器故障 红
     }
     else
     {
          edcu6_color = 0;
      }
     if(Bit(CCU_HMI_308_8,2)==1)
    {
         if(DCU_772_13==1)
         edcu7_color = 1;//门控器为主 绿
        else if(DCU_772_13==2)
         edcu7_color = 3;//门控器为从 黄
        else if(DCU_772_13==3)
         edcu7_color = 4;//门控器为部分主 蓝
        else if(DCU_772_13==0)
         edcu7_color = 2;//门控器error 红
        else
         edcu7_color = 2;//门控器故障 红
     }
     else
     {
          edcu7_color = 0;
      }
     if(Bit(CCU_HMI_308_8,1)==1)
    {
         if(DCU_782_13==1)
         edcu8_color = 1;//门控器为主 绿
        else if(DCU_782_13==2)
         edcu8_color = 3;//门控器为从 黄
        else if(DCU_782_13==3)
         edcu8_color = 4;//门控器为部分主 蓝
        else if(DCU_782_13==0)
         edcu8_color = 2;//门控器error 红
        else
         edcu8_color = 2;//门控器故障 红
     }
     else
     {
          edcu8_color = 0;
      }
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR1_EDCU1, edcu1_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR1_EDCU2, edcu2_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR2_EDCU3, edcu3_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR2_EDCU4, edcu4_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR3_EDCU5, edcu5_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR3_EDCU6, edcu6_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR4_EDCU7, edcu7_color);
     SetEdcuLabelColor(ID_PIBCS_LABEL_CAR4_EDCU8, edcu8_color);
 }
void CCommStatusPage::UpdateDOOR()  //?
{
    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
    //if ((Bit(DCU_712_14,8)) || (Bit(DCU_722_14,8) ) == 1)
    //TC1
    if ((Bit(CCU_HMI_308_8,8)) || (Bit(CCU_HMI_308_8,7) ) == 1)
       {
          //if(Bit(g_dataBuffer[3192],2)==0)
        if(Bit(g_dataBuffer[637],8)||Bit(g_dataBuffer[685],8))
           che1_door1 = 1;//可信在线
          else
           che1_door1 = 2; //均不可信则不在线


       //if ((Bit(DCU_712_14,7)) || (Bit(DCU_722_14,7) ) == 1)
            //if(Bit(g_dataBuffer[3193],2)==0)
          if(Bit(g_dataBuffer[637],7)||Bit(g_dataBuffer[685],7))
              che1_door2 = 1;
            else
              che1_door2 = 2;

     //if ((Bit(DCU_712_14,6)) || (Bit(DCU_722_14,6) ) == 1)
           //if(Bit(g_dataBuffer[3194],2)==0)
         if(Bit(g_dataBuffer[637],6)||Bit(g_dataBuffer[685],6))
            che1_door3 = 1;
           else
            che1_door3 = 2;

       //if ((Bit(DCU_712_14,5)) || (Bit(DCU_722_14,5) ) == 1)
            //if(Bit(g_dataBuffer[3195],2)==0)
         if(Bit(g_dataBuffer[637],5)||Bit(g_dataBuffer[685],5))
              che1_door4 = 1;
            else
              che1_door4 = 2;
      }
      else
      {
          che1_door1 = 0;//通信异常
          che1_door2 = 0;
          che1_door3 = 0;
          che1_door4 = 0;
      }

//MP1
          //if ((Bit(DCU_732_14,8)) || (Bit(DCU_742_14,8) ) == 1)
//          if ((Bit(CCU_HMI_308_8,6)) || (Bit(CCU_HMI_308_8,5) ) == 1)
//             {
//                 che2_door1 = 1;
//             }
//             else
//             {
//                 che2_door1 = 0;
//             }
//             if ((Bit(DCU_732_14,7)) || (Bit(DCU_742_14,7) ) == 1)
//                {
//                    che2_door2 = 1;
//                }
//                else
//                {
//                    che2_door2 = 0;
//                }
//           if ((Bit(DCU_732_14,6)) || (Bit(DCU_742_14,6) ) == 1)
//              {
//                  che2_door3 = 1;
//              }
//                else
//              {
//                   che2_door3 = 0;
//              }
//             if ((Bit(DCU_732_14,5)) || (Bit(DCU_742_14,5) ) == 1)
//                {
//                    che2_door4 = 1;
//                }
//                else
//                {
//                    che2_door4 = 0;
//                }
//             if ((Bit(DCU_732_14,4)) || (Bit(DCU_742_14,4) ) == 1)
//                {
//                    che2_door5 = 1;
//               }
//                else
//                {
//                    che2_door5 = 0;
//              }
//              if ((Bit(DCU_732_14,3)) || (Bit(DCU_742_14,3) ) == 1)
//                   {
//                       che2_door6 = 1;
//                  }
//                   else
//                   {
//                       che2_door6 = 0;
//                 }
      if ((Bit(CCU_HMI_308_8,6)) || (Bit(CCU_HMI_308_8,5) ) == 1)
         {
            //if(Bit(g_dataBuffer[3240],2)==0)
          if(Bit(g_dataBuffer[733],8)||Bit(g_dataBuffer[781],8))
             che2_door1 = 1;//可信即在线
            else
             che2_door1 = 2; //

         //if ((Bit(DCU_712_14,7)) || (Bit(DCU_722_14,7) ) == 1)
              //if(Bit(g_dataBuffer[3241],2)==0)
          if(Bit(g_dataBuffer[733],7)||Bit(g_dataBuffer[781],7))
                che2_door2 = 1;
              else
                che2_door2 = 2;

       //if ((Bit(DCU_712_14,6)) || (Bit(DCU_722_14,6) ) == 1)
             //if(Bit(g_dataBuffer[3242],2)==0)
          if(Bit(g_dataBuffer[733],6)||Bit(g_dataBuffer[781],6))
              che2_door3 = 1;
             else
              che2_door3 = 2;

         //if ((Bit(DCU_712_14,5)) || (Bit(DCU_722_14,5) ) == 1)
              //if(Bit(g_dataBuffer[3243],2)==0)
          if(Bit(g_dataBuffer[733],5)||Bit(g_dataBuffer[781],5))
                che2_door4 = 1;
              else
                che2_door4 = 2;

              //if(Bit(g_dataBuffer[3244],2)==0)
          if(Bit(g_dataBuffer[733],4)||Bit(g_dataBuffer[781],4))
                che2_door5 = 1;
              else
                che2_door5 = 2;

              //if(Bit(g_dataBuffer[3245],2)==0)
          if(Bit(g_dataBuffer[733],3)||Bit(g_dataBuffer[781],3))
                che2_door6 = 1;
              else
                che2_door6 = 2;
        }
        else
        {
            che2_door1 = 0;//通信异常
            che2_door2 = 0;
            che2_door3 = 0;
            che2_door4 = 0;
            che2_door5 = 0;
            che2_door6 = 0;
        }
//MP2
        if ((Bit(CCU_HMI_308_8,4)) || (Bit(CCU_HMI_308_8,3) ) == 1)
           {
              //if(Bit(g_dataBuffer[3288],2)==0)
            if(Bit(g_dataBuffer[829],8)||Bit(g_dataBuffer[877],8))
               che3_door1 = 1;//在线
              else
               che3_door1 = 2; //隔离即故障

           //if ((Bit(DCU_712_14,7)) || (Bit(DCU_722_14,7) ) == 1)
                //if(Bit(g_dataBuffer[3289],2)==0)
              if(Bit(g_dataBuffer[829],7)||Bit(g_dataBuffer[877],7))

                  che3_door2 = 1;
                else
                  che3_door2 = 2;

         //if ((Bit(DCU_712_14,6)) || (Bit(DCU_722_14,6) ) == 1)
               //if(Bit(g_dataBuffer[3290],2)==0)
              if(Bit(g_dataBuffer[829],6)||Bit(g_dataBuffer[877],6))
                che3_door3 = 1;
               else
                che3_door3 = 2;

           //if ((Bit(DCU_712_14,5)) || (Bit(DCU_722_14,5) ) == 1)
                //if(Bit(g_dataBuffer[3291],2)==0)
               if(Bit(g_dataBuffer[829],5)||Bit(g_dataBuffer[877],5))
                  che3_door4 = 1;
                else
                  che3_door4 = 2;

                //if(Bit(g_dataBuffer[3292],2)==0)
                if(Bit(g_dataBuffer[829],4)||Bit(g_dataBuffer[877],4))
                  che3_door5 = 1;
                else
                  che3_door5 = 2;

                //if(Bit(g_dataBuffer[3293],2)==0)
                if(Bit(g_dataBuffer[829],3)||Bit(g_dataBuffer[877],3))
                  che3_door6 = 1;
                else
                  che3_door6 = 2;
          }
          else
          {
              che3_door1 = 0;//通信异常
              che3_door2 = 0;
              che3_door3 = 0;
              che3_door4 = 0;
              che3_door5 = 0;
              che3_door6 = 0;
          }
//TC2
                 //if ((Bit(DCU_772_14,8)) || (Bit(DCU_782_14,8) ) == 1)
          if ((Bit(CCU_HMI_308_8,2)) || (Bit(CCU_HMI_308_8,1) ) == 1)
             {
                //if(Bit(g_dataBuffer[3336],2)==0)
             if(Bit(g_dataBuffer[925],8)||Bit(g_dataBuffer[973],8))
                 che4_door1 = 1;//可信即在线
                else
                 che4_door1 = 2; //不可信则故障

             //if ((Bit(DCU_712_14,7)) || (Bit(DCU_722_14,7) ) == 1)
                  //if(Bit(g_dataBuffer[3337],2)==0)
             if(Bit(g_dataBuffer[925],7)||Bit(g_dataBuffer[973],7))
                    che4_door2 = 1;
                  else
                    che4_door2 = 2;

           //if ((Bit(DCU_712_14,6)) || (Bit(DCU_722_14,6) ) == 1)
                 //if(Bit(g_dataBuffer[3338],2)==0)
               if(Bit(g_dataBuffer[925],6)||Bit(g_dataBuffer[973],6))
                  che4_door3 = 1;
                 else
                  che4_door3 = 2;

             //if ((Bit(DCU_712_14,5)) || (Bit(DCU_722_14,5) ) == 1)
                  //if(Bit(g_dataBuffer[3339],2)==0)
               if(Bit(g_dataBuffer[925],5)||Bit(g_dataBuffer[973],5))
                    che4_door4 = 1;
                  else
                    che4_door4 = 2;
            }
            else
            {
                che4_door1 = 0;//通信异常
                che4_door2 = 0;
                che4_door3 = 0;
                che4_door4 = 0;
            }

    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR1, che1_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR2, che1_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR3, che1_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR4, che1_door4);

    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR1, che2_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR2, che2_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR3, che2_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR4, che2_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR5, che2_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR6, che2_door6);

    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR1, che3_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR2, che3_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR3, che3_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR4, che3_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR5, che3_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR6, che3_door6);

    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR1, che4_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR2, che4_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR3, che4_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR4, che4_door4);

}

void CCommStatusPage::UpdateUDP()
{

   /* if(TC1_HMI==1)
    {
        if(Bit(hmi_485_error,7)==1)
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::cyan);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
        }

        if(g_udp_comm_err_flg1)
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::cyan);
        }


    }
    else
    {
        if(TC2_HMI==1)
        {
            if((Bit(hmi_485_error,7)==1))
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::cyan);
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
            }

            if(g_udp_comm_err_flg2)
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::cyan);
            }
        }
        else
        {
             ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
             ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
        }
    }*/


}

void CCommStatusPage::UpdateGW()
{


    //    CTHM_DCU1On_B1   门控制器1在线
    if (Bit(CCU_HMI_222_10, 16 )  == 1 )
        {
            //    DRiCT_OperStts_U8	运行模式	"0=Error  1=master  2=stand by"
            if((DCU_OLD_710_2%256)==1)
            {
                car1_GW1 = 1;
            }
            if((DCU_OLD_710_2%256)==2)
            {
                car1_GW1 = 2;
            }
            if((DCU_OLD_710_2%256)==0)
            {
                car1_GW1 = 3;
            }
        }
        else
        {
            car1_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 8 )  == 1  )
        {
            if((DCU_OLD_790_2%256)==1)
            {
                car1_GW2 = 1;
            }
            if((DCU_OLD_790_2%256)==2)
            {
                car1_GW2 = 2;
            }
            if((DCU_OLD_790_2%256)==0)
            {
                car1_GW2 = 3;
            }
        }
        else
        {
            car1_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 15 )  == 1  )
        {
            if((DCU_OLD_720_2%256)==1)
            {
                car2_GW1 = 1;
            }
            if((DCU_OLD_720_2%256)==2)
            {
                car2_GW1 = 2;
            }
            if((DCU_OLD_720_2%256)==0)
            {
                car2_GW1 = 3;
            }
        }
        else
        {
            car2_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 7 )  == 1  )
        {
            if((DCU_OLD_7A0_2%256)==1)
            {
                car2_GW2 = 1;
            }
            if((DCU_OLD_7A0_2%256)==2)
            {
                car2_GW2 = 2;
            }
            if((DCU_OLD_7A0_2%256)==0)
            {
                car2_GW2 = 3;
            }
        }
        else
        {
            car2_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 14 )  == 1 )
        {
            if((DCU_OLD_730_2%256)==1)
            {
                car3_GW1 = 1;
            }
            if((DCU_OLD_730_2%256)==2)
            {
                car3_GW1 = 2;
            }
            if((DCU_OLD_730_2%256)==0)
            {
                car3_GW1 = 3;
            }
        }
        else
        {
            car3_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 6 )  == 1  )
        {
            if((DCU_OLD_7B0_2%256)==1)
            {
                car3_GW2 = 1;
            }
            if((DCU_OLD_7B0_2%256)==2)
            {
                car3_GW2 = 2;
            }
            if((DCU_OLD_7B0_2%256)==0)
            {
                car3_GW2 = 3;
            }
        }
        else
        {
            car3_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 13 )  == 1 )
        {
            if((DCU_OLD_740_2%256)==1)
            {
                car4_GW1 = 1;
            }
            if((DCU_OLD_740_2%256)==2)
            {
                car4_GW1 = 2;
            }
            if((DCU_OLD_740_2%256)==0)
            {
                car4_GW1 = 3;
            }
        }
        else
        {
            car4_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 5 )  == 1  )
        {
            if((DCU_OLD_7C0_2%256)==1)
            {
                car4_GW2 = 1;
            }
            if((DCU_OLD_7C0_2%256)==2)
            {
                car4_GW2 = 2;
            }
            if((DCU_OLD_7C0_2%256)==0)
            {
                car4_GW2 = 3;
            }
        }
        else
        {
            car4_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 12 )  == 1  )
        {
            if((DCU_OLD_750_2%256)==1)
            {
                car5_GW1 = 1;
            }
            if((DCU_OLD_750_2%256)==2)
            {
                car5_GW1 = 2;
            }
            if((DCU_OLD_750_2%256)==0)
            {
                car5_GW1 = 3;
            }
        }
        else
        {
            car5_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 4 )  == 1 )
        {
            if((DCU_OLD_7D0_2%256)==1)
            {
                car5_GW2 = 1;
            }
            if((DCU_OLD_7D0_2%256)==2)
            {
                car5_GW2 = 2;
            }
            if((DCU_OLD_7D0_2%256)==0)
            {
                car5_GW2 = 3;
            }
        }
        else
        {
            car5_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 11 )  == 1  )
        {
            if((DCU_OLD_760_2%256)==1)
            {
                car6_GW1 = 1;
            }
            if((DCU_OLD_760_2%256)==2)
            {
                car6_GW1 = 2;
            }
            if((DCU_OLD_760_2%256)==0)
            {
                car6_GW1 = 3;
            }
        }
        else
        {
            car6_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 3 )  == 1 )
        {
            if((DCU_OLD_7E0_2%256)==1)
            {
                car6_GW2 = 1;
            }
            if((DCU_OLD_7E0_2%256)==2)
            {
                car6_GW2 = 2;
            }
            if((DCU_OLD_7E0_2%256)==0)
            {
                car6_GW2 = 3;
            }
        }
        else
        {
            car6_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 10 )  == 1  )
        {
            if((DCU_OLD_770_2%256)==1)
            {
                car7_GW1 = 1;
            }
            if((DCU_OLD_770_2%256)==2)
            {
                car7_GW1 = 2;
            }
            if((DCU_OLD_770_2%256)==0)
            {
                car7_GW1 = 3;
            }
        }
        else
        {
            car7_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 2 )  == 1 )
        {
            if((DCU_OLD_7F0_2%256)==1)
            {
                car7_GW2 = 1;
            }
            if((DCU_OLD_7F0_2%256)==2)
            {
                car7_GW2 = 2;
            }
            if((DCU_OLD_7F0_2%256)==0)
            {
                car7_GW2 = 3;
            }
        }
        else
        {
            car7_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 9 )  == 1  )
        {
            if((DCU_OLD_780_2%256)==1)
            {
                car8_GW1 = 1;
            }
            if((DCU_OLD_780_2%256)==2)
            {
                car8_GW1 = 2;
            }
            if((DCU_OLD_780_2%256)==0)
            {
                car8_GW1 = 3;
            }
        }
        else
        {
            car8_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 1 )  == 1 )
        {
            if((DCU_OLD_700_2%256)==1)
            {
                car8_GW2 = 1;
            }
            if((DCU_OLD_700_2%256)==2)
            {
                car8_GW2 = 2;
            }
            if((DCU_OLD_700_2%256)==0)
            {
                car8_GW2 = 3;
            }
        }
        else
        {
            car8_GW2 = 0;

        }


    //SetGwLabelColor(ID_PIBCS_LABEL_CAR1_GW1, car1_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR1_GW2, car1_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR2_GW1, car2_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR2_GW2, car2_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR3_GW1, car3_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR3_GW2, car3_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR4_GW1, car4_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR4_GW2, car4_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR5_GW1, car5_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR5_GW2, car5_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR6_GW1, car6_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR6_GW2, car6_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR7_GW1, car7_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR7_GW2, car7_GW2);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR8_GW1, car8_GW1);
    //SetGwLabelColor(ID_PIBCS_LABEL_CAR8_GW2, car8_GW2);
}

void CCommStatusPage::SetCcuLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetRiomLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetAcuLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetPdsLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetTcuLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetAtcLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetHmiLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetBcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetBcucanLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkGreen);
    }

    return;
}

void CCommStatusPage::SetHvacLabelColor(int id, int colorVal)
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
//    else if (2 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
//    }

    return;
}

void CCommStatusPage::SetPisLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetEdcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
    }
    return;
}

void CCommStatusPage::SetDoorLabelColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetGwLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

//void CCommStatusPage::UpdateRLD()
//{


//    if(Bit(DI_110_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_120_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_130_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_140_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_150_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_160_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_170_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_180_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8_RLD))->SetCtrlBKColor(Qt::red);
//    }
//}

