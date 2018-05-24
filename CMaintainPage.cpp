#include "CMaintainPage.h"
#include <qdatetime.h>
#include "cwarningdialog.h"
#include "CConfirmDialog.h"
#include <qprocess.h>
#include <qapplication.h>

extern bool FindUSBDevice(string& usbpath);
extern bool FindFile(const QString &path,vector<string>& filelist);

ROMDATA g_PicRom_Maintain[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("维修菜单"))

    //{QSTR("通信中断"),          D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),          Qt::red,                 Qt::white,              CONTROL_LABEL,           ID_PICMAINTAIN_COMMINTERRUPT            },
// 加减速度试验 lmh 11.21
    {QSTR(""),        D_FONT_BOLD(8),      QRect( 630, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_OPERATIONTEST         },
    //{QSTR(""),      D_FONT_BOLD(8),      QRect(180, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_TRACTIONCHECK     },
    //辅助系统检查
    {QSTR(""),      D_FONT_BOLD(8),      QRect(330, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_AUXILIARYCHECK    },
    //制动试验
    {QSTR(""),          D_FONT_BOLD(8),      QRect(480, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_BRAKETEST         },
    {QSTR("制动自检"),          D_FONT_BOLD(8),      QRect(30, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_BRAKESELFTEST     },
    {QSTR("空调调试"),      D_FONT_BOLD(8),      QRect(180, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_HVACDEBUGCLK     },


    {QSTR("密码设置"),          D_FONT_BOLD(8),      QRect( 30, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_PASSWORDSETTING   },
    {QSTR("参数设置"),          D_FONT_BOLD(8),      QRect(180, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_PARAMENTSETTING   },
    {QSTR("时间设置"),          D_FONT_BOLD(8),      QRect(330, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_TIMESETTING       },
    {QSTR("门参数设置"),          D_FONT_BOLD(8),      QRect(480, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_DOORSETTING          },


    {QSTR("故障记录"),          D_FONT_BOLD(8),      QRect( 30, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_FAULTRECORD       },
    {QSTR("运行记录"),                 D_FONT_BOLD(8),      QRect(180, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RUNRECORD        },
    {QSTR("运行记录清零"),          D_FONT_BOLD(8),      QRect(330, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_CLEARRUNRECORD         },
// AW0校正和电制动切除
    {QSTR(""),          D_FONT_BOLD(8),      QRect(30, 280, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_AWOTESTING          },
    {QSTR(""),        D_FONT_BOLD(8),      QRect(180, 280, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_DisEBTest         },

    //    {QSTR(""),      D_FONT_BOLD(8),      QRect(480, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_IGNORE    },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(630, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_IGNORE        },

//    {QSTR(""),        D_FONT_BOLD(8),      QRect( 30, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(180, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(330, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(480, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(630, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },

//    {QSTR(""),                 D_FONT_BOLD(8),      QRect( 30, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(180, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(330, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(480, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(630, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },

//    {QSTR("故障记录"),            D_FONT_BOLD(8),      QRect(30, 220, 130, 40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,            ID_PICMAINTAIN_BUTTON_FAULTRECORD         },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(180, 220,130, 40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR("运行记录"),           D_FONT_BOLD(8),      QRect(330, 220, 130, 40),          Qt::black,                 Qt::gray,              CONTROL_BUTTON,            ID_PICMAINTAIN_BUTTON_RUNRECORD        },
//    {QSTR("清零运行记录"),        D_FONT_BOLD(8),      QRect(480, 220, 130, 40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,            ID_PICMAINTAIN_BUTTON_CLEARRUNRECORD         },
//    {QSTR(""),                  D_FONT_BOLD(8),      QRect(630, 220, 130, 40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,            ID_IGNORE        },


//    {QSTR(""),         D_FONT_BOLD(8),      QRect(30, 280, 130, 40),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,            ID_IGNORE         },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(180, 280,130, 40),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(330, 280, 130, 40),          Qt::black,                 Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(480, 280, 130, 40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR(""),           D_FONT_BOLD(8),      QRect(630, 280, 130, 40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,            ID_PICMAINTAIN_BUTTON_UPDATE        },
//"更新程序"

//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(30, 340, 130, 40),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(180, 340,130, 40),           Qt::black,                 Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(330, 340, 130, 40),          Qt::black,                 Qt::gray,               CONTROL_BUTTON,            ID_IGNORE        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(480, 340, 130, 40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,            ID_PICMAINTAIN_BUTTON_CLEARLOG        },
//    {QSTR(""),                 D_FONT_BOLD(8),      QRect(630, 340, 130, 40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,            ID_PICMAINTAIN_BUTTON_DOWNLOADLOG        },


};
int g_MaintainRomLen = sizeof(g_PicRom_Maintain)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CMaintainPage,CPage)
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
        // door check
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_DOORCHECK, OnDoorCheckBtnClk)
        // 牵引系统检查
        //ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_TRACTIONCHECK, OnTractionCheckBtnClk)
        //空调调试
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_HVACDEBUGCLK, OnHVACDebugBtnClk)
        // 辅助系统检查
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_AUXILIARYCHECK, OnAccessoryCheckBtnClk)
        // 制动实验
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_BRAKETEST, OnBrakeTestBtnClk)
        // 制动自检
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_BRAKESELFTEST, OnBrakeSelfTestBtnClk)
        // 密码设置
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_PASSWORDSETTING, OnPasswordSetBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_PARAMENTSETTING, OnParameterSetBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_TIMESETTING, OnTimeSetBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_AWOTESTING, OnAW0TestCLK)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_DisEBTest, OnDisEBTestCLK)
        //门参数设置
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_DOORSETTING, OnDoorSettingCLK)

        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_FAULTRECORD, OnFaultRecordBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_RUNRECORD, OnRunRecordBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_CLEARRUNRECORD, OnClearRunRecordBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_OPERATIONTEST, OnTryRuntestBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_UPDATE, OnUpdateProgramm)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_DOWNLOADLOG, OnDownLoadLogCLK)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_CLEARLOG, OnClearLogCLK)
        void  OnAW0TestCLK();
END_MESSAGE_MAP()

CMaintainPage::CMaintainPage()
{
}

void CMaintainPage::OnUpdatePage()
{
    //UpdateCommInterrupt(ID_PICMAINTAIN_COMMINTERRUPT);
}

void CMaintainPage::OnInitPage()
{

}

void CMaintainPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText("");
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
    this->InitPageHeader();//3.17
}

void CMaintainPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAIN);
}

void CMaintainPage::OnComBtn2Clk()
{

}

void CMaintainPage::OnComBtn3Clk()
{

}

void CMaintainPage::OnComBtn4Clk()
{

}

void CMaintainPage::OnComBtn5Clk()
{

}

void CMaintainPage::OnComBtn6Clk()
{

}
void CMaintainPage::OnComBtn7Clk()
{

}

void CMaintainPage::OnComBtn8Clk()
{

}

void CMaintainPage::OnDoorCheckBtnClk()
{
    ChangePage(PAGE_INDEX_DOORTEST);
}

void CMaintainPage::OnTractionCheckBtnClk()
{
    HighPress_Test = 0;
    LowerPress_Test = 0;
    LowerPress_Test1 = 0;
    HighPress_Test1 = 0;

    //ChangePage(PAGE_INDEX_TRACTIONSYSTEMTEST);
}
void CMaintainPage::OnHVACDebugBtnClk()
{
    pw_select=10;
        ChangePage(PAGE_INDEX_PASSWORD);
        pwdisplay="";
        pw_input="";

}
void CMaintainPage::OnAccessoryCheckBtnClk()
{
    //ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTEST);
}

void CMaintainPage::OnBrakeTestBtnClk()
{
    //ChangePage(PAGE_INDEX_BRAKETEST);
}

void CMaintainPage::OnBrakeSelfTestBtnClk()
{
    ChangePage(PAGE_INDEX_BRAKESELFTEST);
}

//密码设置
void CMaintainPage::OnPasswordSetBtnClk()
{
    pw_display_old="";
    pw_display_new1="";
    pw_display_new2="";
    pw_new1="";
    pw_new2="";
    pw_old="";
    ChangePage(PAGE_INDEX_PASSWORDMODIFY);
}


//parameter
void CMaintainPage::OnParameterSetBtnClk()
{
    pw_select=1;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

//时间设定
void CMaintainPage::OnTimeSetBtnClk()
{
    pw_select=3;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";

    time_setting_start=1;

    QTime time = QDateTime::currentDateTime().time();
    QDate date = QDate::currentDate();

    time_setting_1 = date.year();
    time_setting_2 = date.month();
    time_setting_3 = date.day();
    time_setting_4 = time.hour();
    time_setting_5 = time.minute();
    time_setting_6 = time.second();
}

void  CMaintainPage::OnAW0TestCLK()
{
       pw_select=5;
       //ChangePage(PAGE_INDEX_PASSWORD);
       pwdisplay="";
       pw_input="";
}

void  CMaintainPage::OnDisEBTestCLK()
{
    pw_select=6;
    //ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";

}


//故障记录
void CMaintainPage::OnFaultRecordBtnClk()
{

 if (E_FAULTS_TYPE_TODAY == g_fault_type)
     SetFaultType(E_FAULTS_TYPE_TODAY);
 else
     SetFaultType(E_FAULTS_TYPE_HISTORY);

    ChangePage(PAGE_INDEX_TRACTIONSYSTEMFAULT);
}

void CMaintainPage::OnRunRecordBtnClk()
{
    ChangePage(PAGE_INDEX_RUNRECORD);
}

//清零运行记录
void CMaintainPage::OnClearRunRecordBtnClk()
{

    pw_select=2;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";

}

void CMaintainPage::OnTryRuntestBtnClk()
{
    //ChangePage(PAGE_INDEX_TRYRUNTEST);
}
//门参数设置
void CMaintainPage::OnDoorSettingCLK()
{
    pw_select=7;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CMaintainPage::OnUpdateProgramm()
{
//    char cmdbuff[128] = {'\0'};
//    string usbpath;
//
//    if (!FindUSBDevice(usbpath))
//    {
//        CWarningDialog warningDlg;
//        warningDlg.SetWarningStr(QSTR("没有找到USB存储设备!"));
//        warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//        warningDlg.exec();
//    }
//    else
//    {
//        system("mkdir /root/usbshare");
//        sprintf(cmdbuff,"mount -t vfat %s /root/usbshare",usbpath.c_str());
//        system(cmdbuff);
//
//        vector<string> filelist;
//
//        if (!FindFile("/root/usbshare/CNR_BJ", filelist))
//        {
//            CWarningDialog warningDlg;
//            warningDlg.SetWarningStr(QSTR("没有找到文件夹:CNR_BJ!"));
//            warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//            warningDlg.exec();
//        }
//        else
//        {
//            bool bFind = false;
//            for (int i=0; i<filelist.size(); i++)
//            {
//                if (filelist[i] == "CNR_BJ"
//                    || filelist[i] == "cnr_bj")
//                {
//                    bFind = true;
//                    break;
//                }
//            }
//
//            if (!bFind)
//            {
//                CWarningDialog warningDlg;
//                warningDlg.SetWarningStr(QSTR("没有找到可执行程序:CNR_BJ!"));
//                warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//                warningDlg.exec();
//            }
//            else
//            {
//                system("chmod a+x ./BJ_Update");
//                QProcess::startDetached("./BJ_Update");
//            }
//        }
//
//        system("umount /root/usbshare");
//        system("rmdir /root/usbshare");
//    }
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.SetConfirmStr(QSTR("是否进行程序更新?"));
        confirmDlg.exec();
        if(confirmDlg.m_nFlag == 1)
            system("source /bjc.sh");
    }
}

void CMaintainPage::OnClearLogCLK()
{
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("真的要删除所有LOG文件?"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            char cmdbuff[128] = {'\0'};
            sprintf(cmdbuff, "rm -f %s/*.log",qApp->applicationDirPath().toStdString().c_str());
            system(cmdbuff);

            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("删除完毕!"));
            warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
            warningDlg.exec();
        }
    }
}

void CMaintainPage::OnDownLoadLogCLK()
{
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("下载LOG文件?"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            CWarningDialog warningDlg;

            if(DownLoadLOG(qApp->applicationDirPath().toStdString()))
                warningDlg.SetWarningStr(QSTR("下载完毕!"));
            else
                warningDlg.SetWarningStr(QSTR("没有找到USB存储设备!"));

            warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
            warningDlg.exec();
        }
    }
}
