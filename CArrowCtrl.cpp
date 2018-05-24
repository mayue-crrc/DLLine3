#include "CArrowCtrl.h"

CArrowCtrl::CArrowCtrl()
{
    m_typestr = "CArrowCtrl";
    m_pPainter = NULL;
    m_nGuide = ARROW_RIGHT;
    //m_nGuide = ARROW_LEFT;
}

void CArrowCtrl::Create(__in QString& ctrl_str,
                        __in QRect& ctrl_rc,
                        __in QColor& ctrl_frontcolor,
                        __in QFont& ctrl_font,
                        __in QColor& ctrl_bkcolor,
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

    if (m_str == "LEFT")
    {
        m_nGuide = ARROW_LEFT;
    }
    else if (m_str == "RIGHT")
    {
        m_nGuide = ARROW_RIGHT;
    }
    m_str = "";
    DrawArrowCtrl(m_nGuide);
}


void CArrowCtrl::SetCtrlText(
                             __in QString /*ctrl_str*/
                            )
{

}

void  CArrowCtrl::SetTxtFont(
                         __in QFont /*ctrl_font*/ //  font
                        )
{
}

void CArrowCtrl::SetTxtColor(
                             __in QColor /*ctrl_txtcolor*/ // text color
                            )
{
}

void CArrowCtrl::SetCtrlBKColor(
                                __in QColor /*ctrl_bkcolor*/ // bk color
                               )
{
}

void CArrowCtrl::SetCtrlRect(
                             __in QRect /*ctrl_rect*/ // rect
                            )
{
}

void CArrowCtrl::DrawArrowCtrl(__in int nGuide)
{
    QPixmap pic;

    if (nGuide == ARROW_LEFT)
    {
        pic.load("./resource/image/Arrow_Left.PNG");
    }
    if (nGuide == ARROW_RIGHT)
    {
        pic.load("./resource/image/Arrow_Right.PNG");
    }
    if (nGuide == ARROW_RIGHT_LEFT)
    {
        pic.load("./resource/image/Arrow_Right_Left.PNG");
    }

    HideArrow();
    m_pPainter->drawPixmap(m_rect, pic);
}

void CArrowCtrl::SetArrowGuide(
                                __in int nGuide
                              )
{
     DrawArrowCtrl(nGuide);
}

void CArrowCtrl::HideArrow()
{
    int X = m_rect.x(), Y = m_rect.y(), W = m_rect.width(), H = m_rect.height();
    QRect rect(X, Y, W + 2, H + 2);
    m_pPainter->fillRect(rect,Qt::black);

}
