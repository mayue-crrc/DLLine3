#include "CRunHelp4Page.h"

ROMDATA g_PicRom_RunHelp4[] =
{
    D_COMMON_PAGE_HEADER(QSTR("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 460, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 130, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 170, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 210, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  400),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  400),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },

    {QSTR("逃生门状态"),                 D_FONT_BOLD(8),      QRect(41,  91, 158, 78),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("逃生门关闭"),                 D_FONT_BOLD(8),      QRect(201,  92, 108, 36),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("escape2.PNG"),                 D_FONT_BOLD(8),      QRect(331,  92, 68, 36),           Qt::black,                Qt::gray,           CONTROL_IMAGE,          ID_IGNORE         },
    {QSTR("逃生门打开"),                 D_FONT_BOLD(8),      QRect(201, 132, 108, 36),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("escape1.PNG"),                 D_FONT_BOLD(8),      QRect(331,  132, 68, 36),           Qt::black,                Qt::blue,           CONTROL_IMAGE,          ID_IGNORE         },

    {QSTR("乘客报警"),                D_FONT_BOLD(8),      QRect( 41, 172, 158,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("乘客报警"),                D_FONT_BOLD(8),      QRect(201, 172, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

     {QSTR("warning.PNG"),           D_FONT_BOLD(8),      QRect(330, 172,  68,  36),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP4_WARNING        },
    {QSTR("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),      QRect(421, 172, 338,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("被救援按钮"),                 D_FONT_BOLD(8),      QRect(60,  91+60, 108, 50),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("被救援无效"),                 D_FONT_BOLD(8),      QRect(201,  91+60, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("被救援无效"),                 D_FONT_BOLD(8),      QRect(311,  91+60, 108, 28),           Qt::black,                Qt::gray,           CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("被救援有效"),                 D_FONT_BOLD(8),      QRect(201, 121+60, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("被救援有效"),                 D_FONT_BOLD(8),      QRect(311,  121+60, 108, 28),           Qt::black,                Qt::blue,           CONTROL_LABEL,          ID_IGNORE         },
    
//    {QSTR("被救援按钮说明:"),             D_FONT_BOLD(7),      QRect(50,  155+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT1         },
//    {QSTR("正常情况下，牵引力大于10KN或80KN才缓解保持制动，按下“被救援”时，只要手柄在牵"),                 D_FONT_BOLD(7),      QRect(50,  185+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT2         },
//    {QSTR("引位，不管有无牵引力，都缓解保持制动。"),                 D_FONT_BOLD(7),      QRect(50,  215+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT3         },
//    {QSTR("在救援模式下，被救援车有两种方式缓解保持制动："),                 D_FONT_BOLD(7),      QRect(50,  245+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT4         },
//    {QSTR("（1）在激活端司机室，按下“断高速断路器”按钮，并按下显示屏上的“被救援”按钮，"),                 D_FONT_BOLD(7),      QRect(50,  275+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT5         },
//    {QSTR("     再将司控器手柄推到牵引位，即可缓解保持制动。"),                 D_FONT_BOLD(7),      QRect(50,  305+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT6         },
//    {QSTR("（2）在激活端司机室，将司机室电器柜内的“强迫缓解”旋钮放到“合”，并将司控器"),                 D_FONT_BOLD(7),      QRect(50,  335+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT7         },
//    {QSTR("     手柄推到惰行位，也可以缓解保持制动。"),                 D_FONT_BOLD(7),      QRect(50,  365+60, 700, 30),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_TEXT8         },


};
int g_RunHelp4RomLen = sizeof(g_PicRom_RunHelp4)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CRunHelp4Page,CPage)
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


CRunHelp4Page::CRunHelp4Page()
{
}


void CRunHelp4Page::OnUpdatePage()
{

}

void CRunHelp4Page::OnInitPage()
{
//    ((CLabel*)GetDlgItem(ID_TEXT1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT2))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT3))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT4))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT6))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT7))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(ID_TEXT8))->SetAlignment(Qt::AlignLeft);
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP4_WARNING))->ShowImage();
}

void CRunHelp4Page::OnShowPage()
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
        void CRunHelp4Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp4Page::OnComBtn2Clk()
        {

        }

        void CRunHelp4Page::OnComBtn3Clk()
        {

        }

        void CRunHelp4Page::OnComBtn4Clk()
        {

        }

        void CRunHelp4Page::OnComBtn5Clk()
        {

        }

        void CRunHelp4Page::OnComBtn6Clk()
        {

        }
        void CRunHelp4Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

        void CRunHelp4Page::OnComBtn8Clk()
        {

        }
#else
        void CRunHelp4Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp4Page::OnComBtn2Clk()
        {

        }

        void CRunHelp4Page::OnComBtn3Clk()
        {

        }

        void CRunHelp4Page::OnComBtn4Clk()
        {

        }

        void CRunHelp4Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

        void CRunHelp4Page::OnComBtn6Clk()
        {
        }

#endif

