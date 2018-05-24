#ifndef C_PAGE_SIV_TEST_H
#define C_PAGE_SIV_TEST_H



#include "CPage.h"
#include "DataBuffer.h"

#define ID_ACCESSORYSYSTEM_LABEL_VCAR1                         0X0001
#define ID_ACCESSORYSYSTEM_LABEL_VCAR6                         0X0002
#define ID_ACCESSORYSYSTEM_LABEL_ACAR1                         0X0003
#define ID_ACCESSORYSYSTEM_LABEL_ACAR6                         0X0004
#define ID_ACCESSORYSYSTEM_LABEL_RCAR1                         0X0005
#define ID_ACCESSORYSYSTEM_LABEL_RCAR6                         0X0006

#define ID_TRACTSYSTEST_BUTTON_RESET                         0X0009
#define ID_ACCESSORYSYSTEM_TRAIN                              0X000A
#define ID_ACCESSORYSYSTEM_ARROW_RIGHT                        0X000B
#define ID_ACCESSORYSYSTEM_ARROW_LEFT                         0X000C
#define ID_ACCESSORYSYSTEM_V                            0X000D
#define ID_ACCESSORYSYSTEM_A                            0X000E


extern vector<CPage*>  g_PageVec;


class CAccessorySystemTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CAccessorySystemTestPage)
public:
    CAccessorySystemTestPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnLeavePage();

    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif

    void OnResetBtnClk();

    void UpdateVValue();
    void UpdateAValue();
    void UpOutputV();
    void UpOutputA();
    void UpReset();

    void SetStringValue(int id, QString aValue);
    void SetFaultBGColor(int id, int colorVal);
    void SetAcuLabelColor(int id, int colorVal);

private:
    bool m_bReset;
};

#endif // CAccessorySystemTestPage_H

