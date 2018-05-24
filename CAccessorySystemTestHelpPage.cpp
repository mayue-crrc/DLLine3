#include "CAccessorySystemTestHelpPage.h"

ROMDATA g_PicRom_AccessorySystemTestHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("辅助系统检查帮助"))

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 50,  60, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 100, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 140, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 180, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 220, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 260, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 340, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(200, 380, 500,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 420, 650,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  60,   1, 280),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60,   1, 280),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(300,  60,   1, 280),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60,   1, 280),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700,  60,   1, 280),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 52,  61, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(202,  61,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(302,  61,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(405,  61, 295,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("输出电压"),               D_FONT_BOLD(8),      QRect( 52, 120, 145,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("正常"),                  D_FONT_BOLD(8),      QRect(202, 101,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("停止状态"),               D_FONT_BOLD(8),      QRect(202, 141,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
  //  {QSTR("超出范围"),               D_FONT_BOLD(8),      QRect(202, 181,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("380V"),                  D_FONT_BOLD(8),      QRect(302, 101,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("OFF"),                   D_FONT_BOLD(8),      QRect(302, 141,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
  //  {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 190,  60,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示正常值"),             D_FONT_BOLD(8),      QRect(402, 101, 295,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("输出电流"),               D_FONT_BOLD(8),      QRect( 52, 200, 145,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("正常"),                  D_FONT_BOLD(8),      QRect(202, 181,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("停止状态"),               D_FONT_BOLD(8),      QRect(202, 221,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
  //  {QSTR("超出范围"),               D_FONT_BOLD(8),      QRect(202, 301,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("50A"),                   D_FONT_BOLD(8),      QRect(302, 181,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("OFF"),                   D_FONT_BOLD(8),      QRect(302, 221,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
  //  {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 310,  60,  20),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示正常值"),             D_FONT_BOLD(8),      QRect(402, 181, 295,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("        "),             D_FONT_BOLD(8),      QRect(402, 221, 295,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("可复位故障"),                D_FONT_BOLD(8),      QRect( 52, 280, 145,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("不存在"),                   D_FONT_BOLD(8),      QRect(202, 261,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("存在"),                   D_FONT_BOLD(8),      QRect(202, 301,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(302, 261,  95,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("可复位"),                   D_FONT_BOLD(8),      QRect(320, 305,  60,  30),           Qt::white,                Qt::darkRed,                  CONTROL_LABEL,           ID_IGNORE         },


};
int g_AccessorySystemTestHelpRomLen = sizeof(g_PicRom_AccessorySystemTestHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAccessorySystemTestHelpPage,CPage)
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

CAccessorySystemTestHelpPage::CAccessorySystemTestHelpPage()
{
}

void CAccessorySystemTestHelpPage::OnUpdatePage()
{

}

void CAccessorySystemTestHelpPage::OnInitPage()
{

}

void CAccessorySystemTestHelpPage::OnShowPage()
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
        void CAccessorySystemTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTEST);
        }

        void CAccessorySystemTestHelpPage::OnComBtn2Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn3Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn4Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn5Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn6Clk()
        {

        }
        void CAccessorySystemTestHelpPage::OnComBtn7Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CAccessorySystemTestHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTEST);
        }

        void CAccessorySystemTestHelpPage::OnComBtn2Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn3Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn4Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn5Clk()
        {

        }

        void CAccessorySystemTestHelpPage::OnComBtn6Clk()
        {

        }
#endif



