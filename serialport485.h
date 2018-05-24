#ifndef SERIALPORT485_H
#define SERIALPORT485_H

#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <asm/ioctls.h>
#include <linux/serial.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <QtGlobal>
#define MAXDATASIZE 1024

class SerialPort485
{
public:
    SerialPort485();
    ~SerialPort485();

    int Write( uchar *writeData, int len );
    int Read( uchar *readData );
    void Close();
    int Open();
    bool isOpen();
    void outPortFlush();
    void inPortFlush();
private:
    void init();
    int tcsetup( int, int, struct termios* );
    enum ParityType {
        PAR_NONE,
        PAR_ODD,
        PAR_EVEN,
        PAR_MARK,               //WINDOWS ONLY
        PAR_SPACE
    };//end

    enum StopBitsType {
        STOP_1,
        STOP_1_5,               //WINDOWS ONLY
        STOP_2
    };//end

    int fd;
    int status;
    int Rev_Counter;
    bool ReadStatus;
    int BAUDRATE; 
    int DATABITS; 
    const char *MODEMDEVICE;
};

#endif // SERIALPORT485_H
