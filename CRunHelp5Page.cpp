#include "CRunHelp5Page.h"


ROMDATA g_PicRom_RunHelp5[] =
{
    D_COMMON_PAGE_HEADER(QSTR("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect(40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40,  90, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 150, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 180, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(40, 120+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 240, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(40, 210, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 270, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 300, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 330, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 360-60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(40, 570, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200,  120, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 150, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 180, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 270, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 330, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),              D_FONT_BOLD(8),      QRect( 41, 61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示条件"),              D_FONT_BOLD(8),      QRect(201, 61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示"),                 D_FONT_BOLD(8),      QRect(311, 61, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("备注"),                 D_FONT_BOLD(8),      QRect(421, 61, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("保持制动\n停放制动"),               D_FONT_BOLD(8),      QRect( 41, 75, 158,  60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("缓解"),                   D_FONT_BOLD(8),      QRect(201, 61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("施加"),                   D_FONT_BOLD(8),      QRect(201, 91, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 65,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("(P)"),                   D_FONT_BOLD(8),      QRect(320, 95,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(201, 121, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 125,  90,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },




    {QSTR("紧急制动按钮状态"),     D_FONT_BOLD(8),      QRect(50, 105, 150, 30),              Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("未按下"),             D_FONT_BOLD(8),     QRect(200, 90, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("按下"),               D_FONT_BOLD(8),     QRect(200, 120, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect(330, 125, 70, 20),             Qt::black,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {"EmgyBrkButnDwn_Icon.PNG",         D_DEFAULT_FONT,      QRect(345, 125, 40, 20),             Qt::black,                Qt::black,        CONTROL_IMAGE,           ID_IGNORE         },

{QSTR("当紧急制动按钮按下时显示，平时隐藏"),               D_FONT_BOLD(8),     QRect(440, 120, 300, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

};

int g_RunHelp5RomLen = sizeof(g_PicRom_RunHelp5)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp5Page,CPage)
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

CRunHelp5Page::CRunHelp5Page()
{
}


void CRunHelp5Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
#endif
    this->InitPageHeader();//3.17
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp5Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp5Page::OnComBtn2Clk()
        {

        }

        void CRunHelp5Page::OnComBtn3Clk()
        {

        }

        void CRunHelp5Page::OnComBtn4Clk()
        {

        }

        void CRunHelp5Page::OnComBtn5Clk()
        {

        }

        void CRunHelp5Page::OnComBtn6Clk()
        {

        }
        void CRunHelp5Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

        void CRunHelp5Page::OnComBtn8Clk()
        {
//         ChangePage();
        }
#else
        void CRunHelp5Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp5Page::OnComBtn2Clk()
        {

        }

        void CRunHelp5Page::OnComBtn3Clk()
        {

        }

        void CRunHelp5Page::OnComBtn4Clk()
        {

        }

        void CRunHelp5Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

        void CRunHelp5Page::OnComBtn6Clk()
        {
//            ChangePage();
        }

#endif
