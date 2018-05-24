#include "CPasswordPage.h"
#include "CConfirmDialog.h"
#include "cwarningdialog.h"
#include <qdebug.h>

ROMDATA g_PicRom_Password[] =
{
   /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
   // D_COMMON_PAGE_HEADER_NEW(QSTR("密  码") )
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("密  码") )

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QSTR("密  码"))
    D_COMMON_PAGE_BUTTON_BAR

#endif


   {QSTR("请输入四位密码。"),      D_FONT_BOLD(8),      QRect( 40, 470, 150, 30),          Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE         },
   {QSTR(" 密  码"),             D_FONT_BOLD(8),      QRect( 70, 175, 90, 25),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_IGNORE         },
   {QSTR(""),                   D_FONT_BOLD(10),     QRect( 170, 155, 230,60),          Qt::white,                Qt::darkBlue,            CONTROL_EDIT,             ID_PIBPD_EDIT_PASSWORD      },
   {QSTR("7"),                  D_FONT_BOLD(8),      QRect(480, 150, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM7        },
   {QSTR("8"),                  D_FONT_BOLD(8),      QRect(550, 150, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM8        },
   {QSTR("9"),                  D_FONT_BOLD(8),      QRect(620, 150, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM9        },
   {QSTR("4"),                  D_FONT_BOLD(8),      QRect(480, 220, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM4        },
   {QSTR("5"),                  D_FONT_BOLD(8),      QRect(550, 220, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM5        },
   {QSTR("6"),                  D_FONT_BOLD(8),      QRect(620, 220, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM6        },
   {QSTR("1"),                  D_FONT_BOLD(8),      QRect(480, 290, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM1        },
   {QSTR("2"),                  D_FONT_BOLD(8),      QRect(550, 290, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM2        },
   {QSTR("3"),                  D_FONT_BOLD(8),      QRect(620, 290, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM3        },
   {QSTR("0"),                  D_FONT_BOLD(8),      QRect(480, 360, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM0        },
   {QSTR("清空"),               D_FONT_BOLD(8),      QRect(550, 360, 130, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_CLEAR       },

};
int g_PasswordRomLen = sizeof(g_PicRom_Password)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CPasswordPage,CPage)
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

        ON_LBUTTONDOWN(ID_PIBPD_EDIT_PASSWORD,OnNormalEdit)

        ON_BTNCLK(ID_PIBPD_BUTTON_NUM1,OnNum1Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM2,OnNum2Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM3,OnNum3Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM4,OnNum4Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM5,OnNum5Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM6,OnNum6Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM7,OnNum7Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM8,OnNum8Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM9,OnNum9Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM0,OnNum0Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_CLEAR,OnClearClk)

END_MESSAGE_MAP()

CPasswordPage::CPasswordPage()
{
}

void CPasswordPage::OnUpdatePage()
{

}

void CPasswordPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->m_bIsPassWord = true;

}

void CPasswordPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("确   认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   认"));
#endif
     this->InitPageHeader();

}

#ifdef PAGE_BUTTON_BAR_NEW
        void CPasswordPage::OnComBtn1Clk()
        {
            if(pw_select == 4||pw_select == 8)
                ChangePage( PAGE_INDEX_MAIN );
            else if (pw_select == 9)
                ChangePage( PAGE_INDEX_RUNRECORD);
            else
                ChangePage( PAGE_INDEX_MAINTAIN );

            ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }

        void CPasswordPage::OnComBtn2Clk()
        {

        }

        void CPasswordPage::OnComBtn3Clk()
        {

        }

        void CPasswordPage::OnComBtn4Clk()
        {

        }

        void CPasswordPage::OnComBtn5Clk()
        {

        }

        void CPasswordPage::OnComBtn6Clk()
        {

        }
        void CPasswordPage::OnComBtn7Clk()
        {

        }

        void CPasswordPage::OnComBtn8Clk()
        {
            pw_input = ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->GetCtrlText();

            if (pw_true == pw_input)
            {
                if (pw_select == 1)
                {
                    ChangePage(PAGE_INDEX_PARAMETERSETTING1);
                }
                if (pw_select == 2)
                {
                    ChangePage(PAGE_INDEX_RESETRUNRECORD);
                }
                if(pw_select == 3)
                {
                    ChangePage(PAGE_INDEX_TIMESETTING);
                }
                if(pw_select == 4)
                {
                    ChangePage(PAGE_INDEX_INITIALSETTING);
                }
                if(pw_select == 8)
                {
                    ChangePage(PAGE_INDEX_STATIONCANCEL);
                }
                if(pw_select == 9)
                {
                    ChangePage(PAGE_INDEX_RUNRECORDSETTING);//运行总里程设置
                }
                if(pw_select == 5)
                {

                    //ChangePage(PAGE_INDEX_AW0SETTING);
                    CConfirmDialog confirmDlg;
                    confirmDlg.SetConfirmStr(QSTR("请确认车辆处于平直轨、\n空载、总风压力正常。"));
                    confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
                    confirmDlg.exec();
                    if(confirmDlg.m_nFlag)
                    {
                    //     ChangePage(PAGE_INDEX_INITIALSETTING);
                        //ChangePage(PAGE_INDEX_AW0SETTING);

                    }
                    else
                    {
                            ChangePage(PAGE_INDEX_MAINTAIN);
                    }
                }
                if(pw_select == 6)
                {

                    ChangePage(PAGE_INDEX_DOORTEST);
//                    CConfirmDialog confirmDlg;
//                    confirmDlg.SetConfirmStr(QSTR("请确认车辆处于平直轨、\n空载、总风压力正常。"));
//                    confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//                    confirmDlg.exec();
//                    if(confirmDlg.m_nFlag)
//                    {
//                    //     ChangePage(PAGE_INDEX_INITIALSETTING);
//                        ChangePage(PAGE_INDEX_AW0SETTING);

//                    }
//                    else
//                    {
//                            ChangePage(PAGE_INDEX_MAINTAIN);
//                    }
                }
               if(pw_select == 7)
                {
                    ChangePage(PAGE_INDEX_DOORSETTING);
                }
               if(pw_select == 10)
                {
               ChangePage(PAGE_INDEX_HVACDEBUG);
                }
            }
            else
            {
               CWarningDialog warningDlg;
               warningDlg.SetWarningStr(QSTR("密码错误,请重新输入!"));
               warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
               warningDlg.exec();
            }
            ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }
#else
        void CPasswordPage::OnComBtn1Clk()
        {
            if(pw_select == 4)
                ChangePage( PAGE_INDEX_MAIN );
            else
                ChangePage( PAGE_INDEX_MAINTAIN );

            ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }

        void CPasswordPage::OnComBtn2Clk()
        {

        }

        void CPasswordPage::OnComBtn3Clk()
        {

        }

        void CPasswordPage::OnComBtn4Clk()
        {

        }

        void CPasswordPage::OnComBtn5Clk()
        {

        }

        void CPasswordPage::OnComBtn6Clk()
        {
            pw_input = ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->GetCtrlText();

            if (pw_true == pw_input)
            {
                if (pw_select == 1)
                {
                    ChangePage(PAGE_INDEX_PARAMETERSETTING1);
                }
                if (pw_select == 2)
                {
                    ChangePage(PAGE_INDEX_RESETRUNRECORD);
                }
                if(pw_select == 3)
                {
                    ChangePage(PAGE_INDEX_TIMESETTING);
                }
                if(pw_select == 4)
                {
                    ChangePage(PAGE_INDEX_INITIALSETTING);
                }
            }
            else
            {
               CWarningDialog warningDlg;
               warningDlg.SetWarningStr(QSTR("密码错误,请重新输入!"));
               warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
               warningDlg.exec();
            }
            ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }
#endif



void CPasswordPage::OnNum1Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("1");
}

void CPasswordPage::OnNum2Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("2");
}

void CPasswordPage::OnNum3Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("3");
}

void CPasswordPage::OnNum4Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("4");
}

void CPasswordPage::OnNum5Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("5");
}

void CPasswordPage::OnNum6Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("6");
}

void CPasswordPage::OnNum7Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("7");
}

void CPasswordPage::OnNum8Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("8");
}

void CPasswordPage::OnNum9Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("9");
}

void CPasswordPage::OnNum0Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("0");
}

void CPasswordPage::OnClearClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
}

void CPasswordPage::OnNormalEdit()
{
    bool bSel = ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->GetSelected();
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetSelected(!bSel);
}
