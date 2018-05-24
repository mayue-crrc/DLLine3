#include "CWheelDiaRecordPage.h"
#include "CWheelDiaRecordSelectPage.h"
#include <qdebug.h>
ROMDATA g_PicRom_WheelDiaRecord[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("轮径履历"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(8),      QRect(100,  50, 160, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELRECORD_LABEL_PARAMETER          },

    {"",                            D_FONT_BOLD(6),      QRect(150,  90, 550,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 120, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(100, 150, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 180, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 210, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 240, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 270, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 300, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 330, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 360, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 390, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 420, 600,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(100, 120, 1,  300),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(150,  90, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450,  90, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700,  90, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("时间"),                   D_FONT_BOLD(8),      QRect(152,  92, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("设定值"),                 D_FONT_BOLD(8),      QRect(452,  92, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("1"),                     D_FONT_BOLD(8),      QRect(102, 122,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),                     D_FONT_BOLD(8),      QRect(102, 152,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),                     D_FONT_BOLD(8),      QRect(102, 182,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),                     D_FONT_BOLD(8),      QRect(102, 212,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("5"),                     D_FONT_BOLD(8),      QRect(102, 242,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6"),                     D_FONT_BOLD(8),      QRect(102, 272,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("7"),                     D_FONT_BOLD(8),      QRect(102, 302,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("8"),                     D_FONT_BOLD(8),      QRect(102, 332,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("9"),                     D_FONT_BOLD(8),      QRect(102, 362,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("10"),                    D_FONT_BOLD(8),      QRect(102, 392,  47, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 122, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE1    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 122, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME1    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 152, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE2    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 152, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME2    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 182, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE3    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 182, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME3    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 212, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE4    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 212, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME4    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 242, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE5    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 242, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME5    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 272, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE6    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 272, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME6    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 302, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE7    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 302, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME7    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 332, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE8    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 332, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME8    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 362, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE9    },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 362, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME9    },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(151, 392, 295, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGDATE10   },
//  {QSTR(""),                      D_FONT_BOLD(6),      QRect(301, 392, 145, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORDSETTINGTIME10   },

    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 122, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD1               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 152, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD2               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 182, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD3               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 212, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD4               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 242, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD5               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 272, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD6               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 302, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD7               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 332, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD8               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 362, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD9               },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(451, 392, 245, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_WHEELDIA_LABEL_RECORD10              },



};
int g_WheelDiaRecordRomLen = sizeof(g_PicRom_WheelDiaRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CWheelDiaRecordPage,CPage)
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

CWheelDiaRecordPage::CWheelDiaRecordPage()
{
}

void CWheelDiaRecordPage::OnUpdatePage()
{

    UpdateWheelRecord();

}

void CWheelDiaRecordPage::OnInitPage()
{

}

void CWheelDiaRecordPage::OnShowPage()
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

    SetStringValue(ID_WHEELRECORD_LABEL_PARAMETER, parameter_setting_text);

    UpdateTable();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CWheelDiaRecordPage::OnComBtn1Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn2Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn3Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn4Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn5Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn6Clk()
        {

        }
        void CWheelDiaRecordPage::OnComBtn7Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
        }
#else
        void CWheelDiaRecordPage::OnComBtn1Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn2Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn3Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn4Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn5Clk()
        {

        }

        void CWheelDiaRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
        }


#endif


void CWheelDiaRecordPage::UpdateWheelRecord()
{
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE1,  read_error1);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME1,  read_error2);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD1,  read_error3);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE2,  read_error4);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME2,  read_error5);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD2,  read_error6);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE3,  read_error7);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME3,  read_error8);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD3,  read_error9);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE4,  read_error10);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME4,  read_error11);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD4,  read_error12);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE5,  read_error13);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME5,  read_error14);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD5,  read_error15);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE6,  read_error16);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME6,  read_error17);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD6,  read_error18);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE7,  read_error19);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME7,  read_error20);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD7,  read_error21);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE8,  read_error22);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME8,  read_error23);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD8,  read_error24);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE9,  read_error25);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME9,  read_error26);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD9,  read_error27);
//
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGDATE10,  read_error28);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORDSETTINGTIME10,  read_error29);
//    SetStringValue(ID_WHEELDIA_LABEL_RECORD10,  read_error30);
}

void CWheelDiaRecordPage::SetStringValue(int id, QString vVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(vVal);
}

void CWheelDiaRecordPage::UpdateTable()
{
    CWheelDiaRecordSelectPage* pPage = (CWheelDiaRecordSelectPage*)GetPage(PAGE_INDEX_WHEELDIARECORDSELECT);
    QStringList wheeldiainfolist;
    GetWheelDiaInfoFromCSV(pPage->m_nWheelDiaType, wheeldiainfolist);

    if (wheeldiainfolist.size() == 0)
        return;

    if(wheeldiainfolist.size() > 10)
        wheeldiainfolist.erase(wheeldiainfolist.begin(), wheeldiainfolist.end() - 10);

    for (int i=0; i<10; i++)
    {
        if (i >= wheeldiainfolist.size())
        {
            GetDlgItem(ID_WHEELDIA_LABEL_RECORDSETTINGDATE1+i)->SetCtrlText("");
            //GetDlgItem(ID_WHEELDIA_LABEL_RECORDSETTINGTIME1+i)->SetCtrlText(str);
            GetDlgItem(ID_WHEELDIA_LABEL_RECORD1+i)->SetCtrlText("");
        }
        else
        {
            QStringList list = wheeldiainfolist[i].split(",");
            GetDlgItem(ID_WHEELDIA_LABEL_RECORDSETTINGDATE1+i)->SetCtrlText(list[0]);
            //GetDlgItem(ID_WHEELDIA_LABEL_RECORDSETTINGTIME1+i)->SetCtrlText(str);
            GetDlgItem(ID_WHEELDIA_LABEL_RECORD1+i)->SetCtrlText(list[1]);
        }
    }
    pPage->m_nWheelDiaType = -1;
}
