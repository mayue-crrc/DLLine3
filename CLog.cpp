#include "CLog.h"
#include <qapplication.h>
#include <qfile.h>
#include "CGlobal.h"
#include <qdebug.h>

string GetModulePathName()
{
   string pathstr;
   char buf[256] = {'\0'};
   int count = 0;

   count = readlink( "/proc/self/exe", buf, 256);
   if( count < 0 || count >= 256 )
   {
     printf( "Failed\n" );
     return "";
   }
   buf[ count ] = '\0';
   //printf( "/proc/self/exe -> [%s]\n", buf );
   pathstr = buf;

   return pathstr;
}

string GetModulePath()
{
  string str = GetModulePathName();
  int nPos = str.rfind('/');

  return str.substr(0,nPos);
}

CLog::CLog()
{
    QString dateStr = GetDateStr();
    dateStr.replace("-", "");
    QString timeStr = GetTimeStr();
    timeStr.replace(':', "");

    m_pathName = GetModulePath() + "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
}

CLog::~CLog()
{
}

int CLog::m_nCommErr = 0;
quint64 CLog::m_nErrPackage = 0;
int CLog::m_nTimeSkip = 0;

void CLog::Log(QString logStr)
{
    if(m_fs.is_open())
    {
        m_fs.write(logStr.toStdString().c_str(), logStr.length());
    }
}

void CLog::Flush()
{
    m_fs.flush();
    m_fs.close();
}

void CLog::Begin()
{
    m_fs.open(m_pathName.c_str(), ios_base::out|ios_base::app);
}

void CLog::End()
{
    Flush();
}


