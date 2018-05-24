#include "CAW0Setting.h"

CAW0Setting::CAW0Setting()
{
}


ROMDATA g_PicRom_AW0Setting[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW(QSTR("AW0校正") )
    {"",                       D_FONT_BOLD(5),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBAW0SETTING_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBAW0SETTING_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBAW0SETTING_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QSTR("AW0校正"))
    D_COMMON_PAGE_BUTTON_BAR
    {QSTR("通信中断"),               D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),          Qt::red,                  Qt::white,                CONTROL_LABEL,          ID_PIBMAIN_COMMINTERRUPT          },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBMAIN_ICON_WARNNING          },
    {"",                            D_FONT_BOLD(5),      QRect(180, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBMAIN_TRAIN                  },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_RIGHT            },
    {"LEFT",                        D_FONT_BOLD(6),      QRect( 60, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_LEFT             },

#endif


    {"",                            D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 250, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 290, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 10, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(175, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(250, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(325, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(475, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(625, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 210,   1,  120),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("车号"),                   D_FONT_BOLD(6),      QRect( 10, 210,  90,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),                     D_FONT_BOLD(6),      QRect(100, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                     D_FONT_BOLD(6),      QRect(175, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                     D_FONT_BOLD(6),      QRect(250, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                     D_FONT_BOLD(6),      QRect(325, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("5"),                     D_FONT_BOLD(6),      QRect(400, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6"),                     D_FONT_BOLD(6),      QRect(475, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("7"),                     D_FONT_BOLD(6),      QRect(550, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("8"),                     D_FONT_BOLD(6),      QRect(625, 210,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("出厂AWO值"),              D_FONT_BOLD(6),      QRect( 10, 250,  90,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(100, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(175, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(250, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(325, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(400, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(475, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(550, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.2"),                     D_FONT_BOLD(6),      QRect(625, 250,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("制动计算AWO"),            D_FONT_BOLD(6),      QRect( 10, 290,  90,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(100, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(175, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(250, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(325, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(400, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(475, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(550, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3"),                     D_FONT_BOLD(6),      QRect(625, 290,  75,  40),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("请确认车辆处于平直轨、空载、总风压力正常。"), D_FONT_BOLD(8),QRect(30,  375, 400, 30),      Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("点击【替换】按钮，用制动测得的AWO的值替换出厂的AW0值。"), D_FONT_BOLD(8),QRect(30,  400, 510, 30),      Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("替  换"),                D_FONT_BOLD(8),QRect(25,  450, 100,  38),     Qt::black,               Qt::gray,                 CONTROL_BUTTON,          ID_PIBAW0SETTING_BUTTON_REPLACE    },

};
int g_AW0SettingRomLen = sizeof(g_PicRom_AW0Setting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAW0Setting,CPage)
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
        ON_BTNCLK(ID_PIBAW0SETTING_BUTTON_REPLACE, OnReplaceBtnClk)
   //     ON_BTNCLK(ID_PIBMAIN_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)

END_MESSAGE_MAP()

void CAW0Setting::OnUpdatePage()
{

    updateTrain(ID_PIBAW0SETTING_TRAIN);
    updateArrow(ID_PIBAW0SETTING_ARROW_LEFT,ID_PIBAW0SETTING_ARROW_RIGHT);

    updateErrorLine(ID_PIBAW0SETTING_TRAIN);

#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBMAIN_COMMINTERRUPT);

    updateFault(ID_PIBMAIN_ICON_WARNNING);

#endif
}

void CAW0Setting::OnInitPage()
{

}

void CAW0Setting::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));

#endif
    this->InitPageHeader();
}


#ifdef PAGE_BUTTON_BAR_NEW
void CAW0Setting::OnComBtn1Clk()
{

}

void CAW0Setting::OnComBtn2Clk()
{

}

void CAW0Setting::OnComBtn3Clk()
{

}

void CAW0Setting::OnComBtn4Clk()
{

}

void CAW0Setting::OnComBtn5Clk()
{

}

void CAW0Setting::OnComBtn6Clk()
{

}
void CAW0Setting::OnComBtn7Clk()
{
    //ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP);
}
void CAW0Setting::OnComBtn8Clk()
{
//    m_bReset = false;
//    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮
//    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CAW0Setting::OnComBtn1Clk()
{

}

void CAW0Setting::OnComBtn2Clk()
{

}

void CAW0Setting::OnComBtn3Clk()
{

}

void CAW0Setting::OnComBtn4Clk()
{

}

void CAW0Setting::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP);
}

void CAW0Setting::OnComBtn6Clk()
{
    m_bReset = false;
    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif

void CAW0Setting::OnReplaceBtnClk()
{

}
