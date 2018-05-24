#include "CAccessorySystemTestPage.h"

ROMDATA g_PicRom_AccessorySystemTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW(QSTR(" 辅助系统检查") )
    {"",                          D_FONT_BOLD(5),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_ACCESSORYSYSTEM_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_ACCESSORYSYSTEM_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_ACCESSORYSYSTEM_ARROW_LEFT                 },
#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR("辅助系统检查"))
    D_COMMON_PAGE_BUTTON_BAR

    {"",                            D_FONT_BOLD(5),      QRect(178, 100, 600,  60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_ACCESSORYSYSTEM_TRAIN         },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700, 118,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_ACCESSORYSYSTEM_ARROW_RIGHT   },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(58, 118,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_ACCESSORYSYSTEM_ARROW_LEFT    },

    {QSTR("网压"),                   D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),           Qt::white,               Qt::black,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),           Qt::white,               Qt::black,                 CONTROL_LABEL,          ID_ACCESSORYSYSTEM_V             },

    {QSTR("网流"),                   D_FONT_BOLD(8),      QRect(180,  45, 120,  20),           Qt::white,               Qt::black,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(180,  66, 120,  30),           Qt::white,               Qt::black,                 CONTROL_LABEL,           ID_ACCESSORYSYSTEM_A            },

#endif



    {"",                            D_FONT_BOLD(6),      QRect(10, 170+10, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 200+10, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 240+10, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 280+10, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 320+10, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(10, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(175, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(250, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(325, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(475, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(625, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 170+10,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("车  号"),                D_FONT_BOLD(8),      QRect(11,  170+10, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),                    D_FONT_BOLD(8),      QRect(103,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("2"),                    D_FONT_BOLD(8),      QRect(178,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("3"),                    D_FONT_BOLD(8),      QRect(253,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("4"),                    D_FONT_BOLD(8),      QRect(328,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("5"),                    D_FONT_BOLD(8),      QRect(403,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("6"),                    D_FONT_BOLD(8),      QRect(478,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("7"),                    D_FONT_BOLD(8),      QRect(553,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("8"),                    D_FONT_BOLD(8),      QRect(628,  170+10,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("输出电压"),               D_FONT_BOLD(8),      QRect(11, 201+10, 88,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(103, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_ACCESSORYSYSTEM_LABEL_VCAR1   },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(178, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(253, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(328, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(403, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(478, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(553, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(628, 201+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_ACCESSORYSYSTEM_LABEL_VCAR6   },

    {QSTR("输出电流"),               D_FONT_BOLD(8),      QRect(11, 241+10, 88,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(103, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_ACCESSORYSYSTEM_LABEL_ACAR1   },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(178, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(253, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(328, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(403, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(478, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(553, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(628, 241+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_ACCESSORYSYSTEM_LABEL_ACAR6   },

    {QSTR("可复位故障"),             D_FONT_BOLD(8),      QRect(11, 281+10, 88,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(103, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_ACCESSORYSYSTEM_LABEL_RCAR1   },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(178, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(253, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(328, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(403, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(478, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("-"),                     D_FONT_BOLD(8),      QRect(553, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(628, 281+10,  70,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_ACCESSORYSYSTEM_LABEL_RCAR6   },


    {QSTR("按[复位]键，对辅助系统可复位故障进行复位。"), D_FONT_BOLD(8),QRect(35,  400, 400, 40),      Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("复   位"),                            D_FONT_BOLD(8),QRect(25,  450, 100,  38),     Qt::black,               Qt::gray,                 CONTROL_BUTTON,          ID_TRACTSYSTEST_BUTTON_RESET    },


};
int g_AccessorySystemTestRomLen = sizeof(g_PicRom_AccessorySystemTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAccessorySystemTestPage,CPage)
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

        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_RESET, OnResetBtnClk)
END_MESSAGE_MAP()

CAccessorySystemTestPage::CAccessorySystemTestPage()
{
}

void CAccessorySystemTestPage::OnUpdatePage()
{
    UpdateVValue();
    UpdateAValue();
    UpOutputV();
    UpOutputA();
    UpReset();
    updateTrain(ID_ACCESSORYSYSTEM_TRAIN);
    updateArrow(ID_ACCESSORYSYSTEM_ARROW_LEFT,ID_ACCESSORYSYSTEM_ARROW_RIGHT);

    updateErrorLine(ID_ACCESSORYSYSTEM_TRAIN);

    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            ACU_test_timer--;
            if (ACU_test_timer <= 0)
            {
                m_bReset = false;
                BitSet( HMI_send_data27, 15, 0 );//复位ACU复位故障按钮
                ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
            }
        }
    }
}

void CAccessorySystemTestPage::OnInitPage()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_ACCESSORYSYSTEM_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_ACCESSORYSYSTEM_A))->SetBorderColor(Qt::white);

#endif


    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->m_bAutoUpState = false;

}

void CAccessorySystemTestPage::OnShowPage()
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


    ACU_test_timer = 3;
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void CAccessorySystemTestPage::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_ACCESSORYSYSTEMTESTHELP)
    {
        m_bReset = false;
        BitSet( HMI_send_data27, 15, 0 );//复位ACU复位故障按钮
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
    }
}

#ifdef PAGE_BUTTON_BAR_NEW
void CAccessorySystemTestPage::OnComBtn1Clk()
{

}

void CAccessorySystemTestPage::OnComBtn2Clk()
{

}

void CAccessorySystemTestPage::OnComBtn3Clk()
{

}

void CAccessorySystemTestPage::OnComBtn4Clk()
{

}

void CAccessorySystemTestPage::OnComBtn5Clk()
{

}

void CAccessorySystemTestPage::OnComBtn6Clk()
{

}
void CAccessorySystemTestPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP);
}
void CAccessorySystemTestPage::OnComBtn8Clk()
{
    m_bReset = false;
    BitSet( HMI_send_data27, 15, 0 );//复位ACU复位故障按钮
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CAccessorySystemTestPage::OnComBtn1Clk()
{

}

void CAccessorySystemTestPage::OnComBtn2Clk()
{

}

void CAccessorySystemTestPage::OnComBtn3Clk()
{

}

void CAccessorySystemTestPage::OnComBtn4Clk()
{

}

void CAccessorySystemTestPage::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP);
}

void CAccessorySystemTestPage::OnComBtn6Clk()
{
    m_bReset = false;
    BitSet( HMI_send_data27, 15, 0 );//复位ACU复位故障按钮
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_RESET))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif



void CAccessorySystemTestPage::OnResetBtnClk()
{
    m_bReset = true;
    ACU_test_timer = 3;
//    if (ACU_test_timer==0)
//    {
        BitSet( HMI_send_data27, 15, 1 );
        ACU_test_timer=3;
//    }
}

void CAccessorySystemTestPage::UpdateAValue()
{  
#ifdef PAGE_HEADER_OLD

    if (currency_data2>32767)
    {
       webflow = currency_data2-65536;
    }
    else
    {
       webflow = currency_data2;
    }

    SetAValue(ID_ACCESSORYSYSTEM_A, webflow);

#endif

}

void CAccessorySystemTestPage::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD

    UpdateVoltage(ID_ACCESSORYSYSTEM_V);

#endif

}


void CAccessorySystemTestPage::SetStringValue(int id, QString aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}


void CAccessorySystemTestPage::UpOutputV()
{
//    if (Bit( ACU_611_7, 13 ) )
//        ACU_test_string1 = "OFF";
//    else
//        ACU_test_string1 = QString::number(ACU_610_5%256*2) + " V";

//    SetStringValue(ID_ACCESSORYSYSTEM_LABEL_VCAR1, ACU_test_string1);

//    if (Bit( ACU_621_7, 13 ) )
//        ACU_test_string1="OFF";
//    else
//        ACU_test_string1 = QString::number(ACU_620_5%256*2) + " V";

//    SetStringValue(ID_ACCESSORYSYSTEM_LABEL_VCAR6, ACU_test_string1);

//    SetFaultBGColor(ID_ACCESSORYSYSTEM_LABEL_VCAR1, Bit( ACU_test_data1, 13)||Bit( ACU_test_data1, 12));
//    SetFaultBGColor(ID_ACCESSORYSYSTEM_LABEL_VCAR6, Bit( ACU_test_data1, 5)||Bit( ACU_test_data1, 4));

    if (Bit(CCU_HMI_222_9, 6 )  )
    {
         if (Bit( ACU_611_7, 16 ) || Bit( ACU_611_7, 15 ) || Bit( ACU_610_8, 6 ) )
        {
             if (Bit( ACU_610_8, 6 ) )
             {
                 ACU_status1 = 2;
             }
             if (Bit( ACU_611_7, 15 ) )
             {
                 ACU_status1 = 3;
             }
             if (Bit( ACU_611_7, 16 ) )
             {
                 ACU_status1 = 1;
             }
        }
        else
        {
            ACU_status1 = 0;
            if (Bit( ACU_611_7, 13 ) )
            {
                ACU_status1 = 4;
            }
        }
    }
    else
    {
        ACU_status1 = 5;
    }

    if (Bit(CCU_HMI_222_9, 5 ) )
    {
        if (Bit( ACU_621_7, 16 ) || Bit( ACU_621_7, 15 ) || Bit( ACU_621_8, 6 ) )
        {
             if (Bit( ACU_620_8, 8 ) )
             {
                 ACU_status2 = 2;
             }
             if (Bit( ACU_621_7, 15 ) )
             {
                 ACU_status2 = 3;
             }
             if (Bit( ACU_621_7, 16 ) )
             {
                 ACU_status2 = 1;
             }
        }
        else
        {
            ACU_status2 = 0;
            if (Bit( ACU_621_7, 13 ) )
            {
                ACU_status2 = 4;
            }
        }
    }
    else
    {
        ACU_status2 = 5;
    }


    if ( 0 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V"));

    }
    if ( 1 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetCtrlText("");

    }
    if ( 2 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V"));

    }
    if ( 3 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetCtrlText(QSTR("可复位"));

    }
    if ( 4 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetCtrlText(QSTR("停机"));

    }
    if ( 5 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR1))->SetCtrlText("");
    }

    if ( 0 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V"));

    }
    if ( 1 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetCtrlText("");

    }
    if ( 2 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V"));

    }
    if ( 3 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetCtrlText(QSTR("可复位"));

    }
    if ( 4 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetCtrlText(QSTR("停机"));

    }
    if ( 5 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_VCAR6))->SetCtrlText("");
    }


    SetAcuLabelColor(ID_ACCESSORYSYSTEM_LABEL_VCAR1, ACU_status1);
    SetAcuLabelColor(ID_ACCESSORYSYSTEM_LABEL_VCAR6, ACU_status2);
}

void CAccessorySystemTestPage::UpOutputA()
{
//    SetFaultBGColor(ID_ACCESSORYSYSTEM_LABEL_ACAR1, Bit( ACU_test_data1, 13)||Bit( ACU_test_data1, 12));
//    SetFaultBGColor(ID_ACCESSORYSYSTEM_LABEL_ACAR6, Bit( ACU_test_data1, 5)||Bit( ACU_test_data1, 4));

//    if (Bit( ACU_test_data1, 14))
//        ACU_test_string1="OFF";
//    else
//        ACU_test_string1 = QString::number(train_status_data28*2) + " A";

//    SetStringValue(ID_ACCESSORYSYSTEM_LABEL_ACAR1, ACU_test_string1);

//    if (Bit( ACU_test_data1, 6))
//        ACU_test_string1="OFF";
//    else
//        ACU_test_string1 = QString::number(train_status_data29*2) + " A";

//    SetStringValue(ID_ACCESSORYSYSTEM_LABEL_ACAR6, ACU_test_string1);


    if (Bit(CCU_HMI_222_9, 6 )  )
    {
         if (Bit( ACU_611_7, 16 ) || Bit( ACU_611_7, 15 ) || Bit( ACU_610_8, 6 ) )
        {
             if (Bit( ACU_610_8, 6 ) )
             {
                 ACU_status1 = 2;
             }
             if (Bit( ACU_611_7, 15 ) )
             {
                 ACU_status1 = 3;
             }
             if (Bit( ACU_611_7, 16 ) )
             {
                 ACU_status1 = 1;
             }
        }
        else
        {
            ACU_status1 = 0;
            if (Bit( ACU_611_7, 13 ) )
            {
                ACU_status1 = 4;
            }
        }
    }
    else
    {
        ACU_status1 = 5;
    }

    if (Bit(CCU_HMI_222_9, 5 ) )
    {
        if (Bit( ACU_621_7, 16 ) || Bit( ACU_621_7, 15 ) || Bit( ACU_621_8, 6 ) )
        {
             if (Bit( ACU_620_8, 8 ) )
             {
                 ACU_status2 = 2;
             }
             if (Bit( ACU_621_7, 15 ) )
             {
                 ACU_status2 = 3;
             }
             if (Bit( ACU_621_7, 16 ) )
             {
                 ACU_status2 = 1;
             }
        }
        else
        {
            ACU_status2 = 0;
            if (Bit( ACU_621_7, 13 ) )
            {
                ACU_status2 = 4;
            }
        }
    }
    else
    {
        ACU_status2 = 5;
    }


    if ( 0 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetCtrlText(QString::number(ACU_610_5/256 * 2).append(" A"));

    }
    if ( 1 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetCtrlText("");

    }
    if ( 2 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetCtrlText(QString::number(ACU_610_5/256 * 2).append(" A"));

    }
    if ( 3 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetCtrlText(QSTR("可复位"));

    }
    if ( 4 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetCtrlText(QSTR("停机"));

    }
    if ( 5 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR1))->SetCtrlText("");
    }

    if ( 0 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetCtrlText(QString::number(ACU_620_5/256 * 2).append(" A"));

    }
    if ( 1 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetCtrlText("");

    }
    if ( 2 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetCtrlText(QString::number(ACU_620_5/256 * 2).append(" A"));

    }
    if ( 3 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetCtrlText(QSTR("可复位"));

    }
    if ( 4 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetCtrlText(QSTR("停机"));

    }
    if ( 5 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_ACCESSORYSYSTEM_LABEL_ACAR6))->SetCtrlText("");
    }


    SetAcuLabelColor(ID_ACCESSORYSYSTEM_LABEL_ACAR1, ACU_status1);
    SetAcuLabelColor(ID_ACCESSORYSYSTEM_LABEL_ACAR6, ACU_status2);



}

//可复位故障
void CAccessorySystemTestPage::UpReset()
{
    SetFaultBGColor(ID_ACCESSORYSYSTEM_LABEL_RCAR1, Bit( ACU_test_data1, 15));
    SetFaultBGColor(ID_ACCESSORYSYSTEM_LABEL_RCAR6, Bit( ACU_test_data1, 7));
}


void CAccessorySystemTestPage::SetFaultBGColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CAccessorySystemTestPage::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }

    return;
}
