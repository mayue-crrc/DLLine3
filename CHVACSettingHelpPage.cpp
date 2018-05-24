#include "CHVACSettingHelpPage.h"

ROMDATA g_PicRom_HVACSettingHelp[] =
{
        /*string                font                            rc                  foreground color              background color                control type                   ID           */
        D_COMMON_PAGE_HEADER(QSTR("空调设置帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

        {"",                                   D_FONT_BOLD(6),      QRect( 50,  60, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50,  90, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 200,  117, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 200,  144, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50,  170, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50,  210, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 250-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 290-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(50, 315-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(50, 340-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        //{"",                                   D_FONT_BOLD(6),      QRect( 50, 280, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(200, 370-40, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(200, 400-40, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 430-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//        {"",                                   D_FONT_BOLD(6),      QRect(200, 400, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//        {"",                                   D_FONT_BOLD(6),      QRect( 50, 430, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
 //       {"",                                   D_FONT_BOLD(6),      QRect(200, 460, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 460-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 200, 490-40, 250,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect( 50, 520-40, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
        {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

        {QSTR("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 245,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QSTR("运行模式(上)"),                       D_FONT_BOLD(8),      QRect( 52, 172, 145,  37),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("自动制冷"),                       D_FONT_BOLD(8),      QRect(302, 172, 145,  37),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("司机室被激活的一端，可以设置空调运行模式,\n此处显示CCU反馈给HMI的信息"), D_FONT_BOLD(6),      QRect(452, 92+60+20, 320,  37),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //    {QSTR("空调运行模式"),                       D_FONT_BOLD(8),      QRect(452, 125,  120,  23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//        {QSTR("自动制冷(预)"),                       D_FONT_BOLD(8),      QRect(302, 132+60+20, 145,  37),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//        {QSTR("当各车厢为预冷状态时显示，同理自动制暖模式下"), D_FONT_BOLD(6),      QRect(452, 132+60+20, 320,  37),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QSTR("设置温度"),                       D_FONT_BOLD(8),      QRect(52,  252-40, 145, 37),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("26.0 ℃ "),                      D_FONT_BOLD(10),     QRect(302, 252-40, 145, 37),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("司机室被激活且空调处于自动制冷或自动制暖模式\n可以设置温度,制冷范围(19-28℃),制暖范围(12-20℃)"), D_FONT_BOLD(6),      QRect(452, 252-40, 325, 37),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("车内温度"),                       D_FONT_BOLD(6),      QRect(52,  292-40, 145, 32-10),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("26.0 ℃ "),                      D_FONT_BOLD(8),     QRect(302, 292-40, 145, 32-10),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("显示车厢内的温度"), D_FONT_BOLD(6),      QRect(452, 292-40, 325, 32-10),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("车外温度"),                       D_FONT_BOLD(6),      QRect(52,  317-40, 145, 32-10),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("26.0 ℃ "),                      D_FONT_BOLD(8),     QRect(302, 317-40, 145, 32-10),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("显示车厢外的温度"), D_FONT_BOLD(6),      QRect(452, 317-40, 325, 32-10),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        //     {QSTR("模式可以设置温度,制冷范围"),      D_FONT_BOLD(8),      QRect(452, 177, 280, 25),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
   //     {QSTR("(21-28℃)"),      D_FONT_BOLD(8),      QRect(452, 202, 280, 25),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QSTR("压缩机，冷凝机,\n通风机,预热器"),         D_FONT_BOLD(8),      QRect( 52, 342-40, 145,  87),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("关闭"),                          D_FONT_BOLD(8),      QRect(202, 341-40,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("打开"),                          D_FONT_BOLD(8),      QRect(202, 371-40,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("发生故障"),                       D_FONT_BOLD(8),      QRect(202, 401-40,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QSTR("1"),                            D_FONT_BOLD(8),      QRect(320, 342-40,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF1       },
        {QSTR("2"),                            D_FONT_BOLD(8),      QRect(350, 342-40,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF2       },
        {QSTR("3"),                            D_FONT_BOLD(8),      QRect(380, 342-40,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF3       },
        {QSTR("4"),                            D_FONT_BOLD(8),      QRect(410, 342-40,  20,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNOFF4       },

        {QSTR("1"),                            D_FONT_BOLD(8),      QRect(320, 372-40,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON1        },
        {QSTR("2"),                            D_FONT_BOLD(8),      QRect(350, 372-40,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON2        },
        {QSTR("3"),                            D_FONT_BOLD(8),      QRect(380, 372-40,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON3        },
        {QSTR("4"),                            D_FONT_BOLD(8),      QRect(410, 372-40,  20,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_TURNON4        },

        {QSTR("1"),                            D_FONT_BOLD(8),      QRect(320, 402-40,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT1     },
        {QSTR("2"),                            D_FONT_BOLD(8),      QRect(350, 402-40,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT2     },
        {QSTR("3"),                            D_FONT_BOLD(8),      QRect(380, 402-40,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT3     },
        {QSTR("4"),                            D_FONT_BOLD(8),      QRect(410, 402-40,  20,  28),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_HAVEFAULT4     },

//        {QSTR("新风阀"),                        D_FONT_BOLD(8),      QRect( 52, 282, 145,  87),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//        {QSTR("关闭"),                          D_FONT_BOLD(8),      QRect(202, 281,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//        {QSTR("打开"),                          D_FONT_BOLD(8),      QRect(202, 311,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//        {QSTR("发生故障"),                       D_FONT_BOLD(8),      QRect(202, 341,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//        {QSTR(""),                            D_FONT_BOLD(8),      QRect(320, 282,  50,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNOFF1       },
//        {QSTR(""),                            D_FONT_BOLD(8),      QRect(380, 282,  50,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNOFF2       },

//        {QSTR("60"),                            D_FONT_BOLD(8),      QRect(320, 312,  50,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNON1        },
//        {QSTR("60"),                            D_FONT_BOLD(8),      QRect(380, 312,  50,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_TURNON2        },

//        {QSTR(""),                            D_FONT_BOLD(8),      QRect(320, 342,  50,  26),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT1     },
//        {QSTR(""),                            D_FONT_BOLD(8),      QRect(380, 342,  50,  26),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT2     },

//        {QSTR("新风有30%，60%，100% 3种状态"),   D_FONT_BOLD(8),      QRect(452, 311,  320,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

        {QSTR("控制模式"),                       D_FONT_BOLD(8),      QRect( 52, 91, 145,  78),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("集中控制"),                          D_FONT_BOLD(8),      QRect(202, 91,  96,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("本地控制"),                          D_FONT_BOLD(8),      QRect(202, 118,  96,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("通信异常"),                          D_FONT_BOLD(8),      QRect(202, 145,  96,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("集控"),                      D_FONT_BOLD(8),      QRect(302, 91, 145,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("本控"),                       D_FONT_BOLD(8),      QRect(302, 118, 145,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR(" "),                       D_FONT_BOLD(8),      QRect(312, 147, 125,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("TCMS控制 "),                     D_FONT_BOLD(8),      QRect(452, 91, 245,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("本车控制"),                       D_FONT_BOLD(8),      QRect(452, 118, 245,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("通信异常，相应列的状态信息将不可信"),                       D_FONT_BOLD(8),      QRect(452, 145, 325,  25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("运行模式(下)"),                       D_FONT_BOLD(8),   QRect( 52, 432-40, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        {QSTR("自动制冷"),                       D_FONT_BOLD(8),      QRect(302, 432-40, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
        //{QSTR("空调系统返回的每节车运行模式"), D_FONT_BOLD(8),      QRect(452, 432, 320,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QSTR("显示当前操作所选择的运行模式"), D_FONT_BOLD(8),      QRect(452, 432-40, 320,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QSTR("预冷\n预暖"),                       D_FONT_BOLD(8),      QRect( 52, 461-40, 145,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QSTR("按下预冷"),                          D_FONT_BOLD(8),      QRect(202, 461-40,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QSTR("退出预冷"),                          D_FONT_BOLD(8),      QRect(202, 491-40,  96,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QSTR("预  冷 "),                      D_FONT_BOLD(8),      QRect(332, 461-40, 85,  28),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_CHVACSET_BUTTON_AMERGEWIND1         },
{QSTR("预  冷"),                       D_FONT_BOLD(8),      QRect(332, 491-40, 85,  28),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_CHVACSET_BUTTON_AMERGEWIND2         },
{QSTR("仅在无乘客且自动冷或自动暖的状态下使用，为操作按钮\n各节车厢的预冷,预热状态请参看运行模式(上)"),                     D_FONT_BOLD(6),      QRect(452, 461-40, 325,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//{QSTR("本车控制"),                       D_FONT_BOLD(8),      QRect(452, 401, 245,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("备注：点击【全车】设置所有车厢温度，点击单个车厢号设置相应车厢温度。\n请在激活端首先进行运行模式的设置，设置成功后，当前运行模式将在［当前模式(下)］显示;\n在运行模式为自动制冷和自动制暖模式下可进行温度的设置。"),            D_FONT_BOLD(8),      QRect(50, 524-40, 730,  65),             Qt::white,                Qt::black,         CONTROL_LABEL,          ID_CHVACSET_LABEL_MANUAL         },


};
int g_HVACSettingHelpRomLen = sizeof(g_PicRom_HVACSettingHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHVACSettingHelpPage,CPage)
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
END_MESSAGE_MAP()

CHVACSettingHelpPage::CHVACSettingHelpPage()
{
}

void CHVACSettingHelpPage::OnUpdatePage()
{

}

void CHVACSettingHelpPage::OnInitPage()
{

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF1))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF2))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF3))->SetBorderColor(Qt::green);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNOFF4))->SetBorderColor(Qt::green);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TURNON4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_HAVEFAULT4))->SetBorderColor(Qt::white);

    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNOFF1))->SetBorderColor(Qt::green);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNOFF2))->SetBorderColor(Qt::green);


    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNON1))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_TURNON2))->SetBorderColor(Qt::white);


    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT1))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_NEWWIND_HAVEFAULT2))->SetBorderColor(Qt::white);

    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND2))->SetButtonType(BUTTON_NORMAL);
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);

    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND1))->SetButtonType(BUTTON_STATION);
    ((CLabel*)GetDlgItem(ID_CHVACSET_LABEL_MANUAL))->SetAlignment(Qt::AlignLeft);


}

void CHVACSettingHelpPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
#endif
    this->InitPageHeader();//3.17

}
#ifdef PAGE_BUTTON_BAR_NEW
        void CHVACSettingHelpPage::OnComBtn1Clk()
        {
            if(HVACPageSelect ==1)
            {
                ChangePage(PAGE_INDEX_HVACSETTING);
            }
            else if(HVACPageSelect ==2)
            {
                ChangePage(PAGE_INDEX_HVACDEBUG);
            }
        }

        void CHVACSettingHelpPage::OnComBtn2Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn3Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn4Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn5Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn6Clk()
        {

        }
        void CHVACSettingHelpPage::OnComBtn7Clk()
        {
        //ChangePage(PAGE_INDEX_RUNHELP3);
        }

        void CHVACSettingHelpPage::OnComBtn8Clk()
        {
         //ChangePage(PAGE_INDEX_RUNHELP4);
        }
#else
        void CHVACSettingHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_HVACSETTING);
        }

        void CHVACSettingHelpPage::OnComBtn2Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn3Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn4Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn5Clk()
        {

        }

        void CHVACSettingHelpPage::OnComBtn6Clk()
        {

        }


#endif



