#include "CCarStatus3HelpPage.h"

ROMDATA g_PicRom_CarStatus3Help[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("旁路状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50,  85, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 110, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 135, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 160, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 185, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 235, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 260, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 285, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 310, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 335, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 360, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 385, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 410, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 435, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 460, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 485, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 535, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //    {"",                            D_FONT_BOLD(6),      QRect(200, 460, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 485, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 50,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),                D_FONT_BOLD(8),      QRect( 50,  55, 150,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("开关状态"),                D_FONT_BOLD(8),      QRect(200,  55, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示"),                   D_FONT_BOLD(8),      QRect(310,  55, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("备注"),                   D_FONT_BOLD(8),      QRect(420,  55, 330,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("制动不缓解旁路"),       D_FONT_BOLD(8),      QRect( 50,  85, 150,  75),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200,  85, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 110, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(200, 135, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330,  88,  70,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 113,  70,  20),           Qt::white,                Qt::green,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 138,  70,  20),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""), D_FONT_BOLD(8), QRect(420, 85, 330, 50),   Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },


    {QSTR("停放制动旁路"),                 D_FONT_BOLD(8),      QRect( 50, 160, 150,  75),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 160, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 160+25, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(200, 185+25, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 138+25,  70,  20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 163+25,  70,  20),            Qt::white,                Qt::green,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 188+25,  70,  20),            Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""), D_FONT_BOLD(8), QRect(420, 135, 330,  50),   Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("门安全线旁路"),        D_FONT_BOLD(8),      QRect( 50, 135+100, 150,  75),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 135+100, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 160+100, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(200, 160+125, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 138+100,  70,  20),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 163+100,  70,  20),            Qt::white,                Qt::green,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 163+125,  70,  20),            Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""), D_FONT_BOLD(8), QRect(420, 135+50, 330,  50),Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("ATP切除"),       D_FONT_BOLD(8),      QRect( 50,  185+125, 150,  75),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 185+125, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 210+125, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(200, 210+150, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 188+125,  70,  20),            Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 213+125,  70,  20),            Qt::white,                Qt::green,                   CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 213+150,  70,  20),            Qt::white,                Qt::white,                   CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""), D_FONT_BOLD(8), QRect(420, 185+50, 330,  50), Qt::white,             Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("紧急制动环线旁路"),       D_FONT_BOLD(8),      QRect( 50,  185+125+75, 150,  75),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 185+125+75, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 210+125+75, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(200, 210+150+75, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 188+125+75,  70,  20),            Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 213+125+75,  70,  20),            Qt::white,                Qt::green,                   CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 213+150+75,  70,  20),            Qt::white,                Qt::white,                   CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""), D_FONT_BOLD(8), QRect(420, 185+50+75, 330,  50), Qt::white,             Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("总风压低旁路"),             D_FONT_BOLD(8),      QRect( 50, 235+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 235+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 260+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 238+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 263+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("此开关闭合时，总风低压被从牵引\n安全环路中旁路"), D_FONT_BOLD(8), QRect(420, 235+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("安全环路旁路"),             D_FONT_BOLD(8),      QRect( 50, 285+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 285+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 310+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 288+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 313+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("此开关闭合时，安全环路被从\n紧急制动环路中旁路"), D_FONT_BOLD(8), QRect(420, 285+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("ATC切除"),             D_FONT_BOLD(8),      QRect( 50, 335+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 335+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 360+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 338+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 363+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("此开关闭合时，信号系统被切除"), D_FONT_BOLD(8), QRect(420, 335+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("本车常用制动\n施加旁路"),                D_FONT_BOLD(8),      QRect( 50,  385+50, 150,  50),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200,  385+50, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 410+50, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330,  388+50,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 413+50,  70,  20),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("本车常用制动施加旁路开关监视"), D_FONT_BOLD(8), QRect(420, 385+50, 330, 50),   Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR("常用制动缓解\n旁路"),             D_FONT_BOLD(8),      QRect( 50, 435+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("断开"),                   D_FONT_BOLD(8),      QRect(200, 435+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("闭合"),                   D_FONT_BOLD(8),      QRect(200, 460+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 438+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(330, 463+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("此开关闭合时，常用制动缓解被从\n牵引安全环路中旁路"), D_FONT_BOLD(8), QRect(420, 435+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

};
int g_CarStatus3HelpRomLen = sizeof(g_PicRom_CarStatus3Help)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus3HelpPage,CPage)
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

CCarStatus3HelpPage::CCarStatus3HelpPage()
{
}

void CCarStatus3HelpPage::OnUpdatePage()
{

}

void CCarStatus3HelpPage::OnInitPage()
{

}

void CCarStatus3HelpPage::OnShowPage()
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
        void CCarStatus3HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }

        void CCarStatus3HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatus3HelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn8Clk()
        {

        }
#else
        void CCarStatus3HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }

        void CCarStatus3HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn6Clk()
        {

        }

#endif


