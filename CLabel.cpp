#include "CLabel.h"

CLabel::CLabel()
{
    m_typestr = "CLabel";
    m_pPainter = NULL;
    m_bIsEnable = true;
    m_bordercolor = Qt::transparent;
    m_nAlignment = Qt::AlignCenter;
}

void CLabel::Create(__in QString ctrl_str,
                    __in QRect ctrl_rc,
                    __in QColor ctrl_frontcolor,
                    __in QFont ctrl_font,
                    __in QColor ctrl_bkcolor,
                    __in QPainter* ctrl_painter,
                    __in int ctrl_ID)
{
    m_txtcolor = ctrl_frontcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    DrawLabel();
}


void CLabel::SetCtrlText(
                         __in QString label_str //label text
                        )
{
    m_str = label_str;
    DrawLabel();
}

void  CLabel::SetTxtFont(
                         __in QFont label_font // label font
                        )
{
    m_font = label_font;
    DrawLabel();
}

void CLabel::SetTxtColor(
                         __in QColor label_txtcolor //label text color
                        )
{
    m_txtcolor = label_txtcolor;
    DrawLabel();
}

void CLabel::SetCtrlBKColor(
                            __in QColor label_bkcolor //label bk color
                           )
{
    m_bkcolor = label_bkcolor;
    DrawLabel();
}

void CLabel::SetCtrlRect(
                         __in QRect label_rect //label rect
                        )
{
    m_rect= label_rect;
    DrawLabel();
}

void CLabel::SetBorderColor(
                            __in QColor label_bordercolor //label Border color
                           )
{
    m_bordercolor = label_bordercolor;
    DrawLabel();
}

void CLabel::DrawLabel()
{
    m_pPainter->save();
    m_pPainter->setBrush(m_bkcolor);
    m_pPainter->fillRect(m_rect, m_bkcolor);

    m_pPainter->setPen(m_txtcolor);
    m_pPainter->setFont(m_font);
    m_pPainter->drawText(m_rect, m_nAlignment, m_str);

    m_pPainter->setPen(m_bordercolor);
    m_pPainter->setBrush(Qt::transparent);
    m_pPainter->drawRect(m_rect);
    m_pPainter->restore();
}

void CLabel::SetAlignment(
                                __in int nAlignment
                              )
{
    if (nAlignment != Qt::AlignLeft
       && nAlignment != Qt::AlignRight
       && nAlignment != Qt::AlignCenter)
    {
        return;
    }
    m_nAlignment = nAlignment|Qt::AlignVCenter;
    DrawLabel();
}

void CLabel::SetLabelState(__in int nState)
{
    switch (nState) {
    case LABELSRATE_DOOR_NORMAL://normal 1
        break;
    case LABELSRATE_DOOR_OPEN://door open 2
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::white);
            m_pPainter->drawRect(m_rect);
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush(Qt::yellow);
            m_pPainter->drawRect(insideRect);
            m_str = QSTR("开");
        }
        break;
    case LABELSRATE_DOOR_CLOSE://door close  3
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::white);
            m_pPainter->drawRect(m_rect);
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawRect(insideRect);
            m_str = QSTR("关");
        }
        break;
    case LABELSRATE_DOOR_UNKNOW://no door infomation  4
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::white);
            m_pPainter->drawRect(m_rect);
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush(Qt::white);
            m_pPainter->drawRect(insideRect);

            m_pPainter->save();
            QPen pen;
            pen.setColor(Qt::black);
            pen.setWidth(2);
            m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
            m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
            m_pPainter->restore();
            m_str = QSTR("");
        }
        break;
    case LABELSRATE_FAULT_INFO://no door infomation  5
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::yellow);
            m_pPainter->setBrush(Qt::yellow);
            m_pPainter->drawRect(m_rect);

            m_pPainter->save();
            QPen pen;
            pen.setColor(Qt::black);
            pen.setWidth(2);
            m_pPainter->setPen(pen);
            m_pPainter->setBrush(Qt::yellow);
            m_pPainter->drawRect(insideRect);
            m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
            m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
            m_pPainter->restore();
        }
        break;
    case LABELSRATE_FAULT_WARNING://no door infomation    6
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::red);
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawRect(m_rect);
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawRect(insideRect);

            m_pPainter->save();
            QPen pen;
            pen.setColor(Qt::black);
            pen.setWidth(2);
            m_pPainter->setPen(pen);
            m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
            m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
            m_pPainter->restore();
        }
        break;
    case LABELSRATE_TCU_STATUS: // hunan add     7 setLabelStatue(6)
        {
            QRect insideRect(m_rect.x() + 2, m_rect.y() + 2, m_rect.width() - 4, m_rect.height() - 4);
            m_pPainter->save();
            QPen pen;
            pen.setColor(Qt::white);
            pen.setWidth(2);
            m_pPainter->setPen(pen);
            m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
            m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
            m_pPainter->restore();
        }
        break;

    case LABELSRATE_RUN_STATUS: // lijian add 8
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawRect(m_rect);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawRect(insideRect);

            m_pPainter->save();
            QPen pen;
            pen.setColor(Qt::white);
            pen.setWidth(2);
            m_pPainter->setPen(pen);
            m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
            m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
            m_pPainter->restore();
        }
        break;

    case LABELSRATE_DOOR_X: //hunan add  9
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->save();
            QPen pen;
            pen.setColor(Qt::black);
            pen.setWidth(2);
            m_pPainter->setPen(pen);
            m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
            m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
            m_pPainter->restore();
        }
        break;
    case LABELSRATE_FAS_roundrect: // 10
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawRoundedRect(insideRect,10.0, 10.0);
//            m_pPainter->setPen(Qt::black);
//            m_pPainter->setBrush(Qt::green);
//            m_pPainter->drawEllipse(insideRect);
            m_str = QSTR("");
        }
        break;
    case LABELSRATE_FAS_red1:
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawRoundedRect(insideRect,10.0, 10.0);
            m_str = QSTR("火");
        }
        break;

    case LABELSRATE_FAS_red2:
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::darkRed);
            m_pPainter->drawRoundedRect(insideRect,10.0, 10.0);
            m_str = QSTR("障");
        }
        break;
    case LABELSRATE_FAS_white:
        {
            QRect insideRect(m_rect.x() + 1, m_rect.y() + 1, m_rect.width() - 2, m_rect.height() - 2);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::white);
            m_pPainter->drawRoundedRect(insideRect,10.0, 10.0);
            m_str = QSTR("");
        }
        break;

    default:
        break;
    }
   // m_pPainter->setPen(m_txtcolor);
    m_pPainter->setFont(m_font);
    m_pPainter->drawText(m_rect, m_nAlignment, m_str);
}

void CLabel::ShowLabel()
{
    DrawLabel();
}

void CLabel::HideLabel()
{
    QRect rc = m_rect;
    rc.setRect(m_rect.x(),m_rect.y(),m_rect.width()+2,m_rect.height()+2);
    m_pPainter->fillRect(rc,Qt::black);
    //m_pPainter->fillRect(rc,Qt::white);
}

//void CLabel::HideLabel()
//{
//    QRect rc = m_rect;
//    rc.setRect(m_rect.x(),m_rect.y(),m_rect.width()+2,m_rect.height()+2);
//    m_pPainter->fillRect(rc,Qt::black);
//}
