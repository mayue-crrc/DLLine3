#include "CDirectionConfirmPage.h"

ROMDATA g_PicRom_DirectionConfirm[] =
{
    D_COMMON_PAGE_HEADER(QSTR("方向确认") )
    D_COMMON_PAGE_BUTTON_BAR
    {"",                            D_FONT_BOLD(5),      QRect(230, 110, 550,  60),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBDC_TRAIN         },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(690, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBDC_ARROW_RIGHT   },
    {"LEFT",                        D_FONT_BOLD(6),      QRect( 85, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBDC_ARROW_LEFT    },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBDC_ICON_WARNNING },

    {"",                            D_FONT_BOLD(6),      QRect( 50, 210, 625,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 255, 626,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(135, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(225, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(315, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(405, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(495, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(585, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(675, 210,   1,  45),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("车号"),                   D_FONT_BOLD(6),      QRect( 50, 210,  85,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),                     D_FONT_BOLD(6),      QRect(135, 210,  90,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("2"),                     D_FONT_BOLD(6),      QRect(225, 210,  90,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("3"),                     D_FONT_BOLD(6),      QRect(315, 210,  90,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("4"),                     D_FONT_BOLD(6),      QRect(405, 210,  90,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("5"),                     D_FONT_BOLD(6),      QRect(495, 210,  90,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("6"),                     D_FONT_BOLD(6),      QRect(585, 210,  90,  45),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("运行方向正确，请按[确认]键。"),        D_FONT_BOLD(8),      QRect( 37, 450, 400, 30),   Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE        },
    {QSTR("如改变运行方向，请操作列车方向开关。"),  D_FONT_BOLD(8),      QRect( 50, 480, 450, 30),   Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE        },

};
int g_DirectionConfirmRomLen = sizeof(g_PicRom_DirectionConfirm)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDirectionConfirmPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(ID_PIBDC_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)

END_MESSAGE_MAP()

CDirectionConfirmPage::CDirectionConfirmPage()
{
}

void CDirectionConfirmPage::OnUpdatePage()
{
    updateTrain(ID_PIBDC_TRAIN);
    updateArrow(ID_PIBDC_ARROW_LEFT,ID_PIBDC_ARROW_RIGHT);
    updateFault(ID_PIBDC_ICON_WARNNING);
}

void CDirectionConfirmPage::OnInitPage()
{

}

void CDirectionConfirmPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   认"));
}

void CDirectionConfirmPage::OnComBtn1Clk()
{

}

void CDirectionConfirmPage::OnComBtn2Clk()
{

}

void CDirectionConfirmPage::OnComBtn3Clk()
{

}

void CDirectionConfirmPage::OnComBtn4Clk()
{

}

void CDirectionConfirmPage::OnComBtn5Clk()
{

}

void CDirectionConfirmPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_INITIALSETTING);
}

void CDirectionConfirmPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}
