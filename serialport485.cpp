#include "serialport485.h"
#include "CGlobal.h"

const int speed_arr[] = { B50, B75, B110, B134, B150, B200, B300, B600, B1200, B1800, B2400, B4800, B9600, B19200, B38400,
			  B57600, B115200, B230400, B460800, B500000, B576000, B921600, B1000000, 
			  B1152000, B1500000, B2000000, B2500000, B3000000, B3500000, B4000000 };
const quint32 name_arr[] = { 50, 75, 110, 134, 150, 200, 300, 600, 1200, 1800, 2400, 4800, 9600, 19200, 38400,
			  57600, 115200, 230400, 460800, 500000, 576000, 921600, 1000000,  //aa
			  1152000, 1500000, 2000000, 2500000, 3000000, 3500000, 4000000 }; //end

SerialPort485::SerialPort485()
{
    // set baudRate
    BAUDRATE = B38400;
    // set COM port
    MODEMDEVICE = "/dev/ttyAP1"; //  ttyS3
    // set databits
    DATABITS = CS8;
    init();
}

SerialPort485::~SerialPort485()
{
    Close();
}

void SerialPort485::init()
{
    Open();
}

int SerialPort485::Open()
{
    struct termios newtio;
   
    if ( ( fd = open( MODEMDEVICE, O_RDWR | O_NOCTTY | O_ASYNC) ) < 0 ){
        return 0;
    } //end
    // port setup
    tcsetup( fd, BAUDRATE, &newtio );

    return 1;
}

int SerialPort485::Read( uchar *readData )
{
    int nread = 0;
    if ( fd != -1 ){
        ioctl( fd, TIOCMGET, &status );
        status &= ~TIOCM_RTS;//or the next line?

        if ( ioctl( fd, TIOCMSET, &status ) < 0 ){
            return 0;
        } // end if

        nread = read( fd, readData, MAXDATASIZE );
    } // end
    return nread;
}

int SerialPort485::Write( uchar *writeData, int len )
{
    int result = 0;
    if ( len > 0 ){
        if ( fd != -1 ){
            ioctl( fd, TIOCMGET, &status );	
            status |= TIOCM_RTS;
            ioctl( fd, TIOCMSET, &status ); /* set the serial port status */
            result = write( fd, writeData, len ); 
            //if write failed 5 times, restart serial port.
            static int times = 0;
            if (result == -1)
            {
                times++;
                if (times == 5)
                {
                    g_isCommunicateErr = true;
                    times = 0;
                }
            }
            else
            {
                times = 0;
            }
        } //end
    } // end
//    ioctl( fd, TIOCMGET, &status );
//    status &= ~TIOCM_RTS;/* set the serial port status */
//    ioctl( fd, TIOCMSET, &status );
    return result;
}

int SerialPort485::tcsetup( int fd, int baudrate, struct termios* tio )
{
    //qDebug() << "tcsetup";
    struct termios cmptio;

    // zero struct and set prefs
    bzero( tio, sizeof( *tio ) );
    // 20090330 add begin________
    // Bit mask for data bits
    tio->c_cflag &= ~CSIZE;
    // no parity check    
    tio->c_cflag &= (~PARENB);
    // set stopBits to 1 bits
    tio->c_cflag &= ~CSTOPB;
    // set stopBits to 2 bits
    //tio->c_cflag |= CSTOPB;
    tio->c_cflag &= ~HUPCL; /* clear the HUPCL bit, close doesn't change DTR */
    // 20090330 add end_________
    // terminal hardware control (c_cflag)
    // DATABITS ( default=CS8 )	-	Specify character size to 8bit
    // CLOCAL - 	Ignore modem control lines
    // CREAD -	Enable receiver
    tio->c_cflag = baudrate | DATABITS | CLOCAL | CREAD | CRTSCTS;


    // !CRTSCTS - 	Do not enable hardware flow control using RTS and CTS
    //tio->c_cflag &= ~CRTSCTS;
    // basic terminal input control (c_iflag)
    // !IGNBRK -	Do not ignore the break condition
    // !IGNCR - 	Do not ignore CR chars
    // !INLCR -	Do not map NL to CR
    // !ICRNL -	Do not map CR to NL
    // !IUCLC - 	Do not map uppercase chars to lowercase
    // !IXANY -	Do not enable any input char to restart suspended output
    // !IXON -	Do not enable start and stop output control by START STOP chars
    // !IXOFF -	Do not enable start and stop input control by START STOP chars
    // !INPCK -	Do not enable input parity checking
    // !ISTRIP - 	Do not strip 8bit chars to 7bit
    // !PARMRK -	Do not prefix chars with a parity error or framing errors
    tio->c_iflag &= ~( IGNBRK | IGNCR | INLCR | ICRNL | IUCLC |
                    IXANY | IXON | IXOFF | INPCK | ISTRIP | PARMRK );
    // BRKINT -	Enable interrupt signal on break condition
    // IGNPAR -	Ignore parity errors and other framing errors
    tio->c_iflag |= ( BRKINT | IGNPAR );

    // system output treatment (c_oflag)
    // !OPOST -	Do not enable post processing of chars
    tio->c_oflag &= ~OPOST;

    // various terminal functions (c_lflag)
    // !XCASE -	Do not enable canonical uppercase and lowercase presentation
    // !ECHONL -	Do not enable line clear on NL. Prevent terminal to hang up on EOF
    // !NOFLSH -	Do not disable queue flushing
    tio->c_lflag &= ~( XCASE | ECHONL | NOFLSH );
    // !ICANON - 	Do not enable canonical input
    // !ISIG - 	Do not enable signals (Do not check against special control chars)
    tio->c_lflag &= ~( ICANON | ISIG | ECHO );

    // control characters (c_cc)
    // VTIME=0 and VMIN=1 block read for at least one char
    tio->c_cc[VTIME] = 0;
    tio->c_cc[VMIN] = 5;

    // flush all data that is received but not read
    if ( tcflush( fd, TCIOFLUSH ) == -1 ){
        perror("tcflush()");
        printf("Maybe the device is not available?\n");
        return 0;
   } //end
   // immediately set attributes 
   if ( tcsetattr( fd,TCSANOW, tio ) == -1 ){     //TCSAFLUSH
       perror( "tcsetattr()" );
       printf( "Maybe the device is not available?\n" );
       return 0;
    } //end
    // reget and compare attributes
    // return 0 when attributes are OK
    if ( tcgetattr( fd, &cmptio ) == -1 ){
        perror( "tcgetattr()" );
        printf( "Maybe the device is not available?\n" );
        return 0;
    } //end
    return( !memcmp( tio, &cmptio, sizeof( *tio ) ) );    
}

void SerialPort485::Close()
{
    tcflush(fd, TCIOFLUSH);
    close(fd);
}

bool SerialPort485::isOpen()
{
    if ( fd != -1 )
        return true;
    else
        return false;
}

void SerialPort485::outPortFlush()
{
    tcflush(fd, TCOFLUSH);
}

void SerialPort485::inPortFlush()
{
    tcflush(fd, TCIFLUSH);
}
