#include "CCarStatus4HelpPage.h"

ROMDATA g_PicRom_CarStatus4Help[] =
{
    D_COMMON_PAGE_HEADER(QSTR("制动帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  84, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40,  120, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40, 330, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 304, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 420, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 360, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 480, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //{"",                            D_FONT_BOLD(6),      QRect(200, 90, 220,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 114, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 114+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 139+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 165+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 192+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 218+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 247+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 274+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 330, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//   {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 360, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },

    {QSTR("制动切除请求"),             D_FONT_BOLD(8),      QRect( 41, 85, 158, 83),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("有电制动切除请求"),             D_FONT_BOLD(8),      QRect(201, 87, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("无电制动切除请求"),               D_FONT_BOLD(8),      QRect(201, 87+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("传输异常"),               D_FONT_BOLD(8),      QRect(201, 87+55, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),       D_FONT_BOLD(8),      QRect(421, 85, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("制动缸压力无效"),       D_FONT_BOLD(8),      QRect(421, 85, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("实际制动力满足所需"),       D_FONT_BOLD(8),      QRect(421, 301+30, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("实际制动力小于所需"),       D_FONT_BOLD(8),      QRect(421, 331+30, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 90, 90, 20),           Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 87+30,  90, 20),           Qt::white,                Qt::transparent,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 87+60,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("制动缸压力"),             D_FONT_BOLD(8),      QRect( 41, 200, 158, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("压力有效"),             D_FONT_BOLD(8),      QRect(201, 171, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("压力无效"),               D_FONT_BOLD(8),      QRect(201, 196, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 223, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，正常"),       D_FONT_BOLD(8),      QRect(421, 171, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，但无效"),       D_FONT_BOLD(8),      QRect(421, 199, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6.5 bar"),                   D_FONT_BOLD(8),      QRect(311, 171, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4.1 bar"),                   D_FONT_BOLD(8),      QRect(320, 200,  90, 20),           Qt::white,                Qt::gray,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 227,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("总风压力"),             D_FONT_BOLD(8),      QRect( 41, 223+30, 158, 120),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("总风压力正常"),             D_FONT_BOLD(8),      QRect(201, 223+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("总风压力欠压"),               D_FONT_BOLD(8),      QRect(201, 223+60, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("总风压力无效"),               D_FONT_BOLD(8),      QRect(201, 223+90-5, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 223+120-10, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("65 bar"),                   D_FONT_BOLD(8),      QRect(311, 223+30, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("41 bar"),                   D_FONT_BOLD(8),      QRect(320, 223+60,  90, 20),           Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("32 bar"),                      D_FONT_BOLD(8),      QRect(320, 223+90-5,  90, 20),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 223+120-10,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，正常"),                   D_FONT_BOLD(8),      QRect(421, 223+30, 338, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，但欠压"),                   D_FONT_BOLD(8),      QRect(421, 223+60,  338, 20),           Qt::white,                Qt::transparent,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，但无效"),                      D_FONT_BOLD(8),      QRect(421, 223+90-5,  338, 20),           Qt::white,                Qt::transparent,                 CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("整车制动切除\n保持制动切除"),             D_FONT_BOLD(8),      QRect( 41, 343, 158, 120),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("整车制动切除"),             D_FONT_BOLD(8),      QRect(201, 366, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("整车制动未切除"),               D_FONT_BOLD(8),      QRect(201, 393, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 423, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 366, 90, 20),           Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 393,  90, 20),           Qt::white,                Qt::black,                   CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 425,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("整车制动切除时说明无此状态，\n保持制动切除时表明司机室未激活或者无此操作"),               D_FONT_BOLD(5),      QRect(421, 223+60+110, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("保持制动\n停放制动"),               D_FONT_BOLD(8),      QRect( 41, 363, 158,  115),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("缓解"),                   D_FONT_BOLD(8),      QRect(201, 361, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("施加"),                   D_FONT_BOLD(8),      QRect(201, 391, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 365,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("(P)"),                   D_FONT_BOLD(8),      QRect(320, 395,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(201, 451, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 455,  90,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("隔离"),               D_FONT_BOLD(8),      QRect(201, 421, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(311, 421, 108,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(320, 425,  90,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNHELP_ICON4         },


    {QSTR("零速信号"),             D_FONT_BOLD(8),      QRect( 41, 483, 158, 55),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("零速信号"),             D_FONT_BOLD(8),      QRect(201, 366+90, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("零速信号有效"),               D_FONT_BOLD(8),      QRect(201, 393+90, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("零速信号无效"),               D_FONT_BOLD(8),      QRect(201, 423+90, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 366+90, 90, 20),           Qt::black,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 393+90,  90, 20),           Qt::black,                Qt::green,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 425+90,  90, 20),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },

};
int g_CarStatus4HelpRomLen = sizeof(g_PicRom_CarStatus4Help)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus4HelpPage,CPage)
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

CCarStatus4HelpPage::CCarStatus4HelpPage()
{
}

void CCarStatus4HelpPage::OnUpdatePage()
{

}

void CCarStatus4HelpPage::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT1))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT2))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT3))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT4))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON3))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON4))->SetLabelState(6);

}

void CCarStatus4HelpPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
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
        void CCarStatus4HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS4);
        }

        void CCarStatus4HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatus4HelpPage::OnComBtn7Clk()
        {
        //ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CCarStatus4HelpPage::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_CARSTATUS4HELP1);
        }
#else
        void CCarStatus4HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus4HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus4HelpPage::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CCarStatus4HelpPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS4HELP1);
        }

#endif


