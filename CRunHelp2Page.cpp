#include "CRunHelp2Page.h"

ROMDATA g_PicRom_RunHelp2[] =
{
    D_COMMON_PAGE_HEADER(QSTR("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  55, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 80, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 150, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 270, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //    {"",                            D_FONT_BOLD(6),      QRect( 40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 40, 510, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 115, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 140, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 180, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
        {"",                            D_FONT_BOLD(6),      QRect( 200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300+60, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 330, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
        //{"",                            D_FONT_BOLD(6),      QRect(200, 420, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 420, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40, 55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  56, 158,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(201,  56, 108,  23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(311,  56, 108,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(421,  56, 338,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("受电弓状态"),                 D_FONT_BOLD(8),      QRect( 41, 62+20, 158,  66),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("升弓"),                      D_FONT_BOLD(8),      QRect(201, 62+20, 108,  31),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("降弓"),                      D_FONT_BOLD(8),      QRect(201, 102+15, 108,  31),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("动作中"),                    D_FONT_BOLD(8),      QRect(201, 142, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("up.PNG"),                   D_FONT_BOLD(8),      QRect(326, 62+20,  80,  31),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_UP        },
    {QSTR("down.PNG"),                 D_FONT_BOLD(8),      QRect(326, 102+15,  80,  31),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP2_DOWN        },
   // {QSTR("no_up_down.PNG"),           D_FONT_BOLD(8),      QRect(326, 142, 80,  36),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_NO_UP_DOWN        },
    {QSTR("升弓到位"),           D_FONT_BOLD(8),      QRect(421, 62+20, 338,  31),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("降弓到位"),           D_FONT_BOLD(8),      QRect(421, 102+15, 338,  31),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("受电弓动作中"),           D_FONT_BOLD(8),      QRect(421, 142, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("乘客报警"),                D_FONT_BOLD(8),      QRect( 41, 135, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("乘客报警"),                D_FONT_BOLD(8),      QRect(201, 135, 108,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//     {QSTR("warning.PNG"),           D_FONT_BOLD(8),      QRect(330, 130,  70,  40),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP2_WARNING        },
//    {QSTR("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),      QRect(421, 135, 338,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("辅助系统状态"),               D_FONT_BOLD(8),      QRect(50, 205-30, 150, 30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("正常模式"),               D_FONT_BOLD(8),      QRect(200, 181, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("380V"),                  D_FONT_BOLD(6),      QRect(320, 185, 90, 20),             Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
//   // {QSTR("120A"),                  D_FONT_BOLD(6),      QRect(330, 280, 70, 15),             Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("逆变模式"),               D_FONT_BOLD(8),      QRect(200, 211, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("250V"),                  D_FONT_BOLD(6),      QRect(320, 215, 90, 20),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
//  //  {QSTR("120A"),                  D_FONT_BOLD(6),      QRect(330, 310, 70, 15),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("停止状态"),               D_FONT_BOLD(8),      QRect(200, 241, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("停机"),                  D_FONT_BOLD(8),      QRect(310, 241, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("可复位故障"),             D_FONT_BOLD(8),      QRect(200, 271, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("可复位"),                 D_FONT_BOLD(6),      QRect(320, 275, 90, 20),             Qt::white,               Qt::darkRed,      CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("不可复位故障"),            D_FONT_BOLD(8),      QRect(200, 301, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 305, 90, 20),            Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(200, 331, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 335, 90, 20),            Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("正常模式"),               D_FONT_BOLD(8),      QRect(200, 181-30, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("100V "),                  D_FONT_BOLD(6),      QRect(320, 185-30, 90, 20),             Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    // {QSTR("120A"),                  D_FONT_BOLD(6),      QRect(330, 280, 70, 15),             Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("逆变模式"),               D_FONT_BOLD(8),      QRect(200, 211, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("250V"),                  D_FONT_BOLD(6),      QRect(320, 215, 90, 20),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
    //  {QSTR("120A"),                  D_FONT_BOLD(6),      QRect(330, 310, 70, 15),             Qt::white,                Qt::blue,                  CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("停止状态"),               D_FONT_BOLD(8),      QRect(200, 241-60, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("停机"),                  D_FONT_BOLD(8),      QRect(310, 241-60, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("可复位故障"),             D_FONT_BOLD(8),      QRect(200, 271, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("可复位"),                 D_FONT_BOLD(6),      QRect(320, 275, 90, 20),             Qt::white,               Qt::darkRed,      CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),            D_FONT_BOLD(8),      QRect(200, 301-90, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("过载"),                      D_FONT_BOLD(8),      QRect(320, 305-90, 90, 20),            Qt::black,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(200, 331-90, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 335-90, 90, 20),            Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示SIV输出电压"),     D_FONT_BOLD(8),      QRect(421, 181-30, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {QSTR("牵引系统"),               D_FONT_BOLD(8),      QRect( 41, 302-30, 158,  110),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("状态"),                  D_FONT_BOLD(8),      QRect( 90, 332,  60,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    //{QSTR("未工作"),                 D_FONT_BOLD(8),      QRect(201,  361, 108,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("正常"),                   D_FONT_BOLD(8),      QRect(201, 271, 108,  28),         Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("牵引切除"),               D_FONT_BOLD(8),      QRect(201, 301, 108,   28),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("牵引锁闭"),               D_FONT_BOLD(8),      QRect(201, 451, 108,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 331, 108,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("发生主要故障"),            D_FONT_BOLD(8),      QRect(201, 361, 108,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("32A"),                 D_FONT_BOLD(8),      QRect(320, 275,  90,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 305,  90,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_RUNHELP2_ICON1 },
    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 455,  90,  20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_RUNHELP2_ICON2 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 335,  90,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 365,  90,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE        },

    //{QSTR("电流值为电机平均电流(0~2500A)"),     D_FONT_BOLD(8),      QRect(421, 391, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示电机电流有效值"),     D_FONT_BOLD(8),      QRect(421, 271, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
     {QSTR("VVVF已切除"),     D_FONT_BOLD(8),      QRect(421, 301, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //{QSTR("三次隔离导致锁闭"),        D_FONT_BOLD(8),      QRect(421, 451, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("空气制动"),               D_FONT_BOLD(8),      QRect(50, 425, 150, 145),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("施加"),               D_FONT_BOLD(8),      QRect(200, 391, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("(P)"),                  D_FONT_BOLD(6),      QRect(320, 395, 90, 20),             Qt::white,                Qt::darkRed,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("缓解"),               D_FONT_BOLD(8),      QRect(200, 421, 110, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(320, 425, 90, 20),            Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),            D_FONT_BOLD(8),      QRect(200, 451, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(" "),                      D_FONT_BOLD(8),      QRect(320, 455, 90, 20),            Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(200, 481, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 485, 90, 20),            Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("未工作"),               D_FONT_BOLD(8),      QRect(200, 511, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 515, 90, 20),            Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("停放制动"),               D_FONT_BOLD(8),      QRect( 41, 285, 158,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("缓解"),                   D_FONT_BOLD(8),      QRect(201, 271, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("施加"),                   D_FONT_BOLD(8),      QRect(201, 301, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 275,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("(P)"),                   D_FONT_BOLD(8),      QRect(320, 305,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },


//    {QSTR("乘客报警"),                D_FONT_BOLD(8),      QRect( 41, 345, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("乘客报警"),                D_FONT_BOLD(8),      QRect(201, 345, 108,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//     {QSTR("warning.PNG"),           D_FONT_BOLD(8),      QRect(320, 335,  80,  50),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP2_WARNING        },
//   // {QSTR("终点"),                   D_FONT_BOLD(8),      QRect(350, 360,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),      QRect(421, 345, 338,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("受电弓状态"),                 D_FONT_BOLD(8),      QRect( 41, 405, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("升弓"),              D_FONT_BOLD(8),      QRect(201, 391, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("降弓"),                D_FONT_BOLD(8),      QRect(201, 421, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("up.PNG"),                    D_FONT_BOLD(8),      QRect(321, 391,  90,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_UP        },
//    {QSTR("down.PNG"),                    D_FONT_BOLD(8),      QRect(320, 421,  90,  28),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP2_DOWN        },
//    {QSTR(""), D_FONT_BOLD(8),   QRect(421, 391, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),   D_FONT_BOLD(8),   QRect(421, 421, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



};
int g_RunHelp2RomLen = sizeof(g_PicRom_RunHelp2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp2Page,CPage)
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
END_MESSAGE_MAP()

CRunHelp2Page::CRunHelp2Page()
{
}

void CRunHelp2Page::OnUpdatePage()
{

}

void CRunHelp2Page::OnInitPage()
{
    //((CLabel *)GetDlgItem(ID_RUNHELP2_ICON2))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON1))->SetLabelState(6);
   // ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON3))->SetLabelState(6);

   // ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_WARNING))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_UP))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_DOWN))->ShowImage();
    //((CImageCtrl*)GetDlgItem(ID_RUNHELP2_NO_UP_DOWN))->ShowImage();
}

void CRunHelp2Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("下一页"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("下一页"));
#endif
this->InitPageHeader();//3.17
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {

        }

        void CRunHelp2Page::OnComBtn6Clk()
        {

        }
        void CRunHelp2Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_RUNHELP3);
        }
#else
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP3);
        }

#endif


