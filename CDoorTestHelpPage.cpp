#include "CDoorTestHelpPage.h"

ROMDATA g_PicRom_DoorTestHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("门开闭检查帮助"))

    {"",                            D_FONT_BOLD(6),      QRect( 50, 70, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 110, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 190, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 230, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 270, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 310, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 350, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 430, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 470, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 510, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50, 70,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 70,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(300, 70,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 70,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 70,   1, 440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 52, 71, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(202, 71,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(302, 71,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(405, 71, 295,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("指令"),                  D_FONT_BOLD(8),      QRect( 52, 132, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("闭指令"),                D_FONT_BOLD(8),      QRect(202, 111,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("开指令"),                D_FONT_BOLD(8),      QRect(202, 151,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(305, 115,  90,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(305, 155,  90,  30),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("1侧门\n\n2侧门"),                  D_FONT_BOLD(8),      QRect( 52, 245, 145, 60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("关好"),                  D_FONT_BOLD(8),      QRect(202, 191,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("门开"),                D_FONT_BOLD(8),       QRect(202, 231,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("动作中"),                   D_FONT_BOLD(8),       QRect(202, 271,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("隔离"),                   D_FONT_BOLD(8),       QRect(202, 311,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急解锁"),                   D_FONT_BOLD(8),       QRect(202, 351,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("有障碍物"),                   D_FONT_BOLD(8),       QRect(202, 391,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("发生故障"),                   D_FONT_BOLD(8),       QRect(202, 431,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("传输异常"),                   D_FONT_BOLD(8),       QRect(202, 471,  95,  38),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 198,  20,  25),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 198,  20,  25),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 198,  20,  25),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 198,  20,  25),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 238,  20,  25),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 238,  20,  25),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 238,  20,  25),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 238,  20,  25),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 278,  20,  25),           Qt::white,                Qt::cyan,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 278,  20,  25),           Qt::white,                Qt::cyan,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 278,  20,  25),           Qt::white,                Qt::cyan,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 278,  20,  25),           Qt::white,                Qt::cyan,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 318,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_DOORTEST_LABEL1   },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 318,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_DOORTEST_LABEL2   },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 318,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_DOORTEST_LABEL3   },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 318,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_DOORTEST_LABEL4   },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 358,  20,  25),           Qt::white,                Qt::blue,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 358,  20,  25),           Qt::white,                Qt::blue,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 358,  20,  25),           Qt::white,                Qt::blue,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 358,  20,  25),           Qt::white,                Qt::blue,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 398,  20,  25),           Qt::white,                QColor(255,0,255),                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 398,  20,  25),           Qt::white,                QColor(255,0,255),                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 398,  20,  25),           Qt::white,                QColor(255,0,255),                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 398,  20,  25),           Qt::white,                QColor(255,0,255),                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 438,  20,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 438,  20,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 438,  20,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 438,  20,  25),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                D_FONT_BOLD(8),      QRect(308, 478,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(330, 478,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(352, 478,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(374, 478,  20,  25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_DoorTestHelpRomLen = sizeof(g_PicRom_DoorTestHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDoorTestHelpPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CDoorTestHelpPage::CDoorTestHelpPage()
{
}

void CDoorTestHelpPage::OnUpdatePage()
{

}

void CDoorTestHelpPage::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_DOORTEST_LABEL1))->SetLabelState(3);
    ((CLabel*)GetDlgItem(ID_DOORTEST_LABEL2))->SetLabelState(3);
    ((CLabel*)GetDlgItem(ID_DOORTEST_LABEL3))->SetLabelState(3);
    ((CLabel*)GetDlgItem(ID_DOORTEST_LABEL4))->SetLabelState(3);
}

void CDoorTestHelpPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
}

void CDoorTestHelpPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DOORTEST);
}

void CDoorTestHelpPage::OnComBtn2Clk()
{

}

void CDoorTestHelpPage::OnComBtn3Clk()
{

}

void CDoorTestHelpPage::OnComBtn4Clk()
{

}

void CDoorTestHelpPage::OnComBtn5Clk()
{

}

void CDoorTestHelpPage::OnComBtn6Clk()
{

}


