#include "CButton.h"

CButton::CButton()
{
    m_typestr = "CButton";
    m_pPainter = NULL;
    m_btnState = LBUTTON_INIT;
    m_bAutoUpState = true;
    m_btnType = BUTTON_NORMAL;
    m_bIsEnable = true;
    m_bHide = false;
    m_bPressed = false;

}

void CButton::Create(
                     __in QString& btn_str,     //button string
                     __in QRect& btn_rc,        //button rect
                     __in QColor& btn_txtcolor, //button text color
                     __in QFont& btn_font,      //button text font
                     __in QColor& btn_bkcolor,  //button bk color
                     __in QPainter* btn_painter,//which picture to draw
                     __in int btn_ID            //button id
                    )
{
    m_txtcolor = btn_txtcolor;
    m_font     = btn_font;
    m_bkcolor  = btn_bkcolor;
    m_rect     = btn_rc;
    m_nID      = btn_ID;
    m_pPainter = btn_painter;
    m_str      = btn_str;
    ASSERT(m_pPainter != NULL);

    DrawButton(m_btnType);
}

void CButton::SetCtrlText(
                           __in QString btn_str //button text
                         )
{
    m_str = btn_str;

    DrawButton(m_btnType);
}

void  CButton::SetTxtFont(
                          __in QFont btn_font // button font
                         )
{
    m_font = btn_font;

    DrawButton(m_btnType);
}

void CButton::SetTxtColor(
                          __in QColor btn_txtcolor //button text color
                         )
{
    m_txtcolor = btn_txtcolor;

    DrawButton(m_btnType);
}

void CButton::SetCtrlBKColor(
                             __in QColor btn_bkcolor //button bk color
                            )
{
    m_bkcolor = btn_bkcolor;

    DrawButton(m_btnType);
}

void CButton::SetCtrlRect(
                          __in QRect btn_rect //button rect
                         )
{
    m_rect= btn_rect;

    DrawButton(m_btnType);
}


void CButton::ChangeButtonAutoUpState(bool nEnable)
{
    m_bAutoUpState=nEnable;

}

void CButton::ChangeButtonState(
                                __in int nBtnState //button state
                               )
{
    if (nBtnState != LBUTTON_DOWN
       && nBtnState != LBUTTON_UP)
    {
        ASSERT(FALSE); //error:unkown enum "BUTTONSTATE" type.
    }

    if (m_bIsEnable == false)
       return;

    m_pPainter->fillRect(m_rect, m_bkcolor);
    m_pPainter->setFont(m_font);
    m_pPainter->setBrush(m_bkcolor);
    m_pPainter->setPen(m_txtcolor);

    m_btnState = nBtnState;

    QRect insideRect(m_rect.x()+3, m_rect.y()+3, m_rect.width()-6, m_rect.height()-6);

    if (nBtnState == LBUTTON_DOWN)
    {
        QRect rect;
        m_pPainter->fillRect(insideRect,QColor(240,240,240));
        rect.setRect(m_rect.left() + 2, m_rect.top() + 2,
                     m_rect.width()-4/*-2*/, m_rect.height()-4/*-2*/);

        m_pPainter->fillRect(rect,Qt::blue);
        m_pPainter->drawText(rect, Qt::AlignCenter, m_str);

        m_bPressed = true;
    }
    else
    {
        if (m_btnType == BUTTON_NORMAL)
        {
                    m_pPainter->fillRect(insideRect,QColor(240,240,240));
         }
            if (m_btnType == BUTTON_STATION) //normal
        {
                m_pPainter->fillRect(insideRect,Qt::green);

        }
            if (m_btnType == BUTTON_STATION1) //normal
        {
                m_pPainter->fillRect(insideRect,Qt::blue);

        }
            if (m_btnType == BUTTON_STATION2) //normal
        {
                m_pPainter->fillRect(insideRect,QColor(255,128,192));// 粉色
        }
        m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);

        m_bPressed = false;
    }
}

void CButton::SetCtrlEnable(bool nEnable)
{
    m_bIsEnable = nEnable;
    DrawButton(m_btnType);
}

void CButton::DrawButton(__in int ntype)
{
    m_pPainter->setFont(m_font);
    switch(ntype)
    {
        case BUTTON_NORMAL://normal
        {
            if (m_bIsEnable == true)
            {
                 ChangeButtonState(LBUTTON_UP);
            }
            else
            {
                m_pPainter->setPen(m_txtcolor);
                m_pPainter->fillRect(m_rect, QColor(150,150,150));
                m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
            }
        }
            break;
        case BUTTON_STATION://normal
        {
            if (m_bIsEnable == true)
            {
                 ChangeButtonState(LBUTTON_UP);
            }
            else
            {
                m_pPainter->setPen(m_txtcolor);
                m_pPainter->fillRect(m_rect, QColor(150,150,150));
                m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
            }
        }
            break;
    case BUTTON_STATION1://normal
    {
        if (m_bIsEnable == true)
        {
             ChangeButtonState(LBUTTON_UP);
        }
        else
        {
            m_pPainter->setPen(m_txtcolor);
            m_pPainter->fillRect(m_rect, QColor(150,150,150));
            m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
        }
    }
        break;
    case BUTTON_STATION2://normal
    {
        if (m_bIsEnable == true)
        {
             ChangeButtonState(LBUTTON_UP);
        }
        else
        {
            m_pPainter->setPen(m_txtcolor);
            m_pPainter->fillRect(m_rect, QColor(150,150,150));
            m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
        }
    }
        break;
        default:
            break;
    }
}

void CButton::SetButtonType(__in int ntype)
{
    m_btnType = ntype;

    DrawButton(m_btnType);
}

int CButton::GetButtonState()
{
    return m_btnState;
}

int CButton::GetButtonType()
{
    return m_btnType;
}

void CButton::ShowButton()
{
   SetCtrlEnable(true);
   DrawButton(m_btnType);
   m_bHide = false;
}

void CButton::HideButton()
{
    SetCtrlEnable(false);
    m_pPainter->fillRect(this->m_rect,Qt::black);
    m_bHide = true;
    m_bPressed = false;
}

bool CButton::IsHide()
{
    return m_bHide;
}

bool CButton::IsPressed()
{
    return this->m_bPressed;
}
