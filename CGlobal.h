#ifndef CGLOBAL_H
#define CGLOBAL_H

#include <assert.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>
#include <qpoint.h>
#include <map>
#include <qmessagebox.h>

#include "cfaultscommonprocess.h"

using namespace std;

//默认使用分辨率 800×600
#define SCREEN_W 800
#define SCREEN_H 600


//时间因子： 用于页面定时 刷新时间为  200ms：  #define times_n 5
//                                400ms：  #define times_n 2.5
//                                500ms：  #define times_n 2
#define times_n 2


//用于切换分辨率 1:  800×600  ； 1.28:  1024×768
#define SCREEN_factor 1.28

//用于定义车辆编组数，即车厢个数
#define VEHICLE_NUM  4

//用于定义 带有受电弓的车厢号
#define VEHICLE_Pantograph1  2
#define VEHICLE_Pantograph2  3
//#define VEHICLE_Pantograph3  6


//用于牵引检查页面 显示元素偏移
#define TractionSystemTest_y 30

//serial data common macro
#if 1
#define USE_RAND_DATA
#endif

#if 0
#define USE_SERIAL_DATA
#endif
//20111102 zlbzeb add begin
//use mvb data common macro
#if 0
#define USE_MVB_DATA
//20111102 zlbzeb add end
#endif
//11.8
#if 0
#define LOG_OPEN
#else
#define LOG_CLOSE
#endif

#if 1
#define PAGE_HEADER_NEW
#else
#define PAGE_HEADER_OLD
#endif

#if 1
#define PAGE_BUTTON_BAR_NEW
#else
#define PAGE_BUTTON_BAR_OLD
#endif

#define  __in
#define  __out407
#define  ASSERT(T)     \
        if (!(T)){     \
            QMessageBox::warning(NULL,                                                                              \
                      QString("ASSERT"),                                                                            \
                      QString("An Error at: \nFile:") +__FILE__+ QString("\n Line:") +QString::number(__LINE__),    \
                      QMessageBox::Ok,QMessageBox::Ok);                                                             \
        assert(T);}

#define  TRUE   true
#define  FALSE  false

#define  SAFE_DELETE(T) if (T != NULL) {delete T; T = NULL;}

#ifdef __linux
   #define QSTR(T) QString::fromUtf8(T)
#else
   #define QSTR(T) QString::fromLocal8Bit(T)
#endif

#define BKSURFACENUM 100

typedef uchar BYTE;
typedef u_int16_t WORD;
typedef int WPARAM;
typedef int LPARAM;

#define WM_LBUTTONDOWN   0x00000001
#define WM_LBUTTONUP     0x00000002
#define WM_MOUSEMOVE     0x00000003
#define WM_UPDATEPAGE    0x00000004
#define WM_SHOWPAGE      0x00000005
#define WM_LBTNCLICK     0x00000006
#define WM_LEAVEPAGE     0x00000007

class CGlobal
{
public:
    CGlobal();
    ~CGlobal();
public:
    static int m_nPrePageIndex;
    static int m_nCurPageIndex;
    static int m_nNextPageIndex;
};

template<class T>
class Delegrate
{
public:
    typedef void (T::*delegratefunc)();
    Delegrate(){}
    Delegrate(T* delegrateCls, delegratefunc pFunc)
    {
        __this = delegrateCls;
        _delegratefunc = pFunc;
    }
    void execute()
    {
        (__this->*_delegratefunc)();
    }

private:
    T* __this;
    delegratefunc _delegratefunc;
};

template<class T>
class MSGINFO
{
public:
    int nMsgMacro;
    Delegrate<T> delegrate;

    MSGINFO(){}
    MSGINFO(int _nMsgMacro, Delegrate<T> _delegrate)
    {
        nMsgMacro = _nMsgMacro;
        delegrate = _delegrate;
    }
};

template<class T>
struct CONTROLMSG
{
    int m_nCtrlID;
    MSGINFO<T> m_msgInfo;

    CONTROLMSG(){}
    CONTROLMSG(int nCtrlID, MSGINFO<T> msginfo)
    {
        m_nCtrlID = nCtrlID;
        m_msgInfo = msginfo;
    }
};

template<class parentT,class mapT>
class CONNECTMSGMAP
{
public:
    CONNECTMSGMAP(parentT* pthis, int nMsg)
    {
        m_pthis = pthis;
        m_nMsg = nMsg;
    }
    bool operator()(mapT it, QPoint pt)const
    {
        int nMsg = -1;
        int nMsgListSize = m_pthis->m_MsgList.size();

        for (int i = 0; i < nMsgListSize; i++)
        {
            nMsg = m_pthis->m_MsgList[i].m_msgInfo.nMsgMacro;
            if (m_nMsg == nMsg
                && m_pthis->m_MsgList[i].m_nCtrlID == it->GetCtrlID()
                && it->GetCtrlRect().contains(pt,true)
                && it->IsCtrlEnable())
            {
                m_pthis->m_MsgList[i].m_msgInfo.delegrate.execute();
                m_pthis->GetParentDlg()->update();
                return true;
            }
        }
        return false;
    }
    void operator()()const
    {
        int nMsg = -1;
        int nMsgListSize = m_pthis->m_MsgList.size();

        for (int i = 0; i < nMsgListSize; i++)
        {
            nMsg = m_pthis->m_MsgList[i].m_msgInfo.nMsgMacro;
            if (m_nMsg == nMsg)
            {
                m_pthis->m_MsgList[i].m_msgInfo.delegrate.execute();
                m_pthis->GetParentDlg()->update();
                break;
            }
        }
    }
private:
    parentT* m_pthis;
    int m_nMsg;
};

// picture index begin with 0
#define PICTURE_INDEX(T) T
// rom index begin with 0
#define ROM_INDEX(T) T

#define DECLEAR_MESSAGE_MAP(T)                                            \
                public:                                                   \
                   vector< CONTROLMSG<T> > m_MsgList;                     \
                   void ConnectEvent(__in QPoint pt,__in int nMsg);       \
                   void ConnectEvent(__in int nMsg);                      \
                   void InitMsgList();

#define CONNECTEVENT(classname)                                            \
                    void classname::ConnectEvent(QPoint pt, int nMsg)      \
                    {                                                      \
                        CONNECTMSGMAP<classname, CControlInterface* > g(this,nMsg);         \
                        map<int,CControlInterface*>::iterator it;           \
                        for (it =m_ctrlmap.begin();it!= m_ctrlmap.end();++it)\
                        {                                                   \
                           if (g(it->second, pt))                            \
                           {                                                \
                                if (it->second->IsKindOf("CButton")          \
                                    && nMsg == WM_LBUTTONDOWN)              \
                                {                                           \
                                    ((CButton*)it->second)->ChangeButtonState(LBUTTON_DOWN);\
                                }                                           \
                           }                                                \
                        }                                                   \
                    }                                                       \
                    void classname::ConnectEvent(int nMsg)                  \
                    {                                                       \
                        CONNECTMSGMAP<classname, CControlInterface* > g(this,nMsg);         \
                        g();                                                \
                    }

#define BEGIN_MESSAGE_MAP(classname,baseclass)                             \
                    typedef classname ThisClass;                           \
                    CONNECTEVENT(ThisClass)                                \
                    void classname::InitMsgList(){                         \
                    ON_BTNCLK(IDLB_COM_TITLE, OnTitleCLK)                  \
                    ON_BTNCLK(IDLB_COM_TrainFault, OnRealTimeFaultsWarnningIconClk_new)


#define END_MESSAGE_MAP()   }

#define ON_CONTROL(msgname,nCtrlID,EventProc)                             \
                    CONTROLMSG<ThisClass>  msgname##nCtrlID##Msg;         \
                    memset(&(msgname##nCtrlID##Msg), '\0', sizeof(CONTROLMSG<ThisClass>)); \
                    (msgname##nCtrlID##Msg).m_nCtrlID = nCtrlID;                           \
                    (msgname##nCtrlID##Msg).m_msgInfo.nMsgMacro = msgname;                 \
                    (msgname##nCtrlID##Msg).m_msgInfo.delegrate = Delegrate<ThisClass>(this,&ThisClass::EventProc);\
                    m_MsgList.push_back(msgname##nCtrlID##Msg);

#define ON_MOUSEMOVE()                                            \
                 ON_CONTROL(WM_MOUSEMOVE,0,OnMouseMove)

#define ON_LBUTTONDOWN(nCtrlID,EventProc)                         \
                 ON_CONTROL(WM_LBUTTONDOWN, nCtrlID,EventProc)

#define ON_LBUTTONUP(nCtrlID,EventProc)                           \
                 ON_CONTROL(WM_LBUTTONUP, nCtrlID,EventProc)

#define ON_UPDATE_PAGE()                                          \
                 ON_CONTROL(WM_UPDATEPAGE,0,OnUpdatePage)

#define ON_SHOWPAGE()                                             \
                 ON_CONTROL(WM_SHOWPAGE,0,OnShowPage)

#define ON_LEAVEPAGE()                                            \
                 ON_CONTROL(WM_LEAVEPAGE,0,OnLeavePage)

#define ON_BTNCLK(nCtrlID,EventProc)                              \
                 ON_LBUTTONDOWN(nCtrlID, OnLButtonDown)           \
                 ON_CONTROL(WM_LBTNCLICK,nCtrlID,EventProc)

// page manage macro
#define DECLEAR_PAGE_MANAGE()                          \
             public:                                   \
                 void CreatePage(int nPageIndex);

#define IMPLEMENT_PAGE_MANAGE()                         \
             for (int i = 0; i < BKSURFACENUM; i++)      \
                 g_PageVec[i] = NULL;                   \
             CREATE_PAGE(PAGE_INDEX_COMMSTATUS,this)

#define BEGIN_PAGE_MANAGE()                           \
            void Dialog::CreatePage(int nPageIndex)   \
            {                                         \
                switch(nPageIndex){

#define ADD_PAGE(classname,rom_index)                                        \
         case rom_index:                                                     \
         {                                                                   \
           classname* pPage_##classname = new classname();                   \
           (pPage_##classname)->InitPage(SCREEN_W*SCREEN_factor, SCREEN_H*SCREEN_factor, rom_index,this);\
           (pPage_##classname)->DrawByRom(g_PicRom[rom_index]);              \
           (pPage_##classname)->InitMsgList();                               \
           g_PageVec[rom_index] = dynamic_cast<CPage*>(pPage_##classname);   \
           break;                                                            \
         }

#define END_PAGE_MANAGE()                               \
          default:                                      \
             ASSERT(false);                             \
             break;                                     \
         }}

#define CREATE_PAGE(page_index,pDlg)       \
        pDlg->CreatePage(page_index);


//control type  enum
enum CONTROLTYPEENUM
{
    CONTROL_BUTTON  =  0,
    CONTROL_EDIT,
    CONTROL_LABEL,
    CONTROL_IMAGE,
    CONTROL_LINE,
    CONTROL_CIRCLE,
    CONTROL_SCROLL,
    CONTROL_TRAIN,
    CONTROL_ARROW,
    CONTROL_TRAINDIAGRAM
};

//Wheel dia enum
enum WHEELDIAENUM
{
    WHEELDIAENUM_CAR11,
    WHEELDIAENUM_CAR21,
    WHEELDIAENUM_CAR31,
    WHEELDIAENUM_CAR41,
    WHEELDIAENUM_CAR51,
    WHEELDIAENUM_CAR61,
    WHEELDIAENUM_CAR71,
    WHEELDIAENUM_CAR81,
    WHEELDIAENUM_CAR12,
    WHEELDIAENUM_CAR13,
    WHEELDIAENUM_CAR14,
    WHEELDIAENUM_CAR62,
    WHEELDIAENUM_CAR63,
    WHEELDIAENUM_CAR64,
    WHEELDIAENUM_TRAINCODE,
    WHEELDIAENUM_LINECODE,
};

//Time Setting
enum TIMESETTING
{
    TIMESETTING_ATC = 0,
    TIMESETTING_HMI
};

template<class T>
class DELOBJ:public unary_function<T, void>
{
public:
    void operator()(T& it)
    {
        SAFE_DELETE(it);
    }
};

template<class T>
class DELMAPOBJ:public unary_function<T, void>
{
public:
    void operator()(T it)
    {
        SAFE_DELETE(it.second);
    }
};

template<class T>
class CONTROLFINDIF : public binary_function<T,int,bool>
{
public:
    bool operator()(T& it, int nConditonID)const
    {
        if (it->GetCtrlID() == nConditonID)
        {
           return true;
        }

        return false;
    }
};

template<class T>
class FINDKEY:public binary_function<T,int,bool>
{
public:
    bool operator()(T it,int nID)const
    {
        if (it.first == nID)
        {
            return true;
        }
        return false;
    }
};


extern int udp_num;
extern int udp_num4;
extern bool g_udp_comm_err_flg1;
extern bool g_udp_comm_err_flg2;
extern bool g_485_comm_err_flg1;
extern bool g_485_comm_err_flg2;
extern bool g_mvb_comm_err_flg1;
extern bool g_mvb_comm_err_flg2;
extern bool g_riom1_gw123_comm_err_flg;
extern bool g_riom1_di1_comm_err_flg;
extern bool g_riom1_di2_comm_err_flg;
extern bool g_riom1_di3_comm_err_flg;
extern bool g_riom1_di4_comm_err_flg;
extern bool g_riom1_do1_comm_err_flg;
extern bool g_riom1_do2_comm_err_flg;
extern bool g_riom1_ai1_comm_err_flg;
extern bool g_riom2_gw123_comm_err_flg;
extern bool g_riom2_di1_comm_err_flg;
extern bool g_riom2_di2_comm_err_flg;
extern bool g_riom2_di3_comm_err_flg;
extern bool g_riom2_di4_comm_err_flg;
extern bool g_riom2_do1_comm_err_flg;
extern bool g_riom2_do2_comm_err_flg;
extern bool g_riom2_ai1_comm_err_flg;
extern bool g_riom3_gw123_comm_err_flg;
extern bool g_riom3_di1_comm_err_flg;
extern bool g_riom3_di2_comm_err_flg;
extern bool g_riom3_di3_comm_err_flg;
extern bool g_riom3_di4_comm_err_flg;
extern bool g_riom3_do1_comm_err_flg;
extern bool g_riom3_do2_comm_err_flg;
extern bool g_riom3_ai1_comm_err_flg;
extern bool g_riom4_gw123_comm_err_flg;
extern bool g_riom4_di1_comm_err_flg;
extern bool g_riom4_di2_comm_err_flg;
extern bool g_riom4_di3_comm_err_flg;
extern bool g_riom4_di4_comm_err_flg;
extern bool g_riom4_do1_comm_err_flg;
extern bool g_riom4_do2_comm_err_flg;
extern bool g_riom4_ai1_comm_err_flg;
extern bool g_riom5_gw123_comm_err_flg;
extern bool g_riom5_di1_comm_err_flg;
extern bool g_riom5_di2_comm_err_flg;
extern bool g_riom5_di3_comm_err_flg;
extern bool g_riom5_di4_comm_err_flg;
extern bool g_riom5_do1_comm_err_flg;
extern bool g_riom5_do2_comm_err_flg;
extern bool g_riom5_ai1_comm_err_flg;
extern bool g_riom6_gw123_comm_err_flg;
extern bool g_riom6_di1_comm_err_flg;
extern bool g_riom6_di2_comm_err_flg;
extern bool g_riom6_di3_comm_err_flg;
extern bool g_riom6_di4_comm_err_flg;
extern bool g_riom6_do1_comm_err_flg;
extern bool g_riom6_do2_comm_err_flg;
extern bool g_riom6_ai1_comm_err_flg;
extern bool g_riom7_gw123_comm_err_flg;
extern bool g_riom7_di1_comm_err_flg;
extern bool g_riom7_di2_comm_err_flg;
extern bool g_riom7_di3_comm_err_flg;
extern bool g_riom7_di4_comm_err_flg;
extern bool g_riom7_do1_comm_err_flg;
extern bool g_riom7_do2_comm_err_flg;
extern bool g_riom7_ai1_comm_err_flg;
extern bool g_riom8_gw123_comm_err_flg;
extern bool g_riom8_di1_comm_err_flg;
extern bool g_riom8_di2_comm_err_flg;
extern bool g_riom8_di3_comm_err_flg;
extern bool g_riom8_di4_comm_err_flg;
extern bool g_riom8_do1_comm_err_flg;
extern bool g_riom8_do2_comm_err_flg;
extern bool g_riom8_ai1_comm_err_flg;
extern bool g_tcu1_comm_err_flg;
extern bool g_tcu2_comm_err_flg;
extern bool g_tcu3_comm_err_flg;
extern bool g_tcu4_comm_err_flg;
extern bool g_tcu5_comm_err_flg;
extern bool g_tcu6_comm_err_flg;

extern bool g_acu1_comm_err_flg;
extern bool g_acu2_comm_err_flg;
extern bool g_bcu1_comm_err_flg;
extern bool g_bcu2_comm_err_flg;
extern bool g_bcu3_comm_err_flg;
extern bool g_bcu4_comm_err_flg;
extern bool g_door1_comm_err_flg;
extern bool g_door2_comm_err_flg;
extern bool g_door3_comm_err_flg;
extern bool g_door4_comm_err_flg;
extern bool g_door5_comm_err_flg;
extern bool g_door6_comm_err_flg;
extern bool g_door7_comm_err_flg;
extern bool g_door8_comm_err_flg;
extern bool g_door9_comm_err_flg;
extern bool g_door10_comm_err_flg;
extern bool g_door11_comm_err_flg;
extern bool g_door12_comm_err_flg;
extern bool g_door13_comm_err_flg;
extern bool g_door14_comm_err_flg;
extern bool g_door15_comm_err_flg;
extern bool g_door16_comm_err_flg;

extern bool g_edcu1_comm_err_flg;
extern bool g_edcu2_comm_err_flg;
extern bool g_edcu3_comm_err_flg;
extern bool g_edcu4_comm_err_flg;
extern bool g_ccu_comm_err_flg;
extern bool g_ccu_comm_err_flg_temp;
extern bool g_ccu1_comm_err_flg;
extern bool g_ccu2_comm_err_flg;
extern bool g_hmi1_comm_err_flg;
extern bool g_hmi2_comm_err_flg;

extern bool g_hvac1_comm_err_flg;
extern bool g_hvac2_comm_err_flg;
extern bool g_hvac3_comm_err_flg;
extern bool g_hvac4_comm_err_flg;
extern bool g_hvac5_comm_err_flg;
extern bool g_hvac6_comm_err_flg;
extern bool g_hvac7_comm_err_flg;
extern bool g_hvac8_comm_err_flg;
extern bool g_pis1_comm_err_flg;
extern bool g_pis2_comm_err_flg;
extern bool g_atc1_comm_err_flg;
extern bool g_fas1_comm_err_flg;
extern bool g_fas2_comm_err_flg;
extern bool g_atc4_comm_err_flg;
extern bool g_pds1_comm_err_flg;
extern bool g_pds2_comm_err_flg;
extern bool set_time_flag1;
//extern bool set_time_flag2;
#define D_DATA_BUFFER_SIZE       4000

extern WORD g_dataBuffer[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_MVB[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_UDP[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_UDP_2[64];
extern WORD g_dataBuffer_onlinejude1[64];
extern WORD g_dataBuffer_onlinejude2[64];

extern BYTE sendData[128];
extern BYTE test_tempdata[128];
extern BYTE report[128];
extern QString g_runtime1;
extern QString g_runtime2;
extern bool g_isCommunicateErr;
extern bool g_bScannFault;
extern int g_nStopBtnTimes;
extern int g_history_faults_pagenum;
extern int g_current_faults_pagenum;
extern bool g_popup_exist_flg;
extern bool g_backtoprepage;
extern QList<ST_REALTIME_FAULT_INFO> g_realtimeFaultsList;
extern int g_TimeSettingState;

extern WORD Bit(WORD val, uint bit);
extern WORD Change_BigEen(WORD val);
extern void BitSet(WORD& val, uint bit, uint onoff);
extern QString StrFromInt(int nNum,int nBase);
extern int StrToInt(QString str);
extern QString GetTimeStr();
extern QString GetDateStr();
extern void SetINIInfo(QString keypath, QString str);
extern void GetINIInfo();
extern void GetWheelDiaInfoFromCSV(int nWheelDiaType, QStringList& list);
extern void SaveWheelDiaCSV(QString WheelDiaStr, int nWheelDiaType);
extern qreal DivNum(int nDiv1, int nDiv2);
extern void SetSystemTime( int year, int mon, int day, int hour, int minute, int second );
extern bool DownLoadLOG(string appPath);

extern QString g_subSystemFaultsTitle;
extern E_FAULTS_TYPE g_fault_type;

extern string g_logFileName;
extern int HVACPageSelect;
extern int error_temp1;
extern int error_temp2;
extern int error_temp3;
extern int error_temp4;
extern int error_temp5;
extern int EmergencyResuce;
extern int time_setting_start;
extern int read_time1;
extern int read_time2;
extern int read_time3;
extern int read_time4;
extern int read_time5;
extern int read_time6;
extern int ATC_time_temp1;
extern int ATC_time_temp2;
extern int ATC_time_temp3;
extern int ATC_time_temp4;
extern int ATC_time_temp5;
extern int ATC_time_temp6;
extern int time_set_mode;
extern int current_temp1;
extern int current_temp2;
extern int current_temp3;
extern int current_temp4;
extern int ATC_invalid;
extern WORD CCU_life_temp_MVB;
extern WORD CCU_life_temp_UDP;
extern WORD HMI_life_temp;
extern WORD hmi1_life_temp1;
extern WORD hmi2_life_temp2;
//extern QString che_num;
extern QString che1_num;
extern QString che2_num;
extern QString che3_num;
extern QString che4_num;
extern QString che5_num;
extern QString che6_num;
extern QString che7_num;
extern QString che8_num;
extern QString UDP_lable;
extern int ccu1_color;
extern int ccu2_color;
extern int dccu1_color;
extern int dccu2_color;
extern int io1_color;
extern int io2_color;
extern int io3_color;
extern int io4_color;
extern int io5_color;
extern int io6_color;
extern int io7_color;
extern int io8_color;
extern int acu1_color;
extern int acu2_color;
extern int pds1_color;
extern int pds2_color;
extern int tcu1_color;
extern int tcu2_color;
extern int tcu3_color;
extern int tcu4_color;
extern int tcu5_color;
extern int tcu6_color;
extern int hmi1_color;
extern int hmi2_color;
extern int hvac1_color;
extern int hvac2_color;
extern int hvac3_color;
extern int hvac4_color;
extern int hvac5_color;
extern int hvac6_color;
extern int hvac7_color;
extern int hvac8_color;
extern int bcu1_color;
extern int bcu2_color;
extern int bcu3_color;
extern int bcu4_color;
extern int pis1_color;
extern int pis2_color;
extern int edcu1_color;
extern int edcu2_color;
extern int edcu3_color;
extern int edcu4_color;
extern int edcu5_color;
extern int edcu6_color;
extern int edcu7_color;
extern int edcu8_color;
extern int che1_door1;
extern int che1_door2;
extern int che1_door3;
extern int che1_door4;
extern int che1_door5;
extern int che1_door6;
extern int che1_door7;
extern int che1_door8;
extern int che2_door1;
extern int che2_door2;
extern int che2_door3;
extern int che2_door4;
extern int che2_door5;
extern int che2_door6;
extern int che2_door7;
extern int che2_door8;
extern int che3_door1;
extern int che3_door2;
extern int che3_door3;
extern int che3_door4;
extern int che3_door5;
extern int che3_door6;
extern int che3_door7;
extern int che3_door8;
extern int che4_door1;
extern int che4_door2;
extern int che4_door3;
extern int che4_door4;
extern int che4_door5;
extern int che4_door6;
extern int che4_door7;
extern int che4_door8;
extern int che5_door1;
extern int che5_door2;
extern int che5_door3;
extern int che5_door4;
extern int che5_door5;
extern int che5_door6;
extern int che5_door7;
extern int che5_door8;
extern int che6_door1;
extern int che6_door2;
extern int che6_door3;
extern int che6_door4;
extern int che6_door5;
extern int che6_door6;
extern int che6_door7;
extern int che6_door8;
extern int che7_door1;
extern int che7_door2;
extern int che7_door3;
extern int che7_door4;
extern int che7_door5;
extern int che7_door6;
extern int che7_door7;
extern int che7_door8;
extern int che8_door1;
extern int che8_door2;
extern int che8_door3;
extern int che8_door4;
extern int che8_door5;
extern int che8_door6;
extern int che8_door7;
extern int che8_door8;
extern int che1_door9;
extern int che1_door10;
extern int che8_door9;
extern int che8_door10;
extern int atc1_color;
extern int atc2_color;
extern int error_code_temp1;
extern int error_code_temp2;
extern int error_code_temp3;
extern int error_code_temp4;
extern int error_code_temp5;
extern int error_code_temp6;
extern int error_code_temp7;
extern int error_code_temp8;
extern int error_code_temp9;
extern int error_code_temp10;
extern int error_code_temp11;
extern int error_code_temp12;
extern int error_code_temp13;
extern int error_code_temp14;
extern int error_code_temp15;
extern int error_code_temp16;
extern int error_code_temp17;
extern int error_code_temp18;
extern int error_code_temp19;
extern int error_code_temp20;
extern int error_code_temp21;
extern int error_code_temp22;
extern int error_code_temp23;
extern int error_code_temp24;
extern int error_code_temp25;
extern int error_code_temp26;
extern int error_code_temp27;
extern int error_code_temp28;
extern int error_code_temp29;
extern int error_code_temp30;
extern int error_code_record1;
extern int error_code_record2;
extern int error_code_record3;
extern int error_code_record4;
extern int error_code_record5;
extern int error_code_record6;
extern int error_code_record7;
extern int error_code_record8;
extern int error_code_record9;
extern int error_code_record10;
extern int error_code_record11;
extern int error_code_record12;
extern int error_code_record13;
extern int error_code_record14;
extern int error_code_record15;
extern int error_code_record16;
extern int error_code_record17;
extern int error_code_record18;
extern int error_code_record19;
extern int error_code_record20;
extern int error_code_record21;
extern int error_code_record22;
extern int error_code_record23;
extern int error_code_record24;
extern int error_code_record25;
extern int error_code_record26;
extern int error_code_record27;
extern int error_code_record28;
extern int error_code_record29;
extern int error_code_record30;
extern QString error_display1;
extern QString error_display2;
extern QString error_display3;
extern QString error_display4;
extern QString error_display5;
extern QString error_display6;
extern QString error_display7;
extern QString error_display8;
extern QString error_display9;
extern QString error_display10;
extern QString error_display11;
extern QString error_display12;
extern QString read_error1;
extern QString read_error2;
extern QString read_error3;
extern QString read_error4;
extern QString read_error5;
extern QString read_error6;
extern QString read_error7;
extern QString read_error8;
extern QString read_error9;
extern QString read_error10;
extern QString read_error11;
extern QString read_error12;
extern QString read_error13;
extern QString read_error14;
extern QString read_error15;
extern QString read_error16;
extern QString read_error17;
extern QString read_error18;
extern QString read_error19;
extern QString read_error20;
extern QString read_error21;
extern QString read_error22;
extern QString read_error23;
extern QString read_error24;
extern QString read_error25;
extern QString read_error26;
extern QString read_error27;
extern QString read_error28;
extern QString read_error29;
extern QString read_error30;
extern int read_error52;
extern int error_code_temp31;
extern int error_code_temp32;
extern int error_code_temp33;
extern int error_code_temp34;
extern int error_code_temp35;
extern int error_code_temp36;
extern int error_code_temp37;
extern int error_code_temp38;
extern int error_code_temp39;
extern int error_code_temp40;
extern int error_code_temp41;
extern int error_code_temp42;
extern int error_code_temp43;
extern int error_code_temp44;
extern int error_code_temp45;
extern int error_code_temp46;
extern int error_code_temp47;
extern int error_code_temp48;
extern int error_code_temp49;
extern int error_code_temp50;
extern int error_code_temp51;
extern int error_code_temp52;
extern int error_code_temp53;
extern int error_code_temp54;
extern int error_code_temp55;
extern int error_code_temp56;
extern int error_code_temp57;
extern int error_code_temp58;
extern int error_code_temp59;
extern int error_code_temp60;
extern int error_code_record31;
extern int error_code_record32;
extern int error_code_record33;
extern int error_code_record34;
extern int error_code_record35;
extern int error_code_record36;
extern int error_code_record37;
extern int error_code_record38;
extern int error_code_record39;
extern int error_code_record40;
extern int error_code_record41;
extern int error_code_record42;
extern int error_code_record43;
extern int error_code_record44;
extern int error_code_record45;
extern int error_code_record46;
extern int error_code_record47;
extern int error_code_record48;
extern int error_code_record49;
extern int error_code_record50;
extern int error_code_record51;
extern int error_code_record52;
extern int error_code_record53;
extern int error_code_record54;
extern int error_code_record55;
extern int error_code_record56;
extern int error_code_record57;
extern int error_code_record58;
extern int error_code_record59;
extern int error_code_record60;
extern int tr_start;
extern QString tr_date1;
extern QString tr_date2;
extern QString tr_date3;
extern QString tr_date4;
extern QString tr_date5;
extern QString tr_date6;
extern QString tr_date7;
extern QString tr_date8;
extern QString tr_date9;
extern QString tr_date10;
extern QString tr_testtype1;
extern QString tr_testtype2;
extern QString tr_testtype3;
extern QString tr_testtype4;
extern QString tr_testtype5;
extern QString tr_testtype6;
extern QString tr_testtype7;
extern QString tr_testtype8;
extern QString tr_testtype9;
extern QString tr_testtype10;
extern qreal tr_ADSpeed1;
extern qreal tr_ADSpeed2;
extern qreal tr_ADSpeed3;
extern qreal tr_ADSpeed4;
extern qreal tr_ADSpeed5;
extern qreal tr_ADSpeed6;
extern qreal tr_ADSpeed7;
extern qreal tr_ADSpeed8;
extern qreal tr_ADSpeed9;
extern qreal tr_ADSpeed10;
extern int tr_level1;
extern int tr_level2;
extern int tr_level3;
extern int tr_level4;
extern int tr_level5;
extern int tr_level6;
extern int tr_level7;
extern int tr_level8;
extern int tr_level9;
extern int tr_level10;
extern int tr_BrakeInitalSpeed1;
extern int tr_BrakeInitalSpeed2;
extern int tr_BrakeInitalSpeed3;
extern int tr_BrakeInitalSpeed4;
extern int tr_BrakeInitalSpeed5;
extern int tr_BrakeInitalSpeed6;
extern int tr_BrakeInitalSpeed7;
extern int tr_BrakeInitalSpeed8;
extern int tr_BrakeInitalSpeed9;
extern int tr_BrakeInitalSpeed10;
extern WORD tr_testtype_record;
extern WORD tr_testtype_temp;
extern WORD tr_testtype;
extern int tr_BrakeDistance1;
extern int tr_BrakeDistance2;
extern int tr_BrakeDistance3;
extern int tr_BrakeDistance4;
extern int tr_BrakeDistance5;
extern int tr_BrakeDistance6;
extern int tr_BrakeDistance7;
extern int tr_BrakeDistance8;
extern int tr_BrakeDistance9;
extern int tr_BrakeDistance10;
extern int tr_testtimes;
extern int tr_levelcolor1;
extern int tr_levelcolor2;
extern int tr_levelcolor3;
extern int tr_levelcolor4;
extern int tr_levelcolor5;
extern int tr_levelcolor6;
extern int tr_levelcolor7;
extern int tr_levelcolor8;
extern int tr_levelcolor9;
extern int tr_levelcolor10;
//extern unsigned long run_record_distance;
//extern unsigned long run_record_today_distance;
extern qreal run_record_distance;
extern qreal run_record_today_distance;
extern unsigned long energy1;
extern unsigned long energy2;
extern unsigned long energy3;
//extern int 当前日;
extern int run_record_time;
extern WORD pull_brake_hide;
extern QString run_record_date1;
extern QString run_record_date2;
extern QString run_record_date3;
extern QString run_record_date4;
extern QString run_record_date5;
extern QString run_record_date6;

extern int commandcar1;
extern int commandcar2;
extern int door_test_signal;
extern int door_test_temp;
extern QString Door1_JudgeOpen_Car1;
extern QString Door1_JudgeOpen_Car2;
extern QString Door1_JudgeOpen_Car3;
extern QString Door1_JudgeOpen_Car4;
extern QString Door1_JudgeOpen_Car5;
extern QString Door1_JudgeOpen_Car6;

extern QString Door2_JudgeOpen_Car1;
extern QString Door2_JudgeOpen_Car2;
extern QString Door2_JudgeOpen_Car3;
extern QString Door2_JudgeOpen_Car4;
extern QString Door2_JudgeOpen_Car5;
extern QString Door2_JudgeOpen_Car6;

extern int Door1_JudgeOpen_Car_Color1;
extern int Door1_JudgeOpen_Car_Color2;
extern int Door1_JudgeOpen_Car_Color3;
extern int Door1_JudgeOpen_Car_Color4;
extern int Door1_JudgeOpen_Car_Color5;
extern int Door1_JudgeOpen_Car_Color6;

extern int Door2_JudgeOpen_Car_Color1;
extern int Door2_JudgeOpen_Car_Color2;
extern int Door2_JudgeOpen_Car_Color3;
extern int Door2_JudgeOpen_Car_Color4;
extern int Door2_JudgeOpen_Car_Color5;
extern int Door2_JudgeOpen_Car_Color6;

extern QString Door1_JudgeClose_Car1;
extern QString Door1_JudgeClose_Car2;
extern QString Door1_JudgeClose_Car3;
extern QString Door1_JudgeClose_Car4;
extern QString Door1_JudgeClose_Car5;
extern QString Door1_JudgeClose_Car6;

extern QString Door2_JudgeClose_Car1;
extern QString Door2_JudgeClose_Car2;
extern QString Door2_JudgeClose_Car3;
extern QString Door2_JudgeClose_Car4;
extern QString Door2_JudgeClose_Car5;
extern QString Door2_JudgeClose_Car6;

extern int Door1_JudgeClose_Car_Color1;
extern int Door1_JudgeClose_Car_Color2;
extern int Door1_JudgeClose_Car_Color3;
extern int Door1_JudgeClose_Car_Color4;
extern int Door1_JudgeClose_Car_Color5;
extern int Door1_JudgeClose_Car_Color6;

extern int Door2_JudgeClose_Car_Color1;
extern int Door2_JudgeClose_Car_Color2;
extern int Door2_JudgeClose_Car_Color3;
extern int Door2_JudgeClose_Car_Color4;
extern int Door2_JudgeClose_Car_Color5;
extern int Door2_JudgeClose_Car_Color6;

extern int tr_regeneration1;
extern int tr_regeneration2;
extern int tr_regeneration3;
extern int tr_regeneration4;
extern int tr_regeneration5;
extern int tr_regeneration6;
extern int tr_regeneration7;
extern int tr_regeneration8;
extern int tr_regeneration9;
extern int tr_regeneration10;
extern int tr_emergencybraking1;
extern int tr_emergencybraking2;
extern int tr_emergencybraking3;
extern int tr_emergencybraking4;
extern int tr_emergencybraking5;
extern int tr_emergencybraking6;
extern int tr_emergencybraking7;
extern int tr_emergencybraking8;
extern int tr_emergencybraking9;
extern int tr_emergencybraking10;
//extern int 紧急广播_选择;
extern int clear_record_timer;
//extern int 三级故障;
//extern qreal time_setting_1;
//extern qreal time_setting_2;
//extern qreal time_setting_3;
//extern qreal time_setting_4;
//extern qreal time_setting_5;
//extern qreal time_setting_6;
extern qreal TCU1_Fdbk;
extern qreal TCU2_Fdbk;
extern qreal TCU1_TorCom;
extern qreal TCU2_TorCom;
extern qreal TCU1_Loador;
extern qreal TCU2_Loador;
extern int ACU1_OutVoltage;
extern int ACU2_OutVoltage;
extern int ACU1_Frequency;
extern int ACU2_Frequency;


extern int ACU1_BatVoltage;
extern int ACU2_BatVoltage;

extern int time_setting_1;
extern int time_setting_2;
extern int time_setting_3;
extern int time_setting_4;
extern int time_setting_5;
extern int time_setting_6;
extern int time_setting_color;
extern WORD HMI_send_data28;
extern WORD HMI_send_data29;
extern WORD HMI_send_data30;
extern int time_setting_timer;
//extern int 密码长度;
extern WORD hmi_485_error_temp;
extern int hmi_485_error_record;
extern int color_bit;
extern int table_num;
extern int checi_num;
extern int driver_num;
extern int temp_num;
extern int temp_display_num;
extern int ee;
extern int errorlist1;
extern int net_error;
extern int tcu_error;
extern int error_history;
extern QString pwdisplay;
extern QString pw_true;
extern QString pw_input;
extern int pw_select;
extern int clear_run_color;
extern int station_name_color;
extern int ATC_error;
extern int ACU_error;
extern int BCU_error;
extern int HVAC_error;
extern int PIS_error;
//extern int 乘客报警_error;
extern int HVAC_select_color;
extern int HVAC_mode_select;
extern int station_select;
extern int station_select1;
extern int station_select2;
extern int parameter_setting_se1ect;
extern WORD parameter_setting_se1ect1;

extern int stationcancel11;
extern int stationcancel12;
extern int stationcancel13;
extern int stationcancel14;
extern int stationcancel15;
extern int stationcancel21;
extern int stationcancel22;
extern int stationcancel23;
extern int stationcancel24;
extern int stationcancel25;
extern int stationcancel31;
extern int stationcancel32;
extern int stationcancel33;
extern int stationcancel34;
extern int stationcancel35;
extern int stationcancel41;
extern int stationcancel42;
extern int stationcancel43;
extern int stationcancel44;
extern int stationcancel45;
extern int stationcancel51;
extern int stationcancel52;


extern bool m_bscset11;
extern bool m_bscset12;
extern bool m_bscset13;
extern bool m_bscset14;
extern bool m_bscset15;
extern bool m_bscset21;
extern bool m_bscset22;
extern bool m_bscset23;
extern bool m_bscset24;
extern bool m_bscset25;
extern bool m_bscset31;
extern bool m_bscset32;
extern bool m_bscset33;
extern bool m_bscset34;
extern bool m_bscset35;
extern bool m_bscset41;
extern bool m_bscset42;
extern bool m_bscset43;
extern bool m_bscset44;
extern bool m_bscset45;
extern bool m_bscset51;
extern bool m_bscset52;

//extern bool scflag11;
//extern bool scflag12;
//extern bool scflag13;
//extern bool scflag14;
//extern bool scflag15;
//extern bool scflag21;
//extern bool scflag22;
//extern bool scflag23;
//extern bool scflag24;
//extern bool scflag25;
//extern bool scflag31;
//extern bool scflag32;
//extern bool scflag33;
//extern bool scflag34;
//extern bool scflag35;
//extern bool scflag41;
//extern bool scflag42;
//extern bool scflag43;
//extern bool scflag44;
//extern bool scflag45;
//extern bool scflag51;
//extern bool scflag52;

extern QString parameter_setting_text;
//extern int 蓄电池_error;
//extern int 门1_error;
//extern int 门2_error;
extern int today;
extern int yesterday;
extern int atc3_color;
extern int atc4_color;
extern int voltage_color;
extern int terminus;
extern QString DestStation;
extern QString CurrentStation;
extern QString NextStation;
extern int CompressorStarted1;
extern int CompressorStarted2;
extern int CompressorStarted3;
extern int CompressorStarted4;
extern qreal MainAir_cylinder_pressure1;
extern qreal MainAir_cylinder_pressure2;
extern qreal MainAir_cylinder_pressure3;
extern qreal MainAir_cylinder_pressure4;
extern qreal Brake_cylinder_pressure1;
extern qreal Brake_cylinder_pressure2;
extern qreal Brake_cylinder_pressure3;
extern qreal Brake_cylinder_pressure4;
extern qreal Brake_cylinder_pressure1_test;
extern qreal Brake_cylinder_pressure2_test;
extern qreal Brake_cylinder_pressure3_test;
extern qreal Brake_cylinder_pressure4_test;
extern int ABSpeed1;
extern int ABSpeed2;
extern int ABSpeed3;
extern int ABSpeed4;
extern int TCU1LoadPWM;
extern int TCU2LoadPWM;
extern int FDBK1PWM;
extern int FDBK2PWM;
extern qreal Brake_cylinder_pressure5;
extern qreal Brake_cylinder_pressure6;
extern qreal Brake_cylinder_pressure7;
extern qreal Brake_cylinder_pressure8;
extern qreal Brake_cylinder_pressure9;
extern qreal Brake_cylinder_pressure10;
extern qreal Brake_cylinder_pressure11;
extern qreal Brake_cylinder_pressure12;
extern qreal Brake_cylinder_pressure13;
extern qreal Brake_cylinder_pressure14;
extern qreal Brake_cylinder_pressure15;
extern qreal Brake_cylinder_pressure16;
extern int TempPassengerCar1;
extern int TempPassengerCar2;
extern int TempPassengerCar3;
extern int TempPassengerCar4;
extern int TempPassengerCar5;
extern int TempPassengerCar6;
extern int TempPassengerCar7;
extern int TempPassengerCar8;
extern qreal LoadCapacity1;
extern qreal LoadCapacity2;
extern qreal LoadCapacity3;
extern qreal LoadCapacity4;
extern int car1_door9;
extern int car1_door10;
extern int car1_door1;
extern int car1_door2;
extern int car1_door3;
extern int car1_door4;
extern int car1_door5;
extern int car1_door6;
extern int car1_door7;
extern int car1_door8;
extern int car2_door1;
extern int car2_door2;
extern int car2_door3;
extern int car2_door4;
extern int car2_door5;
extern int car2_door6;
extern int car2_door7;
extern int car2_door8;
extern int car3_door1;
extern int car3_door2;
extern int car3_door3;
extern int car3_door4;
extern int car3_door5;
extern int car3_door6;
extern int car3_door7;
extern int car3_door8;
extern int car4_door1;
extern int car4_door2;
extern int car4_door3;
extern int car4_door4;
extern int car4_door5;
extern int car4_door6;
extern int car4_door7;
extern int car4_door8;
extern int car5_door1;
extern int car5_door2;
extern int car5_door3;
extern int car5_door4;
extern int car5_door5;
extern int car5_door6;
extern int car5_door7;
extern int car5_door8;
extern int car6_door1;
extern int car6_door2;
extern int car6_door3;
extern int car6_door4;
extern int car6_door5;
extern int car6_door6;
extern int car6_door7;
extern int car6_door8;
extern int car7_door1;
extern int car7_door2;
extern int car7_door3;
extern int car7_door4;
extern int car7_door5;
extern int car7_door6;
extern int car7_door7;
extern int car7_door8;
extern int car8_door1;
extern int car8_door2;
extern int car8_door3;
extern int car8_door4;
extern int car8_door5;
extern int car8_door6;
extern int car8_door7;
extern int car8_door8;
extern int car8_door9;
extern int car8_door10;

extern qreal BogieASP1;
extern qreal BogieASP2;
extern qreal BogieASP3;
extern qreal BogieASP4;
extern qreal BogieASP5;
extern qreal BogieASP6;
extern qreal BogieASP7;
extern qreal BogieASP8;
//extern int BogieASP1;
//extern int BogieASP2;
//extern int BogieASP3;
//extern int BogieASP4;
//extern int BogieASP5;
//extern int BogieASP6;
//extern int BogieASP7;
//extern int BogieASP8;
extern qreal BogieASP9;
extern qreal BogieASP10;
extern qreal BogieASP11;
extern qreal BogieASP12;
extern qreal BogieASP13;
extern qreal BogieASP14;
extern qreal BogieASP15;
extern qreal BogieASP16;
extern QString ATC_status;
extern int station_start;
extern int station_end;
extern int station_current;
extern int station_next;
extern QString station_start_display;
extern QString station_end_display;
extern QString station_current_display;
extern QString station_next_display;
extern QString station_start_ccu;
extern QString station_end_ccu;
extern QString station_current_ccu;
extern QString station_next_ccu;
extern int command_valid_timer;
extern int station_setting4_temp;
extern int TCU1_status;
extern int TCU2_status;
extern int TCU3_status;
extern int TCU4_status;
extern int TCU5_status;
extern int TCU6_status;
extern int HSCB_color1;
extern int HSCB_color2;
extern int HSCB_color3;
extern int HSCB_color4;
extern int HSCB_color5;
extern int HSCB_color6;
extern int K750_color1;
extern int K750_color2;
extern qreal BCU_Mass1;
extern qreal BCU_Mass2;
extern qreal BCU_Mass3;
extern qreal BCU_Mass4;
extern qreal BCU_Mass5;
extern qreal BCU_Mass6;
extern qreal BCU_Mass7;
extern qreal BCU_Mass8;
extern qreal BCU_Mass9;
extern qreal BCU_Mass10;
extern qreal BCU_Mass11;
extern qreal BCU_Mass12;
extern qreal BCU_Mass13;
extern qreal BCU_Mass14;
extern qreal BCU_Mass15;
extern qreal BCU_Mass16;
extern int Traction_brake_select;
extern int ATC10_color;
extern int ATC11_color;
extern int ATC20_color;
extern int ATC21_color;
extern int train_pis1_color;
extern int train_pis2_color;
extern QString IES1_string;
extern int IES1_color;
extern int KIC1_color;
extern int LB11_color;
extern int LB12_color;
extern int LB21_color;
extern int LB22_color;
extern int KCC1_color;
extern int KCC2_color;
extern int KIC2_color;



extern QString IES2_string;
extern QString IES3_string;
extern int KIC3_color;
extern int KIC4_color;
extern int KCC3_color;
extern int KCC4_color;

extern int KIC5_color;
extern int KIC6_color;
extern int KCC5_color;
extern int KCC6_color;
extern QString HVAC_state;
//extern qreal setting_temp;
extern unsigned int setting_temp;
extern qreal che1_indoor_temp;
extern qreal che2_indoor_temp;
extern qreal che3_indoor_temp;
extern qreal che4_indoor_temp;
extern qreal che1_outdoor_temp;
extern qreal che2_outdoor_temp;
extern qreal che3_outdoor_temp;
extern qreal che4_outdoor_temp;
extern qreal che1_setting_temp;
extern qreal che2_setting_temp;
extern qreal che3_setting_temp;
extern qreal che4_setting_temp;
extern qreal che5_setting_temp;
extern qreal che6_setting_temp;
extern qreal che7_setting_temp;
extern qreal che8_setting_temp;
//extern qreal setting_temp2;
extern unsigned int setting_temp2;
extern int charge_current1;
extern int HVAC_valid_timer;
extern int HVAC_valid_timer1;
extern int charge_current2;
extern int HVAC_button_color;
extern int HVAC_valid_mode_timer;
extern int car1_Compressor1;
extern int car1_Compressor2;
extern int car1_Compressor3;
extern int car1_Compressor4;
extern int car2_Compressor1;
extern int car2_Compressor2;
extern int car2_Compressor3;
extern int car2_Compressor4;
extern int car3_Compressor1;
extern int car3_Compressor2;
extern int car3_Compressor3;
extern int car3_Compressor4;
extern int car4_Compressor1;
extern int car4_Compressor2;
extern int car4_Compressor3;
extern int car4_Compressor4;
extern int car5_Compressor1;
extern int car5_Compressor2;
extern int car5_Compressor3;
extern int car5_Compressor4;
extern int car6_Compressor1;
extern int car6_Compressor2;
extern int car6_Compressor3;
extern int car6_Compressor4;
extern int car7_Compressor1;
extern int car7_Compressor2;
extern int car7_Compressor3;
extern int car7_Compressor4;
extern int car8_Compressor1;
extern int car8_Compressor2;
extern int car8_Compressor3;
extern int car8_Compressor4;
extern int car1_Condenser1;
extern int car1_Condenser2;
extern int car1_Condenser3;
extern int car1_Condenser4;
extern int car2_Condenser1;
extern int car2_Condenser2;
extern int car2_Condenser3;
extern int car2_Condenser4;
extern int car3_Condenser1;
extern int car3_Condenser2;
extern int car3_Condenser3;
extern int car3_Condenser4;
extern int car4_Condenser1;
extern int car4_Condenser2;
extern int car4_Condenser3;
extern int car4_Condenser4;
extern int car5_Condenser1;
extern int car5_Condenser2;
extern int car5_Condenser3;
extern int car5_Condenser4;
extern int car6_Condenser1;
extern int car6_Condenser2;
extern int car6_Condenser3;
extern int car6_Condenser4;
extern int car7_Condenser1;
extern int car7_Condenser2;
extern int car7_Condenser3;
extern int car7_Condenser4;
extern int car8_Condenser1;
extern int car8_Condenser2;
extern int car8_Condenser3;
extern int car8_Condenser4;
extern int car1_EvaporatorFan1;
extern int car1_EvaporatorFan2;
extern int car1_EvaporatorFan3;
extern int car1_EvaporatorFan4;
extern int car2_EvaporatorFan1;
extern int car2_EvaporatorFan2;
extern int car2_EvaporatorFan3;
extern int car2_EvaporatorFan4;
extern int car3_EvaporatorFan1;
extern int car3_EvaporatorFan2;
extern int car3_EvaporatorFan3;
extern int car3_EvaporatorFan4;
extern int car4_EvaporatorFan1;
extern int car4_EvaporatorFan2;
extern int car4_EvaporatorFan3;
extern int car4_EvaporatorFan4;
extern int car5_EvaporatorFan1;
extern int car5_EvaporatorFan2;
extern int car5_EvaporatorFan3;
extern int car5_EvaporatorFan4;
extern int car6_EvaporatorFan1;
extern int car6_EvaporatorFan2;
extern int car6_EvaporatorFan3;
extern int car6_EvaporatorFan4;
extern int car7_EvaporatorFan1;
extern int car7_EvaporatorFan2;
extern int car7_EvaporatorFan3;
extern int car7_EvaporatorFan4;
extern int car8_EvaporatorFan1;
extern int car8_EvaporatorFan2;
extern int car8_EvaporatorFan3;
extern int car8_EvaporatorFan4;

extern int car1_Preheater1;
extern int car1_Preheater2;
extern int car1_Preheater3;
extern int car1_Preheater4;
extern int car2_Preheater1;
extern int car2_Preheater2;
extern int car2_Preheater3;
extern int car2_Preheater4;
extern int car3_Preheater1;
extern int car3_Preheater2;
extern int car3_Preheater3;
extern int car3_Preheater4;
extern int car4_Preheater1;
extern int car4_Preheater2;
extern int car4_Preheater3;
extern int car4_Preheater4;

extern int car1_HotElectricity1;
extern int car1_HotElectricity2;
extern int car1_HotElectricity3;
extern int car1_HotElectricity4;
extern int car2_HotElectricity1;
extern int car2_HotElectricity2;
extern int car2_HotElectricity3;
extern int car2_HotElectricity4;
extern int car3_HotElectricity1;
extern int car3_HotElectricity2;
extern int car3_HotElectricity3;
extern int car3_HotElectricity4;
extern int car4_HotElectricity1;
extern int car4_HotElectricity2;
extern int car4_HotElectricity3;
extern int car4_HotElectricity4;
extern int car5_HotElectricity1;
extern int car5_HotElectricity2;
extern int car5_HotElectricity3;
extern int car5_HotElectricity4;
extern int car6_HotElectricity1;
extern int car6_HotElectricity2;
extern int car6_HotElectricity3;
extern int car6_HotElectricity4;
extern int car7_HotElectricity1;
extern int car7_HotElectricity2;
extern int car7_HotElectricity3;
extern int car7_HotElectricity4;
extern int car8_HotElectricity1;
extern int car8_HotElectricity2;
extern int car8_HotElectricity3;
extern int car8_HotElectricity4;

extern int car1_NewWind1;
extern int car1_NewWind2;
extern int car2_NewWind1;
extern int car2_NewWind2;
extern int car3_NewWind1;
extern int car3_NewWind2;
extern int car4_NewWind1;
extern int car4_NewWind2;
extern int car5_NewWind1;
extern int car5_NewWind2;
extern int car6_NewWind1;
extern int car6_NewWind2;
extern int car7_NewWind1;
extern int car7_NewWind2;
extern int car8_NewWind1;
extern int car8_NewWind2;
extern QString HVAC_mode1;
extern QString HVAC_mode2;
extern QString HVAC_mode3;
extern QString HVAC_mode4;
extern QString HVAC_mode5;
extern QString HVAC_mode6;
extern QString HVAC_mode7;
extern QString HVAC_mode8;
extern QString HVAC_RUNmode1;
extern QString HVAC_RUNmode2;
extern QString HVAC_RUNmode3;
extern QString HVAC_RUNmode4;
extern QString HVAC_RUNmode5;
extern QString HVAC_RUNmode6;
extern QString HVAC_RUNmode7;
extern QString HVAC_RUNmode8;
extern QString HVAC_RUNmodefeedback1;
extern QString ACStart1;
extern QString ACStart2;
extern QString ACStart3;
extern QString ACStart4;
extern WORD HMI_send_data1;
extern WORD HMI_send_data2;
extern WORD HMI_send_data3;
extern WORD HMI_send_data4;
extern WORD HMI_send_data5;
extern WORD HMI_send_data6;
extern WORD HMI_send_data7;
extern WORD HMI_send_data8;
extern WORD HMI_send_data9;
extern WORD HMI_send_data10;
extern WORD HMI_send_data11;
extern WORD HMI_send_data12;
extern WORD HMI_send_data13;
extern WORD HMI_send_data14;
extern WORD HMI_send_data15;
extern WORD HMI_send_data16;
extern WORD HMI_send_data17;
extern WORD HMI_send_data18;
extern WORD HMI_send_data19;
extern WORD HMI_send_data20;
extern WORD HMI_send_data21;
extern WORD HMI_send_data22;
extern WORD HMI_send_data23;
extern WORD HMI_send_data24;
extern WORD HMI_send_data25;
extern WORD HMI_send_data26;
extern WORD HMI_send_data27;
extern WORD HMI_send_data28;
extern WORD HMI_send_data29;
extern WORD HMI_send_data30;
extern WORD HMI_send_data31;
extern WORD HMI_send_data32;
extern WORD HMI_send_data33;
extern WORD HMI_send_data34;
extern WORD HMI_send_data35;
extern WORD HMI_send_data36;
extern WORD HMI_send_data37;
extern WORD HMI_send_data38;
extern WORD HMI_send_data39;
extern WORD HMI_send_data40;
extern WORD HMI_send_data41;
extern WORD HMI_send_data42;
extern WORD HMI_send_data43;
extern WORD HMI_send_data44;
extern WORD HMI_send_data45;
extern WORD HMI_send_data46;
extern WORD HMI_send_data47;
extern WORD HMI_send_data48;
extern WORD HMI_send_data49;
extern WORD HMI_send_data50;
extern WORD HMI_send_data51;
extern WORD HMI_send_data52;
extern WORD HMI_send_data53;
extern WORD HMI_send_data54;
extern WORD HMI_send_data55;
extern WORD HMI_send_data56;
extern WORD HMI_send_data57;
extern WORD HMI_send_data58;
extern WORD HMI_send_data59;
extern WORD HMI_send_data60;
extern WORD HMI_send_data61;
extern WORD HMI_send_data62;
extern WORD HMI_send_data63;
extern WORD HMI_send_data64;





extern int parameter_wheeldia;
extern QString parameter_setting_temp;

extern QString lowerPressT1;
extern QString lowerPressT2;
extern QString lowerPressT3;
extern QString lowerPressT4;
extern QString lowerPressT5;
extern QString lowerPressT6;
extern QString highPressT1;
extern QString highPressT2;
extern QString highPressT3;
extern QString highPressT4;
extern QString highPressT5;
extern QString highPressT6;
extern int timer_4s;
extern int HMI1_active;
extern int HMI2_active;
extern int error_test44;
extern int error_test45;
extern int error_test46;
extern int HVAC_command_hide;
extern int net_new_error;
extern int Station_setting_button;
extern int TCU_test_color1;
extern int TCU_test_color2;
extern QString software_version1;
extern QString software_version2;
extern QString software_version3;
extern QString software_version4;
extern QString software_version5;
extern QString software_version6;
extern QString ACU_test_string1;
extern QString ACU_test_string2;
extern QString ACU_test_string3;
extern QString ACU_test_string4;
extern int BCU_test_counter;
extern int BCU_test_timer;
extern QString BCU_test_hint_string;

extern int BCU_Brake1_pwm ;
extern int BCU_Brake2_pwm ;
extern int BCU_Brake3_pwm ;
extern int BCU_Brake4_pwm ;
extern int BCU_Brake5_pwm ;
extern int BCU_Brake6_pwm ;
extern int BCU_Brake7_pwm ;
extern int BCU_Brake8_pwm ;
extern int BCU_Brake9_pwm ;
extern int BCU_Brake10_pwm ;
extern qreal Brake1_cylinder_pressure1;
extern qreal Brake1_cylinder_pressure2;
extern qreal Brake1_cylinder_pressure3;
extern qreal Brake1_cylinder_pressure4;
extern qreal Brake1_cylinder_pressure5;
extern qreal Brake1_cylinder_pressure6;
extern qreal Brake1_cylinder_pressure7;
extern qreal Brake1_cylinder_pressure8;
extern qreal Brake1_cylinder_pressure9;
extern qreal Brake1_cylinder_pressure10;
extern qreal Brake1_cylinder_pressure11;
extern qreal Brake1_cylinder_pressure12;

extern qreal Brake2_cylinder_pressure1;
extern qreal Brake2_cylinder_pressure2;
extern qreal Brake2_cylinder_pressure3;
extern qreal Brake2_cylinder_pressure4;
extern qreal Brake2_cylinder_pressure5;
extern qreal Brake2_cylinder_pressure6;
extern qreal Brake2_cylinder_pressure7;
extern qreal Brake2_cylinder_pressure8;
extern qreal Brake2_cylinder_pressure9;
extern qreal Brake2_cylinder_pressure10;
extern qreal Brake2_cylinder_pressure11;
extern qreal Brake2_cylinder_pressure12;

extern qreal Brake3_cylinder_pressure1;
extern qreal Brake3_cylinder_pressure2;
extern qreal Brake3_cylinder_pressure3;
extern qreal Brake3_cylinder_pressure4;
extern qreal Brake3_cylinder_pressure5;
extern qreal Brake3_cylinder_pressure6;
extern qreal Brake3_cylinder_pressure7;
extern qreal Brake3_cylinder_pressure8;
extern qreal Brake3_cylinder_pressure9;
extern qreal Brake3_cylinder_pressure10;
extern qreal Brake3_cylinder_pressure11;
extern qreal Brake3_cylinder_pressure12;

extern qreal Brake4_cylinder_pressure1;
extern qreal Brake4_cylinder_pressure2;
extern qreal Brake4_cylinder_pressure3;
extern qreal Brake4_cylinder_pressure4;
extern qreal Brake4_cylinder_pressure5;
extern qreal Brake4_cylinder_pressure6;
extern qreal Brake4_cylinder_pressure7;
extern qreal Brake4_cylinder_pressure8;
extern qreal Brake4_cylinder_pressure9;
extern qreal Brake4_cylinder_pressure10;
extern qreal Brake4_cylinder_pressure11;
extern qreal Brake4_cylinder_pressure12;

extern qreal Brake5_cylinder_pressure1;
extern qreal Brake5_cylinder_pressure2;
extern qreal Brake5_cylinder_pressure3;
extern qreal Brake5_cylinder_pressure4;
extern qreal Brake5_cylinder_pressure5;
extern qreal Brake5_cylinder_pressure6;
extern qreal Brake5_cylinder_pressure7;
extern qreal Brake5_cylinder_pressure8;
extern qreal Brake5_cylinder_pressure9;
extern qreal Brake5_cylinder_pressure10;
extern qreal Brake5_cylinder_pressure11;
extern qreal Brake5_cylinder_pressure12;

extern qreal Brake6_cylinder_pressure1;
extern qreal Brake6_cylinder_pressure2;
extern qreal Brake6_cylinder_pressure3;
extern qreal Brake6_cylinder_pressure4;
extern qreal Brake6_cylinder_pressure5;
extern qreal Brake6_cylinder_pressure6;
extern qreal Brake6_cylinder_pressure7;
extern qreal Brake6_cylinder_pressure8;
extern qreal Brake6_cylinder_pressure9;
extern qreal Brake6_cylinder_pressure10;
extern qreal Brake6_cylinder_pressure11;
extern qreal Brake6_cylinder_pressure12;

extern qreal Brake7_cylinder_pressure1;
extern qreal Brake7_cylinder_pressure2;
extern qreal Brake7_cylinder_pressure3;
extern qreal Brake7_cylinder_pressure4;
extern qreal Brake7_cylinder_pressure5;
extern qreal Brake7_cylinder_pressure6;
extern qreal Brake7_cylinder_pressure7;
extern qreal Brake7_cylinder_pressure8;
extern qreal Brake7_cylinder_pressure9;
extern qreal Brake7_cylinder_pressure10;
extern qreal Brake7_cylinder_pressure11;
extern qreal Brake7_cylinder_pressure12;

extern qreal Brake8_cylinder_pressure1;
extern qreal Brake8_cylinder_pressure2;
extern qreal Brake8_cylinder_pressure3;
extern qreal Brake8_cylinder_pressure4;
extern qreal Brake8_cylinder_pressure5;
extern qreal Brake8_cylinder_pressure6;
extern qreal Brake8_cylinder_pressure7;
extern qreal Brake8_cylinder_pressure8;
extern qreal Brake8_cylinder_pressure9;
extern qreal Brake8_cylinder_pressure10;
extern qreal Brake8_cylinder_pressure11;
extern qreal Brake8_cylinder_pressure12;

extern qreal Brake9_cylinder_pressure1;
extern qreal Brake9_cylinder_pressure2;
extern qreal Brake9_cylinder_pressure3;
extern qreal Brake9_cylinder_pressure4;
extern qreal Brake9_cylinder_pressure5;
extern qreal Brake9_cylinder_pressure6;
extern qreal Brake9_cylinder_pressure7;
extern qreal Brake9_cylinder_pressure8;
extern qreal Brake9_cylinder_pressure9;
extern qreal Brake9_cylinder_pressure10;
extern qreal Brake9_cylinder_pressure11;
extern qreal Brake9_cylinder_pressure12;
extern qreal Brake1_cylinder_pressure13;
extern qreal Brake1_cylinder_pressure14;
extern qreal Brake1_cylinder_pressure15;
extern qreal Brake1_cylinder_pressure16;
extern qreal Brake2_cylinder_pressure13;
extern qreal Brake2_cylinder_pressure14;
extern qreal Brake2_cylinder_pressure15;
extern qreal Brake2_cylinder_pressure16;
extern qreal Brake3_cylinder_pressure13;
extern qreal Brake3_cylinder_pressure14;
extern qreal Brake3_cylinder_pressure15;
extern qreal Brake3_cylinder_pressure16;
extern qreal Brake4_cylinder_pressure13;
extern qreal Brake4_cylinder_pressure14;
extern qreal Brake4_cylinder_pressure15;
extern qreal Brake4_cylinder_pressure16;
extern qreal Brake5_cylinder_pressure13;
extern qreal Brake5_cylinder_pressure14;
extern qreal Brake5_cylinder_pressure15;
extern qreal Brake5_cylinder_pressure16;
extern qreal Brake6_cylinder_pressure13;
extern qreal Brake6_cylinder_pressure14;
extern qreal Brake6_cylinder_pressure15;
extern qreal Brake6_cylinder_pressure16;
extern qreal Brake7_cylinder_pressure13;
extern qreal Brake7_cylinder_pressure14;
extern qreal Brake7_cylinder_pressure15;
extern qreal Brake7_cylinder_pressure16;
extern qreal Brake8_cylinder_pressure13;
extern qreal Brake8_cylinder_pressure14;
extern qreal Brake8_cylinder_pressure15;
extern qreal Brake8_cylinder_pressure16;
extern qreal Brake9_cylinder_pressure13;
extern qreal Brake9_cylinder_pressure14;
extern qreal Brake9_cylinder_pressure15;
extern qreal Brake9_cylinder_pressure16;
extern int BCU_test_color1;
extern int BCU_test_color2;
extern int BCU_test_color3;
extern int BCU_test_color4;
extern int BCU_test_color5;
extern int BCU_test_color6;
extern int BCU_test_color7;
extern int BCU_test_color8;
extern int BCU_test_color9;
extern QString BCU_selftest_string1;
extern QString BCU_selftest_string2;
extern QString BCU_selftest_string3;
extern QString BCU_selftest_string4;
extern QString ANTISKID_selftest_string1;
extern QString ANTISKID_selftest_string2;
extern QString ANTISKID_selftest_string3;
extern QString ANTISKID_selftest_string4;
extern QString TCU_test_string1;
extern QString TCU_test_string2;
extern int prameter_setting_button;
extern int prameter_setting_timer;
extern int BCU_test_record;
extern int BCU_test_temp;
extern int BCU_selftest_color1;
extern int BCU_selftest_color2;
extern int BCU_selftest_color3;
extern int BCU_selftest_color4;
extern int ANTISKID_selftest_color1;
extern int ANTISKID_selftest_color2;
extern int ANTISKID_selftest_color3;
extern int ANTISKID_selftest_color4;
//extern int TCU_test_color1;
//extern int TCU_test_color2;
extern int HighPress_Test;
extern int LowerPress_Test;
extern int LowerPress_Test1;
extern int HighPress_Test1;
extern int ACU_test_timer;
extern int FAS_button_timer;
extern int TCU_test_timer1;
extern int TCU_test_timer2;
extern int VVVF_valid_timer;
extern int EBC_valid_timer;
extern WORD TCU_test_ok;

extern int TCU_test_temp13;
extern int TCU_test_temp14;
extern int TCU_test_temp15;
extern int TCU_test_temp16;
extern int TCU_test_temp17;
extern int TCU_test_temp18;
extern int TCU_test_signal13;
extern int TCU_test_signal14;
extern int TCU_test_signal15;
extern int TCU_test_signal16;
extern int TCU_test_signal17;
extern int TCU_test_signal18;

extern int TCU_test_error1;
extern int TCU_test_error2;
extern int TCU_test_error3;
extern int TCU_test_error4;
extern int TCU_test_error5;
extern int TCU_test_error6;
extern int TCU_test_error7;
extern int TCU_test_error8;
extern int TCU_test_error9;
extern int TCU_test_error10;
extern int TCU_test_error11;
extern int TCU_test_error12;
extern int arrive_final_station;
extern int bcu_selftest_temp;
extern int bcu_selftest_signal;
extern int bcu_selftest_temp2;
extern int bcu_selftest_signal2;
extern int bcu_selftest_temp3;
extern int bcu_selftest_signal3;
extern int bcu_selftest_temp4;
extern int bcu_selftest_signal4;
extern int TCU_test_display1;
extern int TCU_test_display2;
extern int carnum_prompt;
extern int prameter_setting_temp;
extern int parameter_setting_new;
extern QString write_parameter1;
extern QString write_parameter2;
extern QString write_parameter3;
extern QString write_parameter4;
extern QString write_parameter5;
extern QString write_parameter6;
extern int car1_axle1_num;
extern int car1_axle2_num;
extern int car1_axle3_num;
extern int car1_axle4_num;
extern int car2_axle1_num;
extern int car3_axle1_num;
extern int car4_axle1_num;
extern int car5_axle1_num;
extern int car6_axle1_num;
extern int car6_axle2_num;
extern int car6_axle3_num;
extern int car6_axle4_num;
extern int axle_record_num;
extern int axle_record_temp;
extern int axle_record_signal;
extern int axle_record_test_num;
extern QString pw_new1;
extern QString pw_new2;
extern QString pw_display_new1;
extern QString pw_display_new2;
extern int pw_setting_color;
extern QString pw_old;
extern QString pw_display_old;
extern WORD hmi_485_error;
extern int car1_GW1;
extern int car1_GW2;
extern int car2_GW1;
extern int car2_GW2;
extern int car3_GW1;
extern int car3_GW2;
extern int car4_GW1;
extern int car4_GW2;
extern int car5_GW1;
extern int car5_GW2;
extern int car6_GW1;
extern int car6_GW2;
extern int car7_GW1;
extern int car7_GW2;
extern int car8_GW1;
extern int car8_GW2;
//extern int 实时未确认故障数;
//extern int 模拟测试;
//extern int 未确认故障提示显示;
extern int error_code_temp75;
extern int error_code_temp76;
extern int error_code_temp77;
extern int error_code_temp78;
extern int error_code_temp79;
extern int error_code_temp80;
extern int error_code_temp81;
extern int error_code_temp82;
extern int error_code_temp83;
extern int error_code_temp84;
extern int error_code_temp85;
extern int error_code_temp86;
extern int error_code_temp87;
extern int error_code_temp88;
extern int error_code_temp89;
extern int error_code_temp90;
extern int error_code_temp91;
extern int error_code_temp92;
extern int error_code_temp93;
extern int error_code_temp94;
extern int error_code_temp95;
extern int error_code_temp96;
extern int error_code_temp97;
extern int error_code_temp98;
extern int error_code_temp99;
extern int error_code_temp100;
extern int hvac_test_44;
//extern int 零速旁路状态1;
//extern int 零速旁路状态2;
//extern int 门旁路状态1;
//extern int 门旁路状态2;
//extern int 停放制动旁路状态1;
//extern int 停放制动旁路状态2;
//extern int 常用制动旁路状态1;
//extern int 常用制动旁路状态2;
//extern int 总风压低旁路状态1;
//extern int 总风压低旁路状态2;
extern int error_list2;
extern int station_start_temp;
extern int station_end_temp;
extern int CAB_error1;
//extern int 后台页面_num;
extern QString ACU__version1;
extern QString ACU__version2;
extern QString ACU_GW__version1;
extern QString ACU_GW__version2;
extern QString BCU__version1;
extern QString BCU__version2;
extern QString BCU__version3;
extern QString BCU__version4;
extern QString TCU__version1;
extern QString TCU__version2;
extern QString TCU_GW__version1;
extern QString TCU_GW__version2;
extern QString TCU__version3;
extern QString TCU__version4;
extern QString TCU__version5;
extern QString TCU__version6;

extern QString ATC__version1;
extern QString ATC__version2;
extern QString ATC__version3;
extern QString ATC__version4;
extern QString PIS_PA_version1;
extern QString PIS_PA_version2;
extern QString PIS_DB_version1;
extern QString PIS_DB_version2;
extern QString PIS_TV_version1;
extern QString PIS_TV_version2;

extern QString FAS_version1;
extern QString FAS_version2;

extern QString Door_GW_Version1;
extern QString Door_GW_Version2;
extern QString Door_GW_Version3;
extern QString Door_GW_Version4;
extern QString Door_GW_Version5;
extern QString Door_GW_Version6;
extern QString Door_GW_Version7;
extern QString Door_GW_Version8;

extern QString Door_Ctr_Version1;
extern QString Door_Ctr_Version2;
extern QString Door_Ctr_Version3;
extern QString Door_Ctr_Version4;
extern QString Door_Ctr_Version5;
extern QString Door_Ctr_Version6;
extern QString Door_Ctr_Version7;
extern QString Door_Ctr_Version8;

extern QString HVAC_Versino1;
extern QString HVAC_Versino2;
extern QString HVAC_Versino3;
extern QString HVAC_Versino4;
extern QString HVAC_Versino5;
extern QString HVAC_Versino6;
extern QString HVAC_Versino7;
extern QString HVAC_Versino8;

extern QString HVAC_GW_Versino1;
extern QString HVAC_GW_Versino2;
extern QString HVAC_GW_Versino3;
extern QString HVAC_GW_Versino4;
extern QString HVAC_GW_Versino5;
extern QString HVAC_GW_Versino6;
extern QString HVAC_GW_Versino7;
extern QString HVAC_GW_Versino8;
extern QString CCU_version;
extern QString CCU_version2;
extern QString ERM_version;
extern QString DCCU_version;
extern QString DCCU_version2;
extern QString IO_GW_version1;
extern QString IO_GW_version2;
extern QString IO_GW_version3;
extern QString IO_GW_version4;
extern QString IO_GW_version5;
extern QString IO_GW_version6;
extern QString PIS_ST_version1;
extern QString PIS_ST_version2;
extern QString HMI_version1;
extern QString HMI_version2;
extern QString HMI_GW_version1;
extern QString HMI_GW_version2;
extern int16_t webflow;
extern int HMI_send_version1;
extern int HMI_send_version2;
extern int ACU_status1;
extern int ACU_status2;
//extern int 时间设置长度;
extern int car1_axle1_num1;
//extern int 屏蔽故障;
//extern int 屏蔽所有故障;
//extern int 点击次数;
extern int BCU_CAN1;
extern int BCU_CAN2;
extern int test_file_num1;
extern WORD HMI_send_data_temp2;
extern WORD HMI_send_data_temp3;
extern WORD HMI_send_data_temp4;
extern WORD HMI_send_data_temp5;
extern WORD HMI_send_data_temp6;
extern WORD HMI_send_data_temp7;
extern WORD HMI_send_data_temp8;
extern WORD HMI_send_data_temp9;
extern WORD HMI_send_data_temp10;
extern WORD HMI_send_data_temp11;
extern WORD HMI_send_data_temp12;
extern WORD HMI_send_data_temp13;
extern WORD HMI_send_data_temp14;
extern WORD HMI_send_data_temp15;
extern WORD HMI_send_data_temp1;
extern WORD p_set_signal;
extern int timer_10s;
extern int comm_status_data_temp1;
extern int MVB_comm_error;
extern QString net_mode;
//extern int pageback;
extern int car1_HVAC_error1;
extern int car1_HVAC_error2;
extern int car1_HVAC_error3;
extern int car1_HVAC_error4;
extern int car2_HVAC_error1;
extern int car2_HVAC_error2;
extern int car2_HVAC_error3;
extern int car2_HVAC_error4;
extern int car3_HVAC_error1;
extern int car3_HVAC_error2;
extern int car3_HVAC_error3;
extern int car3_HVAC_error4;
extern int car4_HVAC_error1;
extern int car4_HVAC_error2;
extern int car4_HVAC_error3;
extern int car4_HVAC_error4;
extern int car5_HVAC_error1;
extern int car5_HVAC_error2;
extern int car5_HVAC_error3;
extern int car5_HVAC_error4;
extern int car6_HVAC_error1;
extern int car6_HVAC_error2;
extern int car6_HVAC_error3;
extern int car6_HVAC_error4;
extern int reserve_hide;       //备用_隐藏
extern WORD TC1_HMI;
extern WORD TC2_HMI;

extern WORD TC1_HMI_ini;
extern WORD TC2_HMI_ini;

extern QString logfileName_debug ;
extern QString logfileName_warning ;

extern int error_turnoff_timer;
//门参数设定
extern int door_setting1;
extern int door_setting2;
extern int door_setting3;
extern int door_setting4;
extern int door_setting5;
extern int door_setting6;
extern int door_setting7;
extern int door_setting8;
extern int door_setting9;
extern int door_setting10;
extern int door_setting11;
extern int door_setting12;
extern int door_setting13;


#endif // CGLOBAL_H
