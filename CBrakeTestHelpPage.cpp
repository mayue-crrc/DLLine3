#include "CBrakeTestHelpPage.h"

ROMDATA g_PicRom_BrakeTestHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("制动试验帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 50,  80, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 110, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 145, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 180, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 215, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 250, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 285, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 320, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  80,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  80,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  80,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  80,   1, 240),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  80,   1, 241),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  80, 150,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(200,  80, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(310,  80, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(420,  80, 330,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("PWM指令量"),             D_FONT_BOLD(8),      QRect( 50, 110, 150,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("正常"),                  D_FONT_BOLD(8),      QRect(200, 110, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("24%"),                   D_FONT_BOLD(8),      QRect(310, 110, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("pwm范围为0%-100%"), D_FONT_BOLD(8),          QRect(450, 110, 200,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },


    {QSTR("测定项目"),               D_FONT_BOLD(8),      QRect( 50, 145, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("待机及完成"),             D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("测定中"),                 D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("B2"),                   D_FONT_BOLD(8),      QRect(325, 188,  80,  20),           Qt::white,                Qt::blue,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("制动缸压力结果"),          D_FONT_BOLD(8),      QRect( 50, 215, 150, 105),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("未实施"),                 D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("OK"),                    D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(330, 253,  70,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(330, 282,  70,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(330, 253,   1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(365, 253,   1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 253,   1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {QSTR("8    9"),                D_FONT_BOLD(8),      QRect(325, 257,  80,  20),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示两个转向架制动缸压力值"), D_FONT_BOLD(8),      QRect(450, 250, 260,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("NG"),                    D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(330, 288,  70,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(330, 317,  70,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(330, 288,   1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 288,   1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {QSTR("17  17"),                D_FONT_BOLD(8),      QRect(331, 289,  69,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(365, 288,   1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

};
int g_BrakeTestHelpRomLen = sizeof(g_PicRom_BrakeTestHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CBrakeTestHelpPage,CPage)
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

CBrakeTestHelpPage::CBrakeTestHelpPage()
{
}

void CBrakeTestHelpPage::OnUpdatePage()
{

}

void CBrakeTestHelpPage::OnInitPage()
{

}

void CBrakeTestHelpPage::OnShowPage()
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
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
#endif
     this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CBrakeTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_BRAKETEST);
        }

        void CBrakeTestHelpPage::OnComBtn2Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn3Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn4Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn5Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn6Clk()
        {

        }
        void CBrakeTestHelpPage::OnComBtn7Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CBrakeTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_BRAKETEST);
        }

        void CBrakeTestHelpPage::OnComBtn2Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn3Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn4Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn5Clk()
        {

        }

        void CBrakeTestHelpPage::OnComBtn6Clk()
        {

        }
#endif



