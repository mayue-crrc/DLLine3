#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H
#include <QtGui/QApplication>
#include <QTextStream>
#include <QVariant>
#include <QFile>
#include <QDebug>
#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>
#include "serialport485.h"
#include "CPage.h"
#include "DataBuffer.h"

#include <QUdpSocket>

#define MAXDATASIZE 1024

class SerialThread : public QThread
{
    Q_OBJECT
public:
    SerialThread();
    ~SerialThread();
    void render();
    unsigned short GetCRC16( unsigned char *puchMsg, unsigned short usDataLen );
    int writeData( uchar *writeData, int len );
    void portRestart();
    bool isOpen();

signals:
    void SendReadData( int const pageNo, const QByteArray data, int const length );
    void readFaultSignal( int const code ); // -1 port closed, -2 no data in read buffer or data is not enough

public slots:
    void readOutTimerSlot();
    void processRecDatagrams();

private:
    bool init();
    void Read();
    int Open();
    void Close();
    void run();
    void outPortFlush();
    void inPortFlush();

    void getData(uchar const startAddrHi, uchar const startAddrLo, uchar const lenHi, uchar const lenLo );
    void setData();
    int SendRtuCmdToModBus( unsigned char cmd[], unsigned short len );
    SerialPort485 *port;
    QByteArray readArray;
    QHostAddress  address;
    QMutex mutex;//, mutexRead, mutexWrite;
    QWaitCondition condition;
    bool restart;
    bool abort;
    bool readPermit;
    bool isStart;
    int readLength, readPageNo;
    QTimer *readOutTimer;
    QUdpSocket udpSocket;
};

#endif // SERIALTHREAD_H
