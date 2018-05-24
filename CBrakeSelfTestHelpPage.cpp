#include "CBrakeSelfTestHelpPage.h"

ROMDATA g_PicRom_BrakeSelfTestHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("制动自检帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 50,  80, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 110, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 145, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 180, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 215, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 250, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 285, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 320, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 355, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 390, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 425, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 460, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 490, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 520, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 550, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  80,   1, 410+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  80,   1, 410+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  80,   1, 410+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  80,   1, 410+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  80,   1, 411+60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  80, 150,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(200,  80, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示"),                   D_FONT_BOLD(8),      QRect(310,  80, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("备注"),                   D_FONT_BOLD(8),      QRect(420,  80, 330,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("AS压力"),             D_FONT_BOLD(8),      QRect( 50, 110, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("正常"),                   D_FONT_BOLD(8),      QRect(200, 110, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("6.1"),                      D_FONT_BOLD(8),      QRect(325, 118,  80,  20),           Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_IGNORE         },

//    {QSTR("5.5"),                      D_FONT_BOLD(8),      QRect(325, 153,  80,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("ASP过高或者过低都是错误"),  D_FONT_BOLD(8),      QRect(420, 145, 330,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("超出范围"),               D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("BSR过低"),                D_FONT_BOLD(8),      QRect( 50, 180, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("正常"),                   D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("过低"),                   D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
////    {QSTR("6.9"),                      D_FONT_BOLD(8),      QRect(325, 192,  80,  20),           Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_IGNORE         },

//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(325, 222,  80,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("对应转向架的BSR<6.5(bar)"),D_FONT_BOLD(8),      QRect(420, 217, 330,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("转向架隔离"),              D_FONT_BOLD(8),      QRect( 50, 250, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("正常"),                   D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("被隔离"),                 D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(325, 293,  80,  20),           Qt::white,                Qt::transparent,                  CONTROL_LABEL,          ID_BRAKESELFTESTHELP_LABEL_X         },
//    {QSTR("BSR<1(bar),对应转向架被隔离"), D_FONT_BOLD(8),  QRect(420, 285, 330,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("自检条件"),               D_FONT_BOLD(8),      QRect( 50, 320, 150,  70),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("满足条件"),               D_FONT_BOLD(8),      QRect(200, 320, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("不满足"),                 D_FONT_BOLD(8),      QRect(200, 355, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(325, 328,  80,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(325, 363,  80,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("自检结果"),               D_FONT_BOLD(8),      QRect( 50, 110, 150, 183),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("自检开始"),                 D_FONT_BOLD(8),      QRect(200, 110, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("开始响应"),                 D_FONT_BOLD(8),      QRect(310, 110, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("判定中"),                 D_FONT_BOLD(8),      QRect(200, 110+35, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("执行中"),                 D_FONT_BOLD(8),      QRect(310, 110+35, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("OK"),                    D_FONT_BOLD(8),      QRect(200, 145+35, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("OK"),                    D_FONT_BOLD(8),      QRect(325, 153+35, 80,  20),           Qt::white,                Qt::green,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("NG"),                    D_FONT_BOLD(8),      QRect(200, 180+35, 110,  35),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("NG"),                    D_FONT_BOLD(8),      QRect(325, 188+35, 80,  20),           Qt::white,                Qt::red,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("测试中断，没有通过测试"),   D_FONT_BOLD(8),      QRect(445, 180+35, 210,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("未开始自检"),                    D_FONT_BOLD(8),      QRect(200, 215+35, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(325, 223+35, 80,  20),           Qt::white,                Qt::white,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("转向架切除"),                 D_FONT_BOLD(8),      QRect( 51, 392, 148,  68),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("未隔离"),                  D_FONT_BOLD(8),      QRect(201, 392, 108,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("隔离"),                    D_FONT_BOLD(8),       QRect(201, 427, 108,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR(""),                       D_FONT_BOLD(8),       QRect(320, 430,  90,  25),           Qt::white,                Qt::black,                  CONTROL_LABEL,           ID_BRAKESELFTESTHELP_ICON3       },

    {QSTR("AS压力(bar)"),             D_FONT_BOLD(8),      QRect( 51, 286, 148, 103),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("压力有效"),             D_FONT_BOLD(8),      QRect(201, 286, 108, 33),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),               D_FONT_BOLD(8),      QRect(201, 321, 108, 33),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 356, 108, 33),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，正常"),       D_FONT_BOLD(8),      QRect(421, 286, 338, 33),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("空簧压力传感器故障"),       D_FONT_BOLD(8),      QRect(421, 321, 338, 33),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6.5"),                   D_FONT_BOLD(8),      QRect(311, 287, 108, 30),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 325,  90, 25),           Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 360,  90, 25),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("制动缸压力(bar)"),             D_FONT_BOLD(8),      QRect( 51, 460, 148, 90),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("压力有效"),             D_FONT_BOLD(8),      QRect(201, 460, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("压力无效"),               D_FONT_BOLD(8),      QRect(201, 491, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 521, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，正常"),       D_FONT_BOLD(8),      QRect(421, 461, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，但无效"),       D_FONT_BOLD(8),      QRect(421, 491, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6.5"),                   D_FONT_BOLD(8),      QRect(311, 461, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4.1"),                   D_FONT_BOLD(8),      QRect(320, 492,  90, 25),           Qt::white,                Qt::gray,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 522,  90, 25),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

};
int g_BrakeSelfTestHelpRomLen = sizeof(g_PicRom_BrakeSelfTestHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CBrakeSelfTestHelpPage,CPage)
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

CBrakeSelfTestHelpPage::CBrakeSelfTestHelpPage()
{
}

void CBrakeSelfTestHelpPage::OnUpdatePage()
{

}

void CBrakeSelfTestHelpPage::OnInitPage()
{
    //((CLabel *)GetDlgItem(ID_BRAKESELFTESTHELP_LABEL_X))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_BRAKESELFTESTHELP_ICON3))->SetLabelState(6);
}

void CBrakeSelfTestHelpPage::OnShowPage()
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
        void CBrakeSelfTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_BRAKESELFTEST);
        }

        void CBrakeSelfTestHelpPage::OnComBtn2Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn3Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn4Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn5Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn6Clk()
        {

        }
        void CBrakeSelfTestHelpPage::OnComBtn7Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CBrakeSelfTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_BRAKESELFTEST);
        }

        void CBrakeSelfTestHelpPage::OnComBtn2Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn3Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn4Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn5Clk()
        {

        }

        void CBrakeSelfTestHelpPage::OnComBtn6Clk()
        {

        }
#endif

