#include "CFaultInfoPage.h"

ROMDATA g_PicRom_FaultInfo[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("详细故障"))
//    {QSTR("123"),                      D_FONT_BOLD(8),      QRect(460, 70, 60, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),               D_FONT_BOLD(8),      QRect( 620, 70, 100, 38),           Qt::black,                Qt::lightGray,               CONTROL_BUTTON,           ID_IGNORE               },
//    {QSTR("当前还有"),                      D_FONT_BOLD(8),      QRect(60, 500, 70, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("10"),                      D_FONT_BOLD(8),      QRect(135, 500, 25, 40),           Qt::red,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("个1,2级故障没有确认，请参考故障记录。"),                      D_FONT_BOLD(8),      QRect(160, 500,345, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_FaultInfoRomLen = sizeof(g_PicRom_FaultInfo)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CFaultInfoPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CFaultInfoPage::CFaultInfoPage()
{
}

void CFaultInfoPage::OnUpdatePage()
{

}

void CFaultInfoPage::OnInitPage()
{
    m_FaultInfoDlg.m_ShowBorder = true;
}

void CFaultInfoPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));

    if (m_FaultInfoDlg.isHidden())
    {
        m_FaultInfoDlg.setParent(GetParentDlg());
        m_FaultInfoDlg.move(80,120);
        m_FaultInfoDlg.show();
    }
}

void CFaultInfoPage::OnComBtn1Clk()
{

}

void CFaultInfoPage::OnComBtn2Clk()
{

}

void CFaultInfoPage::OnComBtn3Clk()
{

}

void CFaultInfoPage::OnComBtn4Clk()
{

}

void CFaultInfoPage::OnComBtn5Clk()
{

}

void CFaultInfoPage::OnComBtn6Clk()
{
  m_FaultInfoDlg.hide();
  ChangePage(PAGE_INDEX_MAINTAIN);
}
