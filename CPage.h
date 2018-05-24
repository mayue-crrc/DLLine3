#ifndef CPAGE_H
#define CPAGE_H

#include "ui_dialog.h"
#include <stdio.h>
#include <qpoint.h>
#include "rom.h"
#include "CControlInterface.h"
#include "qdialog.h"
#include <qpixmap.h>
//comon dialog

//control head  file
#include "CButton.h"
#include "CLabel.h"
#include "CEdit.h"
#include "CGlobal.h"
#include "CCircle.h"
#include "CLine.h"
#include "CImageCtrl.h"
#include "CScrollCtrl.h"
#include "CTrainCtrl.h"
#include "CArrowCtrl.h"
#include "ccarriagectrl.h"
#include "ctraindiagramctrl.h"

//page head file

#define PAGE_INDEX_COMMSTATUS                   0
#define PAGE_INDEX_COMMSTATUSHELP               1
#define PAGE_INDEX_MAIN                         2
#define PAGE_INDEX_INITIALSETTING               3
//#define PAGE_INDEX_RESERVESETTING               4
#define PAGE_INDEX_STATIONSETTING               4
//#define PAGE_INDEX_DIRECTIONCONFIRM             6


#define PAGE_INDEX_RUNSTATE                     5
#define PAGE_INDEX_RUNHELP1                     6
#define PAGE_INDEX_RUNHELP2                     7
#define PAGE_INDEX_RUNHELP3                     8
#define PAGE_INDEX_CARSTATUS1                   9
#define PAGE_INDEX_RUNHELP5                     68


#define PAGE_INDEX_CARSTATUS1HELP1              10
#define PAGE_INDEX_CARSTATUS1HELP2              11
#define PAGE_INDEX_CARSTATUS1HELP3              12
#define PAGE_INDEX_CARSTATUS2                   13
#define PAGE_INDEX_CARSTATUSHELP                14

#define PAGE_INDEX_CARSTATUS3                   15
#define PAGE_INDEX_CARSTATUS3HELP               16
#define PAGE_INDEX_FAULT                        17
#define PAGE_INDEX_HVACSETTING                  18
#define PAGE_INDEX_HVACSETTINGHELP              19

#define PAGE_INDEX_MAINTAIN                     20
#define PAGE_INDEX_PARAMETERSETTING1            21
#define PAGE_INDEX_PARAMETERSETTING2            22
#define PAGE_INDEX_WHEELDIARECORD               23
#define PAGE_INDEX_DOORTEST                     24
//#define PAGE_INDEX_DOORTESTHELP                 27

#define PAGE_INDEX_TRACTIONSYSTEMTEST           25
#define PAGE_INDEX_TRACTIONSYSTEMTESTHELP	26
#define PAGE_INDEX_ACCESSORYSYSTEMTEST		27
#define PAGE_INDEX_ACCESSORYSYSTEMTESTHELP	28
#define PAGE_INDEX_BRAKETEST                    29

#define PAGE_INDEX_BRAKETESTHELP		30
#define PAGE_INDEX_BRAKESELFTEST		31
#define PAGE_INDEX_BRAKESELFTESTHELP		32
#define PAGE_INDEX_TODAYFAULT                   33
#define PAGE_INDEX_RUNRECORD            	34

#define PAGE_INDEX_TRYRUNTEST           	35
#define PAGE_INDEX_PASSWORD             	36
#define PAGE_INDEX_RESETRUNRECORD		37
#define PAGE_INDEX_INSTANCYBROADCAST		38
#define PAGE_INDEX_REALTIMEFAULT		39

#define PAGE_INDEX_HISTORYFAULT         	40
#define PAGE_INDEX_TRACTIONSYSTEMFAULT		41
#define PAGE_INDEX_DEBUGMAIN                    42
#define PAGE_INDEX_VERSIONINFO                  43
#define PAGE_INDEX_VIALSIGNAL                   44

#define PAGE_INDEX_RIOMDEBUG                    45
#define PAGE_INDEX_REFRESHTIME                  46
//#define PAGE_INDEX_COMMSTATUSDEBUG		50
#define PAGE_INDEX_PASSWORDMODIFY               47
#define PAGE_INDEX_TIMESETTING                  48
#define PAGE_INDEX_FAULTINFO                    49

#define PAGE_INDEX_WHEELDIARECORDSELECT         50
#define PAGE_INDEX_IOTCTABLE                    51
#define PAGE_INDEX_IOMTABLE                     52
#define PAGE_INDEX_DOTABLE                      53
#define PAGE_INDEX_RUNHELP4                     54

#define PAGE_INDEX_UDPDATA1                     55
//#define PAGE_INDEX_AW0SETTING                   56
#define PAGE_INDEX_FASPage                      56
#define PAGE_INDEX_REFRESHTIME2                 57
#define PAGE_INDEX_FAULTPAGEHELP                58
#define PAGE_INDEX_CARSTATUS4                   59

#define PAGE_INDEX_DOORSETTING                  60
#define PAGE_INDEX_DEBUGINISETTING              61
#define PAGE_INDEX_STATIONCANCEL                62
#define PAGE_INDEX_CARSTATUS4HELP               63
#define PAGE_INDEX_CARSTATUS4HELP1               64

#define PAGE_INDEX_RUNRECORDSETTING               65
#define PAGE_INDEX_LEVELDEBUG               66
#define PAGE_INDEX_HVACDEBUG                  67

//Function:GetDlgItem
//Example:
//if control is type of CButton which id is ID_XXX,you can get CButton pointer like this:
// 1.((CButton*)(GetDlgItem(ID_XXX)))->SetCtrlText("XXX");
// 2. CButton* pButton = (CButton*)(GetDlgItem(ID_XXX));
//    pButton->SetCtrlText("XXX");

//class cpage declear

class CPage
{
public:
    CPage();
    virtual ~CPage();
    typedef map<int,CControlInterface*> CONTROLMAP;
    typedef pair<int,CControlInterface*> CONTROLPAIR;

public:
    void InitPage(__in int nWidth,__in int nHeight, __in int nPageIndex, __in QDialog* pParent);
    QPixmap* GetPixmap(){return m_pixmap;}
    QPainter* GetPainter(){return &m_painter;}
    QDialog* GetParentDlg(){return m_pDlg;}
    void DrawByRom(ROMINFO pRomInfo);
    int GetPageIndex(){return m_nPageIndex;}
    void Update(){m_pDlg->update();}

    // control interface
    void AddControl(__in QString ctrl_str, __in QRect ctrl_rc,__in QColor ctrl_txtcolor,
                    __in QFont ctrln_font,__in QColor ctrln_bkcolor,__in int ctrl_id,__in int ctrl_type);
    void RemoveControl(__in int ctrl_id);
    bool TestControlExists(__in int ctrl_id);
    CControlInterface* GetDlgItem(__in int ctrl_id);
    void ChangePage(__in int PageIndex);
    CPage* GetPage(__in int PageIndex);
    void ResetButtonState();
    void UpdateTractionLevel(int id);
    void SetAValue(int id, int16_t aValue);
  //  void UpdateTractionLevel(int id);
    void UpdateVoltage(int id);
    void UpdateStation();
    void UpdateCarSpeedMode(int id);
    void updateFault(int nFaultID);
    void UpdateWarning(int nTrainID);
    void InitPageHeader();



    virtual void InitMsgList()=0;
    virtual void ConnectEvent(__in int nMsg)=0;
    virtual void ConnectEvent(__in QPoint pt,__in int nMsg)=0;
    virtual void OnShowPage(){}
    virtual void OnLeavePage(){}

protected:
    virtual void OnInitPage(){}
    virtual void OnUpdatePage(){}
    virtual void OnMouseMove(){}
    virtual void OnLButtonDown(){}
    virtual void OnLButtonUp(){}

protected:
    void OnTitleCLK();
    void OnRealTimeFaultsWarnningIconClk_new();
    //common function.
    void SetVoltageLabelColor(int id, int colorVal);
    void SetVoltageFontColor(int id, int colorVal);
    void SetTractionBrakeLabelColor(int id, int colorVal);
    void SetTractionBrakeFontColor(int id, int colorVal);
    void SetVoltageValue(int id, int aValue);
    void SetStation(int id, QString station);

   // void SetAValue(int id, int aValue);
  //  void UpdateTractionLevel(int id);
  //  void UpdateVoltage(int id);
    void updateTrain(int nTrainID);
    void updateArrow(int nLeftArrowID,int nRightArrowID);

    void updateErrorLine(int nTrainID);

    void UpdateCommInterrupt(int nInteruptID);



private:
    void  InitCommonLabel(__in int nID,__in int nType);

protected:
    QPainter        m_painter;
    //QPainter* m_pPainter;
    QPixmap*        m_pixmap;
    int             m_nWidth;
    int             m_nHeight;
    int             m_nPageIndex;
    CONTROLMAP      m_ctrlmap;
    QDialog*        m_pDlg;
};

#endif // CPAGE_H
