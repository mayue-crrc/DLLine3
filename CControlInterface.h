#ifndef CCONTROLINTERFACE_H
#define CCONTROLINTERFACE_H

#include <QPixmap>
#include <qpainter.h>
#include "CGlobal.h"

class CControlInterface
{
public:
    CControlInterface(){}
    virtual ~CControlInterface(){}

public:  
    QString GetCtrlText()   {return m_str;     }
    QFont   GetTxtFont()    {return m_font;    }
    QColor  GetTxtColor()   {return m_txtcolor;}
    QColor  GetCtrlBKColor(){return m_bkcolor; }
    QRect   GetCtrlRect()   {return m_rect;    }

    virtual void SetCtrlText(__in QString /*ctrl_str*/){}
    virtual void SetTxtFont(__in QFont /*txt_font*/){}
    virtual void SetTxtColor(__in QColor /*txt_color*/){}
    virtual void SetCtrlBKColor(__in QColor /*ctrl_bkcolor*/){}
    virtual void SetCtrlRect(__in QRect /*ctrl_rect*/){}
    virtual void SetCtrlEnable(bool /*bEnable*/){}

    int GetCtrlID(){return m_nID;}
    bool IsCtrlEnable(){return m_bIsEnable;}
    bool IsKindOf(QString type_str){if(type_str==m_typestr)return true; return false;}
    QPainter* GetPainter(){return m_pPainter;}

protected:
    int       m_nID;
    bool      m_bIsEnable;
    QString   m_str;
    QColor    m_bkcolor;
    QFont     m_font;
    QColor    m_txtcolor;
    QRect     m_rect;
    QPainter* m_pPainter;
    QString   m_typestr;
};

#endif // CCONTROLINTERFACE_H
