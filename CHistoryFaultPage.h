#ifndef CHistoryFaultPage_H
#define CHistoryFaultPage_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_PICCHF_LABEL_FDATE1         0x0001
#define ID_PICCHF_LABEL_FTIME1         0x0002
#define ID_PICCHF_LABEL_FCODE1         0x0003
#define ID_PICCHF_LABEL_FNAME1         0x0004
#define ID_PICCHF_LABEL_FCLASS1        0x0005
#define ID_PICCHF_LABEL_FHELP1         0x0006

#define ID_PICCHF_LABEL_FDATE2         0x0007
#define ID_PICCHF_LABEL_FTIME2         0x0008
#define ID_PICCHF_LABEL_FCODE2         0x0009
#define ID_PICCHF_LABEL_FNAME2         0x000A
#define ID_PICCHF_LABEL_FCLASS2        0x000B
#define ID_PICCHF_LABEL_FHELP2         0x000C

#define ID_PICCHF_LABEL_FDATE3         0x000D
#define ID_PICCHF_LABEL_FTIME3         0x000E
#define ID_PICCHF_LABEL_FCODE3         0x000F
#define ID_PICCHF_LABEL_FNAME3         0x0010
#define ID_PICCHF_LABEL_FCLASS3        0x0011
#define ID_PICCHF_LABEL_FHELP3         0x0012

#define ID_PICCHF_LABEL_FDATE4         0x0013
#define ID_PICCHF_LABEL_FTIME4         0x0014
#define ID_PICCHF_LABEL_FCODE4         0x0015
#define ID_PICCHF_LABEL_FNAME4         0x0016
#define ID_PICCHF_LABEL_FCLASS4        0x0017
#define ID_PICCHF_LABEL_FHELP4         0x0018

#define ID_PICCHF_LABEL_FDATE5         0x0019
#define ID_PICCHF_LABEL_FTIME5         0x001A
#define ID_PICCHF_LABEL_FCODE5         0x001B
#define ID_PICCHF_LABEL_FNAME5         0x001C
#define ID_PICCHF_LABEL_FCLASS5        0x001D
#define ID_PICCHF_LABEL_FHELP5         0x001E

#define ID_PICCHF_LABEL_FDATE6         0x001F
#define ID_PICCHF_LABEL_FTIME6         0x0020
#define ID_PICCHF_LABEL_FCODE6         0x0022
#define ID_PICCHF_LABEL_FNAME6         0x0023
#define ID_PICCHF_LABEL_FCLASS6        0x0024
#define ID_PICCHF_LABEL_FHELP6         0x0025

#define ID_PICCHF_LABEL_FDATE7         0x0026
#define ID_PICCHF_LABEL_FTIME7         0x0027
#define ID_PICCHF_LABEL_FCODE7         0x0028
#define ID_PICCHF_LABEL_FNAME7         0x0029
#define ID_PICCHF_LABEL_FCLASS7        0x002A
#define ID_PICCHF_LABEL_FHELP7         0x002B

#define ID_PICCHF_LABEL_FDATE8         0x002C
#define ID_PICCHF_LABEL_FTIME8         0x002D
#define ID_PICCHF_LABEL_FCODE8         0x002E
#define ID_PICCHF_LABEL_FNAME8         0x002F
#define ID_PICCHF_LABEL_FCLASS8        0x0030
#define ID_PICCHF_LABEL_FHELP8         0x0031

#define ID_PICCHF_LABEL_FDATE9         0x0032
#define ID_PICCHF_LABEL_FTIME9         0x0033
#define ID_PICCHF_LABEL_FCODE9         0x0034
#define ID_PICCHF_LABEL_FNAME9         0x0035
#define ID_PICCHF_LABEL_FCLASS9        0x0036
#define ID_PICCHF_LABEL_FHELP9         0x0037

#define ID_PICCHF_LABEL_FDATE10        0x0038
#define ID_PICCHF_LABEL_FTIME10        0x0039
#define ID_PICCHF_LABEL_FCODE10        0x003A
#define ID_PICCHF_LABEL_FNAME10        0x003B
#define ID_PICCHF_LABEL_FCLASS10       0x003C
#define ID_PICCHF_LABEL_FHELP10        0x003D

#define ID_PICCHF_LABEL_FDATE11        0x003E
#define ID_PICCHF_LABEL_FTIME11        0x003F
#define ID_PICCHF_LABEL_FCODE11        0x0040
#define ID_PICCHF_LABEL_FNAME11        0x0041
#define ID_PICCHF_LABEL_FCLASS11       0x0042
#define ID_PICCHF_LABEL_FHELP11        0x0043

#define ID_PICCHF_LABEL_FDATE12        0x0044
#define ID_PICCHF_LABEL_FTIME12        0x0045
#define ID_PICCHF_LABEL_FCODE12        0x0046
#define ID_PICCHF_LABEL_FNAME12        0x0047
#define ID_PICCHF_LABEL_FCLASS12       0x0048
#define ID_PICCHF_LABEL_FHELP12        0x0049

#define ID_PICCHF_LABEL_FDATE13        0x004A
#define ID_PICCHF_LABEL_FTIME13        0x004B
#define ID_PICCHF_LABEL_FCODE13        0x004C
#define ID_PICCHF_LABEL_FNAME13        0x004D
#define ID_PICCHF_LABEL_FCLASS13       0x004E
#define ID_PICCHF_LABEL_FHELP13        0x004F

#define ID_PICCHF_LABEL_FDATE14        0x0050
#define ID_PICCHF_LABEL_FTIME14        0x0051
#define ID_PICCHF_LABEL_FCODE14        0x0052
#define ID_PICCHF_LABEL_FNAME14        0x0053
#define ID_PICCHF_LABEL_FCLASS14       0x0054
#define ID_PICCHF_LABEL_FHELP14        0x0055

#define ID_PICCHF_LABEL_FDATE15        0x0056
#define ID_PICCHF_LABEL_FTIME15        0x0057
#define ID_PICCHF_LABEL_FCODE15        0x0058
#define ID_PICCHF_LABEL_FNAME15        0x0059
#define ID_PICCHF_LABEL_FCLASS15       0x005A
#define ID_PICCHF_LABEL_FHELP15        0x005B

#define ID_PICCHF_LABEL_FDATE16        0x005C
#define ID_PICCHF_LABEL_FTIME16        0x005D
#define ID_PICCHF_LABEL_FCODE16        0x005E
#define ID_PICCHF_LABEL_FNAME16        0x005F
#define ID_PICCHF_LABEL_FCLASS16       0x0060
#define ID_PICCHF_LABEL_FHELP16        0x0061

#define ID_PICCHF_LABEL_FDATE17        0x0062
#define ID_PICCHF_LABEL_FTIME17        0x0063
#define ID_PICCHF_LABEL_FCODE17        0x0064
#define ID_PICCHF_LABEL_FNAME17        0x0065
#define ID_PICCHF_LABEL_FCLASS17       0x0066
#define ID_PICCHF_LABEL_FHELP17        0x0067

#define ID_PICCHF_LABEL_FDATE18        0x0068
#define ID_PICCHF_LABEL_FTIME18        0x0069
#define ID_PICCHF_LABEL_FCODE18        0x006A
#define ID_PICCHF_LABEL_FNAME18        0x006B
#define ID_PICCHF_LABEL_FCLASS18       0x006C
#define ID_PICCHF_LABEL_FHELP18        0x006D

#define ID_PICCHF_LABEL_FDATE19        0x006E
#define ID_PICCHF_LABEL_FTIME19        0x006F
#define ID_PICCHF_LABEL_FCODE19        0x0070
#define ID_PICCHF_LABEL_FNAME19        0x0071
#define ID_PICCHF_LABEL_FCLASS19       0x0072
#define ID_PICCHF_LABEL_FHELP19        0x0073

#define ID_PICCHF_LABEL_FDATE20        0x0074
#define ID_PICCHF_LABEL_FTIME20        0x0075
#define ID_PICCHF_LABEL_FCODE20        0x0076
#define ID_PICCHF_LABEL_FNAME20        0x0077
#define ID_PICCHF_LABEL_FCLASS20       0x0078
#define ID_PICCHF_LABEL_FHELP20        0x0079


class CHistoryFaultPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHistoryFaultPage)
public:
    CHistoryFaultPage();

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
};

#endif // CHistoryFaultPage_H
