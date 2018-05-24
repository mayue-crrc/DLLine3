#include "CCarStatus1Help3Page.h"
#include<qdebug.h>

ROMDATA g_PicRom_CarStatus1Help3[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("运行帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect(40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40,  90, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 120+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(40, 210, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 270, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 300, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 330, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(40, 360-60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(40, 570, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200,  120, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(200, 150, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 180, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 270, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 330, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),              D_FONT_BOLD(8),      QRect( 41, 61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示条件"),              D_FONT_BOLD(8),      QRect(201, 61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示"),                 D_FONT_BOLD(8),      QRect(311, 61, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("备注"),                 D_FONT_BOLD(8),      QRect(421, 61, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("保持制动\n停放制动"),               D_FONT_BOLD(8),      QRect( 41, 75, 158,  60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("缓解"),                   D_FONT_BOLD(8),      QRect(201, 61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("施加"),                   D_FONT_BOLD(8),      QRect(201, 91, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 65,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("(P)"),                   D_FONT_BOLD(8),      QRect(320, 95,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(201, 121, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 125,  90,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },


    {QSTR("空压机状态"),              D_FONT_BOLD(8),      QRect( 41, 150+30, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("未运行"),                D_FONT_BOLD(8),       QRect(201, 121+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("运行"),                  D_FONT_BOLD(8),       QRect(201, 151+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("过载"),                  D_FONT_BOLD(8),       QRect(201, 181+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),       QRect(320, 155+30,  90, 20),          Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),       QRect(320, 185+30,  90, 20),          Qt::black,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),                   D_FONT_BOLD(8),      QRect(201, 241, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(320, 245,  90,  20),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },


    {QSTR("乘车率"),                D_FONT_BOLD(8),      QRect(50, 95, 150, 30),              Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("显示实际值"),             D_FONT_BOLD(8),     QRect(200, 95, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),     QRect(200, 125, 110, 30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("75%"),                   D_FONT_BOLD(8),      QRect(310, 95, 110,30),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect(330, 125, 70, 20),             Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE         },


//    {QSTR("故障信息"),                    D_FONT_BOLD(8),      QRect( 41, 150, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("发生故障"),                    D_FONT_BOLD(8),      QRect(201, 150, 108, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {"FaultRed.PNG",                    D_DEFAULT_FONT,      QRect(330,  130,  70,  70),         Qt::black,                  Qt::red,                  CONTROL_IMAGE,            ID_IGNORE    },

//    {QSTR("当前有1,2级故障发生时，点击故障"), D_FONT_BOLD(8),      QRect(421, 121, 330, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("按钮可以进入故障显示页面，正常情"), D_FONT_BOLD(8),      QRect(421, 151, 330, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("况下不显示故障三角"),            D_FONT_BOLD(8),      QRect(421, 181, 210, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("速度"),                    D_FONT_BOLD(8),      QRect(41, 211, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("显示实际值"),               D_FONT_BOLD(8),      QRect( 201, 211, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("60"),                     D_FONT_BOLD(8),      QRect( 320, 215, 90, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CARSTATUS1_HELP3_SPEEDVAL         },
//    {QSTR("根据制动传感器计算的速度"),    D_FONT_BOLD(8),      QRect( 421, 211, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("紧急运行模式"),                        D_FONT_BOLD(8),      QRect(41, 241+45+60, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("紧急运行模式"),                        D_FONT_BOLD(8),      QRect( 201, 241+30+60, 108, 28+28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("紧急运行模式"),                        D_FONT_BOLD(8),      QRect( 320, 245+30+60, 90, 20+20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("车辆处于紧急运行模式"), D_FONT_BOLD(8),   QRect( 421, 241+30+60, 338, 28+28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("ATC有效"),                        D_FONT_BOLD(8),      QRect( 201, 271+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("ATO模式"),                        D_FONT_BOLD(8),      QRect( 320, 275+30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("自动折返5种状态"),    D_FONT_BOLD(8),      QRect( 421, 271+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("网络状态"),                    D_FONT_BOLD(8),      QRect(41, 301+45, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("网络模式"),                    D_FONT_BOLD(8),      QRect( 201, 301+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("网络模式"),                    D_FONT_BOLD(8),      QRect( 320, 305+30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("车辆处于TCMS控制模式"),          D_FONT_BOLD(8),      QRect( 421, 301+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("备用模式"),                    D_FONT_BOLD(8),      QRect( 201, 331+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("备用模式"),                    D_FONT_BOLD(8),      QRect( 320, 335+30, 90, 20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("车辆处于硬线控制模式"),          D_FONT_BOLD(8),      QRect( 421, 331+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("洗车模式"),                    D_FONT_BOLD(8),      QRect(41, 391, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("洗车模式"),                    D_FONT_BOLD(8),      QRect( 201, 391, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("洗车模式"),                    D_FONT_BOLD(8),      QRect( 320, 395, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("进入洗车模式显示，平时隐藏"),     D_FONT_BOLD(8),      QRect( 421, 391, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
 //   {QSTR("非洗车模式"),                  D_FONT_BOLD(8),      QRect( 201, 391, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QSTR("回送模式"),                     D_FONT_BOLD(8),      QRect(41, 421, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("回送模式"),                     D_FONT_BOLD(8),      QRect( 201, 421, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("回送模式"),                     D_FONT_BOLD(8),      QRect( 320, 425, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("进入回送模式显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 421, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("高加速模式"),                     D_FONT_BOLD(8),      QRect(41, 421, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("高加速模式"),                     D_FONT_BOLD(8),      QRect( 201, 421, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("高加速模式"),                     D_FONT_BOLD(8),      QRect( 320, 425, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("进入高加模式显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 421, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    //    {QSTR("非逆变模式"),                    D_FONT_BOLD(8),      QRect( 201, 451, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("旁路"),                     D_FONT_BOLD(8),      QRect(41, 271, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("有设备旁路"),                     D_FONT_BOLD(8),      QRect( 201, 271, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("旁路"),                     D_FONT_BOLD(8),      QRect( 325, 271, 80, 28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("当前有设备被旁路时显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 271, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("烟火"),                     D_FONT_BOLD(8),      QRect(41, 301, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("有烟火报警"),                     D_FONT_BOLD(8),      QRect( 201, 301, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("烟火"),                     D_FONT_BOLD(8),      QRect( 325, 301, 80, 28),           Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("当前车辆有烟火报警时显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 301, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("整车制动切除"),                     D_FONT_BOLD(8),      QRect(41, 451, 158, 88),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("整车制动切除"),                     D_FONT_BOLD(8),      QRect( 201, 451, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 325, 453, 80, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNHELP4_ICON1         },
    {QSTR("该车厢整车制动切除"),  D_FONT_BOLD(8),      QRect( 421, 451, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("整车制动未切除"),                     D_FONT_BOLD(8),      QRect( 201, 481, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 325, 481, 80, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),  D_FONT_BOLD(8),      QRect( 421, 481, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),                     D_FONT_BOLD(8),      QRect( 201, 511, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 325, 513, 80, 25),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),  D_FONT_BOLD(8),      QRect( 421, 511, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },



};
int g_CarStatus1Help3RomLen = sizeof(g_PicRom_CarStatus1Help3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help3Page,CPage)
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

CCarStatus1Help3Page::CCarStatus1Help3Page()
{
}

void CCarStatus1Help3Page::OnUpdatePage()
{

}

void CCarStatus1Help3Page::OnInitPage()
{
  //  ((CLabel *)GetDlgItem(ID_CARSTATUS1_HELP3_SPEEDVAL))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP4_ICON1))->SetLabelState(6);
}

void CCarStatus1Help3Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("下一页"));//lmh11.27
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
        void CCarStatus1Help3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus1Help3Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help3Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP3);
        qDebug()<<"PAGE_INDEX_RUNHELP3";
        }

        void CCarStatus1Help3Page::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP5);
            qDebug()<<"PAGE_INDEX_RUNHELP5";

         //ChangePage(PAGE_INDEX_RUNHELP4);              //目前显示的是PAGE_INDEX_RUNHELP5
        }
#else
        void CCarStatus1Help3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus1Help3Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn5Clk()
        {
           ChangePage(PAGE_INDEX_RUNHELP3);
        }

        void CCarStatus1Help3Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP5);

//            ChangePage(PAGE_INDEX_RUNHELP4);                        //目前显示的是PAGE_INDEX_RUNHELP5
        }

#endif


