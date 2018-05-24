#include "cpasswordmodifypage.h"
#include "cwarningdialog.h"

ROMDATA g_PicRom_PasswordModify[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QSTR("密码设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("密码\n设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {QSTR("请输入4位密码。"),      D_FONT_BOLD(10),      QRect( 40, 470, 160, 30),            Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBPM_LABEL_LABEL1         },
    {QSTR("3个密码输入完毕后请点击右下角[确认]键。"), D_FONT_BOLD(10),QRect( 40, 500, 470, 30),  Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBPM_LABEL_LABEL2         },
    {QSTR("当前密码"),            D_FONT_BOLD(10),       QRect( 50, 170,  90, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(10),      QRect(170, 155, 230, 55),           Qt::white,                Qt::darkBlue,             CONTROL_EDIT,             ID_PIBPM_EDIT_PSDCUR        },
    {QSTR("新密码"),              D_FONT_BOLD(10),       QRect( 50, 270,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(10),      QRect(170, 255, 230, 55),           Qt::white,                Qt::darkBlue,             CONTROL_EDIT,             ID_PIBPM_EDIT_PSDNEW        },
    {QSTR("确认新密码"),          D_FONT_BOLD(10),       QRect( 50, 370, 110, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(10),      QRect(170, 355, 230, 55),           Qt::white,                Qt::darkBlue,             CONTROL_EDIT,             ID_PIBPM_EDIT_PSDNEWAGAIN   },

    {QSTR("7"),                  D_FONT_BOLD(10),       QRect(480, 150,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM7        },
    {QSTR("8"),                  D_FONT_BOLD(10),       QRect(550, 150,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM8        },
    {QSTR("9"),                  D_FONT_BOLD(10),       QRect(620, 150,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM9        },
    {QSTR("4"),                  D_FONT_BOLD(10),       QRect(480, 220,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM4        },
    {QSTR("5"),                  D_FONT_BOLD(10),       QRect(550, 220,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM5        },
    {QSTR("6"),                  D_FONT_BOLD(10),       QRect(620, 220,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM6        },
    {QSTR("1"),                  D_FONT_BOLD(10),       QRect(480, 290,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM1        },
    {QSTR("2"),                  D_FONT_BOLD(10),       QRect(550, 290,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM2        },
    {QSTR("3"),                  D_FONT_BOLD(10),       QRect(620, 290,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM3        },
    {QSTR("0"),                  D_FONT_BOLD(10),       QRect(480, 360,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM0        },
    {QSTR("清空"),               D_FONT_BOLD(10),       QRect(550, 360, 130, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_CLEAR       },


};
int g_PasswordModifyRomLen = sizeof(g_PicRom_PasswordModify)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CPasswordModifyPage,CPage)
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
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM0, OnNum0Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM1, OnNum1Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM2, OnNum2Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM3, OnNum3Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM4, OnNum4Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM5, OnNum5Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM6, OnNum6Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM7, OnNum7Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM8, OnNum8Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM9, OnNum9Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_CLEAR,OnClearClk)
        ON_BTNCLK(ID_PIBPM_EDIT_PSDCUR,OnCurClk)
        ON_BTNCLK(ID_PIBPM_EDIT_PSDNEW,OnNewClk)
        ON_BTNCLK(ID_PIBPM_EDIT_PSDNEWAGAIN,OnConfirmClk)
END_MESSAGE_MAP()

CPasswordModifyPage::CPasswordModifyPage()
{
}

void CPasswordModifyPage::OnUpdatePage()
{

}

void CPasswordModifyPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->m_bIsPassWord = true;

    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->m_bIsPassWord = true;

    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->m_bIsPassWord = true;

    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(true);
    ((CLabel*)GetDlgItem(ID_PIBPM_LABEL_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBPM_LABEL_LABEL2))->SetAlignment(Qt::AlignLeft);

}


void CPasswordModifyPage::OnShowPage()
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
     this->InitPageHeader();//3.17
     ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetCtrlText("");
     ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetCtrlText("");
     ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetCtrlText("");
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CPasswordModifyPage::OnComBtn1Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CPasswordModifyPage::OnComBtn2Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn3Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn4Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn5Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn6Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn7Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn8Clk()
        {
            QString psw = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->GetCtrlText();
            if (psw == pw_true)
            {
               QString str1 = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->GetCtrlText();
               QString str2 = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->GetCtrlText();
               if (str1 == str2)
               {
                   SetINIInfo("/CNR_BJ/Password",str1);
                   pw_true = str1;
                   ShowWarningDialog(QSTR("设置成功!"));
               }
               else
               {
                   ShowWarningDialog(QSTR("输入不一致!"));
               }
            }
            else
            {
                ShowWarningDialog(QSTR("密码错误!"));
            }
        }
#else
        void CPasswordModifyPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CPasswordModifyPage::OnComBtn2Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn3Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn4Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn5Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn6Clk()
        {
            QString psw = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->GetCtrlText();
            if (psw == pw_true)
            {
               QString str1 = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->GetCtrlText();
               QString str2 = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->GetCtrlText();
               if (str1 == str2)
               {
                   SetINIInfo("/CNR_BJ/Password",str1);
                   pw_true = str1;
                   ShowWarningDialog(QSTR("设置成功!"));
               }
               else
               {
                   ShowWarningDialog(QSTR("输入不一致!"));
               }
            }
            else
            {
                ShowWarningDialog(QSTR("密码错误!"));
            }
        }


#endif


void CPasswordModifyPage::OnNum0Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("0");
}

void CPasswordModifyPage::OnNum1Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("1");
}

void CPasswordModifyPage::OnNum2Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("2");
}

void CPasswordModifyPage::OnNum3Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("3");
}

void CPasswordModifyPage::OnNum4Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("4");
}

void CPasswordModifyPage::OnNum5Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("5");
}

void CPasswordModifyPage::OnNum6Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("6");
}

void CPasswordModifyPage::OnNum7Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("7");
}

void CPasswordModifyPage::OnNum8Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("8");
}

void CPasswordModifyPage::OnNum9Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("9");
}

void CPasswordModifyPage::OnClearClk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->SetCtrlText("");
}

void CPasswordModifyPage::OnCurClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(true);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetSelected(false);
}

void CPasswordModifyPage::OnNewClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetSelected(true);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetSelected(false);
}

void CPasswordModifyPage::OnConfirmClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetSelected(true);
}

int CPasswordModifyPage::GetFocusEditID()
{
   if (((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->GetSelected())
       return ID_PIBPM_EDIT_PSDCUR;

   if (((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->GetSelected())
       return ID_PIBPM_EDIT_PSDNEW;

   if (((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->GetSelected())
       return ID_PIBPM_EDIT_PSDNEWAGAIN;
}

void CPasswordModifyPage::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
    dlg.exec();
}
