#include "CLevelDebugPage.h"

ROMDATA g_PicRom_LevelDebug[] =
{
    D_COMMON_PAGE_HEADER(QSTR("级位调试"))

     {"",                            D_FONT_BOLD(6),      QRect( 80,  120, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  160, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  200, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"牵引",                            D_FONT_BOLD(6),      QRect( 80,  240, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  280, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  320, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  360, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  400, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  440, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  480, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  520, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

     {"",                            D_FONT_BOLD(6),      QRect( 160,  120, 1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

     {"",                            D_FONT_BOLD(6),      QRect( 80,  120, 1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 680,  120, 1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 420,  160, 1, 361),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 550,  240, 1, 81),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 550,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 485,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 615,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 290,  240, 1, 81),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 290,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 225,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 355,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 225,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 290,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 355,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 485,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 550,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 615,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

     {QSTR("CCU-->HMI"),                      D_FONT_BOLD(6),      QRect( 81, 122, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("级位百分比"),                      D_FONT_BOLD(6),      QRect( 81, 162, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR(""),                      D_FONT_BOLD(6),      QRect( 81, 202, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("CCU->TCU"),                      D_FONT_BOLD(8),      QRect( 81, 242, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("TCU->CCU"),                      D_FONT_BOLD(8),      QRect( 81, 282, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("CCU->BCU"),                      D_FONT_BOLD(8),      QRect( 81, 322, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("BCU->CCU"),                      D_FONT_BOLD(8),      QRect( 81, 362, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("快速制动"),                      D_FONT_BOLD(8),      QRect( 161, 402, 258, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("紧急制动"),                      D_FONT_BOLD(8),      QRect( 421, 402, 258, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("CCU->BCU"),                      D_FONT_BOLD(8),      QRect( 81, 442, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("BCU->CCU"),                      D_FONT_BOLD(8),      QRect( 81, 482, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

     {QSTR("牵引指令"),                      D_FONT_BOLD(8),      QRect( 161, 202, 258, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QSTR("制动指令"),                      D_FONT_BOLD(8),      QRect( 421, 202, 258, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


     {QSTR(""),                      D_FONT_BOLD(8),      QRect( 165, 124, 510, 32),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TrBrLEVEL         },
     {QSTR(""),                      D_FONT_BOLD(8),      QRect( 425, 162, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BRAKEPERCENT         },
     {QSTR(""),                      D_FONT_BOLD(8),      QRect( 165, 162, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TRACTIONPERCENT         },

     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 165, 242, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND1         },
     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 295, 242, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND2         },
     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 165, 282, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK1         },
     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 295, 282, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK2         },

     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 425, 242, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND1         },
     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 555, 242, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND2         },
     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 425, 282, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK1         },
     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 555, 282, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK2         },

     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 165, 322, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND1         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 227, 322, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND2         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 292, 322, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND3         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 357, 322, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND4         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 162, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK1         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 227, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK2         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 292, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK3         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 357, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK4         },


     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 425, 322, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND1         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 487, 322, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND2         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 552, 322, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND3         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 617, 322, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND4         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 422, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK1         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 487, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK2         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 552, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK3         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 617, 362, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK4         },

     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 165, 442, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE1         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 227, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE2         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 292, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE3         },
//     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 357, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE4         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 422, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK1         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 487, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK2         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 552, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK3         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 617, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK4         },


    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 165, 442, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE1         },
    //{QSTR(""),                      D_FONT_BOLD(5),      QRect( 227, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE2         },
    //{QSTR(""),                      D_FONT_BOLD(5),      QRect( 292, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE3         },
    //{QSTR(""),                      D_FONT_BOLD(5),      QRect( 357, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE4         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 422, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK1         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 487, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK2         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 552, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK3         },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 617, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK4         },


    D_COMMON_PAGE_BUTTON_BAR
};
int g_LevelDebugRomLen = sizeof(g_PicRom_LevelDebug)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CLevelDebugPage ,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        //ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
       // ON_BTNCLK(ID_PIBIOTCTABLE_BUTTON_PAGEUP, OnPageUpBtnClk)
END_MESSAGE_MAP()

CLevelDebugPage::CLevelDebugPage()
{
}

void CLevelDebugPage::OnUpdatePage()
{
    UpdateTractionLeveltest(ID_CLEVELDEBUG_LABEL_TrBrLEVEL);
    UpdateTractionBrakestatus();
}

void CLevelDebugPage::OnInitPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("下一页"));

}

void CLevelDebugPage::OnShowPage()
{
    this->InitPageHeader();//3.17
}

void CLevelDebugPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}
void CLevelDebugPage::OnComBtn6Clk()
{
     //ChangePage(PAGE_INDEX_IOMTABLE);
}


void CLevelDebugPage::OnPageUpBtnClk()
{
   //ChangePage(PAGE_INDEX_IOMTABLE);
}

void CLevelDebugPage::UpdateTractionLeveltest(int id)
{
        if (Bit(CCU_HMI_308_9,11)==1)
        {

            SetTractionBrakeLabelColor(id, 3);//背景颜色
            SetTractionBrakeFontColor(id, 0);//字体颜色
            ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("紧急制动"));
        }
        else if (Bit(CCU_HMI_308_5, 8 )||Bit(CCU_HMI_308_5, 7 ) == 1)//CCU要在线
        {
            SetTractionBrakeLabelColor(id, 0);
             if (Bit(CCU_HMI_308_9,13)==1)
             {
                    SetTractionBrakeLabelColor(id, 1);
                    //((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("制动 ").append(QString::number(CCU_HMI_308_13%256)).append("%"));
                    if((CCU_HMI_308_13%256)==1)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B1"));
                    }
                    else if((CCU_HMI_308_13%256)==2)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B2 "));
                    }
                    else if((CCU_HMI_308_13%256)==3)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B3 "));
                    }
                    else if((CCU_HMI_308_13%256)==4)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B4 "));
                    }
                    else if((CCU_HMI_308_13%256)==5)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B5 "));
                    }else if((CCU_HMI_308_13%256)==6)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B6 "));
                    }
                    else if((CCU_HMI_308_13%256)==7)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B7 "));
                    }else if((CCU_HMI_308_13%256)==8)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("FB "));
                    }
                    else if((CCU_HMI_308_13%256)==0)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("——"));
                    }
                    else
                    {
                    ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                    }
                    SetTractionBrakeFontColor(id, 0);
             }
                //CTHM_Driving_B1	牵引指令
                //if (Bit(CCU_HMI_222_15,16)==1)
            else if (Bit(CCU_HMI_308_9,14)==1)
             {
                    SetTractionBrakeLabelColor(id, 2);
                    if((CCU_HMI_308_13%256)==11)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P1"));
                    }
                    else if((CCU_HMI_308_13%256)==12)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P2 "));
                    }
                    else if((CCU_HMI_308_13%256)==13)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P3 "));
                    }
                    else if((CCU_HMI_308_13%256)==14)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P4 "));
                    }
                    else if((CCU_HMI_308_13%256)==0)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("——"));
                    }
                    else
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                    }
                    SetTractionBrakeFontColor(id, 1);
             }
            else if (Bit(CCU_HMI_308_9,12)==1)
            {
                   SetTractionBrakeLabelColor(id, 0);
                     if((CCU_HMI_308_13%256)==10)
                    {
                        //((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("惰行 "));
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("0"));
                    }
                    else if((CCU_HMI_308_13%256)==0)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("——"));
                    }
                    else
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                    }

                   SetTractionBrakeFontColor(id, 0);
            }
            else
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                SetTractionBrakeLabelColor(id, 0);
                SetTractionBrakeFontColor(id, 1);
            }

        }
        else
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
            SetTractionBrakeLabelColor(id, 5);
            SetTractionBrakeFontColor(id, 1);
        }
}
void CLevelDebugPage::UpdateTractionBrakestatus()
{
    qreal TCU1_LevelPercent;
    qreal TCU2_LevelPercent;
    qreal BCU_LevelPercent;

    TCU1_LevelPercent=(TCU_518_9%256)*0.4;
    TCU2_LevelPercent=(TCU_528_9%256)*0.4;
    char buff[10] = {'\0'};
    char buff1[10] = {'\0'};
    memset(buff, '\0', 10);
    memset(buff1, '\0', 10);
    sprintf(buff, "%.1f", TCU1_LevelPercent);
    sprintf(buff1, "%.1f", TCU2_LevelPercent);
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TRACTIONPERCENT))->SetCtrlText((QSTR("TCU1: ")).append(QString(buff)).append("% ").append("TCU2: ").append(QString(buff1)).append("%"));



    BCU_LevelPercent=DivNum(BCU_419_1,100);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_LevelPercent);
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BRAKEPERCENT))->SetCtrlText((QSTR("BCU: ")).append(QString(buff)).append("%"));
    //CCU->TCU 制动指令
    if(Bit(TCU_518_8,2)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::black);

    if(Bit(TCU_528_8,2)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND2))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND2))->SetCtrlBKColor(Qt::black);
    //牵引指令
    if(Bit(TCU_518_8,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::black);

    if(Bit(TCU_528_8,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND2))->SetCtrlBKColor(Qt::black);

    //TCU->CCU反馈 制动指令
    if(Bit(TCU_510_11,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::black);

    if(Bit(TCU_520_11,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::black);

    //TCU->CCU反馈 牵引指令
    if(Bit(TCU_510_11,4)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::black);

    if(Bit(TCU_520_11,4)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::black);

    //CCU->BCU 制动指令  多余了3个
    if(Bit(BCU_419_6,2)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::black);
    //CCU->BCU 牵引指令
    if(Bit(BCU_419_6,6)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::black);
    //BCU->CCU 反馈制动指令
    if(Bit(BCU_410_7,9)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::black);

    if(Bit(BCU_420_7,9)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::black);

    if(Bit(BCU_430_7,9)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK3))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK3))->SetCtrlBKColor(Qt::black);

    if(Bit(BCU_440_7,9)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK4))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK4))->SetCtrlBKColor(Qt::black);
    //BCU->CCU 反馈牵引指令
    if(Bit(BCU_410_7,15)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::black);

    if(Bit(BCU_420_7,15)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::black);

    if(Bit(BCU_430_7,15)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK3))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK3))->SetCtrlBKColor(Qt::black);

    if(Bit(BCU_440_7,15)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK4))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK4))->SetCtrlBKColor(Qt::black);

    //快速制动 CCU->BCU
    if(Bit(BCU_419_6,3)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKE1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKE1))->SetCtrlBKColor(Qt::black);
    //快速制动 反馈BCU->CCU
    if(Bit(BCU_410_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK1))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_420_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK2))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK2))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_430_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK3))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK3))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_440_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK4))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK4))->SetCtrlBKColor(Qt::black);
    //紧急制动 CCU->BCU
    if(Bit(BCU_419_6,4)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKE1))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKE1))->SetCtrlBKColor(Qt::black);
    //紧急制动 反馈BCU->CCU
    if(Bit(BCU_410_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK1))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK1))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_420_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK2))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK2))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_430_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK3))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK3))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_440_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK4))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK4))->SetCtrlBKColor(Qt::black);
}
void CLevelDebugPage::SetTractionBrakeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    // 黑 橘红  绿 红 黑 0—4
    if (0 == colorVal || 4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CLevelDebugPage::SetTractionBrakeFontColor(int id, int colorVal)
{
    if (1 == colorVal || 2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
}

