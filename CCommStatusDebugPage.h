#ifndef CCommStatusDebugPage_H
#define CCommStatusDebugPage_H

#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define   ID_PIBCSD_BUTTON_RUNDATA                      0X0001
#define   ID_PIBCSD_BUTTON_AIRFAULT                     0X0002
#define   ID_PIBCSD_BUTTON_WDATASTATE                   0X0003
#define   ID_PIBCSD_BUTTON_SUBSYSTEST                   0X0004
#define   ID_PIBCSD_BUTTON_TESTRUN                      0X0005
#define   ID_PIBCSD_BUTTON_RETURN                       0X0006

#define   ID_PIBCSD_LABEL_W001DATA                      0X0007
#define   ID_PIBCSD_LABEL_WORD2DATA                     0X0008
#define   ID_PIBCSD_LABEL_WORD3DATA                     0X0009
#define   ID_PIBCSD_LABEL_WORD4DATA                     0X000A
#define   ID_PIBCSD_LABEL_WORD5DATA                     0X000B
#define   ID_PIBCSD_LABEL_WORD6DATA                     0X000C
#define   ID_PIBCSD_LABEL_WORD7DATA                     0X000D
#define   ID_PIBCSD_LABEL_WORD8DATA                     0X000E
#define   ID_PIBCSD_LABEL_WORD9DATA                     0X000F
#define   ID_PIBCSD_LABEL_WORD10DATA                    0X0010
#define   ID_PIBCSD_LABEL_WORD11DATA                    0X0011
#define   ID_PIBCSD_LABEL_WORD12DATA                    0X0012
#define   ID_PIBCSD_LABEL_WORD13DATA                    0X0013
#define   ID_PIBCSD_LABEL_WORD14DATA                    0X0014
#define   ID_PIBCSD_LABEL_WORD15DATA                    0X0015
#define   ID_PIBCSD_LABEL_WORD16DATA                    0X0016
#define   ID_PIBCSD_LABEL_WORD17DATA                    0X0017
#define   ID_PIBCSD_LABEL_WORD18DATA                    0X0018
#define   ID_PIBCSD_LABEL_WORD19DATA                    0X0019
#define   ID_PIBCSD_LABEL_WORD20DATA                    0X001A
#define   ID_PIBCSD_LABEL_WORD21DATA                    0X001B
#define   ID_PIBCSD_LABEL_WORD22DATA                    0X001C
#define   ID_PIBCSD_LABEL_WORD23DATA                    0X001D
#define   ID_PIBCSD_LABEL_WORD24DATA                    0X001E
#define   ID_PIBCSD_LABEL_WORD25DATA                    0X001F
#define   ID_PIBCSD_LABEL_WORD26DATA                    0X0020
#define   ID_PIBCSD_LABEL_WORD27DATA                    0X0021
#define   ID_PIBCSD_LABEL_WORD28DATA                    0X0022
#define   ID_PIBCSD_LABEL_WORD29DATA                    0X0023
#define   ID_PIBCSD_LABEL_WORD30DATA                    0X0024
#define   ID_PIBCSD_LABEL_WORD31DATA                    0X0025
#define   ID_PIBCSD_LABEL_WORD32DATA                    0X0026
#define   ID_PIBCSD_LABEL_WORD33DATA                    0X0027
#define   ID_PIBCSD_LABEL_WORD34DATA                    0X0028
#define   ID_PIBCSD_LABEL_WORD35DATA                    0X0029
#define   ID_PIBCSD_LABEL_WORD36DATA                    0X002A
#define   ID_PIBCSD_LABEL_WORD37DATA                    0X002B
#define   ID_PIBCSD_LABEL_WORD38DATA                    0X002C
#define   ID_PIBCSD_LABEL_WORD39DATA                    0X002D
#define   ID_PIBCSD_LABEL_WORD40DATA                    0X002E
#define   ID_PIBCSD_LABEL_WORD41DATA                    0X002F
#define   ID_PIBCSD_LABEL_WORD42DATA                    0X0030
#define   ID_PIBCSD_LABEL_WORD43DATA                    0X0031
#define   ID_PIBCSD_LABEL_WORD44DATA                    0X0032
#define   ID_PIBCSD_LABEL_WORD45DATA                    0X0033
#define   ID_PIBCSD_LABEL_WORD46DATA                    0X0034
#define   ID_PIBCSD_LABEL_WORD47DATA                    0X0035
#define   ID_PIBCSD_LABEL_WORD48DATA                    0X0036
#define   ID_PIBCSD_LABEL_WORD49DATA                    0X0037
#define   ID_PIBCSD_LABEL_WORD50DATA                    0X0038
#define   ID_PIBCSD_LABEL_WORD51DATA                    0X0039
#define   ID_PIBCSD_LABEL_WORD52DATA                    0X003A
#define   ID_PIBCSD_LABEL_WORD53DATA                    0X003B
#define   ID_PIBCSD_LABEL_WORD54DATA                    0X003C
#define   ID_PIBCSD_LABEL_WORD55DATA                    0X003D
#define   ID_PIBCSD_LABEL_WORD56DATA                    0X003E
#define   ID_PIBCSD_LABEL_WORD57DATA                    0X003F
#define   ID_PIBCSD_LABEL_WORD58DATA                    0X0040
#define   ID_PIBCSD_LABEL_WORD59DATA                    0X0041
#define   ID_PIBCSD_LABEL_WORD60DATA                    0X0042
#define   ID_PIBCSD_LABEL_WORD61DATA                    0X0043
#define   ID_PIBCSD_LABEL_WORD62DATA                    0X0044
#define   ID_PIBCSD_LABEL_WORD63DATA                    0X0045
#define   ID_PIBCSD_LABEL_WORD64DATA                    0X0046
#define   ID_PIBCSD_LABEL_WORD65DATA                    0X0047
#define   ID_PIBCSD_LABEL_WORD66DATA                    0X0048
#define   ID_PIBCSD_LABEL_WORD67DATA                    0X0049
#define   ID_PIBCSD_LABEL_WORD68DATA                    0X004A
#define   ID_PIBCSD_LABEL_WORD69DATA                    0X004B
#define   ID_PIBCSD_LABEL_WORD70DATA                    0X004C
#define   ID_PIBCSD_LABEL_WORD71DATA                    0X004D
#define   ID_PIBCSD_LABEL_WORD72DATA                    0X004E
#define   ID_PIBCSD_LABEL_WORD73DATA                    0X004F
#define   ID_PIBCSD_LABEL_WORD74DATA                    0X0050
#define   ID_PIBCSD_LABEL_WORD75DATA                    0X0051
#define   ID_PIBCSD_LABEL_WORD76DATA                    0X0052
#define   ID_PIBCSD_LABEL_WORD77DATA                    0X0053
#define   ID_PIBCSD_LABEL_WORD78DATA                    0X0054
#define   ID_PIBCSD_LABEL_WORD79DATA                    0X0055
#define   ID_PIBCSD_LABEL_WORD80DATA                    0X0056
#define   ID_PIBCSD_LABEL_WORD81DATA                    0X0057
#define   ID_PIBCSD_LABEL_WORD82DATA                    0X0058
#define   ID_PIBCSD_LABEL_WORD83DATA                    0X0059
#define   ID_PIBCSD_LABEL_WORD84DATA                    0X005A
#define   ID_PIBCSD_LABEL_WORD85DATA                    0X005B
#define   ID_PIBCSD_LABEL_WORD86DATA                    0X005C
#define   ID_PIBCSD_LABEL_WORD87DATA                    0X005D
#define   ID_PIBCSD_LABEL_WORD88DATA                    0X005E
#define   ID_PIBCSD_LABEL_WORD89DATA                    0X005F
#define   ID_PIBCSD_LABEL_WORD90DATA                    0X0060
#define   ID_PIBCSD_LABEL_WORD91DATA                    0X0061

class CCommStatusDebugPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCommStatusDebugPage)
public:
    CCommStatusDebugPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();

    void UpdateStatusDebug();
    void SetStatusDebugLabelString(int id, int DataVal);
};

#endif // CCommStatusDebugPage_H
