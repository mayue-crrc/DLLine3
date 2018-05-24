#ifndef CCOMMSTATUS3PAGE_H
#define CCOMMSTATUS3PAGE_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define   ID_PIBCS3_BUTTON_QUIT                         0x0001
#define   ID_PIBCS3_LABEL_HW001DATA                     0X0002
#define   ID_PIBCS3_LABEL_HWORD2DATA                    0X0003
#define   ID_PIBCS3_LABEL_HWORD3DATA                    0X0004
#define   ID_PIBCS3_LABEL_HWORD4DATA                    0X0005
#define   ID_PIBCS3_LABEL_HWORD5DATA                    0X0006
#define   ID_PIBCS3_LABEL_HWORD6DATA                    0X0007
#define   ID_PIBCS3_LABEL_HWORD7DATA                    0X0008
#define   ID_PIBCS3_LABEL_HWORD8DATA                    0X0009
#define   ID_PIBCS3_LABEL_HWORD9DATA                    0X000A
#define   ID_PIBCS3_LABEL_HWORD10DATA                   0X000B
#define   ID_PIBCS3_LABEL_HWORD11DATA                   0X000C
#define   ID_PIBCS3_LABEL_HWORD12DATA                   0X000D
#define   ID_PIBCS3_LABEL_HWORD13DATA                   0X000E
#define   ID_PIBCS3_LABEL_HWORD14DATA                   0X000F
#define   ID_PIBCS3_LABEL_HWORD15DATA                   0X0010
#define   ID_PIBCS3_LABEL_HWORD16DATA                   0X0011
#define   ID_PIBCS3_LABEL_HWORD17DATA                   0X0012
#define   ID_PIBCS3_LABEL_HWORD18DATA                   0X0013
#define   ID_PIBCS3_LABEL_HWORD19DATA                   0X0014
#define   ID_PIBCS3_LABEL_HWORD20DATA                   0X0015
#define   ID_PIBCS3_LABEL_HWORD21DATA                   0X0016
#define   ID_PIBCS3_LABEL_HWORD22DATA                   0X0017
#define   ID_PIBCS3_LABEL_HWORD23DATA                   0X0018
#define   ID_PIBCS3_LABEL_HWORD24DATA                   0X0019
#define   ID_PIBCS3_LABEL_HWORD25DATA                   0X001A
#define   ID_PIBCS3_LABEL_HWORD26DATA                   0X001B
#define   ID_PIBCS3_LABEL_HWORD27DATA                   0X001C
#define   ID_PIBCS3_LABEL_HWORD28DATA                   0X001D
#define   ID_PIBCS3_LABEL_HWORD29DATA                   0X001E
#define   ID_PIBCS3_LABEL_HWORD30DATA                   0X001F
#define   ID_PIBCS3_LABEL_HWORD31DATA                   0X0020
#define   ID_PIBCS3_LABEL_HWORD32DATA                   0X0021
#define   ID_PIBCS3_LABEL_HWORD33DATA                   0X0022
#define   ID_PIBCS3_LABEL_HWORD34DATA                   0X0023
#define   ID_PIBCS3_LABEL_HWORD35DATA                   0X0024
#define   ID_PIBCS3_LABEL_HWORD36DATA                   0X0025

#define   ID_PIBCS3_LABEL_FW001DATA                     0X0026
#define   ID_PIBCS3_LABEL_FWORD2DATA                    0X0027
#define   ID_PIBCS3_LABEL_FWORD3DATA                    0X0028
#define   ID_PIBCS3_LABEL_FWORD4DATA                    0X0029
#define   ID_PIBCS3_LABEL_FWORD5DATA                    0X002A
#define   ID_PIBCS3_LABEL_FWORD6DATA                    0X002B
#define   ID_PIBCS3_LABEL_FWORD7DATA                    0X002C
#define   ID_PIBCS3_LABEL_FWORD8DATA                    0X002D
#define   ID_PIBCS3_LABEL_FWORD9DATA                    0X002E
#define   ID_PIBCS3_LABEL_FWORD10DATA                   0X002F
#define   ID_PIBCS3_LABEL_FWORD11DATA                   0X0030
#define   ID_PIBCS3_LABEL_FWORD12DATA                   0X0031
#define   ID_PIBCS3_LABEL_FWORD13DATA                   0X0032
#define   ID_PIBCS3_LABEL_FWORD14DATA                   0X0033
#define   ID_PIBCS3_LABEL_FWORD15DATA                   0X0034
#define   ID_PIBCS3_LABEL_FWORD16DATA                   0X0035
#define   ID_PIBCS3_LABEL_FWORD17DATA                   0X0036
#define   ID_PIBCS3_LABEL_FWORD18DATA                   0X0037
#define   ID_PIBCS3_LABEL_FWORD19DATA                   0X0038
#define   ID_PIBCS3_LABEL_FWORD20DATA                   0X0039
#define   ID_PIBCS3_LABEL_FWORD21DATA                   0X003A
#define   ID_PIBCS3_LABEL_FWORD22DATA                   0X003B
#define   ID_PIBCS3_LABEL_FWORD23DATA                   0X003C
#define   ID_PIBCS3_LABEL_FWORD24DATA                   0X003D
#define   ID_PIBCS3_LABEL_FWORD25DATA                   0X003E
#define   ID_PIBCS3_LABEL_FWORD26DATA                   0X003F
#define   ID_PIBCS3_LABEL_FWORD27DATA                   0X0040
#define   ID_PIBCS3_LABEL_FWORD28DATA                   0X0041
#define   ID_PIBCS3_LABEL_FWORD29DATA                   0X0042
#define   ID_PIBCS3_LABEL_FWORD30DATA                   0X0043
#define   ID_PIBCS3_LABEL_FWORD31DATA                   0X0044
#define   ID_PIBCS3_LABEL_FWORD32DATA                   0X0045
#define   ID_PIBCS3_LABEL_FWORD33DATA                   0X0046
#define   ID_PIBCS3_LABEL_FWORD34DATA                   0X0047
#define   ID_PIBCS3_LABEL_FWORD35DATA                   0X0048
#define   ID_PIBCS3_LABEL_FWORD36DATA                   0X0049
#define   ID_PIBCS3_LABEL_FWORD37DATA                   0X004A
#define   ID_PIBCS3_LABEL_FWORD38DATA                   0X004B
#define   ID_PIBCS3_LABEL_FWORD39DATA                   0X004C
#define   ID_PIBCS3_LABEL_FWORD40DATA                   0X004D
#define   ID_PIBCS3_LABEL_FWORD41DATA                   0X004E
#define   ID_PIBCS3_LABEL_FWORD42DATA                   0X004F
#define   ID_PIBCS3_LABEL_FWORD43DATA                   0X0050
#define   ID_PIBCS3_LABEL_FWORD44DATA                   0X0051
#define   ID_PIBCS3_LABEL_FWORD45DATA                   0X0052
#define   ID_PIBCS3_LABEL_FWORD46DATA                   0X0053
#define   ID_PIBCS3_LABEL_FWORD47DATA                   0X0054
#define   ID_PIBCS3_LABEL_FWORD48DATA                   0X0055
#define   ID_PIBCS3_LABEL_FWORD49DATA                   0X0056
#define   ID_PIBCS3_LABEL_FWORD50DATA                   0X0057
#define   ID_PIBCS3_LABEL_FWORD51DATA                   0X0058
#define   ID_PIBCS3_LABEL_FWORD52DATA                   0X0059
#define   ID_PIBCS3_LABEL_FWORD53DATA                   0X005A
#define   ID_PIBCS3_LABEL_FWORD54DATA                   0X005B
#define   ID_PIBCS3_LABEL_FWORD55DATA                   0X005C
#define   ID_PIBCS3_LABEL_FWORD56DATA                   0X005D
#define   ID_PIBCS3_LABEL_FWORD57DATA                   0X005E
#define   ID_PIBCS3_LABEL_FWORD58DATA                   0X005F
#define   ID_PIBCS3_LABEL_FWORD59DATA                   0X0060
#define   ID_PIBCS3_LABEL_FWORD60DATA                   0X0061

#define   ID_PIBCS3_LABEL_ERROR_CODEDATA                0X0062
#define   ID_PIBCS3_LABEL_HMI1DATA                      0X0063
#define   ID_PIBCS3_LABEL_HMI2DATA                      0X0064
#define   ID_PIBCS3_LABEL_ERROR44DATA                   0X0065
#define   ID_PIBCS3_LABEL_ERROR45DATA                   0X0066
#define   ID_PIBCS3_LABEL_ERROR46DATA                   0X0067

class CCommStatus3Page : public CPage
{
   DECLEAR_MESSAGE_MAP(CCommStatus3Page)
public:
    CCommStatus3Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnBtnQuitClk();
    void UpdateCommStatus3();
    void SetHAVCLabelString(int id, int DataVal);
    void SetFaultLabelString(int id, QString DataVal);
};

#endif // CCOMMSTATUS3PAGE_H
