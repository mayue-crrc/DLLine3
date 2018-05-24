#include "CCarStatusHelpPage.h"

ROMDATA g_PicRom_CarStatusHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("牵引状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  85, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 120-9, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 155-18, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 163, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 190, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 220, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 250, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 280, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 310, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 340, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 370, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 400, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 430, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50, 462, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 489, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 516, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 543, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55,   1, 485+3),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  55,   1, 485+3),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  55,   1, 485+3),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  55,   1, 485+3),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  55,   1, 486+3),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  55, 150,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(200,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(310,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(420,  55, 330,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("高速断路器状态\nLB1线路断路器\nLB2充电断路器"),     D_FONT_BOLD(8),      QRect( 50,  85-20, 150, 140),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("断开"),                  D_FONT_BOLD(8),      QRect(200,  85, 110,  25),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("闭合"),                  D_FONT_BOLD(8),      QRect(200, 111, 110,  25),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(320, 114,  90,  20),            Qt::white,                Qt::green,               CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),                  D_FONT_BOLD(8),      QRect(200, 137, 110,  25),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(320, 140,  90,  20),            Qt::white,                Qt::red,               CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(200, 163, 110,  25),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(320, 166,  90,  20),            Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 470, 250,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("转矩命令"),       D_FONT_BOLD(8),      QRect( 50, 340, 150, 30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(200, 340, 110,  30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3.2%"),                     D_FONT_BOLD(8),      QRect(330, 340,  70,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，范围为(0%~100%)"),                     D_FONT_BOLD(8),      QRect(421, 340,  338,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },

    // {QSTR("备注：KIC,KCCC为牵引系统内部接触器，KIC为线路接触器，KCCC为预充电接触器"),            D_FONT_BOLD(8),      QRect(30, 470, 700,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("母线断路器"),       D_FONT_BOLD(8),      QRect( 50, 296-105, 150, 90),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("闭合"),                  D_FONT_BOLD(8),      QRect(200, 296-105, 110,  33),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(320, 298-100,  90,  20),            Qt::white,                Qt::green,              CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(421, 296-105,  338,  33),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("断开"),                  D_FONT_BOLD(8),      QRect(200, 296+35-105, 110,  33),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(320, 298+35-100,  90,  20),            Qt::white,                Qt::black,              CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(421, 296+35-105,  338,  33),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("通信异常"),                  D_FONT_BOLD(8),      QRect(200, 296+70-105, 110,  33),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(320, 298+70-100,  90,  20),            Qt::white,                Qt::white,              CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(421, 296+70-105,  338,  33),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("牵引系统"),               D_FONT_BOLD(8),      QRect( 50, 190, 150,  150),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("正常"),                   D_FONT_BOLD(8),      QRect(200, 190, 110, 30),         Qt::white,                Qt::transparent,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("牵引隔离"),               D_FONT_BOLD(8),      QRect(200, 220, 110,  30),         Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(200, 250, 110,  30),          Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("发生主要故障"),            D_FONT_BOLD(8),      QRect(200, 280, 110,  30),          Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("TCU牵引允许"),            D_FONT_BOLD(8),      QRect(200, 310, 110,  30),          Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("32A"),                 D_FONT_BOLD(8),      QRect(320, 195,  90,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 225,  90,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TCUHELP_ICON1 },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 255,  90,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 285,  90,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(8),      QRect(320, 315,  90,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("显示电机电流有效值"),     D_FONT_BOLD(8),      QRect(421, 190, 338,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("发生重大故障自动隔离"),     D_FONT_BOLD(8),      QRect(421, 220, 338,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("在1和4车厢显示，为CCU发给牵引的指令"),     D_FONT_BOLD(8),      QRect(421, 310, 338,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },


    {QSTR("实际制动力百分比"),       D_FONT_BOLD(8),      QRect( 50, 370, 150, 30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(200, 370, 110,  30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("40%"),                     D_FONT_BOLD(8),      QRect(330, 370,  70,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，范围为(0%~100%)"),                     D_FONT_BOLD(8),      QRect(421, 370,  338,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("载荷"),       D_FONT_BOLD(8),      QRect( 50, 191+70, 150, 33),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(200, 191+70, 110,  33),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("40%"),                     D_FONT_BOLD(8),      QRect(330, 191+70,  70,  33),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("显示实际值，范围为(0%~100%)"),                     D_FONT_BOLD(8),      QRect(421, 261,  338,  33),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("电机电流有效值"),       D_FONT_BOLD(8),      QRect( 50, 400, 150, 30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(200, 400, 110,  30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4A"),                     D_FONT_BOLD(8),      QRect(330, 400,  70,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，范围为(1~1000A)"),                     D_FONT_BOLD(8),      QRect(421, 400,  338,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("虑波电容电压"),       D_FONT_BOLD(8),      QRect( 50, 430, 150, 30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(200, 430, 110,  30),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("30V"),                     D_FONT_BOLD(8),      QRect(330, 430,  70,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，范围为(0~2500V)"),                     D_FONT_BOLD(8),      QRect(421, 430,  338,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },


//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(320, 191+248+81, 90,  20),            Qt::white,                Qt::white,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("BHB辅助触点"),       D_FONT_BOLD(8),      QRect( 50, 191+248+27, 150, 90),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("断开"),                  D_FONT_BOLD(8),      QRect(210, 191+248+27, 90,  20),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("闭合"),                  D_FONT_BOLD(8),      QRect(210, 191+248+27+27, 90,  20),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),                  D_FONT_BOLD(8),      QRect(210, 191+248+54+27, 90,  20),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("通信异常"),                  D_FONT_BOLD(8),      QRect(210, 191+248+81, 90,  20),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                  D_FONT_BOLD(8),      QRect(320, 191+248+27, 90,  20),            Qt::white,                Qt::black,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(320, 191+248+27+27, 90,  20),            Qt::white,                Qt::green,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(320, 191+248+54+27, 90,  20),            Qt::white,                Qt::white,        CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                  D_FONT_BOLD(8),      QRect(320, 191+248+81, 90,  20),            Qt::white,                Qt::white,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("仅在MP2车箱有此状态显示"),                     D_FONT_BOLD(8),      QRect(421, 489,  338,  30),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },



};
int g_CarStatusHelpRomLen = sizeof(g_PicRom_CarStatusHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatusHelpPage,CPage)
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

CCarStatusHelpPage::CCarStatusHelpPage()
{
}

void CCarStatusHelpPage::OnUpdatePage()
{

}

void CCarStatusHelpPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_TCUHELP_ICON1))->SetLabelState(6);
}

void CCarStatusHelpPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
    this->InitPageHeader();//3.17
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatusHelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }

#endif


