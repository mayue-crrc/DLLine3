#ifndef CCOMMSTATUS4PAGE_H
#define CCOMMSTATUS4PAGE_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define   ID_PIBCS4_BUTTON_QUIT                          0x0001
#define   ID_PIBCS4_LABEL_SW001DATA                      0X0002
#define   ID_PIBCS4_LABEL_SWORD2DATA                     0X0003
#define   ID_PIBCS4_LABEL_SWORD3DATA                     0X0004
#define   ID_PIBCS4_LABEL_SWORD4DATA                     0X0005
#define   ID_PIBCS4_LABEL_SWORD5DATA                     0X0006
#define   ID_PIBCS4_LABEL_SWORD6DATA                     0X0007
#define   ID_PIBCS4_LABEL_SWORD7DATA                     0X0008
#define   ID_PIBCS4_LABEL_SWORD8DATA                     0X0009
#define   ID_PIBCS4_LABEL_SWORD9DATA                     0X000A
#define   ID_PIBCS4_LABEL_SWORD10DATA                    0X000B
#define   ID_PIBCS4_LABEL_SWORD11DATA                    0X000C
#define   ID_PIBCS4_LABEL_SWORD12DATA                    0X000D
#define   ID_PIBCS4_LABEL_SWORD13DATA                    0X000E
#define   ID_PIBCS4_LABEL_SWORD14DATA                    0X000F
#define   ID_PIBCS4_LABEL_SWORD15DATA                    0X0010
#define   ID_PIBCS4_LABEL_SWORD16DATA                    0X0011
#define   ID_PIBCS4_LABEL_SWORD17DATA                    0X0012
#define   ID_PIBCS4_LABEL_SWORD18DATA                    0X0013
#define   ID_PIBCS4_LABEL_SWORD19DATA                    0X0014
#define   ID_PIBCS4_LABEL_SWORD20DATA                    0X0015
#define   ID_PIBCS4_LABEL_SWORD21DATA                    0X0016
#define   ID_PIBCS4_LABEL_SWORD22DATA                    0X0017
#define   ID_PIBCS4_LABEL_SWORD23DATA                    0X0018
#define   ID_PIBCS4_LABEL_SWORD24DATA                    0X0019
#define   ID_PIBCS4_LABEL_SWORD25DATA                    0X001A
#define   ID_PIBCS4_LABEL_SWORD26DATA                    0X001B
#define   ID_PIBCS4_LABEL_SWORD27DATA                    0X001C
#define   ID_PIBCS4_LABEL_SWORD28DATA                    0X001D
#define   ID_PIBCS4_LABEL_SWORD29DATA                    0X001E
#define   ID_PIBCS4_LABEL_SWORD30DATA                    0X001F
#define   ID_PIBCS4_LABEL_SWORD31DATA                    0X0020
#define   ID_PIBCS4_LABEL_SWORD32DATA                    0X0021
#define   ID_PIBCS4_LABEL_SWORD33DATA                    0X0022
#define   ID_PIBCS4_LABEL_SWORD34DATA                    0X0023
#define   ID_PIBCS4_LABEL_SWORD35DATA                    0X0024
#define   ID_PIBCS4_LABEL_SWORD36DATA                    0X0025
#define   ID_PIBCS4_LABEL_CS1W001DATA                    0X0026
#define   ID_PIBCS4_LABEL_CS1WORD2DATA                   0X0027
#define   ID_PIBCS4_LABEL_CS1WORD3DATA                   0X0028
#define   ID_PIBCS4_LABEL_CS1WORD4DATA                   0X0029
#define   ID_PIBCS4_LABEL_CS1WORD5DATA                   0X002A
#define   ID_PIBCS4_LABEL_CS1WORD6DATA                   0X002B
#define   ID_PIBCS4_LABEL_CS1WORD7DATA                   0X002C
#define   ID_PIBCS4_LABEL_CS1WORD8DATA                   0X002D
#define   ID_PIBCS4_LABEL_CS1WORD9DATA                   0X002E
#define   ID_PIBCS4_LABEL_CS1WORD10DATA                  0X002F
#define   ID_PIBCS4_LABEL_CS1WORD11DATA                  0X0030
#define   ID_PIBCS4_LABEL_CS1WORD12DATA                  0X0031
#define   ID_PIBCS4_LABEL_CS1WORD13DATA                  0X0032
#define   ID_PIBCS4_LABEL_CS1WORD14DATA                  0X0033
#define   ID_PIBCS4_LABEL_CS1WORD15DATA                  0X0034
#define   ID_PIBCS4_LABEL_CS1WORD16DATA                  0X0035
#define   ID_PIBCS4_LABEL_CS1WORD17DATA                  0X0036
#define   ID_PIBCS4_LABEL_CS1WORD18DATA                  0X0037
#define   ID_PIBCS4_LABEL_CS1WORD19DATA                  0X0038
#define   ID_PIBCS4_LABEL_CS1WORD20DATA                  0X0039
#define   ID_PIBCS4_LABEL_CS1WORD21DATA                  0X003A
#define   ID_PIBCS4_LABEL_CS1WORD22DATA                  0X003B
#define   ID_PIBCS4_LABEL_CS1WORD23DATA                  0X003C
#define   ID_PIBCS4_LABEL_CS1WORD24DATA                  0X003D
#define   ID_PIBCS4_LABEL_CS1WORD25DATA                  0X003E
#define   ID_PIBCS4_LABEL_CS1WORD26DATA                  0X003F
#define   ID_PIBCS4_LABEL_CS1WORD27DATA                  0X0040
#define   ID_PIBCS4_LABEL_CS1WORD28DATA                  0X0041
#define   ID_PIBCS4_LABEL_CS1WORD29DATA                  0X0042
#define   ID_PIBCS4_LABEL_CS1WORD30DATA                  0X0043
#define   ID_PIBCS4_LABEL_CS1WORD31DATA                  0X0044
#define   ID_PIBCS4_LABEL_CS1WORD32DATA                  0X0045
#define   ID_PIBCS4_LABEL_CS1WORD33DATA                  0X0046
#define   ID_PIBCS4_LABEL_CS1WORD34DATA                  0X0047
#define   ID_PIBCS4_LABEL_CS1WORD35DATA                  0X0048
#define   ID_PIBCS4_LABEL_CS1WORD36DATA                  0X0049
#define   ID_PIBCS4_LABEL_CS2W001DATA                    0X004A
#define   ID_PIBCS4_LABEL_CS2WORD2DATA                   0X004B
#define   ID_PIBCS4_LABEL_CS2WORD3DATA                   0X004C
#define   ID_PIBCS4_LABEL_CS2WORD4DATA                   0X004D
#define   ID_PIBCS4_LABEL_CS2WORD5DATA                   0X004E
#define   ID_PIBCS4_LABEL_CS2WORD6DATA                   0X004F
#define   ID_PIBCS4_LABEL_CS2WORD7DATA                   0X0050
#define   ID_PIBCS4_LABEL_CS2WORD8DATA                   0X0051
#define   ID_PIBCS4_LABEL_CS2WORD9DATA                   0X0052
#define   ID_PIBCS4_LABEL_CS2WORD10DATA                  0X0053
#define   ID_PIBCS4_LABEL_CS2WORD11DATA                  0X0054
#define   ID_PIBCS4_LABEL_CS2WORD12DATA                  0X0055
#define   ID_PIBCS4_LABEL_CS2WORD13DATA                  0X0056
#define   ID_PIBCS4_LABEL_CS2WORD14DATA                  0X0057
#define   ID_PIBCS4_LABEL_CS2WORD15DATA                  0X0058
#define   ID_PIBCS4_LABEL_CS2WORD16DATA                  0X0059
#define   ID_PIBCS4_LABEL_CS2WORD17DATA                  0X005A
#define   ID_PIBCS4_LABEL_CS2WORD18DATA                  0X005B
#define   ID_PIBCS4_LABEL_CS2WORD19DATA                  0X005C
#define   ID_PIBCS4_LABEL_CS2WORD20DATA                  0X005D
#define   ID_PIBCS4_LABEL_CS2WORD21DATA                  0X005E
#define   ID_PIBCS4_LABEL_CS3W001DATA                    0X005F
#define   ID_PIBCS4_LABEL_CS3WORD2DATA                   0X0060
#define   ID_PIBCS4_LABEL_CS3WORD3DATA                   0X0061
#define   ID_PIBCS4_LABEL_VERSION12DATA                  0X0062
#define   ID_PIBCS4_LABEL_VERSION3DATA                   0X0063

class CCommStatus4Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCommStatus4Page)
public:
    CCommStatus4Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnBtnQuitClk();
    void UpdateCommStatus4();
    void SetCommStatus4LabelString(int id, int DataVal);
    void SetHMILabelString(int id, QString DataVal);
};

#endif // CCOMMSTATUS4PAGE_H
