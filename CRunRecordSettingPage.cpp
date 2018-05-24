#include "CRunRecordSettingPage.h"
#include <qdatetime.h>
#include <qdebug.h>


ROMDATA g_PicRom_RunRecordSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QSTR("时间设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("空压机\n时间设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QSTR("请输入设定值"),                  D_FONT_BOLD(6),      QRect(20, 135, 120, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(120+30, 135, 200, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MILEAGE            },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(255, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MONTH           },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(390, 135,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_DAY             },
    {QSTR(""),                D_FONT_BOLD(9),      QRect(330+30, 135,  40, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
//    {QSTR("月"),                D_FONT_BOLD(9),      QRect(340, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
//    {QSTR("日"),                D_FONT_BOLD(9),      QRect(475, 135,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
//    {QSTR("设定值更新"),                  D_FONT_BOLD(6),      QRect(20, 245, 120, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(120+30, 245,  200, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MILEAGE1            },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(255, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MINUTE          },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(390, 245,  80, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_SECOND          },
    {QSTR(""),                D_FONT_BOLD(9),      QRect(360, 245,  40, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
//    {QSTR("分"),                D_FONT_BOLD(9),      QRect(340, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
//    {QSTR("秒"),                D_FONT_BOLD(9),      QRect(475, 245,  20, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
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
    {QSTR("总里程设置"),              D_FONT_BOLD(8),      QRect( 25, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_START          },
    {QSTR("清空"),              D_FONT_BOLD(8),      QRect(535, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CLEAR          },
    {QSTR("确认"),              D_FONT_BOLD(8),      QRect(645, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CONFIRM        },
    {QSTR("点击上方条目设置运行时间，全部设置完成后，点【确认】键。"),      D_FONT_BOLD(10),  QRect( 25, 420,  480, 38),      Qt::white,Qt::black,     CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL1       },
    {QSTR("确认无误，按【设置】键启动设置。"),      D_FONT_BOLD(10),      QRect( 25, 460,  300, 38),        Qt::white, Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL2       },
    {QSTR("空压机1设置"),              D_FONT_BOLD(8),      QRect( 150, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_AIRC1          },
    {QSTR("空压机2设置"),              D_FONT_BOLD(8),      QRect( 275, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_AIRC2          },

};
int g_RunRecordSettingRomLen = sizeof(g_PicRom_RunRecordSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordSettingPage,CPage)
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

        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MILEAGE,OnYearEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MONTH,OnMonthEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_DAY,OnDayEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_HOUR,OnHourEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MINUTE,OnMinEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_SECOND,OnSecEditClk)

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

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_AIRC1, OnBtnAirc1Click)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_AIRC2, OnBtnAirc2Click)


END_MESSAGE_MAP()

CRunRecordSettingPage::CRunRecordSettingPage()
{
}

void CRunRecordSettingPage::OnUpdatePage()
{
//    UpdateCCUDate();
//    UpdateATCDate();
//    UpdateATCTime();
//    UpdateATCtimeFlg();
 //   ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(ERM_211_1+ERM_211_2*65536));

    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            runrecord_settting_timer--;

            if (runrecord_settting_timer == 0)
            {
                m_bSet = false;
                times = 0;
                HMI_send_data49=0;
                HMI_send_data50=0;
                //HMI_send_data20=time_setting_6*256+time_setting_5;
                HMI_send_data51=0x0000;//时间设定保存标志

                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC1))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC2))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC1))->SetCtrlEnable(false);
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC2))->SetCtrlEnable(false);
            }
        }
    }
}

void CRunRecordSettingPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);

//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };
//    for (int i=0; i<6; i++)
//    {
//        if (i == 0)
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(10);
//        else
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetLimitNum(2);

        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetLimitNum(10);
        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->m_bIsPassWord = false;
//    }

    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC2))->m_bAutoUpState = false;
    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_DOWN);lmh9.24
    //((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME))->ChangeButtonState(LBUTTON_UP);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL2))->SetAlignment(Qt::AlignLeft);
}

void CRunRecordSettingPage::OnShowPage()
{

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
    this->InitPageHeader();//3.17
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC1))->SetCtrlEnable(false);
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC2))->SetCtrlEnable(false);
     runrecord_settting_timer = 4;
     runrecord_setting=0;
     //QDate date = QDate::currentDate();
     GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("");
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->HideButton();

//     GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
//     QTime time = QDateTime::currentDateTime().time();
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
//     GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));


}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordSettingPage::OnComBtn1Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn2Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn3Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn4Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn5Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn6Clk()
        {

        }
        void CRunRecordSettingPage::OnComBtn7Clk()
        {
            g_mRunsetBtnTimes++;
            if(g_mRunsetBtnTimes == 4)
            {
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ShowButton();
                g_mRunsetBtnTimes = 0;
            }else
            {
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->HideButton();
            }
        }

        void CRunRecordSettingPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_RUNRECORD);
            runrecord_settting_timer = 0;
        }
#else
        void CRunRecordSettingPage::OnComBtn1Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn2Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn3Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn4Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn5Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNRECORD);
            runrecord_settting_timer = 0;
        }

#endif


void CRunRecordSettingPage::OnYearEditClk()
{
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);
}

//void CRunRecordSettingPage::OnMonthEditClk()
//{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_MONTH);
//}

//void CRunRecordSettingPage::OnDayEditClk()
//{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_DAY);
//}

//void CRunRecordSettingPage::OnHourEditClk()
//{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_HOUR);
//}

//void CRunRecordSettingPage::OnMinEditClk()
//{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_MINUTE);
//}

//void CRunRecordSettingPage::OnSecEditClk()
//{
//    SetFocusEdit(ID_PIBTIMESETTING_EDIT_SECOND);
//}

//void CRunRecordSettingPage::SetFocusEdit(int nEditID)
//{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };

//    for (int i=0; i<6; i++)
//    {
//        if (nEditID == nIDArray[i])
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(true);
//        else
//            ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
//    }

//}

void CRunRecordSettingPage::KillAllEditFocus()
{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };

//    for(int i = 0; i < 6; i++)
//    {
//        ((CEdit*)GetDlgItem(nIDArray[i]))->SetSelected(false);
//    }
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(false);
}

int CRunRecordSettingPage::GetFocusEditID()
{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_YEAR,
//       ID_PIBTIMESETTING_EDIT_MONTH,
//       ID_PIBTIMESETTING_EDIT_DAY,
//       ID_PIBTIMESETTING_EDIT_HOUR,
//       ID_PIBTIMESETTING_EDIT_MINUTE,
//       ID_PIBTIMESETTING_EDIT_SECOND,
//    };

//    bool bFind = true;
//    for (int i=0; i<6; i++)
//    {
//        if (((CEdit*)GetDlgItem(nIDArray[i]))->GetSelected())
//        {
//           return nIDArray[i];
//        }
//        else
//        {
//            bFind = false;
//        }
//    }
//    if (!bFind)
//    {
//        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_YEAR))->SetSelected(true);
//        return ID_PIBTIMESETTING_EDIT_YEAR;
//    }
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);
    return ID_PIBTIMESETTING_EDIT_MILEAGE;
}

void CRunRecordSettingPage::OnNum0Clk()
{
    AddStrToFocusEdit("0");
}

void CRunRecordSettingPage::OnNum1Clk()
{
    AddStrToFocusEdit("1");
}

void CRunRecordSettingPage::OnNum2Clk()
{
    AddStrToFocusEdit("2");
}

void CRunRecordSettingPage::OnNum3Clk()
{
    AddStrToFocusEdit("3");
}

void CRunRecordSettingPage::OnNum4Clk()
{
    AddStrToFocusEdit("4");
}

void CRunRecordSettingPage::OnNum5Clk()
{
    AddStrToFocusEdit("5");
}

void CRunRecordSettingPage::OnNum6Clk()
{
    AddStrToFocusEdit("6");
}

void CRunRecordSettingPage::OnNum7Clk()
{
    AddStrToFocusEdit("7");
}

void CRunRecordSettingPage::OnNum8Clk()
{
    AddStrToFocusEdit("8");
}

void CRunRecordSettingPage::OnNum9Clk()
{
    AddStrToFocusEdit("9");
}

void CRunRecordSettingPage::AddStrToFocusEdit(QString str)
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->AddEditStr(str);
}

void CRunRecordSettingPage::OnBtnStart()
{
    m_bSet = true;
    CheckDateInfo();

    runrecord_settting_timer = 4;

    runrecord_setting = GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->GetCtrlText().toInt();
//    time_setting_2 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText().toInt();
//    time_setting_3 = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText().toInt();
//    time_setting_4 = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText().toInt();
//    time_setting_5 = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText().toInt();
//    time_setting_6 = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText().toInt();


    HMI_send_data49=runrecord_setting%65536;
    HMI_send_data50=runrecord_setting/65536;
    //HMI_send_data20=time_setting_6*256+time_setting_5;
    HMI_send_data51=0x00EA;

}

void CRunRecordSettingPage::OnBtnClear()
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

void CRunRecordSettingPage::OnBtnConfirm()
{
    KillAllEditFocus();
    CheckDateInfo();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC1))->SetCtrlEnable(true);
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_AIRC2))->SetCtrlEnable(true);
}

void CRunRecordSettingPage::UpdateCCUDate()
{
//    QString ccu_date = "";
//    QString ccu_time = "";


//            ccu_date = StrFromInt( 2000+CCU_HMI_308_1%256, 10 )+"/"+StrFromInt( CCU_HMI_308_1/256, 10 )+"/"+StrFromInt( CCU_HMI_308_2%256, 10 );
//            ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUDATE))->SetCtrlText(ccu_date);
//            ccu_time = StrFromInt(CCU_HMI_308_2/256, 10 )+":"+StrFromInt( CCU_HMI_308_3%256, 10 )+":"+StrFromInt(CCU_HMI_308_3/256, 10 );
//            ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUTIME))->SetCtrlText(ccu_time);

}

void CRunRecordSettingPage::CheckDateInfo()
{
    QString str;

    //QDate date = QDate::currentDate();
    //year
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("");
    else if(str.toULong() > 4294967295)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("4294967295");
    //month
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText(QString::number(date.month()));
//    else if(str.toInt() > 12)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MONTH)->SetCtrlText("12");

//    //day
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText(QString::number(date.day()));
//    else if(str.toInt() > 31)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_DAY)->SetCtrlText("31");

//    QTime time = QDateTime::currentDateTime().time();
//    //hour
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText(QString::number(time.hour()));
//    else if(str.toInt() > 24)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_HOUR)->SetCtrlText("24");

//    //minite
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText(QString::number(time.minute()));
//    else if(str.toInt() >= 60)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_MINUTE)->SetCtrlText("59");

//    //second
//    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->GetCtrlText();
//    if(str == "")
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText(QString::number(time.second()));
//    else if(str.toInt() >= 60)
//        GetDlgItem(ID_PIBTIMESETTING_EDIT_SECOND)->SetCtrlText("59");
}
void CRunRecordSettingPage::OnBtnAirc1Click()
{
    m_bSet = true;
    CheckDateInfo();

    runrecord_settting_timer = 4;
    runrecord_setting = GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->GetCtrlText().toInt();
    HMI_send_data49=runrecord_setting%65536;
    HMI_send_data50=runrecord_setting/65536;
    HMI_send_data51=0x007B;

}
void CRunRecordSettingPage::OnBtnAirc2Click()
{
    m_bSet = true;
    CheckDateInfo();

    runrecord_settting_timer = 4;
    runrecord_setting = GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->GetCtrlText().toInt();
    HMI_send_data49=runrecord_setting%65536;
    HMI_send_data50=runrecord_setting/65536;
    HMI_send_data51=0x00D5;

}
