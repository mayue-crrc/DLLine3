#include "CParameterSettingPage2.h"
#include "CParameterSettingPage1.h"
#include "cwarningdialog.h"

ROMDATA g_PicRom_ParameterSetting2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("参数设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QSTR("车辆4011车轮直径"),    D_FONT_BOLD(8),      QRect(100, 100, 200, 30),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_PICCARSET_LABEL_1               },
//  {QSTR("4011"),               D_FONT_BOLD(8),      QRect(170, 100,  60, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
//  {QSTR("车轮直径"),            D_FONT_BOLD(8),      QRect(240, 100,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("原值设定"),            D_FONT_BOLD(8),      QRect(100, 150,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("850"),                D_FONT_BOLD(8),      QRect(100, 190, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,            ID_PICCARSET_EDIT_OLDWHEELDIAMETER},
    {QSTR("mm"),                 D_FONT_BOLD(8),      QRect(260, 180,  50, 50),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_PICCARSET_LABEL_5              },

    {QSTR("新设定值"),            D_FONT_BOLD(8),      QRect(100, 250,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("850"),                D_FONT_BOLD(8),      QRect(100, 290, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,            ID_PICCARSET_EDIT_NEWWHEELDIAMETER},
    {QSTR("mm"),                 D_FONT_BOLD(8),      QRect(260, 280,  50, 50),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_PICCARSET_LABEL_6              },

    {QSTR("1"),                  D_FONT_BOLD(8),      QRect(460, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM1         },
    {QSTR("2"),                  D_FONT_BOLD(8),      QRect(530, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM2         },
    {QSTR("3"),                  D_FONT_BOLD(8),      QRect(600, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM3         },
    {QSTR("4"),                  D_FONT_BOLD(8),      QRect(460, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM4         },
    {QSTR("5"),                  D_FONT_BOLD(8),      QRect(530, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM5         },
    {QSTR("6"),                  D_FONT_BOLD(8),      QRect(600, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM6         },
    {QSTR("7"),                  D_FONT_BOLD(8),      QRect(460, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM7         },
    {QSTR("8"),                  D_FONT_BOLD(8),      QRect(530, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM8         },
    {QSTR("9"),                  D_FONT_BOLD(8),      QRect(600, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM9         },
    {QSTR("0"),                  D_FONT_BOLD(8),      QRect(460, 400,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM0         },
    {QSTR("清  空"),             D_FONT_BOLD(8),      QRect(530, 400, 130, 60),            Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PICCARSET_BUTTON_CLEAR         },

    {QSTR("列车号有效范围为(0-255)"),  D_FONT_BOLD(8),  QRect(100, 380, 250,  30),        Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PICCARSET_LABEL_2              },
    {QSTR("线路号有效范围为(0-255)"),  D_FONT_BOLD(8),  QRect(100, 380, 250,  30),        Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PICCARSET_LABEL_7              },
    {QSTR("轮径值输入有效范围(770mm-840mm)"),  D_FONT_BOLD(8), QRect(100, 380, 350, 30),      Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PICCARSET_LABEL_3              },
    {QSTR("设置完成后按[设置]键。\n等待[设置]按钮弹起后再退出页面。"),  D_FONT_BOLD(8), QRect(100, 420, 350, 60), Qt::white,Qt::black,             CONTROL_LABEL,            ID_PICCARSET_LABEL_4              },
    {QSTR("设  置"),             D_FONT_BOLD(8),       QRect(100, 500, 100, 40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_SET           },



};
int g_ParameterSetting2RomLen = sizeof(g_PicRom_ParameterSetting2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CParameterSettingPage2,CPage)
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

        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM1, OnNum1Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM2, OnNum2Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM3, OnNum3Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM4, OnNum4Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM5, OnNum5Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM6, OnNum6Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM7, OnNum7Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM8, OnNum8Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM9, OnNum9Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM0, OnNum0Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_SET, OnBtnSetClk)

        ON_BTNCLK(ID_PICCARSET_BUTTON_CLEAR, OnClearClk)
END_MESSAGE_MAP()

CParameterSettingPage2::CParameterSettingPage2()
{
}

void CParameterSettingPage2::OnUpdatePage()
{

}

void CParameterSettingPage2::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_4))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_7))->SetAlignment(Qt::AlignLeft);
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetSelected(true);
}

void CParameterSettingPage2::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));
#endif
    this->InitPageHeader();//3.17
    GetDlgItem(ID_PICCARSET_LABEL_1)->SetCtrlText(parameter_setting_text);
    GetDlgItem(ID_PICCARSET_EDIT_OLDWHEELDIAMETER)->SetCtrlText(QString::number(parameter_wheeldia));
    if (carnum_prompt==1)
    {
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_5))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_6))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_7))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->ShowLabel();
    }
    else if (carnum_prompt==2)
    {
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_5))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_6))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_7))->ShowLabel();
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_7))->HideLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_3))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_5))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_6))->ShowLabel();
    }

    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetCtrlText("");
}




#ifdef PAGE_BUTTON_BAR_NEW
        void CParameterSettingPage2::OnComBtn1Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn2Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn3Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn4Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn5Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn6Clk()
        {

        }
        void CParameterSettingPage2::OnComBtn7Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn8Clk()
        {
            CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
            pPage->ResetParameter1Label(pPage->m_WheelDiaType);
            ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }
#else
        void CParameterSettingPage2::OnComBtn1Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn2Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn3Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn4Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn5Clk()
        {

        }

        void CParameterSettingPage2::OnComBtn6Clk()
        {
           CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
           pPage->ResetParameter1Label(pPage->m_WheelDiaType);
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }

#endif


void CParameterSettingPage2::OnNum1Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("1");
}

void CParameterSettingPage2::OnNum2Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("2");
}

void CParameterSettingPage2::OnNum3Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("3");
}

void CParameterSettingPage2::OnNum4Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("4");
}

void CParameterSettingPage2::OnNum5Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("5");
}

void CParameterSettingPage2::OnNum6Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("6");
}

void CParameterSettingPage2::OnNum7Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("7");
}

void CParameterSettingPage2::OnNum8Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("8");
}

void CParameterSettingPage2::OnNum9Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("9");
}

void CParameterSettingPage2::OnNum0Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("0");
}

void CParameterSettingPage2::OnClearClk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetCtrlText("");
}

void CParameterSettingPage2::OnBtnSetClk()
{
    WHEELDIAINFO info = {0,0};
    CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
    info.WheelDiaType = pPage->m_WheelDiaType;
    parameter_setting_temp = GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER)->GetCtrlText();

    if ( Bit(p_set_signal,1)==1)
    {
        parameter_setting_new = StrToInt( parameter_setting_temp);

        if (parameter_setting_new < 256)
        {
           HMI_send_data_temp1 = StrToInt( parameter_setting_temp);
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }
        else
        {
            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }
    if ( Bit(p_set_signal,6)==1)
    {
        parameter_setting_new = StrToInt( parameter_setting_temp);

        if (parameter_setting_new < 256)
        {
           HMI_send_data_temp3 = StrToInt( parameter_setting_temp);
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }
        else
        {
            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,2)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
              HMI_send_data_temp2=StrToInt( parameter_setting_temp);
              ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

//    if ( Bit(p_set_signal,3)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//               HMI_send_data_temp3=StrToInt( parameter_setting_temp);
//               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,4)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                HMI_send_data_temp4=StrToInt( parameter_setting_temp);
//                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }

//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if (Bit(p_set_signal,5)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//              HMI_send_data_temp5=StrToInt( parameter_setting_temp);
//              ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

    if ( Bit(p_set_signal,3)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
               HMI_send_data_temp6=StrToInt( parameter_setting_temp);
               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }

        }
        else
        {
            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,4)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
               HMI_send_data_temp7=StrToInt( parameter_setting_temp);
               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }
        }
        else
        {
            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

    if ( Bit(p_set_signal,5)==1)
    {
        parameter_setting_new=StrToInt( parameter_setting_temp);
        if (parameter_setting_new>769)
        {
            if (parameter_setting_new<841)
            {
                  HMI_send_data_temp8=StrToInt( parameter_setting_temp);
                  ChangePage(PAGE_INDEX_PARAMETERSETTING1);
            }
            else
            {
                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
                return;
            }

        }
        else
        {
            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
            return;
        }
    }

//    if ( Bit(p_set_signal,9)==1)//M4轮径1
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                HMI_send_data_temp9=StrToInt( parameter_setting_temp);
//                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,10)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//               HMI_send_data_temp10=StrToInt( parameter_setting_temp);
//               ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,11)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                HMI_send_data_temp11=StrToInt( parameter_setting_temp);
//                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,12)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                HMI_send_data_temp12=StrToInt( parameter_setting_temp);
//                ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }

//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,13)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                 HMI_send_data_temp13=StrToInt( parameter_setting_temp);
//                 ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,14)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                 HMI_send_data_temp14=StrToInt( parameter_setting_temp);
//                 ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }

//    if ( Bit(p_set_signal,15)==1)
//    {
//        parameter_setting_new=StrToInt( parameter_setting_temp);
//        if (parameter_setting_new>769)
//        {
//            if (parameter_setting_new<851)
//            {
//                 HMI_send_data_temp15=StrToInt( parameter_setting_temp);
//                 ChangePage(PAGE_INDEX_PARAMETERSETTING1);
//            }
//            else
//            {
//                ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//                return;
//            }
//        }
//        else
//        {
//            ShowWarningDialog(QSTR("输入错误!\n请参考屏幕下方有效范围！"));
//            return;
//        }
//    }
if (info.WheelDiaType != WHEELDIAENUM_LINECODE)
    {
        if (info.WheelDiaType != WHEELDIAENUM_TRAINCODE)
        {
            info.WheelDiaStr = parameter_setting_temp;
            pPage->m_WheelDiaList.append(info);
        }
    }
}

void CParameterSettingPage2::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
    dlg.exec();
}
