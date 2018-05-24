#include "CInstancyBroadcastPage.h"

ROMDATA g_PicRom_InstancyBroadcast[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("紧急广播"))
    {QSTR("故障临时停车"),            D_FONT_BOLD(8),      QRect( 55, 70, 120,  38),            Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R1     },
    {QSTR("清客警示"),                D_FONT_BOLD(8),      QRect( 55, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R1     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect( 55, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R1     },

    {QSTR("其他临时停车"),         D_FONT_BOLD(8),      QRect(195,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R2     },
    {QSTR("区间清客"),            D_FONT_BOLD(8),      QRect(195, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R2     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(195, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R2     },

    {QSTR("故障站台清客"),         D_FONT_BOLD(8),      QRect(335,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R3     },
    {QSTR("大小交路转换"),         D_FONT_BOLD(8),      QRect(335, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R3     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(335, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R3     },

    {QSTR("其他站台清客"),      D_FONT_BOLD(8),      QRect(475,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R4     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(475, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R4     },

    {QSTR("救援站台清客"),      D_FONT_BOLD(8),      QRect(615, 70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R5     },
    {QSTR(""),                D_FONT_BOLD(8),      QRect(615, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R5     },
    {QSTR("紧急广播开始"),      D_FONT_BOLD(8),      QRect(55, 420, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_IBSTART   },
    {QSTR("紧急广播停止"),      D_FONT_BOLD(8),      QRect(195, 420, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_IBSTOP   },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_InstancyBroadcastRomLen = sizeof(g_PicRom_InstancyBroadcast)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CInstancyBroadcastPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R1,OnFaultStopBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R2,OnOtherStopBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R3,OnFaultClearBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R4,OnOtherClearBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R5,OnHelpClearBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R1,OnClearAlarmBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R2,OnAreaClearBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R3,OnExchangeBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_IBSTART,OnIBCStartBpBtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_IBSTOP,OnIBCStopBpBtnClk)
END_MESSAGE_MAP()

CInstancyBroadcastPage::CInstancyBroadcastPage()
{
}

void CInstancyBroadcastPage::OnUpdatePage()
{
    if (m_bBtnsend)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            EBC_valid_timer--;
            if (EBC_valid_timer==0)
            {
                m_bBtnsend = false;

                BitSet( HMI_send_data33,15,0 );//紧急广播停止命令
                BitSet( HMI_send_data33,16,0 );//紧急广播命令
                //HMI_send_data33=0;
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTART))->ChangeButtonState(LBUTTON_UP);
                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTOP))->ChangeButtonState(LBUTTON_UP);
            }
        }
    }
}

void CInstancyBroadcastPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTART))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTOP))->m_bAutoUpState = false;
}

void CInstancyBroadcastPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
     EBC_valid_timer=0;
     this->InitPageHeader();//3.17
}

void CInstancyBroadcastPage::OnComBtn1Clk()
{
//    if(pageback==1)
//    ChangePage(PAGE_INDEX_CARSTATUS1);
//    else if(pageback==2)
//    ChangePage(PAGE_INDEX_CARSTATUS2);
//    else if(pageback==3)
//    ChangePage(PAGE_INDEX_CARSTATUS3);
//    else if(pageback==4)
//    ChangePage(PAGE_INDEX_CARSTATUS4);
//    else if(pageback==5)
//    ChangePage(PAGE_INDEX_RUNSTATE);
//    else if(pageback==6)
//    ChangePage(PAGE_INDEX_MAIN);
    ChangePage(CGlobal::m_nPrePageIndex);
    HMI_send_data33=0;
    SetBtnDown(NULL);
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTART))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTOP))->ChangeButtonState(LBUTTON_UP);
}

void CInstancyBroadcastPage::OnComBtn2Clk()
{

}

void CInstancyBroadcastPage::OnComBtn3Clk()
{

}

void CInstancyBroadcastPage::OnComBtn4Clk()
{

}

void CInstancyBroadcastPage::OnComBtn5Clk()
{

}

void CInstancyBroadcastPage::OnComBtn6Clk()
{

}

void CInstancyBroadcastPage::OnFaultStopBtnClk()
{
//    m_bBtnsend=true;
//    EBC_valid_timer=4;
    //BitSet( HMI_send_data26,14,0 );
    //BitSet( HMI_send_data33,16,1 );          //紧急广播命令
    //HMI_send_data33 =(HMI_send_data33&0xff00)+1;                     //紧急广播代码
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,1,1 );
    SetBtnDown(ID_PIBIB_BUTTON_L1R1);
}
void CInstancyBroadcastPage::OnOtherStopBtnClk()
{
//    m_bBtnsend=true;
//    EBC_valid_timer=4;
//    BitSet( HMI_send_data33,16,1 );
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,2,1 );
    //HMI_send_data33 = (HMI_send_data33&0xff00)+2;
    SetBtnDown(ID_PIBIB_BUTTON_L1R2);
}
void CInstancyBroadcastPage::OnFaultClearBtnClk()
{
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,1,1 );
    BitSet( HMI_send_data33,2,1 );
    //HMI_send_data33 = (HMI_send_data33&0xff00)+3;
    SetBtnDown(ID_PIBIB_BUTTON_L1R3);
}
void CInstancyBroadcastPage::OnOtherClearBtnClk()
{
    //HMI_send_data33 = HMI_send_data33&0xff00+4;
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,3,1 );

    SetBtnDown(ID_PIBIB_BUTTON_L1R4);
}
void CInstancyBroadcastPage::OnHelpClearBtnClk()
{
    //HMI_send_data33 = HMI_send_data33&0xff00+5;
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,1,1 );
    BitSet( HMI_send_data33,3,1 );
    SetBtnDown(ID_PIBIB_BUTTON_L1R5);
}
void CInstancyBroadcastPage::OnClearAlarmBtnClk()
{
    //HMI_send_data33 = HMI_send_data33&0xff00+6;
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,2,1 );
    BitSet( HMI_send_data33,3,1 );
    SetBtnDown(ID_PIBIB_BUTTON_L2R1);
}
void CInstancyBroadcastPage::OnAreaClearBtnClk()
{
    //HMI_send_data33 = HMI_send_data33&0xff00+7;
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,1,1 );
    BitSet( HMI_send_data33,2,1 );
    BitSet( HMI_send_data33,3,1 );

    SetBtnDown(ID_PIBIB_BUTTON_L2R2);
}
void CInstancyBroadcastPage::OnExchangeBtnClk()
{
    //HMI_send_data33 = HMI_send_data33&0xff00+8;
    HMI_send_data33 =0;
    BitSet( HMI_send_data33,4,1 );
    SetBtnDown(ID_PIBIB_BUTTON_L2R3);
}

void CInstancyBroadcastPage::OnIBCStartBpBtnClk()
{
    m_bBtnsend=true;
    EBC_valid_timer=4;
    //HMI_send_data33 = 0;
    //BitSet( HMI_send_data26,14,1 );
    BitSet( HMI_send_data33,16,1 );//紧急广播开始命令
    BitSet( HMI_send_data33,15,0 );//紧急广播停止命令

}
void CInstancyBroadcastPage::OnIBCStopBpBtnClk()
{
    m_bBtnsend=true;
    EBC_valid_timer=4;
    HMI_send_data33 = 0;
    //BitSet( HMI_send_data26,14,1 );
    BitSet( HMI_send_data33,15,1 );//紧急广播停止命令
    SetBtnDown(NULL);
}

void CInstancyBroadcastPage::SetBtnDown(int nBtnID)
{
    int nIDArray[] =
    {
        ID_PIBIB_BUTTON_L1R1,
        ID_PIBIB_BUTTON_L1R2,
        ID_PIBIB_BUTTON_L1R3,
        ID_PIBIB_BUTTON_L1R4,
        ID_PIBIB_BUTTON_L1R5,
        ID_PIBIB_BUTTON_L2R1,
        ID_PIBIB_BUTTON_L2R2,
        ID_PIBIB_BUTTON_L2R3
    };

    for (int i=0; i<8; i++)
    {
        if (nIDArray[i] == nBtnID)
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}
