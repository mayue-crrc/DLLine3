#include "CMainPage.h"

ROMDATA g_PicRom_Main[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
     D_COMMON_PAGE_HEADER_NEW_DL(QSTR("主菜单") )
    {"",                       D_FONT_BOLD(10),      QRect(100,64, 600,  85),          Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,          ID_PIBMAIN_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(702, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 107,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QSTR("主菜单"))
    D_COMMON_PAGE_BUTTON_BAR
    {QSTR("通信中断"),               D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),          Qt::red,                  Qt::white,                CONTROL_LABEL,          ID_PIBMAIN_COMMINTERRUPT          },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBMAIN_ICON_WARNNING          },
    {"",                            D_FONT_BOLD(5),      QRect(180, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBMAIN_TRAIN                  },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_RIGHT            },
    {"LEFT",                        D_FONT_BOLD(6),      QRect( 60, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBMAIN_ARROW_LEFT             },

#endif


    {"",                            D_FONT_BOLD(6),      QRect( 10, 151, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 180, 691,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 10, 151,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 151,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(250, 151,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 151,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550, 151,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 151,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    /*{"",                            D_FONT_BOLD(6),      QRect(475, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(625, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 210,   1,  45),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },*/

    {QSTR("车号"),                   D_FONT_BOLD(7),      QRect( 11, 152,  88,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),                   D_FONT_BOLD(8),      QRect( 101, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                   D_FONT_BOLD(8),      QRect( 251, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                   D_FONT_BOLD(8),      QRect( 401, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                   D_FONT_BOLD(8),      QRect( 551, 152,  150,  29),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   // {QSTR("5"),                     D_FONT_BOLD(6),      QRect(400, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("6"),                     D_FONT_BOLD(6),      QRect(475, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("7"),                     D_FONT_BOLD(6),      QRect(550, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("8"),                     D_FONT_BOLD(6),      QRect(625, 210,  75,  45),         Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("烟火报警"),            D_FONT_BOLD(10),      QRect(613+14, 565, 73,  28),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBMAIN_BUTTON_FASPAGE         },
    {QSTR("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBMAIN_BUTTON_EMERGENCYBROADCAST         },
    {QSTR("站点取消"),          D_FONT_BOLD(10),      QRect(440, 500, 100,  40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBMAIN_BUTTON_STATIONCANCEL         },

#ifdef PAGE_BUTTON_BAR_NEW
    //{QSTR("初始设定"),               D_FONT_BOLD(10),      QRect(613+14, 565, 73,  28),          Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBMAIN_BUTTON_ORIGINATIONSET  },
    {QSTR("初始设定"),               D_FONT_BOLD(10),      QRect(570, 500, 100,  40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBMAIN_BUTTON_ORIGINATIONSET  },

#else
    {QSTR("初始设定"),               D_FONT_BOLD(8),      QRect(545, 500, 100,  40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBMAIN_BUTTON_ORIGINATIONSET  },
#endif
};
int g_MainRomLen = sizeof(g_PicRom_Main)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CMainPage,CPage)
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
        ON_BTNCLK(ID_PIBMAIN_BUTTON_ORIGINATIONSET, OnInitialSetBtnClk)
        ON_BTNCLK(ID_PIBMAIN_BUTTON_FASPAGE, OnFASpageBtnClk)
        ON_BTNCLK(ID_PIBMAIN_BUTTON_EMERGENCYBROADCAST,OnEMERGENCYBROADCASTpageBtnClk)
        ON_BTNCLK(ID_PIBMAIN_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBMAIN_BUTTON_STATIONCANCEL, OnStationCancelBtnClk)

END_MESSAGE_MAP()

CMainPage::CMainPage()
{
}

void CMainPage::OnUpdatePage()
{

    updateTrain(ID_PIBMAIN_TRAIN);
    updateArrow(ID_PIBMAIN_ARROW_LEFT,ID_PIBMAIN_ARROW_RIGHT);

    updateErrorLine(ID_PIBMAIN_TRAIN);//3.5

#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBMAIN_COMMINTERRUPT);

    updateFault(ID_PIBMAIN_ICON_WARNNING);

#endif
}

void CMainPage::OnInitPage()
{

}

void CMainPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("网   络"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("维修菜单"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("通信状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("维修菜单"));
#endif

    this->InitPageHeader();
}


#ifdef PAGE_BUTTON_BAR_NEW
        void CMainPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_COMMSTATUS);
        }

        void CMainPage::OnComBtn2Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CMainPage::OnComBtn3Clk()
        {
             ChangePage(PAGE_INDEX_CARSTATUS4);
        }

        void CMainPage::OnComBtn4Clk()
        {
             ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CMainPage::OnComBtn5Clk()
        {
             //ChangePage(PAGE_INDEX_CARSTATUS3);
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CMainPage::OnComBtn6Clk()
        {
            //ChangePage(PAGE_INDEX_HVACSETTING);
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }
        void CMainPage::OnComBtn7Clk()
        {
             //ChangePage(PAGE_INDEX_FAULT);
            ChangePage(PAGE_INDEX_HVACSETTING);
        }
//        void CMainPage::OnComBtn8Clk()
//        {
//            ChangePage(PAGE_INDEX_MAINTAIN);
//        }

        void CMainPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#else
        void CMainPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_COMMSTATUS);
        }

        void CMainPage::OnComBtn2Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CMainPage::OnComBtn3Clk()
        {
             ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CMainPage::OnComBtn4Clk()
        {
             ChangePage(PAGE_INDEX_HVACSETTING);
        }

        void CMainPage::OnComBtn5Clk()
        {
             ChangePage(PAGE_INDEX_FAULT);
        }

        void CMainPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }
#endif

void CMainPage::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void CMainPage::OnEMERGENCYBROADCASTpageBtnClk()
{
    //pageback=6;
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CMainPage::OnInitialSetBtnClk()
{
    //pw_select=4;
    //ChangePage(PAGE_INDEX_PASSWORD);
    ChangePage(PAGE_INDEX_INITIALSETTING);
    pwdisplay="";
    pw_input="";
}

void CMainPage::OnStationCancelBtnClk()
{
    pw_select=8;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}
void CMainPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}
