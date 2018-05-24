#include "CScrollCtrl.h"
#include "QBitmap"
#include <qpoint.h>

CScrollCtrl::CScrollCtrl()
{
    m_beforeMove = 0;
    m_afterMove = 0;
    m_thumbLength = 80;
    m_typestr = "CScrollCtrl";
    m_pPainter = NULL;
    m_thumbRect.setRect(0,0,0,0);
    m_bIsEnable = true;
}

void CScrollCtrl::Create(__in QString& ctrl_str,
                        __in QRect& ctrl_rc,
                        __in QColor& ctrl_txtcolor,
                        __in QFont& ctrl_font,
                        __in QColor& ctrl_bkcolor,
                        __in QPainter* ctrl_m_pPainter,
                        __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_m_pPainter;
    m_str      = ctrl_str;
    m_beforeMove = m_rect.y() + D_TRIANGLE_HEIGHT;
    m_afterMove = m_rect.y() + D_TRIANGLE_HEIGHT;
    QPoint point(m_rect.x(),(m_rect.y() + D_TRIANGLE_HEIGHT));
    ASSERT(m_pPainter != NULL);
    DrawScrollCtrl(0, point, m_thumbLength);
 }

void CScrollCtrl::SetCtrlText(
                             __in QString /*ctrl_str*/ // CSpeedCtrl text
                            )
{

}

void CScrollCtrl::SetTxtFont(
                            __in QFont /*ctrl_font*/ // CSpeedCtrl font
                           )
{

}

void CScrollCtrl::SetTxtColor(
                             __in QColor /*ctrl_color*/ // CSpeedCtrl text color
                            )
{

}

void CScrollCtrl::SetCtrlBKColor(
                                __in QColor /*ctrl_bkcolor*/ // CSpeedCtrl bk color
                               )
{

}

void CScrollCtrl::SetCtrlRect(
                             __in QRect /*ctrl_rect*/ // CSpeedCtrl rect
                            )
{

}

void CScrollCtrl::DrawScrollCtrl(__in int ctrl_type, __in QPoint thumb_pos,__in int thumb_length)
{
    m_pPainter->setPen(Qt::white);
    m_pPainter->setBrush(m_bkcolor);
    m_pPainter->drawRect(m_rect);
    QRect upRect(m_rect.x(),m_rect.y(),m_rect.width(),D_TRIANGLE_HEIGHT);
    QRect downRect(m_rect.x(),(m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT),m_rect.width(),D_TRIANGLE_HEIGHT);
    m_thumbRect.setRect(m_rect.x(),thumb_pos.y(),m_rect.width(),thumb_length);
    // Triangle
    QPoint ptsDown[] =
    {
        QPoint(downRect.x() + 2,downRect.y() + 5),
        QPoint(downRect.right() - 1,downRect.y() + 5),
        QPoint(downRect.x()+downRect.width()/2, downRect.y() + 15)
    };
    QPoint ptsUp[] =
    {
        QPoint(upRect.x() + 2,upRect.y() + 15),
        QPoint(upRect.right() - 1,upRect.y() + 15),
        QPoint(upRect.x()+upRect.width()/2, upRect.y() + 5)
    };
    switch(ctrl_type)
    {
    case SCROLL_INIT:
        m_pPainter->setBrush(QColor(155,155,255,255));
        m_pPainter->drawRect(upRect);
        m_pPainter->drawRect(downRect);

        m_pPainter->drawRect(m_thumbRect);
        m_pPainter->setPen(Qt::blue);
        m_pPainter->setBrush(Qt::blue);


        m_pPainter->drawConvexPolygon(ptsDown,3);
        m_pPainter->drawConvexPolygon(ptsUp,3);
        break;
    case SCROLL_PUSHUP: // Push Up
        m_pPainter->setBrush(QColor(155,155,255,255));
        m_pPainter->drawRect(downRect);
        m_pPainter->drawRect(m_thumbRect);

        m_pPainter->setBrush(Qt::blue);
        m_pPainter->drawRect(upRect);
        m_pPainter->setPen(Qt::blue);
        m_pPainter->drawConvexPolygon(ptsDown,3);

        m_pPainter->setPen(QColor(155,155,255,255));
        m_pPainter->setBrush(QColor(155,155,255,255));
        m_pPainter->drawConvexPolygon(ptsUp,3);

        break;
    case SCROLL_PUSHDOWN: // Push Down
        m_pPainter->setBrush(QColor(155,155,255,255));
        m_pPainter->drawRect(upRect);
        m_pPainter->drawRect(m_thumbRect);

        m_pPainter->setBrush(Qt::blue);
        m_pPainter->drawRect(downRect);
        m_pPainter->setPen(Qt::blue);
        m_pPainter->drawConvexPolygon(ptsUp,3);

        m_pPainter->setPen(QColor(155,155,255,255));
        m_pPainter->setBrush(QColor(155,155,255,255));
        m_pPainter->drawConvexPolygon(ptsDown,3);
        break;
    case SCROLL_PUSHTHUMB: // Push thumb
        m_pPainter->setBrush(QColor(155,155,255,255));
        m_pPainter->drawRect(upRect);
        m_pPainter->drawRect(downRect);

        m_pPainter->setBrush(Qt::blue);
        m_pPainter->drawRect(m_thumbRect);
        m_pPainter->setPen(Qt::blue);
        // fill Triangle
        m_pPainter->drawConvexPolygon(ptsDown,3);
        m_pPainter->drawConvexPolygon(ptsUp,3);

        break;
    default:
        break;

    }

//    QPixmap scrollBar("resource/image/scrollBar.PNG");
//    QPixmap scrollThumb("resourcQPointse/image/scrollThumb.PNG");
//    QPixmap scrollThumbActive("resource/image/scrollThumbActive.PNG");
//    QPixmap scrollThumbDisable("resource/image/scrollThumbDisable.PNG");
//    QRect cleanRect(m_rect.x(), m_rect.y() - 10, m_rect.width(), m_rect.height());
//
//    //clean
//    m_pPainter->setBrush(QBrush(Qt::black, Qt::SolidPattern));
//    m_pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
//    m_pPainter->drawRect(cleanRect);
//
//
//    m_pPainter->drawPixmap(m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height(), scrollBar);
//    switch(ctrl_type) {
//    case 0://init
//        m_pPainter->drawPixmap(thumb_pos + m_rect.width()/2 - 10, m_rect.y() - 10, 20, 20, scrollThumb);
//        break;
//    case 1://lbuttondown
//        m_pPainter->drawPixmap(thumb_pos, m_rect.y() - 10, 20, 20, scrollThumbActive);
//        break;
//    case 2://lbuttonup
//        m_pPainter->drawPixmap(thumb_pos, m_rect.y() - 10, 20, 20, scrollThumb);
//        break;
//    case 3://mousemove
//        m_pPainter->drawPixmap(thumb_pos, m_rect.y() - 10, 20, 20, scrollThumb);
//        break;
//    default :
//        break;
//    }
}

int CScrollCtrl::SetSelectedPos(__in bool ctrl_push,QPoint pos)
{
    int nOffset = 0;
    int nCtrlPush = 0;
    int nRet = -1;

    m_beforeMove = m_afterMove;
    if (ctrl_push)
    {
        m_LButtonDownPos = pos;
        if (pos.x() >= m_rect.x() && pos.x() <= (m_rect.x() + m_rect.width() ))
        {
            if (pos.y() > (m_rect.y() + D_TRIANGLE_HEIGHT) && pos.y() < (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT))
            {
                nCtrlPush = SCROLL_PUSHTHUMB;
                if (pos.y() > (m_rect.y() + D_TRIANGLE_HEIGHT) && pos.y() < (m_rect.y() + D_TRIANGLE_HEIGHT + m_thumbLength / 2))
                {
                    pos.setY(m_rect.y() + D_TRIANGLE_HEIGHT);
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                }
                else if (pos.y() < (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength / 2))
                {
                    nOffset = (pos.y() - m_rect.y()) / D_SCROLL_OFFSET;
                    pos.setY(m_rect.y() + nOffset * D_SCROLL_OFFSET - m_thumbLength / 2);
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                }
                else if (pos.y() > (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength)
                    && pos.y() < (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT))
                {
           //         QPoint downPos(m_rect.x(),(m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength));
                    pos.setX(m_rect.x());
                    pos.setY((m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength));
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                }
                nRet = SCROLL_PUSHTHUMB;
            }
            // Up Triangle Push
            else if (pos.y() >= m_rect.y() && pos.y() <= (m_rect.y() + D_TRIANGLE_HEIGHT))
            {
                nCtrlPush = SCROLL_PUSHUP;
                if ((m_thumbRect.y() >= (m_rect.y() + D_TRIANGLE_HEIGHT)) && (m_thumbRect.y() < m_rect.y() + m_rect.height()))
                {
                    if (m_thumbRect.y() < (m_rect.y() + D_TRIANGLE_HEIGHT + D_SCROLL_OFFSET))
                    {
                        pos.setY(m_rect.y() + D_SCROLL_OFFSET);
                        DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                        nRet = SCROLL_INIT;
                    }
                    else
                    {
                        pos.setY(m_thumbRect.y() - D_SCROLL_OFFSET);
                        //pos.setY(m_thumbRect.y());
                        DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                        nRet = SCROLL_PUSHUP;
                    }
                }
            }
            // Down Triangle Push
            else if (pos.y() >= (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT) && pos.y() <= ((m_rect.y() + m_rect.height())))
            {
                nCtrlPush = SCROLL_PUSHDOWN;
                if (m_thumbRect.y() > (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength - D_TRIANGLE_HEIGHT))
                {
                    pos.setY(m_rect.y() + m_rect.height() - D_SCROLL_OFFSET - m_thumbLength);
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                    nRet = SCROLL_INIT;
                }
                else
                {
                    pos.setY(m_thumbRect.y() + D_SCROLL_OFFSET);
                    //pos.setY(m_thumbRect.y());
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                    nRet = SCROLL_PUSHDOWN;
                }
            }
            m_afterMove = pos.y();

        }
        else
        {
            pos.setX(m_rect.x());
            pos.setY(m_rect.y() + D_TRIANGLE_HEIGHT);
            DrawScrollCtrl(SCROLL_INIT, pos, m_thumbLength);
        }
    }
    else
    {
          nCtrlPush = SCROLL_INIT;
//        pos.setX(m_thumbRect.x());
//        pos.setY(m_thumbRect.y());
//        DrawScrollCtrl(0, pos, m_thumbLength);
        if (pos.x() > m_rect.x() && pos.x() < (m_rect.x() + m_rect.width() ))
        {
            if (pos.y() > (m_rect.y() + D_TRIANGLE_HEIGHT) && pos.y() < (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT))
            {
                if (pos.y() > (m_rect.y() + D_TRIANGLE_HEIGHT) && pos.y() < (m_rect.y() + D_TRIANGLE_HEIGHT + m_thumbLength / 2))
                {
                    pos.setY(m_rect.y() + D_SCROLL_OFFSET);
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                }
                else if (pos.y() < (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength / 2))
                {
                    nOffset = (pos.y() - m_rect.y()) / D_SCROLL_OFFSET;
                    pos.setY(m_rect.y() + nOffset * D_SCROLL_OFFSET - m_thumbLength / 2);
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                }
                else if (pos.y() > (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength)
                    && pos.y() < (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT))
                {
                    pos.setX(m_rect.x());
                    pos.setY((m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength));
                    //QPoint downPos(m_rect.x(),(m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength));
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                }
                nRet = SCROLL_PUSHTHUMB;
            }
            // Up Triangle Push
            else if (pos.y() >= m_rect.y() && pos.y() <= (m_rect.y() + D_TRIANGLE_HEIGHT))
            {
                if ((m_thumbRect.y() >= (m_rect.y() + D_TRIANGLE_HEIGHT)) && (m_thumbRect.y() < m_rect.y() + m_rect.height()))
                {
                    if (m_thumbRect.y() < (m_rect.y() + D_SCROLL_OFFSET + D_TRIANGLE_HEIGHT))
                    {
                        pos.setY(m_rect.y() + D_SCROLL_OFFSET);
                        DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                        nRet = SCROLL_INIT;
                    }
                    else
                    {
                        pos.setY(m_thumbRect.y());
                        //pos.setY(m_thumbRect.y() - D_SCROLL_OFFSET);
                        DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                        nRet = SCROLL_PUSHUP;
                    }
                }
            }
            // Down Triangle Push
            else if (pos.y() >= (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT) && pos.y() <= ((m_rect.y() + m_rect.height())))
            {
                if (m_thumbRect.y() > (m_rect.y() + m_rect.height() - D_TRIANGLE_HEIGHT - m_thumbLength - D_TRIANGLE_HEIGHT))
                {
                    pos.setY(m_rect.y() + m_rect.height() - D_SCROLL_OFFSET - m_thumbLength);
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                    nRet = SCROLL_INIT;
                }
                else
                {
                    //pos.setY(m_thumbRect.y() + D_SCROLL_OFFSET);
                    pos.setY(m_thumbRect.y());
                    DrawScrollCtrl(nCtrlPush, pos, m_thumbLength);
                    nRet = SCROLL_PUSHDOWN;
                }
             }
        }
        else
        {
            pos.setX(m_rect.x());
            pos.setY(m_rect.y() + D_TRIANGLE_HEIGHT);
            DrawScrollCtrl(SCROLL_INIT, pos, m_thumbLength);
        }
    }
    return nRet;

}
void CScrollCtrl::SetThumbInfo(__in int /*ctrl_type*/, __in int /*thumb_pos*/)
{
    //DrawScrollCtrl(ctrl_type, thumb_pos);
}

int CScrollCtrl::GetMoveOffset()
{
    return (m_afterMove - m_beforeMove);
}
