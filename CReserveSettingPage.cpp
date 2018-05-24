#include "CReserveSettingPage.h"

ROMDATA g_PicRom_ReserveSetting[] =
{
    D_COMMON_PAGE_HEADER(QSTR("预留设定") )
    D_COMMON_PAGE_BUTTON_BAR
    {QSTR("表  号"),             D_FONT_BOLD(8),      QRect( 90, 170,  60, 25),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("车次号"),             D_FONT_BOLD(8),      QRect( 90, 270,  60, 25),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("司机号"),             D_FONT_BOLD(8),      QRect( 90, 370,  60, 25),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE       },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(170, 155, 230, 55),           Qt::white,                Qt::darkBlue,            CONTROL_EDIT,            ID_PIBRESERVESET_EDIT_TNUM          },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(170, 255, 230, 55),           Qt::white,                Qt::darkBlue,            CONTROL_EDIT,            ID_PIBRESERVESET_EDIT_TRAINNUM      },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(170, 355, 230, 55),           Qt::white,                Qt::darkBlue,            CONTROL_EDIT,            ID_PIBRESERVESET_EDIT_DRIVERNUM     },
    {QSTR("7"),                 D_FONT_BOLD(8),      QRect(480, 150,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM7        },
    {QSTR("8"),                 D_FONT_BOLD(8),      QRect(550, 150,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM8        },
    {QSTR("9"),                 D_FONT_BOLD(8),      QRect(620, 150,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM9        },
    {QSTR("4"),                 D_FONT_BOLD(8),      QRect(480, 220,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM4        },
    {QSTR("5"),                 D_FONT_BOLD(8),      QRect(550, 220,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM5        },
    {QSTR("6"),                 D_FONT_BOLD(8),      QRect(620, 220,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM6        },
    {QSTR("1"),                 D_FONT_BOLD(8),      QRect(480, 290,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM1        },
    {QSTR("2"),                 D_FONT_BOLD(8),      QRect(550, 290,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM2        },
    {QSTR("3"),                 D_FONT_BOLD(8),      QRect(620, 290,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM3        },
    {QSTR("0"),                 D_FONT_BOLD(8),      QRect(480, 360,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_NUM0        },
    {QSTR("清空"),               D_FONT_BOLD(8),      QRect(550, 360, 130, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PIBRESERVESET_BUTTON_CLEAR      },
    {QSTR("请设定以上各条后，按下[确认]键。"),  D_FONT_BOLD(8), QRect(25, 500,  300, 30),    Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE        },
};
int g_ReserveSettingRomLen = sizeof(g_PicRom_ReserveSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CReserveSettingPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM1, OnNum1Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM2, OnNum2Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM3, OnNum3Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM4, OnNum4Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM5, OnNum5Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM6, OnNum6Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM7, OnNum7Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM8, OnNum8Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM9, OnNum9Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_NUM0, OnNum0Clk)
        ON_BTNCLK(ID_PIBRESERVESET_EDIT_TNUM, OnEdit1Clk)
        ON_BTNCLK(ID_PIBRESERVESET_EDIT_TRAINNUM, OnEdit2Clk)
        ON_BTNCLK(ID_PIBRESERVESET_EDIT_DRIVERNUM, OnEdit3Clk)
        ON_BTNCLK(ID_PIBRESERVESET_BUTTON_CLEAR, OnClearClk)
END_MESSAGE_MAP()

CReserveSettingPage::CReserveSettingPage()
{
}

void CReserveSettingPage::OnUpdatePage()
{
}

void CReserveSettingPage::OnInitPage()
{
     SetEditSel(ID_PIBRESERVESET_EDIT_TNUM);
     int nArray[] =
     {
         ID_PIBRESERVESET_EDIT_TNUM,
         ID_PIBRESERVESET_EDIT_TRAINNUM,
         ID_PIBRESERVESET_EDIT_DRIVERNUM
     };
     for (int i=0; i<3; i++)
     {
         ((CEdit*)GetDlgItem(nArray[i]))->SetLimitNum(8);
     }
}

void CReserveSettingPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   认"));
}

void CReserveSettingPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAIN);
}

void CReserveSettingPage::OnComBtn2Clk()
{

}

void CReserveSettingPage::OnComBtn3Clk()
{

}

void CReserveSettingPage::OnComBtn4Clk()
{

}

void CReserveSettingPage::OnComBtn5Clk()
{

}

void CReserveSettingPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_INITIALSETTING);
}

void CReserveSettingPage::OnNum1Clk()
{
    AddStrToFocusEdit("1");
}

void CReserveSettingPage::OnNum2Clk()
{
    AddStrToFocusEdit("2");
}

void CReserveSettingPage::OnNum3Clk()
{
    AddStrToFocusEdit("3");
}

void CReserveSettingPage::OnNum4Clk()
{
    AddStrToFocusEdit("4");
}

void CReserveSettingPage::OnNum5Clk()
{
    AddStrToFocusEdit("5");
}

void CReserveSettingPage::OnNum6Clk()
{
    AddStrToFocusEdit("6");
}

void CReserveSettingPage::OnNum7Clk()
{
    AddStrToFocusEdit("7");
}

void CReserveSettingPage::OnNum8Clk()
{
    AddStrToFocusEdit("8");
}

void CReserveSettingPage::OnNum9Clk()
{
    AddStrToFocusEdit("9");
}

void CReserveSettingPage::OnNum0Clk()
{
    AddStrToFocusEdit("0");
}

void CReserveSettingPage::OnEdit1Clk()
{
    SetEditSel(ID_PIBRESERVESET_EDIT_TNUM);
}

void CReserveSettingPage::OnEdit2Clk()
{
    SetEditSel(ID_PIBRESERVESET_EDIT_TRAINNUM);
}

void CReserveSettingPage::OnEdit3Clk()
{
    SetEditSel(ID_PIBRESERVESET_EDIT_DRIVERNUM);
}

void CReserveSettingPage::OnConfirmClk()
{
}

void CReserveSettingPage::OnClearClk()
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

void CReserveSettingPage::SetEditSel(int nEidtID)
{
    int nArray[] =
    {
        ID_PIBRESERVESET_EDIT_TNUM,
        ID_PIBRESERVESET_EDIT_TRAINNUM,
        ID_PIBRESERVESET_EDIT_DRIVERNUM
    };

    for (int i=0; i<3; i++)
    {
        if (nEidtID == nArray[i])
            ((CEdit*)GetDlgItem(nArray[i]))->SetSelected(true);
        else
            ((CEdit*)GetDlgItem(nArray[i]))->SetSelected(false);
    }
}

int CReserveSettingPage::GetFocusEditID()
{
    int nArray[] =
    {
        ID_PIBRESERVESET_EDIT_TNUM,
        ID_PIBRESERVESET_EDIT_TRAINNUM,
        ID_PIBRESERVESET_EDIT_DRIVERNUM
    };

    for (int i=0; i<3; i++)
    {
        if (((CEdit*)GetDlgItem(nArray[i]))->GetSelected())
            return nArray[i];
    }

    return ID_PIBRESERVESET_EDIT_TNUM;
}

void CReserveSettingPage::AddStrToFocusEdit(QString str)
{
    int nID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nID))->AddEditStr(str);
}
