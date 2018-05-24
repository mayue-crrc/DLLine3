#include "CTractionSystemTestHelpPage.h"

ROMDATA g_PicRom_TractionSystemTestHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("牵引系统检查帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(8),      QRect( 50,  50, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect( 50,  80, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(200, 120, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(200, 160, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(200, 200, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(200, 240, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(50, 280, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect( 50, 320, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect( 50, 360, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect( 50, 510, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(8),      QRect( 50,  50,   1, 460),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(200,  50,   1, 310),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(300,  50,   1, 310),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(450,  50,   1, 310),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(8),      QRect(700,  50,   1, 460),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 52,  51, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(202,  51,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(302,  51, 145,  28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(455,  51, 245,  28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("测试条件"),               D_FONT_BOLD(8),      QRect( 52, 100, 145,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("满足"),                   D_FONT_BOLD(8),      QRect(202,  81,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("不满足"),                 D_FONT_BOLD(8),      QRect(202, 121,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320,  85, 110,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 125, 110,  30),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("牵引系统检查结果"),            D_FONT_BOLD(8),      QRect( 52, 80, 145,  198),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("牵引低压测试"),            D_FONT_BOLD(8),      QRect( 52, 240, 145,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("待机"),                   D_FONT_BOLD(8),      QRect(202, 161-80,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("判定中"),                 D_FONT_BOLD(8),      QRect(202, 201-80,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("OK"),                    D_FONT_BOLD(8),      QRect(202, 241-80,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("NG"),                    D_FONT_BOLD(8),      QRect(202, 281-80,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),                    D_FONT_BOLD(8),      QRect(202, 281-40,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("判定中"),          D_FONT_BOLD(8),      QRect(302, 202-80, 145,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("OK"),                    D_FONT_BOLD(8),      QRect(320, 245-80, 110,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("NG"),                    D_FONT_BOLD(8),      QRect(320, 285-80, 110,  30),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 285-40, 110,  30),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE         },

    //    {QSTR("数字表示当前测试到第几步"),                    D_FONT_BOLD(8),      QRect(460, 205, 230,  30),           Qt::white,                Qt::black,                  CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("测试中断，没有通过测试"),                    D_FONT_BOLD(8),      QRect(460, 285, 210,  30),           Qt::white,                Qt::black,                  CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("TCU版本"),               D_FONT_BOLD(8),      QRect( 52, 321, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("无"),                    D_FONT_BOLD(8),      QRect(202, 321,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("255.255.255"),           D_FONT_BOLD(8),      QRect(310, 321, 135,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("牵引系统测试简介"),                                          D_FONT_BOLD(8),         QRect(52,  361, 620, 38), Qt::white, Qt::black,      CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("低压测试的测试内容包括检查牵引系统高速断路器HSCB，充电序列KCCC，"),  D_FONT_BOLD(8),      QRect(52,  391, 620, 28), Qt::white, Qt::black,      CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("高压线接触器KIC的完好性"),                                     D_FONT_BOLD(8),        QRect(52,  421,220, 28), Qt::white,  Qt::black,     CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("高压测试首先完成所有低压测试项目，之后检测相电流传感器(ACMDR&S)，"),  D_FONT_BOLD(8),     QRect(52,  451, 620, 28), Qt::white, Qt::black,      CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("逆变器，线电流传感器(A-LCMD1&2),斩波IGBT是否发生故障"),           D_FONT_BOLD(8),       QRect(52,  481, 520, 28), Qt::white, Qt::black,     CONTROL_LABEL,           ID_IGNORE        },


};

int g_TractionSystemTestHelpRomLen = sizeof(g_PicRom_TractionSystemTestHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTractionSystemTestHelpPage,CPage)
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

CTractionSystemTestHelpPage::CTractionSystemTestHelpPage()
{
}

void CTractionSystemTestHelpPage::OnUpdatePage()
{

}

void CTractionSystemTestHelpPage::OnInitPage()
{


}

void CTractionSystemTestHelpPage::OnShowPage()
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
     this->InitPageHeader();//3.17
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CTractionSystemTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_TRACTIONSYSTEMTEST);
        }

        void CTractionSystemTestHelpPage::OnComBtn2Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn3Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn4Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn5Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn6Clk()
        {

        }
        void CTractionSystemTestHelpPage::OnComBtn7Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CTractionSystemTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_TRACTIONSYSTEMTEST);
        }

        void CTractionSystemTestHelpPage::OnComBtn2Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn3Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn4Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn5Clk()
        {

        }

        void CTractionSystemTestHelpPage::OnComBtn6Clk()
        {

        }
#endif


