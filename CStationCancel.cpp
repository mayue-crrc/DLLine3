#include "CStationCancel.h"
ROMDATA g_PicRom_StationCancel[] =
{
    //D_COMMON_PAGE_HEADER(QSTR("站取消") )
    D_COMMON_PAGE_HEADER_NEW_DL(QSTR("站取消") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    /*{QSTR("大连火车站"),                 D_FONT_BOLD(8),      QRect(40, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_1        },
    {QSTR("大连湾"),          D_FONT_BOLD(8),      QRect(40, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_1        },
    {QSTR("金石滩"),                 D_FONT_BOLD(8),      QRect(40, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_1        },
    //{QSTR("十里堡"),                 D_FONT_BOLD(8),      QRect(40, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_1        },
    //{QSTR("草房"),                 D_FONT_BOLD(8),      QRect(40, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_1        },
//    {QSTR("东小营"),                     D_FONT_BOLD(8),      QRect(40, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_1        },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(40, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_1        },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(40, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_1        },
    {QSTR("香炉礁"),               D_FONT_BOLD(8),      QRect(180, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,             ID_PIBSTATIONCANCEL_BUTTON_1_2        },
    {QSTR("金马路"),                 D_FONT_BOLD(8),      QRect(180, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_2        },
    //{QSTR("朝阳门"),               D_FONT_BOLD(8),      QRect(180, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_2        },
    //{QSTR("青年路"),               D_FONT_BOLD(8),      QRect(180, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_2        },
//    {QSTR("新华大街"),                 D_FONT_BOLD(8),      QRect(180, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_2        },
    {QSTR("金家街"),               D_FONT_BOLD(8),      QRect(320, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_3        },
    {QSTR("开发区"),             D_FONT_BOLD(8),      QRect(320, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_3        },
    //{QSTR("东大桥"),               D_FONT_BOLD(8),      QRect(320, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_3        },
    //{QSTR("褡裢坡"),               D_FONT_BOLD(8),      QRect(320, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_3        },
//    {QSTR("玉带河街"),                    D_FONT_BOLD(8),      QRect(320, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_3        },
    {QSTR("泉水"),               D_FONT_BOLD(8),      QRect(460, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_4        },
    {QSTR("保税区"),                 D_FONT_BOLD(8),      QRect(460, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_4        },
    //{QSTR("呼家楼"),               D_FONT_BOLD(8),      QRect(460, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_4        },
    //{QSTR("黄渠"),               D_FONT_BOLD(8),      QRect(460, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_4        },
//    {QSTR("郝家府"),                    D_FONT_BOLD(8),      QRect(460, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_4        },
    {QSTR("后盐"),               D_FONT_BOLD(8),      QRect(600, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_5        },
    {QSTR("双D港"),               D_FONT_BOLD(8),      QRect(600, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_5        },
    //{QSTR("金台路"),                 D_FONT_BOLD(8),      QRect(600, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_5        },
    //{QSTR("常营"),                 D_FONT_BOLD(8),      QRect(600, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_5        },
//    {QSTR("东部新城"),                    D_FONT_BOLD(8),      QRect(600, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_5        },
*/
    {QSTR("大连站"),                 D_FONT_BOLD(8),      QRect(40, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_1        },
    {QSTR("大连湾"),          D_FONT_BOLD(8),      QRect(40, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_1        },
    {QSTR("高城山"),                 D_FONT_BOLD(8),      QRect(40, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_1        },
    //{QSTR("开发区(续建线)"),                 D_FONT_BOLD(8),      QRect(40, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_1        },
    {QSTR("十九局"),                 D_FONT_BOLD(8),      QRect(600, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_1        },
//    {QSTR("东小营"),                     D_FONT_BOLD(8),      QRect(40, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_1        },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(40, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_1        },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(40, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_1        },
    {QSTR("香炉礁"),               D_FONT_BOLD(8),      QRect(180, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_2        },
    {QSTR("快轨车辆段"),                 D_FONT_BOLD(8),      QRect(180, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_2        },
    {QSTR("双D港"),               D_FONT_BOLD(8),      QRect(180, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_2        },
    {QSTR("通世泰"),               D_FONT_BOLD(8),      QRect(40, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_2        },
    {QSTR("九里"),                 D_FONT_BOLD(8),      QRect(40, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_2        },
    {QSTR("金家街"),               D_FONT_BOLD(8),      QRect(320, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_3        },
    {QSTR("金马路"),             D_FONT_BOLD(8),      QRect(320, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_3        },
    {QSTR("小窑湾"),               D_FONT_BOLD(8),      QRect(320, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_3        },
    {QSTR("鸿玮澜山"),               D_FONT_BOLD(8),      QRect(180, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_3        },
//    {QSTR("玉带河街"),                    D_FONT_BOLD(8),      QRect(320, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_3        },
    {QSTR("泉水"),               D_FONT_BOLD(8),      QRect(460, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_4        },
    {QSTR("开发区"),                 D_FONT_BOLD(8),      QRect(460, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_4        },
    {QSTR("黄海大道"),               D_FONT_BOLD(8),      QRect(460, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_4        },
    {QSTR("东山路"),               D_FONT_BOLD(8),      QRect(320, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_4        },
//    {QSTR("郝家府"),                    D_FONT_BOLD(8),      QRect(460, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_4        },
    {QSTR("后盐"),               D_FONT_BOLD(8),      QRect(600, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_1_5        },
    {QSTR("保税区"),               D_FONT_BOLD(8),      QRect(600, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_2_5        },
    {QSTR("金石滩"),                 D_FONT_BOLD(8),      QRect(600, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_3_5        },
    {QSTR("和平路"),                 D_FONT_BOLD(8),      QRect(460, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_4_5        },
//    {QSTR("东部新城"),                    D_FONT_BOLD(8),      QRect(600, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_5_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_6_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_7_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONCANCEL_BUTTON_8_5        },

    {QSTR(""),                    D_FONT_BOLD(8),      QRect(40, 380, 40, 30),           Qt::black,                QColor(255,128,192),                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(40, 430, 40, 30),           Qt::black,                Qt::lightGray,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("站点取消"),                    D_FONT_BOLD(8),      QRect(90, 380, 100, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("站点存在"),                    D_FONT_BOLD(8),      QRect(90, 430, 100, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("完成站点取消设置选择后，请按［确认］键进行设置。     "),                    D_FONT_BOLD(8),      QRect(40, 480, 500, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("［确认］按钮弹起后，设置的取消站点变为粉色之后，表明设置成功。"),                    D_FONT_BOLD(8),      QRect(40, 520, 600, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(4),      QRect(35, 245, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(4),      QRect(35, 335, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(4),      QRect(35, 245, 1, 91),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {QSTR(""),                 D_FONT_BOLD(4),      QRect(725, 245, 1, 91),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {QSTR("续 建 线"),                 D_FONT_BOLD(12),      QRect(400, 320, 150, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


};
int g_StationCancelRomLen = sizeof(g_PicRom_StationCancel)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CStationCancel,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_1_1, OnBtn11Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_1_2, OnBtn12Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_1_3, OnBtn13Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_1_4, OnBtn14Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_1_5, OnBtn15Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_2_1, OnBtn21Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_2_2, OnBtn22Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_2_3, OnBtn23Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_2_4, OnBtn24Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_2_5, OnBtn25Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_3_1, OnBtn31Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_3_2, OnBtn32Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_3_3, OnBtn33Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_3_4, OnBtn34Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_3_5, OnBtn35Clk)
        //ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_4_1, OnBtn41Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_4_2, OnBtn42Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_4_3, OnBtn43Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_4_4, OnBtn44Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_4_5, OnBtn45Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_5_1, OnBtn51Clk)
        ON_BTNCLK(ID_PIBSTATIONCANCEL_BUTTON_5_2, OnBtn52Clk)
END_MESSAGE_MAP()

CStationCancel::CStationCancel()
{
}

void CStationCancel::OnUpdatePage()
{
    updatastationcancelstatus();
    //updataStationcancelstatus11( );
    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            stationcancel_timer--;
            if (stationcancel_timer == 0)
            {
                m_bSet = false;
                times = 0;
                BitSet(HMI_send_data32,15,0);//站点取消设定保存标志
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(IDLB_COM_BTN8))->SetCtrlEnable(true);
                //ChangePage(PAGE_INDEX_MAIN);

                m_bscset11=false;
                m_bscset12=false;
                m_bscset13=false;
                m_bscset14=false;
                m_bscset15=false;
                m_bscset21=false;
                m_bscset22=false;
                m_bscset23=false;
                m_bscset24=false;
                m_bscset25=false;
                m_bscset31=false;
                m_bscset32=false;
                m_bscset33=false;
                m_bscset34=false;
                m_bscset35=false;
                //m_bscset41=false;
                m_bscset42=false;
                m_bscset43=false;
                m_bscset44=false;
                m_bscset45=false;
                m_bscset51=false;
                m_bscset52=false;
                stationcancel11=0;
                stationcancel12=0;
                stationcancel13=0;
                stationcancel14=0;
                stationcancel15=0;
                stationcancel21=0;
                stationcancel22=0;
                stationcancel23=0;
                stationcancel24=0;
                stationcancel25=0;
                stationcancel31=0;
                stationcancel32=0;
                stationcancel33=0;
                stationcancel34=0;
                stationcancel35=0;
                //stationcancel41=0;
                stationcancel42=0;
                stationcancel43=0;
                stationcancel44=0;
                stationcancel45=0;
                stationcancel51=0;
                stationcancel52=0;
            }
        }
    }
}

void CStationCancel::OnInitPage()
{
    int nBtnIDArray[] =
    {
     ID_PIBSTATIONCANCEL_BUTTON_1_1,
     ID_PIBSTATIONCANCEL_BUTTON_1_2,
     ID_PIBSTATIONCANCEL_BUTTON_1_3,
     ID_PIBSTATIONCANCEL_BUTTON_1_4,
     ID_PIBSTATIONCANCEL_BUTTON_1_5,
     ID_PIBSTATIONCANCEL_BUTTON_2_1,
     ID_PIBSTATIONCANCEL_BUTTON_2_2,
     ID_PIBSTATIONCANCEL_BUTTON_2_3,
     ID_PIBSTATIONCANCEL_BUTTON_2_4,
     ID_PIBSTATIONCANCEL_BUTTON_2_5,
     ID_PIBSTATIONCANCEL_BUTTON_3_1,     
     ID_PIBSTATIONCANCEL_BUTTON_3_2,
     ID_PIBSTATIONCANCEL_BUTTON_3_3,
     ID_PIBSTATIONCANCEL_BUTTON_3_4,
     ID_PIBSTATIONCANCEL_BUTTON_3_5,
     //ID_PIBSTATIONCANCEL_BUTTON_4_1,
     ID_PIBSTATIONCANCEL_BUTTON_4_2,
     ID_PIBSTATIONCANCEL_BUTTON_4_3,
     ID_PIBSTATIONCANCEL_BUTTON_4_4,
     ID_PIBSTATIONCANCEL_BUTTON_4_5,
     ID_PIBSTATIONCANCEL_BUTTON_5_1,
     ID_PIBSTATIONCANCEL_BUTTON_5_2,
     IDLB_COM_BTN8,
    };

    for (int i=0; i<22; i++)
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
}

void CStationCancel::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("确   认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   认"));
#endif
     this->InitPageHeader();//3.17
    //QString stationName = "";
    //stationcancel_timer=4;
    m_bSet=false;

}
#ifdef PAGE_BUTTON_BAR_NEW
        void CStationCancel::OnComBtn1Clk()
        {
            //ChangePage(PAGE_INDEX_INITIALSETTING);
            m_bscset11=false;//返回清零 为下一次进入界面作准备
            m_bscset12=false;
            m_bscset13=false;
            m_bscset14=false;
            m_bscset15=false;
            m_bscset21=false;
            m_bscset22=false;
            m_bscset23=false;
            m_bscset24=false;
            m_bscset25=false;
            m_bscset31=false;
            m_bscset32=false;
            m_bscset33=false;
            m_bscset34=false;
            m_bscset35=false;
            //m_bscset41=false;
            m_bscset42=false;
            m_bscset43=false;
            m_bscset44=false;
            m_bscset45=false;
            m_bscset51=false;
            m_bscset52=false;
            stationcancel11=0;
            stationcancel12=0;
            stationcancel13=0;
            stationcancel14=0;
            stationcancel15=0;
            stationcancel21=0;
            stationcancel22=0;
            stationcancel23=0;
            stationcancel24=0;
            stationcancel25=0;
            stationcancel31=0;
            stationcancel32=0;
            stationcancel33=0;
            stationcancel34=0;
            stationcancel35=0;
            //stationcancel41=0;
            stationcancel42=0;
            stationcancel43=0;
            stationcancel44=0;
            stationcancel45=0;
            stationcancel51=0;
            stationcancel52=0;
            ChangePage(PAGE_INDEX_MAIN);
        }

        void CStationCancel::OnComBtn2Clk()
        {

        }

        void CStationCancel::OnComBtn3Clk()
        {

        }

        void CStationCancel::OnComBtn4Clk()
        {

        }

        void CStationCancel::OnComBtn5Clk()
        {

        }

        void CStationCancel::OnComBtn6Clk()
        {

        }
        void CStationCancel::OnComBtn7Clk()
        {

        }

        void CStationCancel::OnComBtn8Clk()
        {
            m_bSet=true;
            BitSet( HMI_send_data32, 15, 1);//站点取消保存标志
            stationcancel_timer=4;
            ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);
        }
#else
        void CStationCancel::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void CStationCancel::OnComBtn2Clk()
        {

        }

        void CStationCancel::OnComBtn3Clk()
        {

        }

        void CStationCancel::OnComBtn4Clk()
        {

        }

        void CStationCancel::OnComBtn5Clk()
        {

        }

        void CStationCancel::OnComBtn6Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#endif

void CStationCancel::OnBtn11Clk()
{
    stationcancel11=stationcancel11+1;
    if(Bit(CCU_HMI_309_11,8))
    {
        if(stationcancel11%2==1)
        {
            BitSet( HMI_send_data29, 8, 0);//1站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 8, 1);//1站点取消
            stationcancel11=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        if(stationcancel11%2==1)
        {
            BitSet( HMI_send_data29, 8, 1);//1站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 8, 0);//1站点恢复
            stationcancel11=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_UP);
        }
    }
    m_bscset11=true;
}

void CStationCancel::OnBtn12Clk()
{

    stationcancel12=stationcancel12+1;
    if(Bit(CCU_HMI_309_11,7))
    {
         if(stationcancel12%2==1)
        {
            BitSet( HMI_send_data29, 7, 0);//2站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_2))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 7, 1);//2站点取消
            stationcancel12=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_2))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        if(stationcancel12%2==1)
       {
           BitSet( HMI_send_data29, 7, 1);//2站点取消
           ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_2))->ChangeButtonState(LBUTTON_DOWN);
       }
       else
       {
           BitSet( HMI_send_data29, 7, 0);//2站点恢复
           stationcancel12=0;
           ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_2))->ChangeButtonState(LBUTTON_UP);
       }
    }
    m_bscset12=true;
}

void CStationCancel::OnBtn13Clk()
{
    stationcancel13=stationcancel13+1;
    if(Bit(CCU_HMI_309_11,6))  //粉色
    {
        if(stationcancel13%2==1)
        {
            BitSet( HMI_send_data29, 6, 0);//3站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_3))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 6, 1);//3站点取消
            stationcancel13=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_3))->ChangeButtonState(LBUTTON_UP);
        }
    }
   else
    {
         if(stationcancel13%2==1)
         {
             BitSet( HMI_send_data29, 6, 1);//3站点取消
             ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_3))->ChangeButtonState(LBUTTON_DOWN);
         }
         else
         {
             BitSet( HMI_send_data29, 6, 0);//3站点恢复
             stationcancel13=0;
             ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_3))->ChangeButtonState(LBUTTON_UP);
         }
    }

    m_bscset13=true;

}

void CStationCancel::OnBtn14Clk()
{

    stationcancel14=stationcancel14+1;
    if(Bit(CCU_HMI_309_11,5))
    {
        if(stationcancel14%2==1)
        {
            BitSet( HMI_send_data29, 5, 0);//4站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_4))->ChangeButtonState(LBUTTON_DOWN);

        }
        else
        {
            BitSet( HMI_send_data29, 5, 1);//4站点取消
            stationcancel14=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_4))->ChangeButtonState(LBUTTON_UP);

        }
    }
    else
    {
        if(stationcancel14%2==1)
        {
            BitSet( HMI_send_data29, 5, 1);//4站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_4))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 5, 0);//4站点恢复
            stationcancel14=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_4))->ChangeButtonState(LBUTTON_UP);

        }
    }
    m_bscset14=true;
}

void CStationCancel::OnBtn15Clk()
{

    stationcancel15=stationcancel15+1;
   if(Bit(CCU_HMI_309_11,4))
    {
        if(stationcancel15%2==1)
        {
            BitSet( HMI_send_data29, 4, 0);//5站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_5))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 4, 1);//5站点取消
            stationcancel15=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_5))->ChangeButtonState(LBUTTON_UP);
        }
    }
  else
  {
    if(stationcancel15%2==1)
        {
            BitSet( HMI_send_data29, 4, 1);//5站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_5))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 4, 0);//5站点恢复
            stationcancel15=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_5))->ChangeButtonState(LBUTTON_UP);
        }
  }
    m_bscset15=true;
}

void CStationCancel::OnBtn21Clk()
{
    stationcancel21=stationcancel21+1;
    if(Bit(CCU_HMI_309_11,3))
    {
        if(stationcancel21%2==1)
        {
            BitSet( HMI_send_data29, 3, 0);//6站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_1))->ChangeButtonState(LBUTTON_DOWN);

        }
        else
        {
            BitSet( HMI_send_data29, 3, 1);//6站点取消
            stationcancel21=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_1))->ChangeButtonState(LBUTTON_UP);

        }
    }
    else
    {
        if(stationcancel21%2==1)
        {
            BitSet( HMI_send_data29, 3, 1);//6站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_1))->ChangeButtonState(LBUTTON_DOWN);

        }
        else
        {
            BitSet( HMI_send_data29, 3, 0);//6站点恢复
            stationcancel21=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_1))->ChangeButtonState(LBUTTON_UP);

        }
    }

    m_bscset21=true;
}

void CStationCancel::OnBtn22Clk()
{

    stationcancel22=stationcancel22+1;
     if(Bit(CCU_HMI_309_11,2))
     {
         if(stationcancel22%2==1)
        {
            BitSet( HMI_send_data29, 2, 0);//7站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_2))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 2, 1);//7站点取消
            stationcancel22=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_2))->ChangeButtonState(LBUTTON_UP);
        }
    }
     else
     {
         if(stationcancel22%2==1)
        {
            BitSet( HMI_send_data29, 2, 1);//7站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_2))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 2, 0);//7站点恢复
            stationcancel22=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_2))->ChangeButtonState(LBUTTON_UP);
        }
     }
    m_bscset22=true;
}

void CStationCancel::OnBtn23Clk()
{

    stationcancel23=stationcancel23+1;
  if(Bit(CCU_HMI_309_11,1))
    {
          if(stationcancel23%2==1)
        {
            BitSet( HMI_send_data29, 1, 0);//8站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_3))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 1, 1);//8站点取消
            stationcancel23=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_3))->ChangeButtonState(LBUTTON_UP);
        }
    }
  else
  {
          if(stationcancel23%2==1)
        {
            BitSet( HMI_send_data29, 1, 1);//8站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_3))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 1, 0);//8站点恢复
            stationcancel23=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_3))->ChangeButtonState(LBUTTON_UP);
        }
  }
   m_bscset23=true;
}

void CStationCancel::OnBtn24Clk()
{

    stationcancel24=stationcancel24+1;
    if(Bit(CCU_HMI_309_11,16))
      {
            if(stationcancel24%2==1)
            {
                BitSet( HMI_send_data29, 16, 0);//9站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_4))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 16, 1);//9站点取消
                stationcancel24=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_4))->ChangeButtonState(LBUTTON_UP);
            }
      }
    else
    {
        if(stationcancel24%2==1)
        {
            BitSet( HMI_send_data29, 16, 1);//9站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_4))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 16, 0);//9站点恢复
            stationcancel24=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_4))->ChangeButtonState(LBUTTON_UP);
        }
    }
m_bscset24=true;

}

void CStationCancel::OnBtn25Clk()
{

    stationcancel25=stationcancel25+1;
    if(Bit(CCU_HMI_309_11,15))
      {
            if(stationcancel25%2==1)
            {
                BitSet( HMI_send_data29, 15, 0);//10站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_5))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 15, 1);//10站点取消
                stationcancel25=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_5))->ChangeButtonState(LBUTTON_UP);
            }
    }
    else
    {
        if(stationcancel25%2==1)
            {
                BitSet( HMI_send_data29, 15, 1);//10站点取消
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_5))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 15, 0);//10站点恢复
                stationcancel25=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_5))->ChangeButtonState(LBUTTON_UP);
            }
    }
    m_bscset25=true;
}

void CStationCancel::OnBtn31Clk()
{

    stationcancel31=stationcancel31+1;
    if(Bit(CCU_HMI_309_11,14))
      {
            if(stationcancel31%2==1)
            {
                BitSet( HMI_send_data29, 14, 0);//11站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_1))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 14, 1);//11站点取消
                stationcancel31=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_1))->ChangeButtonState(LBUTTON_UP);
            }
        }
    else
    {
        if(stationcancel31%2==1)
        {
            BitSet( HMI_send_data29, 14, 1);//11站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_1))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 14, 0);//11站点恢复
            stationcancel31=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_1))->ChangeButtonState(LBUTTON_UP);
        }
    }
    m_bscset31=true;
}

void CStationCancel::OnBtn32Clk()
{
    stationcancel32=stationcancel32+1;
    if(Bit(CCU_HMI_309_11,13))
      {
            if(stationcancel32%2==1)
            {
                BitSet( HMI_send_data29, 13, 0);//12站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_2))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 13, 1);//12站点取消
                stationcancel32=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_2))->ChangeButtonState(LBUTTON_UP);
            }
     }
    else
    {
            if(stationcancel32%2==1)
            {
                BitSet( HMI_send_data29, 13, 1);//12站点取消
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_2))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 13, 0);//12站点恢复
                stationcancel32=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_2))->ChangeButtonState(LBUTTON_UP);
            }
    }
    m_bscset32=true;
}

void CStationCancel::OnBtn33Clk()
{

    stationcancel33=stationcancel33+1;
    if(Bit(CCU_HMI_309_11,12))
    {
            if(stationcancel33%2==1)
            {
                BitSet( HMI_send_data29, 12, 0);//13站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_3))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 12, 1);//13站点取消
                stationcancel33=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_3))->ChangeButtonState(LBUTTON_UP);
            }
     }
    else
    {
            if(stationcancel33%2==1)
            {
                BitSet( HMI_send_data29, 12, 1);//13站点取消
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_3))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data29, 12, 0);//13站点恢复
                stationcancel33=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_3))->ChangeButtonState(LBUTTON_UP);
            }
    }
    m_bscset33=true;
}

void CStationCancel::OnBtn34Clk()
{

    stationcancel34=stationcancel34+1;
    if(Bit(CCU_HMI_309_11,11))
    {
        if(stationcancel34%2==1)
        {
            BitSet( HMI_send_data29, 11, 0);//14站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_4))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 11, 1);//14站点取消
            stationcancel34=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_4))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        if(stationcancel34%2==1)
        {
            BitSet( HMI_send_data29, 11, 1);//14站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_4))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 11, 0);//14站点恢复
            stationcancel34=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_4))->ChangeButtonState(LBUTTON_UP);
        }
    }
    m_bscset34=true;
}

void CStationCancel::OnBtn35Clk()
{

    stationcancel35=stationcancel35+1;
    if(Bit(CCU_HMI_309_11,10))
    {
        if(stationcancel35%2==1)
        {
            BitSet( HMI_send_data29, 10, 0);//15站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_5))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 10, 1);//15站点取消
            stationcancel35=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_5))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        if(stationcancel35%2==1)
        {
            BitSet( HMI_send_data29, 10, 1);//15站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_5))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 10, 0);//15站点恢复
            stationcancel35=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_5))->ChangeButtonState(LBUTTON_UP);
        }
    }
    m_bscset35=true;
}

//void CStationCancel::OnBtn41Clk()
//{

//    stationcancel41=stationcancel41+1;
//    if(Bit(CCU_HMI_309_11,9))
//    {
//        if(stationcancel41%2==1)
//        {
//            BitSet( HMI_send_data29, 9, 0);//16站点恢复
//            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_1))->ChangeButtonState(LBUTTON_DOWN);
//        }
//        else
//        {
//            BitSet( HMI_send_data29, 9, 1);//16站点取消
//            stationcancel41=0;
//            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_1))->ChangeButtonState(LBUTTON_UP);
//        }
//    }
//    else
//    {
//        if(stationcancel41%2==1)
//        {
//            BitSet( HMI_send_data29, 9, 1);//16站点取消
//            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_1))->ChangeButtonState(LBUTTON_DOWN);
//        }
//        else
//        {
//            BitSet( HMI_send_data29, 9, 0);//16站点恢复
//            stationcancel41=0;
//            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_1))->ChangeButtonState(LBUTTON_UP);
//        }
//    }
//    m_bscset41=true;
//}

void CStationCancel::OnBtn42Clk()
{

    stationcancel42=stationcancel42+1;
    if(Bit(CCU_HMI_309_11,9))
    {
        if(stationcancel42%2==1)
        {
            BitSet( HMI_send_data29, 9, 0);//16站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_2))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 9, 1);//16站点取消
            stationcancel42=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_2))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        if(stationcancel42%2==1)
        {
            BitSet( HMI_send_data29, 9, 1);//16站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_2))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data29, 9, 0);//16站点恢复
            stationcancel42=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_2))->ChangeButtonState(LBUTTON_UP);
        }
    }
    m_bscset42=true;
}

void CStationCancel::OnBtn43Clk()
{

    stationcancel43=stationcancel43+1;
    if(Bit(CCU_HMI_309_12,8))
    {
            if(stationcancel43%2==1)
            {
                BitSet( HMI_send_data30, 8, 0);//17站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_3))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 8, 1);//17站点取消
                stationcancel43=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_3))->ChangeButtonState(LBUTTON_UP);
            }
        }
    else
    {
            if(stationcancel43%2==1)
            {
                BitSet( HMI_send_data30, 8, 1);//17站点取消
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_3))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 8, 0);//17站点恢复
                stationcancel43=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_3))->ChangeButtonState(LBUTTON_UP);
            }
    }
    m_bscset43=true;
}

void CStationCancel::OnBtn44Clk()
{

    stationcancel44=stationcancel44+1;
    if(Bit(CCU_HMI_309_12,7))
    {
        if(stationcancel44%2==1)
        {
            BitSet( HMI_send_data30, 7, 0);//18站点恢复
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_4))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data30, 7, 1);//18站点取消
            stationcancel44=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_4))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        if(stationcancel44%2==1)
        {
            BitSet( HMI_send_data30, 7, 1);//18站点取消
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_4))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            BitSet( HMI_send_data30, 7, 0);//18站点恢复
            stationcancel44=0;
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_4))->ChangeButtonState(LBUTTON_UP);
        }
    }
    m_bscset44=true;
}

void CStationCancel::OnBtn45Clk()
{

    stationcancel45=stationcancel45+1;
    if(Bit(CCU_HMI_309_12,6))
      {
            if(stationcancel45%2==1)
            {
                BitSet( HMI_send_data30, 6, 0);//19站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_5))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 6, 1);//19站点取消
                stationcancel45=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_5))->ChangeButtonState(LBUTTON_UP);
            }
        }
    else
    {
              if(stationcancel45%2==1)
              {
                  BitSet( HMI_send_data30, 6, 1);//19站点取消
                  ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_5))->ChangeButtonState(LBUTTON_DOWN);
              }
              else
              {
                  BitSet( HMI_send_data30, 6, 0);//19站点恢复
                  stationcancel45=0;
                  ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_5))->ChangeButtonState(LBUTTON_UP);
              }
      }
    m_bscset45=true;
}

void CStationCancel::OnBtn51Clk()
{

    stationcancel51=stationcancel51+1;
    if(Bit(CCU_HMI_309_12,5))
        {
            if(stationcancel51%2==1)
            {
                BitSet( HMI_send_data30, 5, 0);//20站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_1))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 5, 1);//20站点取消
                stationcancel51=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_1))->ChangeButtonState(LBUTTON_UP);
            }
        }
    else
    {
            if(stationcancel51%2==1)
            {
                BitSet( HMI_send_data30, 5, 1);//20站点取消
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_1))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 5, 0);//20站点恢复
                stationcancel51=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_1))->ChangeButtonState(LBUTTON_UP);
            }
    }
    m_bscset51=true;
}

void CStationCancel::OnBtn52Clk()
{

    stationcancel52=stationcancel52+1;
    if(Bit(CCU_HMI_309_12,4))
        {
            if(stationcancel52%2==1)
            {
                BitSet( HMI_send_data30, 4, 0);//21站点恢复
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_2))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 4, 1);//21站点取消
                stationcancel52=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_2))->ChangeButtonState(LBUTTON_UP);
            }
        }
    else
        {
            if(stationcancel52%2==1)
            {
                BitSet( HMI_send_data30, 4, 1);//21站点取消
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_2))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                BitSet( HMI_send_data30, 4, 0);//21站点恢复
                stationcancel52=0;
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_2))->ChangeButtonState(LBUTTON_UP);
            }
        }
    m_bscset52=true;
}
void CStationCancel::updatastationcancelstatus()
{
if((m_bscset11==false)&&(m_bscset12==false)&&(m_bscset13==false)&&(m_bscset14==false)&&(m_bscset15==false)&&(m_bscset21==false)&&(m_bscset22==false)&&(m_bscset23==false)&&(m_bscset24==false)&&(m_bscset25==false)
    &&(m_bscset21==false)&&(m_bscset22==false)&&(m_bscset23==false)&&(m_bscset24==false)&&(m_bscset25==false)&&(m_bscset31==false)&&(m_bscset32==false)&&(m_bscset33==false)&&(m_bscset34==false)&&(m_bscset35==false)
    &&(m_bscset42==false)&&(m_bscset43==false)&&(m_bscset44==false)&&(m_bscset45==false)&&(m_bscset51==false)&&(m_bscset52==false))
   {

    if(Bit(CCU_HMI_309_11,8))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,7))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_2))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_2))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,6))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_3))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_3))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,5))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_4))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_4))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,4))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_5))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_5))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,3))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_1))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_1))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,2))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_2))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_2))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,1))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_3))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_3))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,16))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_4))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_4))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,15))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_5))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_2_5))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,14))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_1))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_1))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,13))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_2))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_2))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,12))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_3))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_3))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,11))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_4))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_4))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,10))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_5))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_3_5))->SetButtonType(BUTTON_NORMAL);

//    if(Bit(CCU_HMI_309_11,9))
//        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_1))->SetButtonType(BUTTON_STATION2);
//    else
//        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_1))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_11,9))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_2))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_2))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_12,8))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_3))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_3))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_12,7))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_4))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_4))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_12,6))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_5))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_4_5))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_12,5))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_1))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_1))->SetButtonType(BUTTON_NORMAL);

    if(Bit(CCU_HMI_309_12,4))
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_2))->SetButtonType(BUTTON_STATION2);
    else
        ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_5_2))->SetButtonType(BUTTON_NORMAL);
    }
}
/*void CStationCancel::updataStationcancelstatus11( )
{

    if(m_bscset11==false)//相当于确认后的初始状态，每次确认结束这这条复合语句只运行一次，并且是所有按钮一起复位一起运行
    {
        if(Bit(CCU_HMI_309_11,8)==1)
        {
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->SetButtonType(BUTTON_STATION2);
            scflag11=true;
            stationcancel11=1;
        }
        else
        {
            ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->SetButtonType(BUTTON_NORMAL);
            scflag11=false;
            stationcancel11=0;
        }
    }
    else if(m_bscset11==true)
    {
        if(scflag11==true)
            {
                if(Bit(CCU_HMI_309_11,8)==1)
                 {
                    if(stationcancel11==0)
                      ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_DOWN);
                    else if(stationcancel11%2==1)
                      ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->SetButtonType(BUTTON_STATION2);
                 }
                else //避免突然掉线
                 {
                    if(stationcancel11%2==1)
                    ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_DOWN);
                    else if(stationcancel11==0)
                    ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_UP);
                 }
            }
            else if(scflag11==false)
            {
                if(stationcancel11%2==1)
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_DOWN);
                else if(stationcancel11==0)
                ((CButton*)GetDlgItem(ID_PIBSTATIONCANCEL_BUTTON_1_1))->ChangeButtonState(LBUTTON_UP);
            }
      }

}*/




