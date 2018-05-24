#include "CResetRunRecordPage.h"

ROMDATA g_PicRom_ResetRunRecord[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("运行记录清零"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 100, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 130, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 165, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 200, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 270, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 305, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 340, 701,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
 //   {"",                            D_FONT_BOLD(6),      QRect( 50, 375, 701,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 410, 701,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 445, 701,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {"",                            D_FONT_BOLD(6),      QRect( 50, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(190, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(300, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(580, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(750, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {QSTR("记录项目"),               D_FONT_BOLD(8),       QRect( 50, 130, 140, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE    },
//    {QSTR("运行总里程"),             D_FONT_BOLD(7),       QRect( 51, 131, 139, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_MILEAGE     },
    {QSTR("检修里程"),               D_FONT_BOLD(8),       QRect( 51, 166, 139, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_CHECKDISTANCE      },
    {QSTR("牵引能耗\n再生电耗"),      D_FONT_BOLD(8),       QRect( 51, 201, 139, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_ENERGY      },
//    {QSTR("TC1空压机运行时间\nTC1空压机工作率"),         D_FONT_BOLD(6),       QRect( 51, 271, 139, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME1   },
//    {QSTR("TC2空压机运行时间\nTC2空压机工作率"),         D_FONT_BOLD(6),       QRect( 51, 341, 139, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME2   },
    {QSTR("TC1空压机\n运行时间"),         D_FONT_BOLD(8),       QRect( 51, 271, 139, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME1   },
    {QSTR("TC2空压机\n运行时间"),         D_FONT_BOLD(8),       QRect( 51, 341, 139, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME2   },
    {QSTR("辅助能耗"),               D_FONT_BOLD(8),       QRect( 51, 411, 139, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_ASSENERGY   },
    {QSTR("记录状态"),               D_FONT_BOLD(8),       QRect(190, 130, 110, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QSTR("记录中"),                 D_FONT_BOLD(8),       QRect(190, 130, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("记录"),                 D_FONT_BOLD(8),       QRect(190, 165, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("记录"),                 D_FONT_BOLD(8),       QRect(190, 200, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("记录"),                 D_FONT_BOLD(8),       QRect(190, 270, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("记录"),                 D_FONT_BOLD(8),       QRect(190, 340, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("记录"),                 D_FONT_BOLD(8),       QRect(190, 410, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },

    {QSTR("记录开始时刻"),            D_FONT_BOLD(8),        QRect(300, 130, 280, 30),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QSTR(""),                      D_FONT_BOLD(8),        QRect(301, 131, 279, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME1     },
    {QSTR("11"),                      D_FONT_BOLD(8),        QRect(301, 166, 279, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME7     },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(301, 201, 279, 69),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME2     },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(301, 271, 279, 69),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME4     },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(301, 341, 279, 69),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME5     },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(301, 411, 279, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME6     },

    {QSTR("记录容量"),               D_FONT_BOLD(8),        QRect(580, 130, 170, 30),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 131, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME1   },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 166, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME7   },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 201, 119, 34+34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME2   },
    //{QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 236, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME3   },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 271, 119, 34+35),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME4   },
    //{QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 306, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME8   },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 341, 119, 34+35),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME5   },
    //{QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 376, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME9   },
    {QSTR(""),                      D_FONT_BOLD(8),        QRect(581, 411, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME6   },

//    {QSTR("km "),                   D_FONT_BOLD(8),        QRect(700, 130,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("km "),                   D_FONT_BOLD(8),        QRect(700, 165,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("kwh"),                   D_FONT_BOLD(8),        QRect(700, 200,  50, 35+34),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QSTR("kwh"),                   D_FONT_BOLD(8),        QRect(700, 235,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("h  "),                   D_FONT_BOLD(8),        QRect(700, 270,  50, 69),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QSTR("%  "),                   D_FONT_BOLD(8),        QRect(700, 305,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("h  "),                   D_FONT_BOLD(8),        QRect(700, 340,  50, 69),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QSTR("%  "),                   D_FONT_BOLD(8),        QRect(700, 375,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QSTR("kwh"),                   D_FONT_BOLD(8),        QRect(700, 410,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QSTR("选择需要重新累加的数据，然后按[清零]键。"),D_FONT_BOLD(8), QRect( 25, 460, 400, 30),      Qt::white,               Qt::transparent,         CONTROL_LABEL,          ID_IGNORE   },
    {QSTR("清   零"),                D_FONT_BOLD(8),        QRect( 25, 500, 100,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,         ID_PIBCR_BUTTON_CLEAR      },


};
int g_ResetRunRecordRomLen = sizeof(g_PicRom_ResetRunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CResetRunRecordPage,CPage)
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
  //      ON_BTNCLK(ID_PIBCR_BUTTON_MILEAGE,OnMileageBtnBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_CHECKDISTANCE, OnCheckDistanceBtnClk)//检修里程
        ON_BTNCLK(ID_PIBCR_BUTTON_ENERGY,OnEnergyBtnClk)//牵引能耗
        ON_BTNCLK(ID_PIBCR_BUTTON_WORKTIME1,OnWorkTime1BtnClk)//TC1空压机
        ON_BTNCLK(ID_PIBCR_BUTTON_WORKTIME2,OnWorkTime2BtnClk)//TC2空压机
        ON_BTNCLK(ID_PIBCR_BUTTON_ASSENERGY,OnAssenergyBtnClk)//辅助能耗
        ON_BTNCLK(ID_PIBCR_BUTTON_CLEAR,OnClearBtnClk)

END_MESSAGE_MAP()

CResetRunRecordPage::CResetRunRecordPage()
{
}

void CResetRunRecordPage::OnUpdatePage()
{
    UpdateReset_RunRecord();

    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            clear_record_timer--;
            if ( clear_record_timer == 0 )
            {
                times = 0;
                m_bReset = false;
                ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);
                clear_record_timer = 3;
            //    GetDlgItem(ID_PIBCR_LABEL_REDTIME7)->SetCtrlText(g_runtime2);
            //    SetINIInfo("/CNR_BJ/RunTime2", g_runtime2);

//                BitSet( HMI_send_data26, 15, 0);
//                BitSet( HMI_send_data26, 13, 0);
//                BitSet( HMI_send_data26, 12, 0);
//                BitSet( HMI_send_data26, 11, 0);
//                BitSet( HMI_send_data26, 10, 0);
//                BitSet( HMI_send_data26, 9, 0);

//                BitSet( HMI_send_data29, 1, 0);
//                BitSet( HMI_send_data29, 2, 0);
//                BitSet( HMI_send_data29, 3, 0);
//                BitSet( HMI_send_data29, 4, 0);
//                BitSet( HMI_send_data29, 5, 0);
                BitSet( HMI_send_data41, 8, 0);
                BitSet( HMI_send_data41, 7, 0);
                BitSet( HMI_send_data41, 6, 0);
                BitSet( HMI_send_data41, 5, 0);
                BitSet( HMI_send_data41, 4, 0);
              //  BitSet( HMI_send_data26, 9, 0);
            }
        }
    }
}

void CResetRunRecordPage::OnInitPage()
{
     ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->m_bAutoUpState = false;
     //OnMileageBtnBtnClk();
     OnCheckDistanceBtnClk();
}

void CResetRunRecordPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));
#endif

   //  GetDlgItem(ID_PIBCR_LABEL_REDTIME7)->SetCtrlText(g_runtime2);
    this->InitPageHeader();//3.17
     m_bReset = false;
     clear_record_timer = 3;
     ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CResetRunRecordPage::OnComBtn1Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn2Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn3Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn4Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn5Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn6Clk()
        {

        }
        void CResetRunRecordPage::OnComBtn7Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CResetRunRecordPage::OnComBtn1Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn2Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn3Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn4Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn5Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif


void CResetRunRecordPage::OnMileageBtnBtnClk()
{
    clear_run_color = 0;
    //UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnCheckDistanceBtnClk()//检修里程
{
    clear_run_color = 5;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnEnergyBtnClk()//牵引能耗
{
    clear_run_color = 1;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnWorkTime1BtnClk()//TC1空压机
{
    clear_run_color = 2;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnWorkTime2BtnClk()//TC2空压机
{
    clear_run_color = 3;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnAssenergyBtnClk()//辅助能耗
{
    clear_run_color = 4;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnClearBtnClk()
{
    m_bReset = true;
    clear_record_timer=3;

//    if ( clear_run_color == 0 )
//    {
//        write_parameter1 = GetDateStr();
//        write_parameter2 = GetTimeStr();
//        write_parameter3 = "1_tatal_distence";
//        write_parameter4 = StrFromInt( run_record_distance, 10 );
////            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
//        BitSet( HMI_send_data26, 10, 1);
//    }
    if ( clear_run_color == 1 ) //牵引能耗，再生能耗
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "2,3_tration&&brake";
        write_parameter4 = StrFromInt( run_record_data6, 10 );
        write_parameter5 = StrFromInt( run_record_data7, 10 );
//            FileWriteFields(StrFromInt"\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",5);
        //BitSet( HMI_send_data29, 3, 1);
        BitSet( HMI_send_data41, 6, 1);
    }
    if ( clear_run_color == 2 ) //TC1空压机
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "4_Compressor1";
        write_parameter4 = StrFromInt( run_record_data9, 10 );
//            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        BitSet( HMI_send_data41, 8, 1);
    }
    if ( clear_run_color == 3 )//TC2空压机
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "5_Compressor2";
        write_parameter4 = StrFromInt( run_record_data10, 10 );
//            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        BitSet( HMI_send_data41, 7, 1);
    }
    if ( clear_run_color == 4 )//辅助能耗
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "6_ACU";
        write_parameter4 = StrFromInt( run_record_data8, 10 );
//            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        BitSet( HMI_send_data41, 4, 1);
    }
    if(clear_run_color==5)//检修里程
    {
        write_parameter1=GetDateStr();
        write_parameter2=GetTimeStr();
        write_parameter3="7_test_distence";
        write_parameter4=StrFromInt( run_record_today_distance, 10 );
//        FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        BitSet( HMI_send_data41, 5, 1);
        g_runtime2 = GetDateStr()/* + " " + GetTimeStr()*/;
    }
}

void CResetRunRecordPage::UpdateReset_RunRecord()
{

//    run_record_date2 = StrFromInt( ERM_F01_7 / 256 + 2000, 10 )//牵引能耗开始记录时间
//                       + "-" + StrFromInt( ERM_F01_8 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_8 / 256, 10 );
//    run_record_date3 = StrFromInt( ERM_F01_9 % 256 + 2000, 10 )//制动能耗开始记录时间
//                       + "-" + StrFromInt( ERM_F01_9 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_10 % 256, 10 );
//    run_record_date4 = StrFromInt( ERM_F01_10 / 256 + 2000, 10 )//辅助能耗开始记录时间
//                       + "-" + StrFromInt( ERM_F01_11 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_11 / 256, 10 );
//    run_record_date5 = StrFromInt( ERM_F01_12 % 256 + 2000, 10 )//空压机开始记录时间
//                       + "-" + StrFromInt( ERM_F01_12 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_13 % 256, 10 );
//    run_record_date6 = StrFromInt( ERM_F01_13 / 256 + 2000, 10 )//空压机2开始记录时间
//                       + "-" + StrFromInt( ERM_F01_14 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_14 / 256, 10 );
//    run_record_date1 = StrFromInt( ERM_F01_15 % 256 + 2000, 10 )//检修里程开始记录时间
//                       + "-" + StrFromInt( ERM_F01_15 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_16 % 256, 10 );

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
    //run_record_date1 = StrFromInt( ERM_F01_8 / 256 + 2000, 10 )//检修里程开始记录时间 暂无
    //                   + "-" + StrFromInt( ERM_F01_9 % 256, 10 )
     //                  + "-" + StrFromInt( ERM_F01_9 / 256, 10 );

//    run_record_date2=StrFromInt( BCU_selftest_data5/256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data5%256, 10 )+"-"+StrFromInt( BCU_selftest_data6/256, 10 );
//    run_record_date3=StrFromInt( BCU_selftest_data6%256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data7/256, 10 )+"-"+StrFromInt( BCU_selftest_data7%256, 10 );
//    run_record_date4=StrFromInt( BCU_selftest_data8/256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data8%256, 10 )+"-"+StrFromInt( BCU_selftest_data9/256, 10 );
//    run_record_date5=StrFromInt( BCU_selftest_data9%256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data10/256, 10 )+"-"+StrFromInt( BCU_selftest_data10%256, 10 );
//    run_record_date6=StrFromInt( BCU_selftest_data11/256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data11%256, 10 )+"-"+StrFromInt( BCU_selftest_data12/256, 10 );
//    run_record_date1=StrFromInt( BCU_selftest_data12%256+2000, 10 )+"-"+StrFromInt( BCU_selftest_data13/256, 10 )+"-"+StrFromInt( BCU_selftest_data13%256, 10 );

//    run_record_distance=run_record_data1*65536+run_record_data2;
//    run_record_today_distance=(run_record_data3*65536+run_record_data4);

    run_record_distance = (ERM_211_2 * 65536 + ERM_211_1)*0.1;//总里程(在此不显示总里程)

    //run_record_today_distance = ERM_F00_4  + ERM_F00_3* 65536;
    run_record_today_distance = (ERM_211_7 + ERM_211_8* 65536)*0.1;//检修里程
    energy1=ERM_211_3 + ERM_211_4* 65536;//牵引能耗
    //energy2=ERM_211_7 + ERM_211_8* 65536;//制动能耗
    energy3=ERM_211_5 + ERM_211_6* 65536;//辅助能耗
//    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME1,run_record_date1);
    //SetRRun_Record_LabelString_qreal(ID_PIBCR_LABEL_REDVOLUME1,run_record_distance);//总里程

    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME2,run_record_date2);//牵引能耗开始记录时间
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME2,ERM_F00_6);
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME3,ERM_F00_7);
    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME2,energy1);//牵引能耗,再生能耗是一个

    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME3,energy2);//制动能耗  替代再生能耗

    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME4,run_record_date5);
    if(ERM_211_9>=64000)
       SetRun_Record_LabelString_qreal(ID_PIBCR_LABEL_REDVOLUME4,(ERM_211_9-64000)*0.1);//空压机1运行时间
    else
       SetRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME4,ERM_211_9);//空压机1运行时间
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME8,ERM_F02_8%256);

    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME5,run_record_date6);
    if(ERM_211_10>=64000)
       SetRun_Record_LabelString_qreal(ID_PIBCR_LABEL_REDVOLUME5,(ERM_211_10-64000)*0.1);//空压机2运行时间
    else
       SetRun_Record_LabelString_long(ID_PIBCR_LABEL_REDVOLUME5,ERM_211_10);//空压机2运行时间
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME9,ERM_F02_8/256);

    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME6,run_record_date4);
    SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME6,energy3);//辅助能耗

    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME7,run_record_date3);//检修里程记录开始时间
    SetRun_Record_LabelString_qreal(ID_PIBCR_LABEL_REDVOLUME7,run_record_today_distance);//检修里程

    return;
}

void CResetRunRecordPage::UpdateMileageBtn(int id, int colorVal)
{
    if ( clear_run_color == 0 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateEnergyBtn(int id, int colorVal)//牵引能耗
{
    if ( clear_run_color == 1 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateWorkTime1Btn(int id, int colorVal)//TC1空压机
{
    if ( clear_run_color == 2 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateWorkTime2Btn(int id, int colorVal)//TC2空压机
{
    if ( clear_run_color == 3 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateAssenergyBtn(int id, int colorVal)//辅助能耗
{
    if ( clear_run_color == 4 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateCheckDistanceBtn(int id, int colorVal)//检修里程
{
    if ( clear_run_color == 5 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::SetRRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}

void CResetRunRecordPage::SetRRun_Record_LabelString(int id, int DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

     return;
}

void CResetRunRecordPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
     return;
}
void CResetRunRecordPage::SetRun_Record_LabelString_qreal(int id, qreal DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
     return;
}
