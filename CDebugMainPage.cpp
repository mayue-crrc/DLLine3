#include "CDebugMainPage.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qdebug.h>
#include <qprocess.h>

ROMDATA g_PicRom_DebugMain[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QSTR("版本信息"),                D_FONT_BOLD(8),      QRect( 55,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_VERINF         },
    {QSTR("生命信号"),                D_FONT_BOLD(8),      QRect(195,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_LIFESINGAL     },
    {QSTR("RIOM调试"),               D_FONT_BOLD(8),      QRect(335,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RIOMDEBUG      },
    {QSTR("刷新时间"),                D_FONT_BOLD(8),      QRect(475,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_FRESHTIME      },
    {QSTR("级位调试"),                D_FONT_BOLD(8),      QRect(615,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_LEVELDEBUG      },

    {QSTR("数据监控"),                D_FONT_BOLD(8),      QRect( 55, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_DATACONTROL    },
    {QSTR("屏幕校准"),                D_FONT_BOLD(8),      QRect(195,  170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_SCREENRECTIFY     },
    {QSTR("RIOM详细信息"),            D_FONT_BOLD(8),      QRect(335, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RIOMDEBUGINFO  },
    {QSTR("出厂设置"),            D_FONT_BOLD(8),      QRect(475, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_DEBUGINISETTING  },
    {QSTR("返   回"),                D_FONT_BOLD(8),      QRect(600, 370, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RETURN         },

//    {QSTR("显示屏内部温度"),         D_FONT_BOLD(8),      QRect( 30, 295, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 260,295, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_TEMP_IN_HMI                       },
    {QSTR("显示屏所处位置"),         D_FONT_BOLD(8),      QRect( 30, 325, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect( 260,325, 260, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_HMI_TC1orTC2                       },
//    {QSTR("以太网接收数据包个数"),    D_FONT_BOLD(8),      QRect( 30, 355, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(6),      QRect( 260,355, 160, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_UDP_NUM                       },
//    {QSTR("信任MVB还是以太网(UDP)"),    D_FONT_BOLD(8),      QRect( 30, 385, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                     D_FONT_BOLD(6),      QRect( 260,385, 280, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_MVBorUDP                       },



};
int g_DebugMainRomLen = sizeof(g_PicRom_DebugMain)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDebugMainPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_PIBDM_BUTTON_VERINF, OnBtn1Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_LIFESINGAL, OnBtn2Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RIOMDEBUG, OnBtn3Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_FRESHTIME, OnBtn4Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_DATACONTROL, OnBtn5Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RETURN, OnBtn6Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RIOMDEBUGINFO, OnBtn7Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_SCREENRECTIFY, OnBtn8Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_DEBUGINISETTING, OnDebugIniSetting)
        ON_BTNCLK(ID_PIBDM_BUTTON_LEVELDEBUG, OnLevelDebug)
END_MESSAGE_MAP()

CDebugMainPage::CDebugMainPage()
{

}

void CDebugMainPage::OnUpdatePage()
{
//    ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_TEMP_IN_HMI))->SetCtrlText(QString::number((test_tempdata[23]-48)*10+(test_tempdata[24]-48)).append(QSTR("℃")));//2014.2.28
    //((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(udp_num)+"  "+QString::number(udp_num4));
   //   ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(65535)+"  "+QString::number(65535));

    if(TC1_HMI==1)
    {
        //((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QSTR("Tc1")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI)+QSTR("  读编码状态  ")+QString::number(test_tempdata[65]));
        ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QSTR("Tc1")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI));
    }
    else
    {
        if(TC2_HMI==1)
        {
            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QSTR("Tc2")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI));
        }
        else
        {
            //((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QSTR("未识别编码，请检查显示屏电源编码")+QSTR("  读编码状态  ")+QString::number(test_tempdata[65]));
            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QSTR("未识别，请检查显示屏配置文件"));
        }
    }

//    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
//    {
//         ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QSTR("MVB")+"  MVB_TC1:"+QString::number(g_485_comm_err_flg1)+"  MVB_TC2:"+QString::number(g_485_comm_err_flg2));
//    }
//    else
//    {
//        if((g_udp_comm_err_flg1||g_udp_comm_err_flg2)!=1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QSTR("UDP")+"  UDP_TC1:"+QString::number(g_udp_comm_err_flg1)+"  UDP_TC2:"+QString::number(g_udp_comm_err_flg1));
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QSTR("MVB 以太网 通信都异常"));
//        }
//    }
}

void CDebugMainPage::OnInitPage()
{
    //((CLabel *)GetDlgItem(ID_PIBDM_LABEL_TEMP_IN_HMI))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetAlignment(Qt::AlignLeft);;
}

void CDebugMainPage::OnShowPage()
{

}

void CDebugMainPage::OnBtn1Clk()
{
    ChangePage(PAGE_INDEX_VERSIONINFO);
}

void CDebugMainPage::OnBtn2Clk()
{
    ChangePage(PAGE_INDEX_VIALSIGNAL);
}

void CDebugMainPage::OnBtn3Clk()
{
    ChangePage(PAGE_INDEX_RIOMDEBUG);
}

void CDebugMainPage::OnBtn4Clk()
{
    ChangePage(PAGE_INDEX_REFRESHTIME);
}

void CDebugMainPage::OnBtn5Clk()
{
    ChangePage(PAGE_INDEX_UDPDATA1);
}

void CDebugMainPage::OnBtn6Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS);
}

void CDebugMainPage::OnBtn7Clk()
{
    ChangePage(PAGE_INDEX_IOTCTABLE);
}

void CDebugMainPage::OnBtn8Clk()
{
    //QString program = "./ts_script_calibrate";
    QString program = "./ts_calibrate_cnr";
    QProcess::execute(program);
}
void CDebugMainPage::OnDebugIniSetting()
{
    ChangePage(PAGE_INDEX_DEBUGINISETTING);
}

void CDebugMainPage::OnLevelDebug()
{
  ChangePage(PAGE_INDEX_LEVELDEBUG);
}

