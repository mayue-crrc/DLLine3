#include "ctimesettingpage.h"
#include <qdatetime.h>
#include <qdebug.h>

ROMDATA g_PicRom_TimeSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QSTR("时间设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("时间\n设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QSTR("CCU时间"),           D_FONT_BOLD(6),      QRect(460,  50+15,  80, 30),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    //{QSTR("ATC时间"),           D_FONT_BOLD(6),      QRect(460,  90,  80, 30),          Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {"2010/07/10",              D_FONT(6),           QRect(540,  50+15, 100, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_CCUDATE         },
    //{"2010/07/10",              D_FONT(6),           QRect(540,  90, 100, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_ATCDATE         },
    {"00:00:00",                D_FONT(6),           QRect(650,  50+15,  90, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_CCUTIME         },
    //{"00:00:00",                D_FONT(6),           QRect(650,  90,  90, 30),          Qt::white,                 Qt::black,               CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_ATCTIME         },
    //{QSTR("HMI校时"),            D_FONT_BOLD(8),      QRect(120, 60+10, 120, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PIBTIMESETTING_BUTTON_HMICHECKTIME   },
    //{QSTR("ATC校时"),            D_FONT_BOLD(8),      QRect(260, 60+10, 120, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME   },
    //{"60",                      D_FONT(6),           QRect(410,  50+15,  40, 30),           Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL_ATCTIMEFLG1    },
    //{"60",                      D_FONT(6),           QRect(410,  90,  40, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL_ATCTIMEFLG2    },
    //{QSTR(""),                  D_FONT_BOLD(8),      QRect(120, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_IGNORE            },
    {QSTR("20"),                  D_FONT_BOLD(8),      QRect(120, 135,  40, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_IGNORE            },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(120+40, 135,  40, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_YEAR            },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(255, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MONTH           },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(390, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_DAY             },
    {QSTR("年"),                D_FONT_BOLD(9),      QRect(205, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("月"),                D_FONT_BOLD(9),      QRect(340, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("日"),                D_FONT_BOLD(9),      QRect(475, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(120, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_HOUR            },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(255, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MINUTE          },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(390, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_SECOND          },
    {QSTR("时"),                D_FONT_BOLD(9),      QRect(205, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("分"),                D_FONT_BOLD(9),      QRect(340, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("秒"),                D_FONT_BOLD(9),      QRect(475, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("7"),                 D_FONT_BOLD(8),      QRect(535, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_7             },
    {QSTR("8"),                 D_FONT_BOLD(8),      QRect(605, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_8             },
    {QSTR("9"),                 D_FONT_BOLD(8),      QRect(675, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_9             },
    {QSTR("4"),                 D_FONT_BOLD(8),      QRect(535, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_4             },
    {QSTR("5"),                 D_FONT_BOLD(8),      QRect(605, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_5             },
    {QSTR("6"),                 D_FONT_BOLD(8),      QRect(675, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_6             },
    {QSTR("1"),                 D_FONT_BOLD(8),      QRect(535, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_1             },
    {QSTR("2"),                 D_FONT_BOLD(8),      QRect(605, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_2             },
    {QSTR("3"),                 D_FONT_BOLD(8),      QRect(675, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_3             },
    {QSTR("0"),                 D_FONT_BOLD(8),      QRect(535, 345,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_0             },
    {QSTR("启动"),              D_FONT_BOLD(8),      QRect( 25, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_START          },
    {QSTR("清空"),              D_FONT_BOLD(8),      QRect(535, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CLEAR          },
    {QSTR("确认"),              D_FONT_BOLD(8),      QRect(645, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CONFIRM        },
    {QSTR("点击上方条目设置时间，全部设置完成后，点【确认】键。"),      D_FONT_BOLD(10),  QRect( 25, 420,  480, 38),      Qt::white,Qt::black,     CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL1       },
    {QSTR("确认无误，按【启动】键启动时钟。"),      D_FONT_BOLD(10),      QRect( 25, 460,  300, 38),        Qt::white, Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL2       },

};
int g_TimeSettingRomLen = sizeof(g_PicRom_TimeSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTimeSettingPage,CPage)
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

        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_YEAR,OnYearEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MONTH,OnMonthEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_DAY,OnDayEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_HOUR,OnHourEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MINUTE,OnMinEditClk)
        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_SECOND,OnSecEditClk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_0, OnNum0Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_1, OnNum1Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_2, OnNum2Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_3, OnNum3Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_4, OnNum4Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_5, OnNum5Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_6, OnNum6Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_7, OnNum7Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_8, OnNum8Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_9, OnNum9Clk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_START, OnBtnStart)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CLEAR, OnBtnClear)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CONFIRM, OnBtnConfirm)

        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME, OnHMICheckTime)
        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME, OnATCCheckTime)


END_MESSAGE_MAP()

CTimeSettingPage::CTimeSettingPage()
{
}

void CTimeSettingPage::OnUpdatePage()
{
    UpdateCCUDate();
    //UpdateCCUTime();
    UpdateATCDate();
    UpdateATCTime();
    UpdateATCtimeFlg();

//    read_time1 = 2000+CCU_HMI_221_10%256;
//    read_time2 = CCU_HMI_221_10/256;
//    read_time3 = CCU_HMI_221_11%256;
//    read_time4 = CCU_HMI_221_11/256;
//    read_time5 = CCU_HMI_221_12%256;
//    read_time6 = CCU_HMI_221_12/256;
    read_time1 = 2000+CCU_HMI_308_1%256;//年
    read_time2 = CCU_HMI_308_1/256;//月
    read_time3 = CCU_HMI_308_2%256;//日
    read_time4 = CCU_HMI_308_2/256;//时
    read_time5 = CCU_HMI_308_3%256;//分
    read_time6 = CCU_HMI_308_3/256;//秒

    ATC_time_temp1=2000+ATC_time1/256;
    ATC_time_temp2=ATC_time1%256;
    ATC_time_temp3=ATC_time2/256;
    ATC_time_temp4=ATC_time2%256;
    ATC_time_temp5=ATC_time3/256;
    ATC_time_temp6=ATC_time3%256;

    //时间校准标志
//    if (time_set_mode==1)
//        BitSet( HMI_send_data28, 15, 1);
//    else
//        BitSet( HMI_send_data24, 15, 0);

// code move to dialog.cpp createSendData().
//    if (time_set_mode == 1)
//    {
//        if (Bit(ATC_time_flag,9)==1)
//        {
//            ATC_time_temp1 = 2000+ATC_time1/256;
//            ATC_time_temp2 = ATC_time1%256;
//            ATC_time_temp3 = ATC_time2/256;
//            ATC_time_temp4 = ATC_time2%256;
//            ATC_time_temp5 = ATC_time3/256;
//            ATC_time_temp6 = ATC_time3%256;
//            SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5);
//            ATC_time_flag = 0;
//        }
//    }

    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            time_settting_timer--;

            if (time_settting_timer == 0)
            {
                m_bSet = false;
                times = 0;
                //time_settting_timer = 4;//LMH9.24
                //BitSet(HMI_send_data28,15,0);
                BitSet(HMI_send_data32,16,0);//时间设定保存标志
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);

            }
        }
    }
}

void CTimeSettingPage::OnInitPage()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_YEAR);

    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };
    for (int i=0; i<6; i++)
    {
//        if (i == 0)
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(4);
//        else
        ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(2);

        ((CEdit*)GetDlgItem(nIDArray[i]))->m_bIsPassWord = false;

    }

    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->m_bAutoUpState = false;
    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->m_bAutoUpState = false;
    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME))->m_bAutoUpState = false;
    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_DOWN);lmh9.24
    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_UP);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL2))->SetAlignment(Qt::AlignLeft);
    //((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR_FIX))->SetAlignment(Qt::AlignRight);
}

void CTimeSettingPage::OnShowPage()
{
   this->InitPageHeader();//3.17
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("返 回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("返 回"));
#endif

     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(false);
     time_settting_timer = 3;
     QDate date = QDate::currentDate();
     time_setting_tempyear=date.year()-2000;
     GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText(QString::number(time_setting_tempyear));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
     QTime time = QDateTime::currentDateTime().time();
     GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
     GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));

//     if(g_TimeSettingState == TIMESETTING_HMI)
//         OnHMICheckTime();
//     else if(g_TimeSettingState == TIMESETTING_ATC)
//         OnATCCheckTime();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CTimeSettingPage::OnComBtn1Clk()
        {

        }

        void CTimeSettingPage::OnComBtn2Clk()
        {

        }

        void CTimeSettingPage::OnComBtn3Clk()
        {

        }

        void CTimeSettingPage::OnComBtn4Clk()
        {

        }

        void CTimeSettingPage::OnComBtn5Clk()
        {

        }

        void CTimeSettingPage::OnComBtn6Clk()
        {

        }
        void CTimeSettingPage::OnComBtn7Clk()
        {

        }

        void CTimeSettingPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
            time_setting_start = 0;
            m_bSet = false;
            BitSet(HMI_send_data32,16,0);//时间设定保存标志
        }
#else
        void CTimeSettingPage::OnComBtn1Clk()
        {

        }

        void CTimeSettingPage::OnComBtn2Clk()
        {

        }

        void CTimeSettingPage::OnComBtn3Clk()
        {

        }

        void CTimeSettingPage::OnComBtn4Clk()
        {

        }

        void CTimeSettingPage::OnComBtn5Clk()
        {

        }

        void CTimeSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
            time_setting_start = 0;
        }

#endif


void CTimeSettingPage::OnYearEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_YEAR);
}

void CTimeSettingPage::OnMonthEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_MONTH);
}

void CTimeSettingPage::OnDayEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_DAY);
}

void CTimeSettingPage::OnHourEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_HOUR);
}

void CTimeSettingPage::OnMinEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_MINUTE);
}

void CTimeSettingPage::OnSecEditClk()
{
    SetFocusEdit(ID_PIBTIMESETTING_EDIT_SECOND);
}

void CTimeSettingPage::SetFocusEdit(int nEditID)
{
    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };

    for (int i=0; i<6; i++)
    {
        if (nEditID == nIDArray[i])
            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(true);
        else
            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
    }
}

void CTimeSettingPage::KillAllEditFocus()
{
    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };

    for(int i = 0; i < 6; i++)
    {
        ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
    }
}

int CTimeSettingPage::GetFocusEditID()
{
    int nIDArray[] =
    {
       ID_PIBTIMESETTING_EDIT_YEAR,
       ID_PIBTIMESETTING_EDIT_MONTH,
       ID_PIBTIMESETTING_EDIT_DAY,
       ID_PIBTIMESETTING_EDIT_HOUR,
       ID_PIBTIMESETTING_EDIT_MINUTE,
       ID_PIBTIMESETTING_EDIT_SECOND,
    };

    bool bFind = true;
    for (int i=0; i<6; i++)
    {
        if (((CEdit*)GetDlgItem(nIDArray[i]))->GetSelected())
        {
           return nIDArray[i];
        }
        else
        {
            bFind = false;
        }
    }
    if (!bFind)
    {
        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR))->SetSelected(true);
        return ID_PIBTIMESETTING_EDIT_YEAR;
    }
}

void CTimeSettingPage::OnNum0Clk()
{
    AddStrToFocusEdit("0");
}

void CTimeSettingPage::OnNum1Clk()
{
    AddStrToFocusEdit("1");
}

void CTimeSettingPage::OnNum2Clk()
{
    AddStrToFocusEdit("2");
}

void CTimeSettingPage::OnNum3Clk()
{
    AddStrToFocusEdit("3");
}

void CTimeSettingPage::OnNum4Clk()
{
    AddStrToFocusEdit("4");
}

void CTimeSettingPage::OnNum5Clk()
{
    AddStrToFocusEdit("5");
}

void CTimeSettingPage::OnNum6Clk()
{
    AddStrToFocusEdit("6");
}

void CTimeSettingPage::OnNum7Clk()
{
    AddStrToFocusEdit("7");
}

void CTimeSettingPage::OnNum8Clk()
{
    AddStrToFocusEdit("8");
}

void CTimeSettingPage::OnNum9Clk()
{
    AddStrToFocusEdit("9");
}

void CTimeSettingPage::AddStrToFocusEdit(QString str)
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->AddEditStr(str);
}

void CTimeSettingPage::OnBtnStart()
{
    m_bSet = true;
    CheckDateInfo();

    time_settting_timer = 3;

    time_setting_1 = GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->GetCtrlText().toInt();
    time_setting_2 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText().toInt();
    time_setting_3 = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText().toInt();
    time_setting_4 = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText().toInt();
    time_setting_5 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText().toInt();
    time_setting_6 = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText().toInt();

//    HMI_send_data30=(time_setting_1-2000)*256+time_setting_2;
//    HMI_send_data31=time_setting_3*256+time_setting_4;
//    HMI_send_data32=time_setting_5*256+time_setting_6;
    //HMI_send_data18=time_setting_2*256+(time_setting_1-2000);//2014.2.26
    HMI_send_data18=time_setting_2*256+time_setting_1;
    HMI_send_data19=time_setting_4*256+time_setting_3;
    HMI_send_data20=time_setting_6*256+time_setting_5;
    //SetSystemTime(time_setting_1,time_setting_2,time_setting_3,time_setting_4,time_setting_5,time_setting_6);
    //BitSet(HMI_send_data28,15,1);
    BitSet(HMI_send_data32,16,1);
}

void CTimeSettingPage::OnBtnClear()
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

void CTimeSettingPage::OnBtnConfirm()
{
    KillAllEditFocus();
    CheckDateInfo();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(true);   
}

void CTimeSettingPage::UpdateCCUDate()
{
    QString ccu_date = "";
    QString ccu_time = "";

    //ccu_date = StrFromInt( 2000+CCU_HMI_221_10%256, 10 )+"/"+StrFromInt( CCU_HMI_221_10/256, 10 )+"/"+StrFromInt( CCU_HMI_221_11%256, 10 );
    //ccu_date = StrFromInt( 2000+CCU_HMI_221_10%256, 10 )+"/"+StrFromInt( CCU_HMI_221_10/256, 10 )+"/"+StrFromInt( CCU_HMI_221_11%256, 10 );

            ccu_date = StrFromInt( 2000+CCU_HMI_308_1%256, 10 )+"/"+StrFromInt( CCU_HMI_308_1/256, 10 )+"/"+StrFromInt( CCU_HMI_308_2%256, 10 );
            ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUDATE))->SetCtrlText(ccu_date);
            ccu_time = StrFromInt(CCU_HMI_308_2/256, 10 )+":"+StrFromInt( CCU_HMI_308_3%256, 10 )+":"+StrFromInt(CCU_HMI_308_3/256, 10 );
            ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUTIME))->SetCtrlText(ccu_time);

}

//void CTimeSettingPage::UpdateCCUTime()
//{
//    QString ccu_time = "";
//    //ccu_time = StrFromInt(CCU_HMI_221_11/256, 10 )+":"+StrFromInt( CCU_HMI_221_12%256, 10 )+":"+StrFromInt(CCU_HMI_221_12/256, 10 );
//    ccu_time = StrFromInt(CCU_HMI_308_2/256, 10 )+":"+StrFromInt( CCU_HMI_308_3%256, 10 )+":"+StrFromInt(CCU_HMI_308_3/256, 10 );
//    ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUTIME))->SetCtrlText(ccu_time);

//}

void CTimeSettingPage::UpdateATCDate()
{
    QString atc_date = "";

    atc_date = StrFromInt( 2000+ATC_A10_11 % 256, 10 )+"/"+StrFromInt( ATC_A10_11 / 256, 10 )+"/"+StrFromInt(ATC_A10_12 % 256, 10 );
    //((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCDATE))->SetCtrlText(atc_date);
}

void CTimeSettingPage::UpdateATCTime()
{
    QString atc_time = "00:00:00";

    atc_time = StrFromInt(ATC_A10_12 / 256, 10 )+":"+StrFromInt( ATC_A10_13 % 256, 10 )+":"+StrFromInt(ATC_A10_13 / 256, 10 );
    //((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIME))->SetCtrlText(atc_time);
}


void CTimeSettingPage::UpdateATCtimeFlg()
{
    //((CEdit *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIMEFLG1))->SetCtrlText(QString::number(ATC_time_flag));
    //((CEdit *)GetDlgItem(ID_PIBTIMESETTING_LABEL_ATCTIMEFLG2))->SetCtrlText(QString::number(Bit(ATC_time_flag,9) ) );
}


//void CTimeSettingPage::OnHMICheckTime()
//{
//    time_set_mode = 0;
//    time_settting_timer = 4;
//    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_DOWN);
//    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME))->ChangeButtonState(LBUTTON_UP);

//    g_TimeSettingState = TIMESETTING_HMI;
//    SetINIInfo("/CNR_BJ/TimeSettingState", QString::number(g_TimeSettingState));



//}

//void CTimeSettingPage::OnATCCheckTime()
//{
//    time_set_mode = 1;
//    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME))->ChangeButtonState(LBUTTON_DOWN);
//    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_UP);


//    g_TimeSettingState = TIMESETTING_ATC;
//    SetINIInfo("/CNR_BJ/TimeSettingState", QString::number(g_TimeSettingState));



//}

void CTimeSettingPage::CheckDateInfo()
{
    QString str;

    QDate date = QDate::currentDate();
    //year
    time_setting_tempyear=date.year()-2000;
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText(QString::number(time_setting_tempyear));
    else if(str.toInt() > 99)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR)->SetCtrlText("99");

    //month
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
    else if(str.toInt() > 12)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText("12");

    //day
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
    else if(str.toInt() > 31)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText("31");

    QTime time = QDateTime::currentDateTime().time();
    //hour
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
    else if(str.toInt() > 24)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText("24");

    //minite
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
    else if(str.toInt() >= 60)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText("59");

    //second
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));
    else if(str.toInt() >= 60)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText("59");
}
