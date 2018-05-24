#include "serialthread.h"
#include <QQueue>
#include <qdebug.h>
#include <CGlobal.h>

SerialThread::SerialThread()
{
    //port = new SerialPort485();
    udpSocket.bind(8888);
    connect(&udpSocket, SIGNAL(readyRead()),this, SLOT(processRecDatagrams()));

    readOutTimer = new QTimer;
    connect( readOutTimer, SIGNAL( timeout() ), this, SLOT( readOutTimerSlot() ) );
    readOutTimer->start(500);
//    while(!init())
//    {
//        msleep(2000);
//    }

//    readPageNo = -1;
    memset(sendData,0,128);
}

SerialThread::~SerialThread()
{
//    mutex.lock();
//    abort = true;
//    condition.wakeOne();
//    mutex.unlock();

//    wait();
//    Close();
//    delete port;
}

bool SerialThread::init()
{

}

void SerialThread::render()
{
    if ( !isRunning() ) {
        start();
    }else{
        restart = true;
        condition.wakeOne();
    } //end
}
/*

*/
void SerialThread::run()
{
//    static int times = 0;
//    forever{
//        if ( readPermit ){
//            Read();

//            if (readArray.size() >= readLength )
//            {
//                readOutTimerSlot();

//                if (readPageNo >= 6)
//                    readPageNo = -1;

//                times = 0;
//            }
//            else
//            {
//                times++;
//                if (times >= 50)
//                {
//                    readPermit = false;
//                    times = 0;
//                    g_isCommunicateErr = true;
//                }
//            }
//        }//end
//        if ( g_isCommunicateErr == true )
//        {
//            if(!isOpen())
//            {
//                readOutTimer->stop();
//                msleep(100);
//                while(!init())
//                {
//                    msleep(2000);
//                }
//                readOutTimer->start(300);
//                readPageNo = 0;
//                memset(sendData,0,64);
//                g_isCommunicateErr = false;
//            }
//        }
//        msleep(25);
//    } // end
}

void SerialThread::Read()
{

}

bool SerialThread::isOpen()
{

}

void SerialThread::outPortFlush()
{

}

void SerialThread::inPortFlush()
{

}

void SerialThread::portRestart()
{

}

int SerialThread::writeData( uchar *writeData, int len )
{

}

void SerialThread::Close()
{

}

int SerialThread::Open()
{

}

void SerialThread::readOutTimerSlot()
{

        QByteArray datagram;
        uchar cmd[132];
        unsigned short CRC16;

        datagram[0]=3;
        datagram[1]=3;
        for (int i=0; i<128; i++)
            datagram[i+2] = sendData[i];
                                                //datagram[i+2] = i;
        for (int i=0; i<130; i++)
            cmd[i] = datagram[i];

        CRC16=GetCRC16(cmd,130);
        datagram[130]=CRC16/256;
        datagram[131]=CRC16%256;

 //               udpSocket.writeDatagram(datagram,QHostAddress::Broadcast , 8888);
        if(TC1_HMI==1)
        {

                if (Bit(DI_110_1,9) == 1)
                {
                    udpSocket.writeDatagram(datagram,QHostAddress("10.10.25.17") , 8888);
                    udpSocket.writeDatagram(datagram,QHostAddress("10.10.25.19") , 8888);
                }
                //
                udpSocket.writeDatagram(datagram,QHostAddress("10.10.25.23") , 8888);

        }

        if(TC2_HMI==1)
        {
                if (Bit(DI_180_1,9) == 1)
                {
                    udpSocket.writeDatagram(datagram,QHostAddress("10.10.25.17") , 8888);
                    udpSocket.writeDatagram(datagram,QHostAddress("10.10.25.19") , 8888);
                }

                udpSocket.writeDatagram(datagram,QHostAddress("10.10.25.21") , 8888);

        }



}

void SerialThread::getData(uchar const startAddrHi, uchar const startAddrLo, uchar const lenHi, uchar const lenLo )
{
    if(readOutTimer->isActive())
    {
        readOutTimer->stop();
    }

    if ( isOpen() ){
        readLength = 0;
        readArray.clear(); 
        int length = int( lenHi<<8 ) * 2 + int( lenLo ) * 2 +  5;
        uchar cmd[6];
        cmd[0] = 0x01;// slave address
        cmd[1] = 0x03;// modbus function code 
        cmd[2] = startAddrHi;// high byte of read start address 
        cmd[3] = startAddrLo;// low byte of read start address 
        cmd[4] = lenHi;// high byte of read length
        cmd[5] = lenLo;// low byte of read length
        int len = SendRtuCmdToModBus( cmd, 6 );

        if ( len == 8 ){
            readLength = length;
        }//end
        readOutTimer->start( 500 );
        readPermit = true;
    }//end
}

void SerialThread::setData()
{
    if(readOutTimer->isActive())
    {
        readOutTimer->stop();
    }
    if ( isOpen() ){
        readLength = 0;
        readArray.clear(); 
        uchar cmd[71];
        cmd[0] = 0x01;// slave address
        cmd[1] = 0x10;// modbus function code 
        cmd[2] = 0x01;// high byte of write start address
        cmd[3] = 0xF1;// low byte of write start address
        cmd[4] = 0x00;// high byte of write register length
        cmd[5] = 0x20;// low byte of write register length
        cmd[6] = 0x40;// write bytes length = write register length * 2

        for (int i=0; i<64; i++)
            cmd[7+i] = sendData[i]; // data
        int len = SendRtuCmdToModBus( cmd, 71 );
        if ( len == 73 ){
            readLength = 8;
        }//end
        readOutTimer->start( 500 );
        readPermit = true;
    }//end
}


unsigned short SerialThread::GetCRC16(unsigned char *puchMsg, unsigned short usDataLen)    
{    
    static unsigned char auchCRCHi[256] = {
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,    
    0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,    
    0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,    
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,    
    0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,    
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,    
    0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,    
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,    
    0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,    
    0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,    
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,    
    0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,    
    0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,    
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,    
    0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,    
    0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,    
    0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,    
    0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,    
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,    
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40  
    };    //end
      
    static unsigned char auchCRCLo[256] = {
    0x00, 0xC0, 0xC1, 0x01, 0xC3, 0x03, 0x02, 0xC2, 0xC6, 0x06,    
    0x07, 0xC7, 0x05, 0xC5, 0xC4, 0x04, 0xCC, 0x0C, 0x0D, 0xCD,    
    0x0F, 0xCF, 0xCE, 0x0E, 0x0A, 0xCA, 0xCB, 0x0B, 0xC9, 0x09,    
    0x08, 0xC8, 0xD8, 0x18, 0x19, 0xD9, 0x1B, 0xDB, 0xDA, 0x1A,    
    0x1E, 0xDE, 0xDF, 0x1F, 0xDD, 0x1D, 0x1C, 0xDC, 0x14, 0xD4,    
    0xD5, 0x15, 0xD7, 0x17, 0x16, 0xD6, 0xD2, 0x12, 0x13, 0xD3,    
    0x11, 0xD1, 0xD0, 0x10, 0xF0, 0x30, 0x31, 0xF1, 0x33, 0xF3,    
    0xF2, 0x32, 0x36, 0xF6, 0xF7, 0x37, 0xF5, 0x35, 0x34, 0xF4,    
    0x3C, 0xFC, 0xFD, 0x3D, 0xFF, 0x3F, 0x3E, 0xFE, 0xFA, 0x3A,    
    0x3B, 0xFB, 0x39, 0xF9, 0xF8, 0x38, 0x28, 0xE8, 0xE9, 0x29,    
    0xEB, 0x2B, 0x2A, 0xEA, 0xEE, 0x2E, 0x2F, 0xEF, 0x2D, 0xED,    
    0xEC, 0x2C, 0xE4, 0x24, 0x25, 0xE5, 0x27, 0xE7, 0xE6, 0x26,    
    0x22, 0xE2, 0xE3, 0x23, 0xE1, 0x21, 0x20, 0xE0, 0xA0, 0x60,    
    0x61, 0xA1, 0x63, 0xA3, 0xA2, 0x62, 0x66, 0xA6, 0xA7, 0x67,    
    0xA5, 0x65, 0x64, 0xA4, 0x6C, 0xAC, 0xAD, 0x6D, 0xAF, 0x6F,    
    0x6E, 0xAE, 0xAA, 0x6A, 0x6B, 0xAB, 0x69, 0xA9, 0xA8, 0x68,    
    0x78, 0xB8, 0xB9, 0x79, 0xBB, 0x7B, 0x7A, 0xBA, 0xBE, 0x7E,    
    0x7F, 0xBF, 0x7D, 0xBD, 0xBC, 0x7C, 0xB4, 0x74, 0x75, 0xB5,    
    0x77, 0xB7, 0xB6, 0x76, 0x72, 0xB2, 0xB3, 0x73, 0xB1, 0x71,    
    0x70, 0xB0, 0x50, 0x90, 0x91, 0x51, 0x93, 0x53, 0x52, 0x92,    
    0x96, 0x56, 0x57, 0x97, 0x55, 0x95, 0x94, 0x54, 0x9C, 0x5C,    
    0x5D, 0x9D, 0x5F, 0x9F, 0x9E, 0x5E, 0x5A, 0x9A, 0x9B, 0x5B,    
    0x99, 0x59, 0x58, 0x98, 0x88, 0x48, 0x49, 0x89, 0x4B, 0x8B,    
    0x8A, 0x4A, 0x4E, 0x8E, 0x8F, 0x4F, 0x8D, 0x4D, 0x4C, 0x8C,    
    0x44, 0x84, 0x85, 0x45, 0x87, 0x47, 0x46, 0x86, 0x82, 0x42,    
    0x43, 0x83, 0x41, 0x81, 0x80, 0x40  
    };  //end
    unsigned char uchCRCHi = 0xFF ; 
    unsigned char uchCRCLo = 0xFF ; 
    unsigned uIndex = 0; 
      
    while(usDataLen--) 
    {    //start
        uIndex = uchCRCHi ^ *puchMsg++ ; 
        uchCRCHi = uchCRCLo ^ auchCRCHi[uIndex] ;    
        uchCRCLo = auchCRCLo[uIndex] ;    
    }    //end

    return (uchCRCHi << 8 | uchCRCLo) ;    
} 

int SerialThread::SendRtuCmdToModBus(unsigned char cmd[], unsigned short len)  
{
    unsigned short CRC16;
    uchar outArray[len+2];

    CRC16=GetCRC16(cmd,len);
    
    for (unsigned int i=0; i<len; i++)
        outArray[i] = cmd[i];
    outArray[len] = (unsigned char)(CRC16 >> 8 & 0x00FF);
    outArray[len+1] = (unsigned char)(CRC16 & 0x00FF);
    return writeData( outArray, len + 2 );
}//end

void SerialThread::processRecDatagrams()
{

    int UDP_length;

    do {
            readArray.resize(udpSocket.pendingDatagramSize());
            UDP_length=udpSocket.readDatagram(readArray.data(), readArray.size(),&address);
            uchar tmpChar[UDP_length];

            for (int i=0; i<UDP_length; i++ )
            {
                tmpChar[i] = readArray.at(i);
            }



            test_tempdata[90]=UDP_length/256;
            test_tempdata[91]=UDP_length%256;
            test_tempdata[92]=tmpChar[0];
            test_tempdata[93]=tmpChar[1];
            test_tempdata[94]=tmpChar[UDP_length-2];
            test_tempdata[95]=tmpChar[UDP_length-1];
             if(UDP_length==5504)
             {
                 if(TC1_HMI==1)
                 {
                     if(address==QHostAddress("10.10.25.17"))
                     {
                         if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x01 ) )
                         {
                             unsigned short CRC16;
                             CRC16 = GetCRC16( tmpChar, UDP_length-2  );
                             uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                             uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                             if ( CRC16Char1==tmpChar[UDP_length-2] && CRC16Char2==tmpChar[UDP_length-1] )
                             {

                                 for (int i=0; i<((UDP_length-4)/2); i++)
                                 {
                                             g_dataBuffer_UDP[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
                                 }
                                 refresh_time_udp_100= g_dataBuffer_UDP[2500];
                                 refresh_time_udp_110= g_dataBuffer_UDP[2501];
                                 refresh_time_udp_114= g_dataBuffer_UDP[2502];
                                 refresh_time_udp_120= g_dataBuffer_UDP[2503];
                                 refresh_time_udp_130= g_dataBuffer_UDP[2504];
                                 refresh_time_udp_140= g_dataBuffer_UDP[2505];
                                 refresh_time_udp_150= g_dataBuffer_UDP[2506];
                                 refresh_time_udp_160= g_dataBuffer_UDP[2507];
                                 refresh_time_udp_170= g_dataBuffer_UDP[2508];
                                 refresh_time_udp_180= g_dataBuffer_UDP[2509];
                                 refresh_time_udp_184= g_dataBuffer_UDP[2510];
                                 refresh_time_udp_200= g_dataBuffer_UDP[2511];
                                 refresh_time_udp_201= g_dataBuffer_UDP[2512];
                                 refresh_time_udp_202= g_dataBuffer_UDP[2513];
                                 refresh_time_udp_203= g_dataBuffer_UDP[2514];
                                 refresh_time_udp_280= g_dataBuffer_UDP[2515];
                                 refresh_time_udp_281= g_dataBuffer_UDP[2516];
                                 refresh_time_udp_282= g_dataBuffer_UDP[2517];
                                 refresh_time_udp_283= g_dataBuffer_UDP[2518];
                                 refresh_time_udp_400= g_dataBuffer_UDP[2519];
                                 refresh_time_udp_410= g_dataBuffer_UDP[2520];
                                 refresh_time_udp_411= g_dataBuffer_UDP[2521];
                                 refresh_time_udp_412= g_dataBuffer_UDP[2522];
                                 refresh_time_udp_413= g_dataBuffer_UDP[2523];
                                 refresh_time_udp_414= g_dataBuffer_UDP[2524];
                                 refresh_time_udp_420= g_dataBuffer_UDP[2525];
                                 refresh_time_udp_421= g_dataBuffer_UDP[2526];
                                 refresh_time_udp_422= g_dataBuffer_UDP[2527];
                                 refresh_time_udp_423= g_dataBuffer_UDP[2528];
                                 refresh_time_udp_424= g_dataBuffer_UDP[2529];
                                 refresh_time_udp_430= g_dataBuffer_UDP[2530];
                                 refresh_time_udp_431= g_dataBuffer_UDP[2531];
                                 refresh_time_udp_432= g_dataBuffer_UDP[2532];
                                 refresh_time_udp_433= g_dataBuffer_UDP[2533];
                                 refresh_time_udp_434= g_dataBuffer_UDP[2534];
                                 refresh_time_udp_440= g_dataBuffer_UDP[2535];
                                 refresh_time_udp_441= g_dataBuffer_UDP[2536];
                                 refresh_time_udp_442= g_dataBuffer_UDP[2537];
                                 refresh_time_udp_443= g_dataBuffer_UDP[2538];
                                 refresh_time_udp_444= g_dataBuffer_UDP[2539];

                                 refresh_time_udp_500= g_dataBuffer_UDP[2540];
                                 refresh_time_udp_510= g_dataBuffer_UDP[2541];
                                 refresh_time_udp_511= g_dataBuffer_UDP[2542];
                                 refresh_time_udp_520= g_dataBuffer_UDP[2543];
                                 refresh_time_udp_521= g_dataBuffer_UDP[2544];
                                 refresh_time_udp_530= g_dataBuffer_UDP[2545];
                                 refresh_time_udp_531= g_dataBuffer_UDP[2546];
                                 refresh_time_udp_540= g_dataBuffer_UDP[2547];
                                 refresh_time_udp_541= g_dataBuffer_UDP[2548];
                                 refresh_time_udp_550= g_dataBuffer_UDP[2549];
                                 refresh_time_udp_551= g_dataBuffer_UDP[2550];
                                 refresh_time_udp_560= g_dataBuffer_UDP[2551];
                                 refresh_time_udp_561= g_dataBuffer_UDP[2552];
                                 refresh_time_udp_600= g_dataBuffer_UDP[2553];
                                 refresh_time_udp_610= g_dataBuffer_UDP[2554];
                                 refresh_time_udp_611= g_dataBuffer_UDP[2555];
                                 refresh_time_udp_620= g_dataBuffer_UDP[2556];
                                 refresh_time_udp_621= g_dataBuffer_UDP[2557];

                                 refresh_time_udp_700= g_dataBuffer_UDP[2558];
                                 refresh_time_udp_701= g_dataBuffer_UDP[2559];
                                 refresh_time_udp_710= g_dataBuffer_UDP[2560];
                                 refresh_time_udp_711= g_dataBuffer_UDP[2561];
                                 refresh_time_udp_720= g_dataBuffer_UDP[2562];
                                 refresh_time_udp_721= g_dataBuffer_UDP[2563];
                                 refresh_time_udp_730= g_dataBuffer_UDP[2564];
                                 refresh_time_udp_731= g_dataBuffer_UDP[2565];
                                 refresh_time_udp_740= g_dataBuffer_UDP[2566];
                                 refresh_time_udp_741= g_dataBuffer_UDP[2567];
                                 refresh_time_udp_750= g_dataBuffer_UDP[2568];
                                 refresh_time_udp_751= g_dataBuffer_UDP[2569];
                                 refresh_time_udp_760= g_dataBuffer_UDP[2570];
                                 refresh_time_udp_761= g_dataBuffer_UDP[2571];
                                 refresh_time_udp_770= g_dataBuffer_UDP[2572];
                                 refresh_time_udp_771= g_dataBuffer_UDP[2573];
                                 refresh_time_udp_780= g_dataBuffer_UDP[2574];
                                 refresh_time_udp_781= g_dataBuffer_UDP[2575];
                                 refresh_time_udp_790= g_dataBuffer_UDP[2576];
                                 refresh_time_udp_791= g_dataBuffer_UDP[2577];
                                 refresh_time_udp_7A0= g_dataBuffer_UDP[2578];
                                 refresh_time_udp_7A1= g_dataBuffer_UDP[2579];
                                 refresh_time_udp_7B0= g_dataBuffer_UDP[2580];
                                 refresh_time_udp_7B1= g_dataBuffer_UDP[2581];
                                 refresh_time_udp_7C0= g_dataBuffer_UDP[2582];
                                 refresh_time_udp_7C1= g_dataBuffer_UDP[2583];
                                 refresh_time_udp_7D0= g_dataBuffer_UDP[2584];
                                 refresh_time_udp_7D1= g_dataBuffer_UDP[2585];
                                 refresh_time_udp_7E0= g_dataBuffer_UDP[2586];
                                 refresh_time_udp_7E1= g_dataBuffer_UDP[2587];
                                 refresh_time_udp_7F0= g_dataBuffer_UDP[2588];
                                 refresh_time_udp_7F1= g_dataBuffer_UDP[2589];

                                 refresh_time_udp_800= g_dataBuffer_UDP[2590];
                                 refresh_time_udp_810= g_dataBuffer_UDP[2591];
                                 refresh_time_udp_820= g_dataBuffer_UDP[2592];
                                 refresh_time_udp_830= g_dataBuffer_UDP[2593];
                                 refresh_time_udp_840= g_dataBuffer_UDP[2594];
                                 refresh_time_udp_850= g_dataBuffer_UDP[2595];
                                 refresh_time_udp_860= g_dataBuffer_UDP[2596];
                                 refresh_time_udp_870= g_dataBuffer_UDP[2597];
                                 refresh_time_udp_880= g_dataBuffer_UDP[2598];

                                 refresh_time_udp_900= g_dataBuffer_UDP[2599];
                                 refresh_time_udp_910= g_dataBuffer_UDP[2600];
                                 refresh_time_udp_911= g_dataBuffer_UDP[2601];
                                 refresh_time_udp_920= g_dataBuffer_UDP[2602];
                                 refresh_time_udp_921= g_dataBuffer_UDP[2603];

                                 refresh_time_udp_A00= g_dataBuffer_UDP[2604];
                                 refresh_time_udp_A10= g_dataBuffer_UDP[2605];
                                 refresh_time_udp_A11= g_dataBuffer_UDP[2606];

                                 refresh_time_udp_B00= g_dataBuffer_UDP[2607];
                                 refresh_time_udp_B10= g_dataBuffer_UDP[2608];
                                 refresh_time_udp_B20= g_dataBuffer_UDP[2609];

                                 refresh_time_udp_F00= g_dataBuffer_UDP[2610];
                                 refresh_time_udp_F01= g_dataBuffer_UDP[2611];
                                 refresh_time_udp_F02= g_dataBuffer_UDP[2612];
                                 refresh_time_udp_F03= g_dataBuffer_UDP[2613];


                                   udp_num++;
                              }//end
                         }//end
                     }
                 }

                 if(TC2_HMI==1)
                 {
                     if(address==QHostAddress("10.10.25.19"))
                     {
                         if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x01 ) )
                         {
                             unsigned short CRC16;
                             CRC16 = GetCRC16( tmpChar, UDP_length-2  );
                             uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                             uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                             if ( CRC16Char1==tmpChar[UDP_length-2] && CRC16Char2==tmpChar[UDP_length-1] )
                             {

                                 for (int i=0; i<((UDP_length-4)/2); i++)
                                 {
                                             g_dataBuffer_UDP[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
                                 }
                                 refresh_time_udp_100= g_dataBuffer_UDP[2500];
                                 refresh_time_udp_110= g_dataBuffer_UDP[2501];
                                 refresh_time_udp_114= g_dataBuffer_UDP[2502];
                                 refresh_time_udp_120= g_dataBuffer_UDP[2503];
                                 refresh_time_udp_130= g_dataBuffer_UDP[2504];
                                 refresh_time_udp_140= g_dataBuffer_UDP[2505];
                                 refresh_time_udp_150= g_dataBuffer_UDP[2506];
                                 refresh_time_udp_160= g_dataBuffer_UDP[2507];
                                 refresh_time_udp_170= g_dataBuffer_UDP[2508];
                                 refresh_time_udp_180= g_dataBuffer_UDP[2509];
                                 refresh_time_udp_184= g_dataBuffer_UDP[2510];
                                 refresh_time_udp_200= g_dataBuffer_UDP[2511];
                                 refresh_time_udp_201= g_dataBuffer_UDP[2512];
                                 refresh_time_udp_202= g_dataBuffer_UDP[2513];
                                 refresh_time_udp_203= g_dataBuffer_UDP[2514];
                                 refresh_time_udp_280= g_dataBuffer_UDP[2515];
                                 refresh_time_udp_281= g_dataBuffer_UDP[2516];
                                 refresh_time_udp_282= g_dataBuffer_UDP[2517];
                                 refresh_time_udp_283= g_dataBuffer_UDP[2518];
                                 refresh_time_udp_400= g_dataBuffer_UDP[2519];
                                 refresh_time_udp_410= g_dataBuffer_UDP[2520];
                                 refresh_time_udp_411= g_dataBuffer_UDP[2521];
                                 refresh_time_udp_412= g_dataBuffer_UDP[2522];
                                 refresh_time_udp_413= g_dataBuffer_UDP[2523];
                                 refresh_time_udp_414= g_dataBuffer_UDP[2524];
                                 refresh_time_udp_420= g_dataBuffer_UDP[2525];
                                 refresh_time_udp_421= g_dataBuffer_UDP[2526];
                                 refresh_time_udp_422= g_dataBuffer_UDP[2527];
                                 refresh_time_udp_423= g_dataBuffer_UDP[2528];
                                 refresh_time_udp_424= g_dataBuffer_UDP[2529];
                                 refresh_time_udp_430= g_dataBuffer_UDP[2530];
                                 refresh_time_udp_431= g_dataBuffer_UDP[2531];
                                 refresh_time_udp_432= g_dataBuffer_UDP[2532];
                                 refresh_time_udp_433= g_dataBuffer_UDP[2533];
                                 refresh_time_udp_434= g_dataBuffer_UDP[2534];
                                 refresh_time_udp_440= g_dataBuffer_UDP[2535];
                                 refresh_time_udp_441= g_dataBuffer_UDP[2536];
                                 refresh_time_udp_442= g_dataBuffer_UDP[2537];
                                 refresh_time_udp_443= g_dataBuffer_UDP[2538];
                                 refresh_time_udp_444= g_dataBuffer_UDP[2539];

                                 refresh_time_udp_500= g_dataBuffer_UDP[2540];
                                 refresh_time_udp_510= g_dataBuffer_UDP[2541];
                                 refresh_time_udp_511= g_dataBuffer_UDP[2542];
                                 refresh_time_udp_520= g_dataBuffer_UDP[2543];
                                 refresh_time_udp_521= g_dataBuffer_UDP[2544];
                                 refresh_time_udp_530= g_dataBuffer_UDP[2545];
                                 refresh_time_udp_531= g_dataBuffer_UDP[2546];
                                 refresh_time_udp_540= g_dataBuffer_UDP[2547];
                                 refresh_time_udp_541= g_dataBuffer_UDP[2548];
                                 refresh_time_udp_550= g_dataBuffer_UDP[2549];
                                 refresh_time_udp_551= g_dataBuffer_UDP[2550];
                                 refresh_time_udp_560= g_dataBuffer_UDP[2551];
                                 refresh_time_udp_561= g_dataBuffer_UDP[2552];
                                 refresh_time_udp_600= g_dataBuffer_UDP[2553];
                                 refresh_time_udp_610= g_dataBuffer_UDP[2554];
                                 refresh_time_udp_611= g_dataBuffer_UDP[2555];
                                 refresh_time_udp_620= g_dataBuffer_UDP[2556];
                                 refresh_time_udp_621= g_dataBuffer_UDP[2557];

                                 refresh_time_udp_700= g_dataBuffer_UDP[2558];
                                 refresh_time_udp_701= g_dataBuffer_UDP[2559];
                                 refresh_time_udp_710= g_dataBuffer_UDP[2560];
                                 refresh_time_udp_711= g_dataBuffer_UDP[2561];
                                 refresh_time_udp_720= g_dataBuffer_UDP[2562];
                                 refresh_time_udp_721= g_dataBuffer_UDP[2563];
                                 refresh_time_udp_730= g_dataBuffer_UDP[2564];
                                 refresh_time_udp_731= g_dataBuffer_UDP[2565];
                                 refresh_time_udp_740= g_dataBuffer_UDP[2566];
                                 refresh_time_udp_741= g_dataBuffer_UDP[2567];
                                 refresh_time_udp_750= g_dataBuffer_UDP[2568];
                                 refresh_time_udp_751= g_dataBuffer_UDP[2569];
                                 refresh_time_udp_760= g_dataBuffer_UDP[2570];
                                 refresh_time_udp_761= g_dataBuffer_UDP[2571];
                                 refresh_time_udp_770= g_dataBuffer_UDP[2572];
                                 refresh_time_udp_771= g_dataBuffer_UDP[2573];
                                 refresh_time_udp_780= g_dataBuffer_UDP[2574];
                                 refresh_time_udp_781= g_dataBuffer_UDP[2575];
                                 refresh_time_udp_790= g_dataBuffer_UDP[2576];
                                 refresh_time_udp_791= g_dataBuffer_UDP[2577];
                                 refresh_time_udp_7A0= g_dataBuffer_UDP[2578];
                                 refresh_time_udp_7A1= g_dataBuffer_UDP[2579];
                                 refresh_time_udp_7B0= g_dataBuffer_UDP[2580];
                                 refresh_time_udp_7B1= g_dataBuffer_UDP[2581];
                                 refresh_time_udp_7C0= g_dataBuffer_UDP[2582];
                                 refresh_time_udp_7C1= g_dataBuffer_UDP[2583];
                                 refresh_time_udp_7D0= g_dataBuffer_UDP[2584];
                                 refresh_time_udp_7D1= g_dataBuffer_UDP[2585];
                                 refresh_time_udp_7E0= g_dataBuffer_UDP[2586];
                                 refresh_time_udp_7E1= g_dataBuffer_UDP[2587];
                                 refresh_time_udp_7F0= g_dataBuffer_UDP[2588];
                                 refresh_time_udp_7F1= g_dataBuffer_UDP[2589];

                                 refresh_time_udp_800= g_dataBuffer_UDP[2590];
                                 refresh_time_udp_810= g_dataBuffer_UDP[2591];
                                 refresh_time_udp_820= g_dataBuffer_UDP[2592];
                                 refresh_time_udp_830= g_dataBuffer_UDP[2593];
                                 refresh_time_udp_840= g_dataBuffer_UDP[2594];
                                 refresh_time_udp_850= g_dataBuffer_UDP[2595];
                                 refresh_time_udp_860= g_dataBuffer_UDP[2596];
                                 refresh_time_udp_870= g_dataBuffer_UDP[2597];
                                 refresh_time_udp_880= g_dataBuffer_UDP[2598];

                                 refresh_time_udp_900= g_dataBuffer_UDP[2599];
                                 refresh_time_udp_910= g_dataBuffer_UDP[2600];
                                 refresh_time_udp_911= g_dataBuffer_UDP[2601];
                                 refresh_time_udp_920= g_dataBuffer_UDP[2602];
                                 refresh_time_udp_921= g_dataBuffer_UDP[2603];

                                 refresh_time_udp_A00= g_dataBuffer_UDP[2604];
                                 refresh_time_udp_A10= g_dataBuffer_UDP[2605];
                                 refresh_time_udp_A11= g_dataBuffer_UDP[2606];

                                 refresh_time_udp_B00= g_dataBuffer_UDP[2607];
                                 refresh_time_udp_B10= g_dataBuffer_UDP[2608];
                                 refresh_time_udp_B20= g_dataBuffer_UDP[2609];

                                 refresh_time_udp_F00= g_dataBuffer_UDP[2610];
                                 refresh_time_udp_F01= g_dataBuffer_UDP[2611];
                                 refresh_time_udp_F02= g_dataBuffer_UDP[2612];
                                 refresh_time_udp_F03= g_dataBuffer_UDP[2613];


                                   udp_num++;
                              }//end
                         }//end
                     }
                 }

            }
             if(UDP_length==132)
             {
                 if ( ( tmpChar[0] == 0x03 ) && ( tmpChar[1] == 0x03 ) )
                 {
                     unsigned short CRC16;
                     CRC16 = GetCRC16( tmpChar, UDP_length-2  );
                     uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                     uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                     if ( CRC16Char1==tmpChar[UDP_length-2] && CRC16Char2==tmpChar[UDP_length-1] )
                     {
                         udp_num4++;
                         for (int i=0; i<((UDP_length-4)/2); i++)
                         {
                                     g_dataBuffer_UDP_2[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
                         }


                      }//end
                 }//end
             }

    } while (udpSocket.hasPendingDatagrams());

   


}
