#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qdebug.h>
#include "CRealTimeFaultsWarnningDialog.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"

vector<CPage*>  g_PageVec(BKSURFACENUM);

WORD ccu_lifesignal_temp = 0;

WORD riom1_gw123_lifesignal_temp = 0;
WORD riom1_di1_lifesignal_temp = 0;
WORD riom1_di2_lifesignal_temp = 0;
WORD riom1_di3_lifesignal_temp = 0;
WORD riom1_di4_lifesignal_temp = 0;
WORD riom1_do1_lifesignal_temp = 0;
WORD riom1_do2_lifesignal_temp = 0;
WORD riom1_ai1_lifesignal_temp = 0;
WORD riom2_gw123_lifesignal_temp = 0;
WORD riom2_di1_lifesignal_temp = 0;
WORD riom2_di2_lifesignal_temp = 0;
WORD riom2_di3_lifesignal_temp = 0;
WORD riom2_di4_lifesignal_temp = 0;
WORD riom2_do1_lifesignal_temp = 0;
WORD riom2_do2_lifesignal_temp = 0;
WORD riom2_ai1_lifesignal_temp = 0;
WORD riom3_gw123_lifesignal_temp = 0;
WORD riom3_di1_lifesignal_temp = 0;
WORD riom3_di2_lifesignal_temp = 0;
WORD riom3_di3_lifesignal_temp = 0;
WORD riom3_di4_lifesignal_temp = 0;
WORD riom3_do1_lifesignal_temp = 0;
WORD riom3_do2_lifesignal_temp = 0;
WORD riom3_ai1_lifesignal_temp = 0;
WORD riom4_gw123_lifesignal_temp = 0;
WORD riom4_di1_lifesignal_temp = 0;
WORD riom4_di2_lifesignal_temp = 0;
WORD riom4_di3_lifesignal_temp = 0;
WORD riom4_di4_lifesignal_temp = 0;
WORD riom4_do1_lifesignal_temp = 0;
WORD riom4_do2_lifesignal_temp = 0;
WORD riom4_ai1_lifesignal_temp = 0;
WORD riom5_gw123_lifesignal_temp = 0;
WORD riom5_di1_lifesignal_temp = 0;
WORD riom5_di2_lifesignal_temp = 0;
WORD riom5_di3_lifesignal_temp = 0;
WORD riom5_di4_lifesignal_temp = 0;
WORD riom5_do1_lifesignal_temp = 0;
WORD riom5_do2_lifesignal_temp = 0;
WORD riom5_ai1_lifesignal_temp = 0;
WORD riom6_gw123_lifesignal_temp = 0;
WORD riom6_di1_lifesignal_temp = 0;
WORD riom6_di2_lifesignal_temp = 0;
WORD riom6_di3_lifesignal_temp = 0;
WORD riom6_di4_lifesignal_temp = 0;
WORD riom6_do1_lifesignal_temp = 0;
WORD riom6_do2_lifesignal_temp = 0;
WORD riom6_ai1_lifesignal_temp = 0;
WORD riom7_gw123_lifesignal_temp = 0;
WORD riom7_di1_lifesignal_temp = 0;
WORD riom7_di2_lifesignal_temp = 0;
WORD riom7_di3_lifesignal_temp = 0;
WORD riom7_di4_lifesignal_temp = 0;
WORD riom7_do1_lifesignal_temp = 0;
WORD riom7_do2_lifesignal_temp = 0;
WORD riom7_ai1_lifesignal_temp = 0;
WORD riom8_gw123_lifesignal_temp = 0;
WORD riom8_di1_lifesignal_temp = 0;
WORD riom8_di2_lifesignal_temp = 0;
WORD riom8_di3_lifesignal_temp = 0;
WORD riom8_di4_lifesignal_temp = 0;
WORD riom8_do1_lifesignal_temp = 0;
WORD riom8_do2_lifesignal_temp = 0;
WORD riom8_ai1_lifesignal_temp = 0;
WORD tcu1_lifesignal_temp = 0;
WORD tcu2_lifesignal_temp = 0;
WORD tcu3_lifesignal_temp = 0;
WORD tcu4_lifesignal_temp = 0;
WORD tcu5_lifesignal_temp = 0;
WORD tcu6_lifesignal_temp = 0;
WORD acu1_lifesignal_temp = 0;
WORD acu2_lifesignal_temp = 0;
WORD bcu1_lifesignal_temp = 0;
WORD bcu2_lifesignal_temp = 0;
WORD bcu3_lifesignal_temp = 0;
WORD bcu4_lifesignal_temp = 0;
WORD door1_lifesignal_temp = 0;
WORD door2_lifesignal_temp = 0;
WORD door3_lifesignal_temp = 0;
WORD door4_lifesignal_temp = 0;
WORD door5_lifesignal_temp = 0;
WORD door6_lifesignal_temp = 0;
WORD door7_lifesignal_temp = 0;
WORD door8_lifesignal_temp = 0;
WORD hvac1_lifesignal_temp = 0;
WORD hvac2_lifesignal_temp = 0;
WORD hvac3_lifesignal_temp = 0;
WORD hvac4_lifesignal_temp = 0;
WORD hvac5_lifesignal_temp = 0;
WORD hvac6_lifesignal_temp = 0;
WORD hvac7_lifesignal_temp = 0;
WORD hvac8_lifesignal_temp = 0;
WORD pis1_lifesignal_temp = 0;
WORD pis2_lifesignal_temp = 0;
WORD atc1_lifesignal_temp = 0;
WORD atc2_lifesignal_temp = 0;
WORD atc3_lifesignal_temp = 0;
WORD atc4_lifesignal_temp = 0;
WORD fas1_lifesignal_temp = 0;
WORD fas2_lifesignal_temp = 0;

WORD door9_lifesignal_temp = 0;
WORD door10_lifesignal_temp = 0;
WORD door11_lifesignal_temp = 0;
WORD door12_lifesignal_temp = 0;
WORD door13_lifesignal_temp = 0;
WORD door14_lifesignal_temp = 0;
WORD door15_lifesignal_temp = 0;
WORD door16_lifesignal_temp = 0;

BEGIN_PAGE_MANAGE()
        ADD_PAGE(CCommStatusPage,               ROM_INDEX(PAGE_INDEX_COMMSTATUS))
        ADD_PAGE(CCommStatusHelpPage,           ROM_INDEX(PAGE_INDEX_COMMSTATUSHELP))
        ADD_PAGE(CMainPage,                     ROM_INDEX(PAGE_INDEX_MAIN))
        ADD_PAGE(CInitialSettingPage,           ROM_INDEX(PAGE_INDEX_INITIALSETTING))
 //       ADD_PAGE(CReserveSettingPage,           ROM_INDEX(PAGE_INDEX_RESERVESETTING))
        ADD_PAGE(CStationSettingPage,           ROM_INDEX(PAGE_INDEX_STATIONSETTING))
 //       ADD_PAGE(CDirectionConfirmPage,         ROM_INDEX(PAGE_INDEX_DIRECTIONCONFIRM))
        ADD_PAGE(CRunStatePage,                 ROM_INDEX(PAGE_INDEX_RUNSTATE))
        ADD_PAGE(CRunHelp1Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP1))
        ADD_PAGE(CRunHelp2Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP2))
        ADD_PAGE(CRunHelp3Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP3))
        ADD_PAGE(CRunHelp4Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP4))

        ADD_PAGE(CRunHelp5Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP5))

        ADD_PAGE(CCarStatus1Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS1))
        ADD_PAGE(CCarStatus1Help1Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP1))
        ADD_PAGE(CCarStatus1Help2Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP2))
        ADD_PAGE(CCarStatus1Help3Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP3))
        ADD_PAGE(CCarStatus2Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS2))
        ADD_PAGE(CCarStatusHelpPage,            ROM_INDEX(PAGE_INDEX_CARSTATUSHELP))
        ADD_PAGE(CCarStatus3Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS3))
        ADD_PAGE(CCarStatus3HelpPage,           ROM_INDEX(PAGE_INDEX_CARSTATUS3HELP))
        ADD_PAGE(CFaultPage,                    ROM_INDEX(PAGE_INDEX_FAULT))
        ADD_PAGE(CHVACSettingPage,              ROM_INDEX(PAGE_INDEX_HVACSETTING))
        ADD_PAGE(CHVACSettingHelpPage,          ROM_INDEX(PAGE_INDEX_HVACSETTINGHELP))
        ADD_PAGE(CMaintainPage,                 ROM_INDEX(PAGE_INDEX_MAINTAIN))
        ADD_PAGE(CParameterSettingPage1,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING1))
        ADD_PAGE(CParameterSettingPage2,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING2))
        ADD_PAGE(CWheelDiaRecordPage,           ROM_INDEX(PAGE_INDEX_WHEELDIARECORD))
        ADD_PAGE(CDoorTestPage,                 ROM_INDEX(PAGE_INDEX_DOORTEST))
 //       ADD_PAGE(CDoorTestHelpPage,             ROM_INDEX(PAGE_INDEX_DOORTESTHELP))
        ADD_PAGE(CTractionSystemTestPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTEST))
        ADD_PAGE(CTractionSystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTESTHELP))
        ADD_PAGE(CAccessorySystemTestPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTEST))
        ADD_PAGE(CAccessorySystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP))
        ADD_PAGE(CBrakeTestPage,                ROM_INDEX(PAGE_INDEX_BRAKETEST))
        ADD_PAGE(CBrakeTestHelpPage,        	ROM_INDEX(PAGE_INDEX_BRAKETESTHELP))
        ADD_PAGE(CBrakeSelfTestPage,            ROM_INDEX(PAGE_INDEX_BRAKESELFTEST))
        ADD_PAGE(CBrakeSelfTestHelpPage,	ROM_INDEX(PAGE_INDEX_BRAKESELFTESTHELP))
        ADD_PAGE(CTodayFaultPage,               ROM_INDEX(PAGE_INDEX_TODAYFAULT))
        ADD_PAGE(CRunRecordPage,                ROM_INDEX(PAGE_INDEX_RUNRECORD))
        ADD_PAGE(CTryRunTestPage,               ROM_INDEX(PAGE_INDEX_TRYRUNTEST))
        ADD_PAGE(CPasswordPage,                 ROM_INDEX(PAGE_INDEX_PASSWORD))
        ADD_PAGE(CResetRunRecordPage,       	ROM_INDEX(PAGE_INDEX_RESETRUNRECORD))
        ADD_PAGE(CInstancyBroadcastPage,	ROM_INDEX(PAGE_INDEX_INSTANCYBROADCAST))
        ADD_PAGE(CRealTimeFaultPage,            ROM_INDEX(PAGE_INDEX_REALTIMEFAULT))
        ADD_PAGE(CHistoryFaultPage,             ROM_INDEX(PAGE_INDEX_HISTORYFAULT))
        ADD_PAGE(CTractionSystemFaultPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMFAULT))
        ADD_PAGE(CDebugMainPage,                ROM_INDEX(PAGE_INDEX_DEBUGMAIN))
        ADD_PAGE(CVersionInfoPage,              ROM_INDEX(PAGE_INDEX_VERSIONINFO))
        ADD_PAGE(CVialSignalPage,               ROM_INDEX(PAGE_INDEX_VIALSIGNAL))
        ADD_PAGE(CRIOMDebugPage,                ROM_INDEX(PAGE_INDEX_RIOMDEBUG))
        ADD_PAGE(CRefreshTimePage,              ROM_INDEX(PAGE_INDEX_REFRESHTIME))
   //     ADD_PAGE(CCommStatusDebugPage,          ROM_INDEX(PAGE_INDEX_COMMSTATUSDEBUG))
        ADD_PAGE(CPasswordModifyPage,           ROM_INDEX(PAGE_INDEX_PASSWORDMODIFY))
        ADD_PAGE(CTimeSettingPage,              ROM_INDEX(PAGE_INDEX_TIMESETTING))
        ADD_PAGE(CFaultInfoPage,                ROM_INDEX(PAGE_INDEX_FAULTINFO))
        ADD_PAGE(CWheelDiaRecordSelectPage,     ROM_INDEX(PAGE_INDEX_WHEELDIARECORDSELECT))
//        ADD_PAGE(CCommStatus2Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS2))
//        ADD_PAGE(CCommStatus3Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS3))
//        ADD_PAGE(CCommStatus4Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS4))
//        ADD_PAGE(CCommStatus5Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS5))
//        ADD_PAGE(CCommStatus6Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS6))
        ADD_PAGE(CIOTCTablePage,                ROM_INDEX(PAGE_INDEX_IOTCTABLE))
        ADD_PAGE(CIOMTablePage,                 ROM_INDEX(PAGE_INDEX_IOMTABLE))
        ADD_PAGE(CDOTablePage,                  ROM_INDEX(PAGE_INDEX_DOTABLE))
        ADD_PAGE(CUdpDataPage1,                 ROM_INDEX(PAGE_INDEX_UDPDATA1))
 //       ADD_PAGE(CAW0Setting,                   ROM_INDEX(PAGE_INDEX_AW0SETTING))
        ADD_PAGE(FASPage,                       ROM_INDEX(PAGE_INDEX_FASPage))
        ADD_PAGE(CRefreshTimePage2,             ROM_INDEX(PAGE_INDEX_REFRESHTIME2))
        ADD_PAGE(CFaultPageHelp,                ROM_INDEX(PAGE_INDEX_FAULTPAGEHELP))
        ADD_PAGE(CCarStatus4Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS4))//lmh add
        ADD_PAGE(CDoorSettingPage,              ROM_INDEX(PAGE_INDEX_DOORSETTING))//lmh add
        ADD_PAGE(C_Debug_Initial_Setting,       ROM_INDEX(PAGE_INDEX_DEBUGINISETTING))//lmh add
        ADD_PAGE(CStationCancel,                ROM_INDEX(PAGE_INDEX_STATIONCANCEL))
        ADD_PAGE(CCarStatus4HelpPage,           ROM_INDEX(PAGE_INDEX_CARSTATUS4HELP))
        ADD_PAGE(CCarStatus4Help1Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS4HELP1))
        ADD_PAGE(CRunRecordSettingPage,         ROM_INDEX(PAGE_INDEX_RUNRECORDSETTING))
        ADD_PAGE(CLevelDebugPage,               ROM_INDEX(PAGE_INDEX_LEVELDEBUG))
        ADD_PAGE(CHVACDebugPage,                ROM_INDEX(PAGE_INDEX_HVACDEBUG))

END_PAGE_MANAGE()


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if ((nScrW == SCREEN_W*SCREEN_factor) && (nScrH == SCREEN_H*SCREEN_factor))
    {
        this->showFullScreen();
    }
    else
    {
//        this->setFixedSize(1024, 768);
        this->setFixedSize(SCREEN_W*SCREEN_factor, SCREEN_H*SCREEN_factor);
//        int x = (nScrW - 1024)/2;
//        int y = (nScrH - 768)/2;
        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2;
        this->move(x,y);
    }

    globalDataInit();

    if(TC1_HMI_ini==1)
    {
        TC1_HMI=1;
        TC2_HMI=0;
        system("ifconfig eth0 192.168.2.3");

    }
    else
    {
        if(TC2_HMI_ini==1)
        {
            TC1_HMI=0;
            TC2_HMI=1;
            system("ifconfig eth0 192.168.2.4");
        }
        else
        {
            TC1_HMI=0;
            TC2_HMI=0;
        }
    }

    //TC1_HMI=1;
    //LMH
//    TC1_HMI=0;
//    TC2_HMI=1;

#ifndef USE_RAND_DATA
    //HMI_Initial_Set();
    //SetWarningTemperature();
    //读报警，关闭显示屏，关闭电源 温度设定值
    //BackLightCtrl(1);
#endif


#ifdef USE_SERIAL_DATA

    m_serialThread  = new SerialThread;
    m_serialThread->render();
//    connect( m_serialThread, SIGNAL( SendReadData(  int, QByteArray, int ) ),
//             this,  SLOT( getRevDataSlot( int, QByteArray, int ) ) );
#endif

#ifdef USE_MVB_DATA

    m_mvbthread  = new MvbThread;
    m_mvbthread->render();
    //writeLog("USE_MVB_DATA\n");
#endif


    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ChangePage(PAGE_INDEX_COMMSTATUS);
    //init rand seed
    srand((unsigned int)time(NULL));



    //update date
    connect(&dateTimer,SIGNAL(timeout()),this,SLOT(OnUpdateDate()));
    //dateTimer.start(1000);
    dateTimer.start(400);//3.17test
    //update data timer
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));
    UpdateDataTimer.start(400);
    //start 4s timer
    connect(&timer4s,SIGNAL(timeout()),this,SLOT(OnTimer4s()));
    timer4s.start(4000);
    //connect(&timer30s,SIGNAL(timeout()),this,SLOT(OnTimer30s()));
    //timer30s.start(30000);
    connect(&timer5s,SIGNAL(timeout()),this,SLOT(OnTimer5s()));
    timer5s.start(5000);
    connect(&timer_settingtime,SIGNAL(timeout()),this,SLOT(OnTimer_settingtime()));//5S延时的定时器 时间设定
    connect(&timer_settingtime1,SIGNAL(timeout()),this,SLOT(OnTimer_settingtime1()));//4S延时的定时器 CCU切换防误报CCU故障

#ifdef LOG_OPEN
    //log timer
    connect(&m_logTimer,SIGNAL(timeout()),this,SLOT(OnLogTimer()));//11.8
    m_logTimer.start(10000);
#endif

#ifdef LOG_OPEN
    QString dateStr = GetDateStr();
    dateStr.replace("-", "");
    QString timeStr = GetTimeStr();
    timeStr.replace(':', "");
    g_logFileName = "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
#endif
}

Dialog::~Dialog()
{
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::OnUpdateData()
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;

    initReceiveData();//更新接受数据
//4S延时
         if(timer_settingtime1.isActive())
         {

         }
         else
         {
             if(g_ccu_comm_err_flg_temp)
             {
                 timer_settingtime1.start(4000);
                 //qDebug( )<<"timer_settingtime1.start(4000) is starting)";
             }
         }

    if(timer_settingtime.isActive())
    {
      //qDebug( )<<"timer_settingtime.isActive()";
    }
    else
    {
        if(Bit(CCU_HMI_318_1,8)||Bit(CCU_HMI_328_1,8))
        {
            timer_settingtime.start(5000);
            qDebug( )<<"timer_settingtime.start(5000) is starting)";
        }
    }

    FaultsScanning();//刷新实时故障时间
    pPage->ConnectEvent(WM_UPDATEPAGE);//刷新页面内容



    if (pPage->TestControlExists(IDLB_COM_voltage))
    {
        pPage->UpdateVoltage(IDLB_COM_voltage);


    }

    if (pPage->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        pPage->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);


    }

    if (pPage->TestControlExists(IDLB_COM_level))
    {
        pPage->UpdateTractionLevel(IDLB_COM_level);

    }
    if (pPage->TestControlExists(IDLB_COM_speed))
    {
        //CCU_HMI_222_3%256=CTHM_TrainSpeed_U8	列车速度
        //pPage->GetDlgItem(IDLB_COM_speed)->SetCtrlText(QString::number(CCU_HMI_222_3%256).append(" km/h"));
        //if (Bit(CCU_HMI_222_9, 8 )||Bit(CCU_HMI_222_9, 7 ) == 1)
        pPage->GetDlgItem(IDLB_COM_speed)->SetCtrlText(QString::number(CCU_HMI_308_14*0.1).append(" km/h"));
          if (Bit(CCU_HMI_308_5, 8 )||Bit(CCU_HMI_308_5, 7 ) == 1)//ccu
        {
            (pPage->GetDlgItem(IDLB_COM_speed))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            (pPage->GetDlgItem(IDLB_COM_speed))->SetCtrlBKColor(Qt::white);
        }

    }

   /* if (pPage->TestControlExists(IDLB_COM_current))
    {
//        if ((CCU_HMI_223_2%256)>127)
//        {
//           webflow = 32768-(CCU_HMI_223_1/256*256+CCU_HMI_223_2%256);
//        }
//        else
//        {
//           webflow = CCU_HMI_223_1/256+CCU_HMI_223_2%256*256;
//        }
       // webflow=(int16_t)(CCU_HMI_223_1/256+CCU_HMI_223_2%256*256);
         webflow=CCU_HMI_308_16;
        pPage->SetAValue(IDLB_COM_current, webflow);

    }*/
    if (pPage->TestControlExists(IDLB_COM_CurrentStation))
    {
        pPage->UpdateStation();

    }
    if (pPage->TestControlExists(IDLB_COM_TrainFault))
    {
        pPage->updateFault(IDLB_COM_TrainFault);
    }

    createSendData();

}

void Dialog::OnUpdateDate()
{
    #ifdef USE_MVB_DATA
    //pixymvb_ForceSwitch();
    #endif
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        if (pPage == NULL)
            return;
    if (pPage->TestControlExists(IDLB_COM_TIME))
        {
         if(Bit(CCU_HMI_308_5,8)||Bit(CCU_HMI_308_5,7))
             {
               QString str,Month,Day;
               Month.sprintf("%02d",CCU_HMI_308_1/256);
               Day.sprintf("%02d",CCU_HMI_308_2%256);
               str= QString::number(2000+CCU_HMI_308_1%256) + QSTR("-")+
                         Month + QSTR("-")+Day + QSTR(" ");
                 pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

                 QString time,Hour,Minute,Second;
                 Hour.sprintf("%02d",CCU_HMI_308_2/256);
                 Minute.sprintf("%02d",CCU_HMI_308_3%256);
                 Second.sprintf("%02d",CCU_HMI_308_3/256);
                 time = Hour + QSTR(":")+Minute + QSTR(":")+Second+ QSTR(" ");
                 pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
             }
         else
            {
            QDate date = QDate::currentDate();
            QString str;
            str = QString::number(date.year()) + QSTR("-")+
                  QString::number(date.month()) + QSTR("-")+
                  QString::number(date.day()) + QSTR("");
            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);//lmh modify 10.31
           }
    }
    //send data 28 29 30  此段代码是否多余？？？
//    QTime time = QDateTime::currentDateTime().time();
//    QDate date = QDate::currentDate();
//    time_setting_1 = date.year();
//    time_setting_2 = date.month();
//    time_setting_3 = date.day();
//    time_setting_4 = time.hour();
//    time_setting_5 = time.minute();
//    time_setting_6 = time.second();
//    HMI_send_data18=(time_setting_1-2000)+time_setting_2*256;
//    HMI_send_data19=time_setting_3+time_setting_4*256;
//    HMI_send_data20=time_setting_5+time_setting_6*256;//11.5

//    HMI_send_data30=(time_setting_1-2000)+time_setting_2*256;
//    HMI_send_data31=time_setting_3+time_setting_4*256;
//    HMI_send_data32=time_setting_5+time_setting_6*256;
}

void Dialog::paintEvent(QPaintEvent* /*e*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
//    if (pPage->TestControlExists(IDLB_COM_TIME))
//    {
//        QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
//    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();
}

void Dialog::keyPressEvent( QKeyEvent * event )
{
    if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_F)
    {
        CDebugDialog dbgDlg(this);
        if (dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_D)
    {
        if(serialDebugDlg.isHidden())
            serialDebugDlg.show();
    }
    else if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if((event->modifiers() & Qt::ControlModifier) && event->key() == Qt::Key_D)
    {
        //stop or continue scann fault.
        g_bScannFault = !g_bScannFault;
    }
}

void Dialog::mouseMoveEvent( QMouseEvent * /*event*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_MOUSEMOVE);
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ConnectEvent(event->pos(),WM_LBTNCLICK);
        pPage->ResetButtonState();
        update();
    }
}

void Dialog::reject()
{
    close();
}

void Dialog::closeEvent(QCloseEvent* /*e*/)
{
    system("killall CNR_Dalian_Metro_Line3");
}

void Dialog::globalDataInit()
{
    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;

    HistoryFaultsListInit();

    GetINIInfo();
}

void Dialog::initReceiveData()
{


#ifdef USE_RAND_DATA
        uchar tmpChar[8000];
        for (int i=0; i<8000; i++)
        {
            tmpChar[i]=0;
        }
        for (int i=0; i<4000; i++)
        {
              g_dataBuffer[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
        }
#endif

    //
    SerialDebug();
#ifndef USE_RAND_DATA
    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1) //MVB通信正常
    {
        for(int i=0;i<4000;i++)
        {
            g_dataBuffer[i]=g_dataBuffer_MVB[i];
        }
        /*---使用MVB通信时字变量需要改变开端，高低8位颠倒----*/
        //RIOM
//        g_dataBuffer[16+16]= Change_BigEen(g_dataBuffer[16+16]);   //AX_114_1  根据实际情况进行掉换
//        g_dataBuffer[17+16]= Change_BigEen(g_dataBuffer[17+16]);
//        g_dataBuffer[18+16]= Change_BigEen(g_dataBuffer[18+16]);
//        g_dataBuffer[19+16]= Change_BigEen(g_dataBuffer[19+16]);
//        g_dataBuffer[20+16]= Change_BigEen(g_dataBuffer[20+16]);  //AX_114_5
//        g_dataBuffer[144+16]= Change_BigEen(g_dataBuffer[144+16]); //AX_184_1
//        g_dataBuffer[145+16]= Change_BigEen(g_dataBuffer[145+16]);
//        g_dataBuffer[146+16]= Change_BigEen(g_dataBuffer[146+16]);
//        g_dataBuffer[147+16]= Change_BigEen(g_dataBuffer[147+16]);
//        g_dataBuffer[148+16]= Change_BigEen(g_dataBuffer[148+16]);//AX_184_5
//        g_dataBuffer[36+16]= Change_BigEen(g_dataBuffer[36+16]);  //DI_120_5
//        g_dataBuffer[68+16]= Change_BigEen(g_dataBuffer[68+16]);  //DI_140_5
//        g_dataBuffer[116+16]= Change_BigEen(g_dataBuffer[116+16]); //DI_170_5
        //BCU

        g_dataBuffer[2128]= g_dataBuffer_MVB[2128]%256+(g_dataBuffer_MVB[2129]%256)*256;
        g_dataBuffer[2129]= g_dataBuffer_MVB[2128]/256+(g_dataBuffer_MVB[2129]/256)*256;
    }
    else  //MVB通信异常则信任以太网UDP数据包
    {
        if((g_udp_comm_err_flg1||g_udp_comm_err_flg2)!=1)
        {
            for(int i=0;i<4000;i++)
            {
                g_dataBuffer[i]=g_dataBuffer_UDP[i];
            }

            //ERM
            //g_dataBuffer[1744]= Change_BigEen(g_dataBuffer[1744]);
            //g_dataBuffer[1745]= Change_BigEen(g_dataBuffer[1745]);

        }
        else
        {
            //用于CCU调试或下载程序时，CCU没有生命信号但其它设备生命信号正常
            for(int i=0;i<4000;i++)
            {
                g_dataBuffer[i]=g_dataBuffer_MVB[i];
            }
            //RIOM
            //g_dataBuffer[16+16]= Change_BigEen(g_dataBuffer[16+16]);   //AX_114_1


            //BCU

            //TCU

            //ACU

            //DCU
           // g_dataBuffer[864+48]= Change_BigEen(g_dataBuffer[864+48]);

            //HVAC
            //g_dataBuffer[1232+208]= Change_BigEen(g_dataBuffer[1232+208]);

            //PIS
            //ATC
            //g_dataBuffer[1424+240]= Change_BigEen(g_dataBuffer[1424+240]);
            //ERM
            //g_dataBuffer[1744]= Change_BigEen(g_dataBuffer[1744]);

            //CCU
            //g_dataBuffer[2080]= Change_BigEen(g_dataBuffer[2080]);


            g_dataBuffer[2128]= g_dataBuffer_MVB[2128]%256+(g_dataBuffer_MVB[2129]%256)*256;
            g_dataBuffer[2129]= g_dataBuffer_MVB[2128]/256+(g_dataBuffer_MVB[2129]/256)*256;

            for(int i=0;i<63;i++)
            {
                g_dataBuffer[2081+i]=0;
            }

        }
    }
#endif


#ifdef USE_RAND_DATA
    //用于显示屏设计说明文档页面截图, 模拟司机钥匙，方向，受电弓等
    g_dataBuffer[2121]=0x8000;    //door tc1_gw1
  //  g_dataBuffer[2122]=0xff80;    //RIOM1       所有设备在线  tc1_gw2
    g_dataBuffer[2123]=0xffff;    //RIOM2 RIOM3 所有设备在线
    g_dataBuffer[2124]=0xffff;    //RIOM4 RIOM5 所有设备在线
    g_dataBuffer[2125]=0xffff;    //RIOM6 RIOM7 所有设备在线
   // g_dataBuffer[2126]=0x00ff;    //RIOM8       所有设备在线
    g_dataBuffer[2120]=0xffff;      //ccu1在线 TCU       在线

 //   g_dataBuffer[16]=0x0500;    // 司机室激活bit9   方向向前bit11
    g_dataBuffer[20]=0x00008;    //逃生门监视 tc1
    g_dataBuffer[148]=0x0008;   //逃生门监视 tc2
    g_dataBuffer[48]=0x0001;   //降弓到位监视  mp1
    g_dataBuffer[82]=0x0800;   //降弓到位监视  mp3

    g_dataBuffer[2127]=0x00C0;   //PA  在线

    g_dataBuffer[897+48]=0x0001; //tc1_gw1 master
    g_dataBuffer[1153+48]=0x0001; //tc1_gw2 master

   // g_dataBuffer[898+48]=0x0100;  //tc1_gw1 door1 门1状态可信
    g_dataBuffer[1154+48]=0x0000; //tc1_gw2 door1 门1状态可信

    g_dataBuffer[1713]=0x8888;  //fas
    g_dataBuffer[1714]=0x4888;
    g_dataBuffer[1715]=0x8888;
    g_dataBuffer[1716]=0x8488;
    g_dataBuffer[1717]=0x8488;
    g_dataBuffer[1718]=0x8488;
    g_dataBuffer[1719]=0x8288;
    g_dataBuffer[1720]=0x8488;
    g_dataBuffer[1721]=0x8488;  //fas
    g_dataBuffer[1722]=0x8488;
    g_dataBuffer[1723]=0x8288;
    g_dataBuffer[1724]=0x8488;
    g_dataBuffer[1725]=0x8488;

    //LMH
    g_dataBuffer[44]=0x0400;
    //g_dataBuffer[1284]=0xFFFF; //网关在线
    g_dataBuffer[1285]=0xFFFF; //在线
    g_dataBuffer[1286]=0xFFFF; //BCU在线
    g_dataBuffer[1287]=0x7EFF; //HVAC在线 门在线
    //g_dataBuffer[1285]=0x0080; //TC1 DI1在线
    //g_dataBuffer[1288]=0x0028; //TC1 PIS在线

    //g_dataBuffer[42]=0x0300; //空压机运行信号，无过载
    g_dataBuffer[1155]=0x0040; //HVAC
    g_dataBuffer[1123]=0x0040; //HVAC
    g_dataBuffer[1091]=0x0040; //HVAC
    g_dataBuffer[1059]=0x0040; //HVAC
    g_dataBuffer[157]=0x2040; //HVAC
    g_dataBuffer[158]=0x2040; //HVAC
//    g_dataBuffer[336]=0x3C00; //BCU 制动缸预控压力
//    g_dataBuffer[337]=0x0240; //BCU 制动缸压力
//    g_dataBuffer[338]=0x2040; //BCU 转向架1空簧压力
//    g_dataBuffer[339]=0x2040; //BCU 转向架2空簧压力
//    g_dataBuffer[341]=0x00A0; //BCU 制动缸压力有效，总风压力有效
//    g_dataBuffer[342]=0x0000; //BCU 总风压力正常标志
//    g_dataBuffer[349]=0x01A0; //BCU 总风压力
//    g_dataBuffer[1367]=0x3300;//转向架及停放制动
//    g_dataBuffer[1368]=0x0033;

//    g_dataBuffer[3192]=0x0010;//门关好
//    g_dataBuffer[3193]=0x0008;//门开
//    g_dataBuffer[3194]=0x0004;//门紧急解锁
//    g_dataBuffer[3195]=0x0002;//门隔离

//    g_dataBuffer[3240]=0x0010;//门关好
//    g_dataBuffer[3241]=0x0008;//门开
//    g_dataBuffer[3242]=0x0004;//门紧急解锁
//    g_dataBuffer[3243]=0x0002;//门隔离
//    g_dataBuffer[3244]=0x0001;//门有障碍物
//    g_dataBuffer[3245]=0x4000;//门故障

//    g_dataBuffer[3288]=0x0010;//门关好
//    g_dataBuffer[3289]=0x0008;//门开
//    g_dataBuffer[3290]=0x0004;//门紧急解锁
//    g_dataBuffer[3291]=0x0002;//门隔离
//    g_dataBuffer[3292]=0x0001;//门有障碍物
//    g_dataBuffer[3293]=0x4000;//门故障

//    g_dataBuffer[3336]=0x0010;//门关好
//    g_dataBuffer[3337]=0x0008;//门开
//    g_dataBuffer[3338]=0x0004;//门紧急解锁
//    g_dataBuffer[3339]=0x0002;//门隔离

    //g_dataBuffer[474]=0x0400;
    //g_dataBuffer[475]=0x8928;

    //g_dataBuffer[506]=0x0008;
    //g_dataBuffer[507]=0x0400;
    //辅助，牵引
    g_dataBuffer[476]=0x0308;//滤波电容电压
    g_dataBuffer[508]=0x0308;//滤波电容电压
    g_dataBuffer[477]=0x0308;//电机电流有效值
    g_dataBuffer[509]=0x0308;//电机电流有效值
    g_dataBuffer[482]=0x0308;//线电压
    g_dataBuffer[514]=0x0308;//线电压
    g_dataBuffer[481]=0x0308;//实际制动力
    g_dataBuffer[513]=0x0308;//实际制动力
    g_dataBuffer[540]=0x0308;//逆变器输入电压
    g_dataBuffer[541]=0x0308;//逆变器输出电压，逆变器输出频率
    g_dataBuffer[542]=0x0308;//逆变器输出电流，蓄电池电压
    g_dataBuffer[572]=0x0308;//逆变器输入电压
    g_dataBuffer[573]=0x0308;//逆变器输出电压，逆变器输出频率
    g_dataBuffer[574]=0x0308;//逆变器输出电流，蓄电池电压
    g_dataBuffer[1301]=0x0001;
    g_dataBuffer[140]=0x0400;

    g_dataBuffer[1300]=0x0101;
    g_dataBuffer[1301]=0x0101;//空调发回来的自动制冷
//    g_dataBuffer[437]=0x4000; //停放制动隔离
//    g_dataBuffer[405]=0x2000; //停放制动隔离
//    g_dataBuffer[373]=0x1000; //停放制动隔离
//    g_dataBuffer[341]=0x1000; //停放制动隔离

    g_dataBuffer[1306]=0x8081;
    //g_dataBuffer[3450]=0x8000;
    //g_dataBuffer[3456]=0x0080;

    //g_dataBuffer[353]=0X0180;


#endif
//#ifndef USE_RAND_DATA
    g_dataBuffer[1283]= Change_BigEen(g_dataBuffer[1283]);// CCU生命信号
    g_dataBuffer[1290]= Change_BigEen(g_dataBuffer[1290]);// TC1蓄电池温度
    g_dataBuffer[1291]= Change_BigEen(g_dataBuffer[1291]);// TC2蓄电池温度
    g_dataBuffer[1293]= Change_BigEen(g_dataBuffer[1293]);// 列车速度
    g_dataBuffer[1294]= Change_BigEen(g_dataBuffer[1294]);// 网压
    g_dataBuffer[1295]= Change_BigEen(g_dataBuffer[1295]);// 网流
    //EDCU
    g_dataBuffer[636]= Change_BigEen(g_dataBuffer[636]);// 门控器1操作状态
    g_dataBuffer[684]= Change_BigEen(g_dataBuffer[684]);// 门控器2操作状态
    g_dataBuffer[732]= Change_BigEen(g_dataBuffer[732]);// 门控器3操作状态
    g_dataBuffer[780]= Change_BigEen(g_dataBuffer[780]);// 门控器4操作状态
    g_dataBuffer[828]= Change_BigEen(g_dataBuffer[828]);// 门控器5操作状态
    g_dataBuffer[876]= Change_BigEen(g_dataBuffer[876]);// 门控器6操作状态
    g_dataBuffer[924]= Change_BigEen(g_dataBuffer[924]);// 门控器7操作状态
    g_dataBuffer[972]= Change_BigEen(g_dataBuffer[972]);// 门控器8操作状态
    //BCU
    g_dataBuffer[1360]= Change_BigEen(g_dataBuffer[1360]);//制动级位设定值
    g_dataBuffer[337]=Change_BigEen(g_dataBuffer[337]);//制动缸1压力
    g_dataBuffer[369]=Change_BigEen(g_dataBuffer[369]);//制动缸2压力
    g_dataBuffer[401]=Change_BigEen(g_dataBuffer[401]);//制动缸3压力
    g_dataBuffer[433]=Change_BigEen(g_dataBuffer[433]);//制动缸4压力
    g_dataBuffer[340]=Change_BigEen(g_dataBuffer[340]);//载重1
    g_dataBuffer[372]=Change_BigEen(g_dataBuffer[372]);//载重2
    g_dataBuffer[404]=Change_BigEen(g_dataBuffer[404]);//载重3
    g_dataBuffer[436]=Change_BigEen(g_dataBuffer[436]);//载重4
    g_dataBuffer[338]=Change_BigEen(g_dataBuffer[338]);//转向架1空簧压力
    g_dataBuffer[370]=Change_BigEen(g_dataBuffer[370]);//转向架1空簧压力
    g_dataBuffer[402]=Change_BigEen(g_dataBuffer[402]);//转向架1空簧压力
    g_dataBuffer[434]=Change_BigEen(g_dataBuffer[434]);//转向架1空簧压力
    g_dataBuffer[339]=Change_BigEen(g_dataBuffer[339]);//转向架2空簧压力
    g_dataBuffer[371]=Change_BigEen(g_dataBuffer[371]);//转向架2空簧压力
    g_dataBuffer[403]=Change_BigEen(g_dataBuffer[403]);//转向架2空簧压力
    g_dataBuffer[435]=Change_BigEen(g_dataBuffer[435]);//转向架2空簧压力
    g_dataBuffer[349]=Change_BigEen(g_dataBuffer[349]);//总风压力1
    g_dataBuffer[381]=Change_BigEen(g_dataBuffer[381]);//总风压力2
    g_dataBuffer[413]=Change_BigEen(g_dataBuffer[413]);//总风压力3
    g_dataBuffer[445]=Change_BigEen(g_dataBuffer[445]);//总风压力4
    g_dataBuffer[360]=Change_BigEen(g_dataBuffer[360]);//基准轴速度1
    g_dataBuffer[392]=Change_BigEen(g_dataBuffer[392]);//基准轴速度2
    g_dataBuffer[424]=Change_BigEen(g_dataBuffer[424]);//基准轴速度3
    g_dataBuffer[456]=Change_BigEen(g_dataBuffer[456]);//基准轴速度4

    //RIOM网关通信中断则重置通过网关上传的DI,DO,AX的生命信号标志
    //if(Bit(g_dataBuffer[2122],16)==0)
    if(Bit(CCU_HMI_308_5,16)==0)                 //TC1 RIOM GW 不在线
    {
        //g_dataBuffer[2122]=g_dataBuffer[2122]&0x00ff;
        g_dataBuffer[1285]=g_dataBuffer[1285]&0xff00;//清零DI，DO，AX的生命信号
    }
    //if(Bit(g_dataBuffer[2123],8)==0)
    if(Bit(CCU_HMI_308_5,15)==0)                 //MP1 RIOM GW 不在线
    {
        //g_dataBuffer[2123]=g_dataBuffer[2123]&0xff00;
        g_dataBuffer[1285]=g_dataBuffer[1285]&0x0fff;//清零DI，DO，AX的生命信号
    }
    //if(Bit(g_dataBuffer[2123],16)==0)
    if(Bit(CCU_HMI_308_5,14)==0)                 //MP2 RIOM GW 不在线
    {
        //g_dataBuffer[2123]=g_dataBuffer[2123]&0x00ff;
        g_dataBuffer[1285]=g_dataBuffer[1285]&0xf0ff;//清零DI，DO，AX的生命信号
    }
    //if(Bit(g_dataBuffer[2124],8)==0)
    if(Bit(CCU_HMI_308_5,13)==0)                 //TC2 RIOM GW 不在线
    {
        //g_dataBuffer[2124]=g_dataBuffer[2124]&0xff00;
        g_dataBuffer[1286]=g_dataBuffer[1286]&0xff00;//清零DI，DO，AX的生命信号
    }
    if(Bit(g_dataBuffer[2124],16)==0)
    {
        //g_dataBuffer[2124]=g_dataBuffer[2124]&0x00ff;
    }
    if(Bit(g_dataBuffer[2125],8)==0)
    {
        //g_dataBuffer[2125]=g_dataBuffer[2125]&0xff00;
    }
    if(Bit(g_dataBuffer[2125],16)==0)
    {
        //g_dataBuffer[2125]=g_dataBuffer[2125]&0x00ff;
    }
    if(Bit(g_dataBuffer[2126],8)==0)
    {
        //g_dataBuffer[2126]=g_dataBuffer[2126]&0xff00;
    }

    //门网关通信中断则清零相应端口所有数据  由于重新排数据因此相应的数据要变 为防止数据残留

    if(Bit(CCU_HMI_308_8, 8 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[592+j]=0;
        }
    }

    if(Bit(CCU_HMI_308_8, 7 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[640+j]=0;
        }
    }

    if(Bit(CCU_HMI_308_8, 6 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[688+j]=0;
        }
    }

    if(Bit(CCU_HMI_308_8, 5 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[736+j]=0;
        }
    }


    if(Bit(CCU_HMI_308_8, 4 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[784+j]=0;
        }
    }

    if(Bit(CCU_HMI_308_8, 3 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[832+j]=0;
        }
    }


    if(Bit(CCU_HMI_308_8, 2 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[880+j]=0;
        }
    }

    if(Bit(CCU_HMI_308_8, 1 )  == 0 )
    {
        for(int j=0;j<48;j++)
        {

            g_dataBuffer[928+j]=0;
        }
    }
//CCU生命信号不变则清零CCU在线标志位,ERM,显示屏以及网关的
    if(Bit(hmi_485_error,5))
    {
        for(int j=0;j<5;j++)
        {
            g_dataBuffer[1284+j]=0;//仅清零了部分在线标志位含有CCU在线的字节
        }
    }
/*---------------------------*/
//各子系统的在线信息判断用于故障显示，避免初上电时CCU未上电的报各子系统离线故障
    if(Bit(hmi_485_error,5))
     {
         g_ccu_comm_err_flg_temp=true;
     }
     else
     {
         g_ccu_comm_err_flg_temp=false;
     }

    for(int j=0;j<5;j++)
     {
         g_dataBuffer_onlinejude2[j]=g_dataBuffer[1284+j]^g_dataBuffer_onlinejude1[j];

     }
     if(g_dataBuffer_onlinejude2[0])//1284
     {

//HMI1离线判断
         if(g_dataBuffer_onlinejude2[0]& bit4)
         {
             if(g_dataBuffer[1284]& bit4)
             {
                 g_hmi1_comm_err_flg=false;
             }
             else
             {
                 g_hmi1_comm_err_flg=true;
             }

         }
//HMI2离线判断
         if(g_dataBuffer_onlinejude2[0]& bit3)
         {
             if(g_dataBuffer[1284]& bit3)
             {
                 g_hmi2_comm_err_flg=false;
             }
             else
             {
                 g_hmi2_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[0]& bit15)
         {
             if(g_dataBuffer[1284]& bit15)
             {
                 g_riom1_gw123_comm_err_flg=false;
             }
             else
             {
                 g_riom1_gw123_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[0]& bit14)
         {
             if(g_dataBuffer[1284]& bit14)
             {
                 g_riom2_gw123_comm_err_flg=false;
             }
             else
             {
                 g_riom2_gw123_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[0]& bit13)
         {
             if(g_dataBuffer[1284]& bit13)
             {
                 g_riom3_gw123_comm_err_flg=false;
             }
             else
             {
                 g_riom3_gw123_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[0]& bit12)
         {
             if(g_dataBuffer[1284]& bit12)
             {
                 g_riom4_gw123_comm_err_flg=false;
             }
             else
             {
                 g_riom4_gw123_comm_err_flg=true;
             }

         }


     }

     if(g_dataBuffer_onlinejude2[1])//1285
     {
         if(g_dataBuffer_onlinejude2[1]& bit7)
         {
             if(g_dataBuffer[1285]& bit7)
             {
                 g_riom1_di1_comm_err_flg=false;
             }
             else
             {
                 g_riom1_di1_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[1]& bit6)
         {
             if(g_dataBuffer[1285]& bit6)
             {
                 g_riom1_di2_comm_err_flg=false;
             }
             else
             {
                 g_riom1_di2_comm_err_flg=true;
             }

         }
         if(g_dataBuffer_onlinejude2[1]& bit5)
         {
             if(g_dataBuffer[1285]& bit5)
             {
                 g_riom1_di3_comm_err_flg=false;
             }
             else
             {
                 g_riom1_di3_comm_err_flg=true;
             }

         }
         if(g_dataBuffer_onlinejude2[1]& bit4)
         {
             if(g_dataBuffer[1285]& bit4)
             {
                 g_riom1_do1_comm_err_flg=false;
             }
             else
             {
                 g_riom1_do1_comm_err_flg=true;
             }

         }
         if(g_dataBuffer_onlinejude2[1]& bit3)
         {
             if(g_dataBuffer[1285]& bit3)
             {
                 g_riom1_ai1_comm_err_flg=false;
             }
             else
             {
                 g_riom1_ai1_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[1]& bit15)
         {
             if(g_dataBuffer[1285]& bit15)
             {
                 g_riom2_di1_comm_err_flg=false;
             }
             else
             {
                 g_riom2_di1_comm_err_flg=true;
             }

         }
         if(g_dataBuffer_onlinejude2[1]& bit14)
         {
             if(g_dataBuffer[1285]& bit14)
             {
                 g_riom2_do1_comm_err_flg=false;
             }
             else
             {
                 g_riom2_do1_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[1]& bit11)
         {
             if(g_dataBuffer[1285]& bit11)
             {
                 g_riom3_di1_comm_err_flg=false;
             }
             else
             {
                 g_riom3_di1_comm_err_flg=true;
             }

         }
         if(g_dataBuffer_onlinejude2[1]& bit10)
         {
             if(g_dataBuffer[1285]& bit10)
             {
                 g_riom3_do1_comm_err_flg=false;
             }
             else
             {
                 g_riom3_do1_comm_err_flg=true;
             }

         }
     }

     if(g_dataBuffer_onlinejude2[2])//1286
     {
         if(g_dataBuffer_onlinejude2[2]& bit7)
         {
             if(g_dataBuffer[1286]& bit7)
             {
                 g_riom4_di1_comm_err_flg=false;
             }
             else
             {
                 g_riom4_di1_comm_err_flg=true;
             }

         }
         if(g_dataBuffer_onlinejude2[2]& bit6)
         {
             if(g_dataBuffer[1286]& bit6)
             {
                 g_riom4_di2_comm_err_flg=false;
             }
             else
             {
                 g_riom4_di2_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[2]& bit5)
         {
             if(g_dataBuffer[1286]& bit5)
             {
                 g_riom4_di3_comm_err_flg=false;
             }
             else
             {
                 g_riom4_di3_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[2]& bit4)
         {
             if(g_dataBuffer[1286]& bit4)
             {
                 g_riom4_do1_comm_err_flg=false;
             }
             else
             {
                 g_riom4_do1_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[2]& bit3)
         {
             if(g_dataBuffer[1286]& bit3)
             {
                 g_riom4_ai1_comm_err_flg=false;
             }
             else
             {
                 g_riom4_ai1_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[2]& bit15)
         {
             if(g_dataBuffer[1286]& bit15)
             {
                 g_bcu1_comm_err_flg=false;
             }
             else
             {
                 g_bcu1_comm_err_flg=true;
             }
         }
         if(g_dataBuffer_onlinejude2[2]& bit14)
         {
             if(g_dataBuffer[1286]& bit14)
             {
                 g_bcu2_comm_err_flg=false;
             }
             else
             {
                 g_bcu2_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[2]& bit13)
         {
             if(g_dataBuffer[1286]& bit13)
             {
                 g_bcu3_comm_err_flg=false;
             }
             else
             {
                 g_bcu3_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[2]& bit12)
         {
             if(g_dataBuffer[1286]& bit12)
             {
                 g_bcu4_comm_err_flg=false;
             }
             else
             {
                 g_bcu4_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[2]& bit11)
         {
             if(g_dataBuffer[1286]& bit11)
             {
                 g_tcu1_comm_err_flg=false;
             }
             else
             {
                 g_tcu1_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[2]& bit10)
         {
             if(g_dataBuffer[1286]& bit10)
             {
                 g_tcu2_comm_err_flg=false;
             }
             else
             {
                 g_tcu2_comm_err_flg=true;
             }
         }

         if(g_dataBuffer_onlinejude2[2]& bit9)
         {
             if(g_dataBuffer[1286]& bit9)
             {
                 g_acu1_comm_err_flg=false;
             }
             else
             {
                 g_acu1_comm_err_flg=true;
             }
         }
         if(g_dataBuffer_onlinejude2[2]& bit8)
         {
             if(g_dataBuffer[1286]& bit8)
             {
                 g_acu2_comm_err_flg=false;
             }
             else
             {
                 g_acu2_comm_err_flg=true;
             }
         }

     }


     if(g_dataBuffer_onlinejude2[3])//1287
     {
         //EDCU1
         if((g_dataBuffer_onlinejude2[3]& bit7))
         {
                 if(g_dataBuffer[1287]& bit7)
                 {
                      g_door1_comm_err_flg=false;
                 }
                 else
                 {
                      g_door1_comm_err_flg=true;
                 }
         }

         //EDCU2
         if((g_dataBuffer_onlinejude2[3]& bit6))
         {
                 if(g_dataBuffer[1287]& bit6)
                 {
                      g_door2_comm_err_flg=false;
                 }
                 else
                 {
                      g_door2_comm_err_flg=true;
                 }
         }

         //EDCU3
         if(g_dataBuffer_onlinejude2[3]& bit5)
         {
                 if(g_dataBuffer[1287]& bit5)
                 {
                      g_door3_comm_err_flg=false;
                 }
                 else
                 {
                      g_door3_comm_err_flg=true;
                 }
         }
         //EDCU4
         if(g_dataBuffer_onlinejude2[3]& bit4)
         {
                if(g_dataBuffer[1287]& bit4)
                 {
                      g_door4_comm_err_flg=false;
                 }
                 else
                 {
                      g_door4_comm_err_flg=true;
                 }
         }

         //EDCU5
         if(g_dataBuffer_onlinejude2[3]& bit3)
         {
                if(g_dataBuffer[1287]& bit3)
                 {
                      g_door5_comm_err_flg=false;
                 }
                 else
                 {
                      g_door5_comm_err_flg=true;
                 }
         }
         //EDCU6
         if(g_dataBuffer_onlinejude2[3]& bit2)
         {
                if(g_dataBuffer[1287]& bit2)
                 {
                      g_door6_comm_err_flg=false;
                 }
                 else
                 {
                      g_door6_comm_err_flg=true;
                 }
         }
         //EDCU7
         if(g_dataBuffer_onlinejude2[3]& bit1)
         {
                if(g_dataBuffer[1287]& bit1)
                 {
                      g_door7_comm_err_flg=false;
                 }
                 else
                 {
                      g_door7_comm_err_flg=true;
                 }
         }
         //EDCU8
         if(g_dataBuffer_onlinejude2[3]& bit0)
         {
                if(g_dataBuffer[1287]& bit0)
                 {
                      g_door8_comm_err_flg=false;
                 }
                 else
                 {
                      g_door8_comm_err_flg=true;
                 }
         }

         if((g_door1_comm_err_flg)&&(g_door2_comm_err_flg))
         {
             g_edcu1_comm_err_flg=true;
         }
         else
         {
             g_edcu1_comm_err_flg=false;
         }

         if((g_door3_comm_err_flg)&&(g_door4_comm_err_flg))
         {
             g_edcu2_comm_err_flg=true;
         }
         else
         {
             g_edcu2_comm_err_flg=false;
         }

         if((g_door5_comm_err_flg)&&(g_door6_comm_err_flg))
         {
             g_edcu3_comm_err_flg=true;
         }
         else
         {
             g_edcu3_comm_err_flg=false;
         }
         if((g_door7_comm_err_flg)&&(g_door8_comm_err_flg))
         {
             g_edcu4_comm_err_flg=true;
         }
         else
         {
             g_edcu4_comm_err_flg=false;
         }

         if(g_dataBuffer_onlinejude2[3]& bit15)
         {
                if(g_dataBuffer[1287]& bit15)
                 {
                      g_pis1_comm_err_flg=false;
                 }
                 else
                 {
                      g_pis1_comm_err_flg=true;
                 }
         }
         if(g_dataBuffer_onlinejude2[3]& bit14)
         {
                if(g_dataBuffer[1287]& bit14)
                 {
                      g_pis2_comm_err_flg=false;
                 }
                 else
                 {
                      g_pis2_comm_err_flg=true;
                 }
         }

         if(g_dataBuffer_onlinejude2[3]& bit13)
         {
                if(g_dataBuffer[1287]& bit13)
                 {
                      g_hvac1_comm_err_flg=false;
                 }
                 else
                 {
                      g_hvac1_comm_err_flg=true;
                 }
         }
         if(g_dataBuffer_onlinejude2[3]& bit12)
         {
                if(g_dataBuffer[1287]& bit12)
                 {
                      g_hvac2_comm_err_flg=false;
                 }
                 else
                 {
                      g_hvac2_comm_err_flg=true;
                 }
         }
         if(g_dataBuffer_onlinejude2[3]& bit11)
         {
                if(g_dataBuffer[1287]& bit11)
                 {
                      g_hvac3_comm_err_flg=false;
                 }
                 else
                 {
                      g_hvac3_comm_err_flg=true;
                 }
         }

         if(g_dataBuffer_onlinejude2[3]& bit10)
         {
                if(g_dataBuffer[1287]& bit10)
                 {
                      g_hvac4_comm_err_flg=false;
                 }
                 else
                 {
                      g_hvac4_comm_err_flg=true;
                 }
         }
         if(g_dataBuffer_onlinejude2[3]& bit9)
         {
                if(g_dataBuffer[1287]& bit9)
                 {
                      g_fas1_comm_err_flg=false;
                 }
                 else
                 {
                      g_fas1_comm_err_flg=true;
                 }
         }
         if(g_dataBuffer_onlinejude2[3]& bit8)
         {
                if(g_dataBuffer[1287]& bit8)
                 {
                      g_fas2_comm_err_flg=false;
                 }
                 else
                 {
                      g_fas2_comm_err_flg=true;
                 }
         }
     }

     if(g_dataBuffer_onlinejude2[4])//1288
     {
         if(g_dataBuffer_onlinejude2[4]& bit7)
         {
             if(g_dataBuffer[1288]& bit7)
             {
                  g_pds1_comm_err_flg=false;
             }
             else
             {
                  g_pds1_comm_err_flg=true;
             }

         }

         if(g_dataBuffer_onlinejude2[4]& bit6)
         {
             if(g_dataBuffer[1288]& bit6)
             {
                  g_pds2_comm_err_flg=false;
             }
             else
             {
                  g_pds2_comm_err_flg=true;
             }

         }
     }

     for(int j=0;j<5;j++)
     {
         g_dataBuffer_onlinejude1[j]=g_dataBuffer[1284+j]  ;
     }
/*---------------------------*/
    if(Bit(CCU_HMI_222_10, 12 )  == 0 )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[944+128+j]=0;
//        }
    }
    if (Bit(CCU_HMI_222_11, 4 )  == 0  )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[1200+128+j]=0;
//        }
    }

    if(Bit(CCU_HMI_222_10, 11 )  == 0 )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[944+160+j]=0;
//        }
    }
    if (Bit(CCU_HMI_222_11, 3 )  == 0  )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[1200+160+j]=0;
//        }
    }

    if(Bit(CCU_HMI_222_10, 10 )  == 0 )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[944+192+j]=0;
//        }
    }
    if (Bit(CCU_HMI_222_11, 2 )  == 0  )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[1200+192+j]=0;
//        }
    }

    if(Bit(CCU_HMI_222_10, 9 )  == 0 )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[944+224+j]=0;
//        }
    }
    if (Bit(CCU_HMI_222_11, 1 )  == 0  )
    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer[912+j]=0;
//        }
    }

             DCU_710_1= g_dataBuffer[592];
             DCU_710_2= g_dataBuffer[593];
             DCU_710_3= g_dataBuffer[594];
             DCU_710_4= g_dataBuffer[595];
             DCU_710_5= g_dataBuffer[596];
             DCU_710_6= g_dataBuffer[597];
             DCU_710_7= g_dataBuffer[598];
             DCU_710_8= g_dataBuffer[599];
             DCU_710_9= g_dataBuffer[600];
             DCU_710_10= g_dataBuffer[601];
             DCU_710_11= g_dataBuffer[602];
             DCU_710_12= g_dataBuffer[603];
             DCU_710_13= g_dataBuffer[604];
             DCU_710_14= g_dataBuffer[605];
             DCU_710_15= g_dataBuffer[606];
             DCU_710_16= g_dataBuffer[607];

             DCU_711_1= g_dataBuffer[608];
             DCU_711_2= g_dataBuffer[609];
             DCU_711_3= g_dataBuffer[610];
             DCU_711_4= g_dataBuffer[611];
             DCU_711_5= g_dataBuffer[612];
             DCU_711_6= g_dataBuffer[613];
             DCU_711_7= g_dataBuffer[614];
             DCU_711_8= g_dataBuffer[615];
             DCU_711_9= g_dataBuffer[616];
             DCU_711_10= g_dataBuffer[617];
             DCU_711_11= g_dataBuffer[618];
             DCU_711_12= g_dataBuffer[619];
             DCU_711_13= g_dataBuffer[620];
             DCU_711_14= g_dataBuffer[621];
             DCU_711_15= g_dataBuffer[622];
             DCU_711_16= g_dataBuffer[623];

             DCU_712_1= g_dataBuffer[624];
             DCU_712_2= g_dataBuffer[625];
             DCU_712_3= g_dataBuffer[626];
             DCU_712_4= g_dataBuffer[627];
             DCU_712_5= g_dataBuffer[628];
             DCU_712_6= g_dataBuffer[629];
             DCU_712_7= g_dataBuffer[630];
             DCU_712_8= g_dataBuffer[631];
             DCU_712_9= g_dataBuffer[632];
             DCU_712_10= g_dataBuffer[633];
             DCU_712_11= g_dataBuffer[634];
             DCU_712_12= g_dataBuffer[635];
             DCU_712_13= g_dataBuffer[636];
             DCU_712_14= g_dataBuffer[637];
             DCU_712_15= g_dataBuffer[638];
             DCU_712_16= g_dataBuffer[639];


             DCU_720_1= g_dataBuffer[640];
             DCU_720_2= g_dataBuffer[641];
             DCU_720_3= g_dataBuffer[642];
             DCU_720_4= g_dataBuffer[643];
             DCU_720_5= g_dataBuffer[644];
             DCU_720_6= g_dataBuffer[645];
             DCU_720_7= g_dataBuffer[646];
             DCU_720_8= g_dataBuffer[647];
             DCU_720_9= g_dataBuffer[648];
             DCU_720_10= g_dataBuffer[649];
             DCU_720_11= g_dataBuffer[650];
             DCU_720_12= g_dataBuffer[651];
             DCU_720_13= g_dataBuffer[652];
             DCU_720_14= g_dataBuffer[653];
             DCU_720_15= g_dataBuffer[654];
             DCU_720_16= g_dataBuffer[655];

             DCU_721_1= g_dataBuffer[656];
             DCU_721_2= g_dataBuffer[657];
             DCU_721_3= g_dataBuffer[658];
             DCU_721_4= g_dataBuffer[659];
             DCU_721_5= g_dataBuffer[660];
             DCU_721_6= g_dataBuffer[661];
             DCU_721_7= g_dataBuffer[662];
             DCU_721_8= g_dataBuffer[663];
             DCU_721_9= g_dataBuffer[664];
             DCU_721_10= g_dataBuffer[665];
             DCU_721_11= g_dataBuffer[666];
             DCU_721_12= g_dataBuffer[667];
             DCU_721_13= g_dataBuffer[668];
             DCU_721_14= g_dataBuffer[669];
             DCU_721_15= g_dataBuffer[670];
             DCU_721_16= g_dataBuffer[671];

             DCU_722_1= g_dataBuffer[672];
             DCU_722_2= g_dataBuffer[673];
             DCU_722_3= g_dataBuffer[674];
             DCU_722_4= g_dataBuffer[675];
             DCU_722_5= g_dataBuffer[676];
             DCU_722_6= g_dataBuffer[677];
             DCU_722_7= g_dataBuffer[678];
             DCU_722_8= g_dataBuffer[679];
             DCU_722_9= g_dataBuffer[680];
             DCU_722_10= g_dataBuffer[681];
             DCU_722_11= g_dataBuffer[682];
             DCU_722_12= g_dataBuffer[683];
             DCU_722_13= g_dataBuffer[684];
             DCU_722_14= g_dataBuffer[685];
             DCU_722_15= g_dataBuffer[686];
             DCU_722_16= g_dataBuffer[687];

             DCU_730_1= g_dataBuffer[688];
             DCU_730_2= g_dataBuffer[689];
             DCU_730_3= g_dataBuffer[690];
             DCU_730_4= g_dataBuffer[691];
             DCU_730_5= g_dataBuffer[692];
             DCU_730_6= g_dataBuffer[693];
             DCU_730_7= g_dataBuffer[694];
             DCU_730_8= g_dataBuffer[695];
             DCU_730_9= g_dataBuffer[696];
             DCU_730_10= g_dataBuffer[697];
             DCU_730_11= g_dataBuffer[698];
             DCU_730_12= g_dataBuffer[699];
             DCU_730_13= g_dataBuffer[700];
             DCU_730_14= g_dataBuffer[701];
             DCU_730_15= g_dataBuffer[702];
             DCU_730_16= g_dataBuffer[703];

             DCU_731_1= g_dataBuffer[704];
             DCU_731_2= g_dataBuffer[705];
             DCU_731_3= g_dataBuffer[706];
             DCU_731_4= g_dataBuffer[707];
             DCU_731_5= g_dataBuffer[708];
             DCU_731_6= g_dataBuffer[709];
             DCU_731_7= g_dataBuffer[710];
             DCU_731_8= g_dataBuffer[711];
             DCU_731_9= g_dataBuffer[712];
             DCU_731_10= g_dataBuffer[713];
             DCU_731_11= g_dataBuffer[714];
             DCU_731_12= g_dataBuffer[715];
             DCU_731_13= g_dataBuffer[716];
             DCU_731_14= g_dataBuffer[717];
             DCU_731_15= g_dataBuffer[718];
             DCU_731_16= g_dataBuffer[719];

             DCU_732_1= g_dataBuffer[720];
             DCU_732_2= g_dataBuffer[721];
             DCU_732_3= g_dataBuffer[722];
             DCU_732_4= g_dataBuffer[723];
             DCU_732_5= g_dataBuffer[724];
             DCU_732_6= g_dataBuffer[725];
             DCU_732_7= g_dataBuffer[726];
             DCU_732_8= g_dataBuffer[727];
             DCU_732_9= g_dataBuffer[728];
             DCU_732_10= g_dataBuffer[729];
             DCU_732_11= g_dataBuffer[730];
             DCU_732_12= g_dataBuffer[731];
             DCU_732_13= g_dataBuffer[732];
             DCU_732_14= g_dataBuffer[733];
             DCU_732_15= g_dataBuffer[734];
             DCU_732_16= g_dataBuffer[735];

             DCU_740_1= g_dataBuffer[736];
             DCU_740_2= g_dataBuffer[737];
             DCU_740_3= g_dataBuffer[738];
             DCU_740_4= g_dataBuffer[739];
             DCU_740_5= g_dataBuffer[740];
             DCU_740_6= g_dataBuffer[741];
             DCU_740_7= g_dataBuffer[742];
             DCU_740_8= g_dataBuffer[743];
             DCU_740_9= g_dataBuffer[744];
             DCU_740_10= g_dataBuffer[745];
             DCU_740_11= g_dataBuffer[746];
             DCU_740_12= g_dataBuffer[747];
             DCU_740_13= g_dataBuffer[748];
             DCU_740_14= g_dataBuffer[749];
             DCU_740_15= g_dataBuffer[750];
             DCU_740_16= g_dataBuffer[751];

             DCU_741_1= g_dataBuffer[752];
             DCU_741_2= g_dataBuffer[753];
             DCU_741_3= g_dataBuffer[754];
             DCU_741_4= g_dataBuffer[755];
             DCU_741_5= g_dataBuffer[756];
             DCU_741_6= g_dataBuffer[757];
             DCU_741_7= g_dataBuffer[758];
             DCU_741_8= g_dataBuffer[759];
             DCU_741_9= g_dataBuffer[760];
             DCU_741_10= g_dataBuffer[761];
             DCU_741_11= g_dataBuffer[762];
             DCU_741_12= g_dataBuffer[763];
             DCU_741_13= g_dataBuffer[764];
             DCU_741_14= g_dataBuffer[765];
             DCU_741_15= g_dataBuffer[766];
             DCU_741_16= g_dataBuffer[767];


             DCU_742_1= g_dataBuffer[768];
             DCU_742_2= g_dataBuffer[769];
             DCU_742_3= g_dataBuffer[770];
             DCU_742_4= g_dataBuffer[771];
             DCU_742_5= g_dataBuffer[772];
             DCU_742_6= g_dataBuffer[773];
             DCU_742_7= g_dataBuffer[774];
             DCU_742_8= g_dataBuffer[775];
             DCU_742_9= g_dataBuffer[776];
             DCU_742_10= g_dataBuffer[777];
             DCU_742_11= g_dataBuffer[778];
             DCU_742_12= g_dataBuffer[779];
             DCU_742_13= g_dataBuffer[780];
             DCU_742_14= g_dataBuffer[781];
             DCU_742_15= g_dataBuffer[782];
             DCU_742_16= g_dataBuffer[783];

             DCU_750_1= g_dataBuffer[784];
             DCU_750_2= g_dataBuffer[785];
             DCU_750_3= g_dataBuffer[786];
             DCU_750_4= g_dataBuffer[787];
             DCU_750_5= g_dataBuffer[788];
             DCU_750_6= g_dataBuffer[789];
             DCU_750_7= g_dataBuffer[790];
             DCU_750_8= g_dataBuffer[791];
             DCU_750_9= g_dataBuffer[792];
             DCU_750_10= g_dataBuffer[793];
             DCU_750_11= g_dataBuffer[794];
             DCU_750_12= g_dataBuffer[795];
             DCU_750_13= g_dataBuffer[796];
             DCU_750_14= g_dataBuffer[797];
             DCU_750_15= g_dataBuffer[798];
             DCU_750_16= g_dataBuffer[799];

             DCU_751_1= g_dataBuffer[800];
             DCU_751_2= g_dataBuffer[801];
             DCU_751_3= g_dataBuffer[802];
             DCU_751_4= g_dataBuffer[803];
             DCU_751_5= g_dataBuffer[804];
             DCU_751_6= g_dataBuffer[805];
             DCU_751_7= g_dataBuffer[806];
             DCU_751_8= g_dataBuffer[807];
             DCU_751_9= g_dataBuffer[808];
             DCU_751_10= g_dataBuffer[809];
             DCU_751_11= g_dataBuffer[810];
             DCU_751_12= g_dataBuffer[811];
             DCU_751_13= g_dataBuffer[812];
             DCU_751_14= g_dataBuffer[813];
             DCU_751_15= g_dataBuffer[814];
             DCU_751_16= g_dataBuffer[815];

             DCU_752_1= g_dataBuffer[816];
             DCU_752_2= g_dataBuffer[817];
             DCU_752_3= g_dataBuffer[818];
             DCU_752_4= g_dataBuffer[819];
             DCU_752_5= g_dataBuffer[820];
             DCU_752_6= g_dataBuffer[821];
             DCU_752_7= g_dataBuffer[822];
             DCU_752_8= g_dataBuffer[823];
             DCU_752_9= g_dataBuffer[824];
             DCU_752_10= g_dataBuffer[825];
             DCU_752_11= g_dataBuffer[826];
             DCU_752_12= g_dataBuffer[827];
             DCU_752_13= g_dataBuffer[828];
             DCU_752_14= g_dataBuffer[829];
             DCU_752_15= g_dataBuffer[830];
             DCU_752_16= g_dataBuffer[831];


             DCU_760_1= g_dataBuffer[832];
             DCU_760_2= g_dataBuffer[833];
             DCU_760_3= g_dataBuffer[834];
             DCU_760_4= g_dataBuffer[835];
             DCU_760_5= g_dataBuffer[836];
             DCU_760_6= g_dataBuffer[837];
             DCU_760_7= g_dataBuffer[838];
             DCU_760_8= g_dataBuffer[839];
             DCU_760_9= g_dataBuffer[840];
             DCU_760_10= g_dataBuffer[841];
             DCU_760_11= g_dataBuffer[842];
             DCU_760_12= g_dataBuffer[843];
             DCU_760_13= g_dataBuffer[844];
             DCU_760_14= g_dataBuffer[845];
             DCU_760_15= g_dataBuffer[846];
             DCU_760_16= g_dataBuffer[847];

             DCU_761_1= g_dataBuffer[848];
             DCU_761_2= g_dataBuffer[849];
             DCU_761_3= g_dataBuffer[850];
             DCU_761_4= g_dataBuffer[851];
             DCU_761_5= g_dataBuffer[852];
             DCU_761_6= g_dataBuffer[853];
             DCU_761_7= g_dataBuffer[854];
             DCU_761_8= g_dataBuffer[855];
             DCU_761_9= g_dataBuffer[856];
             DCU_761_10= g_dataBuffer[857];
             DCU_761_11= g_dataBuffer[858];
             DCU_761_12= g_dataBuffer[859];
             DCU_761_13= g_dataBuffer[860];
             DCU_761_14= g_dataBuffer[861];
             DCU_761_15= g_dataBuffer[862];
             DCU_761_16= g_dataBuffer[863];

             DCU_762_1= g_dataBuffer[864];
             DCU_762_2= g_dataBuffer[865];
             DCU_762_3= g_dataBuffer[866];
             DCU_762_4= g_dataBuffer[867];
             DCU_762_5= g_dataBuffer[868];
             DCU_762_6= g_dataBuffer[869];
             DCU_762_7= g_dataBuffer[870];
             DCU_762_8= g_dataBuffer[871];
             DCU_762_9= g_dataBuffer[872];
             DCU_762_10= g_dataBuffer[873];
             DCU_762_11= g_dataBuffer[874];
             DCU_762_12= g_dataBuffer[875];
             DCU_762_13= g_dataBuffer[876];
             DCU_762_14= g_dataBuffer[877];
             DCU_762_15= g_dataBuffer[878];
             DCU_762_16= g_dataBuffer[879];

             DCU_770_1= g_dataBuffer[880];
             DCU_770_2= g_dataBuffer[881];
             DCU_770_3= g_dataBuffer[882];
             DCU_770_4= g_dataBuffer[883];
             DCU_770_5= g_dataBuffer[884];
             DCU_770_6= g_dataBuffer[885];
             DCU_770_7= g_dataBuffer[886];
             DCU_770_8= g_dataBuffer[887];
             DCU_770_9= g_dataBuffer[888];
             DCU_770_10= g_dataBuffer[889];
             DCU_770_11= g_dataBuffer[890];
             DCU_770_12= g_dataBuffer[891];
             DCU_770_13= g_dataBuffer[892];
             DCU_770_14= g_dataBuffer[893];
             DCU_770_15= g_dataBuffer[894];
             DCU_770_16= g_dataBuffer[895];

             DCU_771_1= g_dataBuffer[896];
             DCU_771_2= g_dataBuffer[897];
             DCU_771_3= g_dataBuffer[898];
             DCU_771_4= g_dataBuffer[899];
             DCU_771_5= g_dataBuffer[900];
             DCU_771_6= g_dataBuffer[901];
             DCU_771_7= g_dataBuffer[902];
             DCU_771_8= g_dataBuffer[903];
             DCU_771_9= g_dataBuffer[904];
             DCU_771_10= g_dataBuffer[905];
             DCU_771_11= g_dataBuffer[906];
             DCU_771_12= g_dataBuffer[907];
             DCU_771_13= g_dataBuffer[908];
             DCU_771_14= g_dataBuffer[909];
             DCU_771_15= g_dataBuffer[910];
             DCU_771_16= g_dataBuffer[911];

             DCU_772_1= g_dataBuffer[912];
             DCU_772_2= g_dataBuffer[913];
             DCU_772_3= g_dataBuffer[914];
             DCU_772_4= g_dataBuffer[915];
             DCU_772_5= g_dataBuffer[916];
             DCU_772_6= g_dataBuffer[917];
             DCU_772_7= g_dataBuffer[918];
             DCU_772_8= g_dataBuffer[919];
             DCU_772_9= g_dataBuffer[920];
             DCU_772_10= g_dataBuffer[921];
             DCU_772_11= g_dataBuffer[922];
             DCU_772_12= g_dataBuffer[923];
             DCU_772_13= g_dataBuffer[924];
             DCU_772_14= g_dataBuffer[925];
             DCU_772_15= g_dataBuffer[926];
             DCU_772_16= g_dataBuffer[927];


             DCU_780_1= g_dataBuffer[928];
             DCU_780_2= g_dataBuffer[929];
             DCU_780_3= g_dataBuffer[930];
             DCU_780_4= g_dataBuffer[931];
             DCU_780_5= g_dataBuffer[932];
             DCU_780_6= g_dataBuffer[933];
             DCU_780_7= g_dataBuffer[934];
             DCU_780_8= g_dataBuffer[935];
             DCU_780_9= g_dataBuffer[936];
             DCU_780_10= g_dataBuffer[937];
             DCU_780_11= g_dataBuffer[938];
             DCU_780_12= g_dataBuffer[939];
             DCU_780_13= g_dataBuffer[940];
             DCU_780_14= g_dataBuffer[941];
             DCU_780_15= g_dataBuffer[942];
             DCU_780_16= g_dataBuffer[943];

             DCU_781_1= g_dataBuffer[944];
             DCU_781_2= g_dataBuffer[945];
             DCU_781_3= g_dataBuffer[946];
             DCU_781_4= g_dataBuffer[947];
             DCU_781_5= g_dataBuffer[948];
             DCU_781_6= g_dataBuffer[949];
             DCU_781_7= g_dataBuffer[950];
             DCU_781_8= g_dataBuffer[951];
             DCU_781_9= g_dataBuffer[952];
             DCU_781_10= g_dataBuffer[953];
             DCU_781_11= g_dataBuffer[954];
             DCU_781_12= g_dataBuffer[955];
             DCU_781_13= g_dataBuffer[956];
             DCU_781_14= g_dataBuffer[957];
             DCU_781_15= g_dataBuffer[958];
             DCU_781_16= g_dataBuffer[959];

             DCU_782_1= g_dataBuffer[960];
             DCU_782_2= g_dataBuffer[961];
             DCU_782_3= g_dataBuffer[962];
             DCU_782_4= g_dataBuffer[963];
             DCU_782_5= g_dataBuffer[964];
             DCU_782_6= g_dataBuffer[965];
             DCU_782_7= g_dataBuffer[966];
             DCU_782_8= g_dataBuffer[967];
             DCU_782_9= g_dataBuffer[968];
             DCU_782_10= g_dataBuffer[969];
             DCU_782_11= g_dataBuffer[970];
             DCU_782_12= g_dataBuffer[971];
             DCU_782_13= g_dataBuffer[972];
             DCU_782_14= g_dataBuffer[973];
             DCU_782_15= g_dataBuffer[974];
             DCU_782_16= g_dataBuffer[975];

//TC1
        //if((g_dataBuffer[945]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        if(g_dataBuffer[636]==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {
            //for(int j=0;j<32;j++)
            for(int j=0;j<48;j++)
            {
                g_dataBuffer[3160+j]=g_dataBuffer[592+j];
            }
            //g_dataBuffer[3800]=0X0000;
        }
        else
        {
                    if(g_dataBuffer[684]==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
                   {

                        for(int j=0;j<48;j++)
                        {
                            g_dataBuffer[3160+j]=g_dataBuffer[640+j];
                        }
                        //g_dataBuffer[3800]=0X0000;
                   }
                else
                   {
                    //g_dataBuffer[3800]=0X0001;
                     if((g_dataBuffer[636]==3)||(g_dataBuffer[684]==3))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效的车门信息
                     {

                            if(g_dataBuffer[636]==3)
                            {
                                g_dataBuffer[3202]=g_dataBuffer[634];//每个门空器的生命信号
                                if(Bit(g_dataBuffer[637],8)==1)
                                {
                                    g_dataBuffer[3160]=g_dataBuffer[592];//门1软件版本
                                    //g_dataBuffer[3160+2]=g_dataBuffer[608];
                                    //g_dataBuffer[3160+20]=g_dataBuffer[624];
                                    g_dataBuffer[3176]=g_dataBuffer[608];//门1故障信息
                                    g_dataBuffer[3177]=g_dataBuffer[609];//门1故障信息
                                    g_dataBuffer[3192]=g_dataBuffer[624];//门1状态信息
                                }
                                if(Bit(g_dataBuffer[637],7)==1)
                                {   g_dataBuffer[3161]=g_dataBuffer[593];
        //                            g_dataBuffer[3160+3]=g_dataBuffer[944+3];
        //                            g_dataBuffer[3160+21]=g_dataBuffer[944+21];
                                    g_dataBuffer[3178]=g_dataBuffer[610];
                                    g_dataBuffer[3179]=g_dataBuffer[611];
                                    g_dataBuffer[3193]=g_dataBuffer[625];

                                }
                                if(Bit(g_dataBuffer[637],6)==1)
                                {
                                    g_dataBuffer[3162]=g_dataBuffer[594];
                                    g_dataBuffer[3180]=g_dataBuffer[612];
                                    g_dataBuffer[3181]=g_dataBuffer[613];
                                    g_dataBuffer[3194]=g_dataBuffer[626];
                                }
                                if(Bit(g_dataBuffer[637],5)==1)
                                {
                                    g_dataBuffer[3163]=g_dataBuffer[595];
                                    g_dataBuffer[3182]=g_dataBuffer[614];
                                    g_dataBuffer[3183]=g_dataBuffer[615];
                                    g_dataBuffer[3195]=g_dataBuffer[627];
                                }
                            }
                            if(g_dataBuffer[684]==3)
                            {
                                g_dataBuffer[3202]=g_dataBuffer[682];
                                if(Bit(g_dataBuffer[685],8)==1)
                                {   g_dataBuffer[3160]=g_dataBuffer[640];
                                    g_dataBuffer[3176]=g_dataBuffer[656];
                                    g_dataBuffer[3177]=g_dataBuffer[657];
                                    g_dataBuffer[3192]=g_dataBuffer[672];
                                }
                                if(Bit(g_dataBuffer[685],7)==1)
                                {   g_dataBuffer[3161]=g_dataBuffer[641];
                                    g_dataBuffer[3178]=g_dataBuffer[658];
                                    g_dataBuffer[3179]=g_dataBuffer[659];
                                    g_dataBuffer[3193]=g_dataBuffer[673];
                                }
                                if(Bit(g_dataBuffer[685],6)==1)
                                {   g_dataBuffer[3162]=g_dataBuffer[642];
                                    g_dataBuffer[3180]=g_dataBuffer[660];
                                    g_dataBuffer[3181]=g_dataBuffer[661];
                                    g_dataBuffer[3194]=g_dataBuffer[674];
                                }
                                if(Bit(g_dataBuffer[685],5)==1)
                                {   g_dataBuffer[3163]=g_dataBuffer[643];
                                    g_dataBuffer[3182]=g_dataBuffer[662];
                                    g_dataBuffer[3183]=g_dataBuffer[663];
                                    g_dataBuffer[3195]=g_dataBuffer[675];
                                }

                            }
                 }
                else
                {
                //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                    for(int j=0;j<32;j++)
                    {
                        g_dataBuffer[3160+16+j]=0;
                    }

//                    car1_door1=2;//门显示为无效状态
//                    car1_door2=2;
//                    car1_door3=2;
//                    car1_door4=2;
                }
    }
 }
//MP1
        if(g_dataBuffer[732]==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {
            for(int j=0;j<48;j++)
            {
                  g_dataBuffer[3208+j]=g_dataBuffer[688+j];
            }
            //g_dataBuffer[3801]=0X0000;
        }
        else
        {
            if(g_dataBuffer[780]==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
            {

                for(int j=0;j<48;j++)
                {
                    g_dataBuffer[3208+j]=g_dataBuffer[736+j];
                }
                //g_dataBuffer[3801]=0X0000;
            }
           else
           {
               //g_dataBuffer[3801]=0X0001;
            if((g_dataBuffer[732]==3)||(g_dataBuffer[780]==3))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {

              if(g_dataBuffer[732]==3)
              {
                  g_dataBuffer[3250]=g_dataBuffer[730];
                  if(Bit(g_dataBuffer[733],8)==1)
                  {
//                  g_dataBuffer[3192+2]=g_dataBuffer[976+2];
//                  g_dataBuffer[3192+2]=g_dataBuffer[976+2];
//                  g_dataBuffer[3192+20]=g_dataBuffer[976+20];
                  g_dataBuffer[3208]=g_dataBuffer[688];
                  g_dataBuffer[3224]=g_dataBuffer[704];
                  g_dataBuffer[3225]=g_dataBuffer[705];
                  g_dataBuffer[3240]=g_dataBuffer[720];
                  }
                  if(Bit(g_dataBuffer[733],7)==1)
                  {
    //                  g_dataBuffer[3192+3]=g_dataBuffer[976+3];
    //                  g_dataBuffer[3192+21]=g_dataBuffer[976+21];
                      g_dataBuffer[3209]=g_dataBuffer[689];
                      g_dataBuffer[3226]=g_dataBuffer[706];
                      g_dataBuffer[3227]=g_dataBuffer[707];
                      g_dataBuffer[3241]=g_dataBuffer[721];
                  }
                  if(Bit(g_dataBuffer[733],6)==1)
                  {
                      g_dataBuffer[3210]=g_dataBuffer[690];
                      g_dataBuffer[3228]=g_dataBuffer[708];
                      g_dataBuffer[3229]=g_dataBuffer[709];
                      g_dataBuffer[3242]=g_dataBuffer[722];
                  }
                  if(Bit(g_dataBuffer[733],5)==1)
                  {
                      g_dataBuffer[3211]=g_dataBuffer[691];
                      g_dataBuffer[3230]=g_dataBuffer[710];
                      g_dataBuffer[3231]=g_dataBuffer[711];
                      g_dataBuffer[3243]=g_dataBuffer[723];
                  }
                  if(Bit(g_dataBuffer[733],4)==1)
                  {
                      g_dataBuffer[3212]=g_dataBuffer[692];
                      g_dataBuffer[3232]=g_dataBuffer[712];
                      g_dataBuffer[3233]=g_dataBuffer[713];
                      g_dataBuffer[3244]=g_dataBuffer[724];
                  }
                  if(Bit(g_dataBuffer[733],3)==1)
                  {
                      g_dataBuffer[3213]=g_dataBuffer[693];
                      g_dataBuffer[3234]=g_dataBuffer[714];
                      g_dataBuffer[3235]=g_dataBuffer[715];
                      g_dataBuffer[3245]=g_dataBuffer[725];
                  }

          }
          if(g_dataBuffer[780]==3)
          {
            g_dataBuffer[3250]=g_dataBuffer[778];
              if(Bit(g_dataBuffer[781],8)==1)
              {
//                  g_dataBuffer[3192+2]=g_dataBuffer[976+2];
//                  g_dataBuffer[3192+2]=g_dataBuffer[976+2];
//                  g_dataBuffer[3192+20]=g_dataBuffer[976+20];
                  g_dataBuffer[3208]=g_dataBuffer[736];
                  g_dataBuffer[3224]=g_dataBuffer[752];
                  g_dataBuffer[3225]=g_dataBuffer[753];
                  g_dataBuffer[3240]=g_dataBuffer[768];
              }
              if(Bit(g_dataBuffer[781],7)==1)
              {
//                  g_dataBuffer[3192+3]=g_dataBuffer[976+3];
//                  g_dataBuffer[3192+21]=g_dataBuffer[976+21];
                  g_dataBuffer[3209]=g_dataBuffer[737];
                  g_dataBuffer[3226]=g_dataBuffer[754];
                  g_dataBuffer[3227]=g_dataBuffer[755];
                  g_dataBuffer[3241]=g_dataBuffer[769];
              }
              if(Bit(g_dataBuffer[781],6)==1)
              {
                  g_dataBuffer[3210]=g_dataBuffer[738];
                  g_dataBuffer[3228]=g_dataBuffer[756];
                  g_dataBuffer[3229]=g_dataBuffer[757];
                  g_dataBuffer[3242]=g_dataBuffer[770];
              }
              if(Bit(g_dataBuffer[781],5)==1)
              {
                  g_dataBuffer[3211]=g_dataBuffer[739];
                  g_dataBuffer[3230]=g_dataBuffer[758];
                  g_dataBuffer[3231]=g_dataBuffer[759];
                  g_dataBuffer[3243]=g_dataBuffer[771];
              }
              if(Bit(g_dataBuffer[781],4)==1)
              {
                  g_dataBuffer[3212]=g_dataBuffer[740];
                  g_dataBuffer[3232]=g_dataBuffer[760];
                  g_dataBuffer[3233]=g_dataBuffer[761];
                  g_dataBuffer[3244]=g_dataBuffer[772];
              }
              if(Bit(g_dataBuffer[781],3)==1)
              {
                  g_dataBuffer[3213]=g_dataBuffer[741];
                  g_dataBuffer[3234]=g_dataBuffer[762];
                  g_dataBuffer[3235]=g_dataBuffer[763];
                  g_dataBuffer[3245]=g_dataBuffer[773];
              }

          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
            for(int j=0;j<32;j++)
            {
                  g_dataBuffer[3208+16+j]=0;
            }

//            car2_door1=2;//门显示为无效状态
//            car2_door2=2;
//            car2_door3=2;
//            car2_door4=2;
//            car2_door5=2;
//            car2_door6=2;
        }

      }
    }

//MP2
    if(g_dataBuffer[828]==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息

        {

            for(int j=0;j<48;j++)
            {
                g_dataBuffer[3256+j]=g_dataBuffer[784+j];
            }
            //g_dataBuffer[3802]=0X0000;
        }
    else
        {
            if(g_dataBuffer[876]==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
            {
                for(int j=0;j<48;j++)
                {
                    g_dataBuffer[3256+j]=g_dataBuffer[832+j];
                }
                //g_dataBuffer[3802]=0X0000;
            }
        else
            {
               //g_dataBuffer[3802]=0X0001;
              if((g_dataBuffer[828]==3)||(g_dataBuffer[876]==3))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
              {                  
                 if(g_dataBuffer[828]==3)
                  {g_dataBuffer[3298]=g_dataBuffer[826];
                       if(Bit(g_dataBuffer[829],8)==1)
                      {
    //                  g_dataBuffer[3224+2]=g_dataBuffer[1008+2];
    //                  g_dataBuffer[3224+20]=g_dataBuffer[1008+20];
                      g_dataBuffer[3256]=g_dataBuffer[784];//门1软件版本
                      g_dataBuffer[3272]=g_dataBuffer[800];;//门1故障信号
                      g_dataBuffer[3273]=g_dataBuffer[801];;//门1故障信号
                      g_dataBuffer[3288]=g_dataBuffer[816];//门1状态信息
                      }
                  if(Bit(g_dataBuffer[829],7)==1)
                  {
    //                  g_dataBuffer[3224+3]=g_dataBuffer[1008+3];
    //                  g_dataBuffer[3224+21]=g_dataBuffer[1008+21];
                      g_dataBuffer[3257]=g_dataBuffer[785];
                      g_dataBuffer[3274]=g_dataBuffer[802];
                      g_dataBuffer[3275]=g_dataBuffer[803];
                      g_dataBuffer[3289]=g_dataBuffer[817];
                  }
                  if(Bit(g_dataBuffer[829],6)==1)
                  {
    //                  g_dataBuffer[3224+4]=g_dataBuffer[1008+4];
    //                  g_dataBuffer[3224+22]=g_dataBuffer[1008+22];
                      g_dataBuffer[3258]=g_dataBuffer[786];
                      g_dataBuffer[3276]=g_dataBuffer[804];
                      g_dataBuffer[3277]=g_dataBuffer[805];
                      g_dataBuffer[3290]=g_dataBuffer[818];
                  }
                  if(Bit(g_dataBuffer[829],5)==1)
                  {
    //                  g_dataBuffer[3224+5]=g_dataBuffer[1008+5];
    //                  g_dataBuffer[3224+23]=g_dataBuffer[1008+23];
                      g_dataBuffer[3259]=g_dataBuffer[787];
                      g_dataBuffer[3278]=g_dataBuffer[806];
                      g_dataBuffer[3279]=g_dataBuffer[807];
                      g_dataBuffer[3291]=g_dataBuffer[819];
                  }
                  if(Bit(g_dataBuffer[829],4)==1)
                  {
    //                  g_dataBuffer[3224+6]=g_dataBuffer[1008+6];
    //                  g_dataBuffer[3224+24]=g_dataBuffer[1008+24];
                      g_dataBuffer[3260]=g_dataBuffer[788];
                      g_dataBuffer[3280]=g_dataBuffer[808];
                      g_dataBuffer[3281]=g_dataBuffer[809];
                      g_dataBuffer[3292]=g_dataBuffer[820];
                  }
                  if(Bit(g_dataBuffer[829],3)==1)
                  {
    //                  g_dataBuffer[3224+7]=g_dataBuffer[1008+7];
    //                  g_dataBuffer[3224+25]=g_dataBuffer[1008+25];
                      g_dataBuffer[3261]=g_dataBuffer[789];
                      g_dataBuffer[3282]=g_dataBuffer[810];
                      g_dataBuffer[3283]=g_dataBuffer[811];
                      g_dataBuffer[3293]=g_dataBuffer[821];
                  }

              }
              if(g_dataBuffer[876]==3)
              {
                 g_dataBuffer[3298]=g_dataBuffer[874];
                  if(Bit(g_dataBuffer[877],8)==1)
                  {
    //                  g_dataBuffer[3224+2]=g_dataBuffer[1008+2];
    //                  g_dataBuffer[3224+20]=g_dataBuffer[1008+20];
                      g_dataBuffer[3256]=g_dataBuffer[832];
                      g_dataBuffer[3272]=g_dataBuffer[848];
                      g_dataBuffer[3273]=g_dataBuffer[849];
                      g_dataBuffer[3288]=g_dataBuffer[864];
                  }
                  if(Bit(g_dataBuffer[877],7)==1)
                  {
    //                  g_dataBuffer[3224+3]=g_dataBuffer[1008+3];
    //                  g_dataBuffer[3224+21]=g_dataBuffer[1008+21];
                      g_dataBuffer[3257]=g_dataBuffer[833];
                      g_dataBuffer[3274]=g_dataBuffer[850];
                      g_dataBuffer[3275]=g_dataBuffer[851];
                      g_dataBuffer[3289]=g_dataBuffer[865];
                  }
                  if(Bit(g_dataBuffer[877],6)==1)
                  {
    //                  g_dataBuffer[3224+4]=g_dataBuffer[1008+4];
    //                  g_dataBuffer[3224+22]=g_dataBuffer[1008+22];
                      g_dataBuffer[3258]=g_dataBuffer[834];
                      g_dataBuffer[3276]=g_dataBuffer[852];
                      g_dataBuffer[3277]=g_dataBuffer[853];
                      g_dataBuffer[3290]=g_dataBuffer[866];
                  }
                  if(Bit(g_dataBuffer[877],5)==1)
                  {
    //                  g_dataBuffer[3224+5]=g_dataBuffer[1008+5];
    //                  g_dataBuffer[3224+23]=g_dataBuffer[1008+23];
                      g_dataBuffer[3259]=g_dataBuffer[835];
                      g_dataBuffer[3278]=g_dataBuffer[854];
                      g_dataBuffer[3279]=g_dataBuffer[855];
                      g_dataBuffer[3291]=g_dataBuffer[867];
                  }
                  if(Bit(g_dataBuffer[877],4)==1)
                  {
    //                  g_dataBuffer[3224+6]=g_dataBuffer[1008+6];
    //                  g_dataBuffer[3224+24]=g_dataBuffer[1008+24];
                      g_dataBuffer[3260]=g_dataBuffer[836];
                      g_dataBuffer[3280]=g_dataBuffer[856];
                      g_dataBuffer[3281]=g_dataBuffer[857];
                      g_dataBuffer[3292]=g_dataBuffer[868];
                  }
                  if(Bit(g_dataBuffer[877],3)==1)
                  {
    //                  g_dataBuffer[3224+7]=g_dataBuffer[1008+7];
    //                  g_dataBuffer[3224+25]=g_dataBuffer[1008+25];
                      g_dataBuffer[3261]=g_dataBuffer[837];
                      g_dataBuffer[3282]=g_dataBuffer[858];
                      g_dataBuffer[3283]=g_dataBuffer[859];
                      g_dataBuffer[3293]=g_dataBuffer[869];
                  }

          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
            for(int j=0;j<32;j++)
            {
                g_dataBuffer[3256+16+j]=0;
            }

//            car3_door1=2;//门显示为无效状态
//            car3_door2=2;
//            car3_door3=2;
//            car3_door4=2;
//            car3_door5=2;
//            car3_door6=2;
        }

     }
   }
//TC2
    if(g_dataBuffer[924]==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<48;j++)
        {
        g_dataBuffer[3304+j]=g_dataBuffer[880+j];
        }
        //g_dataBuffer[3803]=0X0000;
    }
    else
    {
            if(g_dataBuffer[972]==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
            {
                for(int j=0;j<48;j++)
                {
                    g_dataBuffer[3304+j]=g_dataBuffer[928+j];
                }
                //g_dataBuffer[3803]=0X0000;
            }
        else
            {
               //g_dataBuffer[3803]=0X0001;
                if((g_dataBuffer[924]==3)||(g_dataBuffer[972]==3))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                {

                  if(g_dataBuffer[924]==3)
                  {
                      g_dataBuffer[3346]=g_dataBuffer[922];
                      if(Bit(g_dataBuffer[925],8)==1)
                      {
        //                  g_dataBuffer[3224+2]=g_dataBuffer[1008+2];
        //                  g_dataBuffer[3224+20]=g_dataBuffer[1008+20];
                          g_dataBuffer[3304]=g_dataBuffer[880];
                          g_dataBuffer[3320]=g_dataBuffer[896];
                          g_dataBuffer[3321]=g_dataBuffer[897];
                          g_dataBuffer[3336]=g_dataBuffer[912];
                      }
                      if(Bit(g_dataBuffer[925],7)==1)
                      {
        //                  g_dataBuffer[3224+3]=g_dataBuffer[1008+3];
        //                  g_dataBuffer[3224+21]=g_dataBuffer[1008+21];
                          g_dataBuffer[3305]=g_dataBuffer[881];
                          g_dataBuffer[3322]=g_dataBuffer[898];
                          g_dataBuffer[3323]=g_dataBuffer[899];
                          g_dataBuffer[3337]=g_dataBuffer[913];
                      }
                      if(Bit(g_dataBuffer[925],6)==1)
                      {
        //                  g_dataBuffer[3224+4]=g_dataBuffer[1008+4];
        //                  g_dataBuffer[3224+22]=g_dataBuffer[1008+22];
                          g_dataBuffer[3306]=g_dataBuffer[882];
                          g_dataBuffer[3324]=g_dataBuffer[900];
                          g_dataBuffer[3325]=g_dataBuffer[901];
                          g_dataBuffer[3338]=g_dataBuffer[914];
                      }
                      if(Bit(g_dataBuffer[925],5)==1)
                      {
        //                  g_dataBuffer[3224+5]=g_dataBuffer[1008+5];
        //                  g_dataBuffer[3224+23]=g_dataBuffer[1008+23];
                          g_dataBuffer[3307]=g_dataBuffer[883];
                          g_dataBuffer[3326]=g_dataBuffer[902];
                          g_dataBuffer[3327]=g_dataBuffer[903];
                          g_dataBuffer[3339]=g_dataBuffer[915];
                      }

                  }
                  if(g_dataBuffer[972]==3)
                  {

                      g_dataBuffer[3346]=g_dataBuffer[970];
                      if(Bit(g_dataBuffer[973],8)==1)
                      {
        //                  g_dataBuffer[3224+2]=g_dataBuffer[1008+2];
        //                  g_dataBuffer[3224+20]=g_dataBuffer[1008+20];
                          g_dataBuffer[3304]=g_dataBuffer[928];
                          g_dataBuffer[3320]=g_dataBuffer[944];
                          g_dataBuffer[3321]=g_dataBuffer[945];
                          g_dataBuffer[3336]=g_dataBuffer[960];
                      }
                      if(Bit(g_dataBuffer[973],7)==1)
                      {
        //                  g_dataBuffer[3224+3]=g_dataBuffer[1008+3];
        //                  g_dataBuffer[3224+21]=g_dataBuffer[1008+21];
                          g_dataBuffer[3305]=g_dataBuffer[929];
                          g_dataBuffer[3322]=g_dataBuffer[946];
                          g_dataBuffer[3323]=g_dataBuffer[947];
                          g_dataBuffer[3337]=g_dataBuffer[961];
                      }
                      if(Bit(g_dataBuffer[973],6)==1)
                      {
        //                  g_dataBuffer[3224+4]=g_dataBuffer[1008+4];
        //                  g_dataBuffer[3224+22]=g_dataBuffer[1008+22];
                          g_dataBuffer[3306]=g_dataBuffer[930];
                          g_dataBuffer[3324]=g_dataBuffer[948];
                          g_dataBuffer[3325]=g_dataBuffer[949];
                          g_dataBuffer[3338]=g_dataBuffer[962];
                      }
                      if(Bit(g_dataBuffer[973],5)==1)
                      {
        //                  g_dataBuffer[3224+5]=g_dataBuffer[1008+5];
        //                  g_dataBuffer[3224+23]=g_dataBuffer[1008+23];
                          g_dataBuffer[3307]=g_dataBuffer[931];
                          g_dataBuffer[3326]=g_dataBuffer[950];
                          g_dataBuffer[3327]=g_dataBuffer[951];
                          g_dataBuffer[3339]=g_dataBuffer[963];
                      }
                  }
                }
                else
                {
                //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                    for(int j=0;j<32;j++)
                    {
                      g_dataBuffer[3304+16+j]=0;
                    }
//                    car4_door1=2;//门显示为无效状态
//                    car4_door2=2;
//                    car4_door3=2;
//                    car4_door4=2;
                }

        }
    }
//  7301内部CAN通信故障来自于故障17 故障代码7344，同一节车厢中只要有一个报故障7301就报故障
        if(Bit(g_dataBuffer[3177],8)||Bit(g_dataBuffer[3179],8)||Bit(g_dataBuffer[3181],8)||Bit(g_dataBuffer[3183],8))
              g_dataBuffer[3800]=0X0001;
        if(Bit(g_dataBuffer[3225],8)||Bit(g_dataBuffer[3227],8)||Bit(g_dataBuffer[3229],8)||Bit(g_dataBuffer[3231],8)||Bit(g_dataBuffer[3233],8)||Bit(g_dataBuffer[3235],8))
              g_dataBuffer[3801]=0X0001;
        if(Bit(g_dataBuffer[3273],8)||Bit(g_dataBuffer[3275],8)||Bit(g_dataBuffer[3277],8)||Bit(g_dataBuffer[3279],8)||Bit(g_dataBuffer[3281],8)||Bit(g_dataBuffer[3283],8))
              g_dataBuffer[3802]=0X0001;
        if(Bit(g_dataBuffer[3321],8)||Bit(g_dataBuffer[3323],8)||Bit(g_dataBuffer[3325],8)||Bit(g_dataBuffer[3327],8))
              g_dataBuffer[3803]=0X0001;

        //pis  master? slave ?
        //if((Bit(g_dataBuffer[1602],8)&&Bit(CCU_HMI_222_16, 8 )) ==1)
        if((Bit(CCU_HMI_308_8, 16 )&&Bit(CCU_HMI_308_9, 6 )) ==1)
        {
            for(int j=0;j<32;j++)
            {
                //g_dataBuffer[3416+j]=g_dataBuffer[1584+j];
                g_dataBuffer[3416+j]=g_dataBuffer[976+j];
            }
            PIS_Master_9i0_1= g_dataBuffer[3416];
            PIS_Master_9i0_2= g_dataBuffer[3417];
            PIS_Master_9i0_3= g_dataBuffer[3418];
            PIS_Master_9i0_4= g_dataBuffer[3419];
            PIS_Master_9i0_5= g_dataBuffer[3420];
            PIS_Master_9i0_6= g_dataBuffer[3421];
            PIS_Master_9i0_7= g_dataBuffer[3422];
            PIS_Master_9i0_8= g_dataBuffer[3423];
            PIS_Master_9i0_9= g_dataBuffer[3424];
            PIS_Master_9i0_10= g_dataBuffer[3425];
            PIS_Master_9i0_11= g_dataBuffer[3426];
            PIS_Master_9i0_12= g_dataBuffer[3427];
            PIS_Master_9i0_13= g_dataBuffer[3428];
            PIS_Master_9i0_14= g_dataBuffer[3429];
            PIS_Master_9i0_15= g_dataBuffer[3430];
            PIS_Master_9i0_16= g_dataBuffer[3431];

            PIS_Master_9i1_1= g_dataBuffer[3432];
            PIS_Master_9i1_2= g_dataBuffer[3433];
            PIS_Master_9i1_3= g_dataBuffer[3434];
            PIS_Master_9i1_4= g_dataBuffer[3435];
            PIS_Master_9i1_5= g_dataBuffer[3436];
            PIS_Master_9i1_6= g_dataBuffer[3437];
            PIS_Master_9i1_7= g_dataBuffer[3438];
            PIS_Master_9i1_8= g_dataBuffer[3439];
            PIS_Master_9i1_9= g_dataBuffer[3440];
            PIS_Master_9i1_10= g_dataBuffer[3441];
            PIS_Master_9i1_11= g_dataBuffer[3442];
            PIS_Master_9i1_12= g_dataBuffer[3443];
            PIS_Master_9i1_13= g_dataBuffer[3444];
            PIS_Master_9i1_14= g_dataBuffer[3445];
            PIS_Master_9i1_15= g_dataBuffer[3446];
            PIS_Master_9i1_16= g_dataBuffer[3447];
        }
        else
        {
            //if((Bit(g_dataBuffer[1634],8)&&Bit(CCU_HMI_222_16, 7 ))==1)
            if((Bit(CCU_HMI_308_8, 15 )&&Bit(CCU_HMI_308_9, 5 )) ==1)
            {
                for(int j=0;j<32;j++)
                {
                    //g_dataBuffer[3416+j]=g_dataBuffer[1616+j];
                    g_dataBuffer[3416+j]=g_dataBuffer[1008+j];
                }

                PIS_Master_9i0_1= g_dataBuffer[3416];
                PIS_Master_9i0_2= g_dataBuffer[3417];
                PIS_Master_9i0_3= g_dataBuffer[3418];
                PIS_Master_9i0_4= g_dataBuffer[3419];
                PIS_Master_9i0_5= g_dataBuffer[3420];
                PIS_Master_9i0_6= g_dataBuffer[3421];
                PIS_Master_9i0_7= g_dataBuffer[3422];
                PIS_Master_9i0_8= g_dataBuffer[3423];
                PIS_Master_9i0_9= g_dataBuffer[3424];
                PIS_Master_9i0_10= g_dataBuffer[3425];
                PIS_Master_9i0_11= g_dataBuffer[3426];
                PIS_Master_9i0_12= g_dataBuffer[3427];
                PIS_Master_9i0_13= g_dataBuffer[3428];
                PIS_Master_9i0_14= g_dataBuffer[3429];
                PIS_Master_9i0_15= g_dataBuffer[3430];
                PIS_Master_9i0_16= g_dataBuffer[3431];

                PIS_Master_9i1_1= g_dataBuffer[3432];
                PIS_Master_9i1_2= g_dataBuffer[3433];
                PIS_Master_9i1_3= g_dataBuffer[3434];
                PIS_Master_9i1_4= g_dataBuffer[3435];
                PIS_Master_9i1_5= g_dataBuffer[3436];
                PIS_Master_9i1_6= g_dataBuffer[3437];
                PIS_Master_9i1_7= g_dataBuffer[3438];
                PIS_Master_9i1_8= g_dataBuffer[3439];
                PIS_Master_9i1_9= g_dataBuffer[3440];
                PIS_Master_9i1_10= g_dataBuffer[3441];
                PIS_Master_9i1_11= g_dataBuffer[3442];
                PIS_Master_9i1_12= g_dataBuffer[3443];
                PIS_Master_9i1_13= g_dataBuffer[3444];
                PIS_Master_9i1_14= g_dataBuffer[3445];
                PIS_Master_9i1_15= g_dataBuffer[3446];
                PIS_Master_9i1_16= g_dataBuffer[3447];
            }
        }

        //司机室两端的FAS数据相或

//        g_dataBuffer[3448]= g_dataBuffer[1456+256]|g_dataBuffer[1472+256];
//        g_dataBuffer[3449]= g_dataBuffer[1457+256]|g_dataBuffer[1473+256];
//        g_dataBuffer[3450]= g_dataBuffer[1458+256]|g_dataBuffer[1474+256];
//        g_dataBuffer[3451]= g_dataBuffer[1459+256]|g_dataBuffer[1475+256];
//        g_dataBuffer[3452]= g_dataBuffer[1460+256]|g_dataBuffer[1476+256];
//        g_dataBuffer[3453]= g_dataBuffer[1461+256]|g_dataBuffer[1477+256];
//        g_dataBuffer[3454]= g_dataBuffer[1462+256]|g_dataBuffer[1478+256];
//        g_dataBuffer[3455]= g_dataBuffer[1463+256]|g_dataBuffer[1479+256];
//        g_dataBuffer[3456]= g_dataBuffer[1464+256]|g_dataBuffer[1480+256];
//        g_dataBuffer[3457]= g_dataBuffer[1465+256]|g_dataBuffer[1481+256];
//        g_dataBuffer[3458]= g_dataBuffer[1466+256]|g_dataBuffer[1482+256];
//        g_dataBuffer[3459]= g_dataBuffer[1467+256]|g_dataBuffer[1483+256];
//        g_dataBuffer[3460]= g_dataBuffer[1468+256]|g_dataBuffer[1484+256];
//        g_dataBuffer[3461]= g_dataBuffer[1469+256]|g_dataBuffer[1485+256];
//        g_dataBuffer[3462]= g_dataBuffer[1470+256]|g_dataBuffer[1486+256];
//        g_dataBuffer[3463]= g_dataBuffer[1471+256]|g_dataBuffer[1487+256];

//        g_dataBuffer[3448]= g_dataBuffer[1168]|g_dataBuffer[1184];
//        g_dataBuffer[3449]= g_dataBuffer[1169]|g_dataBuffer[1185];
//        g_dataBuffer[3450]= g_dataBuffer[1170]|g_dataBuffer[1186];
//        g_dataBuffer[3451]= g_dataBuffer[1171]|g_dataBuffer[1187];
//        g_dataBuffer[3452]= g_dataBuffer[1172]|g_dataBuffer[1188];
//        g_dataBuffer[3453]= g_dataBuffer[1173]|g_dataBuffer[1189];
//        g_dataBuffer[3454]= g_dataBuffer[1174]|g_dataBuffer[1190];
//        g_dataBuffer[3455]= g_dataBuffer[1175]|g_dataBuffer[1191];
//        g_dataBuffer[3456]= g_dataBuffer[1176]|g_dataBuffer[1192];
//        g_dataBuffer[3457]= g_dataBuffer[1177]|g_dataBuffer[1193];
//        g_dataBuffer[3458]= g_dataBuffer[1178]|g_dataBuffer[1194];
//        g_dataBuffer[3459]= g_dataBuffer[1179]|g_dataBuffer[1195];
//        g_dataBuffer[3460]= g_dataBuffer[1180]|g_dataBuffer[1196];
//        g_dataBuffer[3461]= g_dataBuffer[1181]|g_dataBuffer[1197];
//        g_dataBuffer[3462]= g_dataBuffer[1182]|g_dataBuffer[1198];
//        g_dataBuffer[3463]= g_dataBuffer[1183]|g_dataBuffer[1199];
//FAS
       if((Bit(CCU_HMI_308_8, 10)&&Bit(CCU_HMI_308_9, 4)) ==1)
        {
            for(int j=0;j<16;j++)
            {
                //g_dataBuffer[3416+j]=g_dataBuffer[1616+j];
                g_dataBuffer[3448+j]=g_dataBuffer[1168+j];
            }
            FAS_Master_Bi0_1= g_dataBuffer[3448];
            FAS_Master_Bi0_2= g_dataBuffer[3449];
            FAS_Master_Bi0_3= g_dataBuffer[3450];
            FAS_Master_Bi0_4= g_dataBuffer[3451];
            FAS_Master_Bi0_5= g_dataBuffer[3452];
            FAS_Master_Bi0_6= g_dataBuffer[3453];
            FAS_Master_Bi0_7= g_dataBuffer[3454];
            FAS_Master_Bi0_8= g_dataBuffer[3455];
            FAS_Master_Bi0_9= g_dataBuffer[3456];
            FAS_Master_Bi0_10= g_dataBuffer[3457];
            FAS_Master_Bi0_11= g_dataBuffer[3458];
            FAS_Master_Bi0_12= g_dataBuffer[3459];
            FAS_Master_Bi0_13= g_dataBuffer[3460];
            FAS_Master_Bi0_14= g_dataBuffer[3461];
            FAS_Master_Bi0_15= g_dataBuffer[3462];
            FAS_Master_Bi0_16= g_dataBuffer[3463];
            //定位通信故障 TC1为主
            g_dataBuffer[3804]=g_dataBuffer[3449];
       }
    else if((Bit(CCU_HMI_308_8, 9)&&Bit(CCU_HMI_308_9, 3)) ==1)
     {
        for(int j=0;j<16;j++)
        {
            //g_dataBuffer[3416+j]=g_dataBuffer[1616+j];
            g_dataBuffer[3448+j]=g_dataBuffer[1184+j];
        }
        FAS_Master_Bi0_1= g_dataBuffer[3448];
        FAS_Master_Bi0_2= g_dataBuffer[3449];
        FAS_Master_Bi0_3= g_dataBuffer[3450];
        FAS_Master_Bi0_4= g_dataBuffer[3451];
        FAS_Master_Bi0_5= g_dataBuffer[3452];
        FAS_Master_Bi0_6= g_dataBuffer[3453];
        FAS_Master_Bi0_7= g_dataBuffer[3454];
        FAS_Master_Bi0_8= g_dataBuffer[3455];
        FAS_Master_Bi0_9= g_dataBuffer[3456];
        FAS_Master_Bi0_10= g_dataBuffer[3457];
        FAS_Master_Bi0_11= g_dataBuffer[3458];
        FAS_Master_Bi0_12= g_dataBuffer[3459];
        FAS_Master_Bi0_13= g_dataBuffer[3460];
        FAS_Master_Bi0_14= g_dataBuffer[3461];
        FAS_Master_Bi0_15= g_dataBuffer[3462];
        FAS_Master_Bi0_16= g_dataBuffer[3463];
        //定位通信故障 //TC2为主
        g_dataBuffer[3805]=g_dataBuffer[3449];
    }


    RIOM_110_1= g_dataBuffer[16];//lmh
    RIOM_110_2= g_dataBuffer[17];
    RIOM_110_3= g_dataBuffer[18];
    RIOM_110_4= g_dataBuffer[19];
    RIOM_110_5= g_dataBuffer[20];
    RIOM_110_6= g_dataBuffer[21];
    RIOM_110_7= g_dataBuffer[22];
    RIOM_110_8= g_dataBuffer[23];
    RIOM_110_9= g_dataBuffer[24];
    RIOM_110_10= g_dataBuffer[25];
    RIOM_110_11= g_dataBuffer[26];
    RIOM_110_12= g_dataBuffer[27];
    RIOM_110_13= g_dataBuffer[28];
    RIOM_110_14= g_dataBuffer[29];
    RIOM_110_15= g_dataBuffer[30];
    RIOM_110_16= g_dataBuffer[31];

    RIOM_111_1= g_dataBuffer[32];
    RIOM_111_2= g_dataBuffer[33];
    RIOM_111_3= g_dataBuffer[34];
    RIOM_111_4= g_dataBuffer[35];
    RIOM_111_5= g_dataBuffer[36];
    RIOM_111_6= g_dataBuffer[37];
    RIOM_111_7= g_dataBuffer[38];
    RIOM_111_8= g_dataBuffer[39];
    RIOM_111_9= g_dataBuffer[40];
    RIOM_111_10= g_dataBuffer[41];
    RIOM_111_11= g_dataBuffer[42];
    RIOM_111_12= g_dataBuffer[43];
    RIOM_111_13= g_dataBuffer[44];
    RIOM_111_14= g_dataBuffer[45];
    RIOM_111_15= g_dataBuffer[46];
    RIOM_111_16= g_dataBuffer[47];

    RIOM_120_1= g_dataBuffer[48];
    RIOM_120_2= g_dataBuffer[49];
    RIOM_120_3= g_dataBuffer[50];
    RIOM_120_4= g_dataBuffer[51];
    RIOM_120_5= g_dataBuffer[52];
    RIOM_120_6= g_dataBuffer[53];
    RIOM_120_7= g_dataBuffer[54];
    RIOM_120_8= g_dataBuffer[55];
    RIOM_120_9= g_dataBuffer[56];
    RIOM_120_10= g_dataBuffer[57];
    RIOM_120_11= g_dataBuffer[58];
    RIOM_120_12= g_dataBuffer[59];
    RIOM_120_13= g_dataBuffer[60];
    RIOM_120_14= g_dataBuffer[61];
    RIOM_120_15= g_dataBuffer[62];
    RIOM_120_16= g_dataBuffer[63];

    RIOM_121_1= g_dataBuffer[64];
    RIOM_121_2= g_dataBuffer[65];
    RIOM_121_3= g_dataBuffer[66];
    RIOM_121_4= g_dataBuffer[67];
    RIOM_121_5= g_dataBuffer[68];
    RIOM_121_6= g_dataBuffer[69];
    RIOM_121_7= g_dataBuffer[70];
    RIOM_121_8= g_dataBuffer[71];
    RIOM_121_9= g_dataBuffer[72];
    RIOM_121_10= g_dataBuffer[73];
    RIOM_121_11= g_dataBuffer[74];
    RIOM_121_12= g_dataBuffer[75];
    RIOM_121_13= g_dataBuffer[76];
    RIOM_121_14= g_dataBuffer[77];
    RIOM_121_15= g_dataBuffer[78];
    RIOM_121_16= g_dataBuffer[79];

    RIOM_130_1= g_dataBuffer[80];
    RIOM_130_2= g_dataBuffer[81];
    RIOM_130_3= g_dataBuffer[82];
    RIOM_130_4= g_dataBuffer[83];
    RIOM_130_5= g_dataBuffer[84];
    RIOM_130_6= g_dataBuffer[85];
    RIOM_130_7= g_dataBuffer[86];
    RIOM_130_8= g_dataBuffer[87];
    RIOM_130_9= g_dataBuffer[88];
    RIOM_130_10= g_dataBuffer[89];
    RIOM_130_11= g_dataBuffer[90];
    RIOM_130_12= g_dataBuffer[91];
    RIOM_130_13= g_dataBuffer[92];
    RIOM_130_14= g_dataBuffer[93];
    RIOM_130_15= g_dataBuffer[94];
    RIOM_130_16= g_dataBuffer[95];

    RIOM_131_1= g_dataBuffer[96];
    RIOM_131_2= g_dataBuffer[97];
    RIOM_131_3= g_dataBuffer[98];
    RIOM_131_4= g_dataBuffer[99];
    RIOM_131_5= g_dataBuffer[100];
    RIOM_131_6= g_dataBuffer[101];
    RIOM_131_7= g_dataBuffer[102];
    RIOM_131_8= g_dataBuffer[103];
    RIOM_131_9= g_dataBuffer[104];
    RIOM_131_10= g_dataBuffer[105];
    RIOM_131_11= g_dataBuffer[106];
    RIOM_131_12= g_dataBuffer[107];
    RIOM_131_13= g_dataBuffer[108];
    RIOM_131_14= g_dataBuffer[109];
    RIOM_131_15= g_dataBuffer[110];
    RIOM_131_16= g_dataBuffer[111];

    RIOM_140_1= g_dataBuffer[112];
    RIOM_140_2= g_dataBuffer[113];
    RIOM_140_3= g_dataBuffer[114];
    RIOM_140_4= g_dataBuffer[115];
    RIOM_140_5= g_dataBuffer[116];
    RIOM_140_6= g_dataBuffer[117];
    RIOM_140_7= g_dataBuffer[118];
    RIOM_140_8= g_dataBuffer[119];
    RIOM_140_9= g_dataBuffer[120];
    RIOM_140_10= g_dataBuffer[121];
    RIOM_140_11= g_dataBuffer[122];
    RIOM_140_12= g_dataBuffer[123];
    RIOM_140_13= g_dataBuffer[124];
    RIOM_140_14= g_dataBuffer[125];
    RIOM_140_15= g_dataBuffer[126];
    RIOM_140_16= g_dataBuffer[127];

    RIOM_141_1= g_dataBuffer[128];
    RIOM_141_2= g_dataBuffer[129];
    RIOM_141_3= g_dataBuffer[130];
    RIOM_141_4= g_dataBuffer[131];
    RIOM_141_5= g_dataBuffer[132];
    RIOM_141_6= g_dataBuffer[133];
    RIOM_141_7= g_dataBuffer[134];
    RIOM_141_8= g_dataBuffer[135];
    RIOM_141_9= g_dataBuffer[136];
    RIOM_141_10= g_dataBuffer[137];
    RIOM_141_11= g_dataBuffer[138];
    RIOM_141_12= g_dataBuffer[139];
    RIOM_141_13= g_dataBuffer[140];
    RIOM_141_14= g_dataBuffer[141];
    RIOM_141_15= g_dataBuffer[142];
    RIOM_141_16= g_dataBuffer[143];

     RIOM_118_10= g_dataBuffer[1209];
     RIOM_118_11= g_dataBuffer[1210];

     RIOM_128_10= g_dataBuffer[1225];
     RIOM_128_11= g_dataBuffer[1226];

     RIOM_138_10= g_dataBuffer[1241];
     RIOM_138_11= g_dataBuffer[1242];

     RIOM_148_10= g_dataBuffer[1257];
     RIOM_148_11= g_dataBuffer[1258];

    AX_184_1= g_dataBuffer[144+16];
    AX_184_2= g_dataBuffer[145+16];
    AX_184_3= g_dataBuffer[146+16];
    AX_184_4= g_dataBuffer[147+16];
    AX_184_5= g_dataBuffer[148+16];
    AX_184_6= g_dataBuffer[149+16];
    AX_184_7= g_dataBuffer[150+16];
    AX_184_8= g_dataBuffer[151+16];
    AX_184_9= g_dataBuffer[152+16];
    AX_184_10= g_dataBuffer[153+16];
    AX_184_11= g_dataBuffer[154+16];
    AX_184_12= g_dataBuffer[155+16];

    AX_184_13= g_dataBuffer[156+16];
    AX_184_14= g_dataBuffer[157+16];


    AX_184_15= g_dataBuffer[158+16];
    AX_184_16= g_dataBuffer[159+16];

    HMI_200_1= g_dataBuffer[176];
    HMI_280_1= g_dataBuffer[240];


    HMI_202_1= g_dataBuffer[208];
    HMI_202_2= g_dataBuffer[209];
    HMI_282_1= g_dataBuffer[272];
    HMI_282_2= g_dataBuffer[273];

     BCU_410_1= g_dataBuffer[336];
     BCU_410_2= g_dataBuffer[337];
     BCU_410_3= g_dataBuffer[338];
     BCU_410_4= g_dataBuffer[339];
     BCU_410_5= g_dataBuffer[340];
     BCU_410_6= g_dataBuffer[341];
     BCU_410_7= g_dataBuffer[342];
     BCU_410_8= g_dataBuffer[343];
     BCU_410_9= g_dataBuffer[344];
     BCU_410_10= g_dataBuffer[345];
     BCU_410_11= g_dataBuffer[346];
     BCU_410_12= g_dataBuffer[347];
     BCU_410_13= g_dataBuffer[348];
     BCU_410_14= g_dataBuffer[349];
     BCU_410_15= g_dataBuffer[350];
     BCU_410_16= g_dataBuffer[351];


     BCU_411_1= g_dataBuffer[352];
     BCU_411_2= g_dataBuffer[353];
     BCU_411_3= g_dataBuffer[354];
     BCU_411_4= g_dataBuffer[355];
     BCU_411_5= g_dataBuffer[356];
     BCU_411_6= g_dataBuffer[357];
     BCU_411_7= g_dataBuffer[358];
     BCU_411_8= g_dataBuffer[359];
     BCU_411_9= g_dataBuffer[360];
     BCU_411_10= g_dataBuffer[361];
     BCU_411_11= g_dataBuffer[362];
     BCU_411_12= g_dataBuffer[363];
     BCU_411_13= g_dataBuffer[364];
     BCU_411_14= g_dataBuffer[365];
     BCU_411_15= g_dataBuffer[366];
     BCU_411_16= g_dataBuffer[367];



     BCU_420_1= g_dataBuffer[368];
     BCU_420_2= g_dataBuffer[369];
     BCU_420_3= g_dataBuffer[370];
     BCU_420_4= g_dataBuffer[371];
     BCU_420_5= g_dataBuffer[372];
     BCU_420_6= g_dataBuffer[373];
     BCU_420_7= g_dataBuffer[374];
     BCU_420_8= g_dataBuffer[375];
     BCU_420_9= g_dataBuffer[376];
     BCU_420_10= g_dataBuffer[377];
     BCU_420_11= g_dataBuffer[378];
     BCU_420_12= g_dataBuffer[379];
     BCU_420_13= g_dataBuffer[380];
     BCU_420_14= g_dataBuffer[381];
     BCU_420_15= g_dataBuffer[382];
     BCU_420_16= g_dataBuffer[383];

     BCU_421_1= g_dataBuffer[384];
     BCU_421_2= g_dataBuffer[385];
     BCU_421_3= g_dataBuffer[386];
     BCU_421_4= g_dataBuffer[387];
     BCU_421_5= g_dataBuffer[388];
     BCU_421_6= g_dataBuffer[389];
     BCU_421_7= g_dataBuffer[390];
     BCU_421_8= g_dataBuffer[391];
     BCU_421_9= g_dataBuffer[392];
     BCU_421_10= g_dataBuffer[393];
     BCU_421_11= g_dataBuffer[394];
     BCU_421_12= g_dataBuffer[395];
     BCU_421_13= g_dataBuffer[396];
     BCU_421_14= g_dataBuffer[397];
     BCU_421_15= g_dataBuffer[398];
     BCU_421_16= g_dataBuffer[399];

     BCU_430_1= g_dataBuffer[400];
     BCU_430_2= g_dataBuffer[401];
     BCU_430_3= g_dataBuffer[402];
     BCU_430_4= g_dataBuffer[403];
     BCU_430_5= g_dataBuffer[404];
     BCU_430_6= g_dataBuffer[405];
     BCU_430_7= g_dataBuffer[406];
     BCU_430_8= g_dataBuffer[407];
     BCU_430_9= g_dataBuffer[408];
     BCU_430_10= g_dataBuffer[409];
     BCU_430_11= g_dataBuffer[410];
     BCU_430_12= g_dataBuffer[411];
     BCU_430_13= g_dataBuffer[412];
     BCU_430_14= g_dataBuffer[413];
     BCU_430_15= g_dataBuffer[414];
     BCU_430_16= g_dataBuffer[415];

     BCU_431_1= g_dataBuffer[416];
     BCU_431_2= g_dataBuffer[417];
     BCU_431_3= g_dataBuffer[418];
     BCU_431_4= g_dataBuffer[419];
     BCU_431_5= g_dataBuffer[420];
     BCU_431_6= g_dataBuffer[421];
     BCU_431_7= g_dataBuffer[422];
     BCU_431_8= g_dataBuffer[423];
     BCU_431_9= g_dataBuffer[424];
     BCU_431_10= g_dataBuffer[425];
     BCU_431_11= g_dataBuffer[426];
     BCU_431_12= g_dataBuffer[427];
     BCU_431_13= g_dataBuffer[428];
     BCU_431_14= g_dataBuffer[429];
     BCU_431_15= g_dataBuffer[430];
     BCU_431_16= g_dataBuffer[431];


     BCU_440_1= g_dataBuffer[432];
     BCU_440_2= g_dataBuffer[433];
     BCU_440_3= g_dataBuffer[434];
     BCU_440_4= g_dataBuffer[435];
     BCU_440_5= g_dataBuffer[436];
     BCU_440_6= g_dataBuffer[437];
     BCU_440_7= g_dataBuffer[438];
     BCU_440_8= g_dataBuffer[439];
     BCU_440_9= g_dataBuffer[440];
     BCU_440_10= g_dataBuffer[441];
     BCU_440_11= g_dataBuffer[442];
     BCU_440_12= g_dataBuffer[443];
     BCU_440_13= g_dataBuffer[444];
     BCU_440_14= g_dataBuffer[445];
     BCU_440_15= g_dataBuffer[446];
     BCU_440_16= g_dataBuffer[447];

     BCU_441_1= g_dataBuffer[448];
     BCU_441_2= g_dataBuffer[449];
     BCU_441_3= g_dataBuffer[450];
     BCU_441_4= g_dataBuffer[451];
     BCU_441_5= g_dataBuffer[452];
     BCU_441_6= g_dataBuffer[453];
     BCU_441_7= g_dataBuffer[454];
     BCU_441_8= g_dataBuffer[455];
     BCU_441_9= g_dataBuffer[456];
     BCU_441_10= g_dataBuffer[457];
     BCU_441_11= g_dataBuffer[458];
     BCU_441_12= g_dataBuffer[459];
     BCU_441_13= g_dataBuffer[460];
     BCU_441_14= g_dataBuffer[461];
     BCU_441_15= g_dataBuffer[462];
     BCU_441_16= g_dataBuffer[463];

     BCU_418_1=g_dataBuffer[1344];
     BCU_418_2=g_dataBuffer[1345];
     BCU_418_3=g_dataBuffer[1346];
     BCU_418_4=g_dataBuffer[1347];
     BCU_418_5=g_dataBuffer[1348];
     BCU_418_6=g_dataBuffer[1349];
     BCU_418_7=g_dataBuffer[1350];
     BCU_418_8=g_dataBuffer[1351];

//g_dataBuffer[1360]= Change_BigEen(g_dataBuffer[1360]);//制动级位设定值
      BCU_419_1=g_dataBuffer[1360];//颠倒一下
      BCU_419_2=g_dataBuffer[1361];
      BCU_419_3=g_dataBuffer[1362];
      BCU_419_4=g_dataBuffer[1363];
      BCU_419_5=g_dataBuffer[1364];
      BCU_419_6=g_dataBuffer[1365];
      BCU_419_7=g_dataBuffer[1366];
      BCU_419_8=g_dataBuffer[1367];
      BCU_419_9=g_dataBuffer[1368];
      BCU_419_10=g_dataBuffer[1369];
      BCU_419_11=g_dataBuffer[1370];
      BCU_419_12=g_dataBuffer[1371];
      BCU_419_13=g_dataBuffer[1372];
      BCU_419_14=g_dataBuffer[1373];
      BCU_419_15=g_dataBuffer[1374];
      BCU_419_16=g_dataBuffer[1375];

       TCU_518_8=g_dataBuffer[1383];
       TCU_528_8=g_dataBuffer[1399];
       TCU_518_9=g_dataBuffer[1384];
       TCU_528_9=g_dataBuffer[1400];
       TCU_510_1= g_dataBuffer[464];
       TCU_510_2= g_dataBuffer[465];
       TCU_510_3= g_dataBuffer[466];
       TCU_510_4= g_dataBuffer[467];
       TCU_510_5= g_dataBuffer[468];
       TCU_510_6= g_dataBuffer[469];
       TCU_510_7= g_dataBuffer[470];
       TCU_510_8= g_dataBuffer[471];
       TCU_510_9= g_dataBuffer[472];
       TCU_510_10= g_dataBuffer[473];
       TCU_510_11= g_dataBuffer[474];
       TCU_510_12= g_dataBuffer[475];
       TCU_510_13= g_dataBuffer[476];
       TCU_510_14= g_dataBuffer[477];
       TCU_510_15= g_dataBuffer[478];
       TCU_510_16= g_dataBuffer[479];

       TCU_511_1= g_dataBuffer[480];
       TCU_511_2= g_dataBuffer[481];
       TCU_511_3= g_dataBuffer[482];
       TCU_511_4= g_dataBuffer[483];
       TCU_511_5= g_dataBuffer[484];
       TCU_511_6= g_dataBuffer[485];
       TCU_511_7= g_dataBuffer[486];
       TCU_511_8= g_dataBuffer[487];
       TCU_511_9= g_dataBuffer[488];
       TCU_511_10= g_dataBuffer[489];
       TCU_511_11= g_dataBuffer[490];
       TCU_511_12= g_dataBuffer[491];
       TCU_511_13= g_dataBuffer[492];
       TCU_511_14= g_dataBuffer[493];
       TCU_511_15= g_dataBuffer[494];
       TCU_511_16= g_dataBuffer[495];

       TCU_520_1= g_dataBuffer[496];
       TCU_520_2= g_dataBuffer[497];
       TCU_520_3= g_dataBuffer[498];
       TCU_520_4= g_dataBuffer[499];
       TCU_520_5= g_dataBuffer[500];
       TCU_520_6= g_dataBuffer[501];
       TCU_520_7= g_dataBuffer[502];
       TCU_520_8= g_dataBuffer[503];
       TCU_520_9= g_dataBuffer[504];
       TCU_520_10= g_dataBuffer[505];
       TCU_520_11= g_dataBuffer[506];
       TCU_520_12= g_dataBuffer[507];
       TCU_520_13= g_dataBuffer[508];
       TCU_520_14= g_dataBuffer[509];
       TCU_520_15= g_dataBuffer[510];
       TCU_520_16= g_dataBuffer[511];

       TCU_521_1= g_dataBuffer[512];
       TCU_521_2= g_dataBuffer[513];
       TCU_521_3= g_dataBuffer[514];
       TCU_521_4= g_dataBuffer[515];
       TCU_521_5= g_dataBuffer[516];
       TCU_521_6= g_dataBuffer[517];
       TCU_521_7= g_dataBuffer[518];
       TCU_521_8= g_dataBuffer[519];
       TCU_521_9= g_dataBuffer[520];
       TCU_521_10= g_dataBuffer[521];
       TCU_521_11= g_dataBuffer[522];
       TCU_521_12= g_dataBuffer[523];
       TCU_521_13= g_dataBuffer[524];
       TCU_521_14= g_dataBuffer[525];
       TCU_521_15= g_dataBuffer[526];
       TCU_521_16= g_dataBuffer[527];

        ACU_610_1= g_dataBuffer[528];
        ACU_610_2= g_dataBuffer[529];
        ACU_610_3= g_dataBuffer[530];
        ACU_610_4= g_dataBuffer[531];
        ACU_610_5= g_dataBuffer[532];
        ACU_610_6= g_dataBuffer[533];
        ACU_610_7= g_dataBuffer[534];
        ACU_610_8= g_dataBuffer[535];
        ACU_610_9= g_dataBuffer[536];
        ACU_610_10= g_dataBuffer[537];
        ACU_610_11= g_dataBuffer[538];
        ACU_610_12= g_dataBuffer[539];
        ACU_610_13= g_dataBuffer[540];
        ACU_610_14= g_dataBuffer[541];
        ACU_610_15= g_dataBuffer[542];
        ACU_610_16= g_dataBuffer[543];

        ACU_611_1= g_dataBuffer[544];
        ACU_611_2= g_dataBuffer[545];
        ACU_611_3= g_dataBuffer[546];
        ACU_611_4= g_dataBuffer[547];
        ACU_611_5= g_dataBuffer[548];
        ACU_611_6= g_dataBuffer[549];
        ACU_611_7= g_dataBuffer[550];
        ACU_611_8= g_dataBuffer[551];
        ACU_611_9= g_dataBuffer[552];
        ACU_611_10= g_dataBuffer[553];
        ACU_611_11= g_dataBuffer[554];
        ACU_611_12= g_dataBuffer[555];
        ACU_611_13= g_dataBuffer[556];
        ACU_611_14= g_dataBuffer[557];
        ACU_611_15= g_dataBuffer[558];
        ACU_611_16= g_dataBuffer[559];

        ACU_620_1= g_dataBuffer[560];
        ACU_620_2= g_dataBuffer[561];
        ACU_620_3= g_dataBuffer[562];
        ACU_620_4= g_dataBuffer[563];
        ACU_620_5= g_dataBuffer[564];
        ACU_620_6= g_dataBuffer[565];
        ACU_620_7= g_dataBuffer[566];
        ACU_620_8= g_dataBuffer[567];
        ACU_620_9= g_dataBuffer[568];
        ACU_620_10= g_dataBuffer[569];
        ACU_620_11= g_dataBuffer[570];
        ACU_620_12= g_dataBuffer[571];
        ACU_620_13= g_dataBuffer[572];
        ACU_620_14= g_dataBuffer[573];
        ACU_620_15= g_dataBuffer[574];
        ACU_620_16= g_dataBuffer[575];

        ACU_621_1= g_dataBuffer[576];
        ACU_621_2= g_dataBuffer[577];
        ACU_621_3= g_dataBuffer[578];
        ACU_621_4= g_dataBuffer[579];
        ACU_621_5= g_dataBuffer[580];
        ACU_621_6= g_dataBuffer[581];
        ACU_621_7= g_dataBuffer[582];
        ACU_621_8= g_dataBuffer[583];
        ACU_621_9= g_dataBuffer[584];
        ACU_621_10= g_dataBuffer[585];
        ACU_621_11= g_dataBuffer[586];
        ACU_621_12= g_dataBuffer[587];
        ACU_621_13= g_dataBuffer[588];
        ACU_621_14= g_dataBuffer[589];
        ACU_621_15= g_dataBuffer[590];
        ACU_621_16= g_dataBuffer[591];

    DCU_OLD_700_1= g_dataBuffer[864+48];
    DCU_OLD_700_2= g_dataBuffer[865+48];
    DCU_OLD_700_3= g_dataBuffer[866+48];
    DCU_OLD_700_4= g_dataBuffer[867+48];
    DCU_OLD_700_5= g_dataBuffer[868+48];
    DCU_OLD_700_6= g_dataBuffer[869+48];
    DCU_OLD_700_7= g_dataBuffer[870+48];
    DCU_OLD_700_8= g_dataBuffer[871+48];
    DCU_OLD_700_9= g_dataBuffer[872+48];
    DCU_OLD_700_10= g_dataBuffer[873+48];
    DCU_OLD_700_11= g_dataBuffer[874+48];
    DCU_OLD_700_12= g_dataBuffer[875+48];
    DCU_OLD_700_13= g_dataBuffer[876+48];
    DCU_OLD_700_14= g_dataBuffer[877+48];
    DCU_OLD_700_15= g_dataBuffer[878+48];
    DCU_OLD_700_16= g_dataBuffer[879+48];

    DCU_OLD_701_1= g_dataBuffer[880+48];
    DCU_OLD_701_2= g_dataBuffer[881+48];
    DCU_OLD_701_3= g_dataBuffer[882+48];
    DCU_OLD_701_4= g_dataBuffer[883+48];
    DCU_OLD_701_5= g_dataBuffer[884+48];
    DCU_OLD_701_6= g_dataBuffer[885+48];
    DCU_OLD_701_7= g_dataBuffer[886+48];
    DCU_OLD_701_8= g_dataBuffer[887+48];
    DCU_OLD_701_9= g_dataBuffer[888+48];
    DCU_OLD_701_10= g_dataBuffer[889+48];
    DCU_OLD_701_11= g_dataBuffer[890+48];
    DCU_OLD_701_12= g_dataBuffer[891+48];
    DCU_OLD_701_13= g_dataBuffer[892+48];
    DCU_OLD_701_14= g_dataBuffer[893+48];
    DCU_OLD_701_15= g_dataBuffer[894+48];
    DCU_OLD_701_16= g_dataBuffer[895+48];


    DCU_OLD_710_1= g_dataBuffer[896+48];
    DCU_OLD_710_2= g_dataBuffer[897+48];
    DCU_OLD_710_3= g_dataBuffer[898+48];
    DCU_OLD_710_4= g_dataBuffer[899+48];
    DCU_OLD_710_5= g_dataBuffer[900+48];
    DCU_OLD_710_6= g_dataBuffer[901+48];
    DCU_OLD_710_7= g_dataBuffer[902+48];
    DCU_OLD_710_8= g_dataBuffer[903+48];
    DCU_OLD_710_9= g_dataBuffer[904+48];
    DCU_OLD_710_10= g_dataBuffer[905+48];
    DCU_OLD_710_11= g_dataBuffer[906+48];
    DCU_OLD_710_12= g_dataBuffer[907+48];
    DCU_OLD_710_13= g_dataBuffer[908+48];
    DCU_OLD_710_14= g_dataBuffer[909+48];
    DCU_OLD_710_15= g_dataBuffer[910+48];
    DCU_OLD_710_16= g_dataBuffer[911+48];

    DCU_OLD_711_1= g_dataBuffer[912+48];
    DCU_OLD_711_2= g_dataBuffer[913+48];
    DCU_OLD_711_3= g_dataBuffer[914+48];
    DCU_OLD_711_4= g_dataBuffer[915+48];
    DCU_OLD_711_5= g_dataBuffer[916+48];
    DCU_OLD_711_6= g_dataBuffer[917+48];
    DCU_OLD_711_7= g_dataBuffer[918+48];
    DCU_OLD_711_8= g_dataBuffer[919+48];
    DCU_OLD_711_9= g_dataBuffer[920+48];
    DCU_OLD_711_10= g_dataBuffer[921+48];
    DCU_OLD_711_11= g_dataBuffer[922+48];
    DCU_OLD_711_12= g_dataBuffer[923+48];
    DCU_OLD_711_13= g_dataBuffer[924+48];
    DCU_OLD_711_14= g_dataBuffer[925+48];
    DCU_OLD_711_15= g_dataBuffer[926+48];
    DCU_OLD_711_16= g_dataBuffer[927+48];


    DCU_OLD_720_1= g_dataBuffer[928+48];
    DCU_OLD_720_2= g_dataBuffer[929+48];
    DCU_OLD_720_3= g_dataBuffer[930+48];
    DCU_OLD_720_4= g_dataBuffer[931+48];
    DCU_OLD_720_5= g_dataBuffer[932+48];
    DCU_OLD_720_6= g_dataBuffer[933+48];
    DCU_OLD_720_7= g_dataBuffer[934+48];
    DCU_OLD_720_8= g_dataBuffer[935+48];
    DCU_OLD_720_9= g_dataBuffer[936+48];
    DCU_OLD_720_10= g_dataBuffer[937+48];
    DCU_OLD_720_11= g_dataBuffer[938+48];
    DCU_OLD_720_12= g_dataBuffer[939+48];
    DCU_OLD_720_13= g_dataBuffer[940+48];
    DCU_OLD_720_14= g_dataBuffer[941+48];
    DCU_OLD_720_15= g_dataBuffer[942+48];
    DCU_OLD_720_16= g_dataBuffer[943+48];

    DCU_OLD_721_1= g_dataBuffer[944+48];
    DCU_OLD_721_2= g_dataBuffer[945+48];
    DCU_OLD_721_3= g_dataBuffer[946+48];
    DCU_OLD_721_4= g_dataBuffer[947+48];
    DCU_OLD_721_5= g_dataBuffer[948+48];
    DCU_OLD_721_6= g_dataBuffer[949+48];
    DCU_OLD_721_7= g_dataBuffer[950+48];
    DCU_OLD_721_8= g_dataBuffer[951+48];
    DCU_OLD_721_9= g_dataBuffer[952+48];
    DCU_OLD_721_10= g_dataBuffer[953+48];
    DCU_OLD_721_11= g_dataBuffer[954+48];
    DCU_OLD_721_12= g_dataBuffer[955+48];
    DCU_OLD_721_13= g_dataBuffer[956+48];
    DCU_OLD_721_14= g_dataBuffer[957+48];
    DCU_OLD_721_15= g_dataBuffer[958+48];
    DCU_OLD_721_16= g_dataBuffer[959+48];

    DCU_OLD_730_1= g_dataBuffer[960+48];
    DCU_OLD_730_2= g_dataBuffer[961+48];
    DCU_OLD_730_3= g_dataBuffer[962+48];
    DCU_OLD_730_4= g_dataBuffer[963+48];
    DCU_OLD_730_5= g_dataBuffer[964+48];
    DCU_OLD_730_6= g_dataBuffer[965+48];
    DCU_OLD_730_7= g_dataBuffer[966+48];
    DCU_OLD_730_8= g_dataBuffer[967+48];
    DCU_OLD_730_9= g_dataBuffer[968+48];
    DCU_OLD_730_10= g_dataBuffer[969+48];
    DCU_OLD_730_11= g_dataBuffer[970+48];
    DCU_OLD_730_12= g_dataBuffer[971+48];
    DCU_OLD_730_13= g_dataBuffer[972+48];
    DCU_OLD_730_14= g_dataBuffer[973+48];
    DCU_OLD_730_15= g_dataBuffer[974+48];
    DCU_OLD_730_16= g_dataBuffer[975+48];

    DCU_OLD_731_1= g_dataBuffer[976+48];
    DCU_OLD_731_2= g_dataBuffer[977+48];
    DCU_OLD_731_3= g_dataBuffer[978+48];
    DCU_OLD_731_4= g_dataBuffer[979+48];
    DCU_OLD_731_5= g_dataBuffer[980+48];
    DCU_OLD_731_6= g_dataBuffer[981+48];
    DCU_OLD_731_7= g_dataBuffer[982+48];
    DCU_OLD_731_8= g_dataBuffer[983+48];
    DCU_OLD_731_9= g_dataBuffer[984+48];
    DCU_OLD_731_10= g_dataBuffer[985+48];
    DCU_OLD_731_11= g_dataBuffer[986+48];
    DCU_OLD_731_12= g_dataBuffer[987+48];
    DCU_OLD_731_13= g_dataBuffer[988+48];
    DCU_OLD_731_14= g_dataBuffer[989+48];
    DCU_OLD_731_15= g_dataBuffer[990+48];
    DCU_OLD_731_16= g_dataBuffer[991+48];

    DCU_OLD_740_1= g_dataBuffer[992+48];
    DCU_OLD_740_2= g_dataBuffer[993+48];
    DCU_OLD_740_3= g_dataBuffer[994+48];
    DCU_OLD_740_4= g_dataBuffer[995+48];
    DCU_OLD_740_5= g_dataBuffer[996+48];
    DCU_OLD_740_6= g_dataBuffer[997+48];
    DCU_OLD_740_7= g_dataBuffer[998+48];
    DCU_OLD_740_8= g_dataBuffer[999+48];
    DCU_OLD_740_9= g_dataBuffer[1000+48];
    DCU_OLD_740_10= g_dataBuffer[1001+48];
    DCU_OLD_740_11= g_dataBuffer[1002+48];
    DCU_OLD_740_12= g_dataBuffer[1003+48];
    DCU_OLD_740_13= g_dataBuffer[1004+48];
    DCU_OLD_740_14= g_dataBuffer[1005+48];
    DCU_OLD_740_15= g_dataBuffer[1006+48];
    DCU_OLD_740_16= g_dataBuffer[1007+48];

    DCU_OLD_741_1= g_dataBuffer[1008+48];
    DCU_OLD_741_2= g_dataBuffer[1009+48];
    DCU_OLD_741_3= g_dataBuffer[1010+48];
    DCU_OLD_741_4= g_dataBuffer[1011+48];
    DCU_OLD_741_5= g_dataBuffer[1012+48];
    DCU_OLD_741_6= g_dataBuffer[1013+48];
    DCU_OLD_741_7= g_dataBuffer[1014+48];
    DCU_OLD_741_8= g_dataBuffer[1015+48];
    DCU_OLD_741_9= g_dataBuffer[1016+48];
    DCU_OLD_741_10= g_dataBuffer[1017+48];
    DCU_OLD_741_11= g_dataBuffer[1018+48];
    DCU_OLD_741_12= g_dataBuffer[1019+48];
    DCU_OLD_741_13= g_dataBuffer[1020+48];
    DCU_OLD_741_14= g_dataBuffer[1021+48];
    DCU_OLD_741_15= g_dataBuffer[1022+48];
    DCU_OLD_741_16= g_dataBuffer[1023+48];

    DCU_OLD_750_1= g_dataBuffer[1024+48];
    DCU_OLD_750_2= g_dataBuffer[1025+48];
    DCU_OLD_750_3= g_dataBuffer[1026+48];
    DCU_OLD_750_4= g_dataBuffer[1027+48];
    DCU_OLD_750_5= g_dataBuffer[1028+48];
    DCU_OLD_750_6= g_dataBuffer[1029+48];
    DCU_OLD_750_7= g_dataBuffer[1030+48];
    DCU_OLD_750_8= g_dataBuffer[1031+48];
    DCU_OLD_750_9= g_dataBuffer[1032+48];
    DCU_OLD_750_10= g_dataBuffer[1033+48];
    DCU_OLD_750_11= g_dataBuffer[1034+48];
    DCU_OLD_750_12= g_dataBuffer[1035+48];
    DCU_OLD_750_13= g_dataBuffer[1036+48];
    DCU_OLD_750_14= g_dataBuffer[1037+48];
    DCU_OLD_750_15= g_dataBuffer[1038+48];
    DCU_OLD_750_16= g_dataBuffer[1039+48];

    DCU_OLD_751_1= g_dataBuffer[1040+48];
    DCU_OLD_751_2= g_dataBuffer[1041+48];
    DCU_OLD_751_3= g_dataBuffer[1042+48];
    DCU_OLD_751_4= g_dataBuffer[1043+48];
    DCU_OLD_751_5= g_dataBuffer[1044+48];
    DCU_OLD_751_6= g_dataBuffer[1045+48];
    DCU_OLD_751_7= g_dataBuffer[1046+48];
    DCU_OLD_751_8= g_dataBuffer[1047+48];
    DCU_OLD_751_9= g_dataBuffer[1048+48];
    DCU_OLD_751_10= g_dataBuffer[1049+48];
    DCU_OLD_751_11= g_dataBuffer[1050+48];
    DCU_OLD_751_12= g_dataBuffer[1051+48];
    DCU_OLD_751_13= g_dataBuffer[1052+48];
    DCU_OLD_751_14= g_dataBuffer[1053+48];
    DCU_OLD_751_15= g_dataBuffer[1054+48];
    DCU_OLD_751_16= g_dataBuffer[1055+48];


    DCU_OLD_760_1= g_dataBuffer[1056+48];
    DCU_OLD_760_2= g_dataBuffer[1057+48];
    DCU_OLD_760_3= g_dataBuffer[1058+48];
    DCU_OLD_760_4= g_dataBuffer[1059+48];
    DCU_OLD_760_5= g_dataBuffer[1060+48];
    DCU_OLD_760_6= g_dataBuffer[1061+48];
    DCU_OLD_760_7= g_dataBuffer[1062+48];
    DCU_OLD_760_8= g_dataBuffer[1063+48];
    DCU_OLD_760_9= g_dataBuffer[1064+48];
    DCU_OLD_760_10= g_dataBuffer[1065+48];
    DCU_OLD_760_11= g_dataBuffer[1066+48];
    DCU_OLD_760_12= g_dataBuffer[1067+48];
    DCU_OLD_760_13= g_dataBuffer[1068+48];
    DCU_OLD_760_14= g_dataBuffer[1069+48];
    DCU_OLD_760_15= g_dataBuffer[1070+48];
    DCU_OLD_760_16= g_dataBuffer[1071+48];

    DCU_OLD_761_1= g_dataBuffer[1072+48];
    DCU_OLD_761_2= g_dataBuffer[1073+48];
    DCU_OLD_761_3= g_dataBuffer[1074+48];
    DCU_OLD_761_4= g_dataBuffer[1075+48];
    DCU_OLD_761_5= g_dataBuffer[1076+48];
    DCU_OLD_761_6= g_dataBuffer[1077+48];
    DCU_OLD_761_7= g_dataBuffer[1078+48];
    DCU_OLD_761_8= g_dataBuffer[1079+48];
    DCU_OLD_761_9= g_dataBuffer[872+48];
    DCU_OLD_761_10= g_dataBuffer[873+48];
    DCU_OLD_761_11= g_dataBuffer[874+48];
    DCU_OLD_761_12= g_dataBuffer[875+48];
    DCU_OLD_761_13= g_dataBuffer[876+48];
    DCU_OLD_761_14= g_dataBuffer[877+48];
    DCU_OLD_761_15= g_dataBuffer[878+48];
    DCU_OLD_761_16= g_dataBuffer[879+48];


    DCU_OLD_770_1= g_dataBuffer[1088+48];
    DCU_OLD_770_2= g_dataBuffer[1089+48];
    DCU_OLD_770_3= g_dataBuffer[1090+48];
    DCU_OLD_770_4= g_dataBuffer[1091+48];
    DCU_OLD_770_5= g_dataBuffer[1092+48];
    DCU_OLD_770_6= g_dataBuffer[1093+48];
    DCU_OLD_770_7= g_dataBuffer[1094+48];
    DCU_OLD_770_8= g_dataBuffer[1095+48];
    DCU_OLD_770_9= g_dataBuffer[1096+48];
    DCU_OLD_770_10= g_dataBuffer[1097+48];
    DCU_OLD_770_11= g_dataBuffer[1098+48];
    DCU_OLD_770_12= g_dataBuffer[1099+48];
    DCU_OLD_770_13= g_dataBuffer[1100+48];
    DCU_OLD_770_14= g_dataBuffer[1101+48];
    DCU_OLD_770_15= g_dataBuffer[1102+48];
    DCU_OLD_770_16= g_dataBuffer[1103+48];

    DCU_OLD_771_1= g_dataBuffer[1104+48];
    DCU_OLD_771_2= g_dataBuffer[1105+48];
    DCU_OLD_771_3= g_dataBuffer[1106+48];
    DCU_OLD_771_4= g_dataBuffer[1107+48];
    DCU_OLD_771_5= g_dataBuffer[1108+48];
    DCU_OLD_771_6= g_dataBuffer[1109+48];
    DCU_OLD_771_7= g_dataBuffer[1110+48];
    DCU_OLD_771_8= g_dataBuffer[1111+48];
    DCU_OLD_771_9= g_dataBuffer[1112+48];
    DCU_OLD_771_10= g_dataBuffer[1113+48];
    DCU_OLD_771_11= g_dataBuffer[1114+48];
    DCU_OLD_771_12= g_dataBuffer[1115+48];
    DCU_OLD_771_13= g_dataBuffer[1116+48];
    DCU_OLD_771_14= g_dataBuffer[1117+48];
    DCU_OLD_771_15= g_dataBuffer[1118+48];
    DCU_OLD_771_16= g_dataBuffer[1119+48];

    DCU_OLD_780_1= g_dataBuffer[1120+48];
    DCU_OLD_780_2= g_dataBuffer[1121+48];
    DCU_OLD_780_3= g_dataBuffer[1122+48];
    DCU_OLD_780_4= g_dataBuffer[1123+48];
    DCU_OLD_780_5= g_dataBuffer[1124+48];
    DCU_OLD_780_6= g_dataBuffer[1125+48];
    DCU_OLD_780_7= g_dataBuffer[1126+48];
    DCU_OLD_780_8= g_dataBuffer[1127+48];
    DCU_OLD_780_9= g_dataBuffer[1128+48];
    DCU_OLD_780_10= g_dataBuffer[1129+48];
    DCU_OLD_780_11= g_dataBuffer[1130+48];
    DCU_OLD_780_12= g_dataBuffer[1131+48];
    DCU_OLD_780_13= g_dataBuffer[1132+48];
    DCU_OLD_780_14= g_dataBuffer[1133+48];
    DCU_OLD_780_15= g_dataBuffer[1134+48];
    DCU_OLD_780_16= g_dataBuffer[1135+48];

    DCU_OLD_781_1= g_dataBuffer[1136+48];
    DCU_OLD_781_2= g_dataBuffer[1137+48];
    DCU_OLD_781_3= g_dataBuffer[1138+48];
    DCU_OLD_781_4= g_dataBuffer[1139+48];
    DCU_OLD_781_5= g_dataBuffer[1140+48];
    DCU_OLD_781_6= g_dataBuffer[1141+48];
    DCU_OLD_781_7= g_dataBuffer[1142+48];
    DCU_OLD_781_8= g_dataBuffer[1143+48];
    DCU_OLD_781_9= g_dataBuffer[1144+48];
    DCU_OLD_781_10= g_dataBuffer[1145+48];
    DCU_OLD_781_11= g_dataBuffer[1146+48];
    DCU_OLD_781_12= g_dataBuffer[1147+48];
    DCU_OLD_781_13= g_dataBuffer[1148+48];
    DCU_OLD_781_14= g_dataBuffer[1149+48];
    DCU_OLD_781_15= g_dataBuffer[1150+48];
    DCU_OLD_781_16= g_dataBuffer[1151+48];

    DCU_OLD_790_1= g_dataBuffer[1152+48];
    DCU_OLD_790_2= g_dataBuffer[1153+48];
    DCU_OLD_790_3= g_dataBuffer[1154+48];
    DCU_OLD_790_4= g_dataBuffer[1155+48];
    DCU_OLD_790_5= g_dataBuffer[1156+48];
    DCU_OLD_790_6= g_dataBuffer[1157+48];
    DCU_OLD_790_7= g_dataBuffer[1158+48];
    DCU_OLD_790_8= g_dataBuffer[1159+48];
    DCU_OLD_790_9= g_dataBuffer[1160+48];
    DCU_OLD_790_10= g_dataBuffer[1161+48];
    DCU_OLD_790_11= g_dataBuffer[1162+48];
    DCU_OLD_790_12= g_dataBuffer[1163+48];
    DCU_OLD_790_13= g_dataBuffer[1164+48];
    DCU_OLD_790_14= g_dataBuffer[1165+48];
    DCU_OLD_790_15= g_dataBuffer[1166+48];
    DCU_OLD_790_16= g_dataBuffer[1167+48];

    DCU_OLD_791_1= g_dataBuffer[1168+48];
    DCU_OLD_791_2= g_dataBuffer[1169+48];
    DCU_OLD_791_3= g_dataBuffer[1170+48];
    DCU_OLD_791_4= g_dataBuffer[1171+48];
    DCU_OLD_791_5= g_dataBuffer[1172+48];
    DCU_OLD_791_6= g_dataBuffer[1173+48];
    DCU_OLD_791_7= g_dataBuffer[1174+48];
    DCU_OLD_791_8= g_dataBuffer[1175+48];
    DCU_OLD_791_9= g_dataBuffer[1176+48];
    DCU_OLD_791_10= g_dataBuffer[1177+48];
    DCU_OLD_791_11= g_dataBuffer[1178+48];
    DCU_OLD_791_12= g_dataBuffer[1179+48];
    DCU_OLD_791_13= g_dataBuffer[1180+48];
    DCU_OLD_791_14= g_dataBuffer[1181+48];
    DCU_OLD_791_15= g_dataBuffer[1182+48];
    DCU_OLD_791_16= g_dataBuffer[1183+48];

    DCU_OLD_7A0_1= g_dataBuffer[1184+48];
    DCU_OLD_7A0_2= g_dataBuffer[1185+48];
    DCU_OLD_7A0_3= g_dataBuffer[1186+48];
    DCU_OLD_7A0_4= g_dataBuffer[1187+48];
    DCU_OLD_7A0_5= g_dataBuffer[1188+48];
    DCU_OLD_7A0_6= g_dataBuffer[1189+48];
    DCU_OLD_7A0_7= g_dataBuffer[1190+48];
    DCU_OLD_7A0_8= g_dataBuffer[1191+48];
    DCU_OLD_7A0_9= g_dataBuffer[1192+48];
    DCU_OLD_7A0_10= g_dataBuffer[1193+48];
    DCU_OLD_7A0_11= g_dataBuffer[1194+48];
    DCU_OLD_7A0_12= g_dataBuffer[1195+48];
    DCU_OLD_7A0_13= g_dataBuffer[1196+48];
    DCU_OLD_7A0_14= g_dataBuffer[1197+48];
    DCU_OLD_7A0_15= g_dataBuffer[1198+48];
    DCU_OLD_7A0_16= g_dataBuffer[1199+48];

    DCU_OLD_7A1_1= g_dataBuffer[1200+48];
    DCU_OLD_7A1_2= g_dataBuffer[1201+48];
    DCU_OLD_7A1_3= g_dataBuffer[1202+48];
    DCU_OLD_7A1_4= g_dataBuffer[1203+48];
    DCU_OLD_7A1_5= g_dataBuffer[1204+48];
    DCU_OLD_7A1_6= g_dataBuffer[1205+48];
    DCU_OLD_7A1_7= g_dataBuffer[1206+48];
    DCU_OLD_7A1_8= g_dataBuffer[1207+48];
    DCU_OLD_7A1_9= g_dataBuffer[1208+48];
    DCU_OLD_7A1_10= g_dataBuffer[1209+48];
    DCU_OLD_7A1_11= g_dataBuffer[1210+48];
    DCU_OLD_7A1_12= g_dataBuffer[1211+48];
    DCU_OLD_7A1_13= g_dataBuffer[1212+48];
    DCU_OLD_7A1_14= g_dataBuffer[1213+48];
    DCU_OLD_7A1_15= g_dataBuffer[1214+48];
    DCU_OLD_7A1_16= g_dataBuffer[1215+48];

    DCU_OLD_7B0_1= g_dataBuffer[1216+48];
    DCU_OLD_7B0_2= g_dataBuffer[1217+48];
    DCU_OLD_7B0_3= g_dataBuffer[1218+48];
    DCU_OLD_7B0_4= g_dataBuffer[1219+48];
    DCU_OLD_7B0_5= g_dataBuffer[1220+48];
    DCU_OLD_7B0_6= g_dataBuffer[1221+48];
    DCU_OLD_7B0_7= g_dataBuffer[1222+48];
    DCU_OLD_7B0_8= g_dataBuffer[1223+48];
    DCU_OLD_7B0_9= g_dataBuffer[1224+48];
    DCU_OLD_7B0_10= g_dataBuffer[1225+48];
    DCU_OLD_7B0_11= g_dataBuffer[1226+48];
    DCU_OLD_7B0_12= g_dataBuffer[1227+48];
    DCU_OLD_7B0_13= g_dataBuffer[1228+48];
    DCU_OLD_7B0_14= g_dataBuffer[1229+48];
    DCU_OLD_7B0_15= g_dataBuffer[1230+48];
    DCU_OLD_7B0_16= g_dataBuffer[1231+48];

    DCU_OLD_7B1_1= g_dataBuffer[1216+48];
    DCU_OLD_7B1_2= g_dataBuffer[1217+48];
    DCU_OLD_7B1_3= g_dataBuffer[1218+48];
    DCU_OLD_7B1_4= g_dataBuffer[1219+48];
    DCU_OLD_7B1_5= g_dataBuffer[1220+48];
    DCU_OLD_7B1_6= g_dataBuffer[1221+48];
    DCU_OLD_7B1_7= g_dataBuffer[1222+48];
    DCU_OLD_7B1_8= g_dataBuffer[1223+48];
    DCU_OLD_7B1_9= g_dataBuffer[1224+48];
    DCU_OLD_7B1_10= g_dataBuffer[1225+48];
    DCU_OLD_7B1_11= g_dataBuffer[1226+48];
    DCU_OLD_7B1_12= g_dataBuffer[1227+48];
    DCU_OLD_7B1_13= g_dataBuffer[1228+48];
    DCU_OLD_7B1_14= g_dataBuffer[1229+48];
    DCU_OLD_7B1_15= g_dataBuffer[1230+48];
    DCU_OLD_7B1_16= g_dataBuffer[1231+48];


//    DCU_OLD_7B1_1= g_dataBuffer[1232+48];
//    DCU_OLD_7B1_2= g_dataBuffer[1233+48];
//    DCU_OLD_7B1_3= g_dataBuffer[1234+48];
//    DCU_OLD_7B1_4= g_dataBuffer[1235+48];
//    DCU_OLD_7B1_5= g_dataBuffer[1236+48];
//    DCU_OLD_7B1_6= g_dataBuffer[1237+48];
//    DCU_OLD_7B1_7= g_dataBuffer[1238+48];
//    DCU_OLD_7B1_8= g_dataBuffer[1239+48];
//    DCU_OLD_7B1_9= g_dataBuffer[1240+48];
//    DCU_OLD_7B1_10= g_dataBuffer[1241+48];
//    DCU_OLD_7B1_11= g_dataBuffer[1242+48];
//    DCU_OLD_7B1_12= g_dataBuffer[1243+48];
//    DCU_OLD_7B1_13= g_dataBuffer[1244+48];
//    DCU_OLD_7B1_14= g_dataBuffer[1245+48];
//    DCU_OLD_7B1_15= g_dataBuffer[1246+48];
//    DCU_OLD_7B1_16= g_dataBuffer[1247+48];

//    g_dataBuffer[1283]= Change_BigEen(g_dataBuffer[1283]);// CCU生命信号
//    g_dataBuffer[1290]= Change_BigEen(g_dataBuffer[1290]);// TC1蓄电池温度
//    g_dataBuffer[1291]= Change_BigEen(g_dataBuffer[1291]);// TC2蓄电池温度
//    g_dataBuffer[1293]= Change_BigEen(g_dataBuffer[1293]);// 列车速度
//    g_dataBuffer[1294]= Change_BigEen(g_dataBuffer[1294]);// 网压
//    g_dataBuffer[1295]= Change_BigEen(g_dataBuffer[1295]);// 网流
//    g_dataBuffer[636]= Change_BigEen(g_dataBuffer[636]);// 门控器1操作状态
//    g_dataBuffer[684]= Change_BigEen(g_dataBuffer[684]);// 门控器2操作状态
//    g_dataBuffer[732]= Change_BigEen(g_dataBuffer[732]);// 门控器3操作状态
//    g_dataBuffer[780]= Change_BigEen(g_dataBuffer[780]);// 门控器4操作状态
//    g_dataBuffer[828]= Change_BigEen(g_dataBuffer[828]);// 门控器5操作状态
//    g_dataBuffer[876]= Change_BigEen(g_dataBuffer[876]);// 门控器6操作状态
//    g_dataBuffer[924]= Change_BigEen(g_dataBuffer[924]);// 门控器7操作状态
//    g_dataBuffer[972]= Change_BigEen(g_dataBuffer[972]);// 门控器8操作状态

     CCU_HMI_308_1= g_dataBuffer[1280];//limeihua
     CCU_HMI_308_2= g_dataBuffer[1281];
     CCU_HMI_308_3= g_dataBuffer[1282];     
     CCU_HMI_308_4= g_dataBuffer[1283];
     CCU_HMI_308_5= g_dataBuffer[1284];
     CCU_HMI_308_6= g_dataBuffer[1285];
     CCU_HMI_308_7= g_dataBuffer[1286];
     CCU_HMI_308_8= g_dataBuffer[1287];
     CCU_HMI_308_9= g_dataBuffer[1288];
     CCU_HMI_308_10= g_dataBuffer[1289];
     CCU_HMI_308_11= g_dataBuffer[1290];
     CCU_HMI_308_12= g_dataBuffer[1291];
     CCU_HMI_308_13= g_dataBuffer[1292];
     CCU_HMI_308_14= g_dataBuffer[1293];
     CCU_HMI_308_15= g_dataBuffer[1294];
     CCU_HMI_308_16= g_dataBuffer[1295];

     CCU_HMI_309_1= g_dataBuffer[1296];//lmh
     CCU_HMI_309_2= g_dataBuffer[1297];
     CCU_HMI_309_3= g_dataBuffer[1298];
     CCU_HMI_309_4= g_dataBuffer[1299];
     CCU_HMI_309_5= g_dataBuffer[1300];
     CCU_HMI_309_6= g_dataBuffer[1301];
     CCU_HMI_309_7= g_dataBuffer[1302];
     CCU_HMI_309_8= g_dataBuffer[1303];
     CCU_HMI_309_9= g_dataBuffer[1304];
     CCU_HMI_309_10= g_dataBuffer[1305];
     CCU_HMI_309_11= g_dataBuffer[1306];
     CCU_HMI_309_12= g_dataBuffer[1307];
     CCU_HMI_309_13= g_dataBuffer[1308];
     CCU_HMI_309_14= g_dataBuffer[1309];
     CCU_HMI_309_15= g_dataBuffer[1310];
     CCU_HMI_309_16= g_dataBuffer[1311];

     CCU_HMI_318_1= g_dataBuffer[1312];
     CCU_HMI_328_1= g_dataBuffer[1328];

   HVAC_A18_10= g_dataBuffer[1641];
   HVAC_A28_10= g_dataBuffer[1657];
   HVAC_A38_10= g_dataBuffer[1673];
   HVAC_A48_10= g_dataBuffer[1689];

    DCU_OLD_7C0_1= g_dataBuffer[1248+48];
    DCU_OLD_7C0_2= g_dataBuffer[1249+48];
    DCU_OLD_7C0_3= g_dataBuffer[1250+48];
    DCU_OLD_7C0_4= g_dataBuffer[1251+48];
    DCU_OLD_7C0_5= g_dataBuffer[1252+48];
    DCU_OLD_7C0_6= g_dataBuffer[1253+48];
    DCU_OLD_7C0_7= g_dataBuffer[1254+48];
    DCU_OLD_7C0_8= g_dataBuffer[1255+48];
    DCU_OLD_7C0_9= g_dataBuffer[1256+48];
    DCU_OLD_7C0_10= g_dataBuffer[1257+48];
    DCU_OLD_7C0_11= g_dataBuffer[1258+48];
    DCU_OLD_7C0_12= g_dataBuffer[1259+48];
    DCU_OLD_7C0_13= g_dataBuffer[1260+48];
    DCU_OLD_7C0_14= g_dataBuffer[1261+48];
    DCU_OLD_7C0_15= g_dataBuffer[1262+48];
    DCU_OLD_7C0_16= g_dataBuffer[1263+48];

    DCU_OLD_7C1_1= g_dataBuffer[1264+48];
    DCU_OLD_7C1_2= g_dataBuffer[1265+48];
    DCU_OLD_7C1_3= g_dataBuffer[1266+48];
    DCU_OLD_7C1_4= g_dataBuffer[1267+48];
    DCU_OLD_7C1_5= g_dataBuffer[1268+48];
    DCU_OLD_7C1_6= g_dataBuffer[1269+48];
    DCU_OLD_7C1_7= g_dataBuffer[1270+48];
    DCU_OLD_7C1_8= g_dataBuffer[1271+48];
    DCU_OLD_7C1_9= g_dataBuffer[1272+48];
    DCU_OLD_7C1_10= g_dataBuffer[1273+48];
    DCU_OLD_7C1_11= g_dataBuffer[1274+48];
    DCU_OLD_7C1_12= g_dataBuffer[1275+48];
    DCU_OLD_7C1_13= g_dataBuffer[1276+48];
    DCU_OLD_7C1_14= g_dataBuffer[1277+48];
    DCU_OLD_7C1_15= g_dataBuffer[1278+48];
    DCU_OLD_7C1_16= g_dataBuffer[1279+48];


    DCU_OLD_7D0_1= g_dataBuffer[1280+48];
    DCU_OLD_7D0_2= g_dataBuffer[1281+48];
    DCU_OLD_7D0_3= g_dataBuffer[1282+48];
    DCU_OLD_7D0_4= g_dataBuffer[1283+48];
    DCU_OLD_7D0_5= g_dataBuffer[1284+48];
    DCU_OLD_7D0_6= g_dataBuffer[1285+48];
    DCU_OLD_7D0_7= g_dataBuffer[1286+48];
    DCU_OLD_7D0_8= g_dataBuffer[1287+48];
    DCU_OLD_7D0_9= g_dataBuffer[1288+48];
    DCU_OLD_7D0_10= g_dataBuffer[1289+48];
    DCU_OLD_7D0_11= g_dataBuffer[1290+48];
    DCU_OLD_7D0_12= g_dataBuffer[1291+48];
    DCU_OLD_7D0_13= g_dataBuffer[1292+48];
    DCU_OLD_7D0_14= g_dataBuffer[1293+48];
    DCU_OLD_7D0_15= g_dataBuffer[1294+48];
    DCU_OLD_7D0_16= g_dataBuffer[1295+48];

    DCU_OLD_7D1_1= g_dataBuffer[1296+48];
    DCU_OLD_7D1_2= g_dataBuffer[1297+48];
    DCU_OLD_7D1_3= g_dataBuffer[1298+48];
    DCU_OLD_7D1_4= g_dataBuffer[1299+48];
    DCU_OLD_7D1_5= g_dataBuffer[1300+48];
    DCU_OLD_7D1_6= g_dataBuffer[1301+48];
    DCU_OLD_7D1_7= g_dataBuffer[1302+48];
    DCU_OLD_7D1_8= g_dataBuffer[1303+48];
    DCU_OLD_7D1_9= g_dataBuffer[1304+48];
    DCU_OLD_7D1_10= g_dataBuffer[1305+48];
    DCU_OLD_7D1_11= g_dataBuffer[1306+48];
    DCU_OLD_7D1_12= g_dataBuffer[1307+48];
    DCU_OLD_7D1_13= g_dataBuffer[1308+48];
    DCU_OLD_7D1_14= g_dataBuffer[1309+48];
    DCU_OLD_7D1_15= g_dataBuffer[1310+48];
    DCU_OLD_7D1_16= g_dataBuffer[1311+48];


    DCU_OLD_7E0_1= g_dataBuffer[1312+48];
    DCU_OLD_7E0_2= g_dataBuffer[1313+48];
    DCU_OLD_7E0_3= g_dataBuffer[1314+48];
    DCU_OLD_7E0_4= g_dataBuffer[1315+48];
    DCU_OLD_7E0_5= g_dataBuffer[1316+48];
    DCU_OLD_7E0_6= g_dataBuffer[1317+48];
    DCU_OLD_7E0_7= g_dataBuffer[1318+48];
    DCU_OLD_7E0_8= g_dataBuffer[1319+48];
    DCU_OLD_7E0_9= g_dataBuffer[1320+48];
    DCU_OLD_7E0_10= g_dataBuffer[1321+48];
    DCU_OLD_7E0_11= g_dataBuffer[1322+48];
    DCU_OLD_7E0_12= g_dataBuffer[1323+48];
    DCU_OLD_7E0_13= g_dataBuffer[1324+48];
    DCU_OLD_7E0_14= g_dataBuffer[1325+48];
    DCU_OLD_7E0_15= g_dataBuffer[1326+48];
    DCU_OLD_7E0_16= g_dataBuffer[1327+48];

    DCU_OLD_7E1_1= g_dataBuffer[1328+48];
    DCU_OLD_7E1_2= g_dataBuffer[1329+48];
    DCU_OLD_7E1_3= g_dataBuffer[1330+48];
    DCU_OLD_7E1_4= g_dataBuffer[1331+48];
    DCU_OLD_7E1_5= g_dataBuffer[1332+48];
    DCU_OLD_7E1_6= g_dataBuffer[1333+48];
    DCU_OLD_7E1_7= g_dataBuffer[1334+48];
    DCU_OLD_7E1_8= g_dataBuffer[1335+48];
    DCU_OLD_7E1_9= g_dataBuffer[1336+48];
    DCU_OLD_7E1_10= g_dataBuffer[1337+48];
    DCU_OLD_7E1_11= g_dataBuffer[1338+48];
    DCU_OLD_7E1_12= g_dataBuffer[1339+48];
    DCU_OLD_7E1_13= g_dataBuffer[1340+48];
    DCU_OLD_7E1_14= g_dataBuffer[1341+48];
    DCU_OLD_7E1_15= g_dataBuffer[1342+48];
    DCU_OLD_7E1_16= g_dataBuffer[1343+48];

    DCU_OLD_7F0_1= g_dataBuffer[1344+48];
    DCU_OLD_7F0_2= g_dataBuffer[1345+48];
    DCU_OLD_7F0_3= g_dataBuffer[1346+48];
    DCU_OLD_7F0_4= g_dataBuffer[1347+48];
    DCU_OLD_7F0_5= g_dataBuffer[1348+48];
    DCU_OLD_7F0_6= g_dataBuffer[1349+48];
    DCU_OLD_7F0_7= g_dataBuffer[1350+48];
    DCU_OLD_7F0_8= g_dataBuffer[1351+48];
    DCU_OLD_7F0_9= g_dataBuffer[1352+48];
    DCU_OLD_7F0_10= g_dataBuffer[1353+48];
    DCU_OLD_7F0_11= g_dataBuffer[1354+48];
    DCU_OLD_7F0_12= g_dataBuffer[1355+48];
    DCU_OLD_7F0_13= g_dataBuffer[1356+48];
    DCU_OLD_7F0_14= g_dataBuffer[1357+48];
    DCU_OLD_7F0_15= g_dataBuffer[1358+48];
    DCU_OLD_7F0_16= g_dataBuffer[1359+48];

    DCU_OLD_7F1_1= g_dataBuffer[1360+48];
    DCU_OLD_7F1_2= g_dataBuffer[1361+48];
    DCU_OLD_7F1_3= g_dataBuffer[1362+48];
    DCU_OLD_7F1_4= g_dataBuffer[1363+48];
    DCU_OLD_7F1_5= g_dataBuffer[1364+48];
    DCU_OLD_7F1_6= g_dataBuffer[1365+48];
    DCU_OLD_7F1_7= g_dataBuffer[1366+48];
    DCU_OLD_7F1_8= g_dataBuffer[1367+48];
    DCU_OLD_7F1_9= g_dataBuffer[1368+48];
    DCU_OLD_7F1_10= g_dataBuffer[1369+48];
    DCU_OLD_7F1_11= g_dataBuffer[1370+48];
    DCU_OLD_7F1_12= g_dataBuffer[1371+48];
    DCU_OLD_7F1_13= g_dataBuffer[1372+48];
    DCU_OLD_7F1_14= g_dataBuffer[1373+48];
    DCU_OLD_7F1_15= g_dataBuffer[1374+48];
    DCU_OLD_7F1_16= g_dataBuffer[1375+48];


//LMH
     PDS_C10_1= g_dataBuffer[1728];
     PDS_C20_1= g_dataBuffer[1744];
     ERM_210_1= g_dataBuffer[144];
     ERM_210_2= g_dataBuffer[145];
     ERM_210_3= g_dataBuffer[146];
     ERM_210_4= g_dataBuffer[147];
     ERM_210_5= g_dataBuffer[148];
     ERM_210_6= g_dataBuffer[149];
     ERM_210_7= g_dataBuffer[150];
     ERM_210_8= g_dataBuffer[151];
     ERM_210_9= g_dataBuffer[152];
     ERM_210_10= g_dataBuffer[153];
     ERM_210_11= g_dataBuffer[154];
     ERM_210_12= g_dataBuffer[155];
     ERM_210_13= g_dataBuffer[156];
     ERM_210_14= g_dataBuffer[157];
     ERM_210_15= g_dataBuffer[158];
     ERM_210_16= g_dataBuffer[159];

      ERM_211_1= g_dataBuffer[160];
      ERM_211_2= g_dataBuffer[161];
      ERM_211_3= g_dataBuffer[162];
      ERM_211_4= g_dataBuffer[163];
      ERM_211_5= g_dataBuffer[164];
      ERM_211_6= g_dataBuffer[165];
      ERM_211_7= g_dataBuffer[166];
      ERM_211_8= g_dataBuffer[167];
      ERM_211_9= g_dataBuffer[168];
      ERM_211_10= g_dataBuffer[169];
      ERM_211_11= g_dataBuffer[170];
      ERM_211_12= g_dataBuffer[171];
      ERM_211_13= g_dataBuffer[172];
      ERM_211_14= g_dataBuffer[173];
      ERM_211_15= g_dataBuffer[174];
      ERM_211_16= g_dataBuffer[175];

      ERM_212_1= g_dataBuffer[176];
      ERM_212_2= g_dataBuffer[177];
      ERM_212_3= g_dataBuffer[178];
      ERM_212_4= g_dataBuffer[179];
      ERM_212_5= g_dataBuffer[180];
      ERM_212_6= g_dataBuffer[181];
      ERM_212_7= g_dataBuffer[182];
      ERM_212_8= g_dataBuffer[183];
      ERM_212_9= g_dataBuffer[184];
      ERM_212_10= g_dataBuffer[185];
      ERM_212_11= g_dataBuffer[186];
      ERM_212_12= g_dataBuffer[187];
      ERM_212_13= g_dataBuffer[188];
      ERM_212_14= g_dataBuffer[189];
      ERM_212_15= g_dataBuffer[190];
      ERM_212_16= g_dataBuffer[191];

      ERM_213_1= g_dataBuffer[192];
      ERM_213_2= g_dataBuffer[193];
      ERM_213_3= g_dataBuffer[194];
      ERM_213_4= g_dataBuffer[195];
      ERM_213_5= g_dataBuffer[196];
      ERM_213_6= g_dataBuffer[197];
      ERM_213_7= g_dataBuffer[198];
      ERM_213_8= g_dataBuffer[199];
      ERM_213_9= g_dataBuffer[200];
      ERM_213_10= g_dataBuffer[201];
      ERM_213_11= g_dataBuffer[202];
      ERM_213_12= g_dataBuffer[203];
      ERM_213_13= g_dataBuffer[204];
      ERM_213_14= g_dataBuffer[205];
      ERM_213_15= g_dataBuffer[206];
      ERM_213_16= g_dataBuffer[207];

     HVAC_A10_1= g_dataBuffer[1040];
     HVAC_A10_2= g_dataBuffer[1041];
     HVAC_A10_3= g_dataBuffer[1042];
     HVAC_A10_4= g_dataBuffer[1043];
     HVAC_A10_5= g_dataBuffer[1044];
     HVAC_A10_6= g_dataBuffer[1045];
     HVAC_A10_7= g_dataBuffer[1046];
     HVAC_A10_8= g_dataBuffer[1047];
     HVAC_A10_9= g_dataBuffer[1048];
     HVAC_A10_10= g_dataBuffer[1049];
     HVAC_A10_11= g_dataBuffer[1050];
     HVAC_A10_12= g_dataBuffer[1051];
     HVAC_A10_13= g_dataBuffer[1052];
     HVAC_A10_14= g_dataBuffer[1053];
     HVAC_A10_15= g_dataBuffer[1054];
     HVAC_A10_16= g_dataBuffer[1055];

     HVAC_A11_1= g_dataBuffer[1056];
     HVAC_A11_2= g_dataBuffer[1057];
     HVAC_A11_3= g_dataBuffer[1058];
     HVAC_A11_4= g_dataBuffer[1059];
     HVAC_A11_5= g_dataBuffer[1060];
     HVAC_A11_6= g_dataBuffer[1061];
     HVAC_A11_7= g_dataBuffer[1062];
     HVAC_A11_8= g_dataBuffer[1063];
     HVAC_A11_9= g_dataBuffer[1064];
     HVAC_A11_10= g_dataBuffer[1065];
     HVAC_A11_11= g_dataBuffer[1066];
     HVAC_A11_12= g_dataBuffer[1067];
     HVAC_A11_13= g_dataBuffer[1068];
     HVAC_A11_14= g_dataBuffer[1069];
     HVAC_A11_15= g_dataBuffer[1070];
     HVAC_A11_16= g_dataBuffer[1071];

     HVAC_A20_1= g_dataBuffer[1072];
     HVAC_A20_2= g_dataBuffer[1073];
     HVAC_A20_3= g_dataBuffer[1074];
     HVAC_A20_4= g_dataBuffer[1075];
     HVAC_A20_5= g_dataBuffer[1076];
     HVAC_A20_6= g_dataBuffer[1077];
     HVAC_A20_7= g_dataBuffer[1078];
     HVAC_A20_8= g_dataBuffer[1079];
     HVAC_A20_9= g_dataBuffer[1080];
     HVAC_A20_10= g_dataBuffer[1081];
     HVAC_A20_11= g_dataBuffer[1082];
     HVAC_A20_12= g_dataBuffer[1083];
     HVAC_A20_13= g_dataBuffer[1084];
     HVAC_A20_14= g_dataBuffer[1085];
     HVAC_A20_15= g_dataBuffer[1086];
     HVAC_A20_16= g_dataBuffer[1087];

     HVAC_A21_1= g_dataBuffer[1088];
     HVAC_A21_2= g_dataBuffer[1089];
     HVAC_A21_3= g_dataBuffer[1090];
     HVAC_A21_4= g_dataBuffer[1091];
     HVAC_A21_5= g_dataBuffer[1092];
     HVAC_A21_6= g_dataBuffer[1093];
     HVAC_A21_7= g_dataBuffer[1094];
     HVAC_A21_8= g_dataBuffer[1095];
     HVAC_A21_9= g_dataBuffer[1096];
     HVAC_A21_10= g_dataBuffer[1097];
     HVAC_A21_11= g_dataBuffer[1098];
     HVAC_A21_12= g_dataBuffer[1099];
     HVAC_A21_13= g_dataBuffer[1100];
     HVAC_A21_14= g_dataBuffer[1101];
     HVAC_A21_15= g_dataBuffer[1102];
     HVAC_A21_16= g_dataBuffer[1103];

     HVAC_A30_1= g_dataBuffer[1104];
     HVAC_A30_2= g_dataBuffer[1105];
     HVAC_A30_3= g_dataBuffer[1106];
     HVAC_A30_4= g_dataBuffer[1107];
     HVAC_A30_5= g_dataBuffer[1108];
     HVAC_A30_6= g_dataBuffer[1109];
     HVAC_A30_7= g_dataBuffer[1110];
     HVAC_A30_8= g_dataBuffer[1111];
     HVAC_A30_9= g_dataBuffer[1112];
     HVAC_A30_10= g_dataBuffer[1113];
     HVAC_A30_11= g_dataBuffer[1114];
     HVAC_A30_12= g_dataBuffer[1115];
     HVAC_A30_13= g_dataBuffer[1116];
     HVAC_A30_14= g_dataBuffer[1117];
     HVAC_A30_15= g_dataBuffer[1118];
     HVAC_A30_16= g_dataBuffer[1119];

     HVAC_A31_1= g_dataBuffer[1120];
     HVAC_A31_2= g_dataBuffer[1121];
     HVAC_A31_3= g_dataBuffer[1122];
     HVAC_A31_4= g_dataBuffer[1123];
     HVAC_A31_5= g_dataBuffer[1124];
     HVAC_A31_6= g_dataBuffer[1125];
     HVAC_A31_7= g_dataBuffer[1126];
     HVAC_A31_8= g_dataBuffer[1127];
     HVAC_A31_9= g_dataBuffer[1128];
     HVAC_A31_10= g_dataBuffer[1129];
     HVAC_A31_11= g_dataBuffer[1130];
     HVAC_A31_12= g_dataBuffer[1131];
     HVAC_A31_13= g_dataBuffer[1132];
     HVAC_A31_14= g_dataBuffer[1133];
     HVAC_A31_15= g_dataBuffer[1134];
     HVAC_A31_16= g_dataBuffer[1135];

     HVAC_A40_1= g_dataBuffer[1136];
     HVAC_A40_2= g_dataBuffer[1137];
     HVAC_A40_3= g_dataBuffer[1138];
     HVAC_A40_4= g_dataBuffer[1139];
     HVAC_A40_5= g_dataBuffer[1140];
     HVAC_A40_6= g_dataBuffer[1141];
     HVAC_A40_7= g_dataBuffer[1142];
     HVAC_A40_8= g_dataBuffer[1143];
     HVAC_A40_9= g_dataBuffer[1144];
     HVAC_A40_10= g_dataBuffer[1145];
     HVAC_A40_11= g_dataBuffer[1146];
     HVAC_A40_12= g_dataBuffer[1147];
     HVAC_A40_13= g_dataBuffer[1148];
     HVAC_A40_14= g_dataBuffer[1149];
     HVAC_A40_15= g_dataBuffer[1150];
     HVAC_A40_16= g_dataBuffer[1151];

     HVAC_A41_1= g_dataBuffer[1152];
     HVAC_A41_2= g_dataBuffer[1153];
     HVAC_A41_3= g_dataBuffer[1154];
     HVAC_A41_4= g_dataBuffer[1155];
     HVAC_A41_5= g_dataBuffer[1156];
     HVAC_A41_6= g_dataBuffer[1157];
     HVAC_A41_7= g_dataBuffer[1158];
     HVAC_A41_8= g_dataBuffer[1159];
     HVAC_A41_9= g_dataBuffer[1160];
     HVAC_A41_10= g_dataBuffer[1161];
     HVAC_A41_11= g_dataBuffer[1162];
     HVAC_A41_12= g_dataBuffer[1163];
     HVAC_A41_13= g_dataBuffer[1164];
     HVAC_A41_14= g_dataBuffer[1165];
     HVAC_A41_15= g_dataBuffer[1166];
     HVAC_A41_16= g_dataBuffer[1167];

    HVAC_810_1= g_dataBuffer[1232+208];
    HVAC_810_2= g_dataBuffer[1233+208];
    HVAC_810_3= g_dataBuffer[1234+208];
    HVAC_810_4= g_dataBuffer[1235+208];
    HVAC_810_5= g_dataBuffer[1236+208];
    HVAC_810_6= g_dataBuffer[1237+208];
    HVAC_810_7= g_dataBuffer[1238+208];
    HVAC_810_8= g_dataBuffer[1239+208];
    HVAC_810_9= g_dataBuffer[1240+208];
    HVAC_810_10= g_dataBuffer[1241+208];
    HVAC_810_11= g_dataBuffer[1242+208];
    HVAC_810_12= g_dataBuffer[1243+208];
    HVAC_810_13= g_dataBuffer[1244+208];
    HVAC_810_14= g_dataBuffer[1245+208];
    HVAC_810_15= g_dataBuffer[1246+208];
    HVAC_810_16= g_dataBuffer[1247+208];

    HVAC_820_1= g_dataBuffer[1248+208];
    HVAC_820_2= g_dataBuffer[1249+208];
    HVAC_820_3= g_dataBuffer[1250+208];
    HVAC_820_4= g_dataBuffer[1251+208];
    HVAC_820_5= g_dataBuffer[1252+208];
    HVAC_820_6= g_dataBuffer[1253+208];
    HVAC_820_7= g_dataBuffer[1254+208];
    HVAC_820_8= g_dataBuffer[1255+208];
    HVAC_820_9= g_dataBuffer[1256+208];
    HVAC_820_10= g_dataBuffer[1257+208];
    HVAC_820_11= g_dataBuffer[1258+208];
    HVAC_820_12= g_dataBuffer[1259+208];
    HVAC_820_13= g_dataBuffer[1260+208];
    HVAC_820_14= g_dataBuffer[1261+208];
    HVAC_820_15= g_dataBuffer[1262+208];
    HVAC_820_16= g_dataBuffer[1263+208];

    HVAC_830_1= g_dataBuffer[1264+208];
    HVAC_830_2= g_dataBuffer[1265+208];
    HVAC_830_3= g_dataBuffer[1266+208];
    HVAC_830_4= g_dataBuffer[1267+208];
    HVAC_830_5= g_dataBuffer[1268+208];
    HVAC_830_6= g_dataBuffer[1269+208];
    HVAC_830_7= g_dataBuffer[1270+208];
    HVAC_830_8= g_dataBuffer[1271+208];
    HVAC_830_9= g_dataBuffer[1272+208];
    HVAC_830_10= g_dataBuffer[1273+208];
    HVAC_830_11= g_dataBuffer[1274+208];
    HVAC_830_12= g_dataBuffer[1275+208];
    HVAC_830_13= g_dataBuffer[1276+208];
    HVAC_830_14= g_dataBuffer[1277+208];
    HVAC_830_15= g_dataBuffer[1278+208];
    HVAC_830_16= g_dataBuffer[1279+208];

    HVAC_840_1= g_dataBuffer[1280+208];
    HVAC_840_2= g_dataBuffer[1281+208];
    HVAC_840_3= g_dataBuffer[1282+208];
    HVAC_840_4= g_dataBuffer[1283+208];
    HVAC_840_5= g_dataBuffer[1284+208];
    HVAC_840_6= g_dataBuffer[1285+208];
    HVAC_840_7= g_dataBuffer[1286+208];
    HVAC_840_8= g_dataBuffer[1287+208];
    HVAC_840_9= g_dataBuffer[1288+208];
    HVAC_840_10= g_dataBuffer[1289+208];
    HVAC_840_11= g_dataBuffer[1290+208];
    HVAC_840_12= g_dataBuffer[1291+208];
    HVAC_840_13= g_dataBuffer[1292+208];
    HVAC_840_14= g_dataBuffer[1293+208];
    HVAC_840_15= g_dataBuffer[1294+208];
    HVAC_840_16= g_dataBuffer[1295+208];

    HVAC_850_1= g_dataBuffer[1296+208];
    HVAC_850_2= g_dataBuffer[1297+208];
    HVAC_850_3= g_dataBuffer[1298+208];
    HVAC_850_4= g_dataBuffer[1299+208];
    HVAC_850_5= g_dataBuffer[1300+208];
    HVAC_850_6= g_dataBuffer[1301+208];
    HVAC_850_7= g_dataBuffer[1302+208];
    HVAC_850_8= g_dataBuffer[1303+208];
    HVAC_850_9= g_dataBuffer[1304+208];
    HVAC_850_10= g_dataBuffer[1305+208];
    HVAC_850_11= g_dataBuffer[1306+208];
    HVAC_850_12= g_dataBuffer[1307+208];
    HVAC_850_13= g_dataBuffer[1308+208];
    HVAC_850_14= g_dataBuffer[1309+208];
    HVAC_850_15= g_dataBuffer[1310+208];
    HVAC_850_16= g_dataBuffer[1311+208];

    HVAC_860_1= g_dataBuffer[1312+208];
    HVAC_860_2= g_dataBuffer[1313+208];
    HVAC_860_3= g_dataBuffer[1314+208];
    HVAC_860_4= g_dataBuffer[1315+208];
    HVAC_860_5= g_dataBuffer[1316+208];
    HVAC_860_6= g_dataBuffer[1317+208];
    HVAC_860_7= g_dataBuffer[1318+208];
    HVAC_860_8= g_dataBuffer[1319+208];
    HVAC_860_9= g_dataBuffer[1320+208];
    HVAC_860_10= g_dataBuffer[1321+208];
    HVAC_860_11= g_dataBuffer[1322+208];
    HVAC_860_12= g_dataBuffer[1323+208];
    HVAC_860_13= g_dataBuffer[1324+208];
    HVAC_860_14= g_dataBuffer[1325+208];
    HVAC_860_15= g_dataBuffer[1326+208];
    HVAC_860_16= g_dataBuffer[1327+208];

    HVAC_870_1= g_dataBuffer[1328+208];
    HVAC_870_2= g_dataBuffer[1329+208];
    HVAC_870_3= g_dataBuffer[1330+208];
    HVAC_870_4= g_dataBuffer[1331+208];
    HVAC_870_5= g_dataBuffer[1332+208];
    HVAC_870_6= g_dataBuffer[1333+208];
    HVAC_870_7= g_dataBuffer[1334+208];
    HVAC_870_8= g_dataBuffer[1335+208];
    HVAC_870_9= g_dataBuffer[1336+208];
    HVAC_870_10= g_dataBuffer[1337+208];
    HVAC_870_11= g_dataBuffer[1338+208];
    HVAC_870_12= g_dataBuffer[1339+208];
    HVAC_870_13= g_dataBuffer[1340+208];
    HVAC_870_14= g_dataBuffer[1341+208];
    HVAC_870_15= g_dataBuffer[1342+208];
    HVAC_870_16= g_dataBuffer[1343+208];

    HVAC_880_1= g_dataBuffer[1344+208];
    HVAC_880_2= g_dataBuffer[1345+208];
    HVAC_880_3= g_dataBuffer[1346+208];
    HVAC_880_4= g_dataBuffer[1347+208];
    HVAC_880_5= g_dataBuffer[1348+208];
    HVAC_880_6= g_dataBuffer[1349+208];
    HVAC_880_7= g_dataBuffer[1350+208];
    HVAC_880_8= g_dataBuffer[1351+208];
    HVAC_880_9= g_dataBuffer[1352+208];
    HVAC_880_10= g_dataBuffer[1353+208];
    HVAC_880_11= g_dataBuffer[1354+208];
    HVAC_880_12= g_dataBuffer[1355+208];
    HVAC_880_13= g_dataBuffer[1356+208];
    HVAC_880_14= g_dataBuffer[1357+208];
    HVAC_880_15= g_dataBuffer[1358+208];
    HVAC_880_16= g_dataBuffer[1359+208];

    PIS_910_1= g_dataBuffer[976];
    PIS_920_1= g_dataBuffer[1008];

    PIS_911_1= g_dataBuffer[992];
    PIS_911_2= g_dataBuffer[993];
    PIS_911_3= g_dataBuffer[994];


    PIS_921_1= g_dataBuffer[1024];
    PIS_921_2= g_dataBuffer[1025];
    PIS_921_3= g_dataBuffer[1026];



    ATC_A10_1= g_dataBuffer[1424+240];
    ATC_A10_2= g_dataBuffer[1425+240];
    ATC_A10_3= g_dataBuffer[1426+240];
    ATC_A10_4= g_dataBuffer[1427+240];
    ATC_A10_5= g_dataBuffer[1428+240];
    ATC_A10_6= g_dataBuffer[1429+240];
    ATC_A10_7= g_dataBuffer[1430+240];
    ATC_A10_8= g_dataBuffer[1431+240];
    ATC_A10_9= g_dataBuffer[1432+240];
    ATC_A10_10= g_dataBuffer[1433+240];
    ATC_A10_11= g_dataBuffer[1434+240];
    ATC_A10_12= g_dataBuffer[1435+240];
    ATC_A10_13= g_dataBuffer[1436+240];
    ATC_A10_14= g_dataBuffer[1437+240];
    ATC_A10_15= g_dataBuffer[1438+240];
    ATC_A10_16= g_dataBuffer[1439+240];

    ATC_A11_1= g_dataBuffer[1440+240];
    ATC_A11_2= g_dataBuffer[1441+240];
    ATC_A11_3= g_dataBuffer[1442+240];
    ATC_A11_4= g_dataBuffer[1443+240];
    ATC_A11_5= g_dataBuffer[1444+240];
    ATC_A11_6= g_dataBuffer[1445+240];
    ATC_A11_7= g_dataBuffer[1446+240];
    ATC_A11_8= g_dataBuffer[1447+240];
    ATC_A11_9= g_dataBuffer[1448+240];
    ATC_A11_10= g_dataBuffer[1449+240];
    ATC_A11_11= g_dataBuffer[1450+240];
    ATC_A11_12= g_dataBuffer[1451+240];
    ATC_A11_13= g_dataBuffer[1452+240];
    ATC_A11_14= g_dataBuffer[1453+240];
    ATC_A11_15= g_dataBuffer[1454+240];
    ATC_A11_16= g_dataBuffer[1455+240];

//    FAS_B10_1= g_dataBuffer[1456+256];
//    FAS_B10_2= g_dataBuffer[1457+256];
//    FAS_B10_3= g_dataBuffer[1458+256];
//    FAS_B10_4= g_dataBuffer[1459+256];
//    FAS_B10_5= g_dataBuffer[1460+256];
//    FAS_B10_6= g_dataBuffer[1461+256];
//    FAS_B10_7= g_dataBuffer[1462+256];
//    FAS_B10_8= g_dataBuffer[1463+256];
//    FAS_B10_9= g_dataBuffer[1464+256];
//    FAS_B10_10= g_dataBuffer[1465+256];
//    FAS_B10_11= g_dataBuffer[1466+256];
//    FAS_B10_12= g_dataBuffer[1467+256];
//    FAS_B10_13= g_dataBuffer[1468+256];
//    FAS_B10_14= g_dataBuffer[1469+256];
//    FAS_B10_15= g_dataBuffer[1470+256];
//    FAS_B10_16= g_dataBuffer[1471+256];

//    FAS_B20_1= g_dataBuffer[1472+256];
//    FAS_B20_2= g_dataBuffer[1473+256];
//    FAS_B20_3= g_dataBuffer[1474+256];
//    FAS_B20_4= g_dataBuffer[1475+256];
//    FAS_B20_5= g_dataBuffer[1476+256];
//    FAS_B20_6= g_dataBuffer[1477+256];
//    FAS_B20_7= g_dataBuffer[1478+256];
//    FAS_B20_8= g_dataBuffer[1479+256];
//    FAS_B20_9= g_dataBuffer[1480+256];
//    FAS_B20_10= g_dataBuffer[1481+256];
//    FAS_B20_11= g_dataBuffer[1482+256];
//    FAS_B20_12= g_dataBuffer[1483+256];
//    FAS_B20_13= g_dataBuffer[1484+256];
//    FAS_B20_14= g_dataBuffer[1485+256];
//    FAS_B20_15= g_dataBuffer[1486+256];
//    FAS_B20_16= g_dataBuffer[1487+256];

     FAS_B10_1= g_dataBuffer[1168];
     FAS_B10_2= g_dataBuffer[1169];
     FAS_B10_3= g_dataBuffer[1170];
//     FAS_B10_4= g_dataBuffer[1171];
//     FAS_B10_5= g_dataBuffer[1172];
//     FAS_B10_6= g_dataBuffer[1173];
//     FAS_B10_7= g_dataBuffer[1174];
//     FAS_B10_8= g_dataBuffer[1175];
//     FAS_B10_9= g_dataBuffer[1176];
//     FAS_B10_10= g_dataBuffer[1177];
//     FAS_B10_11= g_dataBuffer[1178];
//     FAS_B10_12= g_dataBuffer[1179];
//     FAS_B10_13= g_dataBuffer[1180];
//     FAS_B10_14= g_dataBuffer[1181];
//     FAS_B10_15= g_dataBuffer[1182];
//     FAS_B10_16= g_dataBuffer[1183];

     FAS_B20_1= g_dataBuffer[1184];
     FAS_B20_2= g_dataBuffer[1185];
     FAS_B20_3= g_dataBuffer[1186];
//     FAS_B20_4= g_dataBuffer[1187];
//     FAS_B20_5= g_dataBuffer[1188];
//     FAS_B20_6= g_dataBuffer[1189];
//     FAS_B20_7= g_dataBuffer[1190];
//     FAS_B20_8= g_dataBuffer[1191];
//     FAS_B20_9= g_dataBuffer[1192];
//     FAS_B20_10= g_dataBuffer[1193];
//     FAS_B20_11= g_dataBuffer[1194];
//     FAS_B20_12= g_dataBuffer[1195];
//     FAS_B20_13= g_dataBuffer[1196];
//     FAS_B20_14= g_dataBuffer[1197];
//     FAS_B20_15= g_dataBuffer[1198];
//     FAS_B20_16= g_dataBuffer[1199];


    ERM_F00_1= g_dataBuffer[1744];
    ERM_F00_2= g_dataBuffer[1745];
    ERM_F00_3= g_dataBuffer[1746];
    ERM_F00_4= g_dataBuffer[1747];
    ERM_F00_5= g_dataBuffer[1748];
    ERM_F00_6= g_dataBuffer[1749];
    ERM_F00_7= g_dataBuffer[1750];
    ERM_F00_8= g_dataBuffer[1751];
    ERM_F00_9= g_dataBuffer[1752];
    ERM_F00_10= g_dataBuffer[1753];
    ERM_F00_11= g_dataBuffer[1754];
    ERM_F00_12= g_dataBuffer[1755];
    ERM_F00_13= g_dataBuffer[1756];
    ERM_F00_14= g_dataBuffer[1757];
    ERM_F00_15= g_dataBuffer[1758];
    ERM_F00_16= g_dataBuffer[1759];

    ERM_F01_1= g_dataBuffer[1760];
    ERM_F01_2= g_dataBuffer[1761];
    ERM_F01_3= g_dataBuffer[1762];
    ERM_F01_4= g_dataBuffer[1763];
    ERM_F01_5= g_dataBuffer[1764];
    ERM_F01_6= g_dataBuffer[1765];
    ERM_F01_7= g_dataBuffer[1766];
    ERM_F01_8= g_dataBuffer[1767];
    ERM_F01_9= g_dataBuffer[1768];
    ERM_F01_10= g_dataBuffer[1769];
    ERM_F01_11= g_dataBuffer[1770];
    ERM_F01_12= g_dataBuffer[1771];
    ERM_F01_13= g_dataBuffer[1772];
    ERM_F01_14= g_dataBuffer[1773];
    ERM_F01_15= g_dataBuffer[1774];
    ERM_F01_16= g_dataBuffer[1775];

    ERM_F02_1= g_dataBuffer[1776];
    ERM_F02_2= g_dataBuffer[1777];
    ERM_F02_3= g_dataBuffer[1778];
    ERM_F02_4= g_dataBuffer[1779];
    ERM_F02_5= g_dataBuffer[1780];
    ERM_F02_6= g_dataBuffer[1781];
    ERM_F02_7= g_dataBuffer[1782];
    ERM_F02_8= g_dataBuffer[1783];
    ERM_F02_9= g_dataBuffer[1784];
    ERM_F02_10= g_dataBuffer[1785];
    ERM_F02_11= g_dataBuffer[1786];
    ERM_F02_12= g_dataBuffer[1787];
    ERM_F02_13= g_dataBuffer[1788];
    ERM_F02_14= g_dataBuffer[1789];
    ERM_F02_15= g_dataBuffer[1790];
    ERM_F02_16= g_dataBuffer[1791];

    ERM_F03_1= g_dataBuffer[1792];
    ERM_F03_2= g_dataBuffer[1793];
    ERM_F03_3= g_dataBuffer[1794];
    ERM_F03_4= g_dataBuffer[1795];
    ERM_F03_5= g_dataBuffer[1796];
    ERM_F03_6= g_dataBuffer[1797];
    ERM_F03_7= g_dataBuffer[1798];
    ERM_F03_8= g_dataBuffer[1799];
    ERM_F03_9= g_dataBuffer[1800];
    ERM_F03_10= g_dataBuffer[1801];
    ERM_F03_11= g_dataBuffer[1802];
    ERM_F03_12= g_dataBuffer[1803];
    ERM_F03_13= g_dataBuffer[1804];
    ERM_F03_14= g_dataBuffer[1805];
    ERM_F03_15= g_dataBuffer[1806];
    ERM_F03_16= g_dataBuffer[1807];

    ERM_F10_1= g_dataBuffer[1744+64];
    ERM_F10_2= g_dataBuffer[1745+64];
    ERM_F10_3= g_dataBuffer[1746+64];
    ERM_F10_4= g_dataBuffer[1747+64];
    ERM_F10_5= g_dataBuffer[1748+64];
    ERM_F10_6= g_dataBuffer[1749+64];
    ERM_F10_7= g_dataBuffer[1750+64];
    ERM_F10_8= g_dataBuffer[1751+64];
    ERM_F10_9= g_dataBuffer[1752+64];
    ERM_F10_10= g_dataBuffer[1753+64];
    ERM_F10_11= g_dataBuffer[1754+64];
    ERM_F10_12= g_dataBuffer[1755+64];
    ERM_F10_13= g_dataBuffer[1756+64];
    ERM_F10_14= g_dataBuffer[1757+64];
    ERM_F10_15= g_dataBuffer[1758+64];
    ERM_F10_16= g_dataBuffer[1759+64];

    ERM_F11_1= g_dataBuffer[1760+64];
    ERM_F11_2= g_dataBuffer[1761+64];
    ERM_F11_3= g_dataBuffer[1762+64];
    ERM_F11_4= g_dataBuffer[1763+64];
    ERM_F11_5= g_dataBuffer[1764+64];
    ERM_F11_6= g_dataBuffer[1765+64];
    ERM_F11_7= g_dataBuffer[1766+64];
    ERM_F11_8= g_dataBuffer[1767+64];
    ERM_F11_9= g_dataBuffer[1768+64];
    ERM_F11_10= g_dataBuffer[1769+64];
    ERM_F11_11= g_dataBuffer[1770+64];
    ERM_F11_12= g_dataBuffer[1771+64];
    ERM_F11_13= g_dataBuffer[1772+64];
    ERM_F11_14= g_dataBuffer[1773+64];
    ERM_F11_15= g_dataBuffer[1774+64];
    ERM_F11_16= g_dataBuffer[1775+64];

    ERM_F12_1= g_dataBuffer[1776+64];
    ERM_F12_2= g_dataBuffer[1777+64];
    ERM_F12_3= g_dataBuffer[1778+64];
    ERM_F12_4= g_dataBuffer[1779+64];
    ERM_F12_5= g_dataBuffer[1780+64];
    ERM_F12_6= g_dataBuffer[1781+64];
    ERM_F12_7= g_dataBuffer[1782+64];
    ERM_F12_8= g_dataBuffer[1783+64];
    ERM_F12_9= g_dataBuffer[1784+64];
    ERM_F12_10= g_dataBuffer[1785+64];
    ERM_F12_11= g_dataBuffer[1786+64];
    ERM_F12_12= g_dataBuffer[1787+64];
    ERM_F12_13= g_dataBuffer[1788+64];
    ERM_F12_14= g_dataBuffer[1789+64];
    ERM_F12_15= g_dataBuffer[1790+64];
    ERM_F12_16= g_dataBuffer[1791+64];

    ERM_F13_1= g_dataBuffer[1792+64];
    ERM_F13_2= g_dataBuffer[1793+64];
    ERM_F13_3= g_dataBuffer[1794+64];
    ERM_F13_4= g_dataBuffer[1795+64];
    ERM_F13_5= g_dataBuffer[1796+64];
    ERM_F13_6= g_dataBuffer[1797+64];
    ERM_F13_7= g_dataBuffer[1798+64];
    ERM_F13_8= g_dataBuffer[1799+64];
    ERM_F13_9= g_dataBuffer[1800+64];
    ERM_F13_10= g_dataBuffer[1801+64];
    ERM_F13_11= g_dataBuffer[1802+64];
    ERM_F13_12= g_dataBuffer[1803+64];
    ERM_F13_13= g_dataBuffer[1804+64];
    ERM_F13_14= g_dataBuffer[1805+64];
    ERM_F13_15= g_dataBuffer[1806+64];
    ERM_F13_16= g_dataBuffer[1807+64];

    DO_118_1= g_dataBuffer[2016];
    DO_118_2= g_dataBuffer[2017];
    DO_118_3= g_dataBuffer[2018];
    DO_118_4= g_dataBuffer[2019];
    DO_118_5= g_dataBuffer[2020];
    DO_118_6= g_dataBuffer[2021];
    DO_118_7= g_dataBuffer[2022];
    DO_118_8= g_dataBuffer[2023];

    DO_128_1= g_dataBuffer[2024];
    DO_128_2= g_dataBuffer[2025];
    DO_128_3= g_dataBuffer[2026];
    DO_128_4= g_dataBuffer[2027];
    DO_128_5= g_dataBuffer[2028];
    DO_128_6= g_dataBuffer[2029];
    DO_128_7= g_dataBuffer[2030];
    DO_128_8= g_dataBuffer[2031];

    DO_138_1= g_dataBuffer[2032];
    DO_138_2= g_dataBuffer[2033];
    DO_138_3= g_dataBuffer[2034];
    DO_138_4= g_dataBuffer[2035];
    DO_138_5= g_dataBuffer[2036];
    DO_138_6= g_dataBuffer[2037];
    DO_138_7= g_dataBuffer[2038];
    DO_138_8= g_dataBuffer[2039];

    DO_148_1= g_dataBuffer[2040];
    DO_148_2= g_dataBuffer[2041];
    DO_148_3= g_dataBuffer[2042];
    DO_148_4= g_dataBuffer[2043];
    DO_148_5= g_dataBuffer[2044];
    DO_148_6= g_dataBuffer[2045];
    DO_148_7= g_dataBuffer[2046];
    DO_148_8= g_dataBuffer[2047];

    DO_158_1= g_dataBuffer[2048];
    DO_158_2= g_dataBuffer[2049];
    DO_158_3= g_dataBuffer[2050];
    DO_158_4= g_dataBuffer[2051];
    DO_158_5= g_dataBuffer[2052];
    DO_158_6= g_dataBuffer[2053];
    DO_158_7= g_dataBuffer[2054];
    DO_158_8= g_dataBuffer[2055];

    DO_168_1= g_dataBuffer[2056];
    DO_168_2= g_dataBuffer[2057];
    DO_168_3= g_dataBuffer[2058];
    DO_168_4= g_dataBuffer[2059];
    DO_168_5= g_dataBuffer[2060];
    DO_168_6= g_dataBuffer[2061];
    DO_168_7= g_dataBuffer[2062];
    DO_168_8= g_dataBuffer[2063];

    DO_178_1= g_dataBuffer[2064];
    DO_178_2= g_dataBuffer[2065];
    DO_178_3= g_dataBuffer[2066];
    DO_178_4= g_dataBuffer[2067];
    DO_178_5= g_dataBuffer[2068];
    DO_178_6= g_dataBuffer[2069];
    DO_178_7= g_dataBuffer[2070];
    DO_178_8= g_dataBuffer[2071];

    DO_188_1= g_dataBuffer[2072];
    DO_188_2= g_dataBuffer[2073];
    DO_188_3= g_dataBuffer[2074];
    DO_188_4= g_dataBuffer[2075];
    DO_188_5= g_dataBuffer[2076];
    DO_188_6= g_dataBuffer[2077];
    DO_188_7= g_dataBuffer[2078];
    DO_188_8= g_dataBuffer[2079];


    CCU_HMI_220_1= g_dataBuffer[2080];
    CCU_HMI_220_2= g_dataBuffer[2081];
    CCU_HMI_220_3= g_dataBuffer[2082];
    CCU_HMI_220_4= g_dataBuffer[2083];
    CCU_HMI_220_5= g_dataBuffer[2084];
    CCU_HMI_220_6= g_dataBuffer[2085];
    CCU_HMI_220_7= g_dataBuffer[2086];
    CCU_HMI_220_8= g_dataBuffer[2087];
    CCU_HMI_220_9= g_dataBuffer[2088];
    CCU_HMI_220_10= g_dataBuffer[2089];
    CCU_HMI_220_11= g_dataBuffer[2090];
    CCU_HMI_220_12= g_dataBuffer[2091];
    CCU_HMI_220_13= g_dataBuffer[2092];
    CCU_HMI_220_14= g_dataBuffer[2093];
    CCU_HMI_220_15= g_dataBuffer[2094];
    CCU_HMI_220_16= g_dataBuffer[2095];

    CCU_HMI_221_1=g_dataBuffer[2096];
    CCU_HMI_221_2= g_dataBuffer[2097];
    CCU_HMI_221_3= g_dataBuffer[2098];
    CCU_HMI_221_4= g_dataBuffer[2099];
    CCU_HMI_221_5= g_dataBuffer[2100];
    CCU_HMI_221_6= g_dataBuffer[2101];
    CCU_HMI_221_7= g_dataBuffer[2102];
    CCU_HMI_221_8= g_dataBuffer[2103];
    CCU_HMI_221_9= g_dataBuffer[2104];
    CCU_HMI_221_10= g_dataBuffer[2105];
    CCU_HMI_221_11= g_dataBuffer[2106];
    CCU_HMI_221_12= g_dataBuffer[2107];
    CCU_HMI_221_13= g_dataBuffer[2108];
    CCU_HMI_221_14= g_dataBuffer[2109];
    CCU_HMI_221_15= g_dataBuffer[2110];
    CCU_HMI_221_16= g_dataBuffer[2111];

    CCU_HMI_222_1= g_dataBuffer[2112];
    CCU_HMI_222_2= g_dataBuffer[2113];
    CCU_HMI_222_3= g_dataBuffer[2114];
    CCU_HMI_222_4= g_dataBuffer[2115];
    CCU_HMI_222_5= g_dataBuffer[2116];
    CCU_HMI_222_6= g_dataBuffer[2117];
    CCU_HMI_222_7= g_dataBuffer[2118];
    CCU_HMI_222_8= g_dataBuffer[2119];
    CCU_HMI_222_9= g_dataBuffer[2120];
    CCU_HMI_222_10= g_dataBuffer[2121];
    CCU_HMI_222_11= g_dataBuffer[2122];
    CCU_HMI_222_12= g_dataBuffer[2123];
    CCU_HMI_222_13= g_dataBuffer[2124];
    CCU_HMI_222_14= g_dataBuffer[2125];
    CCU_HMI_222_15= g_dataBuffer[2126];
    CCU_HMI_222_16= g_dataBuffer[2127];

    CCU_HMI_223_1= g_dataBuffer[2128];
    CCU_HMI_223_2= g_dataBuffer[2129];
    CCU_HMI_223_3= g_dataBuffer[2130];
    CCU_HMI_223_4= g_dataBuffer[2131];
    CCU_HMI_223_5= g_dataBuffer[2132];
    CCU_HMI_223_6= g_dataBuffer[2133];
    CCU_HMI_223_7= g_dataBuffer[2134];
    CCU_HMI_223_8= g_dataBuffer[2135];
    CCU_HMI_223_9= g_dataBuffer[2136];
    CCU_HMI_223_10= g_dataBuffer[2137];
    CCU_HMI_223_11= g_dataBuffer[2138];
    CCU_HMI_223_12= g_dataBuffer[2139];
    CCU_HMI_223_13= g_dataBuffer[2140];
    CCU_HMI_223_14= g_dataBuffer[2141];
    CCU_HMI_223_15= g_dataBuffer[2142];
    CCU_HMI_223_16= g_dataBuffer[2143];

    BCU_TC1_410_420_1= g_dataBuffer[3000];
    BCU_TC1_410_420_2= g_dataBuffer[3001];
    BCU_TC1_410_420_3= g_dataBuffer[3002];
    BCU_TC1_410_420_4= g_dataBuffer[3003];
    BCU_TC1_410_420_5= g_dataBuffer[3004];
    BCU_TC1_410_420_6= g_dataBuffer[3005];
    BCU_TC1_410_420_7= g_dataBuffer[3006];
    BCU_TC1_410_420_8= g_dataBuffer[3007];
    BCU_TC1_410_420_9= g_dataBuffer[3008];
    BCU_TC1_410_420_10= g_dataBuffer[3009];
    BCU_TC1_410_420_11= g_dataBuffer[3010];
    BCU_TC1_410_420_12= g_dataBuffer[3011];
    BCU_TC1_410_420_13= g_dataBuffer[3012];
    BCU_TC1_410_420_14= g_dataBuffer[3013];
    BCU_TC1_410_420_15= g_dataBuffer[3014];
    BCU_TC1_410_420_16= g_dataBuffer[3015];

    BCU_TC1_411_421_1= g_dataBuffer[3016];
    BCU_TC1_411_421_2= g_dataBuffer[3017];
    BCU_TC1_411_421_3= g_dataBuffer[3018];
    BCU_TC1_411_421_4= g_dataBuffer[3019];
    BCU_TC1_411_421_5= g_dataBuffer[3020];
    BCU_TC1_411_421_6= g_dataBuffer[3021];
    BCU_TC1_411_421_7= g_dataBuffer[3022];
    BCU_TC1_411_421_8= g_dataBuffer[3023];
    BCU_TC1_411_421_9= g_dataBuffer[3024];
    BCU_TC1_411_421_10= g_dataBuffer[3025];
    BCU_TC1_411_421_11= g_dataBuffer[3026];
    BCU_TC1_411_421_12= g_dataBuffer[3027];
    BCU_TC1_411_421_13= g_dataBuffer[3028];
    BCU_TC1_411_421_14= g_dataBuffer[3029];
    BCU_TC1_411_421_15= g_dataBuffer[3030];
    BCU_TC1_411_421_16= g_dataBuffer[3031];

    BCU_TC1_412_422_1= g_dataBuffer[3032];
    BCU_TC1_412_422_2= g_dataBuffer[3033];
    BCU_TC1_412_422_3= g_dataBuffer[3034];
    BCU_TC1_412_422_4= g_dataBuffer[3035];
    BCU_TC1_412_422_5= g_dataBuffer[3036];
    BCU_TC1_412_422_6= g_dataBuffer[3037];
    BCU_TC1_412_422_7= g_dataBuffer[3038];
    BCU_TC1_412_422_8= g_dataBuffer[3039];
    BCU_TC1_412_422_9= g_dataBuffer[3040];
    BCU_TC1_412_422_10= g_dataBuffer[3041];
    BCU_TC1_412_422_11= g_dataBuffer[3042];
    BCU_TC1_412_422_12= g_dataBuffer[3043];
    BCU_TC1_412_422_13= g_dataBuffer[3044];
    BCU_TC1_412_422_14= g_dataBuffer[3045];
    BCU_TC1_412_422_15= g_dataBuffer[3046];
    BCU_TC1_412_422_16= g_dataBuffer[3047];

    BCU_TC1_413_423_1= g_dataBuffer[3048];
    BCU_TC1_413_423_2= g_dataBuffer[3049];
    BCU_TC1_413_423_3= g_dataBuffer[3050];
    BCU_TC1_413_423_4= g_dataBuffer[3051];
    BCU_TC1_413_423_5= g_dataBuffer[3052];
    BCU_TC1_413_423_6= g_dataBuffer[3053];
    BCU_TC1_413_423_7= g_dataBuffer[3054];
    BCU_TC1_413_423_8= g_dataBuffer[3055];
    BCU_TC1_413_423_9= g_dataBuffer[3056];
    BCU_TC1_413_423_10= g_dataBuffer[3057];
    BCU_TC1_413_423_11= g_dataBuffer[3058];
    BCU_TC1_413_423_12= g_dataBuffer[3059];
    BCU_TC1_413_423_13= g_dataBuffer[3060];
    BCU_TC1_413_423_14= g_dataBuffer[3061];
    BCU_TC1_413_423_15= g_dataBuffer[3062];
    BCU_TC1_413_423_16= g_dataBuffer[3063];

    BCU_TC1_414_424_1= g_dataBuffer[3064];
    BCU_TC1_414_424_2= g_dataBuffer[3065];
    BCU_TC1_414_424_3= g_dataBuffer[3066];
    BCU_TC1_414_424_4= g_dataBuffer[3067];
    BCU_TC1_414_424_5= g_dataBuffer[3068];
    BCU_TC1_414_424_6= g_dataBuffer[3069];
    BCU_TC1_414_424_7= g_dataBuffer[3070];
    BCU_TC1_414_424_8= g_dataBuffer[3071];
    BCU_TC1_414_424_9= g_dataBuffer[3072];
    BCU_TC1_414_424_10= g_dataBuffer[3073];
    BCU_TC1_414_424_11= g_dataBuffer[3074];
    BCU_TC1_414_424_12= g_dataBuffer[3075];
    BCU_TC1_414_424_13= g_dataBuffer[3076];
    BCU_TC1_414_424_14= g_dataBuffer[3077];
    BCU_TC1_414_424_15= g_dataBuffer[3078];
    BCU_TC1_414_424_16= g_dataBuffer[3079];

    BCU_TC2_430_440_1= g_dataBuffer[3080];
    BCU_TC2_430_440_2= g_dataBuffer[3081];
    BCU_TC2_430_440_3= g_dataBuffer[3082];
    BCU_TC2_430_440_4= g_dataBuffer[3083];
    BCU_TC2_430_440_5= g_dataBuffer[3084];
    BCU_TC2_430_440_6= g_dataBuffer[3085];
    BCU_TC2_430_440_7= g_dataBuffer[3086];
    BCU_TC2_430_440_8= g_dataBuffer[3087];
    BCU_TC2_430_440_9= g_dataBuffer[3088];
    BCU_TC2_430_440_10= g_dataBuffer[3089];
    BCU_TC2_430_440_11= g_dataBuffer[3090];
    BCU_TC2_430_440_12= g_dataBuffer[3091];
    BCU_TC2_430_440_13= g_dataBuffer[3092];
    BCU_TC2_430_440_14= g_dataBuffer[3093];
    BCU_TC2_430_440_15= g_dataBuffer[3094];
    BCU_TC2_430_440_16= g_dataBuffer[3095];

    BCU_TC2_431_441_1= g_dataBuffer[3096];
    BCU_TC2_431_441_2= g_dataBuffer[3097];
    BCU_TC2_431_441_3= g_dataBuffer[3098];
    BCU_TC2_431_441_4= g_dataBuffer[3099];
    BCU_TC2_431_441_5= g_dataBuffer[3100];
    BCU_TC2_431_441_6= g_dataBuffer[3101];
    BCU_TC2_431_441_7= g_dataBuffer[3102];
    BCU_TC2_431_441_8= g_dataBuffer[3103];
    BCU_TC2_431_441_9= g_dataBuffer[3104];
    BCU_TC2_431_441_10= g_dataBuffer[3105];
    BCU_TC2_431_441_11= g_dataBuffer[3106];
    BCU_TC2_431_441_12= g_dataBuffer[3107];
    BCU_TC2_431_441_13= g_dataBuffer[3108];
    BCU_TC2_431_441_14= g_dataBuffer[3109];
    BCU_TC2_431_441_15= g_dataBuffer[3110];
    BCU_TC2_431_441_16= g_dataBuffer[3111];

    BCU_TC2_432_442_1= g_dataBuffer[3112];
    BCU_TC2_432_442_2= g_dataBuffer[3113];
    BCU_TC2_432_442_3= g_dataBuffer[3114];
    BCU_TC2_432_442_4= g_dataBuffer[3115];
    BCU_TC2_432_442_5= g_dataBuffer[3116];
    BCU_TC2_432_442_6= g_dataBuffer[3117];
    BCU_TC2_432_442_7= g_dataBuffer[3118];
    BCU_TC2_432_442_8= g_dataBuffer[3119];
    BCU_TC2_432_442_9= g_dataBuffer[3120];
    BCU_TC2_432_442_10= g_dataBuffer[3121];
    BCU_TC2_432_442_11= g_dataBuffer[3122];
    BCU_TC2_432_442_12= g_dataBuffer[3123];
    BCU_TC2_432_442_13= g_dataBuffer[3124];
    BCU_TC2_432_442_14= g_dataBuffer[3125];
    BCU_TC2_432_442_15= g_dataBuffer[3126];
    BCU_TC2_432_442_16= g_dataBuffer[3127];

    BCU_TC2_433_443_1= g_dataBuffer[3128];
    BCU_TC2_433_443_2= g_dataBuffer[3129];
    BCU_TC2_433_443_3= g_dataBuffer[3130];
    BCU_TC2_433_443_4= g_dataBuffer[3131];
    BCU_TC2_433_443_5= g_dataBuffer[3132];
    BCU_TC2_433_443_6= g_dataBuffer[3133];
    BCU_TC2_433_443_7= g_dataBuffer[3134];
    BCU_TC2_433_443_8= g_dataBuffer[3135];
    BCU_TC2_433_443_9= g_dataBuffer[3136];
    BCU_TC2_433_443_10= g_dataBuffer[3137];
    BCU_TC2_433_443_11= g_dataBuffer[3138];
    BCU_TC2_433_443_12= g_dataBuffer[3139];
    BCU_TC2_433_443_13= g_dataBuffer[3140];
    BCU_TC2_433_443_14= g_dataBuffer[3141];
    BCU_TC2_433_443_15= g_dataBuffer[3142];
    BCU_TC2_433_443_16= g_dataBuffer[3143];

    BCU_TC2_434_444_1= g_dataBuffer[3144];
    BCU_TC2_434_444_2= g_dataBuffer[3145];
    BCU_TC2_434_444_3= g_dataBuffer[3146];
    BCU_TC2_434_444_4= g_dataBuffer[3147];
    BCU_TC2_434_444_5= g_dataBuffer[3148];
    BCU_TC2_434_444_6= g_dataBuffer[3149];
    BCU_TC2_434_444_7= g_dataBuffer[3150];
    BCU_TC2_434_444_8= g_dataBuffer[3151];
    BCU_TC2_434_444_9= g_dataBuffer[3152];
    BCU_TC2_434_444_10= g_dataBuffer[3153];
    BCU_TC2_434_444_11= g_dataBuffer[3154];
    BCU_TC2_434_444_12= g_dataBuffer[3155];
    BCU_TC2_434_444_13= g_dataBuffer[3156];
    BCU_TC2_434_444_14= g_dataBuffer[3157];
    BCU_TC2_434_444_15= g_dataBuffer[3158];
    BCU_TC2_434_444_16= g_dataBuffer[3159];
    //B05.01隔离转向架1 ,B05.02隔离转向架2 故障处理逻辑
    {
        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线

            if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
            {
                BitSet(g_dataBuffer[3999],1,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],1,0);
            }

            if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
            {
                BitSet(g_dataBuffer[3999],2,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],2,0);
            }


            if (Bit( BCU_TC1_413_423_13, 11) ||Bit( DI_120_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],3,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],3,0);
            }

            if (Bit( BCU_TC1_413_423_13, 10) ||Bit( DI_120_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],4,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],4,0);
            }


            if (Bit( BCU_TC1_413_423_13, 9) ||Bit( DI_130_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],5,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],5,0);
            }

            if (Bit( BCU_TC1_413_423_14, 8) ||Bit( DI_130_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],6,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],6,0);
            }


            if (Bit( BCU_TC1_413_423_14, 7) ||Bit( DI_140_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],7,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],7,0);
            }

            if (Bit( BCU_TC1_413_423_14, 6) ||Bit( DI_140_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],8,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],8,0);
            }


            if (Bit( BCU_TC2_433_443_14, 6) ||Bit( DI_150_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],10,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],10,0);
            }

            if (Bit( BCU_TC2_433_443_14, 7) ||Bit( DI_150_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],9,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],9,0);
            }




            if (Bit( BCU_TC2_433_443_14, 8 )||Bit( DI_160_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],12,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],12,0);
            }

            if (Bit( BCU_TC2_433_443_13, 9) ||Bit( DI_160_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],11,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],11,0);
            }




            if (Bit( BCU_TC2_433_443_13, 10) ||Bit( DI_170_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],14,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],14,0);
            }
            if (Bit( BCU_TC2_433_443_13, 11) ||Bit( DI_170_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],13,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],13,0);
            }


            if (Bit( BCU_TC2_433_443_13, 12)||Bit( DI_180_1, 5)== 1 )
            {
                BitSet(g_dataBuffer[3999],16,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],16,0);
            }
            if (Bit( BCU_TC2_433_443_13, 13) ||Bit( DI_180_1, 4)== 1)
            {
                BitSet(g_dataBuffer[3999],15,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],15,0);
            }

    }


    //CTHM_CarNumber_U16	列车号	由显示屏设定
    //if (CCU_HMI_221_9<10)
    if (CCU_HMI_309_9/256<10)
    {
        //che_num="00"+StrFromInt( CCU_HMI_309_9/256, 10 );
        che1_num=StrFromInt( CCU_HMI_309_9%256, 10 )+"0"+StrFromInt( CCU_HMI_309_9/256, 10 )+"1";
        che2_num=StrFromInt( CCU_HMI_309_9%256, 10 )+"0"+StrFromInt( CCU_HMI_309_9/256, 10 )+"2";
        che3_num=StrFromInt( CCU_HMI_309_9%256, 10 )+"0"+StrFromInt( CCU_HMI_309_9/256, 10 )+"3";
        che4_num=StrFromInt( CCU_HMI_309_9%256, 10 )+"0"+StrFromInt( CCU_HMI_309_9/256, 10 )+"4";//lmh修改
        che5_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"5";
        che6_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"6";
        che7_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"7";
        che8_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"8";

    }
    else
    {
        //if (CCU_HMI_221_9<100)
        if (CCU_HMI_309_9/256<100)
        {
            //che_num="0"+StrFromInt( CCU_HMI_309_9/256, 10 );
            che1_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"1";
            che2_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"2";
            che3_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"3";
            che4_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"4";
            che5_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"5";
            che6_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"6";
            che7_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"7";
            che8_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"8";

        }
        else
        {
            //che_num=StrFromInt( CCU_HMI_309_9/256, 10 );
            che1_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"1";
            che2_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"2";
            che3_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"3";
            che4_num=StrFromInt( CCU_HMI_309_9%256, 10 )+StrFromInt( CCU_HMI_309_9/256, 10 )+"4";
            che5_num=StrFromInt( CCU_HMI_221_9, 10 )+"5";
            che6_num=StrFromInt( CCU_HMI_221_9, 10 )+"6";
            che7_num=StrFromInt( CCU_HMI_221_9, 10 )+"7";
            che8_num=StrFromInt( CCU_HMI_221_9, 10 )+"8";
        }
    }


}

void Dialog::createSendData()
{
    uchar tmpChar1,tmpChar2,tmpChar3;
    //显示屏发送的生命信号
    if (HMI_send_data1 == 65535)
    {
        HMI_send_data1 = 0;
    }
    else
    {
       HMI_send_data1=HMI_send_data1+1;
       tmpChar1=0;
       tmpChar2=0;
       tmpChar3=1;

    }
//    if(g_TimeSettingState)
//    {
//        //BitSet(HMI_send_data28,16,1);//时间设定保存标志有效
//        BitSet(HMI_send_data32,16,1);
//    }
//    else
//    {
//        //BitSet(HMI_send_data28,16,0);
//        BitSet(HMI_send_data32,16,0);
//    }LMH 9.24

    //lmh add
    HMI_send_data2 = 0x0402;//verion
    //救援模式
//    if (EmergencyResuce == 1)
//        BitSet( HMI_send_data24, 3, 0);
//    else
//        BitSet( HMI_send_data24, 3, 1);
    //显示屏发送所有 字变量高8位低八位交换
//    sendData[1]  = HMI_send_data1&0x00FF;//显示屏生命信号
//    sendData[0]  = HMI_send_data1>>8;
//    sendData[3]  = HMI_send_data2&0x00FF;//显示屏软件版本高字节x
//    sendData[2]  = HMI_send_data2>>8;//显示屏软件版本低字节y
//    sendData[5]  = HMI_send_data3&0x00FF;//保留
//    sendData[4]  = HMI_send_data3>>8;
//    sendData[7] = HMI_send_data4&0x00FF;//
//    sendData[6] = HMI_send_data4>>8;
//    sendData[9] = HMI_send_data5&0x00FF;//
//    sendData[8] = HMI_send_data5>>8;
//    sendData[11] = HMI_send_data6&0x00FF;//
//    sendData[10] = HMI_send_data6>>8;
//    sendData[13] = HMI_send_data7&0x00FF;//
//    sendData[12] = HMI_send_data7>>8;
//    sendData[15] = HMI_send_data8&0x00FF;//
//    sendData[14] = HMI_send_data8>>8;
//    sendData[17] = HMI_send_data9&0x00FF;//
//    sendData[16] = HMI_send_data9>>8;
//    sendData[19] = HMI_send_data10&0x00FF;//
//    sendData[18] = HMI_send_data10>>8;
//    sendData[21] = HMI_send_data11&0x00FF;//
//    sendData[20] = HMI_send_data11>>8;
//    sendData[23] = HMI_send_data12&0x00FF;//
//    sendData[22] = HMI_send_data12>>8;
//    sendData[25] = HMI_send_data13&0x00FF;//
//    sendData[24] = HMI_send_data13>>8;
//    sendData[27] = HMI_send_data14&0x00FF;//
//    sendData[26] = HMI_send_data14>>8;
//    sendData[29] = HMI_send_data15&0x00FF;//
//    sendData[28] = HMI_send_data15>>8;
//    sendData[30] = HMI_send_data16&0x00FF;//
//    sendData[31] = HMI_send_data16>>8;
//    sendData[33] = HMI_send_data17&0x00FF;//列车号
//    sendData[32] = HMI_send_data17>>8;//线路号
//    sendData[35] = HMI_send_data18&0x00FF;//年
//    sendData[34] = HMI_send_data18>>8;//月
//    sendData[37] = HMI_send_data19&0x00FF;//时间设定值，日
//    sendData[36] = HMI_send_data19>>8;//时
//    sendData[39] = HMI_send_data20&0x00FF;//分
//    sendData[38] = HMI_send_data20>>8;//秒
//    sendData[41] = HMI_send_data21&0x00FF;//TC1车轮经设定值
//    sendData[40] = HMI_send_data21>>8;//MP1车轮经设定值
//    sendData[43] = HMI_send_data22&0x00FF;//MP2车轮经设定值
//    sendData[42] = HMI_send_data22>>8;//TC2车轮经设定值
//    sendData[45] = HMI_send_data23&0x00FF;//TC1车空调模式设定
//    sendData[44] = HMI_send_data23>>8;//MP1车空调模式设定
//    sendData[47] = HMI_send_data24&0x00FF;//MP2车空调模式设定
//    sendData[46] = HMI_send_data24>>8;//TC2车空调模式设定
//    sendData[49] = HMI_send_data25&0x00FF;//TC1车温度设定值
//    sendData[48] = HMI_send_data25>>8;//MP1车温度设定值
//    sendData[51] = HMI_send_data26&0x00FF;//MP2车温度设定值
//    sendData[50] = HMI_send_data26>>8;//TC2车温度设定值
//    sendData[53] = HMI_send_data27&0x00FF;//起始站设定ID值
//    sendData[52] = HMI_send_data27>>8;//起始站设定ID值
//    sendData[55] = HMI_send_data28&0x00FF;//当前站ID值
//    sendData[54] = HMI_send_data28>>8;//下一站ID值
//    sendData[57] = HMI_send_data29&0x00FF;//站点1－站点8取消命令
//    sendData[56] = HMI_send_data29>>8;//站点9－站点16取消命令
//    sendData[59] = HMI_send_data30&0x00FF;//站点17－站点24取消命令
//    sendData[58] = HMI_send_data30>>8;//保留
//    sendData[61] = HMI_send_data31&0x00FF;//保留
//    sendData[60] = HMI_send_data31>>8;//TC1轮径保存标志,MP1轮径保存标志,MP2轮径保存标志,TC2轮径保存标志,TC1空调模式保存标志，MP1，MP2，TC2
//    sendData[63] = HMI_send_data32&0x00FF;//TC1制冷制热目标温度保存标志，MP1，MP2，TC2，列车号，线路号，设定起始站，设定终点站
//    sendData[62] = HMI_send_data32>>8;//时间设定保存，站点取消设定保存标志，保留，保留
//    sendData[65] = HMI_send_data33&0x00FF;//紧急广播代码
//    sendData[64] = HMI_send_data33>>8;//紧急广播命令，紧急广播停止命令，站点修正命令，保留
//    sendData[67] = HMI_send_data34&0x00FF;//保留
//    sendData[66] = HMI_send_data34>>8;//保留
//    sendData[69] = HMI_send_data35&0x00FF;//保留
//    sendData[68] = HMI_send_data35>>8;//TCU测试项目编号
//    sendData[71] = HMI_send_data36&0x00FF;//BCU测试项目编号（保留）
//    sendData[70] = HMI_send_data36>>8;//保留
//    sendData[73] = HMI_send_data37&0x00FF;//保留
//    sendData[72] = HMI_send_data37>>8;//保留
//    sendData[75] = HMI_send_data38&0x00FF;//TCU测试请求，保留，保留 ，保留 ，保留 ，保留，保留，BCU自检请求
//    sendData[74] = HMI_send_data38>>8;//保留
//    sendData[77] = HMI_send_data39&0x00FF;//保留
//    sendData[76] = HMI_send_data39>>8;//保留
//    sendData[79] = HMI_send_data40&0x00FF;//保留
//    sendData[78] = HMI_send_data40>>8;//火警控制器复位，火警控制器静音，保留，保留，保留，保留，TCU1复位，TCU2复位
//    sendData[81] = HMI_send_data41&0x00FF;//空压机1运行时间清零，空压机2运行时间清零，再生能耗／牵引能耗清零，检修运行里程清零，辅助能耗清零，保留，保留，保留
//    sendData[80] = HMI_send_data41>>8;//TCI车空调预冷命令，MP1车空调预冷命令，MP2车空调预冷命令，TC2车空调预冷命令以及预热命令
//    sendData[83] = HMI_send_data42&0x00FF;//门遇到障碍物尝试关门的力，数值1
//    sendData[82] = HMI_send_data42>>8;//门遇到障碍物尝试关门的力，数值2
//    sendData[85] = HMI_send_data43&0x00FF;//门遇到障碍物尝试关门的力，数值3
//    sendData[84] = HMI_send_data43>>8;//门遇到障碍物尝试关门的力，数值4
//    sendData[87] = HMI_send_data44&0x00FF;//门遇到障碍物尝试关门的力，数值5
//    sendData[86] = HMI_send_data44>>8;//开门时间
//    sendData[89] = HMI_send_data45&0x00FF;//关门时间
//    sendData[88] = HMI_send_data45>>8;//受阻时开门尝试的次数
//    sendData[91] = HMI_send_data46&0x00FF;//受阻时开门宽度
//    sendData[90] = HMI_send_data46>>8;//障碍物检测间隔
//    sendData[93] = HMI_send_data47&0x00FF;//开门延时
//    sendData[92] = HMI_send_data47>>8;//关门延时
//    sendData[95] = HMI_send_data48&0x00FF;//受阻后重关门延时
//    sendData[94] = HMI_send_data48>>8;//参数设定标志

    sendData[1]  = HMI_send_data1&0x00FF;//显示屏生命信号，(已配合CCU进行调换)
    sendData[0]  = HMI_send_data1>>8;
    sendData[2]  = HMI_send_data2&0x00FF;//显示屏软件版本高字节x
    sendData[3]  = HMI_send_data2>>8;//显示屏软件版本低字节y
    sendData[4]  = HMI_send_data3&0x00FF;//保留
    sendData[5]  = HMI_send_data3>>8;
    sendData[6] = HMI_send_data4&0x00FF;//
    sendData[7] = HMI_send_data4>>8;
    sendData[8] = HMI_send_data5&0x00FF;//
    sendData[9] = HMI_send_data5>>8;
    sendData[10] = HMI_send_data6&0x00FF;//
    sendData[11] = HMI_send_data6>>8;
    sendData[12] = HMI_send_data7&0x00FF;//
    sendData[13] = HMI_send_data7>>8;
    sendData[14] = HMI_send_data8&0x00FF;//
    sendData[15] = HMI_send_data8>>8;
    sendData[16] = HMI_send_data9&0x00FF;//
    sendData[17] = HMI_send_data9>>8;
    sendData[18] = HMI_send_data10&0x00FF;//
    sendData[19] = HMI_send_data10>>8;
    sendData[20] = HMI_send_data11&0x00FF;//
    sendData[21] = HMI_send_data11>>8;
    sendData[22] = HMI_send_data12&0x00FF;//
    sendData[23] = HMI_send_data12>>8;
    sendData[24] = HMI_send_data13&0x00FF;//
    sendData[25] = HMI_send_data13>>8;
    sendData[26] = HMI_send_data14&0x00FF;//
    sendData[27] = HMI_send_data14>>8;
    sendData[28] = HMI_send_data15&0x00FF;//
    sendData[29] = HMI_send_data15>>8;
    sendData[30] = HMI_send_data16&0x00FF;//
    sendData[31] = HMI_send_data16>>8;
    sendData[32] = HMI_send_data17&0x00FF;//列车号
    sendData[33] = HMI_send_data17>>8;//线路号
    sendData[34] = HMI_send_data18&0x00FF;//年
    sendData[35] = HMI_send_data18>>8;//月
    sendData[36] = HMI_send_data19&0x00FF;//时间设定值，日
    sendData[37] = HMI_send_data19>>8;//时
    sendData[38] = HMI_send_data20&0x00FF;//分
    sendData[39] = HMI_send_data20>>8;//秒
    sendData[40] = HMI_send_data21&0x00FF;//TC1车轮经设定值
    sendData[41] = HMI_send_data21>>8;//MP1车轮经设定值
    sendData[42] = HMI_send_data22&0x00FF;//MP2车轮经设定值
    sendData[43] = HMI_send_data22>>8;//TC2车轮经设定值
    sendData[44] = HMI_send_data23&0x00FF;//TC1车空调模式设定
    sendData[45] = HMI_send_data23>>8;//MP1车空调模式设定
    sendData[46] = HMI_send_data24&0x00FF;//MP2车空调模式设定
    sendData[47] = HMI_send_data24>>8;//TC2车空调模式设定
    sendData[48] = HMI_send_data25&0x00FF;//TC1车温度设定值
    sendData[49] = HMI_send_data25>>8;//MP1车温度设定值
    sendData[50] = HMI_send_data26&0x00FF;//MP2车温度设定值
    sendData[51] = HMI_send_data26>>8;//TC2车温度设定值
    sendData[52] = HMI_send_data27&0x00FF;//起始站设定ID值
    sendData[53] = HMI_send_data27>>8;//终点站设定ID值
    sendData[54] = HMI_send_data28&0x00FF;//当前站ID值
    sendData[55] = HMI_send_data28>>8;//下一站ID值
    sendData[56] = HMI_send_data29&0x00FF;//站点1－站点8取消命令
    sendData[57] = HMI_send_data29>>8;//站点9－站点16取消命令
    sendData[58] = HMI_send_data30&0x00FF;//站点17－站点24取消命令
    sendData[59] = HMI_send_data30>>8;//保留
    sendData[60] = HMI_send_data31&0x00FF;//保留
    sendData[61] = HMI_send_data31>>8;//TC1轮径保存标志,MP1轮径保存标志,MP2轮径保存标志,TC2轮径保存标志,TC1空调模式保存标志，MP1，MP2，TC2
    sendData[62] = HMI_send_data32&0x00FF;//TC1制冷制热目标温度保存标志，MP1，MP2，TC2，列车号，线路号，设定起始站，设定终点站
    sendData[63] = HMI_send_data32>>8;//时间设定保存，站点取消设定保存标志，保留，保留
    sendData[64] = HMI_send_data33&0x00FF;//紧急广播代码
    sendData[65] = HMI_send_data33>>8;//紧急广播命令，紧急广播停止命令，站点修正命令，保留
    sendData[66] = HMI_send_data34&0x00FF;//保留
    sendData[67] = HMI_send_data34>>8;//保留
    sendData[68] = HMI_send_data35&0x00FF;//保留
    sendData[69] = HMI_send_data35>>8;//TCU测试项目编号
    sendData[70] = HMI_send_data36&0x00FF;//BCU测试项目编号（保留）
    sendData[71] = HMI_send_data36>>8;//保留
    sendData[72] = HMI_send_data37&0x00FF;//保留
    sendData[73] = HMI_send_data37>>8;//保留
    sendData[74] = HMI_send_data38&0x00FF;//TCU测试请求，保留，保留 ，保留 ，保留 ，保留，保留，BCU自检请求
    sendData[75] = HMI_send_data38>>8;//保留
    sendData[76] = HMI_send_data39&0x00FF;//保留
    sendData[77] = HMI_send_data39>>8;//保留
    sendData[78] = HMI_send_data40&0x00FF;//保留
    sendData[79] = HMI_send_data40>>8;//火警控制器复位，火警控制器静音，保留，保留，保留，保留，TCU1复位，TCU2复位
    sendData[80] = HMI_send_data41&0x00FF;//空压机1运行时间清零，空压机2运行时间清零，再生能耗／牵引能耗清零，检修运行里程清零，辅助能耗清零，保留，保留，保留
    sendData[81] = HMI_send_data41>>8;//TCI车空调预冷命令，MP1车空调预冷命令，MP2车空调预冷命令，TC2车空调预冷命令以及预热命令
    sendData[82] = HMI_send_data42&0x00FF;//门遇到障碍物尝试关门的力，数值1
    sendData[83] = HMI_send_data42>>8;//门遇到障碍物尝试关门的力，数值2
    sendData[84] = HMI_send_data43&0x00FF;//门遇到障碍物尝试关门的力，数值3
    sendData[85] = HMI_send_data43>>8;//门遇到障碍物尝试关门的力，数值4
    sendData[86] = HMI_send_data44&0x00FF;//门遇到障碍物尝试关门的力，数值5
    sendData[87] = HMI_send_data44>>8;//开门时间
    sendData[88] = HMI_send_data45&0x00FF;//关门时间
    sendData[89] = HMI_send_data45>>8;//受阻时开门尝试的次数
    sendData[90] = HMI_send_data46&0x00FF;//受阻时开门宽度
    sendData[91] = HMI_send_data46>>8;//障碍物检测间隔
    sendData[92] = HMI_send_data47&0x00FF;//开门延时
    sendData[93] = HMI_send_data47>>8;//关门延时
    sendData[94] = HMI_send_data48&0x00FF;//受阻后重关门延时
    sendData[95] = HMI_send_data48>>8;//参数设定标志
    sendData[96] = HMI_send_data49&0x00FF;//运行总里程设定值 32bit
    sendData[97] = HMI_send_data49>>8;
    sendData[98] = HMI_send_data50&0x00FF;
    sendData[99] = HMI_send_data50>>8;
    sendData[100] = HMI_send_data51&0x00FF;//运行总里程设定标志位 8bit
    sendData[101] = HMI_send_data51>>8;

//    sendData[64]  = 20;  // day
//    sendData[65]  = 3;  // month
//    sendData[66]  = 1;

//    sendData[96]  = 20;  // day
//    sendData[97]  = 3;  // month
//    sendData[98]  = 1;

    SerialDebug();
}

void Dialog::OnTimer_settingtime()
{
    if(Bit(CCU_HMI_308_5,8)||Bit(CCU_HMI_308_5,7))
    {
            int year,month,day,hour,minute,second;
            year=CCU_HMI_308_1%256+2000;
            month=CCU_HMI_308_1/256;
            day=CCU_HMI_308_2%256;
            hour=CCU_HMI_308_2/256;
            minute=CCU_HMI_308_3%256;
            second=CCU_HMI_308_3/256;
            SetSystemTime(year,month,day,hour,minute,second);//设定时间后保存同步时间
            #ifdef LOG_OPEN
            qDebug()<<"setting time   ok!";
            #endif
   }
    else
    {
        #ifdef LOG_OPEN
        qDebug()<<"setting time  not ok!,bacause ccu is not online!";
        #endif
    }
    timer_settingtime.stop();
    #ifdef LOG_OPEN
    qDebug()<<"timer_settingtime.isActive()"<<timer_settingtime.isActive();
    #endif
}

void Dialog::OnTimer_settingtime1()
{
    if(g_ccu_comm_err_flg_temp)
    {
        g_ccu_comm_err_flg=true;
    }
    else
    {
        #ifdef LOG_OPEN
        qDebug()<<"setting time  not ok!,bacause ccu is not online!";
        #endif
    }
    timer_settingtime1.stop();
    #ifdef LOG_OPEN
    qDebug()<<"timer_settingtime1.isActive()"<<timer_settingtime1.isActive();
    #endif
}

void Dialog::OnTimer4s()
{
    // ccu LifeSignal
    //if(CCU_life_temp_MVB==g_dataBuffer_MVB[2080])
    if(CCU_life_temp_MVB==g_dataBuffer_MVB[1283])
    {
        BitSet(hmi_485_error,5,1);//说明CCU没有生命信号了
    }
    else
    {
        //CCU_life_temp_MVB=g_dataBuffer_MVB[2080];//有生命信号，实时更新
        CCU_life_temp_MVB=g_dataBuffer_MVB[1283];//CCU存在生命信号，实时更新
        BitSet(hmi_485_error,5,0);
        if(Bit(CCU_HMI_308_5,8)||Bit(CCU_HMI_308_5,7))
        {
            if(set_time_flag1==false)
            {
                int year,month,day,hour,minute,second;
                year=CCU_HMI_308_1%256+2000;
                month=CCU_HMI_308_1/256;
                day=CCU_HMI_308_2%256;
                hour=CCU_HMI_308_2/256;
                minute=CCU_HMI_308_3%256;
                second=CCU_HMI_308_3/256;
                SetSystemTime(year,month,day,hour,minute,second);//上电时保存同步时间
                set_time_flag1=true;
            }
       }
    }
//    if(CCU_life_temp_UDP==g_dataBuffer_UDP[2080]) //lmh12.24
//    {
//        BitSet(hmi_485_error,6,1);//UDP没有生命信号
//    }
//    else
//    {
//            CCU_life_temp_UDP=g_dataBuffer_UDP[2080];
//            BitSet(hmi_485_error,6,0);//UDP有生命信号

//    }

//    if(HMI_life_temp==g_dataBuffer_UDP_2[0])
//    {
//        BitSet(hmi_485_error,7,0);
//    }
//    else
//    {
//            HMI_life_temp=g_dataBuffer_UDP_2[0];
//            BitSet(hmi_485_error,7,1);

//    }

    CheckLifeSignalChange();
}

void Dialog::ShowFaultPage()
{
//    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//    pPage->ChangePage(PAGE_INDEX_FAULTINFO);
}

// call this function when serial have data.
void Dialog::getRevDataSlot( int const pageNo, const QByteArray data, int const length )
{
    //debug mode
    if(serialDebugDlg.serialSetList.length() == 0)
    {
        uchar tmpChar[length];
        for (int i=0; i<length; i++ )
            tmpChar[i] = data.at(i);

        if ( pageNo == 0 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }
        else if ( pageNo == 1 )
        {
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+125] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 2 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+250] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 3 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xCC ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 207  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<102; i++)
                        g_dataBuffer[i+375] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 4 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+529] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 5 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xF8 ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 251  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<124; i++)
                        g_dataBuffer[i+654] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }
    }

    //currency_data
    switch(pageNo)
    {
    case 1://word153~159
        {
            currency_data1 = g_dataBuffer[152];
            currency_data2 = g_dataBuffer[153];
            currency_data3 = g_dataBuffer[154];
            currency_data4 = g_dataBuffer[155];
            currency_data5 = g_dataBuffer[156];
            currency_data6 = g_dataBuffer[157];
            currency_data7 = g_dataBuffer[158];
            break;
        }
    case 3://word472~478
        {
            currency_data1 = g_dataBuffer[471];
            currency_data2 = g_dataBuffer[472];
            currency_data3 = g_dataBuffer[473];
            currency_data4 = g_dataBuffer[474];
            currency_data5 = g_dataBuffer[475];
            currency_data6 = g_dataBuffer[476];
            currency_data7 = g_dataBuffer[477];
            break;
        }
    case 5://word772~778
        {
            currency_data1 = g_dataBuffer[771];
            currency_data2 = g_dataBuffer[772];
            currency_data3 = g_dataBuffer[773];
            currency_data4 = g_dataBuffer[774];
            currency_data5 = g_dataBuffer[775];
            currency_data6 = g_dataBuffer[776];
            currency_data7 = g_dataBuffer[777];
            break;
        }
    }
}

void Dialog::CheckLifeSignalChange()
{
    //TC1_HMI=1;
    //当处于TC1端时弹出TC1端以太网通信异常故障 不可删除
    if (Bit(hmi_485_error,5) && (TC1_HMI==1))
        g_485_comm_err_flg1 = true;//显示屏1离线
    else
        g_485_comm_err_flg1 = false;

    if (Bit(hmi_485_error,5) && (TC2_HMI==1))
        g_485_comm_err_flg2 = true;//显示屏2离线
    else
        g_485_comm_err_flg2 = false;


/*
//    if(g_485_comm_err_flg1  || g_485_comm_err_flg2)
//    {

//        return;
//    }

        g_riom1_gw123_comm_err_flg
                =Bit(~CCU_HMI_308_5, 16 );//各网关或者DI DO是否在线
        g_riom1_di1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 8 );
        g_riom1_di2_comm_err_flg
                = Bit(~CCU_HMI_308_6, 7 );
        g_riom1_di3_comm_err_flg
                = Bit(~CCU_HMI_308_6, 6 );
        g_riom1_do1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 5);
        g_riom1_ai1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 4 );

//MP1
        g_riom2_gw123_comm_err_flg
                = Bit(~CCU_HMI_308_5, 15 );
        g_riom2_di1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 16 );
        g_riom2_do1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 15 );

//MP2
        g_riom3_gw123_comm_err_flg
                = Bit(~CCU_HMI_308_5, 14 );
        g_riom3_di1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 12 );
        g_riom3_do1_comm_err_flg
                = Bit(~CCU_HMI_308_6, 11 );

//TC2
        g_riom4_gw123_comm_err_flg
                = Bit(~CCU_HMI_308_5, 13 );
        g_riom4_di1_comm_err_flg
                = Bit(~CCU_HMI_308_7, 16 );
        g_riom4_di2_comm_err_flg
                = Bit(~CCU_HMI_308_7, 15 );
        g_riom4_di3_comm_err_flg
                = Bit(~CCU_HMI_308_7, 14 );
        g_riom4_do1_comm_err_flg
                = Bit(~CCU_HMI_308_7, 13 );
        g_riom4_ai1_comm_err_flg
                = Bit(~CCU_HMI_308_7, 12 );

        g_acu1_comm_err_flg
                = Bit(~CCU_HMI_308_7, 10 );
        g_acu2_comm_err_flg
                = Bit(~CCU_HMI_308_7, 9 );
        g_tcu1_comm_err_flg
                = Bit(~CCU_HMI_308_7, 12 );
        g_tcu2_comm_err_flg
                = Bit(~CCU_HMI_308_7, 11 );

        g_bcu1_comm_err_flg
                = Bit(~CCU_HMI_308_7, 16 );
        g_bcu2_comm_err_flg
                = Bit(~CCU_HMI_308_7, 15 );
        g_bcu3_comm_err_flg
                = Bit(~CCU_HMI_308_7, 14 );
        g_bcu4_comm_err_flg
                = Bit(~CCU_HMI_308_7, 13 );
        g_hvac1_comm_err_flg
                = Bit(~CCU_HMI_308_8, 14 );
        g_hvac2_comm_err_flg
                = Bit(~CCU_HMI_308_8, 13 );
        g_hvac3_comm_err_flg
                = Bit(~CCU_HMI_308_8, 12 );
        g_hvac4_comm_err_flg
                = Bit(~CCU_HMI_308_8, 11);

        g_door1_comm_err_flg
                = (Bit(~CCU_HMI_308_8, 8 ))&&(Bit(~CCU_HMI_308_8, 7 ));//两个门控器同时不在线
        g_door2_comm_err_flg
                = (Bit(~CCU_HMI_308_8, 6 ))&&(Bit(~CCU_HMI_308_8, 5 ));
        g_door3_comm_err_flg
                = (Bit(~CCU_HMI_308_8, 4 ))&&(Bit(~CCU_HMI_308_8, 3 ));
        g_door4_comm_err_flg
                = (Bit(~CCU_HMI_308_8, 2 ))&&(Bit(~CCU_HMI_308_8, 1 ));

        g_pis1_comm_err_flg
                = Bit(~CCU_HMI_308_8, 16 );
        g_pis2_comm_err_flg
                = Bit(~CCU_HMI_308_8, 15 );
        g_fas1_comm_err_flg
                = Bit(~CCU_HMI_308_8, 10 );
        g_fas2_comm_err_flg
                = Bit(~CCU_HMI_308_8, 9 );
        g_pds1_comm_err_flg
                = Bit(~CCU_HMI_308_9, 8 );
        g_pds2_comm_err_flg
                = Bit(~CCU_HMI_308_9, 7 );
*/
}

bool Dialog::CheckLifeSignalValue(WORD &temp, WORD data)
{
    bool ret;
    if (temp == data)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }
    temp = data;
    return ret;
}

void Dialog::SerialDebug()
{
    if(serialDebugDlg.serialSetList.length() != 0)
    {
        int nOperation = 0;
        for(int i = 0; i < serialDebugDlg.serialSetList.length(); i++)
        {
            nOperation = serialDebugDlg.serialSetList[i].nOperation;
            if(nOperation == 0)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 1)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 2)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 3)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
            }
        }
    }
}
void Dialog::OpenPort()
{
  #ifdef LOG_OPEN
  qDebug()<<"OpenPort";
  #endif
  ttyUSB_sc =new QFile("/dev/ttyUSB_SC",this);
  if(!ttyUSB_sc->open(QIODevice::ReadWrite))
  {
      #ifdef LOG_OPEN
      qDebug()<<"Open port failed\n";
      #endif
      free(ttyUSB_sc);
      ttyUSB_sc = NULL;
      return;
  }

}
void Dialog::ClosePort()
{
  if(ttyUSB_sc != NULL)
  {

      ttyUSB_sc->close();
      #ifdef LOG_OPEN
      qDebug()<<"closeport";
      #endif
      ttyUSB_sc = NULL;
  }
}
QString Dialog::SendText(QString sc_com)
{
    QString msg = sc_com;

    if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    {
            #ifdef LOG_OPEN
            qDebug() << "SendText"<<msg.length();
            #endif
            msg = msg + "\n";
            QByteArray data(msg.toAscii());
            ttyUSB_sc->write(data);
            // usleep(500);
            QString str;
            int read_num=0;
            while (1)
            {

                        str=ttyUSB_sc->readLine();

                        if(read_num>5)
                        {
                            #ifdef LOG_OPEN
                            qDebug() << "read_num :"<<read_num<<"length:"<<str.length();
                            #endif
                            read_num=0;
                            break;//while()
                        }
                        else
                        {
                            read_num++;
                        }
                        #ifdef LOG_OPEN
                        qDebug() << "ttyUSB_sc->readLine()"<<"str.isEmpty()"<<str.isEmpty();
                        #endif

                        if(str.isEmpty())
                        {

                        }
                        else
                        {
                            #ifdef LOG_OPEN
                            qDebug()<<str<<"length:"<<str.length();
                            #endif
                            break;
                        }
                        usleep(200);
            }
            return str;
    }//if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    return "";
}

void Dialog::ReadFile()
{
    #ifdef LOG_OPEN
    qDebug() << "Widget::ReadFile()";
    #endif
    QString str;
    while ((str = ttyUSB_sc->readLine()) != NULL)
    {
        #ifdef LOG_OPEN
        qDebug() << str;
        #endif
        //ui->text->append(str);
    }
}

int Dialog::InitSerialPort()
{
    //BAUDRATE = B9600;//11.8
    //MODEMDEVICE = "/dev/ttyS2";
    MODEMDEVICE = "/dev/ttyUSB_SC";
    //DATABITS = CS8;
    //PARITYTYPE = 0;
    //STOPBITS = 1;

    if ((fd = ::open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
        #ifdef LOG_OPEN
        qDebug() << "InitSerialPort not ok! fd="<<fd;
        #endif
        return 1;
    }
    #ifdef LOG_OPEN
    qDebug() << "InitSerialPort  ok! fd="<<fd;
    #endif
    return 0;

//    int status;
//    struct termios Opt;
//    tcgetattr(fd, &Opt);
//    tcflush(fd, TCIOFLUSH);
//    cfsetispeed(&Opt, BAUDRATE);
//    cfsetospeed(&Opt, BAUDRATE);
//    status =  tcsetattr(fd ,TCSANOW, &Opt);
//    if (status != 0)
//    {
//        return 2;
//    }
//    tcflush(fd, TCIOFLUSH);

//    struct termios options;
//    if (tcgetattr( fd, &options ) != 0 )
//    {
//        return 3;
//    }
//    options.c_cflag &= ~CSIZE;
//    options.c_cflag |= DATABITS;
//    options.c_cflag &= ~PARENB;
//    options.c_iflag &= ~INPCK;
//    options.c_cflag &= ~CSTOPB;

//    tcflush(fd, TCIFLUSH);

//    options.c_lflag = 0;
//    options.c_oflag = 0;
//    options.c_iflag &= ~( ICRNL|IXON);
//    options.c_cc[VTIME] = 1;
//    options.c_cc[VMIN] = 0;
//    if(tcsetattr(fd, TCSANOW,&options) != 0)
//    {
//        return 4;
//    }
//    isOpen = true;
//    return 0;
}

void Dialog::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    ::close(fd);
    isOpen = false;
}

int Dialog::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

int Dialog::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData, 100);
    }
    mutexRead.unlock();
    return nread;
}
//读报警和关机温度
void Dialog::BackLightCtrl(bool bOpen)
{

            char cmd[20] ; // cmd 75,读报警和关机温度
            for(int i=0;i<20;i++)
            {
                    cmd[i]=0;
            }
            cmd[0] = 0x1B;
            cmd[1] = 0x23;
            cmd[2] = 0x37;
            cmd[3] = 0x35;
            cmd[4] = 0x0D;
            int len = 0;
            //     system("setserial /dev/ttyS2 irq 10");
            if(InitSerialPort() != 0 )
            return;
            if( ComWrite( cmd, 5 ) == 5 )
            {
                    while(1)//while 1
                    {
                        len = ComRead( cmd );
                        test_tempdata[30]=len;
                        usleep(200);
                        if(len>0)
                        {
                            for(int i=0;i<8;i++)
                            {
                                    test_tempdata[32+i]=cmd[i];
                            }
                            while(1) //while 2
                            {
                                len = ComRead( cmd );
                                usleep(200);
                                if(len>0)
                                {
                                        test_tempdata[31]=len;
                                        for(int i=0;i<len;i++)
                                        {
                                                test_tempdata[40+i]=cmd[i];
                                        }
                                        while(1)//while 3
                                        {
                                                len = ComRead( cmd );
                                                usleep(200);
                                                test_tempdata[48]=len;
                                                if(len>0)
                                                {
                                                        //test_tempdata[31]=len;
                                                        for(int i=0;i<len;i++)
                                                        {
                                                            test_tempdata[48+i]=cmd[i];
                                                        }
                                                        break;
                                                }
                                        }
                                        break;
                                }
                            }// end  while 2
                            break;
                        }//if(len>0)

                        
                    }//end while 1
             } //if( ComWrite( cmd, 5 ) == 5 )
             usleep(200);
             CloseSerialPort();
}
void Dialog::SetWarningTemperature()
{
    char cmd[] = {0x1B,0x23,0x32,0x39,0x2C,0x38,0x30,0x0D}; // cmd 29,temperatue 80

    if(InitSerialPort() != 0 )
        return;
    ComWrite(cmd, sizeof(cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
// set HMI in Tc1 or Tc2 ? and set IP address
void Dialog::HMI_Initial_Set()
{
        char cmd[20] ; // cmd 94,device address
        cmd[0] = 0x1B;
        cmd[1] = 0x23;
        cmd[2] = 0x39;
        cmd[3] = 0x34;
        cmd[4] = 0x0D;
        int len = 0;
        int timer1 = 0;
        int power_id_ok=0;

        //system("setserial /dev/ttyS2 irq 10");
        if(InitSerialPort() != 0 )
        {
            return;
        }
        //读电源ID编码3次，有返回值则跳出for循环
        for(int i=0;i<3;i++)
        {
                timer1=0;
                if( ComWrite( cmd, 5 ) == 5 )
                {
                    //发送读取电源编码命令成功，则进入循环等待h8返回的数据
                    while(1)
                    {
                        len = ComRead( cmd );
                        usleep(300);

                        if(timer1>180)
                        {
                            break;    //while
                        }
                        else
                        {
                            timer1++;
                        }
                        if( len==8 )
                        {
                            for(int j=0;j<len;j++)
                            {
                                test_tempdata[j]=cmd[j];
                            }
                            if( cmd[1]==0x01 && cmd[2]==0x23 && cmd[3]==0x39 && cmd[4]==0x34 && cmd[5]==0x2C )
                            {
                                if((cmd[6]==0x31)||(cmd[6]==0x30))
                                {
                                    if(cmd[6]==0x31)
                                    {
                                        TC1_HMI=1;
                                        TC2_HMI=0;
                                        system("ifconfig eth0 10.10.25.21");
                                        //
                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
                                        power_id_ok=1;
                                    }
                                    if(cmd[6]==0x30)
                                    {
                                        TC2_HMI=1;
                                        TC1_HMI=0;
                                        system("ifconfig eth0 10.10.25.23");
                                        //
                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
                                        power_id_ok=1;
                                    }
                                }

                            }
                            break;   //while
                        }
//                        else    //if( len==8 )
//                        {
//                            break;   //while
//                        }

                    }

                    if(power_id_ok==1)
                    {
                        test_tempdata[64]=i;
                        test_tempdata[65]=power_id_ok;
                        test_tempdata[66]=timer1;
                        break;   //for
                    }
                }
                else
                {
                    usleep(300);
                    //continue;
                }
        }
        //没有正确读到电源编码，则使用上次正确读取编码时的数值
        if(power_id_ok==0)
        {
            if(TC1_HMI_ini==1)
            {
                TC1_HMI=1;
                TC2_HMI=0;
                system("ifconfig eth0 10.10.25.21");
            }
            else
            {
                if(TC2_HMI_ini==1)
                {
                        TC2_HMI=1;
                        TC1_HMI=0;
                        system("ifconfig eth0 10.10.25.23");
                }
                else
                {
                    TC2_HMI=0;
                    TC1_HMI=0;
                }
            }

            //test_tempdata[64]=i;
            test_tempdata[65]=power_id_ok;
            test_tempdata[66]=timer1;

        }
        usleep(200);
        CloseSerialPort();
}

//  read hmi power id
void Dialog::OnTimer30s()
{
        {
            char cmd[20] ; // cmd 86,hmi内部温度
            for(int i=0;i<20;i++)
            {
                cmd[i]=0;
            }
            cmd[0] = 0x1B;
            cmd[1] = 0x23;
            cmd[2] = 0x38;
            cmd[3] = 0x36;
            cmd[4] = 0x0D;
            int len = 0;
            int timer1 = 0;
            int timer2 = 0;


               //     system("setserial /dev/ttyS2 irq 10");
            if(InitSerialPort() != 0 )
                return;
            if( ComWrite( cmd, 5 ) == 5 )
            {
                while(1)
                {
                    len = ComRead( cmd );

                    usleep(300);

                    if(timer1>180)
                    {
                        break;
                    }
                    else
                    {
                        timer1++;
                    }
//                    if(timer1%30==29)
//                    {
//                        #ifdef LOG_OPEN
//                            m_log.Begin();

//                            m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
//                            m_log.Log("timer1:" + QString::number(timer1) + "\n");

//                            m_log.End();
//                        #endif

//                    }


                    if(len>0)
                    {
                        test_tempdata[28]=len;
                        for(int i=0;i<8;i++)
                        {
                                test_tempdata[16+i]=cmd[i];
                        }
                        while(1)
                        {
                            len = ComRead( cmd );
                            if(len>0)
                            {
                                        test_tempdata[29]=len;
                                        for(int i=0;i<len;i++)
                                        {
                                                test_tempdata[24+i]=cmd[i];

                                        }
                                        break;
                              }
                            usleep(300);
                            if(timer2>180)
                            {
                                break;
                            }
                            else
                            {
                                timer2++;
                            }

                            if(timer2%30==29)
                            {
                                #ifdef LOG_OPEN
                                    m_log.Begin();

                                    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
                                    m_log.Log("timer2:" + QString::number(timer2) + "\n");

                                    m_log.End();
                                #endif
                            }

                        }
                        break;
                    }


                }//while

            }//if( ComWrite( cmd, 5 ) == 5 )


//                if( ComWrite( cmd, 5 ) == 5 )
//                {
//                    usleep(200);
//                    test_tempdata[17]+=1;
//                    test_tempdata[27]=read_h8_response(fd );
//                }

                usleep(50);
                CloseSerialPort();
        }


}

void Dialog::OnTimer5s()
{
    QString read_str;
    OpenPort();
    read_str=SendText("!#75");
    if(read_str.isEmpty())
    {


    }
    else
    {
        QByteArray data(read_str.toAscii());
        for (int i=0;i<data.length();i++)
        {
            test_tempdata[16+i]=data.at(i);
        }
    }
    ClosePort();
}

void Dialog::OnLogTimer()
{
#ifdef LOG_OPEN
    m_log.Begin();

    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
    m_log.Log("CommunicateErr:" + QString::number(CLog::m_nCommErr) + "\n");
    m_log.Log("ErrPackageNum:"+ QString::number(CLog::m_nErrPackage) + "\n");
    m_log.Log("TimeSkipNum:" + QString::number(CLog::m_nTimeSkip) + "\n");
    if(UpdateDataTimer.isActive())
        m_log.Log("UpdateDataTimer is Active.\n");
    else
        m_log.Log("UpdateDataTimer is Dead.\n");
    m_log.Log("Memory info:\n");
    system("vmstat>>/root/mem.txt");
    string memInfoStr, tmpstr;
    fstream fs;
    fs.open("/root/mem.txt",ios_base::in);
    while(!fs.eof())
    {
        getline(fs, tmpstr, '\n');
        memInfoStr += tmpstr + "\n";
    }
    fs.close();
    system("rm -f /root/mem.txt");

    m_log.Log(QString(memInfoStr.c_str()) + "\n\n");

    m_log.End();
#endif
}

int Dialog::read_h8_response(int fd)
{

    int offset, n;

    for (offset=0;;) {
        test_tempdata[21]+=1;
        test_tempdata[18]=sizeof(report);
        n=read(fd, report+offset, 8);

        test_tempdata[28]=offset;
        test_tempdata[29]=n;

        if (n <= 0) {
            test_tempdata[19]+=1;
            if ((n < 0) && (errno == EINTR)) continue;
            return 0;
        }  // end if
        if ((offset == 0) && (n == 1)) {
            test_tempdata[20]+=1;
            if ((report[0] == '\006') || (report[0] == '\025')) {
                return 1;
            } // end if
            return 0;
        } // end
        offset+=n;

            report[offset]=0;
        if (report[offset-1] == '\n')
        {
            break;
            test_tempdata[22]+=1;
        }

    } // end for
    test_tempdata[23]+=1;
    return offset;
    // test answer

//    printf("\nout:");
//    for(n=0;n<offset;n++)
//        printf("%x(%c)--",report[n],report[n]);
//    printf("\n");

//        return 0;
}



