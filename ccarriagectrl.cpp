#include "ccarriagectrl.h"

CCarriageCtrl::CCarriageCtrl()
{
    m_typestr = "CCarriageCtrl";
    m_pPainter = NULL;
    m_bIsEnable = true;
    m_nCarType = CARRIAGETYPE_NORMAL;
    m_HeadCarColor      = Qt::green;
    m_EscapeDoorColor = Qt::green;
    m_Warning1_status= false;
    m_Warning2_status= false;
    m_Pantograph_status= false;
    m_Pantograph_isolated=false;
}

void CCarriageCtrl::Create(
                           __in QString& ctrl_str,
                           __in QRect& ctrl_rc,
                           __in QColor& ctrl_txtcolor,
                           __in QFont& ctrl_font,
                           __in QColor& ctrl_bkcolor,
                           __in QPainter* ctrl_painter,
                           __in int ctrl_ID
                          )
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);
    m_pPainter->setFont(m_font);
    m_pPainter->setPen(m_txtcolor);
    m_pPainter->setBrush(m_bkcolor);

    DrawCarriageCtrl();
}

void CCarriageCtrl::SetCtrlText(
                                __in QString ctrl_str
                               )
{
    m_str = ctrl_str;
    DrawCarriageCtrl();
}

void CCarriageCtrl::SetTxtFont(
                                __in QFont /*txt_font*/
                              )
{

}

void CCarriageCtrl::SetTxtColor(
                                __in QColor txt_color
                               )
{
    m_txtcolor = txt_color;
    DrawCarriageCtrl();
}

void CCarriageCtrl::SetCtrlBKColor(
                                   __in QColor ctrl_bkcolor
                                  )
{
    m_bkcolor  = ctrl_bkcolor;
    DrawCarriageCtrl();
}

void CCarriageCtrl::SetCtrlRect(
                                __in QRect ctrl_rect
                               )
{
    m_rect     = ctrl_rect;
    DrawCarriageCtrl();
}

void CCarriageCtrl::SetCtrlEnable(
                                  __in bool nEnable
                                 )
{
    m_bIsEnable = nEnable;
}

void CCarriageCtrl::SetCarType(int nFlag)
{
    m_nCarType = nFlag;
}

void CCarriageCtrl::SetHeadCarColor(
                                    __in QColor color
                                   )

{
    m_HeadCarColor = color;

    DrawCarriageCtrl();
}

void CCarriageCtrl::SetEscapeDoorColor(
                                    __in QColor color
                                   )

{
    m_EscapeDoorColor = color;

    DrawCarriageCtrl();
}

void CCarriageCtrl::SetEmgBrkBtnColor(
                                    __in QColor color
                                   )

{
    m_EmgBrkBtnColor = color;

    DrawCarriageCtrl();
}

void CCarriageCtrl::SetPassengerWarningColor( __in int nCarID,int num,bool warning2,QColor color)
{
    m_nCarID=nCarID;
    m_PassengerWarningColor = color;
    if( num==1)       //1号报警器
    {
        m_Warning1_status=warning2;
    }else if(num==2)   //2号报警器
    {
        m_Warning2_status=warning2;
    }


    DrawCarriageCtrl();
}

void CCarriageCtrl::SetPantograph(__in int nCarID,int up, bool isolated   )

{
    m_nCarID=nCarID;
    m_Pantograph_status=up;
    m_Pantograph_isolated=isolated;

    DrawCarriageCtrl();
}

void CCarriageCtrl::DrawCarriageCtrl()
{
    m_pPainter->fillRect(m_rect,Qt::black);
    m_pPainter->setFont(m_font);
    m_pPainter->setPen(m_txtcolor);
    m_pPainter->setBrush(m_bkcolor);
    QRect carRc;

    int width = m_rect.width();
    int height = m_rect.height();
    int x = m_rect.x();
    int y = m_rect.y();
    int nCircleWidth = m_rect.height()/7;    //画车轮
    carRc.setRect(m_rect.x(),m_rect.y()+height*2/7,m_rect.width(),m_rect.height()*4/7); //画动车
   // int nCircleWidth = m_rect.height()/4;


    m_pPainter->save();

    switch(m_nCarType)
    {
    case CARRIAGETYPE_NORMAL://MP车
        {
            m_pPainter->drawRect(carRc);
            m_pPainter->drawText(carRc, Qt::AlignCenter, m_str);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::white);
//            if((m_nCarID==2)||(m_nCarID==4)||(m_nCarID==7))
//            {

//                iconPantographsLeft( m_pPainter, x+20, y+4, 35, 23, m_Pantograph_status, m_Pantograph_isolated );
//            }

        }


        break;
    case CARRIAGETYPE_PantographsLeft://画上受电弓及车轮MPcar
        {
            m_pPainter->drawRect(carRc);
            m_pPainter->drawText(carRc, Qt::AlignCenter, m_str);
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::white);

            iconPantographsLeft( m_pPainter, (x+width*1/3), (y+height*4/70), (width*1/3), (height*23/70), m_Pantograph_status, m_Pantograph_isolated );

            m_pPainter->drawEllipse(QRect(x+width/8, y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width/8-nCircleWidth, y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width-nCircleWidth-width/8,y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width-width/8,y+height*6/7-1,nCircleWidth,nCircleWidth));
            if(m_Warning1_status==1)//lmh 3.21
            {
                m_pPainter->setBrush(m_PassengerWarningColor);
                m_pPainter->drawRect(QRect(x+1, y+height*5/7-1,width/8,height*1/7));
                m_pPainter->setPen(Qt::white);
             //   m_pPainter->drawText(QRect(x, y+height*5/7-1,width/2,height*1/7), Qt::AlignCenter, QSTR("乘客"));
            }
            if(m_Warning2_status==1)
            {
                m_pPainter->setBrush(m_PassengerWarningColor);
                m_pPainter->drawRect(QRect(x+width*7/8-1, y+height*5/7-1,width/8,height*1/7));
                m_pPainter->setPen(Qt::white);
             //   m_pPainter->drawText(QRect(x+width/2, y+height*5/7-1,width/2,height*2/7), Qt::AlignCenter, QSTR("乘客"));
            }
        }


        break;
    case CARRIAGETYPE_LEFT:
        {
            QPoint pts1[]=
            {
                QPoint(x+width*2/8,y+height*2/7),
                QPoint(x+width,y+height*2/7),
                QPoint(x+width,y+height*6/7),
             //   QPoint(x+width/8,y+height*6/7),
                QPoint(x+width*2/8,y+height*6/7),
            //    QPoint(x,y+height*7/8-nCircleWidth),
            //    QPoint(x,y+height*3/5-nCircleWidth),
            };
            m_pPainter->drawPolygon(pts1,4);//TC1方形车厢   数字是几就取前几个点

            m_pPainter->setPen(m_bkcolor);
            m_pPainter->setBrush(m_HeadCarColor);
            QPoint pts2[] =
            {
                QPoint(x+width/12,y+height*6/7),
                QPoint(x+width*2/8,y+height*6/7),
                QPoint(x+width*2/8,y+height*2/7),
                QPoint(x,y+height*1/2),
                QPoint(x,y+height*11/14),
            };
            m_pPainter->drawPolygon(pts2,5);  //TC1头司控室

            //m_pPainter->setPen(Qt::white);
            //用于逃生门显示


//            m_pPainter->setPen(m_EscapeDoorColor);
//            m_pPainter->setBrush(m_EscapeDoorColor);
//            QPoint pts3[] =
//            {
//                QPoint(x,y+height*1/2),
//                QPoint(x,y+height*5/7),
//                QPoint(x+width/8-2,y+height*5/7),
//                QPoint(x+width/8-2,y+height*1/2),

//            };
//            m_pPainter->drawPolygon(pts3,4);

/***********************The following codes are restored by leo 20160921********/

            m_pPainter->setPen(m_EmgBrkBtnColor);
            m_pPainter->setBrush(m_EmgBrkBtnColor);

            m_pPainter->drawPie(QRect(x+width/8-1,y+height*1/2+2,width/8,width/8),0,180*16);

            QPoint pts4[] =
            {
                QPoint(x+width/8-1+(width/8)*0.5-2,y+height*1/2+2+width/8*0.5),
                QPoint(x+width/8-1+(width/8)*0.5-2,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width/8,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width/8,y+height*1/2+2+width/8*0.5+4+3),
                QPoint(x+width/8-2+width/8,y+height*1/2+2+width/8*0.5+4+3),
                QPoint(x+width/8-2+width/8,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width/8-1+(width/8)*0.5+2,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width/8-1+(width/8)*0.5+2,y+height*1/2+2+width/8*0.5),

            };
            m_pPainter->drawPolygon(pts4,8);



/*****************The codes above are restored by leo 20160921****************/





            m_pPainter->setPen(m_txtcolor);
            m_pPainter->drawText(carRc, Qt::AlignCenter, m_str);

            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::black);

            m_pPainter->drawEllipse(QRect(x+width/8, y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width/8+nCircleWidth, y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width-nCircleWidth-width/8,y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width-width/8,y+height*6/7-1,nCircleWidth,nCircleWidth));

            if(m_Warning1_status==1)//lmh 3.21
            {
                m_pPainter->setBrush(m_PassengerWarningColor);
                m_pPainter->drawRect(QRect(x+width*1/4, y+height*5/7-1,width/8,height*1/7));
                m_pPainter->setPen(Qt::white);
             //   m_pPainter->drawText(QRect(x, y+height*5/7-1,width/2,height*1/7), Qt::AlignCenter, QSTR("乘客"));
            }
            if(m_Warning2_status==1)
            {
                m_pPainter->setBrush(m_PassengerWarningColor);
                m_pPainter->drawRect(QRect(x+width*7/8-1, y+height*5/7-1,width/8,height*1/7));
                m_pPainter->setPen(Qt::white);
             //   m_pPainter->drawText(QRect(x+width/2, y+height*5/7-1,width/2,height*2/7), Qt::AlignCenter, QSTR("乘客"));
            }
        }
        break;
    case CARRIAGETYPE_RIGHT: //TC2
        {
            QPoint pts1[]=
            {
                QPoint(x+width*6/8,y+height*2/7),
                QPoint(x,y+height*2/7),
                QPoint(x,y+height*6/7),
                QPoint(x+width*7/8,y+height*6/7),
                //QPoint(x+width,y+height*7/8-nCircleWidth),
                //QPoint(x+width,y+height*3/5-nCircleWidth),
            };
            m_pPainter->drawPolygon(pts1,4);

            m_pPainter->setPen(m_bkcolor);
            m_pPainter->setBrush(m_HeadCarColor);
            QPoint pts2[]=                              //TC2头司控室
            {
                QPoint(x+width*6/8,y+height*2/7),
                QPoint(x+width*6/8,y+height*6/7),
                QPoint(x+width*7/8+width/24,y+height*6/7),
                QPoint(x+width,y+height*11/14),
                QPoint(x+width,y+height*1/2),
            };
            m_pPainter->drawPolygon(pts2,5);

            //m_pPainter->setPen(Qt::white);

 /***********************The following codes are restored by leo 20160921********/

            //            m_pPainter->setPen(m_EscapeDoorColor);//lmh delete
            //            m_pPainter->setBrush(m_EscapeDoorColor);
            //            QPoint pts3[] =
            //            {

            //                QPoint(x+width*7/8+2,y+height*5/7),
            //                QPoint(x+width*7/8+2,y+height*1/2),
            //                QPoint(x+width,y+height*1/2),
            //                QPoint(x+width,y+height*5/7),

            //            };
            //            m_pPainter->drawPolygon(pts3,4);

            m_pPainter->setPen(m_EmgBrkBtnColor);
            m_pPainter->setBrush(m_EmgBrkBtnColor);
            m_pPainter->drawPie(QRect(x+width*3/4+1,y+height*1/2+2,width/8,width/8),0,180*16);

            QPoint pts5[] =
            {
                QPoint(x+width*3/4+1+(width/8)*0.5-2,y+height*1/2+2+width/8*0.5),
                QPoint(x+width*3/4+1+(width/8)*0.5-2,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width*3/4+2,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width*3/4+2,y+height*1/2+2+width/8*0.5+4+3),
                QPoint(x+width*3/4+width/8,y+height*1/2+2+width/8*0.5+4+3),
                QPoint(x+width*3/4+width/8,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width*3/4+1+(width/8)*0.5+2,y+height*1/2+2+width/8*0.5+4+1),
                QPoint(x+width*3/4+1+(width/8)*0.5+2,y+height*1/2+2+width/8*0.5),

            };
            m_pPainter->drawPolygon(pts5,8);
/***********************The following codes are restored by leo 20160921********/

            m_pPainter->setPen(m_txtcolor);
            m_pPainter->drawText(carRc, Qt::AlignCenter, m_str);
            //m_pPainter->drawText(carRc, Qt::AlignCenter, "123");
            m_pPainter->setPen(Qt::white);
            m_pPainter->setBrush(Qt::black);

            m_pPainter->drawEllipse(QRect(x+width/8, y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width/8-nCircleWidth, y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width-nCircleWidth-width/5,y+height*6/7-1,nCircleWidth,nCircleWidth));
            m_pPainter->drawEllipse(QRect(x+width-width/5,y+height*6/7-1,nCircleWidth,nCircleWidth));

            if(m_Warning1_status==1)//lmh 3.21
            {
                m_pPainter->setBrush(m_PassengerWarningColor);
                m_pPainter->drawRect(QRect(x+1, y+height*5/7-1,width/8,height*1/7));
                m_pPainter->setPen(Qt::white);
             //   m_pPainter->drawText(QRect(x, y+height*5/7-1,width/2,height*1/7), Qt::AlignCenter, QSTR("乘客"));
            }
            if(m_Warning2_status==1)
            {
                m_pPainter->setBrush(m_PassengerWarningColor);
                m_pPainter->drawRect(QRect(x+width*5/8, y+height*5/7-1,width/8,height*1/7));
                m_pPainter->setPen(Qt::white);
             //   m_pPainter->drawText(QRect(x+width/2, y+height*5/7-1,width/2,height*2/7), Qt::AlignCenter, QSTR("乘客"));
            }
        }
        break;
    default:
        ASSERT(false); //unkown type
        break;
    }
    //m_pPainter->drawEllipse(QRect(x+width/8,                   y+height*6/7-1,nCircleWidth,nCircleWidth));
    //m_pPainter->drawEllipse(QRect(x+width-nCircleWidth-width/8,y+height*6/7-1,nCircleWidth,nCircleWidth));//画车轮
//每个车厢执行一次 画客室报警
//    if(m_Warning1_status==1)//lmh 3.21
//    {
//        m_pPainter->setBrush(m_PassengerWarningColor);
//        m_pPainter->drawRect(QRect(x+1, y+height*4/7+3,width/4,height*2/7-4));
//        m_pPainter->setPen(Qt::white);
//     //   m_pPainter->drawText(QRect(x, y+height*5/7-1,width/2,height*1/7), Qt::AlignCenter, QSTR("乘客"));
//    }
//    if(m_Warning2_status==1)
//    {
//        m_pPainter->setBrush(m_PassengerWarningColor);
//        m_pPainter->drawRect(QRect(x+width*3/4-1, y+height*4/7+3,width/4,height*2/7-4));
//        m_pPainter->setPen(Qt::white);
//     //   m_pPainter->drawText(QRect(x+width/2, y+height*5/7-1,width/2,height*2/7), Qt::AlignCenter, QSTR("乘客"));
//    }


    m_pPainter->restore();
}

/******************************************       iconPantographsLeft     ***********************************************/
void CCarriageCtrl::iconPantographsLeft( QPainter* painter,
                                       qreal posX, qreal posY, qreal width, qreal height,
                                       int up, bool isolated )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );

    painter->setPen(Qt::black);
    painter->setBrush(Qt::black);
    painter->drawRect(posX-3, posY-3, width+8, height);

    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( width / 100, height / 100 );

    painter->setPen( QPen( Qt::yellow, 6, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    if( up==1 )
    {
        QPointF points[] = {
            QPointF( -50, -30 ), // 0
            QPointF( -35, -50 ),// 1
            QPointF( 35, -50 ), // 2
            QPointF( 50, -30 ),// 3

            QPointF( 0, -50 ),// 4
            QPointF( -25, 0 ),// 5
            QPointF( 0, 50 ),// 6
        };  // end points
        painter->save();
        painter->drawPolyline( points, 4 );
        painter->drawPolyline( &points[4], 3 );
        painter->restore();
        if( isolated ){
            painter->setPen( Qt::red );
            painter->save();
            painter->drawLine( 50, -50, -50, 50 );
            painter->drawLine( 50, 50, -50, -50 );
            painter->restore();
        } // end isolated
    }
    if( up==0 )
    { //down
        QPointF points[] = {
            QPointF( -50, 20 ), // 0
            QPointF( -35, 0 ),// 1
            QPointF( 35, 0 ), // 2
            QPointF( 50, 20 ),// 3

            QPointF( 0, 0 ),// 4
            QPointF( -25, 25 ),// 5
            QPointF( 0, 50 ),// 6
        };  // end points
        painter->save();
        painter->drawPolyline( points, 4 );
        painter->drawPolyline( &points[4], 3 );
        painter->restore();
//        if( isolated ){
//            painter->setPen( Qt::red );
//            painter->save();
//            painter->drawLine( 50, 0, -50, 50 );
//            painter->drawLine( 50, 50, -50, 0 );
//            painter->restore();
//        } // end isolated
    } //  end else
    if( up==2 )
    {
        painter->setPen(Qt::white);
        painter->setBrush(Qt::white);
        painter->drawRect(-50, -20, 100, 60);
    }
    if( up==3 )
    {
        painter->setPen(Qt::cyan);
        painter->setBrush(Qt::cyan);
        painter->drawRect(-50, -20, 100, 60);
    }

    painter->restore();
}
//iconPantographsLeft( GetPainter(), 198, 112, 35, 18, 0, 0 );
//iconPantographsLeft( GetPainter(), 348, 112, 35, 18, 0, 0 );
//iconPantographsLeft( GetPainter(), 573, 112, 35, 18, 0, 0 );



