#include "CWheelDiaRecordSelectPage.h"

ROMDATA g_PicRom_WheelDiaRecordSelect[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("轮径履历"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(10),      QRect(100, 64, 600,  85),           Qt::black,                QColor(205,205,205),                 CONTROL_TRAIN,           ID_PIBWDRS_TRAIN                      },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(702,  107, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBWDRS_ARROW_RIGHT                },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(40,  107, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBWDRS_ARROW_LEFT                 },

    {"",                  D_FONT_BOLD(6),      QRect( 10,  160, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  190, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  220, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  250, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  280, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  310, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  340, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  370, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  400, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(175, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(250, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(325, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(475, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(550, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    //{"",                          D_FONT_BOLD(6),      QRect(625, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {QSTR("车   号"),      D_FONT_BOLD(8),      QRect( 11, 161, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),            D_FONT_BOLD(8),      QRect(105, 161,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),            D_FONT_BOLD(8),      QRect(255, 161,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),            D_FONT_BOLD(8),      QRect(405, 161,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),            D_FONT_BOLD(8),      QRect(555, 161,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("5"),            D_FONT_BOLD(8),      QRect(403, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("6"),            D_FONT_BOLD(8),      QRect(478, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("7"),            D_FONT_BOLD(8),      QRect(553, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QSTR("8"),            D_FONT_BOLD(8),      QRect(628, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("车厢号"),                 D_FONT_BOLD(8),      QRect( 11, 192, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4011"),                  D_FONT_BOLD(8),      QRect(105, 192,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER1           },
    {QSTR("4012"),                  D_FONT_BOLD(8),      QRect(255, 192,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER2           },
    {QSTR("4013"),                  D_FONT_BOLD(8),      QRect(405, 192,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER3           },
    {QSTR("4014"),                  D_FONT_BOLD(8),      QRect(555, 192,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER4           },
    //{QSTR("4015"),                  D_FONT_BOLD(8),      QRect(403, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER5           },
    //{QSTR("4016"),                  D_FONT_BOLD(8),      QRect(478, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER6           },
    //{QSTR("4017"),                  D_FONT_BOLD(8),      QRect(553, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER7           },
    //{QSTR("4018"),                  D_FONT_BOLD(8),      QRect(628, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_CARNUMBER8           },

    {QSTR("1轴轮径"),                D_FONT_BOLD(8),      QRect( 11, 222, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 222,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER1     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(255, 222,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER2     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(405, 222,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER3     },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 222,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER4     },
    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(403, 222,  70, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER5     },
    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(478, 222,  70, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER6     },
    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(553, 222,  70, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER7     },
    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(628, 222,  70, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_ASHAFTDIAMETER8     },

//    {QSTR("2轴轮径"),                D_FONT_BOLD(8),      QRect( 11, 252, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 252,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_BSHAFTDIAMETER1     },
//    //{QSTR("--"),                    D_FONT_BOLD(8),      QRect(178, 252,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(253, 252,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(328, 252,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(403, 252,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(478, 252,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("--"),                    D_FONT_BOLD(8),      QRect(553, 252,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 252,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_BSHAFTDIAMETER6     },

//    {QSTR("3轴轮径"),                D_FONT_BOLD(8),      QRect( 11, 282, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 282,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_CSHAFTDIAMETER1     },
//    //{QSTR("--"),                    D_FONT_BOLD(8),      QRect(178, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(253, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(328, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(403, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(478, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("--"),                    D_FONT_BOLD(8),      QRect(553, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 282,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_CSHAFTDIAMETER6     },

//    {QSTR("4轴轮径"),                D_FONT_BOLD(8),      QRect( 11, 312, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(105, 312,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_DSHAFTDIAMETER1     },
//    //{QSTR("--"),                    D_FONT_BOLD(8),      QRect(178, 312,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(253, 312,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(328, 312,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(403, 312,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(478, 312,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR("--"),                    D_FONT_BOLD(8),      QRect(553, 312,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    //{QSTR(""),                      D_FONT_BOLD(8),      QRect(555, 312,  140, 27),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBWDRS_BUTTON_DSHAFTDIAMETER6     },

//    {QSTR("AS压力(满)"),           D_FONT_BOLD(7),      QRect( 11, 342, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("560"),                   D_FONT_BOLD(8),      QRect(105, 342,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL1        },
//    {QSTR("560"),                   D_FONT_BOLD(8),      QRect(255, 342,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL2        },
//    {QSTR("560"),                   D_FONT_BOLD(8),      QRect(405, 342,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL3        },
//    {QSTR("560"),                   D_FONT_BOLD(8),      QRect(555, 342,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL4        },
//    //{QSTR("560"),                   D_FONT_BOLD(8),      QRect(403, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL5        },
//    //{QSTR("560"),                   D_FONT_BOLD(8),      QRect(478, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL6        },
//    //{QSTR("560"),                   D_FONT_BOLD(8),      QRect(553, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL5        },
//    //{QSTR("560"),                   D_FONT_BOLD(8),      QRect(628, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSUREFULL6        },

//    {QSTR("AS压力(空)"),           D_FONT_BOLD(7),      QRect( 11, 371, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR("250"),                   D_FONT_BOLD(8),      QRect(105, 371,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL1     },
//    {QSTR("250"),                   D_FONT_BOLD(8),      QRect(255, 371,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL2     },
//    {QSTR("250"),                   D_FONT_BOLD(8),      QRect(405, 371,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL3     },
//    {QSTR("250"),                   D_FONT_BOLD(8),      QRect(555, 371,  140, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL4     },
//    //{QSTR("250"),                   D_FONT_BOLD(8),      QRect(403, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL5     },
//    //{QSTR("250"),                   D_FONT_BOLD(8),      QRect(478, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL6     },
//    //{QSTR("250"),                   D_FONT_BOLD(8),      QRect(553, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL5     },
//    //{QSTR("250"),                   D_FONT_BOLD(8),      QRect(628, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBWDRS_LABEL_PRESSURE_UNFULL6     },

    {QSTR("选择相应轴位置按钮点击进入轮径履历页面。"),  D_FONT_BOLD(8), QRect(30, 450, 400, 30),  Qt::white,                Qt::black,               CONTROL_LABEL,            ID_IGNORE         },


};
int g_WheelDiaRecordSelectRomLen = sizeof(g_PicRom_WheelDiaRecordSelect)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CWheelDiaRecordSelectPage,CPage)
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
        ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER1, OnWheel1_Dia1Clk)
        ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER2, OnWheel1_Dia2Clk)
        ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER3, OnWheel1_Dia3Clk)
        ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER4, OnWheel1_Dia4Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER5, OnWheel1_Dia5Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER6, OnWheel1_Dia6Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER7, OnWheel1_Dia7Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER8, OnWheel1_Dia8Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_BSHAFTDIAMETER1, OnWheel2_Dia1Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_BSHAFTDIAMETER6, OnWheel2_Dia6Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_CSHAFTDIAMETER1, OnWheel3_Dia1Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_CSHAFTDIAMETER6, OnWheel3_Dia6Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_DSHAFTDIAMETER1, OnWheel4_Dia1Clk)
        //ON_BTNCLK(ID_PIBWDRS_BUTTON_DSHAFTDIAMETER6, OnWheel4_Dia6Clk)
END_MESSAGE_MAP()

CWheelDiaRecordSelectPage::CWheelDiaRecordSelectPage()
{
    m_nWheelDiaType = -1;
}

void CWheelDiaRecordSelectPage::OnUpdatePage()
{
    updateTrain(ID_PIBWDRS_TRAIN);
    updateArrow(ID_PIBWDRS_ARROW_LEFT,ID_PIBWDRS_ARROW_RIGHT);
    updateCarNumber();

    updateErrorLine(ID_PIBWDRS_TRAIN);//3.5
}

void CWheelDiaRecordSelectPage::OnInitPage()
{

}

void CWheelDiaRecordSelectPage::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
#endif
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CWheelDiaRecordSelectPage::OnComBtn1Clk()
        {
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }

        void CWheelDiaRecordSelectPage::OnComBtn2Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn3Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn4Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn5Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn6Clk()
        {

        }
        void CWheelDiaRecordSelectPage::OnComBtn7Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
        }
#else
        void CWheelDiaRecordSelectPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }

        void CWheelDiaRecordSelectPage::OnComBtn2Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn3Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn4Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn5Clk()
        {

        }

        void CWheelDiaRecordSelectPage::OnComBtn6Clk()
        {

        }


#endif


void CWheelDiaRecordSelectPage::updateCarNumber()
{
    ((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER1))->SetCtrlText(che1_num);
    ((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER2))->SetCtrlText(che2_num);
    ((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER3))->SetCtrlText(che3_num);
    ((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER4))->SetCtrlText(che4_num);
    //((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER5))->SetCtrlText(che5_num);
    //((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER6))->SetCtrlText(che6_num);
    //((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER7))->SetCtrlText(che7_num);
    //((CLabel *)GetDlgItem(ID_PIBWDRS_LABEL_CARNUMBER8))->SetCtrlText(che8_num);

    ((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER1))->SetCtrlText(QString::number(CCU_HMI_220_2));
    ((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER2))->SetCtrlText(QString::number(CCU_HMI_220_6));
    ((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER3))->SetCtrlText(QString::number(CCU_HMI_220_7));
    ((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER4))->SetCtrlText(QString::number(CCU_HMI_220_8));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER5))->SetCtrlText(QString::number(CCU_HMI_220_9));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER6))->SetCtrlText(QString::number(CCU_HMI_220_10));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER7))->SetCtrlText(QString::number(CCU_HMI_220_11));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_ASHAFTDIAMETER8))->SetCtrlText(QString::number(CCU_HMI_220_12));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_BSHAFTDIAMETER1))->SetCtrlText(QString::number(CCU_HMI_220_3));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_BSHAFTDIAMETER6))->SetCtrlText(QString::number(CCU_HMI_220_13));

    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_CSHAFTDIAMETER1))->SetCtrlText(QString::number(CCU_HMI_220_4));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_CSHAFTDIAMETER6))->SetCtrlText(QString::number(CCU_HMI_220_14));

    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_DSHAFTDIAMETER1))->SetCtrlText(QString::number(CCU_HMI_220_5));
    //((CLabel *)GetDlgItem(ID_PIBWDRS_BUTTON_DSHAFTDIAMETER6))->SetCtrlText(QString::number(CCU_HMI_220_15));
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia1Clk()
{
    parameter_setting_text = QSTR("1车厢轮径履历");
//    axle_record_num = car1_axle1_num*3;
//    axle_record_test_num = FileReadFields( "\HardDisk\KingView\record\axle_record\car1_axle1.csv", 1, "read_error1",axle_record_num  );

    m_nWheelDiaType = WHEELDIAENUM_CAR11;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia2Clk()
{

    parameter_setting_text=QSTR("2车厢轮径履历");
//    axle_record_num=car2_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car2_axle1.csv", 1, "read_error1",axle_record_num  );

    m_nWheelDiaType = WHEELDIAENUM_CAR21;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia3Clk()
{

    parameter_setting_text=QSTR("3车厢轮径履历");
//    axle_record_num=car3_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car3_axle1.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR31;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia4Clk()
{
    parameter_setting_text=QSTR("4车厢轮径履历");
//    axle_record_num=car4_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car4_axle1.csv", 1, "read_error1",axle_record_num  );

    m_nWheelDiaType = WHEELDIAENUM_CAR41;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia5Clk()
{

    parameter_setting_text=QSTR("5车厢轮径履历");
//    axle_record_num=car5_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car5_axle1.csv", 1, "read_error1",axle_record_num  );

    m_nWheelDiaType = WHEELDIAENUM_CAR51;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia6Clk()
{


    parameter_setting_text=QSTR("6车厢轴1轮径履历");
//    axle_record_num=car6_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car6_axle1.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR61;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia7Clk()
{


    parameter_setting_text=QSTR("7车厢轴1轮径履历");
//    axle_record_num=car6_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car6_axle1.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR71;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel1_Dia8Clk()
{


    parameter_setting_text=QSTR("8车厢轴1轮径履历");
//    axle_record_num=car6_axle1_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car6_axle1.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR81;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel2_Dia1Clk()
{


//    if ( parameter_setting_se1ect1 == 2)
//    {
//        parameter_setting_text=QSTR("1车厢轴1轮径履历");
////        axle_record_num=car1_axle1_num*3;
//        //axle_record_test_num= FileReadFields( "\HardDisk\KingView\record\axle_record\car1_axle1.csv", 1, "read_error1",axle_record_num  );

//        // FileReadFields( "F:\bjl15_3_12\car1_axle1.csv", 1, "read_error1", 30 );
//    }

    parameter_setting_text=QSTR("1车厢轴2轮径履历");
//    axle_record_num=car1_axle2_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car1_axle2.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR12;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel2_Dia6Clk()
{

    parameter_setting_text=QSTR("6车厢轴2轮径履历");
//    axle_record_num=car6_axle3_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car6_axle3.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR62;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel3_Dia1Clk()
{


    parameter_setting_text=QSTR("1车厢轴3轮径履历");
//    axle_record_num=car1_axle3_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car1_axle3.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR13;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel3_Dia6Clk()
{

    parameter_setting_text=QSTR("6车厢轴3轮径履历");
//    axle_record_num=car6_axle3_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car6_axle3.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR63;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel4_Dia1Clk()
{


    parameter_setting_text=QSTR("1车厢轴4轮径履历");
//    axle_record_num=car1_axle4_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car1_axle4.csv", 1, "read_error1",  axle_record_num);

    m_nWheelDiaType = WHEELDIAENUM_CAR14;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

void CWheelDiaRecordSelectPage::OnWheel4_Dia6Clk()
{


    parameter_setting_text=QSTR("6车厢轴4轮径履历");
//    axle_record_num=car6_axle4_num*3;
    //FileReadFields( "\HardDisk\KingView\record\axle_record\car6_axle4.csv", 1, "read_error1", axle_record_num );

    m_nWheelDiaType = WHEELDIAENUM_CAR64;
    ChangePage(PAGE_INDEX_WHEELDIARECORD);
}

