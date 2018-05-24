#ifndef CTodayFaultPage_H
#define CTodayFaultPage_H

#include "CPage.h"
#define ID_PIBTODAYF_LABEL_FAULTRED         0X0001
#define ID_PIBTODAYF_BUTTON_HISTORYRECORD   0X0002
extern vector<CPage*>  g_PageVec;

class CTodayFaultPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CTodayFaultPage)
public:
    CTodayFaultPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
};

#endif // CTodayFaultPage_H
