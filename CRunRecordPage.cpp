#include "CRunRecordPage.h"
#include<qdebug.h>

ROMDATA g_PicRom_RunRecord[] =
{
  /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER(QSTR("运行记录"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
  {"",                            D_FONT_BOLD(6),      QRect( 50, 115, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 145, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 180, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 215, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 250, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 285, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 320, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 355, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 390, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 425, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 460, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 495, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {"",                            D_FONT_BOLD(6),      QRect( 50, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(200, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(310, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(550, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(750, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {QSTR("记录项目"),               D_FONT_BOLD(8),      QRect( 50, 115, 150,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("记录状态"),               D_FONT_BOLD(8),      QRect(200, 115, 110,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("记录开始时刻"),            D_FONT_BOLD(8),      QRect(310, 115, 240,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("记录容量"),               D_FONT_BOLD(8),      QRect(550, 115, 200,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("当天运行时间"),           D_FONT_BOLD(8),      QRect( 50, 145, 150,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("运行总里程"),           D_FONT_BOLD(8),      QRect( 50, 180, 150,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("检修里程"),             D_FONT_BOLD(8),      QRect( 50, 215, 150,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("牵引能耗"),               D_FONT_BOLD(8),      QRect( 50, 250, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QSTR("再生电能"),               D_FONT_BOLD(8),      QRect( 50, 285, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QSTR("制动能耗"),               D_FONT_BOLD(8),      QRect( 50, 285, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("辅助能耗"),            D_FONT_BOLD(8),      QRect( 50, 320-35, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("TC1空压机工作时间"),              D_FONT_BOLD(8),      QRect( 50, 355-35, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QSTR("TC1空压机工作率"),               D_FONT_BOLD(8),      QRect( 50, 390-35, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("TC2空压机工作时间"),              D_FONT_BOLD(8),      QRect( 50, 390-35, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QSTR("TC2空压机工作率"),               D_FONT_BOLD(8),      QRect( 50, 460-35, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  //{QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 320-35, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 355-35, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  //{QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 390-35, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 390-35, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  //{QSTR("记录"),                 D_FONT_BOLD(8),      QRect(200, 460-35, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

  //{QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 146, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME1       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 181, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME4       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 216, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME2       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 251, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME5       },
  //{QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 286, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME6       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 321-35, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME7       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 356-35, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME8       },
  //{QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 391-35, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME9       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 391-35, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME10       },
  //{QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 461-35, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME11       },

  {QSTR("1"),                      D_FONT_BOLD(8),      QRect(551, 146, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE1      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 181, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE4      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 216, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE2      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 251, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE5      },
  //{QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 286, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE6      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 321-35, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE7      },


{QSTR("1"),                      D_FONT_BOLD(8),      QRect(560, 356-35, 60,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE8      },
{QSTR("2"),                      D_FONT_BOLD(8),      QRect(647, 356-35, 60,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE12      },

//{QSTR("2"),                      D_FONT_BOLD(8),      QRect(551, 391-35, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE9      },

{QSTR("3"),                      D_FONT_BOLD(8),      QRect(560, 391-35, 60,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE13      },
{QSTR("4"),                      D_FONT_BOLD(8),      QRect(647, 391-35, 60,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE10      },

// {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 461-35, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE11      },

  {QSTR("分  "),                  D_FONT_BOLD(8),      QRect(700, 145,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("km  "),                  D_FONT_BOLD(8),      QRect(700, 180,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("km "),                   D_FONT_BOLD(8),      QRect(700, 215,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("kwh"),                   D_FONT_BOLD(8),      QRect(700, 250,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  //{QSTR("kwh"),                   D_FONT_BOLD(8),      QRect(700, 285,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("kwh"),                   D_FONT_BOLD(8),      QRect(700, 320-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },


{QSTR("分"),                   D_FONT_BOLD(8),      QRect(700, 355-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
{QSTR("小时"),                   D_FONT_BOLD(8),      QRect(610, 355-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },

  //{QSTR("%"),                   D_FONT_BOLD(8),      QRect(700, 390-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
{QSTR("分"),                   D_FONT_BOLD(8),      QRect(700, 390-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },

{QSTR("小时"),                   D_FONT_BOLD(8),      QRect(610, 390-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },

  //{QSTR("%"),                   D_FONT_BOLD(8),      QRect(700, 461-35,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },


};
int g_RunRecordRomLen = sizeof(g_PicRom_RunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordPage,CPage)
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

CRunRecordPage::CRunRecordPage()
{
}

void CRunRecordPage::OnUpdatePage()
{
    UpdateRun_RecordData();
}

void CRunRecordPage::OnInitPage()
{

}

void CRunRecordPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetTxtFont(D_FONT(6));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("空压机\n时间设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));
#endif
    this->InitPageHeader();//3.17
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME1))->SetCtrlText(g_runtime1);//当天运行时间 记录开始时间为系统时间
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME2))->SetCtrlText(g_runtime2);
     g_mRunsetBtnTimes=0;
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {

        }
        void CRunRecordPage::OnComBtn7Clk()
        {
            pw_select=9;
            pwdisplay="";
            pw_input="";
            g_nStopBtnTimes = 0;
            ChangePage(PAGE_INDEX_PASSWORD);

//            g_mRunsetBtnTimes++;

//            if(g_mRunsetBtnTimes == 4)
//            {
//                //g_bScannFault = false;
//                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QSTR(""));
//                pw_select=9;
//                pwdisplay="";
//                pw_input="";
//                g_nStopBtnTimes = 0;

//            }
//            if(g_mRunsetBtnTimes==3 )
//            {
//                //g_bScannFault = true;
//                //g_nStopBtnTimes = 0;
//                //GetDlgItem(IDLB_COM_BTN5)->SetCtrlText(QSTR(""));  不知是否之前的有误
//                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QSTR("总里程设置"));//保留
//            }
        }

        void CRunRecordPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif



void CRunRecordPage::UpdateRun_RecordData()
{
//    run_record_date2 = StrFromInt( ERM_F01_7 / 256 + 2000, 10 )//牵引起始记录时间
//                       + "-" + StrFromInt( ERM_F01_8 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_8 / 256, 10 );
//    run_record_date3 = StrFromInt( ERM_F01_9 % 256 + 2000, 10 )//制动能耗起始记录时间
//                       + "-" + StrFromInt( ERM_F01_9 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_10 % 256, 10 );
//    run_record_date4 = StrFromInt( ERM_F01_10 / 256 + 2000, 10 )//辅助能耗起始记录时间
//                       + "-" + StrFromInt( ERM_F01_11 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_11 / 256, 10 );
//    run_record_date5 = StrFromInt( ERM_F01_12 % 256 + 2000, 10 )//空压机1起始记录时间
//                       + "-" + StrFromInt( ERM_F01_12 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_13 % 256, 10 );
//    run_record_date6 = StrFromInt( ERM_F01_13 / 256 + 2000, 10 )//空压机2起始记录时间
//                       + "-" + StrFromInt( ERM_F01_14 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_14 / 256, 10 );
//    run_record_date1 = StrFromInt( ERM_F01_15 % 256 + 2000, 10 )//检修里程起始记录时间
//                       + "-" + StrFromInt( ERM_F01_15 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_16 % 256, 10 );

//    run_record_distance = ERM_F00_2 + ERM_F00_1 * 65536;//总里程
//    run_record_today_distance = ERM_F00_4  + ERM_F00_3* 65536;//当日运行里程改为检修里程

    run_record_date2 = StrFromInt( ERM_212_1 %256 + 2000, 10 )//牵引能耗开始记录时间
                           + "-" + StrFromInt( ERM_212_1 /256, 10 )
                           + "-" + StrFromInt( ERM_212_2 %256, 10 );
    run_record_date3 = StrFromInt( ERM_212_2 / 256 + 2000, 10 )//检修里程开始记录时间
                           + "-" + StrFromInt( ERM_212_3 % 256, 10 )
                           + "-" + StrFromInt( ERM_212_3/ 256, 10 );
    run_record_date4 = StrFromInt( ERM_212_4 % 256 + 2000, 10 )//辅助能耗开始记录时间
                           + "-" + StrFromInt( ERM_212_4 / 256, 10 )
                           + "-" + StrFromInt( ERM_212_5 % 256, 10 );
    run_record_date5 = StrFromInt( ERM_212_5 / 256 + 2000, 10 )//空压机1开始记录时间
                           + "-" + StrFromInt( ERM_212_6 % 256, 10 )
                           + "-" + StrFromInt( ERM_212_6 / 256, 10 );
    run_record_date6 = StrFromInt( ERM_212_7 % 256 + 2000, 10 )//空压机2开始记录时间
                           + "-" + StrFromInt( ERM_212_7 / 256, 10 )
                           + "-" + StrFromInt( ERM_212_8 % 256, 10 );
    //run_record_date1 = StrFromInt( ERM_F01_8 / 256 + 2000, 10 )//检修里程开始记录时间使用总里程的记录时间（没有给出）
    //                      + "-" + StrFromInt( ERM_F01_9 % 256, 10 )
    //                      + "-" + StrFromInt( ERM_F01_9 / 256, 10 );

    run_record_distance = (ERM_211_1 + ERM_211_2 * 65536)*0.1;//总里程
    //run_record_today_distance = ERM_F00_4  + ERM_F00_3* 65536;
    run_record_today_distance = (ERM_211_7  + ERM_211_8* 65536)*0.1;//检修里程
    energy1=ERM_211_3 + ERM_211_4* 65536;//牵引能耗
    //energy2=ERM_211_7 + ERM_211_8* 65536;//制动能耗
    energy3=ERM_211_5 + ERM_211_6* 65536;//辅助能耗
//    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDTIME1, run_record_time);
    //当天运行时间  记录开始时间为系统时间
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE1, ERM_210_13);
//"检修里程记录时间使用总里程的记录时间，总里程记录时间一栏为空"
    // 检修里程时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME2, run_record_date3);
    SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE2, run_record_today_distance);

  //  SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME4, run_record_date1);
    SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE4, run_record_distance);//总里程（记录时间没有给）
//牵引能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME5, run_record_date2);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE5, energy1);
//制动能耗
    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME6, run_record_date3);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE6, energy2);
//辅助能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME7, run_record_date4);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE7, energy3);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME8, run_record_date5);//TC1空压机


    /* DELETE BY LEO*/

//    if(ERM_211_9>=64000)
//        SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE8, (ERM_211_9-64000)*0.1);
//    else
    //        SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE8, ERM_211_9);
    ERM_211_13_14 = ERM_211_14 * 65536 + ERM_211_13;
    ERM_211_15_16 = ERM_211_16 * 65536 + ERM_211_15;

//    qDebug()<<"ERM_211_13_14"<<ERM_211_13_14;
    /* ADDED BY LEO*/
    unsigned int tmp1 = ERM_211_13_14/60;
    unsigned int tmp2 = ERM_211_13_14%60;

//    qDebug()<<"tmp1"<<tmp1;
//    qDebug()<<"tmp2"<<tmp2;

    SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE8, (tmp1));
    SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE12, (tmp2));

    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME9, run_record_date5);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE9, ERM_211_11%256);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME10, run_record_date6);//TC2空压机

       /* DELETE BY LEO*/

//    if (ERM_211_10>=64000)
//       SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE10,(ERM_211_10-64000)*0.1 );
//    else
//        SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE10, ERM_211_10);


    /* ADDED BY LEO*/
    unsigned int tmp3 = ERM_211_15_16/60;
    unsigned int tmp4 = ERM_211_15_16%60;
    SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE13, (tmp3));
    SetRun_Record_LabelString_qreal(ID_PIBRRP_LABEL_REDRANGE10, (tmp4));

    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME11, run_record_date6);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE11, ERM_211_11/256);
//    qDebug()<<"ERM_211_13"<<ERM_211_13;
//    qDebug()<<"ERM_211_14"<<ERM_211_14;
//    qDebug()<<"ERM_211_13_14"<<ERM_211_13_14;
    qDebug()<<"ERM 211 13:"<<ERM_211_13
            <<"ERM 211 14:"<<ERM_211_14
            <<"ERM 211 15:"<<ERM_211_15
            <<"ERM 211 16:"<<ERM_211_16
            <<"ERM 211 13_14:"<<ERM_211_13_14
            <<"ERM 211 15_16:"<<ERM_211_15_16;

}

void CRunRecordPage::SetRun_Record_LabelString(int id, int DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::SetRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

}

void CRunRecordPage::SetRun_Record_LabelString_qreal(int id, qreal DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

