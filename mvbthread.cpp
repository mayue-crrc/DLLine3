#include "mvbthread.h"

#include "CGlobal.h" // 用户编程使用
#include <QDebug>

MvbThread::MvbThread()
{

}

MvbThread::~MvbThread()
{

}

bool MvbThread::init()
{
     UNSIGNED16 RetVal = 0;
      restart = false;
    abort = false;

    // Initialize MVB
    // PIXYMVB_MIN_TMMODEL or PIXYMVB_MAX_TMMODEL
    // PIXYMVB_MIN_TMMODEL equals to 64KB of MVB Traffic Store,
    // the default. PIXYMVB_MAX_TMMODEL is equal to 256KB of MVB Traffic Store.
    // PIXYMVB_PHY_OFG is an OFG Interface Opto Port
    // PIXYMVB_PHY_ESD is an ESD(+) Interface
    // PIXYMVB_PHY_EMD is an EMD Interface
    // deviceID:
    // snkTmeSupvIntv:0 = Inactive, 1 = 1 ms, 2 = 2 ms, 3 = 4 ms, 4 = 8 ms, 5 = 16 ms,
    // 6 = 32 ms, 7 = 64 ms, 8 = 128 ms, 9 = 256 ms
    //qDebug() <<"TC1_HMI:"<<TC1_HMI<<"TC2_HMI:"<<TC2_HMI;
    if(TC1_HMI==1)
    {
        RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x31, 1 );//lmh
        test_tempdata[96]=RetVal/256;
        test_tempdata[97]=RetVal%256;

#ifdef DEBUG
        writeDebugLog( "pixymvb_CfgHWInit Tc1:", RetVal );
#endif
    }
    else
    {
        if(TC2_HMI==1)
        {
            RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x32, 1 );
            test_tempdata[96]=RetVal/256;
            test_tempdata[97]=RetVal%256;
    #ifdef DEBUG
            writeDebugLog( "pixymvb_CfgHWInit Tc2:", RetVal );
    #endif
        }
        else
        {
            test_tempdata[96]=255;
            test_tempdata[97]=255;
        }
    }
#ifdef LOG_OPEN
    qDebug()<<RetVal;
#endif

    if ( PIXYMVB_OK != RetVal )
    {
        return(false);
    } 

    // Initialize Ports Data

    // src
    memset(srcPortData021,0,sizeof(srcPortData021)); // MVB test
    memset(srcPortData023,0,sizeof(srcPortData023)); // MVB test


    memset(srcPortData310,0,sizeof(srcPortData310));
    memset(srcPortData311,0,sizeof(srcPortData311));
    memset(srcPortData312,0,sizeof(srcPortData312));
    memset(srcPortData313,0,sizeof(srcPortData313));

    memset(srcPortData320,0,sizeof(srcPortData320));
    memset(srcPortData321,0,sizeof(srcPortData321));
    memset(srcPortData322,0,sizeof(srcPortData322));
    memset(srcPortData323,0,sizeof(srcPortData323));

    //snk
    memset(snkPortData020,0,sizeof(snkPortData020)); // MVB test
	
	//memset(snkPortDataf  ,0,sizeof(snkPortDataf));
	memset(snkPortData1  ,0,sizeof(snkPortData1));
    memset(snkPortData100,0,sizeof(snkPortData100));
    memset(snkPortData110,0,sizeof(snkPortData110));
    //memset(snkPortData114,0,sizeof(snkPortData114));
    memset(snkPortData111,0,sizeof(snkPortData111));
    memset(snkPortData120,0,sizeof(snkPortData120));
    memset(snkPortData121,0,sizeof(snkPortData121));
    memset(snkPortData130,0,sizeof(snkPortData130));
    memset(snkPortData131,0,sizeof(snkPortData131));
    memset(snkPortData140,0,sizeof(snkPortData140));
    memset(snkPortData141,0,sizeof(snkPortData141));


    memset(snkPortData210,0,sizeof(snkPortData210));
    memset(snkPortData211,0,sizeof(snkPortData211));
    memset(snkPortData212,0,sizeof(snkPortData212));
    memset(snkPortData213,0,sizeof(snkPortData213));


    memset(snkPortData310,0,sizeof(snkPortData310));
    memset(snkPortData311,0,sizeof(snkPortData311));
    memset(snkPortData312,0,sizeof(snkPortData312));
    memset(snkPortData313,0,sizeof(snkPortData313));

    memset(snkPortData320,0,sizeof(snkPortData320));
    memset(snkPortData321,0,sizeof(snkPortData321));
    memset(snkPortData322,0,sizeof(snkPortData322));
    memset(snkPortData323,0,sizeof(snkPortData323));//

    memset(snkPortData400,0,sizeof(snkPortData400));
    memset(snkPortData410,0,sizeof(snkPortData410));
    memset(snkPortData411,0,sizeof(snkPortData411));
    memset(snkPortData412,0,sizeof(snkPortData412));
    memset(snkPortData413,0,sizeof(snkPortData413));
    memset(snkPortData414,0,sizeof(snkPortData414));
    memset(snkPortData420,0,sizeof(snkPortData420));
    memset(snkPortData421,0,sizeof(snkPortData421));
    memset(snkPortData422,0,sizeof(snkPortData422));
    memset(snkPortData423,0,sizeof(snkPortData423));
    memset(snkPortData424,0,sizeof(snkPortData424));
    memset(snkPortData430,0,sizeof(snkPortData430));
    memset(snkPortData431,0,sizeof(snkPortData431));
    memset(snkPortData432,0,sizeof(snkPortData432));
    memset(snkPortData433,0,sizeof(snkPortData433));
    memset(snkPortData434,0,sizeof(snkPortData434));
    memset(snkPortData440,0,sizeof(snkPortData440));
    memset(snkPortData441,0,sizeof(snkPortData441));
    memset(snkPortData442,0,sizeof(snkPortData442));
    memset(snkPortData443,0,sizeof(snkPortData443));
    memset(snkPortData444,0,sizeof(snkPortData444));
    memset(snkPortData500,0,sizeof(snkPortData500));
    memset(snkPortData510,0,sizeof(snkPortData510));
    memset(snkPortData511,0,sizeof(snkPortData511));
    memset(snkPortData520,0,sizeof(snkPortData520));
    memset(snkPortData521,0,sizeof(snkPortData521));
    memset(snkPortData530,0,sizeof(snkPortData530));
    memset(snkPortData531,0,sizeof(snkPortData531));
    memset(snkPortData540,0,sizeof(snkPortData540));
    memset(snkPortData541,0,sizeof(snkPortData541));
    memset(snkPortData550,0,sizeof(snkPortData550));
    memset(snkPortData551,0,sizeof(snkPortData551));


    memset(snkPortData73A,0,sizeof(snkPortData73A));//
    memset(snkPortData74A,0,sizeof(snkPortData74A));
    memset(snkPortData75A,0,sizeof(snkPortData75A));
    memset(snkPortData76A,0,sizeof(snkPortData76A));
    memset(snkPortData77A,0,sizeof(snkPortData77A));
    memset(snkPortData78A,0,sizeof(snkPortData78A));//

    memset(snkPortData560,0,sizeof(snkPortData560));
    memset(snkPortData561,0,sizeof(snkPortData561));
    memset(snkPortData600,0,sizeof(snkPortData600));
    memset(snkPortData610,0,sizeof(snkPortData610));
    memset(snkPortData611,0,sizeof(snkPortData611));
    memset(snkPortData620,0,sizeof(snkPortData620));
    memset(snkPortData621,0,sizeof(snkPortData621));
    //memset(snkPortData700,0,sizeof(snkPortData700));
    //memset(snkPortData701,0,sizeof(snkPortData701));
    memset(snkPortData710,0,sizeof(snkPortData710));
    memset(snkPortData711,0,sizeof(snkPortData711));
    memset(snkPortData720,0,sizeof(snkPortData720));
    memset(snkPortData721,0,sizeof(snkPortData721));
    memset(snkPortData730,0,sizeof(snkPortData730));
    memset(snkPortData731,0,sizeof(snkPortData731));
    memset(snkPortData740,0,sizeof(snkPortData740));
    memset(snkPortData741,0,sizeof(snkPortData741));
    memset(snkPortData750,0,sizeof(snkPortData750));
    memset(snkPortData751,0,sizeof(snkPortData751));
    memset(snkPortData760,0,sizeof(snkPortData760));
    memset(snkPortData761,0,sizeof(snkPortData761));
    memset(snkPortData770,0,sizeof(snkPortData770));
    memset(snkPortData771,0,sizeof(snkPortData771));
    memset(snkPortData780,0,sizeof(snkPortData780));
    memset(snkPortData781,0,sizeof(snkPortData781));
    //memset(snkPortData790,0,sizeof(snkPortData790));
    memset(snkPortData712,0,sizeof(snkPortData712));//
    //memset(snkPortData791,0,sizeof(snkPortData791));
    //memset(snkPortData7A0,0,sizeof(snkPortData7A0));
    //memset(snkPortData7A1,0,sizeof(snkPortData7A1));
    //memset(snkPortData7B0,0,sizeof(snkPortData7B0));
    //memset(snkPortData7B1,0,sizeof(snkPortData7B1));
    //memset(snkPortData7C0,0,sizeof(snkPortData7C0));
    //memset(snkPortData7C1,0,sizeof(snkPortData7C1));

    memset(snkPortData722,0,sizeof(snkPortData722));//
    memset(snkPortData732,0,sizeof(snkPortData732));
    memset(snkPortData742,0,sizeof(snkPortData742));
    memset(snkPortData752,0,sizeof(snkPortData752));
    memset(snkPortData762,0,sizeof(snkPortData762));
    memset(snkPortData772,0,sizeof(snkPortData772));
    memset(snkPortData782,0,sizeof(snkPortData782));//

    //memset(snkPortData7D0,0,sizeof(snkPortData7D0));
    //memset(snkPortData7D1,0,sizeof(snkPortData7D1));
    //memset(snkPortData7E0,0,sizeof(snkPortData7E0));
    //memset(snkPortData7E1,0,sizeof(snkPortData7E1));
    //memset(snkPortData7F0,0,sizeof(snkPortData7F0));
    //memset(snkPortData7F1,0,sizeof(snkPortData7F1));
    memset(snkPortDataA38,0,sizeof(snkPortDataA38));
    memset(snkPortDataA48,0,sizeof(snkPortDataA48));
    memset(snkPortData800,0,sizeof(snkPortData800));
    memset(snkPortData810,0,sizeof(snkPortData810));
    memset(snkPortDataA20,0,sizeof(snkPortDataA20));//lmh
    memset(snkPortData820,0,sizeof(snkPortData820));
    memset(snkPortDataA21,0,sizeof(snkPortDataA21));//LMH
    memset(snkPortData830,0,sizeof(snkPortData830));
    memset(snkPortDataA30,0,sizeof(snkPortDataA30));//LMH
    memset(snkPortData840,0,sizeof(snkPortData840));
    memset(snkPortDataA31,0,sizeof(snkPortDataA31));//
    memset(snkPortData850,0,sizeof(snkPortData850));
    memset(snkPortDataA40,0,sizeof(snkPortDataA40));//
    memset(snkPortData860,0,sizeof(snkPortData860));
    memset(snkPortDataA41,0,sizeof(snkPortDataA41));//
    memset(snkPortData870,0,sizeof(snkPortData870));
    memset(snkPortData880,0,sizeof(snkPortData880));
    memset(snkPortDataA28,0,sizeof(snkPortDataA28));//
    memset(snkPortData900,0,sizeof(snkPortData900));
    memset(snkPortData910,0,sizeof(snkPortData910));
    memset(snkPortData911,0,sizeof(snkPortData911));
    memset(snkPortData920,0,sizeof(snkPortData920));
    memset(snkPortData921,0,sizeof(snkPortData921));
    memset(snkPortDataA00,0,sizeof(snkPortDataA00));
    memset(snkPortDataA10,0,sizeof(snkPortDataA10));
    memset(snkPortDataA11,0,sizeof(snkPortDataA11));
    memset(snkPortDataB00,0,sizeof(snkPortDataB00));
    memset(snkPortDataB10,0,sizeof(snkPortDataB10));
    memset(snkPortDataB20,0,sizeof(snkPortDataB20));
    memset(snkPortDataF00,0,sizeof(snkPortDataF00));
    memset(snkPortDataF01,0,sizeof(snkPortDataF01));
    memset(snkPortDataF02,0,sizeof(snkPortDataF02));
    memset(snkPortDataF03,0,sizeof(snkPortDataF03));
    memset(snkPortDataF10,0,sizeof(snkPortDataF10));
    memset(snkPortDataF11,0,sizeof(snkPortDataF11));
    memset(snkPortDataF12,0,sizeof(snkPortDataF12));
    memset(snkPortDataF13,0,sizeof(snkPortDataF13));
    memset(snkPortData108,0,sizeof(snkPortData108));
    memset(snkPortData118,0,sizeof(snkPortData118));
    memset(snkPortData128,0,sizeof(snkPortData128));
    memset(snkPortData138,0,sizeof(snkPortData138));
    memset(snkPortData148,0,sizeof(snkPortData148));
    memset(snkPortData158,0,sizeof(snkPortData158));
    memset(snkPortData168,0,sizeof(snkPortData168));
    memset(snkPortData178,0,sizeof(snkPortData178));
    memset(snkPortData188,0,sizeof(snkPortData188));
    memset(snkPortData218,0,sizeof(snkPortData218));//


    memset(snkPortData308,0,sizeof(snkPortData308));
    memset(snkPortData309,0,sizeof(snkPortData309));
    memset(snkPortData30A,0,sizeof(snkPortData30A));
    memset(snkPortData318,0,sizeof(snkPortData318));
    memset(snkPortData328,0,sizeof(snkPortData328));
    memset(snkPortDataC10,0,sizeof(snkPortDataC10));
    memset(snkPortDataC20,0,sizeof(snkPortDataC20));

    memset(snkPortData408,0,sizeof(snkPortData408));
    memset(snkPortData419,0,sizeof(snkPortData419));//
    memset(snkPortData418,0,sizeof(snkPortData418));
    memset(snkPortData508,0,sizeof(snkPortData508));
    memset(snkPortData518,0,sizeof(snkPortData518));
    memset(snkPortData528,0,sizeof(snkPortData528));
    memset(snkPortData538,0,sizeof(snkPortData538));
    memset(snkPortData548,0,sizeof(snkPortData548));
    memset(snkPortData558,0,sizeof(snkPortData558));
    memset(snkPortData568,0,sizeof(snkPortData568));
    memset(snkPortData608,0,sizeof(snkPortData608));
    memset(snkPortData618,0,sizeof(snkPortData618));
    memset(snkPortData628,0,sizeof(snkPortData628));
    memset(snkPortData708,0,sizeof(snkPortData708));
    memset(snkPortData708,0,sizeof(snkPortData708));//
    memset(snkPortData718,0,sizeof(snkPortData718));
    memset(snkPortData808,0,sizeof(snkPortData808));
    memset(snkPortData818,0,sizeof(snkPortData818));
    memset(snkPortData908,0,sizeof(snkPortData908));
    memset(snkPortData918,0,sizeof(snkPortData918));
    memset(snkPortData928,0,sizeof(snkPortData928));
    memset(snkPortDataA08,0,sizeof(snkPortDataA08));
    memset(snkPortDataA18,0,sizeof(snkPortDataA18));
    memset(snkPortDataB08,0,sizeof(snkPortDataB08));
    memset(snkPortDataB18,0,sizeof(snkPortDataB18));
    memset(snkPortData71A,0,sizeof(snkPortData71A));//
    memset(snkPortData72A,0,sizeof(snkPortData72A));//

    // Configure Ports
    // SRC
    if(TC1_HMI==1)
    //if(1)
    {   // HMI tc1 add src port
        //RetVal = pixymvb_AddPort( 0x310, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData200 ); // Src Port FC 4
        RetVal = pixymvb_AddPort( 0x310, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData310 ); // Src Port FC 4
        test_tempdata[98]=RetVal/256;
        test_tempdata[99]=RetVal%256;
#ifdef DEBUG
        writeDebugLog( "pixymvb_AddPort: SRC 0x200--", RetVal );
#endif
        if ( PIXYMVB_OK != RetVal )
        {
            return(false);
        }

//        pixymvb_AddPort( 0x311, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData201 ); // Src Port FC 4
//        pixymvb_AddPort( 0x312, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData202 ); // Src Port FC 4
//        pixymvb_AddPort( 0x313, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData203 ); // Src Port FC 4

        pixymvb_AddPort( 0x311, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData311 ); // Src Port FC 4 LMH
        pixymvb_AddPort( 0x312, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData312 ); // Src Port FC 4
        pixymvb_AddPort( 0x313, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData313 ); // Src Port FC 4
    }
    else
    {   // HMI tc2 add src port
        if(TC2_HMI==1)
        {
            //RetVal = pixymvb_AddPort( 0x280, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData280 ); // Src Port FC 4
            RetVal = pixymvb_AddPort( 0x320, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData320 ); // Src Port FC 4
            test_tempdata[98]=RetVal/256;
            test_tempdata[99]=RetVal%256;
    #ifdef DEBUG
            writeDebugLog( "pixymvb_AddPort: SRC 0x280--", RetVal );
    #endif
            if ( PIXYMVB_OK != RetVal )
            {
                return(false);
            }

//            pixymvb_AddPort( 0x281, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData281 ); // Src Port FC 4
//            pixymvb_AddPort( 0x282, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData282 ); // Src Port FC 4
//            pixymvb_AddPort( 0x283, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData283 ); // Src Port FC 4

            pixymvb_AddPort( 0x321, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData321 ); // Src Port FC 4
            pixymvb_AddPort( 0x322, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData322 ); // Src Port FC 4
            pixymvb_AddPort( 0x323, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData323 ); // Src Port FC 4

        }
        else
        {
            test_tempdata[98]=255;
            test_tempdata[99]=255;
        }


    }
	
        //pixymvb_AddPort( 21, PIXYMVB_SRCPORT, 8, (PIXYMVB_Data *) srcPortData021 ); // Src Port FC 3
        //pixymvb_AddPort( 23, PIXYMVB_SRCPORT, 8, (PIXYMVB_Data *) srcPortData023 ); // Src Port FC 3
	
    // SNK
    //pixymvb_AddPort( 20, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData020 ); // Src Port FC 3


//    RetVal = pixymvb_AddPort( 0xf, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData100 ); // Snk Port FC 4
#ifdef DEBUG
//    writeDebugLog( "pixymvb_AddPort: SNK 0x100--", RetVal );
#endif
//    if ( PIXYMVB_OK != RetVal )
//    {
//        return(false);
//    }

    //pixymvb_AddPort(  0xf, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataf ); // Snk Port FC 4
    pixymvb_AddPort(  0x01, PIXYMVB_SNKPORT, 4, (PIXYMVB_Data *) snkPortData1 ); // Snk Port FC 2
    pixymvb_AddPort( 0x110, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData110 ); // Snk Port FC 4
    //pixymvb_AddPort( 0x114, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData114 ); // Snk Port FC 4
    pixymvb_AddPort( 0x111, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData111 ); // Snk Port FC 4
    pixymvb_AddPort( 0x120, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData120 ); // Snk Port FC 4
    pixymvb_AddPort( 0x121, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData121 ); // Snk Port FC 4
    pixymvb_AddPort( 0x130, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData130 ); // Snk Port FC 4
    pixymvb_AddPort( 0x131, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData131 ); // Snk Port FC 4
    pixymvb_AddPort( 0x140, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData140 ); // Snk Port FC 4
    pixymvb_AddPort( 0x141, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData141 ); // Snk Port FC 4
   // pixymvb_AddPort( 0x150, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData150 ); // Snk Port FC 4
   // pixymvb_AddPort( 0x160, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData160 ); // Snk Port FC 4
   // pixymvb_AddPort( 0x170, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData170 ); // Snk Port FC 4
    //pixymvb_AddPort( 0x180, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData180 ); // Snk Port FC 4
   // pixymvb_AddPort( 0x184, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData184 ); // Snk Port FC 4

    pixymvb_AddPort( 0x210, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData210 ); // Snk Port FC 4
    pixymvb_AddPort( 0x211, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData211 ); // Snk Port FC 4
    pixymvb_AddPort( 0x212, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData212 ); // Snk Port FC 4
    pixymvb_AddPort( 0x213, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData213 ); // Snk Port FC 4 LMH

//    if(TC1_HMI==1)
//    {   // HMI tc1 add snk port
//        pixymvb_AddPort( 0x280, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData280 ); // Snk Port FC 4
//        pixymvb_AddPort( 0x281, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData281 ); // Snk Port FC 4
//        pixymvb_AddPort( 0x282, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData282 ); // Snk Port FC 4
//        pixymvb_AddPort( 0x283, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData283 ); // Snk Port FC 4
//    }
//    else
//    {   // HMI tc2 add snk port
//        if(TC2_HMI==1)
//        {
//            pixymvb_AddPort( 0x200, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData200 ); // Snk Port FC 4
//            pixymvb_AddPort( 0x201, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData201 ); // Snk Port FC 4
//            pixymvb_AddPort( 0x202, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData202 ); // Snk Port FC 4
//            pixymvb_AddPort( 0x203, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData203 ); // Snk Port FC 4
//        }

//    }
    //LMH ADD
    if(TC1_HMI==1)
    {   // HMI tc1 add snk port
        pixymvb_AddPort( 0x320, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData320 ); // Snk Port FC 4
        pixymvb_AddPort( 0x321, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData321 ); // Snk Port FC 4
        pixymvb_AddPort( 0x322, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData322 ); // Snk Port FC 4
        pixymvb_AddPort( 0x323, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData323 ); // Snk Port FC 4
    }
    else
    {   // HMI tc2 add snk port
        if(TC2_HMI==1)
        {
            pixymvb_AddPort( 0x310, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData310 ); // Snk Port FC 4
            pixymvb_AddPort( 0x311, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData311 ); // Snk Port FC 4
            pixymvb_AddPort( 0x312, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData312 ); // Snk Port FC 4
            pixymvb_AddPort( 0x313, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData313 ); // Snk Port FC 4
        }

    }


    pixymvb_AddPort( 0x410, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData410 ); // Snk Port FC 4
    pixymvb_AddPort( 0x411, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData411 ); // Snk Port FC 4

    pixymvb_AddPort( 0x420, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData420 ); // Snk Port FC 4
    pixymvb_AddPort( 0x421, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData421 ); // Snk Port FC 4

    pixymvb_AddPort( 0x430, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData430 ); // Snk Port FC 4
    pixymvb_AddPort( 0x431, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData431 ); // Snk Port FC 4

    pixymvb_AddPort( 0x440, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData440 ); // Snk Port FC 4
    pixymvb_AddPort( 0x441, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData441 ); // Snk Port FC 4

    pixymvb_AddPort( 0x510, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData510 ); // Snk Port FC 4
    pixymvb_AddPort( 0x511, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData511 ); // Snk Port FC 4
    pixymvb_AddPort( 0x520, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData520 ); // Snk Port FC 4
    pixymvb_AddPort( 0x521, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData521 ); // Snk Port FC 4

    pixymvb_AddPort( 0x610, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData610 ); // Snk Port FC 4
    pixymvb_AddPort( 0x611, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData611 ); // Snk Port FC 4
    pixymvb_AddPort( 0x620, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData620 ); // Snk Port FC 4
    pixymvb_AddPort( 0x621, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData621 ); // Snk Port FC 4

    pixymvb_AddPort( 0x710, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData710 ); // Snk Port FC 4
    pixymvb_AddPort( 0x711, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData711 ); // Snk Port FC 4
    pixymvb_AddPort( 0x712, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData712 ); // Snk Port FC 4

    pixymvb_AddPort( 0x720, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData720 ); // Snk Port FC 4
    pixymvb_AddPort( 0x721, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData721 ); // Snk Port FC 4
    pixymvb_AddPort( 0x722, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData722 ); // Snk Port FC 4

    pixymvb_AddPort( 0x730, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData730 ); // Snk Port FC 4
    pixymvb_AddPort( 0x731, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData731 ); // Snk Port FC 4
    pixymvb_AddPort( 0x732, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData732 ); // Snk Port FC 4

    pixymvb_AddPort( 0x740, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData740 ); // Snk Port FC 4
    pixymvb_AddPort( 0x741, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData741 ); // Snk Port FC 4
    pixymvb_AddPort( 0x742, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData742 ); // Snk Port FC 4

    pixymvb_AddPort( 0x750, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData750 ); // Snk Port FC 4
    pixymvb_AddPort( 0x751, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData751 ); // Snk Port FC 4
    pixymvb_AddPort( 0x752, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData752 ); // Snk Port FC 4

    pixymvb_AddPort( 0x760, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData760 ); // Snk Port FC 4
    pixymvb_AddPort( 0x761, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData761 ); // Snk Port FC 4
    pixymvb_AddPort( 0x762, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData762 ); // Snk Port FC 4

    pixymvb_AddPort( 0x770, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData770 ); // Snk Port FC 4
    pixymvb_AddPort( 0x771, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData771 ); // Snk Port FC 4
    pixymvb_AddPort( 0x772, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData772 ); // Snk Port FC 4

    pixymvb_AddPort( 0x780, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData780 ); // Snk Port FC 4
    pixymvb_AddPort( 0x781, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData781 ); // Snk Port FC 4
    pixymvb_AddPort( 0x782, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData782 ); // Snk Port FC 4


    pixymvb_AddPort( 0x910, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData910 ); // Snk Port FC 4
    pixymvb_AddPort( 0x911, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData911 ); // Snk Port FC 4
    pixymvb_AddPort( 0x920, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData920 ); // Snk Port FC 4
    pixymvb_AddPort( 0x921, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData921 ); // Snk Port FC 4

    pixymvb_AddPort( 0xA10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA10 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA11, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA11 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA20, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA20 ); // Snk Port FC 4//lmh
    pixymvb_AddPort( 0xA21, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA21 ); // Snk Port FC 4//lmh
    pixymvb_AddPort( 0xA30, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA30 ); // Snk Port FC 4//lmh
    pixymvb_AddPort( 0xA31, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA31 ); // Snk Port FC 4//lmh
    pixymvb_AddPort( 0xA40, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA40 ); // Snk Port FC 4//lmh
    pixymvb_AddPort( 0xA41, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA41 ); // Snk Port FC 4//lmh


    pixymvb_AddPort( 0xB10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB10 ); // Snk Port FC 4
    pixymvb_AddPort( 0xB20, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB20 ); // Snk Port FC 4

    pixymvb_AddPort( 0x118, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData118 ); // Snk Port FC 3
    pixymvb_AddPort( 0x128, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData128 ); // Snk Port FC 3
    pixymvb_AddPort( 0x138, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData138 ); // Snk Port FC 3
    pixymvb_AddPort( 0x148, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData148 ); // Snk Port FC 3

    pixymvb_AddPort( 0x218, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData218 ); // Snk Port FC 4
    pixymvb_AddPort( 0x308, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData308 ); // Snk Port FC 4
    pixymvb_AddPort( 0x309, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData309 ); // Snk Port FC 4
    pixymvb_AddPort( 0x30A, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData30A ); // Snk Port FC 4 8.7
    pixymvb_AddPort( 0x318, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData318 ); // Snk Port FC 3 8.7
    pixymvb_AddPort( 0x328, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData328 ); // Snk Port FC 3 8.7


    pixymvb_AddPort( 0x418, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData418 ); // Snk Port FC 4
    pixymvb_AddPort( 0x419, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData419 ); // Snk Port FC 4

    pixymvb_AddPort( 0x518, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData518 ); // Snk Port FC 4
    pixymvb_AddPort( 0x528, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData528 ); // Snk Port FC 4

    pixymvb_AddPort( 0x618, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData618 ); // Snk Port FC 4
    pixymvb_AddPort( 0x628, PIXYMVB_SNKPORT,  16, (PIXYMVB_Data *) snkPortData628 ); // Snk Port FC 4

    pixymvb_AddPort( 0x718, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData718 ); // Snk Port FC 4lmh
    pixymvb_AddPort( 0x719, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData719 ); // Snk Port FC 4

    pixymvb_AddPort( 0x71A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData71A ); // Snk Port FC 1

    pixymvb_AddPort( 0x72A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData72A ); // Snk Port FC 1
    pixymvb_AddPort( 0x73A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData73A ); // Snk Port FC 1
    pixymvb_AddPort( 0x74A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData74A ); // Snk Port FC 1
    pixymvb_AddPort( 0x75A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData75A ); // Snk Port FC 1
    pixymvb_AddPort( 0x76A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData76A ); // Snk Port FC 1
    pixymvb_AddPort( 0x77A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData77A ); // Snk Port FC 1
    pixymvb_AddPort( 0x78A, PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData78A ); // Snk Port FC 1

    pixymvb_AddPort( 0x918, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData918 ); // Snk Port FC 4
    pixymvb_AddPort( 0x928, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData928 ); // Snk Port FC 4

    pixymvb_AddPort( 0xA18, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA18 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA28, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA28 ); // Snk Port FC 4//lmh
    pixymvb_AddPort( 0xA38, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA38 ); // Snk Port FC 4LMH
    pixymvb_AddPort( 0xA48, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA48 ); // Snk Port FC 4LMH


    pixymvb_AddPort( 0xB18, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB18 ); // Snk Port FC 4 lmh
    pixymvb_AddPort( 0xC10, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortDataC10 ); // Snk Port FC 3
    pixymvb_AddPort( 0xC20, PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortDataC20 ); // Snk Port FC 3


    // Change MVB State To Operation State
    RetVal = pixymvb_ChangeState(PIXYMVB_OPERATION_STATE); // OP Mode
#ifdef DEBUG
    writeDebugLog( "pixymvb_ChangeState", RetVal );
#endif
    if ( PIXYMVB_OK != RetVal )
    {
        return(false);
    }

    return true;
}
void MvbThread::render()
{
    if( !isRunning() ) {
        start();
    }else{
        restart = true;
        condition.wakeOne();
    } //end
}



void MvbThread::run()
{
    UNSIGNED16 snkTmeSupv = 0;
    UNSIGNED16 RetVal = 0;
    UNSIGNED16 i = 0;

    if( init() )
    {
        forever
        {

            //  用于测试MVB加载异常
            //            if(test_tempdata[102]>254)
            //            {
            //                test_tempdata[102]=0;
            //            }
            //            else
            //            {
            //                test_tempdata[102]++;
            //            }


            // MVB test
            /*
            pixymvb_GetPort( 20, &snkPortData020, &snkTmeSupv);
            srcPortData021[0] = 21;
            for(i=1;i<16;i++)
            {
                srcPortData021[i] = srcPortData021[i];

            }
            pixymvb_PutPort(21, (PIXYMVB_Data *) &(srcPortData021[0]));

            srcPortData023[0] = 23;
            for(i=1;i<16;i++)
            {
                srcPortData023[i] = srcPortData023[i];

            }
            pixymvb_PutPort(23, (PIXYMVB_Data *) &(srcPortData023[0]));
            */
		// MVB test

            // get processed src data
            if(TC1_HMI==1)
            //lmh if(1==1)
            {   // HMI tc1 set src data
                for(i=0;i<16;i++)
                {
                    //srcPortData200[i] = UNSIGNED16(sendData[i*2]<<8)    + UNSIGNED16(sendData[i*2+1]) ;
                    srcPortData310[i] = UNSIGNED16(sendData[i*2]<<8)    + UNSIGNED16(sendData[i*2+1]) ;

                }
                for(i=0;i<16;i++)
                {
                    //srcPortData201[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                    srcPortData311[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    //srcPortData202[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                    srcPortData312[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    //srcPortData203[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                    srcPortData313[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                }
                // send src data to bus
                //RetVal = pixymvb_PutPort(0x310, (PIXYMVB_Data *) &(srcPortData200[0]));
                RetVal = pixymvb_PutPort(0x310, (PIXYMVB_Data *) &(srcPortData310[0]));
                test_tempdata[100]=RetVal/256;
                test_tempdata[101]=RetVal%256;
    #ifdef DEBUG
                writeDebugLog( "pixymvb_PutPort", RetVal );
    #endif
//                pixymvb_PutPort(0x311, (PIXYMVB_Data *) &(srcPortData201[0]));
//                pixymvb_PutPort(0x312, (PIXYMVB_Data *) &(srcPortData202[0]));
//                pixymvb_PutPort(0x313, (PIXYMVB_Data *) &(srcPortData203[0]));

                pixymvb_PutPort(0x311, (PIXYMVB_Data *) &(srcPortData311[0]));
                pixymvb_PutPort(0x312, (PIXYMVB_Data *) &(srcPortData312[0]));
                pixymvb_PutPort(0x313, (PIXYMVB_Data *) &(srcPortData313[0]));



            }
            else
            {   // HMI tc2 set src data
                if(TC2_HMI==1)
                {
                    for(i=0;i<16;i++)
                    {
                        //srcPortData280[i] = UNSIGNED16(sendData[i*2]<< 8) + UNSIGNED16(sendData[i*2+1]) ;
                        srcPortData320[i] = UNSIGNED16(sendData[i*2]<< 8) + UNSIGNED16(sendData[i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        //srcPortData281[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                        srcPortData321[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        //srcPortData282[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                        srcPortData322[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        //srcPortData283[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                        srcPortData323[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                    }
                    // send src data to bus
                    //RetVal = pixymvb_PutPort(0x280, (PIXYMVB_Data *) &(srcPortData280[0]));
                    RetVal = pixymvb_PutPort(0x320, (PIXYMVB_Data *) &(srcPortData320[0]));
                    test_tempdata[100]=RetVal/256;
                    test_tempdata[101]=RetVal%256;
        #ifdef DEBUG
                    writeDebugLog( "pixymvb_PutPort", RetVal );
        #endif
//                    pixymvb_PutPort(0x281, (PIXYMVB_Data *) &(srcPortData281[0]));
//                    pixymvb_PutPort(0x282, (PIXYMVB_Data *) &(srcPortData282[0]));
//                    pixymvb_PutPort(0x283, (PIXYMVB_Data *) &(srcPortData283[0]));

                    pixymvb_PutPort(0x321, (PIXYMVB_Data *) &(srcPortData321[0]));
                    pixymvb_PutPort(0x322, (PIXYMVB_Data *) &(srcPortData322[0]));
                    pixymvb_PutPort(0x323, (PIXYMVB_Data *) &(srcPortData323[0]));
                }
                else
                {
                    test_tempdata[100]=255;
                    test_tempdata[101]=255;
                }

            }



            // get snk data from bus
           // RetVal = pixymvb_GetPort( 0xf, &snkPortDataf, &refresh_time_110);
            RetVal = pixymvb_GetPort( 0x01, &snkPortData1, &refresh_time_110);//refreshtime
    #ifdef DEBUG
            writeDebugLog( "pixymvb_GetPort", RetVal );
    #endif
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[i] = highbyteLowbyteExchange(snkPortDataf[i]);
                g_dataBuffer_MVB[i] = highbyteLowbyteExchange(snkPortData1[i]);
            }

            pixymvb_GetPort( 0x110, &snkPortData110, &refresh_time_110); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[16+i] = highbyteLowbyteExchange(snkPortData110[i]);
            }

            //pixymvb_GetPort( 0x114, &snkPortData114, &refresh_time_114); // Snk Port FC 4
            pixymvb_GetPort( 0x111, &snkPortData111, &refresh_time_111); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[32+i] = highbyteLowbyteExchange(snkPortData114[i]);
                g_dataBuffer_MVB[32+i] = highbyteLowbyteExchange(snkPortData111[i]);
            }

            pixymvb_GetPort( 0x120, &snkPortData120, &refresh_time_120); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[48+i] = highbyteLowbyteExchange(snkPortData120[i]);
            }

            pixymvb_GetPort( 0x121, &snkPortData121, &refresh_time_121); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[64+i] = highbyteLowbyteExchange(snkPortData121[i]);
            }

            pixymvb_GetPort( 0x130, &snkPortData130, &refresh_time_130); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[80+i] = highbyteLowbyteExchange(snkPortData130[i]);
            }

            pixymvb_GetPort( 0x131, &snkPortData131, &refresh_time_131); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[96+i] = highbyteLowbyteExchange(snkPortData131[i]);
            }

            pixymvb_GetPort( 0x140, &snkPortData140, &refresh_time_140); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[112+i] = highbyteLowbyteExchange(snkPortData140[i]);
            }

            pixymvb_GetPort( 0x141, &snkPortData141, &refresh_time_141); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[128+i] = highbyteLowbyteExchange(snkPortData141[i]);
            }

            pixymvb_GetPort( 0x210, &snkPortData210, &refresh_time_210); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[144+i] = highbyteLowbyteExchange(snkPortData210[i]);
            }

            pixymvb_GetPort( 0x211, &snkPortData211, &refresh_time_211); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[160+i] = highbyteLowbyteExchange(snkPortData211[i]);
            }

            pixymvb_GetPort( 0x212, &snkPortData212, &refresh_time_212); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(snkPortData212[i]);
            }

            pixymvb_GetPort( 0x213, &snkPortData213, &refresh_time_213); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(snkPortData213[i]);
            }


//            pixymvb_GetPort( 0x150, &snkPortData150, &refresh_time_150); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[96+i] = highbyteLowbyteExchange(snkPortData150[i]);
//            }

//            pixymvb_GetPort( 0x160, &snkPortData160, &refresh_time_160); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[112+i] = highbyteLowbyteExchange(snkPortData160[i]);
//            }

//            pixymvb_GetPort( 0x170, &snkPortData170, &refresh_time_170); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[128+i] = highbyteLowbyteExchange(snkPortData170[i]);
//            }

//            pixymvb_GetPort( 0x180, &snkPortData180, &refresh_time_180); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[144+i] = highbyteLowbyteExchange(snkPortData180[i]);
//            }

//            pixymvb_GetPort( 0x184, &snkPortData184, &refresh_time_184); // Snk Port FC 4
//            // set to be processed snk data
//            for (i=0;i<16;i++)
//            {
//                g_dataBuffer_MVB[160+i] = highbyteLowbyteExchange(snkPortData184[i]);
//            }

            if(TC1_HMI==1)
            {   // HMi tc1 set rev data
                for (i=0;i<16;i++)
                {
//                    g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(srcPortData200[i]);
//                    g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(srcPortData201[i]);
//                    g_dataBuffer_MVB[208+i] = highbyteLowbyteExchange(srcPortData202[i]);
//                    g_dataBuffer_MVB[224+i] = highbyteLowbyteExchange(srcPortData203[i]);

                    g_dataBuffer_MVB[144+64+i] = highbyteLowbyteExchange(srcPortData310[i]);
                    g_dataBuffer_MVB[160+64+i] = highbyteLowbyteExchange(srcPortData311[i]);
                    g_dataBuffer_MVB[176+64+i] = highbyteLowbyteExchange(srcPortData312[i]);
                    g_dataBuffer_MVB[192+64+i] = highbyteLowbyteExchange(srcPortData313[i]);
                }

                //pixymvb_GetPort( 0x280, &snkPortData280, &refresh_time_280); // Snk Port FC 4
                pixymvb_GetPort( 0x320, &snkPortData320, &refresh_time_320); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[240+i] = highbyteLowbyteExchange(snkPortData280[i]);
                    g_dataBuffer_MVB[208+64+i] = highbyteLowbyteExchange(snkPortData320[i]);
                }

                //pixymvb_GetPort( 0x281, &snkPortData281, &refresh_time_281); // Snk Port FC 4
                pixymvb_GetPort( 0x321, &snkPortData321, &refresh_time_321); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[256+i] = highbyteLowbyteExchange(snkPortData281[i]);
                    g_dataBuffer_MVB[224+64+i] = highbyteLowbyteExchange(snkPortData321[i]);
                }

                //pixymvb_GetPort( 0x282, &snkPortData282, &refresh_time_282); // Snk Port FC 4
                pixymvb_GetPort( 0x322, &snkPortData322, &refresh_time_322); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(snkPortData282[i]);
                    g_dataBuffer_MVB[240+64+i] = highbyteLowbyteExchange(snkPortData322[i]);
                }

                //pixymvb_GetPort( 0x283, &snkPortData283, &refresh_time_283); // Snk Port FC 4
                pixymvb_GetPort( 0x323, &snkPortData323, &refresh_time_323); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[288+i] = highbyteLowbyteExchange(snkPortData283[i]);
                    g_dataBuffer_MVB[256+64+i] = highbyteLowbyteExchange(snkPortData323[i]);
                }
            }
            else
            {

              if(TC2_HMI==1)
              {// HMi tc2 set rev data
                //pixymvb_GetPort( 0x200, &snkPortData200, &refresh_time_200); // Snk Port FC 4
                pixymvb_GetPort( 0x310, &snkPortData310, &refresh_time_310); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(snkPortData200[i]);
                    g_dataBuffer_MVB[144+64+i] = highbyteLowbyteExchange(snkPortData310[i]);
                }

                //pixymvb_GetPort( 0x201, &snkPortData201, &refresh_time_201); // Snk Port FC 4
                pixymvb_GetPort( 0x311, &snkPortData311, &refresh_time_311); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(snkPortData201[i]);
                    g_dataBuffer_MVB[160+64+i] = highbyteLowbyteExchange(snkPortData311[i]);
                }

                //pixymvb_GetPort( 0x202, &snkPortData202, &refresh_time_202); // Snk Port FC 4
                pixymvb_GetPort( 0x312, &snkPortData312, &refresh_time_312); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[208+i] = highbyteLowbyteExchange(snkPortData202[i]);
                    g_dataBuffer_MVB[176+64+i] = highbyteLowbyteExchange(snkPortData312[i]);
                }

                //pixymvb_GetPort( 0x203, &snkPortData203, &refresh_time_203); // Snk Port FC 4
                pixymvb_GetPort( 0x313, &snkPortData313, &refresh_time_313); // Snk Port FC 4
                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    //g_dataBuffer_MVB[224+i] = highbyteLowbyteExchange(snkPortData203[i]);
                    g_dataBuffer_MVB[192+64+i] = highbyteLowbyteExchange(snkPortData313[i]);
                }

                for (i=0;i<16;i++)
                {
//                    g_dataBuffer_MVB[240+i] = highbyteLowbyteExchange(srcPortData280[i]);
//                    g_dataBuffer_MVB[256+i] = highbyteLowbyteExchange(srcPortData281[i]);
//                    g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(srcPortData282[i]);
//                    g_dataBuffer_MVB[288+i] = highbyteLowbyteExchange(srcPortData283[i]);

                    g_dataBuffer_MVB[208+64+i] = highbyteLowbyteExchange(srcPortData320[i]);
                    g_dataBuffer_MVB[224+64+i] = highbyteLowbyteExchange(srcPortData321[i]);
                    g_dataBuffer_MVB[240+64+i] = highbyteLowbyteExchange(srcPortData322[i]);
                    g_dataBuffer_MVB[256+64+i] = highbyteLowbyteExchange(srcPortData323[i]);
                }
              }
            }

           // pixymvb_GetPort( 0x400, &snkPortData400, &refresh_time_400); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
                //g_dataBuffer_MVB[304+i] = highbyteLowbyteExchange(snkPortData400[i]);
                //g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(snkPortData400[i]);
            //}

            pixymvb_GetPort( 0x410, &snkPortData410, &refresh_time_410); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[320+i] = highbyteLowbyteExchange(snkPortData410[i]);
                g_dataBuffer_MVB[272+64+i] = highbyteLowbyteExchange(snkPortData410[i]);
            }

            pixymvb_GetPort( 0x411, &snkPortData411, &refresh_time_411); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[288+64+i] = highbyteLowbyteExchange(snkPortData411[i]);
            }

            //pixymvb_GetPort( 0x412, &snkPortData412, &refresh_time_412); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
               // g_dataBuffer_MVB[352+i] = highbyteLowbyteExchange(snkPortData412[i]);
           // }

            //pixymvb_GetPort( 0x413, &snkPortData413, &refresh_time_413); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[368+i] = highbyteLowbyteExchange(snkPortData413[i]);
            //}

            //pixymvb_GetPort( 0x414, &snkPortData414, &refresh_time_414); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
               // g_dataBuffer_MVB[384+i] = highbyteLowbyteExchange(snkPortData414[i]);
            //}

            pixymvb_GetPort( 0x420, &snkPortData420, &refresh_time_420); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[400+i] = highbyteLowbyteExchange(snkPortData420[i]);
                g_dataBuffer_MVB[304+64+i] = highbyteLowbyteExchange(snkPortData420[i]);
            }

            pixymvb_GetPort( 0x421, &snkPortData421, &refresh_time_421); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[416+i] = highbyteLowbyteExchange(snkPortData421[i]);
                g_dataBuffer_MVB[320+64+i] = highbyteLowbyteExchange(snkPortData421[i]);
            }

            //pixymvb_GetPort( 0x422, &snkPortData422, &refresh_time_422); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
              //  g_dataBuffer_MVB[432+i] = highbyteLowbyteExchange(snkPortData422[i]);
            //}

            //pixymvb_GetPort( 0x423, &snkPortData423, &refresh_time_423); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[448+i] = highbyteLowbyteExchange(snkPortData423[i]);
            //}

            //pixymvb_GetPort( 0x424, &snkPortData424, &refresh_time_424); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
              //  g_dataBuffer_MVB[464+i] = highbyteLowbyteExchange(snkPortData424[i]);
            //}

            pixymvb_GetPort( 0x430, &snkPortData430, &refresh_time_430); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[336+64+i] = highbyteLowbyteExchange(snkPortData430[i]);
            }

            pixymvb_GetPort( 0x431, &snkPortData431, &refresh_time_431); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[352+64+i] = highbyteLowbyteExchange(snkPortData431[i]);
            }

            //pixymvb_GetPort( 0x432, &snkPortData432, &refresh_time_432); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[512+i] = highbyteLowbyteExchange(snkPortData432[i]);
            //}

            //pixymvb_GetPort( 0x433, &snkPortData433, &refresh_time_433); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[528+i] = highbyteLowbyteExchange(snkPortData433[i]);
           // }

           // pixymvb_GetPort( 0x434, &snkPortData434, &refresh_time_434); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
           //     g_dataBuffer_MVB[544+i] = highbyteLowbyteExchange(snkPortData434[i]);
           //}

            pixymvb_GetPort( 0x440, &snkPortData440, &refresh_time_440); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[368+64+i] = highbyteLowbyteExchange(snkPortData440[i]);
            }

            pixymvb_GetPort( 0x441, &snkPortData441, &refresh_time_441); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[384+64+i] = highbyteLowbyteExchange(snkPortData441[i]);
            }

            //pixymvb_GetPort( 0x442, &snkPortData442, &refresh_time_442); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
               // g_dataBuffer_MVB[592+i] = highbyteLowbyteExchange(snkPortData442[i]);
            //}

            //pixymvb_GetPort( 0x443, &snkPortData443, &refresh_time_443); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[608+i] = highbyteLowbyteExchange(snkPortData443[i]);
            //}

            //pixymvb_GetPort( 0x444, &snkPortData444, &refresh_time_444); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[624+i] = highbyteLowbyteExchange(snkPortData444[i]);
            //}

            //pixymvb_GetPort( 0x500, &snkPortData500, &refresh_time_500); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
              //  g_dataBuffer_MVB[640+i] = highbyteLowbyteExchange(snkPortData500[i]);
            //}

            pixymvb_GetPort( 0x510, &snkPortData510, &refresh_time_510); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[400+64+i] = highbyteLowbyteExchange(snkPortData510[i]);
            }

            pixymvb_GetPort( 0x511, &snkPortData511, &refresh_time_511); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[416+64+i] = highbyteLowbyteExchange(snkPortData511[i]);
            }

            pixymvb_GetPort( 0x520, &snkPortData520, &refresh_time_520); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[432+64+i] = highbyteLowbyteExchange(snkPortData520[i]);
            }

            pixymvb_GetPort( 0x521, &snkPortData521, &refresh_time_521); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[448+64+i] = highbyteLowbyteExchange(snkPortData521[i]);
            }

            //pixymvb_GetPort( 0x600, &snkPortData600, &refresh_time_600); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[848+i] = highbyteLowbyteExchange(snkPortData600[i]);
            //}

            pixymvb_GetPort( 0x610, &snkPortData610, &refresh_time_610); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[464+64+i] = highbyteLowbyteExchange(snkPortData610[i]);
            }

            pixymvb_GetPort( 0x611, &snkPortData611, &refresh_time_611); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[480+64+i] = highbyteLowbyteExchange(snkPortData611[i]);
            }

            pixymvb_GetPort( 0x620, &snkPortData620, &refresh_time_620); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[496+64+i] = highbyteLowbyteExchange(snkPortData620[i]);
            }

            pixymvb_GetPort( 0x621, &snkPortData621, &refresh_time_621); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[512+64+i] = highbyteLowbyteExchange(snkPortData621[i]);
            }

            //pixymvb_GetPort( 0x810, &snkPortData810, &refresh_time_710); // Snk Port FC 4
            pixymvb_GetPort( 0x710, &snkPortData710, &refresh_time_710); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[592+i] = highbyteLowbyteExchange(snkPortData710[i]);
            }

            //pixymvb_GetPort( 0x811, &snkPortData711, &refresh_time_711); // Snk Port FC 4
            pixymvb_GetPort( 0x711, &snkPortData711, &refresh_time_711); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[608+i] = highbyteLowbyteExchange(snkPortData711[i]);
            }

            //pixymvb_GetPort( 0x890, &snkPortData790, &refresh_time_790); // Snk Port FC 4
            pixymvb_GetPort( 0x712, &snkPortData712, &refresh_time_712); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1200+i] = highbyteLowbyteExchange(snkPortData790[i]);
                g_dataBuffer_MVB[624+i] = highbyteLowbyteExchange(snkPortData712[i]);
            }


            //pixymvb_GetPort( 0x820, &snkPortData720, &refresh_time_720); // Snk Port FC 4
            pixymvb_GetPort( 0x720, &snkPortData720, &refresh_time_720); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[640+i] = highbyteLowbyteExchange(snkPortData720[i]);
            }

            //pixymvb_GetPort( 0x821, &snkPortData721, &refresh_time_721); // Snk Port FC 4
            pixymvb_GetPort( 0x721, &snkPortData721, &refresh_time_721); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[656+i] = highbyteLowbyteExchange(snkPortData721[i]);
            }

            //pixymvb_GetPort( 0x891, &snkPortData791, &refresh_time_791); // Snk Port FC 4
            pixymvb_GetPort( 0x722, &snkPortData722, &refresh_time_722); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1216+i] = highbyteLowbyteExchange(snkPortData791[i]);
                g_dataBuffer_MVB[672+i] = highbyteLowbyteExchange(snkPortData722[i]);
            }

            //pixymvb_GetPort( 0x830, &snkPortData730, &refresh_time_730); // Snk Port FC 4
            pixymvb_GetPort( 0x730, &snkPortData730, &refresh_time_730); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[688+i] = highbyteLowbyteExchange(snkPortData730[i]);
            }

            //pixymvb_GetPort( 0x831, &snkPortData731, &refresh_time_731); // Snk Port FC 4
            pixymvb_GetPort( 0x731, &snkPortData731, &refresh_time_731); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[704+i] = highbyteLowbyteExchange(snkPortData731[i]);
            }

            //pixymvb_GetPort( 0x8A0, &snkPortData7A0, &refresh_time_7A0); // Snk Port FC 4
            pixymvb_GetPort( 0x732, &snkPortData732, &refresh_time_732); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1232+i] = highbyteLowbyteExchange(snkPortData7A0[i]);
                g_dataBuffer_MVB[720+i] = highbyteLowbyteExchange(snkPortData732[i]);
            }

            //pixymvb_GetPort( 0x840, &snkPortData740, &refresh_time_740); // Snk Port FC 4
            pixymvb_GetPort( 0x740, &snkPortData740, &refresh_time_740); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[736+i] = highbyteLowbyteExchange(snkPortData740[i]);
            }

            //pixymvb_GetPort( 0x841, &snkPortData741, &refresh_time_741); // Snk Port FC 4
            pixymvb_GetPort( 0x741, &snkPortData741, &refresh_time_741); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[752+i] = highbyteLowbyteExchange(snkPortData741[i]);
            }

            //pixymvb_GetPort( 0x8A1, &snkPortData7A1, &refresh_time_7A1); // Snk Port FC 4
            pixymvb_GetPort( 0x742, &snkPortData742, &refresh_time_742); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1248+i] = highbyteLowbyteExchange(snkPortData7A1[i]);
                g_dataBuffer_MVB[768+i] = highbyteLowbyteExchange(snkPortData742[i]);
            }

            //pixymvb_GetPort( 0x850, &snkPortData750, &refresh_time_750); // Snk Port FC 4
            pixymvb_GetPort( 0x750, &snkPortData750, &refresh_time_750); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[784+i] = highbyteLowbyteExchange(snkPortData750[i]);
            }

            //pixymvb_GetPort( 0x851, &snkPortData751, &refresh_time_751); // Snk Port FC 4
            pixymvb_GetPort( 0x751, &snkPortData751, &refresh_time_751); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[800+i] = highbyteLowbyteExchange(snkPortData751[i]);
            }

            //pixymvb_GetPort( 0x8B0, &snkPortData7B0, &refresh_time_7B0); // Snk Port FC 4
            pixymvb_GetPort( 0x752, &snkPortData752, &refresh_time_752); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1264+i] = highbyteLowbyteExchange(snkPortData7B0[i]);
                g_dataBuffer_MVB[816+i] = highbyteLowbyteExchange(snkPortData752[i]);
            }

            //pixymvb_GetPort( 0x860, &snkPortData760, &refresh_time_760); // Snk Port FC 4
            pixymvb_GetPort( 0x760, &snkPortData760, &refresh_time_760); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[832+i] = highbyteLowbyteExchange(snkPortData760[i]);
            }

            //pixymvb_GetPort( 0x861, &snkPortData761, &refresh_time_761); // Snk Port FC 4
            pixymvb_GetPort( 0x761, &snkPortData761, &refresh_time_761); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[848] = highbyteLowbyteExchange(snkPortData761[i]);
            }

            //pixymvb_GetPort( 0x8B1, &snkPortData7B1, &refresh_time_7B1); // Snk Port FC 4
            pixymvb_GetPort( 0x762, &snkPortData762, &refresh_time_762); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[864+i] = highbyteLowbyteExchange(snkPortData762[i]);
            }


            //pixymvb_GetPort( 0x870, &snkPortData770, &refresh_time_770); // Snk Port FC 4
            pixymvb_GetPort( 0x770, &snkPortData770, &refresh_time_770); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[880+i] = highbyteLowbyteExchange(snkPortData770[i]);
            }

            //pixymvb_GetPort( 0x871, &snkPortData771, &refresh_time_771); // Snk Port FC 4
            pixymvb_GetPort( 0x771, &snkPortData771, &refresh_time_771); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[896+i] = highbyteLowbyteExchange(snkPortData771[i]);
            }

            //pixymvb_GetPort( 0x8C0, &snkPortData7C0, &refresh_time_7C0); // Snk Port FC 4
            pixymvb_GetPort( 0x772, &snkPortData772, &refresh_time_772); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1296+i] = highbyteLowbyteExchange(snkPortData7C0[i]);
                g_dataBuffer_MVB[912+i] = highbyteLowbyteExchange(snkPortData772[i]);
            }

            //pixymvb_GetPort( 0x880, &snkPortData780, &refresh_time_780); // Snk Port FC 4
            pixymvb_GetPort( 0x780, &snkPortData780, &refresh_time_780); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[928+i] = highbyteLowbyteExchange(snkPortData780[i]);
            }

            //pixymvb_GetPort( 0x881, &snkPortData781, &refresh_time_781); // Snk Port FC 4
            pixymvb_GetPort( 0x781, &snkPortData781, &refresh_time_781); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[944+i] = highbyteLowbyteExchange(snkPortData781[i]);
            }

            //pixymvb_GetPort( 0x8C1, &snkPortData7C1, &refresh_time_7C1); // Snk Port FC 4
            pixymvb_GetPort( 0x782, &snkPortData782, &refresh_time_782); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[1312+i] = highbyteLowbyteExchange(snkPortData7C1[i]);
                g_dataBuffer_MVB[960+i] = highbyteLowbyteExchange(snkPortData782[i]);
            }

            //pixymvb_GetPort( 0x900, &snkPortData900, &refresh_time_900); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[1568+i] = highbyteLowbyteExchange(snkPortData900[i]);
            //}

            pixymvb_GetPort( 0x910, &snkPortData910, &refresh_time_910); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[912+64+i] = highbyteLowbyteExchange(snkPortData910[i]);
            }

            pixymvb_GetPort( 0x911, &snkPortData911, &refresh_time_911); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[928+64+i] = highbyteLowbyteExchange(snkPortData911[i]);
            }

            pixymvb_GetPort( 0x920, &snkPortData920, &refresh_time_920); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[944+64+i] = highbyteLowbyteExchange(snkPortData920[i]);
            }

            pixymvb_GetPort( 0x921, &snkPortData921, &refresh_time_921); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[960+64+i] = highbyteLowbyteExchange(snkPortData921[i]);
            }

           // pixymvb_GetPort( 0xA00, &snkPortDataA00, &refresh_time_A00); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[1648+i] = highbyteLowbyteExchange(snkPortDataA00[i]);
            //}

            pixymvb_GetPort( 0xA10, &snkPortDataA10, &refresh_time_A10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[976+64+i] = highbyteLowbyteExchange(snkPortDataA10[i]);
            }

            pixymvb_GetPort( 0xA11, &snkPortDataA11, &refresh_time_A11); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[992+64+i] = highbyteLowbyteExchange(snkPortDataA11[i]);
            }

            pixymvb_GetPort( 0xA20, &snkPortDataA20, &refresh_time_A20); // Snk Port FC 4  old
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1008+64+i] = highbyteLowbyteExchange(snkPortDataA20[i]);
            }

            //pixymvb_GetPort( 0x820, &snkPortData820, &refresh_time_820); // Snk Port FC 4
             pixymvb_GetPort( 0xA21, &snkPortDataA21, &refresh_time_A21); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1024+64+i] = highbyteLowbyteExchange(snkPortDataA21[i]);
            }

            //pixymvb_GetPort( 0x830, &snkPortData830, &refresh_time_830); // Snk Port FC 4
            pixymvb_GetPort( 0xA30, &snkPortDataA30, &refresh_time_A30); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1040+64+i] = highbyteLowbyteExchange(snkPortDataA30[i]);
            }

            //pixymvb_GetPort( 0x840, &snkPortData840, &refresh_time_840); // Snk Port FC 4
            pixymvb_GetPort( 0xA31, &snkPortDataA31, &refresh_time_A31); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1056+64+i] = highbyteLowbyteExchange(snkPortDataA31[i]);
            }

            //pixymvb_GetPort( 0x850, &snkPortData850, &refresh_time_850); // Snk Port FC 4
            pixymvb_GetPort( 0xA40, &snkPortDataA40, &refresh_time_A40); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1072+64+i] = highbyteLowbyteExchange(snkPortDataA40[i]);
            }

            //pixymvb_GetPort( 0x860, &snkPortData860, &refresh_time_860); // Snk Port FC 4
            pixymvb_GetPort( 0xA41, &snkPortDataA41, &refresh_time_A41); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1088+64+i] = highbyteLowbyteExchange(snkPortDataA41[i]);
            }

            //pixymvb_GetPort( 0xB00, &snkPortDataB00, &refresh_time_B00); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[1696+i] = highbyteLowbyteExchange(snkPortDataB00[i]);
            //}

            pixymvb_GetPort( 0xB10, &snkPortDataB10, &refresh_time_B10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1104+64+i] = highbyteLowbyteExchange(snkPortDataB10[i]);
            }

            pixymvb_GetPort( 0xB20, &snkPortDataB20, &refresh_time_B20); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1120+64+i] = highbyteLowbyteExchange(snkPortDataB20[i]);
            }





            //pixymvb_GetPort( 0x560, &snkPortData560, &refresh_time_560); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[816+i] = highbyteLowbyteExchange(snkPortData560[i]);
            //}

            //pixymvb_GetPort( 0x561, &snkPortData561, &refresh_time_561); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[832+i] = highbyteLowbyteExchange(snkPortData561[i]);
           // }



            //pixymvb_GetPort( 0x700, &snkPortData700, &refresh_time_700); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[912+i] = highbyteLowbyteExchange(snkPortData700[i]);
            //}

            //pixymvb_GetPort( 0x701, &snkPortData701, &refresh_time_701); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
           //{
            //    g_dataBuffer_MVB[928+i] = highbyteLowbyteExchange(snkPortData701[i]);
            //}






            //pixymvb_GetPort( 0x7D0, &snkPortData7D0, &refresh_time_7D0); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[1328+i] = highbyteLowbyteExchange(snkPortData7D0[i]);
            //}

            //pixymvb_GetPort( 0x7D1, &snkPortData7D1, &refresh_time_7D1); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[1344+i] = highbyteLowbyteExchange(snkPortData7D1[i]);
            //}

            //pixymvb_GetPort( 0x7E0, &snkPortData7E0, &refresh_time_7E0); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[1360+i] = highbyteLowbyteExchange(snkPortData7E0[i]);
            //}

            //pixymvb_GetPort( 0x7E1, &snkPortData7E1, &refresh_time_7E1); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[1376+i] = highbyteLowbyteExchange(snkPortData7E1[i]);
            //}

            //pixymvb_GetPort( 0x7F0, &snkPortData7F0, &refresh_time_7F0); // Snk Port FC 4
            //pixymvb_GetPort( 0xA38, &snkPortDataA38, &refresh_time_A38); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[1392+i] = highbyteLowbyteExchange(snkPortData7F0[i]);
                //g_dataBuffer_MVB[1392+i] = highbyteLowbyteExchange(snkPortDataA38[i]);
            //}

            //pixymvb_GetPort( 0x7F1, &snkPortData7F1, &refresh_time_7F1); // Snk Port FC 4
            //pixymvb_GetPort( 0xA48, &snkPortDataA48, &refresh_time_A48); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[1408+i] = highbyteLowbyteExchange(snkPortData7F1[i]);
                //g_dataBuffer_MVB[1408+i] = highbyteLowbyteExchange(snkPortDataA48[i]);

           // }



            /*pixymvb_GetPort( 0xF00, &snkPortDataF00, &refresh_time_F00); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1744+i] = highbyteLowbyteExchange(snkPortDataF00[i]);
            }

            pixymvb_GetPort( 0xF01, &snkPortDataF01, &refresh_time_F01); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1760+i] = highbyteLowbyteExchange(snkPortDataF01[i]);
            }

            pixymvb_GetPort( 0xF02, &snkPortDataF02, &refresh_time_F02); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1776+i] = highbyteLowbyteExchange(snkPortDataF02[i]);
            }

            pixymvb_GetPort( 0xF03, &snkPortDataF03, &refresh_time_F03); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1792+i] = highbyteLowbyteExchange(snkPortDataF03[i]);
            }

            pixymvb_GetPort( 0xF10, &snkPortDataF10, &refresh_time_F10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1808+i] = highbyteLowbyteExchange(snkPortDataF10[i]);
            }

            pixymvb_GetPort( 0xF11, &snkPortDataF11, &refresh_time_F11); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1824+i] = highbyteLowbyteExchange(snkPortDataF11[i]);
            }

            pixymvb_GetPort( 0xF12, &snkPortDataF12, &refresh_time_F12); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1840+i] = highbyteLowbyteExchange(snkPortDataF12[i]);
            }

            pixymvb_GetPort( 0xF13, &snkPortDataF13, &refresh_time_F13); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1856+i] = highbyteLowbyteExchange(snkPortDataF13[i]);
            }*/


            //CCU to

            //pixymvb_GetPort( 0x108, &snkPortData108, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[2000+i] = highbyteLowbyteExchange(snkPortData108[i]);
            //}

            pixymvb_GetPort( 0x118, &snkPortData118, &refresh_time_118); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
               // g_dataBuffer_MVB[2016+i] = highbyteLowbyteExchange(snkPortData118[i]);
                g_dataBuffer_MVB[1136+64+i] = highbyteLowbyteExchange(snkPortData118[i]);
            }

            pixymvb_GetPort( 0x128, &snkPortData128, &refresh_time_128); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2024+i] = highbyteLowbyteExchange(snkPortData128[i]);
                g_dataBuffer_MVB[1152+64+i] = highbyteLowbyteExchange(snkPortData128[i]);
            }

            pixymvb_GetPort( 0x138, &snkPortData138, &refresh_time_138); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2032+i] = highbyteLowbyteExchange(snkPortData138[i]);
                g_dataBuffer_MVB[1168+64+i] = highbyteLowbyteExchange(snkPortData138[i]);
            }

            pixymvb_GetPort( 0x148, &snkPortData148, &refresh_time_148); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2040+i] = highbyteLowbyteExchange(snkPortData148[i]);
                g_dataBuffer_MVB[1184+64+i] = highbyteLowbyteExchange(snkPortData148[i]);
            }

            //pixymvb_GetPort( 0x158, &snkPortData158, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2048+i] = highbyteLowbyteExchange(snkPortData158[i]);
            //}

            //pixymvb_GetPort( 0x168, &snkPortData168, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2056+i] = highbyteLowbyteExchange(snkPortData168[i]);
            //

            //pixymvb_GetPort( 0x178, &snkPortData178, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2064+i] = highbyteLowbyteExchange(snkPortData178[i]);
            //}

            //pixymvb_GetPort( 0x188, &snkPortData188, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2072+i] = highbyteLowbyteExchange(snkPortData188[i]);
            //}

            pixymvb_GetPort( 0x218, &snkPortData218, &refresh_time_218); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                 g_dataBuffer_MVB[1200+64+i] = highbyteLowbyteExchange(snkPortData218[i]);
            }

            //pixymvb_GetPort( 0x220, &snkPortData220, &refresh_time_220); // Snk Port FC 4
            pixymvb_GetPort( 0x308, &snkPortData308, &refresh_time_308); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2080+i] = highbyteLowbyteExchange(snkPortData220[i]);
                g_dataBuffer_MVB[1216+64+i] = highbyteLowbyteExchange(snkPortData308[i]);
            }

            //pixymvb_GetPort( 0x221, &snkPortData221, &refresh_time_221); // Snk Port FC 4
            pixymvb_GetPort( 0x309, &snkPortData309, &refresh_time_309); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2096+i] = highbyteLowbyteExchange(snkPortData221[i]);
                g_dataBuffer_MVB[1232+64+i] = highbyteLowbyteExchange(snkPortData309[i]);
            }

            //pixymvb_GetPort( 0x222, &snkPortData222, &refresh_time_222); // Snk Port FC 4
            pixymvb_GetPort( 0x318, &snkPortData318, &refresh_time_318); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2112+i] = highbyteLowbyteExchange(snkPortData222[i]);
                g_dataBuffer_MVB[1248+64+i] = highbyteLowbyteExchange(snkPortData318[i]);
            }

            //pixymvb_GetPort( 0x223, &snkPortData223, &refresh_time_223); // Snk Port FC 4
            pixymvb_GetPort( 0x328, &snkPortData328, &refresh_time_328); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2128+i] = highbyteLowbyteExchange(snkPortData223[i]);
                g_dataBuffer_MVB[1264+64+i] = highbyteLowbyteExchange(snkPortData328[i]);
            }

            /*pixymvb_GetPort( 0x408, &snkPortData408, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2144+i] = highbyteLowbyteExchange(snkPortData408[i]);
            }*/

            pixymvb_GetPort( 0x418, &snkPortData418, &refresh_time_418); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1280+64+i] = highbyteLowbyteExchange(snkPortData418[i]);
            }
            pixymvb_GetPort( 0x419, &snkPortData419, &refresh_time_419); // Snk Port FC 4 LMH
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                 g_dataBuffer_MVB[1296+64+i] = highbyteLowbyteExchange(snkPortData419[i]);
            }



            //pixymvb_GetPort( 0x508, &snkPortData508, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2176+i] = highbyteLowbyteExchange(snkPortData508[i]);
            //}

            pixymvb_GetPort( 0x518, &snkPortData518, &refresh_time_518); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1312+64+i] = highbyteLowbyteExchange(snkPortData518[i]);
            }

            pixymvb_GetPort( 0x528, &snkPortData528, &refresh_time_528); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1328+64+i] = highbyteLowbyteExchange(snkPortData528[i]);
            }

            //pixymvb_GetPort( 0x538, &snkPortData538, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2208+i] = highbyteLowbyteExchange(snkPortData538[i]);
            //}

            //pixymvb_GetPort( 0x548, &snkPortData548, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[2216+i] = highbyteLowbyteExchange(snkPortData548[i]);
            //}

            //pixymvb_GetPort( 0x558, &snkPortData558, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2224+i] = highbyteLowbyteExchange(snkPortData558[i]);
            //}

            //pixymvb_GetPort( 0x568, &snkPortData568, &snkTmeSupv); // Snk Port FC 3
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[2232+i] = highbyteLowbyteExchange(snkPortData568[i]);
            //}

            //pixymvb_GetPort( 0x608, &snkPortData608, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[2240+i] = highbyteLowbyteExchange(snkPortData608[i]);
            //}

            pixymvb_GetPort( 0x618, &snkPortData618, &refresh_time_618); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1344+64+i] = highbyteLowbyteExchange(snkPortData618[i]);
            }

            pixymvb_GetPort( 0x628, &snkPortData628, &refresh_time_628); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1360+64+i] = highbyteLowbyteExchange(snkPortData628[i]);
            }

            pixymvb_GetPort( 0x718, &snkPortData718, &refresh_time_718); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1376+64+i] = highbyteLowbyteExchange(snkPortData718[i]);
            }

            //pixymvb_GetPort( 0x708, &snkPortData708, &snkTmeSupv); // Snk Port FC 4
            pixymvb_GetPort( 0x719, &snkPortData719, &refresh_time_719); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2272+i] = highbyteLowbyteExchange(snkPortData708[i]);
                g_dataBuffer_MVB[1392+64+i] = highbyteLowbyteExchange(snkPortData719[i]);
            }

            //pixymvb_GetPort( 0x808, &snkPortData808, &snkTmeSupv); // Snk Port FC 4
            pixymvb_GetPort( 0x71A, &snkPortData71A, &refresh_time_71A); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2296+i] = highbyteLowbyteExchange(snkPortData808[i]);
                g_dataBuffer_MVB[1408+64+i] = highbyteLowbyteExchange(snkPortData71A[i]);
            }

            //pixymvb_GetPort( 0x818, &snkPortData818, &snkTmeSupv); // Snk Port FC 4
            pixymvb_GetPort( 0x72A, &snkPortData72A, &refresh_time_72A); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2312+i] = highbyteLowbyteExchange(snkPortData818[i]);
                g_dataBuffer_MVB[1424+64+i] = highbyteLowbyteExchange(snkPortData72A[i]);
            }

            // pixymvb_GetPort( 0x530, &snkPortData530, &refresh_time_530); // Snk Port FC 4
             pixymvb_GetPort( 0x73A, &snkPortData73A, &refresh_time_73A); // Snk Port FC 4
             // set to be processed snk data
             for (i=0;i<16;i++)
             {
                 //g_dataBuffer_MVB[720+i] = highbyteLowbyteExchange(snkPortData530[i]);
                 g_dataBuffer_MVB[1440+64+i] = highbyteLowbyteExchange(snkPortData73A[i]);
             }

             pixymvb_GetPort( 0x74A, &snkPortData74A, &refresh_time_74A); // Snk Port FC 4
             // set to be processed snk data
             for (i=0;i<16;i++)
             {
                 g_dataBuffer_MVB[1456+64+i] = highbyteLowbyteExchange(snkPortData74A[i]);
             }

             pixymvb_GetPort( 0x75A, &snkPortData75A, &refresh_time_75A); // Snk Port FC 4
             // set to be processed snk data
             for (i=0;i<16;i++)
             {
                 g_dataBuffer_MVB[1472+64+i] = highbyteLowbyteExchange(snkPortData75A[i]);
             }

             //pixymvb_GetPort( 0x541, &snkPortData541, &refresh_time_541); // Snk Port FC 4
             pixymvb_GetPort( 0x76A, &snkPortData76A, &refresh_time_76A); // Snk Port FC 4
             // set to be processed snk data
             for (i=0;i<16;i++)
             {
                 //g_dataBuffer_MVB[768+i] = highbyteLowbyteExchange(snkPortData541[i]);
                 g_dataBuffer_MVB[1488+64+i] = highbyteLowbyteExchange(snkPortData76A[i]);
             }

             //pixymvb_GetPort( 0x550, &snkPortData550, &refresh_time_550); // Snk Port FC 4
             pixymvb_GetPort( 0x77A, &snkPortData77A, &refresh_time_77A); // Snk Port FC 4
             // set to be processed snk data
             for (i=0;i<16;i++)
             {
                 //g_dataBuffer_MVB[784+i] = highbyteLowbyteExchange(snkPortData550[i]);
                 g_dataBuffer_MVB[1504+64+i] = highbyteLowbyteExchange(snkPortData77A[i]);
             }

             //pixymvb_GetPort( 0x551, &snkPortData551, &refresh_time_551); // Snk Port FC 4
             pixymvb_GetPort( 0x78A, &snkPortData78A, &refresh_time_78A); // Snk Port FC 4
             // set to be processed snk data
             for (i=0;i<16;i++)
             {
                 //g_dataBuffer_MVB[800+i] = highbyteLowbyteExchange(snkPortData551[i]);
                 g_dataBuffer_MVB[1520+64+i] = highbyteLowbyteExchange(snkPortData78A[i]);

             }

           // pixymvb_GetPort( 0x908, &snkPortData908, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[2328+i] = highbyteLowbyteExchange(snkPortData908[i]);
            //}

            //pixymvb_GetPort( 0x918, &snkPortData918, &snkTmeSupv); // Snk Port FC 4
            pixymvb_GetPort( 0x918, &snkPortData918, &refresh_time_918); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1536+64+i] = highbyteLowbyteExchange(snkPortData918[i]);
            }

            pixymvb_GetPort( 0x928, &snkPortData928, &refresh_time_928); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1552+64+i] = highbyteLowbyteExchange(snkPortData928[i]);
            }

            //pixymvb_GetPort( 0xA08, &snkPortDataA08, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
            //    g_dataBuffer_MVB[1440+i] = highbyteLowbyteExchange(snkPortDataA08[i]);
            //}

            pixymvb_GetPort( 0xA18, &snkPortDataA18, &refresh_time_A18); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1568+64+i] = highbyteLowbyteExchange(snkPortDataA18[i]);
            }

            //pixymvb_GetPort( 0x880, &snkPortData880, &refresh_time_880); // Snk Port FC 4
            pixymvb_GetPort( 0xA28, &snkPortDataA28, &refresh_time_A28); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1584+64+i] = highbyteLowbyteExchange(snkPortDataA28[i]);
            }

            //pixymvb_GetPort( 0x800, &snkPortData800, &refresh_time_800); // Snk Port FC 4
            pixymvb_GetPort( 0xA38, &snkPortDataA38, &refresh_time_A38); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1600+64+i] = highbyteLowbyteExchange(snkPortDataA38[i]);
            }

            //pixymvb_GetPort( 0x810, &snkPortData810, &refresh_time_810); // Snk Port FC 4  old

            //pixymvb_GetPort( 0x870, &snkPortData870, &refresh_time_870); // Snk Port FC 4
               pixymvb_GetPort( 0xA48, &snkPortDataA48, &refresh_time_A48); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1616+64+i] = highbyteLowbyteExchange(snkPortDataA48[i]);
            }


            //pixymvb_GetPort( 0xB08, &snkPortDataB08, &snkTmeSupv); // Snk Port FC 4
            // set to be processed snk data
            //for (i=0;i<16;i++)
            //{
             //   g_dataBuffer_MVB[1472+i] = highbyteLowbyteExchange(snkPortDataB08[i]);
            //}

            //pixymvb_GetPort( 0xB18, &snkPortDataB18, &snkTmeSupv); // Snk Port FC 3
            pixymvb_GetPort( 0xB18, &snkPortDataB18, &refresh_time_B18); // Snk Port FC 3
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1632+64+i] = highbyteLowbyteExchange(snkPortDataB18[i]);
            }

            pixymvb_GetPort( 0x30A, &snkPortData30A, &refresh_time_30A); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2096+i] = highbyteLowbyteExchange(snkPortData221[i]);
                g_dataBuffer_MVB[1712+i] = highbyteLowbyteExchange(snkPortData30A[i]);
            }

            pixymvb_GetPort( 0xC10, &snkPortDataC10, &refresh_time_C10); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2096+i] = highbyteLowbyteExchange(snkPortData221[i]);
                g_dataBuffer_MVB[1728+i] = highbyteLowbyteExchange(snkPortDataC10[i]);
            }

            pixymvb_GetPort( 0xC20, &snkPortDataC20, &refresh_time_C20); // Snk Port FC 4
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                //g_dataBuffer_MVB[2096+i] = highbyteLowbyteExchange(snkPortData221[i]);
                g_dataBuffer_MVB[1744+i] = highbyteLowbyteExchange(snkPortDataC20[i]);
            }


            msleep(50);

        } // end

    }
       



    mutex.lock();
    if( !restart )
        condition.wait( &mutex );
    restart = false;
    mutex.unlock();
}
UNSIGNED16 MvbThread::highbyteLowbyteExchange( const UNSIGNED16 wordData )
{
    return ( ((wordData&0x00FF)<<8) | ((wordData&0xFF00)>>8) );
}
#ifdef DEBUG
void MvbThread::writeDebugLog( const QString str, const SIGNED16 state )
{
    QFile file("debugLog.txt");
    if (!file.open(QIODevice::Append))
    {
        qDebug("debugLog.txt open failed\n");
        return;
    }
    QTextStream out(&file);
    out << str << ": ";
    switch(state)
    {
    case PIXYMVB_OK:
        out << "PIXYMVB_OK";
        break;
    case PIXYMVB_FAILED:
        out << "PIXYMVB_FAILED";
        break;
    case PIXYMVB_PARAMERR:
        out << "PIXYMVB_PARAMERR";
        break;
    case PIXYMVB_STATEERR:
        out << "PIXYMVB_STATEERR";
        break;
    default:
        out << "UNKNOW_ERROR";
        break;
    }
    out << "!\n";
    file.close();
}
#endif
