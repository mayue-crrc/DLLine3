#include "CCarStatus4Help1Page.h"

ROMDATA g_PicRom_CarStatus4Help1[] =
{
    D_COMMON_PAGE_HEADER(QSTR("制动帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  84, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40,  120, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40, 330, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 304, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 360, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //{"",                            D_FONT_BOLD(6),      QRect(200, 90, 220,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 114, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 114+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 139+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 165+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 192+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 218+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 247+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 274+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 330, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//   {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 360, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 510, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },

    {QSTR("零速信号"),               D_FONT_BOLD(8),      QRect( 41,  91, 158, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201,  91, 108, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(320,  93, 90, 20),            Qt::white,                Qt::white,                CONTROL_LABEL,         ID_IGNORE        },
    {QSTR(""),                  D_FONT_BOLD(8),      QRect(421,  91, 338, 22),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },

//    {QSTR("防滑系统"),             D_FONT_BOLD(8),      QRect( 41, 85, 158, 83),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("有防滑控制"),             D_FONT_BOLD(8),      QRect(201, 87, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("无防滑控制"),               D_FONT_BOLD(8),      QRect(201, 87+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("故障"),               D_FONT_BOLD(8),      QRect(201, 87+55, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("通信异常"),             D_FONT_BOLD(8),      QRect(201, 171, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 90, 90, 20),           Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 87+30,  90, 20),           Qt::white,                Qt::transparent,                   CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 87+60,  90, 20),           Qt::white,                Qt::red,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 171, 90, 20),           Qt::white,                Qt::white,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("防滑系统工作正常且系统有防滑控制"),               D_FONT_BOLD(6),      QRect(421, 90, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("防滑系统工作正常，系统无防滑控制"),               D_FONT_BOLD(6),      QRect(421, 117, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("防滑系统工作不正常"),               D_FONT_BOLD(6),      QRect(421, 147, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急制动线状态"),             D_FONT_BOLD(8),      QRect( 41, 115, 158, 83),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("有防滑控制"),             D_FONT_BOLD(8),      QRect(201, 87, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急制动线得电"),               D_FONT_BOLD(8),      QRect(201, 87+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急制动线无电"),               D_FONT_BOLD(8),      QRect(201, 87+55, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),             D_FONT_BOLD(8),      QRect(201, 171, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 90, 90, 20),           Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急制动"),                   D_FONT_BOLD(8),      QRect(320, 87+30,  90, 20),           Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 87+60,  90, 20),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 171, 90, 20),           Qt::white,                Qt::white,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("BCU反馈回来的紧急制动线得电状态，已施加紧急制动"),               D_FONT_BOLD(6),      QRect(421, 120, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),               D_FONT_BOLD(6),      QRect(421, 147, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //    {QSTR("防滑系统工作不正常"),               D_FONT_BOLD(6),      QRect(421, 147, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("轴防滑"),             D_FONT_BOLD(8),      QRect( 41, 200, 158, 110),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("有防滑控制"),               D_FONT_BOLD(8),      QRect(201, 196, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("无防滑控制"),               D_FONT_BOLD(8),      QRect(201, 223, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),             D_FONT_BOLD(8),      QRect(201, 223+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 223+60, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 200,  90, 20),           Qt::white,                Qt::green,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 227,  90, 20),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 223+30, 90, 20),           Qt::white,                Qt::red,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 222+60,  90, 20),           Qt::white,                Qt::white,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("防滑系统工作正常且轴有防滑控制"),               D_FONT_BOLD(6),      QRect(421, 196, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("防滑系统工作正常，轴无防滑控制"),               D_FONT_BOLD(6),      QRect(421, 223, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("防滑系统工作不正常"),               D_FONT_BOLD(6),      QRect(421, 253, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("计算载重"),             D_FONT_BOLD(8),      QRect( 41, 283, 158, 120),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("载重值有效"),             D_FONT_BOLD(8),      QRect(201, 283+20, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("载重值无效"),               D_FONT_BOLD(8),      QRect(201, 283+50, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 283+80, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("65 t"),                   D_FONT_BOLD(8),      QRect(311, 283+20, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("41 t"),                   D_FONT_BOLD(8),      QRect(320, 283+53,  90, 20),           Qt::white,                Qt::gray,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("32 t"),                      D_FONT_BOLD(8),      QRect(320, 283+83,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，正常"),       D_FONT_BOLD(8),      QRect(421, 283+20, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，但无效"),       D_FONT_BOLD(8),      QRect(421, 283+50, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("基准轴速度"),             D_FONT_BOLD(8),      QRect( 41, 394, 158, 38),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 396, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("65 HZ"),                   D_FONT_BOLD(8),      QRect(311, 396, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("空气簧压力"),             D_FONT_BOLD(8),      QRect( 41, 424, 158, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 426, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("65"),                   D_FONT_BOLD(8),      QRect(311, 426, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("空簧压力"),             D_FONT_BOLD(8),      QRect( 51, 424, 148, 103),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("压力有效"),             D_FONT_BOLD(8),      QRect(201, 426, 108, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),               D_FONT_BOLD(8),      QRect(201, 456, 108, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 486, 108, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值，正常"),       D_FONT_BOLD(8),      QRect(421, 426, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("空簧压力传感器故障"),       D_FONT_BOLD(8),      QRect(421, 456, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6.5 bar"),                   D_FONT_BOLD(8),      QRect(311, 426, 108, 30),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 455,  90, 20),           Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 485,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("整车制动切除\n保持制动切除"),             D_FONT_BOLD(8),      QRect( 41, 223+120, 158, 120),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("整车制动切除"),             D_FONT_BOLD(8),      QRect(201, 223+30+113, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("整车制动未切除"),               D_FONT_BOLD(8),      QRect(201, 223+60+110, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 223+90-5+115, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 223+30+113, 90, 20),           Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                   D_FONT_BOLD(8),      QRect(320, 223+60+110,  90, 20),           Qt::white,                Qt::black,                   CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 223+90-5+117,  90, 20),           Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("整车制动切除时说明无此状态，\n保持制动切除时表明司机室未激活或者无此操作"),               D_FONT_BOLD(5),      QRect(421, 223+60+110, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

};
int g_CarStatus4Help1RomLen = sizeof(g_PicRom_CarStatus4Help1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus4Help1Page,CPage)
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

CCarStatus4Help1Page::CCarStatus4Help1Page()
{
}

void CCarStatus4Help1Page::OnUpdatePage()
{

}

void CCarStatus4Help1Page::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT1))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT2))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT3))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT4))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON3))->SetLabelState(6);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON4))->SetLabelState(6);

}

void CCarStatus4Help1Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("下一页"));
#endif
    this->InitPageHeader();//3.17
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatus4Help1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS4);
        }

        void CCarStatus4Help1Page::OnComBtn2Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn3Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn4Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn5Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn6Clk()
        {

        }
        void CCarStatus4Help1Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_CARSTATUS4HELP);
        }

        void CCarStatus4Help1Page::OnComBtn8Clk()
        {
         //ChangePage(PAGE_INDEX_CARSTATUS4HELP);
        }
#else
        void CCarStatus4Help1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus4Help1Page::OnComBtn2Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn3Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn4Clk()
        {

        }

        void CCarStatus4Help1Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CCarStatus4Help1Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

#endif


