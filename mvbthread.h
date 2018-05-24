#ifndef MvbThread_H
#define MvbThread_H
#include <QtGui/QApplication>
#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>

//#define DEBUG

#ifdef DEBUG
#include <QVariant>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#endif
#include "DataBuffer.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"


class MvbThread : public QThread
{
    Q_OBJECT
public:
    MvbThread();
    ~MvbThread();
    void render();
    //UNSIGNED8 sendData[128];
signals:

public slots:

private:
    bool restart;
    bool abort;
    QWaitCondition condition;
    QMutex mutex;

    //src
    PIXYMVB_Data srcPortData021; // MVB test
    PIXYMVB_Data srcPortData023; // MVB test
    
   // PIXYMVB_Data snkPortDataf;
    PIXYMVB_Data snkPortData1;
    //PIXYMVB_Data srcPortData200;
    //PIXYMVB_Data srcPortData201;
    //PIXYMVB_Data srcPortData202;
    //PIXYMVB_Data srcPortData203;

    //PIXYMVB_Data srcPortData280;
   // PIXYMVB_Data srcPortData281;
    //PIXYMVB_Data srcPortData282;
    //PIXYMVB_Data srcPortData283;

    PIXYMVB_Data srcPortData310;
    PIXYMVB_Data srcPortData311;
    PIXYMVB_Data srcPortData312;
    PIXYMVB_Data srcPortData313;

    PIXYMVB_Data srcPortData320;
    PIXYMVB_Data srcPortData321;
    PIXYMVB_Data srcPortData322;
    PIXYMVB_Data srcPortData323;//LMH
    //snk
    PIXYMVB_Data snkPortData020; // MVB test

	
    PIXYMVB_Data snkPortData100;
    PIXYMVB_Data snkPortData110;
    //PIXYMVB_Data snkPortData114;lmh
    PIXYMVB_Data snkPortData111;
    PIXYMVB_Data snkPortData120;
    PIXYMVB_Data snkPortData121;//lmh
    PIXYMVB_Data snkPortData130;
    PIXYMVB_Data snkPortData131;//lmh
    PIXYMVB_Data snkPortData140;
    PIXYMVB_Data snkPortData141;//lmh
    //PIXYMVB_Data snkPortData150;
    //PIXYMVB_Data snkPortData160;
    //PIXYMVB_Data snkPortData170;
    //PIXYMVB_Data snkPortData180;
    //PIXYMVB_Data snkPortData184;

//    PIXYMVB_Data snkPortData200;
//    PIXYMVB_Data snkPortData201;
//    PIXYMVB_Data snkPortData202;
//    PIXYMVB_Data snkPortData203;

//    PIXYMVB_Data snkPortData280;
//    PIXYMVB_Data snkPortData281;
//    PIXYMVB_Data snkPortData282;
//    PIXYMVB_Data snkPortData283;

    PIXYMVB_Data snkPortData210;
    PIXYMVB_Data snkPortData211;
    PIXYMVB_Data snkPortData212;
    PIXYMVB_Data snkPortData213;

    PIXYMVB_Data snkPortData310;
    PIXYMVB_Data snkPortData311;
    PIXYMVB_Data snkPortData312;
    PIXYMVB_Data snkPortData313;

    PIXYMVB_Data snkPortData320;
    PIXYMVB_Data snkPortData321;
    PIXYMVB_Data snkPortData322;
    PIXYMVB_Data snkPortData323;//lmh

    PIXYMVB_Data snkPortData400;
    PIXYMVB_Data snkPortData410;
    PIXYMVB_Data snkPortData411;
    PIXYMVB_Data snkPortData412;
    PIXYMVB_Data snkPortData413;
    PIXYMVB_Data snkPortData414;
    PIXYMVB_Data snkPortData420;
    PIXYMVB_Data snkPortData421;
    PIXYMVB_Data snkPortData422;
    PIXYMVB_Data snkPortData423;
    PIXYMVB_Data snkPortData424;
    PIXYMVB_Data snkPortData430;
    PIXYMVB_Data snkPortData431;
    PIXYMVB_Data snkPortData432;
    PIXYMVB_Data snkPortData433;
    PIXYMVB_Data snkPortData434;
    PIXYMVB_Data snkPortData440;
    PIXYMVB_Data snkPortData441;
    PIXYMVB_Data snkPortData442;
    PIXYMVB_Data snkPortData443;
    PIXYMVB_Data snkPortData444;
    PIXYMVB_Data snkPortData500;
    PIXYMVB_Data snkPortData510;
    PIXYMVB_Data snkPortData511;
    PIXYMVB_Data snkPortData520;
    PIXYMVB_Data snkPortData521;
    PIXYMVB_Data snkPortData530;
    PIXYMVB_Data snkPortData531;
    PIXYMVB_Data snkPortData540;
    PIXYMVB_Data snkPortData541;
    PIXYMVB_Data snkPortData550;
    PIXYMVB_Data snkPortData551;


    PIXYMVB_Data snkPortData73A;//
    PIXYMVB_Data snkPortData74A;
    PIXYMVB_Data snkPortData75A;
    PIXYMVB_Data snkPortData76A;
    PIXYMVB_Data snkPortData77A;
    PIXYMVB_Data snkPortData78A;//

    PIXYMVB_Data snkPortData560;
    PIXYMVB_Data snkPortData561;
    PIXYMVB_Data snkPortData600;
    PIXYMVB_Data snkPortData610;
    PIXYMVB_Data snkPortData611;
    PIXYMVB_Data snkPortData620;
    PIXYMVB_Data snkPortData621;
    PIXYMVB_Data snkPortData700;
    PIXYMVB_Data snkPortData701;
    PIXYMVB_Data snkPortData710;
    PIXYMVB_Data snkPortData711;
    PIXYMVB_Data snkPortData720;
    PIXYMVB_Data snkPortData721;
    PIXYMVB_Data snkPortData730;
    PIXYMVB_Data snkPortData731;
    PIXYMVB_Data snkPortData740;
    PIXYMVB_Data snkPortData741;
    PIXYMVB_Data snkPortData750;
    PIXYMVB_Data snkPortData751;
    PIXYMVB_Data snkPortData760;
    PIXYMVB_Data snkPortData761;
    PIXYMVB_Data snkPortData770;
    PIXYMVB_Data snkPortData771;
    PIXYMVB_Data snkPortData780;
    PIXYMVB_Data snkPortData781;
    PIXYMVB_Data snkPortData790;
    PIXYMVB_Data snkPortData712;//
    PIXYMVB_Data snkPortData791;
    PIXYMVB_Data snkPortData7A0;
    PIXYMVB_Data snkPortData7A1;
    PIXYMVB_Data snkPortData7B0;
    PIXYMVB_Data snkPortData7B1;
    PIXYMVB_Data snkPortData7C0;
    PIXYMVB_Data snkPortData7C1;

    PIXYMVB_Data snkPortData722;//
    PIXYMVB_Data snkPortData732;
    PIXYMVB_Data snkPortData742;
    PIXYMVB_Data snkPortData752;
    PIXYMVB_Data snkPortData762;
    PIXYMVB_Data snkPortData772;
    PIXYMVB_Data snkPortData782;//

    PIXYMVB_Data snkPortData7D0;
    PIXYMVB_Data snkPortData7D1;
    PIXYMVB_Data snkPortData7E0;
    PIXYMVB_Data snkPortData7E1;
    PIXYMVB_Data snkPortData7F0;
    PIXYMVB_Data snkPortData7F1;
    PIXYMVB_Data snkPortDataA38;//LMH
    PIXYMVB_Data snkPortDataA48;//LMH
    PIXYMVB_Data snkPortData800;
    PIXYMVB_Data snkPortData810;
    PIXYMVB_Data snkPortDataA20;//lmh
    PIXYMVB_Data snkPortData820;
    PIXYMVB_Data snkPortDataA21;//lmh
    PIXYMVB_Data snkPortData830;
    PIXYMVB_Data snkPortDataA30;//LMH
    PIXYMVB_Data snkPortData840;
    PIXYMVB_Data snkPortDataA31;//LMH
    PIXYMVB_Data snkPortData850;
    PIXYMVB_Data snkPortDataA40;//LMH
    PIXYMVB_Data snkPortData860;
    PIXYMVB_Data snkPortDataA41;//LMH
    PIXYMVB_Data snkPortData870;
    PIXYMVB_Data snkPortData880;
    PIXYMVB_Data snkPortDataA28;//LMH
    PIXYMVB_Data snkPortData900;
    PIXYMVB_Data snkPortData910;
    PIXYMVB_Data snkPortData911;
    PIXYMVB_Data snkPortData920;
    PIXYMVB_Data snkPortData921;
    PIXYMVB_Data snkPortDataA00;
    PIXYMVB_Data snkPortDataA10;
    PIXYMVB_Data snkPortDataA11;
    PIXYMVB_Data snkPortDataB00;
    PIXYMVB_Data snkPortDataB10;
    PIXYMVB_Data snkPortDataB20;
    PIXYMVB_Data snkPortDataF00;
    PIXYMVB_Data snkPortDataF01;
    PIXYMVB_Data snkPortDataF02;
    PIXYMVB_Data snkPortDataF03;
    PIXYMVB_Data snkPortDataF10;
    PIXYMVB_Data snkPortDataF11;
    PIXYMVB_Data snkPortDataF12;
    PIXYMVB_Data snkPortDataF13;
    PIXYMVB_Data snkPortData108;
    PIXYMVB_Data snkPortData118;
    PIXYMVB_Data snkPortData128;
    PIXYMVB_Data snkPortData138;
    PIXYMVB_Data snkPortData148;
    PIXYMVB_Data snkPortData158;
    PIXYMVB_Data snkPortData168;
    PIXYMVB_Data snkPortData178;
    PIXYMVB_Data snkPortData188;
    PIXYMVB_Data snkPortData218;
//    PIXYMVB_Data snkPortData220;
//    PIXYMVB_Data snkPortData221;
//    PIXYMVB_Data snkPortData222;
//    PIXYMVB_Data snkPortData223;

    PIXYMVB_Data snkPortData308;
    PIXYMVB_Data snkPortData309;
    PIXYMVB_Data snkPortData30A;
    PIXYMVB_Data snkPortData318;
    PIXYMVB_Data snkPortData328;

    PIXYMVB_Data snkPortData408;
    PIXYMVB_Data snkPortData419;//
    PIXYMVB_Data snkPortData418;
    PIXYMVB_Data snkPortData508;
    PIXYMVB_Data snkPortData518;
    PIXYMVB_Data snkPortData528;
    PIXYMVB_Data snkPortData538;
    PIXYMVB_Data snkPortData548;
    PIXYMVB_Data snkPortData558;
    PIXYMVB_Data snkPortData568;
    PIXYMVB_Data snkPortData608;
    PIXYMVB_Data snkPortData618;
    PIXYMVB_Data snkPortData628;
    PIXYMVB_Data snkPortData708;
    PIXYMVB_Data snkPortData719;//
    PIXYMVB_Data snkPortData718;
    PIXYMVB_Data snkPortData808;

    PIXYMVB_Data snkPortData818;
    PIXYMVB_Data snkPortData908;
    PIXYMVB_Data snkPortData918;
    PIXYMVB_Data snkPortData928;
    PIXYMVB_Data snkPortDataA08;
    PIXYMVB_Data snkPortDataA18;
    PIXYMVB_Data snkPortDataB08;
    PIXYMVB_Data snkPortDataB18;
    PIXYMVB_Data snkPortData71A;//
    PIXYMVB_Data snkPortData72A;//
    PIXYMVB_Data snkPortDataC10;
    PIXYMVB_Data snkPortDataC20;


    //--------------------º¯ÊýÇø---------------------------------------------
    bool init();
    void run();
    UNSIGNED16 highbyteLowbyteExchange( const UNSIGNED16 wordData );
#ifdef DEBUG
    void writeDebugLog( const QString str, const SIGNED16 state );
#endif
};

#endif // MvbThread_H
