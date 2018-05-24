#include "CBrakeSelfTestPage.h"
#include <qdebug.h>

ROMDATA g_PicRom_BrakeSelfTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR(" 制动\n自检") )
    {"",                          D_FONT_BOLD(10),      QRect(100, 64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBCAR2BCU_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBST_RIGHTARROW                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBST_LEFTARROW                 },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR("制动自检"))
    D_COMMON_PAGE_BUTTON_BAR

    {"",                           D_FONT_BOLD(5),      QRect(178,  100, 600,  60),          Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBCAR2BCU_TRAIN                 },
    {"RIGHT",                      D_FONT_BOLD(6),      QRect(700,  118,  45,  20),          Qt::white,                Qt::white,               CONTROL_ARROW,           ID_PIBBST_RIGHTARROW                },
    {"LEFT",                       D_FONT_BOLD(6),      QRect(58,  118,  45,  20),          Qt::white,                Qt::white,               CONTROL_ARROW,           ID_PIBBST_LEFTARROW                 },


#endif



    {"",                           D_FONT_BOLD(6),      QRect(10,  170+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  200+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  230+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  260+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  290+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  320+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  350+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  380+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                           D_FONT_BOLD(6),      QRect(10,  180, 1,  180+30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(100,  180, 1,  180+30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(175,  210, 1,  60),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(175,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(213,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(250,  180, 1,  180+30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(325,  210, 1,  60),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(325,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(363,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(400,  180, 1,  180+30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(475,  210, 1,  60),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(475,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(513,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(550,  180, 1,  180+30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(625,  210, 1,  60),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(625,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                           D_FONT_BOLD(6),      QRect(663,  210, 1,  90),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(700,  180, 1,  181+30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("车  号"),                D_FONT_BOLD(8),      QRect(11,  180, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),                    D_FONT_BOLD(8),      QRect(101,  180,  140, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("2"),                    D_FONT_BOLD(8),      QRect(251,  180,  140, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("3"),                    D_FONT_BOLD(8),      QRect(401,  180,  140, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("4"),                    D_FONT_BOLD(8),      QRect(551,  180,  140, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("5"),                    D_FONT_BOLD(8),      QRect(403,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("6"),                    D_FONT_BOLD(8),      QRect(478,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("7"),                    D_FONT_BOLD(8),      QRect(553,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("8"),                    D_FONT_BOLD(8),      QRect(628,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("AS压力(bar)"),            D_FONT_BOLD(8),      QRect(11,  210, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("转向架切除"),               D_FONT_BOLD(8),      QRect(11,  240, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("制动缸压力(bar)"),            D_FONT_BOLD(5),      QRect(11,  270, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("总风压力(bar)"),              D_FONT_BOLD(8),      QRect(11,  300, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("制动自检"),              D_FONT_BOLD(8),      QRect(11,  330, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF        },
    {QSTR("防滑自检"),              D_FONT_BOLD(8),      QRect(11,  360, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ANTISKIDTESTSELF     },


    {QSTR(""),                     D_FONT_BOLD(8),      QRect(102,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE1         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(177,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE2         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(252,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE3         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(327,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE4         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(402,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE5         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(477,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE6         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(552,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE7         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(627,  213,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ASPRESSURE8         },


//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(102,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW1             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(177,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW2             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(252,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW3             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(327,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW4             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(402,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW5             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(477,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW6             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(552,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW7             },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(627,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BSRLOW8             },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(105, 274,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1BCUPRESSURE1    },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(255, 274,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2BCUPRESSURE1     },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(405, 274,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3BCUPRESSURE1     },
    {QSTR("180"),                    D_FONT_BOLD(10),      QRect(555, 274,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4BCUPRESSURE1     },

    {QSTR(""),                    D_FONT_BOLD(10),      QRect(105, 304,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CRA1MAINAIRPRESS    },
    {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(255, 304,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
    {QSTR("-- --"),                    D_FONT_BOLD(10),      QRect(405, 304,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
    {QSTR(""),                    D_FONT_BOLD(10),      QRect(555, 304,  140,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CRA4MAINAIRPRESS     },

    {QSTR(""),                     D_FONT_BOLD(8),      QRect(102,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE1       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(177,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE2       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(252,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE3       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(327,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE4       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(402,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE6       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(477,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE5       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(552,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE8       },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(627,  241,  70, 29),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE7       },

    {QSTR(""),                     D_FONT_BOLD(8),      QRect(105,  333,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF1      },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(255,  333,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF2      },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(405,  333,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF3      },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(555,  333,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF4      },

    {QSTR(""),                     D_FONT_BOLD(8),      QRect(105,  363,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ANTISKIDTESTSELF1      },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(255,  363,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ANTISKIDTESTSELF2      },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(405,  363,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ANTISKIDTESTSELF3      },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(555,  363,  140, 25),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_ANTISKIDTESTSELF4      },

    {QSTR(" 自检条件：(1)总风压力>7bar;(2)手柄置于快速制动位;(3)车速为0。"), D_FONT_BOLD(8), QRect( 50, 370+25, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT3        },
    {QSTR(" 按下[开始]键，进行制动自检。"), D_FONT_BOLD(8), QRect( 50, 370+60, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT1        },
    {QSTR("【注意】自检进行中请保持本页面，切换到其它页面会终止自检。"), D_FONT_BOLD(8), QRect( 50, 405+60, 550, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT2        },
    {QSTR("开   始"),              D_FONT_BOLD(8),      QRect( 25, 460+50, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_TESTSTART         },
    //{QSTR("终   止"),              D_FONT_BOLD(8),      QRect(155, 460+30, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_TESTSTOP          },

};
int g_BrakeSelfTestRomLen = sizeof(g_PicRom_BrakeSelfTest)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CBrakeSelfTestPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()
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
        ON_BTNCLK(ID_PIBBST_BUTTON_TESTSTART,OnBCU_Selftest_StartClk)
        //ON_BTNCLK(ID_PIBBST_BUTTON_TESTSTOP,OnBCU_Selftest_StopClk)
        //ON_BTNCLK(ID_PIBBST_LABEL_BRAKETESTSELF,OnBrakeselftestClk)
        //ON_BTNCLK(ID_PIBBST_LABEL_ANTISKIDTESTSELF,OnAntiskidselftestClk)

END_MESSAGE_MAP()

CBrakeSelfTestPage::CBrakeSelfTestPage()
{
    //m_bStart = false;
}

void CBrakeSelfTestPage::OnUpdatePage()
{
    UpdateBCU_selftest_test();
    UpdateBCU_selftest_LabelColor();
    //UpdateBCU_selftest_ConColor();
    updateTrain(ID_PIBCAR2BCU_TRAIN);
    updateArrow(ID_PIBBST_LEFTARROW,ID_PIBBST_RIGHTARROW);

    updateErrorLine(ID_PIBCAR2BCU_TRAIN);//3.5
    UpdateBCUPressure();
    UpdateMainAirPresstest();
}

void CBrakeSelfTestPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->m_bAutoUpState = false;
    ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT2))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT3))->SetAlignment(Qt::AlignLeft);
}

void CBrakeSelfTestPage::OnShowPage()
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
    //SELFTEST_select_color=0;
    //OnBrakeselftestClk();
    //m_bBrakeStart=false;
    //m_bAntiskidStart=false;
    m_bStart = false;
    this->InitPageHeader();
}

void CBrakeSelfTestPage::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_BRAKESELFTESTHELP)
    {
        OnBCU_Selftest_StopClk();
    }
}

#ifdef PAGE_BUTTON_BAR_NEW
void CBrakeSelfTestPage::OnComBtn1Clk()
{

}

void CBrakeSelfTestPage::OnComBtn2Clk()
{

}

void CBrakeSelfTestPage::OnComBtn3Clk()
{

}

void CBrakeSelfTestPage::OnComBtn4Clk()
{

}

void CBrakeSelfTestPage::OnComBtn5Clk()
{

}

void CBrakeSelfTestPage::OnComBtn6Clk()
{

}
void CBrakeSelfTestPage::OnComBtn7Clk()
{
    //BitSet( HMI_send_data38, 1, 0 );//BCU自检请求
    m_bStart = false;
    //m_bBrakeStart=false;
    //m_bAntiskidStart=false;
    ChangePage(PAGE_INDEX_BRAKESELFTESTHELP);
    OnBCU_Selftest_StopClk();
}
void CBrakeSelfTestPage::OnComBtn8Clk()
{
    OnBCU_Selftest_StopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CBrakeSelfTestPage::OnComBtn1Clk()
{

}

void CBrakeSelfTestPage::OnComBtn2Clk()
{

}

void CBrakeSelfTestPage::OnComBtn3Clk()
{

}

void CBrakeSelfTestPage::OnComBtn4Clk()
{

}

void CBrakeSelfTestPage::OnComBtn5Clk()
{
    //BitSet( HMI_send_data28, 1, 0 );
    BitSet( HMI_send_data38, 1, 0 );
    m_bStart = false;
    //m_bBrakeStart=false;
   // m_bAntiskidStart=false;
    ChangePage(PAGE_INDEX_BRAKESELFTESTHELP);
}

void CBrakeSelfTestPage::OnComBtn6Clk()
{
    OnBCU_Selftest_StopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif

//void CBrakeSelfTestPage::OnBrakeselftestClk()
//{
//    SELFTEST_select_color = 1;
//    SetLabelBkColorCar(ID_PIBBST_LABEL_BRAKETESTSELF,0);
//    SetLabelBkColorCar(ID_PIBBST_LABEL_ANTISKIDTESTSELF,1);

//}

//void CBrakeSelfTestPage::OnAntiskidselftestClk()
//{
//    SELFTEST_select_color = 2;
//    SetLabelBkColorCar(ID_PIBBST_LABEL_BRAKETESTSELF,1);
//    SetLabelBkColorCar(ID_PIBBST_LABEL_ANTISKIDTESTSELF,0);

//}

void CBrakeSelfTestPage::OnBCU_Selftest_StartClk()
{
    //BCU_selftest_color1=0;
    //BCU_selftest_color2=0;
    //BitSet( HMI_send_data28, 1, 1 );
    BitSet( HMI_send_data38, 1, 1 );
//    if(SELFTEST_select_color==1)
//    {
//        m_bBrakeStart=true;
//        m_bAntiskidStart=false;
//    }
//    if(SELFTEST_select_color==2)
//    {
//        m_bBrakeStart=false;
//        m_bAntiskidStart=true;
//    }
    m_bStart = true;
    UpdateBCU_selftest_test();


}

void CBrakeSelfTestPage::OnBCU_Selftest_StopClk()
{
    //BitSet( HMI_send_data28, 1, 0 );
    BitSet( HMI_send_data38, 1, 0 );
    m_bStart = false;
    //m_bBrakeStart=false;
    //m_bAntiskidStart=false;
    UpdateBCU_selftest_test();
    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
}

//void CBrakeSelfTestPage::SetLabelBkColorCar(int id, int colorVal)
//{
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
//    }
//}

void CBrakeSelfTestPage::UpdateBCU_selftest_test()
{
    if ( m_bStart )
    {
//    if ( m_bBrakeStart )
//    {


//        bcu_selftest_signal = BCU_TC1_412_422_15^bcu_selftest_temp;
//        if ( bcu_selftest_signal != 0 )
//        {
//            if ( Bit( bcu_selftest_signal,11 ) == 1 )
//            {
//                if ( Bit( BCU_TC1_412_422_15,11 ) == 1 )
//                {
//                    BCU_selftest_string1 = QSTR("判定中");
//                }

//                if ( Bit( BCU_TC1_412_422_15,11 ) == 0 )
//                {
//                    if ( Bit(BCU_TC1_412_422_15,10))
//                    {
//                        BCU_selftest_string1 = QSTR("OK");
//                    }
//                    else
//                    {
//                        BCU_selftest_string1 = QSTR("NG");
//                        BCU_selftest_color1 = 1;
//                    }
//                }

//                bcu_selftest_temp = BCU_TC1_412_422_15;
//                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_string1 );
//                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_color1 );
//            }
//        }
       // bcu_selftest_signal = BCU_410_6^bcu_selftest_temp;//lmh
        //if ( bcu_selftest_signal != 0 )
        //{


//            if ( Bit( BCU_410_6,9 ) == 1 )//自检开始
//            {
//                if ( Bit( BCU_410_6,10 ) == 1 )//执行中
//                {
//                    BCU_selftest_string1 = QSTR("判定中");
//                    BCU_selftest_color2 = 0;
//                }

//                if ( Bit( BCU_410_6,10 ) == 0 )//完成
//                {
//                    if ( Bit(BCU_410_6,11))
//                    {
//                        BCU_selftest_string1 = QSTR("OK");
//                        BCU_selftest_color2 = 2;
//                    }
//                    else
//                    {
//                        BCU_selftest_string1 = QSTR("NG");
//                        BCU_selftest_color1 = 1;
//                    }
//                }

//            }


                if ( Bit(BCU_410_6,11) == 1 )
                {
                    BCU_selftest_string1 = QSTR("OK");
                    BCU_selftest_color1 = 2;
                }
                else if ( Bit( BCU_410_6,10 ) == 1 )//执行中
                {
                    BCU_selftest_string1 = QSTR("执行中");
                    BCU_selftest_color1= 0;
                }
                else if ( Bit( BCU_410_6,9 ) == 1 )//自检开始
                {
                    BCU_selftest_string1 = QSTR("开始响应");
                    BCU_selftest_color1 = 0;
                }
                else
                {
                    BCU_selftest_string1 = QSTR("NG");
                    BCU_selftest_color1 = 1;
                }



       // }
//        bcu_selftest_signal2 = BCU_TC2_432_442_15^bcu_selftest_temp2;
//        if ( bcu_selftest_signal2 != 0 )
//        {
//            if ( Bit( bcu_selftest_signal2,11 ) == 1 )
//            {
//                if ( Bit( BCU_TC2_432_442_15,11 ) == 1 )
//                {
//                    BCU_selftest_string2 = QSTR("判定中");
//                }
//                if ( Bit( BCU_TC2_432_442_15,11 ) == 0 )
//                {
//                    if ( Bit( BCU_TC2_432_442_15,10 ))
//                    {
//                        BCU_selftest_string2 = QSTR("OK");
//                    }
//                    else
//                    {
//                        BCU_selftest_string2 = QSTR("NG");
//                        BCU_selftest_color2 = 1;
//                    }
//                }

//                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
//                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );
//            }

//            bcu_selftest_temp2 = BCU_TC2_432_442_15;
//        }
       // bcu_selftest_signal2 = BCU_420_6^bcu_selftest_temp2;
        //if ( bcu_selftest_signal2 != 0 )
        //{
//            if ( Bit(  BCU_420_6,9 ) == 1 )
//            {
//                if ( Bit( BCU_420_6,10 ) == 1 )
//                {
//                    BCU_selftest_string2 = QSTR("判定中");
//                    BCU_selftest_color2 = 0;
//                }
//                if ( Bit( BCU_420_6,10 ) == 0 )
//                {
//                    if ( Bit( BCU_420_6,11 ))
//                    {
//                        BCU_selftest_string2 = QSTR("OK");
//                        BCU_selftest_color2 = 2;
//                    }
//                    else
//                    {
//                        BCU_selftest_string2 = QSTR("NG");
//                        BCU_selftest_color2 = 1;
//                    }
//                }

//            }

            if ( Bit( BCU_420_6,11 ) == 1)
            {
                BCU_selftest_string2 = QSTR("OK");
                BCU_selftest_color2 = 2;
            }
            else if ( Bit( BCU_420_6,10 ) == 1 )
            {
                BCU_selftest_string2 = QSTR("执行中");
                BCU_selftest_color2 = 0;
            }
            else if ( Bit(  BCU_420_6,9 ) == 1 )
            {
                BCU_selftest_string2 = QSTR("开始响应");
                BCU_selftest_color2 = 0;
            }
            else
            {
                BCU_selftest_string2 = QSTR("NG");
                BCU_selftest_color2 = 1;
            }


            if ( Bit( BCU_430_6,11 ) == 1 )
            {
                BCU_selftest_string3 = QSTR("OK");
                BCU_selftest_color3 = 2;//绿色
            }
            else if ( Bit( BCU_430_6,10 ) == 1 )
            {
                BCU_selftest_string3 = QSTR("执行中");
                BCU_selftest_color3 = 0;//黑色
            }
            else if ( Bit( BCU_430_6,9 ) == 1 )
            {
                BCU_selftest_string3 = QSTR("开始响应");
                BCU_selftest_color3 = 0;//黑色
            }
            else
            {
                BCU_selftest_string3 = QSTR("NG");
                BCU_selftest_color3 = 1;//红色
            }



            if ( Bit( BCU_440_6,11 ) == 1)
            {
                BCU_selftest_string4 = QSTR("OK");
                BCU_selftest_color4 = 2;
            }
            else if ( Bit( BCU_440_6,10 ) == 1 )
            {
                BCU_selftest_string4 = QSTR("判定中");
                BCU_selftest_color4 = 0;
            }
            else if ( Bit( BCU_440_6,9 ) == 1 )
            {
                BCU_selftest_string4 = QSTR("开始响应");
                BCU_selftest_color4 = 0;
            }
            else
            {
                BCU_selftest_string4 = QSTR("NG");
                BCU_selftest_color4 = 1;
            }

           // bcu_selftest_temp4 = BCU_440_6;
        //}


            if ( Bit(BCU_411_10,11) == 1 )
            {
                ANTISKID_selftest_string1 = QSTR("OK");
                ANTISKID_selftest_color1 = 2;
            }
            else if ( Bit( BCU_411_10,10 ) == 1 )
            {
                ANTISKID_selftest_string1 = QSTR("执行中");
                ANTISKID_selftest_color1 = 0;
            }
            else if ( Bit( BCU_411_10,9 ) == 1 )
            {
                ANTISKID_selftest_string1 = QSTR("开始响应");
                ANTISKID_selftest_color1 = 0;
            }
            else
            {
                ANTISKID_selftest_string1 = QSTR("NG");
                ANTISKID_selftest_color1 = 1;
            }

            if ( Bit( BCU_421_10,11 ) == 1 )
            {
                ANTISKID_selftest_string2 = QSTR("OK");
                ANTISKID_selftest_color2 = 2;
            }
            else if ( Bit( BCU_421_10,10 ) == 1 )
            {
                ANTISKID_selftest_string2 = QSTR("执行中");
                ANTISKID_selftest_color2 = 0;
            }
            else if ( Bit(  BCU_421_10,9 ) == 1 )
            {
                ANTISKID_selftest_string2 = QSTR("开始响应");
                ANTISKID_selftest_color2 = 0;
            }
            else
            {
                ANTISKID_selftest_string2 = QSTR("NG");
                ANTISKID_selftest_color2 = 1;
            }

            if ( Bit( BCU_431_10,11 ) == 1 )
            {
                ANTISKID_selftest_string3 = QSTR("OK");
                ANTISKID_selftest_color3 = 2;
            }
            else if ( Bit( BCU_431_10,10 ) == 1 )
            {
                ANTISKID_selftest_string3 = QSTR("执行中");
                ANTISKID_selftest_color3 = 0;
            }
            else if ( Bit( BCU_431_10,9 ) == 1 )
            {
                ANTISKID_selftest_string3 = QSTR("开始响应");
                ANTISKID_selftest_color3 = 0;
            }
            else
            {
                ANTISKID_selftest_string3 = QSTR("NG");
                ANTISKID_selftest_color3 = 1;
            }

            if ( Bit( BCU_441_10,11 ) == 1 )
            {
                ANTISKID_selftest_string4 = QSTR("OK");
                ANTISKID_selftest_color4 = 2;
            }
            else if ( Bit( BCU_441_10,10 ) == 1 )
            {
                ANTISKID_selftest_string4 = QSTR("执行中");
                ANTISKID_selftest_color4 = 0;
            }
            else if ( Bit( BCU_441_10,9 ) == 1 )
            {
                ANTISKID_selftest_string4 = QSTR("开始响应");
                ANTISKID_selftest_color4 = 0;
            }
            else
            {
                ANTISKID_selftest_string4 = QSTR("NG");
                ANTISKID_selftest_color4 = 1;
            }
    }
    else
    {
        BCU_selftest_string1 = "";
        BCU_selftest_string2 = "";
        BCU_selftest_string3 = "";
        BCU_selftest_string4 = "";
        BCU_selftest_color1 = 3;
        BCU_selftest_color2 = 3;
        BCU_selftest_color3 = 3;//白色
        BCU_selftest_color4 = 3;


        ANTISKID_selftest_string1 = "";
        ANTISKID_selftest_string2 = "";
        ANTISKID_selftest_string3 = "";
        ANTISKID_selftest_string4 = "";
        ANTISKID_selftest_color1 = 3;
        ANTISKID_selftest_color2 = 3;
        ANTISKID_selftest_color3 = 3;
        ANTISKID_selftest_color4 = 3;
    }
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_string1 );
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF3,BCU_selftest_string3 );
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF4,BCU_selftest_string4 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_color1 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF3,BCU_selftest_color3 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF4,BCU_selftest_color4 );

SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF1,ANTISKID_selftest_string1 );
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF2,ANTISKID_selftest_string2 );
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF3,ANTISKID_selftest_string3 );
SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF4,ANTISKID_selftest_string4 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF1,ANTISKID_selftest_color1 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF2,ANTISKID_selftest_color2 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF3,ANTISKID_selftest_color3 );
SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF4,ANTISKID_selftest_color4 );
    /*if ( m_bAntiskidStart )
    {

            if ( Bit( BCU_411_10,9 ) == 1 )
            {
                if ( Bit( BCU_411_10,10 ) == 1 )
                {
                    ANTISKID_selftest_string1 = QSTR("判定中");
                    ANTISKID_selftest_color1 = 0;
                }

                if ( Bit( BCU_411_10,10 ) == 0 )
                {
                    if ( Bit(BCU_411_10,11))
                    {
                        ANTISKID_selftest_string1 = QSTR("OK");
                        ANTISKID_selftest_color1 = 2;
                    }
                    else
                    {
                        ANTISKID_selftest_string1 = QSTR("NG");
                        ANTISKID_selftest_color1 = 1;
                    }
                }


                //SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF1,ANTISKID_selftest_string1 );
                //SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF1,ANTISKID_selftest_color1 );
            }

            if ( Bit(  BCU_421_10,9 ) == 1 )
            {
                if ( Bit( BCU_421_10,10 ) == 1 )
                {
                    ANTISKID_selftest_string2 = QSTR("判定中");
                    ANTISKID_selftest_color2 = 0;
                }
                if ( Bit( BCU_421_10,10 ) == 0 )
                {
                    if ( Bit( BCU_421_10,11 ))
                    {
                        ANTISKID_selftest_string2 = QSTR("OK");
                        ANTISKID_selftest_color2 = 2;
                    }
                    else
                    {
                        ANTISKID_selftest_string2 = QSTR("NG");
                        ANTISKID_selftest_color2 = 1;
                    }
                }

                //SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF2,ANTISKID_selftest_string2 );
                //SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF2,ANTISKID_selftest_color2 );
            }


            if ( Bit( BCU_431_10,9 ) == 1 )
            {
                if ( Bit( BCU_431_10,10 ) == 1 )
                {
                    ANTISKID_selftest_string3 = QSTR("判定中");
                    ANTISKID_selftest_color3 = 0;
                }
                if ( Bit( BCU_431_10,10 ) == 0 )
                {
                    if ( Bit( BCU_431_10,11 ))
                    {
                        ANTISKID_selftest_string3 = QSTR("OK");
                        ANTISKID_selftest_color3 = 2;
                    }
                    else
                    {
                        ANTISKID_selftest_string3 = QSTR("NG");
                        ANTISKID_selftest_color3 = 1;
                    }
                }

                //SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF3,ANTISKID_selftest_string3 );
                //SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF3,ANTISKID_selftest_color3 );
            }


            if ( Bit( BCU_441_10,9 ) == 1 )
            {
                if ( Bit( BCU_441_10,10 ) == 1 )
                {
                    ANTISKID_selftest_string4 = QSTR("判定中");
                    ANTISKID_selftest_color4 = 0;
                }
                if ( Bit( BCU_441_10,10 ) == 0 )
                {
                    if ( Bit( BCU_441_10,11 ))
                    {
                        ANTISKID_selftest_string4 = QSTR("OK");
                        ANTISKID_selftest_color4 = 2;
                    }
                    else
                    {
                        ANTISKID_selftest_string4 = QSTR("NG");
                        ANTISKID_selftest_color4 = 1;
                    }
                }

                //SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF4,ANTISKID_selftest_string4 );
                //SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF4,ANTISKID_selftest_color4 );
            }


    }
    else
    {
        ANTISKID_selftest_string1 = "";
        ANTISKID_selftest_string2 = "";
        ANTISKID_selftest_string3 = "";
        ANTISKID_selftest_string4 = "";
        ANTISKID_selftest_color1 = 0;
        ANTISKID_selftest_color2 = 0;
        ANTISKID_selftest_color3 = 0;
        ANTISKID_selftest_color4 = 0;
    }

    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF1,ANTISKID_selftest_string1 );
    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF2,ANTISKID_selftest_string2 );
    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF3,ANTISKID_selftest_string3 );
    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_ANTISKIDTESTSELF4,ANTISKID_selftest_string4 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF1,ANTISKID_selftest_color1 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF2,ANTISKID_selftest_color2 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF3,ANTISKID_selftest_color3 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_ANTISKIDTESTSELF4,ANTISKID_selftest_color4 );
    */
}

void CBrakeSelfTestPage::UpdateMainAirPresstest()
{
//     int MainAirPress1_color=0 ;
//     int MainAirPress2_color=0 ;
//     int MainAirPress3_color=0 ;
//     int MainAirPress4_color=0 ;


    MainAir_cylinder_pressure1 = DivNum(BCU_410_14,100);
    //MainAir_cylinder_pressure2 = DivNum(BCU_420_14,100);
    //MainAir_cylinder_pressure3 = DivNum(BCU_430_14,100);
    MainAir_cylinder_pressure4 = DivNum(BCU_440_14,100);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", MainAir_cylinder_pressure1);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CRA1MAINAIRPRESS))->SetCtrlText(buff);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CRA1MAINAIRPRESS))->SetCtrlText(QString(buff).append(QSTR(" bar")));


//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", MainAir_cylinder_pressure2);
//    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CRA2MAINAIRPRESS))->SetCtrlText(QString(buff));



//    memset(buff, '\0', 10);
//    sprintf(buff, "%.1f", MainAir_cylinder_pressure3);
//    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CRA3MAINAIRPRESS))->SetCtrlText(QString(buff));


    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", MainAir_cylinder_pressure4);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CRA4MAINAIRPRESS))->SetCtrlText(QString(buff));


}

void CBrakeSelfTestPage::UpdateBCUPressure()
 {
            int BCU1_pressure_color  = 0;
            int BCU2_pressure_color  = 0;
            int BCU3_pressure_color  = 0;
            int BCU4_pressure_color  = 0;



            Brake_cylinder_pressure1_test = DivNum(BCU_410_2,100);
            Brake_cylinder_pressure2_test = DivNum(BCU_420_2,100);
            Brake_cylinder_pressure3_test = DivNum(BCU_430_2,100);
            Brake_cylinder_pressure4_test = DivNum(BCU_440_2,100);

            char buff[10];

            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure1_test);
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(buff);



            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure2_test);
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2BCUPRESSURE1))->SetCtrlText(buff);



            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure3_test);
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3BCUPRESSURE1))->SetCtrlText(buff);


            memset(buff, '\0', 10);
            sprintf(buff, "%.1f", Brake_cylinder_pressure4_test);
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4BCUPRESSURE1))->SetCtrlText(buff);

            if (Bit(CCU_HMI_308_7, 16 )==1)
            {
                if(Bit(BCU_410_6,1)==1)

                    BCU1_pressure_color = 0;//制动缸压力有效 黑

                else

                    BCU1_pressure_color = 1;//制动缸压力无效 灰
            }
            else
            {
                 BCU1_pressure_color = 2;//通信异常 白
            }

            if (Bit(CCU_HMI_308_7, 15 )==1)
            {
                if(Bit(BCU_420_6,1)==1)

                    BCU2_pressure_color = 0;

                else

                    BCU2_pressure_color = 1;
            }
            else
            {
                 BCU2_pressure_color = 2;
            }

            if (Bit(CCU_HMI_308_7, 14 )==1)
            {
                if(Bit(BCU_430_6,1)==1)

                    BCU3_pressure_color = 0;

                else

                    BCU3_pressure_color = 1;
            }
            else
            {
                 BCU3_pressure_color = 2;
            }

            if (Bit(CCU_HMI_308_7, 13 )==1)
            {
                if(Bit(BCU_440_6,1)==1)

                    BCU4_pressure_color = 0;

                else

                    BCU4_pressure_color = 1;
            }
            else
            {
                 BCU4_pressure_color = 2;
            }
            SetBCUPressureLabelColor(ID_PIBBST_LABEL_CAR1BCUPRESSURE1, BCU1_pressure_color);
            SetBCUPressureLabelColor(ID_PIBBST_LABEL_CAR2BCUPRESSURE1, BCU2_pressure_color);
            SetBCUPressureLabelColor(ID_PIBBST_LABEL_CAR3BCUPRESSURE1, BCU3_pressure_color);
            SetBCUPressureLabelColor(ID_PIBBST_LABEL_CAR4BCUPRESSURE1, BCU4_pressure_color);
        }
void CBrakeSelfTestPage::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);//压力无效为灰色
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}



void CBrakeSelfTestPage::UpdateBCU_selftest_LabelColor()
{
    int asp_color1 = 0;
    int asp_color2 = 0;
    int asp_color3 = 0;
    int asp_color4 = 0;
    int asp_color5 = 0;
    int asp_color6 = 0;
    int asp_color7 = 0;
    int asp_color8 = 0;
    int asp_color9 = 0;
    int asp_color10 = 0;
    int asp_color11 = 0;
    int asp_color12 = 0;
    int asp_color13 = 0;
    int asp_color14 = 0;
    int asp_color15 = 0;
    int asp_color16 = 0;

    int BSR_color1 = 0;
    int BSR_color2 = 0;
    int BSR_color3 = 0;
    int BSR_color4 = 0;
    int BSR_color5 = 0;
    int BSR_color6 = 0;
    int BSR_color7 = 0;
    int BSR_color8 = 0;
    int BSR_color9 = 0;
    int BSR_color10 = 0;
    int BSR_color11 = 0;
    int BSR_color12 = 0;
    int BSR_color13 = 0;
    int BSR_color14 = 0;
    int BSR_color15 = 0;
    int BSR_color16 = 0;

    int Bogie_color1 = 0;
    int Bogie_color2 = 0;
    int Bogie_color3 = 0;
    int Bogie_color4 = 0;
    int Bogie_color5 = 0;
    int Bogie_color6 = 0;
    int Bogie_color7 = 0;
    int Bogie_color8 = 0;
    int Bogie_color9 = 0;
    int Bogie_color10 = 0;
    int Bogie_color11 = 0;
    int Bogie_color12 = 0;
    int Bogie_color13 = 0;
    int Bogie_color14 = 0;
    int Bogie_color15 = 0;
    int Bogie_color16 = 0;

    int CAR1_Bogie1_separater  = 0;
    int CAR1_Bogie2_separater  = 0;
    int CAR2_Bogie1_separater  = 0;
    int CAR2_Bogie2_separater  = 0;
    int CAR3_Bogie1_separater  = 0;
    int CAR3_Bogie2_separater  = 0;
    int CAR4_Bogie1_separater  = 0;
    int CAR4_Bogie2_separater  = 0;
    int CAR5_Bogie1_separater  = 0;
    int CAR5_Bogie2_separater = 0;
    int CAR6_Bogie1_separater = 0;
    int CAR6_Bogie2_separater = 0;
    int CAR7_Bogie1_separater  = 0;
    int CAR7_Bogie2_separater = 0;
    int CAR8_Bogie1_separater = 0;
    int CAR8_Bogie2_separater = 0;

    //asp_color1 =  Bit(BCU_TC1_414_424_4,8);
    if(Bit(CCU_HMI_308_7,16))
    {
        asp_color1 =  Bit(BCU_411_1,11);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE1,asp_color1);

        asp_color2 =  Bit(BCU_411_1,12);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE2,asp_color2);
    }
    else
    {
        asp_color1 = 2;
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE1,asp_color1);
        asp_color2 = 2;
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE2,asp_color2);
    }

   if(Bit(CCU_HMI_308_7,15))
    {
        asp_color3 =  Bit(BCU_421_1,11);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE3,asp_color3);

        asp_color4 =  Bit(BCU_421_1,12);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE4,asp_color4);
   }
   else
   {
       asp_color3 =  2;
       SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE3,asp_color3);

       asp_color4 =  2;
       SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE4,asp_color4);
   }

   if(Bit(CCU_HMI_308_7,14))
   {
        asp_color5 =  Bit(BCU_431_1,11);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE5,asp_color5);

        asp_color6 =  Bit(BCU_431_1,12);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE6,asp_color6);
   }
   else
   {
       asp_color5 =  2;
       SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE5,asp_color5);

       asp_color6 =  2;
       SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE6,asp_color6);
   }

   if(Bit(CCU_HMI_308_7,13))
   {
        asp_color7 =  Bit(BCU_441_1,11);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE7,asp_color7);

        asp_color8 =  Bit(BCU_441_1,12);
        SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE8,asp_color8);
   }
   else
   {
       asp_color7 =  2;
       SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE7,asp_color7);

       asp_color8 =  2;
       SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE8,asp_color8);
   }

    asp_color9 =  Bit(BCU_TC2_434_444_4,1);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE9,asp_color9);

    asp_color10 =  Bit(BCU_TC2_434_444_4,2);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE10,asp_color10);

    asp_color11 =  Bit(BCU_TC2_434_444_4,3);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE11,asp_color11);

    asp_color12 =  Bit(BCU_TC2_434_444_4,4);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE12,asp_color12);

    asp_color13 =  Bit(BCU_TC2_434_444_4,5);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE13,asp_color13);

    asp_color14 =  Bit(BCU_TC2_434_444_4,6);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE14,asp_color14);

    asp_color15 =  Bit(BCU_TC2_434_444_4,7);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE15,asp_color15);

    asp_color16 =  Bit(BCU_TC2_434_444_4,8);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_ASPRESSURE16,asp_color16);

//    BSR_color1 = Bit(BCU_TC1_413_423_10,1);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW1,BSR_color1);

//    BSR_color2 = Bit(BCU_TC1_413_423_10,16);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW2,BSR_color2);

//    BSR_color3 = Bit(BCU_TC1_413_423_10,15);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW3,BSR_color3);

//    BSR_color4 = Bit(BCU_TC1_413_423_10,14);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW4,BSR_color4);

//    BSR_color5 = Bit(BCU_TC1_413_423_10,13);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW5,BSR_color5);

//    BSR_color6 = Bit(BCU_TC1_413_423_10,12);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW6,BSR_color6);

//    BSR_color7 = Bit(BCU_TC1_413_423_10,11);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW7,BSR_color7);

//    BSR_color8 = Bit(BCU_TC1_413_423_10,10);
//    SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW8,BSR_color8);

    BSR_color9 = Bit(BCU_TC2_433_443_10,1);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW9,BSR_color9);

    BSR_color10 = Bit(BCU_TC2_433_443_10,16);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW10,BSR_color10);

    BSR_color11 = Bit(BCU_TC2_433_443_10,15);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW11,BSR_color11);

    BSR_color12 = Bit(BCU_TC2_433_443_10,14);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW12,BSR_color12);

    BSR_color13 = Bit(BCU_TC2_433_443_10,14);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW13,BSR_color13);

    BSR_color14 = Bit(BCU_TC2_433_443_10,12);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW14,BSR_color14);

    BSR_color15 = Bit(BCU_TC2_433_443_10,11);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW15,BSR_color15);

    BSR_color16 = Bit(BCU_TC2_433_443_10,10);
    //SetBCU_selftest_LabelColor(ID_PIBBST_LABEL_BSRLOW16,BSR_color16);

    // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
    //if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))   lmh
//    if(Bit(CCU_HMI_308_7, 16 ))
//    {
//        if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
//        {
//            CAR1_Bogie1_separater = 1;
//        }
//        else
//        {
//            CAR1_Bogie1_separater = 0;
//        }

//        if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
//        {
//            CAR1_Bogie2_separater = 1;
//        }
//        else
//        {
//            CAR1_Bogie2_separater = 0;
//        }

//    }
//    else
//    {
//        if(Bit(CCU_HMI_222_11, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if(Bit(CCU_HMI_222_11, 15 ))
//            {
//                if (Bit( DI_110_1, 4) == 1)
//                {
//                    CAR1_Bogie1_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie1_separater = 0;
//                }

//                if (Bit( DI_110_1, 5)== 1)
//                {
//                    CAR1_Bogie2_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie2_separater = 0;
//                }
//            }
//            if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//            {
//                if (Bit( BCU_TC1_413_423_13, 13) == 1)
//                {
//                    CAR1_Bogie1_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie1_separater = 0;
//                }

//                if (Bit( BCU_TC1_413_423_13, 12)== 1)
//                {
//                    CAR1_Bogie2_separater = 1;
//                }
//                else
//                {
//                    CAR1_Bogie2_separater = 0;
//                }
//            }
//        }
//        else
//        {
//            CAR1_Bogie1_separater=2;
//            CAR1_Bogie2_separater=2;
//        }

//    }

//        if(Bit(CCU_HMI_222_12, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if (Bit( BCU_TC1_413_423_13, 11) ||Bit( DI_120_3, 10)== 1)
//            {
//                CAR2_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR2_Bogie1_separater = 0;
//            }

//            if (Bit( BCU_TC1_413_423_13, 10) ||Bit( DI_120_3, 11)== 1)
//            {
//                CAR2_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR2_Bogie2_separater = 0;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 7 ))
//                {
//                    if (Bit( DI_120_3, 10)== 1)
//                    {
//                        CAR2_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie1_separater = 0;
//                    }

//                    if (Bit( DI_120_3, 11)== 1)
//                    {
//                        CAR2_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie2_separater = 0;
//                    }
//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if (Bit( BCU_TC1_413_423_13, 11) == 1)
//                    {
//                        CAR2_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie1_separater = 0;
//                    }

//                    if (Bit( BCU_TC1_413_423_13, 10) == 1)
//                    {
//                        CAR2_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR2_Bogie2_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR2_Bogie1_separater = 2;
//                CAR2_Bogie2_separater = 2;
//            }

//        }

//        if(Bit(CCU_HMI_222_12, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if (Bit( BCU_TC1_413_423_13, 9) ||Bit( DI_130_3, 10)== 1)
//            {
//                CAR3_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR3_Bogie1_separater = 0;
//            }

//            if (Bit( BCU_TC1_413_423_14, 8) ||Bit( DI_130_3, 11)== 1)
//            {
//                CAR3_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR3_Bogie2_separater = 0;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_12, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_12, 15 ))
//                {
//                    if (Bit( DI_130_3, 10)== 1)
//                    {
//                        CAR3_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR3_Bogie1_separater = 0;
//                    }

//                    if (Bit( DI_130_3, 11)== 1)
//                    {
//                        CAR3_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR3_Bogie2_separater = 0;
//                    }

//                }
//                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
//                {
//                    if (Bit( BCU_TC1_413_423_13, 9) == 1)
//                    {
//                        CAR3_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR3_Bogie1_separater = 0;
//                    }

//                    if (Bit( BCU_TC1_413_423_14, 8)== 1)
//                    {
//                        CAR3_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR3_Bogie2_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR3_Bogie1_separater = 2;
//                CAR3_Bogie2_separater = 2;
//            }

//        }

//        if(Bit(CCU_HMI_222_13, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//        {
//            if (Bit( BCU_TC1_413_423_14, 7) ||Bit( DI_140_3, 10)== 1)
//            {
//                CAR4_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR4_Bogie1_separater = 0;
//            }

//            if (Bit( BCU_TC1_413_423_14, 6) ||Bit( DI_140_3, 11)== 1)
//            {
//                CAR4_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR4_Bogie2_separater = 0;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_13, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//            {
//                if(Bit(CCU_HMI_222_13, 7 ))
//                {
//                    if (Bit( DI_140_3, 10)== 1)
//                    {
//                        CAR4_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR4_Bogie1_separater = 0;
//                    }

//                    if (Bit( DI_140_3, 11)== 1)
//                    {
//                        CAR4_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR4_Bogie2_separater = 0;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
//                {
//                    if (Bit( BCU_TC1_413_423_14, 7) == 1)
//                    {
//                        CAR4_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR4_Bogie1_separater = 0;
//                    }

//                    if (Bit( BCU_TC1_413_423_14, 6) == 1)
//                    {
//                        CAR4_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR4_Bogie2_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR4_Bogie1_separater = 2;
//                CAR4_Bogie2_separater = 2;
//            }

//        }


//        if(Bit(CCU_HMI_222_13, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if (Bit( BCU_TC2_433_443_14, 6) ||Bit( DI_150_3, 11)== 1)
//            {
//                CAR5_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR5_Bogie2_separater = 0;
//            }

//            if (Bit( BCU_TC2_433_443_14, 7) ||Bit( DI_150_3, 10)== 1)
//            {
//                CAR5_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR5_Bogie1_separater = 0;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_13, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_13, 15 ))
//                {
//                    if (Bit( DI_150_3, 11)== 1)
//                    {
//                        CAR5_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR5_Bogie2_separater = 0;
//                    }

//                    if (Bit( DI_150_3, 10)== 1)
//                    {
//                        CAR5_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR5_Bogie1_separater = 0;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if (Bit( BCU_TC2_433_443_14, 6) == 1)
//                    {
//                        CAR5_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR5_Bogie2_separater = 0;
//                    }

//                    if (Bit( BCU_TC2_433_443_14, 7) == 1)
//                    {
//                        CAR5_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR5_Bogie1_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR5_Bogie1_separater = 2;
//                CAR5_Bogie2_separater = 2;
//            }
//        }

//        if(Bit(CCU_HMI_222_14, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if (Bit( BCU_TC2_433_443_14, 8 )||Bit( DI_160_3, 11)== 1)
//            {
//                CAR6_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR6_Bogie2_separater = 0;
//            }

//            if (Bit( BCU_TC2_433_443_13, 9) ||Bit( DI_160_3, 10)== 1)
//            {
//                CAR6_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR6_Bogie1_separater = 0;
//            }
//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_14, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_14, 7 ))
//                {
//                    if (Bit( DI_160_3, 11)== 1)
//                    {
//                        CAR6_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR6_Bogie2_separater = 0;
//                    }

//                    if (Bit( DI_160_3, 10)== 1)
//                    {
//                        CAR6_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR6_Bogie1_separater = 0;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if (Bit( BCU_TC2_433_443_14, 8 )== 1)
//                    {
//                        CAR6_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR6_Bogie2_separater = 0;
//                    }
//                    if (Bit( BCU_TC2_433_443_13, 9) == 1)
//                    {
//                        CAR6_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR6_Bogie1_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//               CAR6_Bogie1_separater = 2;
//               CAR6_Bogie2_separater = 2;
//            }
//        }

//        if(Bit(CCU_HMI_222_14, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if (Bit( BCU_TC2_433_443_13, 10) ||Bit( DI_170_3, 11)== 1)
//            {
//                CAR7_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR7_Bogie2_separater = 0;
//            }
//            if (Bit( BCU_TC2_433_443_13, 11) ||Bit( DI_170_3, 10)== 1)
//            {
//                CAR7_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR7_Bogie1_separater = 0;
//            }

//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_14, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_14, 15 ))
//                {
//                    if (Bit( DI_170_3, 11)== 1)
//                    {
//                        CAR7_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR7_Bogie2_separater = 0;
//                    }
//                    if (Bit( DI_170_3, 10)== 1)
//                    {
//                        CAR7_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR7_Bogie1_separater = 0;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if (Bit( BCU_TC2_433_443_13, 10) == 1)
//                    {
//                        CAR7_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR7_Bogie2_separater = 0;
//                    }
//                    if (Bit( BCU_TC2_433_443_13, 11) == 1)
//                    {
//                        CAR7_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR7_Bogie1_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR7_Bogie1_separater = 2;
//                CAR7_Bogie2_separater = 2;
//            }
//        }

//        if(Bit(CCU_HMI_222_15, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//        {
//            if (Bit( BCU_TC2_433_443_13, 12)||Bit( DI_180_1, 5)== 1 )
//            {
//                CAR8_Bogie2_separater = 1;
//            }
//            else
//            {
//                CAR8_Bogie2_separater = 0;
//            }
//            if (Bit( BCU_TC2_433_443_13, 13) ||Bit( DI_180_1, 4)== 1)
//            {
//                CAR8_Bogie1_separater = 1;
//            }
//            else
//            {
//                CAR8_Bogie1_separater = 0;
//            }
//        }
//        else
//        {
//            if(Bit(CCU_HMI_222_15, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//            {
//                if(Bit(CCU_HMI_222_15, 7 ))
//                {
//                    if (Bit( DI_180_1, 5)== 1 )
//                    {
//                        CAR8_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR8_Bogie2_separater = 0;
//                    }
//                    if (Bit( DI_180_1, 4)== 1)
//                    {
//                        CAR8_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR8_Bogie1_separater = 0;
//                    }
//                }
//                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
//                {
//                    if (Bit( BCU_TC2_433_443_13, 12)== 1 )
//                    {
//                        CAR8_Bogie2_separater = 1;
//                    }
//                    else
//                    {
//                        CAR8_Bogie2_separater = 0;
//                    }
//                    if (Bit( BCU_TC2_433_443_13, 13) == 1)
//                    {
//                        CAR8_Bogie1_separater = 1;
//                    }
//                    else
//                    {
//                        CAR8_Bogie1_separater = 0;
//                    }
//                }
//            }
//            else
//            {
//                CAR8_Bogie1_separater=2;
//                CAR8_Bogie2_separater=2;
//            }
//        }
//    if(Bit(CCU_HMI_308_7, 16 )==1)
//    {

        if(Bit(BCU_419_8,9)==1)
        {
            CAR1_Bogie1_separater = 1;
        }
        else
        {
            CAR1_Bogie1_separater = 0;
        }

        if(Bit(BCU_419_8,10)==1)
        {
            CAR1_Bogie2_separater = 1;
        }
        else
        {
            CAR1_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR1_Bogie1_separater = 2;
//            CAR1_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 15 )==1)
//    {

        if(Bit(BCU_419_8,13)==1)
        {
            CAR2_Bogie1_separater = 1;
        }
        else
        {
            CAR2_Bogie1_separater = 0;
        }

        if(Bit(BCU_419_8,14)==1)
        {
            CAR2_Bogie2_separater = 1;
        }
        else
        {
            CAR2_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR2_Bogie1_separater = 2;
//            CAR2_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 14 )==1)
//    {

        if(Bit(BCU_419_9,1)==1)
        {
            CAR3_Bogie1_separater = 1;
        }
        else
        {
            CAR3_Bogie1_separater = 0;
        }


        if(Bit(BCU_419_9,2)==1)
        {
            CAR3_Bogie2_separater = 1;
        }
        else
        {
            CAR3_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR3_Bogie1_separater = 2;
//            CAR3_Bogie2_separater = 2;

//    }

//    if(Bit(CCU_HMI_308_7, 13 )==1)
//    {

        if(Bit(BCU_419_9,5)==1)
        {
            CAR4_Bogie1_separater = 1;
        }
        else
        {
            CAR4_Bogie1_separater = 0;
        }

        if(Bit(BCU_419_9,6)==1)
        {
            CAR4_Bogie2_separater = 1;
        }
        else
        {
            CAR4_Bogie2_separater = 0;
        }

//    }
//    else
//    {
//            CAR4_Bogie1_separater = 2;
//            CAR4_Bogie2_separater = 2;

//    }



    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE1,CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE2,CAR1_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE3,CAR2_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE4,CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE5,CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE6,CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE7,CAR4_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE8,CAR4_Bogie2_separater);
    //SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE9,CAR5_Bogie2_separater);
    //SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE10,CAR5_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE11,CAR6_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE12,CAR6_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE13,CAR7_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE14,CAR7_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE15,CAR8_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE16,CAR8_Bogie1_separater);

//    BogieASP1 = DivNum(BCU_TC1_413_423_5%256,10);
//    BogieASP2 = DivNum(BCU_TC1_413_423_5/256,10);
//    BogieASP3 = DivNum(BCU_TC1_413_423_6%256,10);
//    BogieASP4 = DivNum(BCU_TC1_413_423_6/256,10);
//    BogieASP5 = DivNum(BCU_TC1_413_423_7%256,10);
//    BogieASP6 = DivNum(BCU_TC1_413_423_7/256,10);
//    BogieASP7 = DivNum(BCU_TC1_413_423_8%256,10);
//    BogieASP8 = DivNum(BCU_TC1_413_423_8/256,10);
//    BogieASP9 = DivNum(BCU_TC1_413_423_5%256,10);
//    BogieASP10 = DivNum(BCU_TC1_413_423_5/256,10);
//    BogieASP11 = DivNum(BCU_TC1_413_423_6%256,10);
//    BogieASP12 = DivNum(BCU_TC1_413_423_6/256,10);
//    BogieASP13 = DivNum(BCU_TC1_413_423_7%256,10);
//    BogieASP14 = DivNum(BCU_TC1_413_423_7/256,10);
//    BogieASP15 = DivNum(BCU_TC1_413_423_8%256,10);
//    BogieASP16 = DivNum(BCU_TC1_413_423_8/256,10);

    BogieASP1 = DivNum(BCU_410_3,100);
    BogieASP2 = DivNum(BCU_410_4,100);
    BogieASP3 = DivNum(BCU_420_3,100);
    BogieASP4 = DivNum(BCU_420_4,100);
    BogieASP5 = DivNum(BCU_430_3,100);
    BogieASP6 = DivNum(BCU_430_4,100);
    BogieASP7 = DivNum(BCU_440_3,100);
    BogieASP8 = DivNum(BCU_440_4,100);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP1);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP2);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP3);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE3))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP4);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE4))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP5);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE5))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP6);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE6))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP7);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE7))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP8);
    ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE8))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP9);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE9))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP10);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE10))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP11);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE11))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP12);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE12))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP13);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE13))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP14);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE14))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP15);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE15))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f",BogieASP16);
    //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_ASPRESSURE16))->SetCtrlText(buff);


    return;
}

//void CBrakeSelfTestPage::UpdateBCU_selftest_ConColor()
//{
//    int testself_con1 = 0;
//    int testself_con2 = 0;
//    int testself_con3 = 0;
//    int testself_con4 = 0;

//    ASSERT((testself_con1 >= 0) && (testself_con1 <= 2));
//    ASSERT((testself_con2 >= 0) && (testself_con2 <= 2));

//    //testself_con1 = Bit(BCU_TC1_412_422_15,9);
//    //testself_con2 = Bit(BCU_TC2_432_442_15,9);
//    testself_con1 = Bit(BCU_410_6,9);
//    testself_con2 = Bit(BCU_420_6,9);
//    testself_con3 = Bit(BCU_430_6,9);
//    testself_con4 = Bit(BCU_440_6,9);

//    if ( testself_con1 == 1 )
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON1))->SetCtrlBKColor(Qt::green);
//    }
//    else
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON1))->SetCtrlBKColor(Qt::red);
//    }

//    if ( testself_con2 == 1 )
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON2))->SetCtrlBKColor(Qt::green);
//    }
//    else
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON2))->SetCtrlBKColor(Qt::red);
//    }

//    if ( testself_con3 == 1 )
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON3))->SetCtrlBKColor(Qt::green);
//    }
//    else
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON3))->SetCtrlBKColor(Qt::red);
//    }

//    if ( testself_con2 == 4 )
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON4))->SetCtrlBKColor(Qt::green);
//    }
//    else
//    {
//            //((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON4))->SetCtrlBKColor(Qt::red);
//    }
//}


void CBrakeSelfTestPage::SetBCU_selftest_LabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
       // ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (2 == colorVal)
    {
      ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}


void CBrakeSelfTestPage::SetBCUSeparaterLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if(2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CBrakeSelfTestPage::SetBCU_selftest_resultColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}

void CBrakeSelfTestPage::SetBCU_selftest_LabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}


