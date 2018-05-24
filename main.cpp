#include <QtGui/QApplication>
#include <QSplashScreen>
#include "dialog.h"
//lmh 11.8
#include <QtDebug>
#include <QFile>
#include <qdir.h>
#include <QTextStream>
#include <QWSServer>

void customMessageHandler(QtMsgType type,const char *msg)//lmh 11.8
{

    QString txt;

    QString pathStr = qApp->applicationDirPath() + "/log/";
    QDir dir(pathStr);
    if(!dir.exists())
        dir.mkdir(pathStr);

    switch(type){

    case QtDebugMsg:
        {
            txt=QString("Debug   : %1").arg( msg);

            QFile logfile_debug( logfileName_debug );
            logfile_debug.open(QIODevice::WriteOnly|QIODevice::Append);
            QTextStream ts_debug(&logfile_debug);
            ts_debug<<txt<<endl;
        }
        break;
    case QtWarningMsg:
        {
            txt=QString("Warning : %1").arg( msg);

            QFile logfile_warning( logfileName_warning );
            logfile_warning.open(QIODevice::WriteOnly|QIODevice::Append);
            QTextStream ts_warning(&logfile_warning);
            ts_warning<<txt<<endl;
        }
        break;
    case QtCriticalMsg:
        txt=QString("Critical: %1").arg(msg);
        break;
    case QtFatalMsg:
        txt=QString("Fatal   : %1").arg(msg);
        break;
//    case QtDebugMsg:
//        txt=QString("Debug: %1").arg(msg);
//        break;

    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //lmh 11.8
    #ifndef USE_RAND_DATA
        #ifdef LOG_OPEN
        a.setOverrideCursor(QCursor(Qt::BlankCursor));
            if (QWSServer::isCursorVisible()) {
                QWSServer::setCursorVisible(false);
            } //end
        system( "find /opt/project/cnrerd/log -mtime +1 -type f |xargs rm -rf " );
        #endif
    #endif
#ifdef USE_RAND_DATA
    #ifdef LOG_OPEN
    system( "find /home/toolchain-inc70-1.0.2-qt4.6.3/opt/Project/cnrerd/CNR_BJ_line6.8.6/log -mtime +1 -type f |xargs rm -rf " );
    #endif
#endif
    QString path = qApp->applicationDirPath();
    #ifdef LOG_OPEN
    QString dateStr = GetDateStr();
    dateStr.replace("-", "");
    QString timeStr = GetTimeStr();
    timeStr.replace(':', "");
    //QString path = qApp->applicationDirPath();
    logfileName_debug   = path + "/log/Log_debug--" + dateStr + "_" + timeStr + ".log";
    logfileName_warning = path + "/log/Log_warning" + dateStr + "_" + timeStr + ".log";
    qInstallMsgHandler(customMessageHandler);
    #endif

    //QString path = qApp->applicationDirPath();
    QString fileName = path + "/resource/image/splash.PNG";
    QFile inifile( fileName );

    if ( inifile.exists( fileName ) )
    {
        QSplashScreen *splash = new QSplashScreen;
        splash->setPixmap(QPixmap("resource/image/splash.PNG"));
        splash->show();
        Dialog w;
        w.show();
        splash->finish(&w);
        delete splash;
        return a.exec();
    }
    else
    {
        Dialog w;
        w.show();
        return a.exec();
    }

//        Dialog w;
//        w.show();
//        return a.exec();




}
