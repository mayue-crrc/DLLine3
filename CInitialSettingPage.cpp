#include "CInitialSettingPage.h"
#include "CStationSettingPage.h"
#include <qdebug.h>

ROMDATA g_PicRom_InitialSetting[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
   // D_COMMON_PAGE_HEADER_NEW(QSTR("初始设定") )
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("初始\n设定") )

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QSTR("初始设定"))
    D_COMMON_PAGE_BUTTON_BAR

#endif


    {QSTR("始发站 "),                  D_FONT_BOLD(8),      QRect(150, 120, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_ORIGINATOR         },
    {QSTR("终点站"),                   D_FONT_BOLD(8),      QRect(150, 200, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_TERMINUS           },
    {QSTR("当前站 "),                  D_FONT_BOLD(8),      QRect(150, 280, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_CURRENTSTATION         },
    {QSTR("下一站 "),                  D_FONT_BOLD(8),      QRect(150, 360, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_NEXTSTATION         },

    {QSTR("西苑"),                    D_FONT_BOLD(8),      QRect(290, 120, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWORIGINATOR        },
    {QSTR("俸伯"),                    D_FONT_BOLD(8),      QRect(290, 200, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWTERMINUS          },
    {QSTR("俸伯"),                    D_FONT_BOLD(8),      QRect(290, 280, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWCURRENTSTATION          },
    {QSTR("俸伯"),                    D_FONT_BOLD(8),      QRect(290, 360, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWNEXTSTATION          },

    {QSTR(""),                        D_FONT_BOLD(8),      QRect(480, 120, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTORIGINATOR    },
    {QSTR(""),                        D_FONT_BOLD(8),      QRect(480, 200, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTTERMINUS      },
    {QSTR(""),                        D_FONT_BOLD(8),      QRect(480, 280, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTCURRENTSTATION      },
    {QSTR(""),                        D_FONT_BOLD(8),      QRect(480, 360, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTNEXTSTATION      },

    {QSTR("新设定值"),                 D_FONT_BOLD(8),      QRect(290, 70, 150, 40),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE       },
    {QSTR("当前设定值"),               D_FONT_BOLD(8),      QRect(480, 70, 150, 40),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE        },
//    {QSTR("方向确认"),                 D_FONT_BOLD(8),      QRect(545, 500, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_DIRECTIONCONFIRM    },
//    {QSTR("预留设定"),                 D_FONT_BOLD(8),      QRect(675, 500, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_RESERVESET          },
    {QSTR("请设定以上各条后，按右下角[确认]键。\n等待[确认]按钮弹起，且当前设定值与新设定值一致时，表明设置生效。"),D_FONT_BOLD(8), QRect( 50, 440, 700, 50),  Qt::white, Qt::black, CONTROL_LABEL, ID_PIBIS_LABEL_EXPLAIN  },
};
int g_InitialSettingRomLen = sizeof(g_PicRom_InitialSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CInitialSettingPage,CPage)
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
//        ON_BTNCLK(ID_PIBIS_BUTTON_DIRECTIONCONFIRM, OnDirectConfirmBtnClk)
//        ON_BTNCLK(ID_PIBIS_BUTTON_RESERVESET, OnReserveSetBtnClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_ORIGINATOR, OnStartStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_TERMINUS, OnEndStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_CURRENTSTATION, OnCurrentStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_NEXTSTATION, OnNextStationClk)
END_MESSAGE_MAP()

CInitialSettingPage::CInitialSettingPage()
{
   //  ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;
}


void CInitialSettingPage::OnUpdatePage()
{
    if (m_bConfirmDown)
    {
        static quint32 times= 0;
        times++;

        if (times%times_n == 0)
        {
            command_valid_timer--;
            if (command_valid_timer <= 0)
            {
                //BitSet( HMI_send_data28, 8, 0);
                BitSet( HMI_send_data32, 2, 0);
                BitSet( HMI_send_data32, 1, 0);//定时到标志位都应该清空
                BitSet( HMI_send_data33, 14, 0);//定时到标志位都应该清空
                station_select=0;
                station_select1=0;
                station_select2=0;

                updateStationName();
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(true);
                m_bConfirmDown = false;
                times = 0;
            }
        }
    }
}

void CInitialSettingPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_PIBIS_LABEL_EXPLAIN))->SetAlignment(Qt::AlignLeft);
    ((CButton*)GetDlgItem(IDLB_COM_BTN6))->m_bAutoUpState = false;

}

void CInitialSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("确   认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   认"));
#endif

    updateStationName();

    m_bConfirmDown = false;
    command_valid_timer = 4;
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CInitialSettingPage::OnComBtn1Clk()
        {
            // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
             m_bConfirmDown = false;
             ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {

        }
        void CInitialSettingPage::OnComBtn7Clk()
        {

        }

        void CInitialSettingPage::OnComBtn8Clk()
        {
           ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(false);

            m_bConfirmDown = true;
        //    if (command_valid_timer==0)
        //    {
                //HMI_send_data26=station_start+station_end*256;
                HMI_send_data27=station_start+station_end*256;
                HMI_send_data28=station_current+station_next*256;
//            if(station_select==1&&station_select1==1)
//            {

//                BitSet( HMI_send_data32, 2, 1);//起始站设定标志位保存
//                BitSet( HMI_send_data32, 1, 1);//终点站设定标志位保存

//             }
             if(station_select==1)
            {

                BitSet( HMI_send_data32, 2, 1);//起始站设定标志位保存

            }
             if(station_select1==1)
            {

                BitSet( HMI_send_data32, 1, 1);//终点站设定标志位保存

            }
             if(station_select2==1)
            {

                BitSet( HMI_send_data33, 14, 1);//当前站和下一站设定标志位保存

            }

                command_valid_timer=4;
               ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);
        //    }
        }
#else
        void CInitialSettingPage::OnComBtn1Clk()
        {
           // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
            m_bConfirmDown = false;
            ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {
            m_bConfirmDown = true;
        //    if (command_valid_timer==0)
        //    {
                HMI_send_data22=station_start;
                HMI_send_data23=station_end;
                BitSet( HMI_send_data25, 16, 1);
                command_valid_timer=4;
        //    }
        }
#endif




void CInitialSettingPage::OnDirectConfirmBtnClk()
{
    //ChangePage(PAGE_INDEX_DIRECTIONCONFIRM);
}

void CInitialSettingPage::OnReserveSetBtnClk()
{
    //ChangePage(PAGE_INDEX_RESERVESETTING);
}

void CInitialSettingPage::OnStartStationClk()
{
    station_select=1;//lmh add
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_START;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

void CInitialSettingPage::OnEndStationClk()
{
    station_select1=1;//lmh add
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_END;
    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void CInitialSettingPage::OnCurrentStationClk()
{
    station_select2=1;//lmh add
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_CURRENT;
    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void CInitialSettingPage::OnNextStationClk()
{
    station_select2=1;//lmh add
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_NEXT;
    ChangePage(PAGE_INDEX_STATIONSETTING);
}

QString CInitialSettingPage::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";

    if ( (nStationID > 0) && (nStationID < 22) )
    {
        if (nStationID == 1)
        {
            retStr = QSTR("大连站");
        }
        if (nStationID == 2)
        {
            retStr = QSTR("香炉礁");
        }
        if (nStationID == 3)
        {
            retStr = QSTR("金家街");
        }
        if (nStationID == 4)
        {
            retStr = QSTR("泉水");
        }
        if (nStationID == 5)
        {
            retStr = QSTR("后盐");
        }
        if (nStationID == 6)
        {
            retStr = QSTR("大连湾");
        }
        if (nStationID == 7)
        {
            retStr = QSTR("快轨车辆段");
        }
        if (nStationID == 8)
        {
            retStr = QSTR("金马路");
        }
        if (nStationID == 9)
        {
            retStr = QSTR("开发区");
        }
        if (nStationID == 10)
        {
            retStr = QSTR("保税区");
        }
        if (nStationID == 11)
        {
            retStr = QSTR("高城山");
        }
        if (nStationID == 12)
        {
            retStr = QSTR("双D港");
        }
        if (nStationID == 13)
        {
            retStr = QSTR("小窑湾");
        }
        if (nStationID == 14)
        {
            retStr = QSTR("黄海大道");
        }
        if (nStationID == 15)
        {
            retStr = QSTR("金石滩");
        }
//        if (nStationID == 30)
//        {
//            retStr = QSTR("开发区(续建线)");
//        }
        if (nStationID == 16)
        {
            retStr = QSTR("通世泰");
        }
        if (nStationID == 17)
        {
            retStr = QSTR("鸿玮澜山");
        }
        if (nStationID == 18)
        {
            retStr = QSTR("东山路");
        }
        if (nStationID == 19)
        {
            retStr = QSTR("和平路");
        }
        if (nStationID == 20)
        {
            retStr = QSTR("十九局");
        }
        if (nStationID == 21)
        {
            retStr = QSTR("九里");
        }
//        if (nStationID == 21)
//        {
//            retStr = QSTR("顺义");
//        }
//        if (nStationID == 22)
//        {
//            retStr = QSTR("俸伯");
//        }
    }
    else
    {
        retStr = QString::number(nStationID);
     //   retStr = QSTR("东小营");
    }

    return retStr;
}

void CInitialSettingPage::updateStationName()
{
    station_start_display = GetStationNameByID(station_start);
    station_end_display = GetStationNameByID(station_end);
    station_current_display = GetStationNameByID(station_current);
    station_next_display = GetStationNameByID(station_next);

    //station_start_ccu = GetStationNameByID(CCU_HMI_221_13%256);
    //station_end_ccu = GetStationNameByID(CCU_HMI_221_13/256);
    station_start_ccu = GetStationNameByID(CCU_HMI_309_10%256);
    station_end_ccu = GetStationNameByID(CCU_HMI_309_10/256);
    station_current_ccu = GetStationNameByID(PIS_Master_9i1_4/256);
    station_next_ccu = GetStationNameByID(PIS_Master_9i1_5%256);


    GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR)->SetCtrlText(station_start_display);
    GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS)->SetCtrlText(station_end_display);
    GetDlgItem(ID_PIBIS_EDIT_NEWCURRENTSTATION)->SetCtrlText(station_current_display);
    GetDlgItem(ID_PIBIS_EDIT_NEWNEXTSTATION)->SetCtrlText(station_next_display);

    GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR)->SetCtrlText(station_start_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS)->SetCtrlText(station_end_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTCURRENTSTATION)->SetCtrlText(station_current_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTNEXTSTATION)->SetCtrlText(station_next_ccu);

}
