#include "ctraindiagramctrl.h"
#include <QPointF>

CTrainDiagramCtrl::CTrainDiagramCtrl()
{
    m_typestr = "CTrainDiagramCtrl";

    car2flag = false;
    //car1
        m_Car1Door1State = 0;
        m_Car1Door2State = 0;
        m_Car1Door3State = 0;
        m_Car1Door4State = 0;
        m_Car1Door5State = 0;
        m_Car1Door6State = 0;
        m_Car1Door7State = 0;
        m_Car1Door8State = 0;

        m_Car1Brake1State = 0;
        m_Car1Brake2State = 0;
        m_Car1Brake3State = 0;

        m_Car1TCU1State = 0;
        m_Car1TCU2State = 0;
        m_Car1ACU1State = 0;
        m_Car1ACU2State = 0;

        m_Car1Key1State = false; // false->no key,true->key on
        m_Car1Key2State = false; // false->no key,true->key on

        m_Car1TrainCode = ""; //no code

        m_Car1TPState = 11; //  11->left down, 22->left up, 33->right down, 44->right up, othres->undisplay
        m_Car1TPIsolated = false; // fasle->unIsolated, true->Isolated
        m_Car1ERState = false;
        m_Car1BreakerState = false;
        //car2
        m_Car2McDirection = false; //left
        m_Car2Door1State = 0;
        m_Car2Door2State = 0;
        m_Car2Door3State = 0;
        m_Car2Door4State = 0;
        m_Car2Door5State = 0;
        m_Car2Door6State = 0;
        m_Car2Door7State = 0;
        m_Car2Door8State = 0;

        m_Car2Brake1State = 0;
        m_Car2Brake2State = 0;
        m_Car2Brake3State = 0;

        m_Car2TCU1State = 0;
        m_Car2TCU2State = 0;
        m_Car2ACU1State = 0;
        m_Car2ACU2State = 0;

        m_Car2Key1State = false; // false->no key,true->key on
        m_Car2Key2State = false; // false->no key,true->key on

        m_Car2TrainCode = ""; //no code

        m_Car2TPState = 11; // 11->left down, 22->left up, 33->right down, 44->right up, othres->undisplay
        m_Car2TPIsolated = false; // fasle->unIsolated, true->Isolated
        m_Car2ERState = false;
        m_Car2BreakerState = false;
        //car3
        m_Car3Door1State = 0;
        m_Car3Door2State = 0;
        m_Car3Door3State = 0;
        m_Car3Door4State = 0;
        m_Car3Door5State = 0;
        m_Car3Door6State = 0;
        m_Car3Door7State = 0;
        m_Car3Door8State = 0;

        m_Car3Brake1State = 0;
        m_Car3Brake2State = 0;
        m_Car3Brake3State = 0;

        m_Car3TCU1State = 0;
        m_Car3TCU2State = 0;
        m_Car3ACU1State = 0;
        m_Car3ACU2State = 0;
        m_Fire1State=0;
        m_Fire2State=0;
        m_Fire3State=0;
        m_Fire4State=0;
        m_Fire5State=0;
        m_Fire6State=0;
        m_Fire7State=0;
        m_Fire8State=0;
        m_Fire9State=0;
        m_Fire10State=0;
        m_Fire11State=0;
        m_Fire12State=0;
        m_Fire13State=0;
        m_Fire14State=0;
        m_Fire15State=0;
        m_Fire16State=0;
        m_Fire17State=0;
        m_Fire18State=0;
        m_Fire19State=0;
        m_Fire20State=0;
        m_Fire21State=0;
        m_Fire22State=0;
        m_Fire23State=0;
        m_Fire24State=0;
        m_Fire25State=0;
        m_Fire26State=0;
        m_Fire27State=0;
        m_Fire28State=0;
        m_Fire29State=0;
        m_Fire30State=0;
        m_Fire31State=0;
        m_Fire32State=0;
        m_Fire33State=0;
        m_Fire34State=0;
        m_Fire35State=0;
        m_Fire36State=0;
        m_Fire37State=0;
        m_Fire38State=0;
        m_Fire39State=0;
        m_Fire40State=0;
        m_Fire41State=0;
        m_Fire42State=0;
        m_Fire43State=0;
        m_Fire44State=0;
        m_Fire45State=0;
        m_Fire46State=0;
        m_Fire47State=0;
        m_Fire48State=0;
        m_Fire49State=0;
        m_Fire50State=0;




        m_Car3Key1State = false; // false->no key,true->key on
        m_Car3Key2State = false; // false->no key,true->key on

        m_Car3TrainCode = ""; //no code

        m_Car3TPState = 11; // 11->left down, 22->left up, 33->right down, 44->right up, othres->undisplay
        m_Car3TPIsolated = false; // fasle->unIsolated, true->Isolated
        m_Car3ERState = false;
        m_Car3BreakerState = false;
}

void CTrainDiagramCtrl::Create(
                             __in QString& ctrl_str,     //button string
                             __in QRect& ctrl_rc,        //button rect
                             __in QColor& ctrl_txtcolor, //button text color
                             __in QFont& ctrl_font,      //button text font
                             __in QColor& ctrl_bkcolor,  //button bk color
                             __in QPainter* ctrl_painter,//which picture to draw
                             __in int ctrl_ID            //button id
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

    this->DrawTrainDiagramCtrl();
}


void CTrainDiagramCtrl::SetCtrlText(
                                       __in QString ctrl_str //button text
                                     )
{
}

void  CTrainDiagramCtrl::SetTxtFont(
                                      __in QFont ctrl_font // button font
                                     )
{
    m_font = ctrl_font;
    m_pPainter->setFont(m_font);
}

void CTrainDiagramCtrl::SetTxtColor(
                                      __in QColor ctrl_txtcolor //button text color
                                     )
{
    m_txtcolor = ctrl_txtcolor;
    m_pPainter->setPen(m_txtcolor);
}

void CTrainDiagramCtrl::SetCtrlBKColor(
                                         __in QColor ctrl_bkcolor //button bk color
                                        )
{
    m_bkcolor = ctrl_bkcolor;
    m_pPainter->setBrush(m_bkcolor);
}

void CTrainDiagramCtrl::SetCtrlRect(
                                      __in QRect ctrl_rect //button rect
                                     )
{
}

void CTrainDiagramCtrl::setCar1Door1State( __in int newCar1Door1State )
{
    m_Car1Door1State = newCar1Door1State;
}
void CTrainDiagramCtrl::setCar1Door2State( __in int newCar1Door2State )
{
    m_Car1Door2State = newCar1Door2State;
}
void CTrainDiagramCtrl::setCar1Door3State( __in int newCar1Door3State )
{
    m_Car1Door3State = newCar1Door3State;
}
void CTrainDiagramCtrl::setCar1Door4State( __in int newCar1Door4State )
{
    m_Car1Door4State = newCar1Door4State;
}
void CTrainDiagramCtrl::setCar1Door5State( __in int newCar1Door5State )
{
    m_Car1Door5State = newCar1Door5State;
}
void CTrainDiagramCtrl::setCar1Door6State( __in int newCar1Door6State )
{
    m_Car1Door6State = newCar1Door6State;
}
void CTrainDiagramCtrl::setCar1Door7State( __in int newCar1Door7State )
{
    m_Car1Door7State = newCar1Door7State;
}
void CTrainDiagramCtrl::setCar1Door8State( __in int newCar1Door8State )
{
    m_Car1Door8State = newCar1Door8State;
}
void CTrainDiagramCtrl::setCar1DoorState( __in int newState[] )
{
    m_Car1Door1State = newState[0];
    m_Car1Door2State = newState[1];
    m_Car1Door3State = newState[2];
    m_Car1Door4State = newState[3];
    m_Car1Door5State = newState[4];
    m_Car1Door6State = newState[5];
    m_Car1Door7State = newState[6];
    m_Car1Door8State = newState[7];
}

void CTrainDiagramCtrl::setCar1Brake1State( __in int newCar1Brake1State )
{
    m_Car1Brake1State = newCar1Brake1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Brake2State( __in int newCar1Brake2State )
{
    m_Car1Brake2State = newCar1Brake2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Brake3State( __in int newCar1Brake3State )
{
    m_Car1Brake3State = newCar1Brake3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TCU1State( __in int newCar1TCU1State )
{
    m_Car1TCU1State = newCar1TCU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TCU2State( __in int newCar1TCU2State )
{
    m_Car1TCU2State = newCar1TCU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1ACU1State( __in int newCar1ACU1State )
{
    m_Car1ACU1State = newCar1ACU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1ACU2State( __in int newCar1ACU2State )
{
    m_Car1ACU2State = newCar1ACU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Key1State( __in bool newCar1Key1State )
{
    m_Car1Key1State = newCar1Key1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Key2State( __in bool newCar1Key2State )
{
    m_Car1Key2State = newCar1Key2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TrainCode( __in QString newCar1TrainCode )
{
    m_Car1TrainCode = newCar1TrainCode;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TPState( __in int newCar1TPState )
{
    m_Car1TPState = newCar1TPState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TPIsolated( __in bool newCar1TPIsolated )
{
    m_Car1TPIsolated = newCar1TPIsolated;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1ERState( __in bool newCar1ERState )
{
    m_Car1ERState = newCar1ERState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1BreakerState( __in bool newCar1BreakerState )
{
    m_Car1BreakerState = newCar1BreakerState;
}
//car2
void CTrainDiagramCtrl::setCar2McDirection( __in int newCar2McDirection )
{
    m_Car2McDirection = newCar2McDirection;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door1State( __in int newCar2Door1State )
{
    m_Car2Door1State = newCar2Door1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door2State( __in int newCar2Door2State )
{
    m_Car2Door2State = newCar2Door2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door3State( __in int newCar2Door3State )
{
    m_Car2Door3State = newCar2Door3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door4State( __in int newCar2Door4State )
{
    m_Car2Door4State = newCar2Door4State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door5State( __in int newCar2Door5State )
{
    m_Car2Door5State = newCar2Door5State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door6State( __in int newCar2Door6State )
{
    m_Car2Door6State = newCar2Door6State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door7State( __in int newCar2Door7State )
{
    m_Car2Door7State = newCar2Door7State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door8State( __in int newCar2Door8State )
{
    m_Car2Door8State = newCar2Door8State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2DoorState( __in int newState[] )
{
    m_Car2Door1State = newState[0];
    m_Car2Door2State = newState[1];
    m_Car2Door3State = newState[2];
    m_Car2Door4State = newState[3];
    m_Car2Door5State = newState[4];
    m_Car2Door6State = newState[5];
    m_Car2Door7State = newState[6];
    m_Car2Door8State = newState[7];
}
void CTrainDiagramCtrl::setCar2Brake1State( __in int newCar2Brake1State )
{
    m_Car2Brake1State = newCar2Brake1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Brake2State( __in int newCar2Brake2State )
{
    m_Car2Brake2State = newCar2Brake2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Brake3State( __in int newCar2Brake3State )
{
    m_Car2Brake3State = newCar2Brake3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TCU1State( __in int newCar2TCU1State )
{
    m_Car2TCU1State = newCar2TCU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TCU2State( __in int newCar2TCU2State )
{
    m_Car2TCU2State = newCar2TCU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2ACU1State( __in int newCar2ACU1State )
{
    m_Car2ACU1State = newCar2ACU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2ACU2State( __in int newCar2ACU2State )
{
    m_Car2ACU2State = newCar2ACU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Key1State( __in bool newCar2Key1State )
{
    m_Car2Key1State = newCar2Key1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Key2State( __in bool newCar2Key2State )
{
    m_Car2Key2State = newCar2Key2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TrainCode( __in QString newCar2TrainCode )
{
    m_Car2TrainCode = newCar2TrainCode;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TPState( __in int newCar2TPState )
{
    m_Car2TPState = newCar2TPState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TPIsolated( __in bool newCar2TPIsolated )
{
    m_Car2TPIsolated = newCar2TPIsolated;
    //DrawTrainDiagramCtrl();
}

void CTrainDiagramCtrl::setCar2ERState( __in bool newCar2ERState )
{
    m_Car2ERState = newCar2ERState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2BreakerState( __in bool newCar2BreakerState )
{
    m_Car2BreakerState = newCar2BreakerState;
}
//car3
void CTrainDiagramCtrl::setCar3Door1State( __in int newCar3Door1State )
{
    m_Car3Door1State = newCar3Door1State;
   // DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door2State( __in int newCar3Door2State )
{
    m_Car3Door2State = newCar3Door2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door3State( __in int newCar3Door3State )
{
    m_Car3Door3State = newCar3Door3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door4State( __in int newCar3Door4State )
{
    m_Car3Door4State = newCar3Door4State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door5State( __in int newCar3Door5State )
{
    m_Car3Door5State = newCar3Door5State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door6State( __in int newCar3Door6State )
{
    m_Car3Door6State = newCar3Door6State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door7State( __in int newCar3Door7State )
{
    m_Car3Door7State = newCar3Door7State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Door8State( __in int newCar3Door8State )
{
    m_Car3Door8State = newCar3Door8State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3DoorState( __in int newState[] )
{
    m_Car3Door1State = newState[0];
    m_Car3Door2State = newState[1];
    m_Car3Door3State = newState[2];
    m_Car3Door4State = newState[3];
    m_Car3Door5State = newState[4];
    m_Car3Door6State = newState[5];
    m_Car3Door7State = newState[6];
    m_Car3Door8State = newState[7];
}
void CTrainDiagramCtrl::setCar3Brake1State( __in int newCar3Brake1State )
{
    m_Car3Brake1State = newCar3Brake1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Brake2State( __in int newCar3Brake2State )
{
    m_Car3Brake2State = newCar3Brake2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Brake3State( __in int newCar3Brake3State )
{
    m_Car3Brake3State = newCar3Brake3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3TCU1State( __in int newCar3TCU1State )
{
    m_Car3TCU1State = newCar3TCU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3TCU2State( __in int newCar3TCU2State )
{
    m_Car3TCU2State = newCar3TCU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3ACU1State( __in int newCar3ACU1State )
{
    m_Car3ACU1State = newCar3ACU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3ACU2State( __in int newCar3ACU2State )
{
    m_Car3ACU2State = newCar3ACU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Key1State( __in bool newCar3Key1State )
{
    m_Car3Key1State = newCar3Key1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3Key2State( __in bool newCar3Key2State )
{
    m_Car3Key2State = newCar3Key2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3TrainCode( __in QString newCar3TrainCode )
{
    m_Car3TrainCode = newCar3TrainCode;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3TPState( __in int newCar3TPState )
{
    m_Car3TPState = newCar3TPState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3TPIsolated( __in bool newCar3TPIsolated )
{
    m_Car3TPIsolated = newCar3TPIsolated;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3ERState( __in bool newCar3ERState )
{
    m_Car3ERState = newCar3ERState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar3BreakerState( __in bool newCar3BreakerState )
{
    m_Car3BreakerState = newCar3BreakerState;
}

void CTrainDiagramCtrl::DrawTrainDiagramCtrl()
{

    m_pPainter->fillRect(m_rect,Qt::black);
    m_pPainter->setFont(m_font);
    m_pPainter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    m_pPainter->setBrush(m_bkcolor);
    QRect carRc;

    int width = m_rect.width();
    int height = m_rect.height();
    int x = m_rect.x();
    int y = m_rect.y();
    int nCircleWidth = m_rect.height()/7;
    carRc.setRect(m_rect.x(),m_rect.y()+height*2/7,m_rect.width(),m_rect.height()*4/7);
   // int nCircleWidth = m_rect.height()/4;
    //painter->setPen( QPen( Qt::yellow, 6, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );

    m_pPainter->save();


    QPoint pts1[]=
    {
        QPoint(x+width*3/78,y),
        //QPoint(x+width*75/78,y),
        QPoint(x+width*57/78,y),
        //QPoint(x+width,y+height*3/15),
        //QPoint(x+width,y+height*12/15),
        QPoint(x+width*60/78,y+height*3/15),
        QPoint(x+width*60/78,y+height*12/15),
        //QPoint(x+width*75/78,y+height),
        QPoint(x+width*57/78,y+height),
        QPoint(x+width*3/78,y+height),
        QPoint(x,y+height*12/15),
        QPoint(x,y+height*3/15),

        QPoint(x+width*15/78,y),
        QPoint(x+width*15/78,y+height),

        QPoint(x+width*30/78,y),
        QPoint(x+width*30/78,y+height),

        QPoint(x+width*45/78,y),
        QPoint(x+width*45/78,y+height),

       // QPoint(x+width*39/78,y),
        //QPoint(x+width*39/78,y+height),

       // QPoint(x+width*48/78,y),
        //QPoint(x+width*48/78,y+height),

        //QPoint(x+width*57/78,y),
        //QPoint(x+width*57/78,y+height),

       // QPoint(x+width*66/78,y),
        //QPoint(x+width*66/78,y+height),


    //    QPoint(x,y+height*7/8-nCircleWidth),
    //    QPoint(x,y+height*3/5-nCircleWidth),
    };
    m_pPainter->drawPolygon(pts1,8);

    m_pPainter->drawLine( pts1[0], pts1[5] );
    m_pPainter->drawLine( pts1[8], pts1[9] );
    m_pPainter->drawLine( pts1[10], pts1[11] );
    m_pPainter->drawLine( pts1[12], pts1[13] );
    //m_pPainter->drawLine( pts1[14], pts1[15] );
    //m_pPainter->drawLine( pts1[16], pts1[17] );
    //m_pPainter->drawLine( pts1[18], pts1[19] );
    //m_pPainter->drawLine( pts1[20], pts1[21] );
    m_pPainter->drawLine( pts1[1], pts1[4] );


       // carRc.setRect(m_rect.x()+m_rect.width()*3/78+1*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);

        //car1
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);//1 #
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);//2#
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);//6#
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);//5#

        //car2
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);//1
        //m_pPainter->drawRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);//2
        //car3
        //m_pPainter->drawRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);//2
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);//1
        //car4
        /*m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);
         //car5
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);
         //car6
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);
         //car7
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);
         //car8
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+7*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*9/78+7*m_rect.width()*9/78,m_rect.y()+m_rect.height()*3/5,m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*9/78+7*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);
         m_pPainter->drawRect(m_rect.x()+m_rect.width()*3/78+7*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);*/
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78,m_rect.y(),m_rect.height()*1/5,m_rect.height()*1/5);//5
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78,m_rect.y()+0*m_rect.height()*3/5,m_rect.height()*1/5,m_rect.height()*1/5);//2
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);//1
        m_pPainter->drawRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78,m_rect.y()+m_rect.height()*4/5,m_rect.height()*1/5,m_rect.height()*1/5);//6





         //car1 1#对应物理地址11
         m_pPainter->setPen(Qt::white);
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3+m_rect.height()*4/25,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("1"));
         if(1==m_Fire1State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire1State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire1State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire1State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));

                        QRect insideRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }
                else
                {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                }
              }
            }
         }


         //car1 2#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3+m_rect.height()*4/25,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("2"));
         if(1==m_Fire2State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire2State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire2State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire2State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+m_rect.height()*4/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }
                   else
                   {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                   }
               }
            }
         }

         //car1 6#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3-m_rect.height()*4/25,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("6"));
         if(1==m_Fire6State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire6State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire6State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire6State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }
                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                    }
               }
            }
         }

         //car1 5#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3-m_rect.height()*4/25,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("5"));
         if(1==m_Fire5State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire5State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire5State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire5State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+m_rect.height()*4/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }
                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+0*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                    }
               }
            }
         }

        //car2 1#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3+m_rect.height()*4/25,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("7"));
         if(1==m_Fire7State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire7State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire7State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire7State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }
                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                    }
               }
            }
         }
         //car2 11#
//         if(1==m_Fire11State)
//         {
//            m_pPainter->setBrush(Qt::green);
//            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

//         }
//         else
//         {
//            if(2==m_Fire11State)
//            {
//                m_pPainter->setBrush(Qt::red);
//                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
//            }
//            else
//            {
//                if(3==m_Fire11State)
//                {
//                    m_pPainter->setBrush(Qt::darkRed);
//                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
//                }
//                else
//                {
//                    m_pPainter->setBrush(Qt::white);
//                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+1*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                }
//            }
//         }
         //car2 2#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3+m_rect.height()*4/25,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("8"));
         if(1==m_Fire8State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire8State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire8State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire8State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                       // m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+m_rect.height()*4/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }

                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+1*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                    }
                }
            }
         }
         //car3 12#
//        if(1==m_Fire12State)
//               {
//                  m_pPainter->setBrush(Qt::green);
//                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

//               }
//               else
//               {
//                  if(2==m_Fire12State)
//                  {
//                      m_pPainter->setBrush(Qt::red);
//                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
//                  }
//                  else
//                  {
//                      if(3==m_Fire12State)
//                      {
//                          m_pPainter->setBrush(Qt::darkRed);
//                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
//                      }
//                      else
//                      {
//                          m_pPainter->setBrush(Qt::white);
//                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

//                      }
//                  }
//               }
               //car3 2#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3-m_rect.height()*4/25,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("11"));
                     if(1==m_Fire12State)
                     {
                        m_pPainter->setBrush(Qt::green);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

                     }
                     else
                     {
                        if(2==m_Fire12State)
                        {
                            m_pPainter->setBrush(Qt::red);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                        }
                        else
                        {
                            if(3==m_Fire12State)
                            {
                                m_pPainter->setBrush(Qt::darkRed);
                                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                            }
                            else
                            {
                                if(4==m_Fire12State)
                                {
                                    m_pPainter->setBrush(Qt::black);
                                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                                    QRect insideRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                                    m_pPainter->save();
                                    QPen pen;
                                    pen.setColor(Qt::white);
                                    pen.setWidth(2);
                                    m_pPainter->setPen(pen);
                                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                                    m_pPainter->restore();
                                }

                                else
                                {
                                    m_pPainter->setBrush(Qt::white);
                                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                                }
                            }
                        }
                     }
               //car3 1#
              m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3-m_rect.height()*5/25,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("12"));
               if(1==m_Fire11State)
               {
                  m_pPainter->setBrush(Qt::green);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

               }
               else
               {
                  if(2==m_Fire11State)
                  {
                      m_pPainter->setBrush(Qt::red);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                  }
                  else
                  {
                      if(3==m_Fire11State)
                      {
                          m_pPainter->setBrush(Qt::darkRed);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                      }
                      else
                      {
                          if(4==m_Fire11State)
                          {
                              m_pPainter->setBrush(Qt::black);
                              m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                              //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                              QRect insideRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+m_rect.height()*4/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                              m_pPainter->save();
                              QPen pen;
                              pen.setColor(Qt::white);
                              pen.setWidth(2);
                              m_pPainter->setPen(pen);
                              m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                              m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                              m_pPainter->restore();
                          }

                          else
                          {
                              m_pPainter->setBrush(Qt::white);
                              m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*24/78+2*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                          }
                      }
                  }
               }
               //car4 17#
            /*if(1==m_Fire17State)
               {
                  m_pPainter->setBrush(Qt::green);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

               }
               else
               {
                  if(2==m_Fire17State)
                  {
                      m_pPainter->setBrush(Qt::red);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                  }
                  else
                  {
                      if(3==m_Fire17State)
                      {
                          m_pPainter->setBrush(Qt::darkRed);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                      }
                      else
                      {
                          m_pPainter->setBrush(Qt::white);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      }
                  }
               }
               //car4 21#
               if(1==m_Fire21State)
               {
                  m_pPainter->setBrush(Qt::green);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

               }
               else
               {
                  if(2==m_Fire21State)
                  {
                      m_pPainter->setBrush(Qt::red);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                  }
                  else
                  {
                      if(3==m_Fire21State)
                      {
                          m_pPainter->setBrush(Qt::darkRed);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                      }
                      else
                      {
                          m_pPainter->setBrush(Qt::white);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      }
                  }
               }
               //car4 18#
               if(1==m_Fire18State)
               {
                  m_pPainter->setBrush(Qt::green);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

               }
               else
               {
                  if(2==m_Fire18State)
                  {
                      m_pPainter->setBrush(Qt::red);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                  }
                  else
                  {
                      if(3==m_Fire18State)
                      {
                          m_pPainter->setBrush(Qt::darkRed);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                      }
                      else
                      {
                          m_pPainter->setBrush(Qt::white);
                          m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      }
                  }
               }


               //car5 22#
                 if(1==m_Fire22State)
                 {
                    m_pPainter->setBrush(Qt::green);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

                 }
                 else
                 {
                    if(2==m_Fire22State)
                    {
                        m_pPainter->setBrush(Qt::red);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                    }
                    else
                    {
                        if(3==m_Fire22State)
                        {
                            m_pPainter->setBrush(Qt::darkRed);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                        }
                        else
                        {
                            m_pPainter->setBrush(Qt::white);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        }
                    }
                 }
                 //car5 26#
                 if(1==m_Fire26State)
                 {
                    m_pPainter->setBrush(Qt::green);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

                 }
                 else
                 {
                    if(2==m_Fire26State)
                    {
                        m_pPainter->setBrush(Qt::red);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                    }
                    else
                    {
                        if(3==m_Fire26State)
                        {
                            m_pPainter->setBrush(Qt::darkRed);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                        }
                        else
                        {
                            m_pPainter->setBrush(Qt::white);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+4*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        }
                    }
                 }
          //car5 23#
                if(1==m_Fire23State)
                 {
                    m_pPainter->setBrush(Qt::green);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

                 }
                 else
                 {
                    if(2==m_Fire23State)
                    {
                        m_pPainter->setBrush(Qt::red);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
                    }
                    else
                    {
                        if(3==m_Fire23State)
                        {
                            m_pPainter->setBrush(Qt::darkRed);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                        }
                        else
                        {
                            m_pPainter->setBrush(Qt::white);
                            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                        }
                    }
                 }

            //car6 31#
            if(1==m_Fire31State)
            {
               m_pPainter->setBrush(Qt::green);
               m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

               m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

            }
            else
            {
               if(2==m_Fire31State)
               {
                   m_pPainter->setBrush(Qt::red);
                   m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                   m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
               }
               else
               {
                   if(3==m_Fire31State)
                   {
                       m_pPainter->setBrush(Qt::darkRed);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                       m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                   }
                   else
                   {
                       m_pPainter->setBrush(Qt::white);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                   }
               }
            }
           //car6 27#
           if(1==m_Fire27State)
           {
              m_pPainter->setBrush(Qt::green);
              m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

              m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

           }
           else
           {
              if(2==m_Fire27State)
              {
                  m_pPainter->setBrush(Qt::red);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
              }
              else
              {
                  if(3==m_Fire27State)
                  {
                      m_pPainter->setBrush(Qt::darkRed);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                  }
                  else
                  {
                      m_pPainter->setBrush(Qt::white);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  }
              }
           }
           //car6 28#
           if(1==m_Fire28State)
           {
              m_pPainter->setBrush(Qt::green);
              m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

              m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

           }
           else
           {
              if(2==m_Fire28State)
              {
                  m_pPainter->setBrush(Qt::red);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
              }
              else
              {
                  if(3==m_Fire28State)
                  {
                      m_pPainter->setBrush(Qt::darkRed);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                  }
                  else
                  {
                      m_pPainter->setBrush(Qt::white);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  }
              }
           }


           //car7 32#
           if(1==m_Fire32State)
           {
              m_pPainter->setBrush(Qt::green);
              m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

              m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

           }
           else
           {
              if(2==m_Fire32State)
              {
                  m_pPainter->setBrush(Qt::red);
                  m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
              }
              else
              {
                  if(3==m_Fire32State)
                  {
                      m_pPainter->setBrush(Qt::darkRed);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                      m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                  }
                  else
                  {
                      m_pPainter->setBrush(Qt::white);
                      m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                  }
              }
           }
           //car7 36#
           if(1==m_Fire36State)
           {
             m_pPainter->setBrush(Qt::green);
             m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

             m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

           }
           else
           {
             if(2==m_Fire36State)
             {
                 m_pPainter->setBrush(Qt::red);
                 m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                 m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
             }
             else
             {
                 if(3==m_Fire36State)
                 {
                     m_pPainter->setBrush(Qt::darkRed);
                     m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                     m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                 }
                 else
                 {
                     m_pPainter->setBrush(Qt::white);
                     m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*9/78+6*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                 }
             }
           }
          //car7 33#
          if(1==m_Fire33State)
          {
             m_pPainter->setBrush(Qt::green);
             m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

             m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

          }
          else
          {
             if(2==m_Fire33State)
             {
                 m_pPainter->setBrush(Qt::red);
                 m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                 m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
             }
             else
             {
                 if(3==m_Fire33State)
                 {
                     m_pPainter->setBrush(Qt::darkRed);
                     m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                     m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                 }
                 else
                 {
                     m_pPainter->setBrush(Qt::white);
                     m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                 }
             }
          }*/

          //car4 5#
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3+m_rect.height()*5/25,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("19"));
          if(1==m_Fire19State)
          {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

          }
          else
          {
            if(2==m_Fire19State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire19State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire19State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }

                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    }
                }
            }
          }
          //car4 2#
          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3-m_rect.height()*5/25,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("15"));
          if(1==m_Fire16State)
          {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

          }
          else
          {
            if(2==m_Fire16State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire16State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire16State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+0*m_rect.height()*3/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }

                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+0*m_rect.height()*3/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                    }
                }
            }
          }
          //car4 1#
          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3-m_rect.height()*5/25,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("16"));
          if(1==m_Fire15State)
          {
           m_pPainter->setBrush(Qt::green);
           m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

           m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

          }
          else
          {
           if(2==m_Fire15State)
           {
               m_pPainter->setBrush(Qt::red);
               m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

               m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
           }
           else
           {
               if(3==m_Fire15State)
               {
                   m_pPainter->setBrush(Qt::darkRed);
                   m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                   m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
               }
               else
               {
                   if(4==m_Fire15State)
                   {
                       m_pPainter->setBrush(Qt::black);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                       //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                       QRect insideRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+m_rect.height()*4/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                       m_pPainter->save();
                       QPen pen;
                       pen.setColor(Qt::white);
                       pen.setWidth(2);
                       m_pPainter->setPen(pen);
                       m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                       m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                       m_pPainter->restore();
                   }

                   else
                   {
                       m_pPainter->setBrush(Qt::white);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*27/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                   }
               }
           }
          }
          //car4 6#
          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3+m_rect.height()*5/25,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("20"));
          if(1==m_Fire20State)
          {
           m_pPainter->setBrush(Qt::green);
           m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

           m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

          }
          else
          {
           if(2==m_Fire20State)
           {
               m_pPainter->setBrush(Qt::red);
               m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

               m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
           }
           else
           {
               if(3==m_Fire20State)
               {
                   m_pPainter->setBrush(Qt::darkRed);
                   m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                   m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
               }
               else
               {
                   if(4==m_Fire20State)
                   {
                       m_pPainter->setBrush(Qt::black);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));
                       //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                       QRect insideRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3+m_rect.height()*1/50,m_rect.y()+m_rect.height()*4/5+3+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                       m_pPainter->save();
                       QPen pen;
                       pen.setColor(Qt::white);
                       pen.setWidth(2);
                       m_pPainter->setPen(pen);
                       m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                       m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                       m_pPainter->restore();
                   }

                   else
                   {
                       m_pPainter->setBrush(Qt::white);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+3*m_rect.width()*9/78+3,m_rect.y()+m_rect.height()*4/5+3,m_rect.height()*4/25,m_rect.height()*4/25));

                   }
               }
           }
          }


        //car1 3# 纵坐标－20
          m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10+m_rect.height()*4/25,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("3"));
         if(1==m_Fire3State)
         {
            m_pPainter->setBrush(Qt::green);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
            if(2==m_Fire3State)
            {
                m_pPainter->setBrush(Qt::red);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
            }
            else
            {
                if(3==m_Fire3State)
                {
                    m_pPainter->setBrush(Qt::darkRed);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                    m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
                }
                else
                {
                    if(4==m_Fire3State)
                    {
                        m_pPainter->setBrush(Qt::black);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));
                        //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                        QRect insideRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10+m_rect.height()*1/50,m_rect.y()+63-20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                        m_pPainter->save();
                        QPen pen;
                        pen.setColor(Qt::white);
                        pen.setWidth(2);
                        m_pPainter->setPen(pen);
                        m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                        m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                        m_pPainter->restore();
                    }

                    else
                    {
                        m_pPainter->setBrush(Qt::white);
                        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                    }
                }
            }
         }
         //car1 4# 纵坐标＋20
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53-m_rect.height()*4/25,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("4"));
         if(1==m_Fire4State)
         {
         m_pPainter->setBrush(Qt::green);
         m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

         }
         else
         {
         if(2==m_Fire4State)
         {
             m_pPainter->setBrush(Qt::red);
             m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

             m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
         }
         else
         {
             if(3==m_Fire4State)
             {
                 m_pPainter->setBrush(Qt::darkRed);
                 m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                 m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
             }
             else
             {
                 if(4==m_Fire4State)
                 {
                     m_pPainter->setBrush(Qt::black);
                     m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));
                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                    QRect insideRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53+m_rect.height()*1/50,m_rect.y()+63+20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                    m_pPainter->save();
                    QPen pen;
                    pen.setColor(Qt::white);
                    pen.setWidth(2);
                    m_pPainter->setPen(pen);
                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                    m_pPainter->restore();
                }

                 else
                 {
                     m_pPainter->setBrush(Qt::white);
                     m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*6/78+0*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                 }
             }
         }
         }

        //car2 3# ＋20
         m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10+m_rect.height()*4/25,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("9"));
        if(1==m_Fire9State)
        {
           m_pPainter->setBrush(Qt::green);
           m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

           m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
           if(2==m_Fire9State)
           {
               m_pPainter->setBrush(Qt::red);
               m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

               m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
           }
           else
           {
               if(3==m_Fire9State)
               {
                   m_pPainter->setBrush(Qt::darkRed);
                   m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                   m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
               }
               else
               {
                   if(4==m_Fire9State)
                   {
                       m_pPainter->setBrush(Qt::black);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));
                       //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                       QRect insideRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10+m_rect.height()*1/50,m_rect.y()+63+20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                       m_pPainter->save();
                       QPen pen;
                       pen.setColor(Qt::white);
                       pen.setWidth(2);
                       m_pPainter->setPen(pen);
                       m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                       m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                       m_pPainter->restore();
                   }

                   else
                   {
                       m_pPainter->setBrush(Qt::white);
                       m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78-40+10,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                   }
               }
           }
        }
        //car2 4# －20
        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43-m_rect.height()*4/25,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("10"));
        if(1==m_Fire10State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire10State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire10State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                if(4==m_Fire10State)
                {
                    m_pPainter->setBrush(Qt::black);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));
                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                    QRect insideRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43+m_rect.height()*1/50,m_rect.y()+63-20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                    m_pPainter->save();
                    QPen pen;
                    pen.setColor(Qt::white);
                    pen.setWidth(2);
                    m_pPainter->setPen(pen);
                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                    m_pPainter->restore();
                }

                else
                {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*12/78+1*m_rect.width()*9/78+43,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                }
            }
        }
        }
        //car3 4# ＋20
        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40+m_rect.height()*4/25,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("14"));
        if(1==m_Fire14State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire14State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire14State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                if(4==m_Fire14State)
                {
                    m_pPainter->setBrush(Qt::black);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));
                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                    QRect insideRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40+m_rect.height()*1/50,m_rect.y()+63+20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                    m_pPainter->save();
                    QPen pen;
                    pen.setColor(Qt::white);
                    pen.setWidth(2);
                    m_pPainter->setPen(pen);
                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                    m_pPainter->restore();
                }

                else
                {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78-40,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                }
            }
        }
        }
        //car3 3# －20
        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10-m_rect.height()*4/25,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("13"));
        if(1==m_Fire13State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire13State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire13State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {

                if(4==m_Fire13State)
                {
                    m_pPainter->setBrush(Qt::black);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));
                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                    QRect insideRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10+m_rect.height()*1/50,m_rect.y()+63-20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                    m_pPainter->save();
                    QPen pen;
                    pen.setColor(Qt::white);
                    pen.setWidth(2);
                    m_pPainter->setPen(pen);
                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                    m_pPainter->restore();
                }

                else
                {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*18/78+2*m_rect.width()*9/78+43-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                }
            }
        }
        }


        //car4 19#
        /*if(1==m_Fire19State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire19State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire19State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }
        //car4 20#
        if(1==m_Fire20State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire20State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire20State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+3*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }

        //car5 24#
        if(1==m_Fire24State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire24State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire24State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }
        //car5 25#
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));
        if(1==m_Fire25State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire25State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire25State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+4*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }

        //car6  29#
        if(1==m_Fire29State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire29State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire29State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }
        //car6 30#
        if(1==m_Fire30State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire30State)
        {
           m_pPainter->setBrush(Qt::red);
           m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

           m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
           if(3==m_Fire30State)
           {
               m_pPainter->setBrush(Qt::darkRed);
               m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

               m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
           }
           else
           {
               m_pPainter->setBrush(Qt::white);
               m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+5*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

           }
        }
        }


        //car7 34#
        if(1==m_Fire34State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire34State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire34State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }
        //car7 35#
        if(1==m_Fire35State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire35State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire35State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                m_pPainter->setBrush(Qt::white);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+6*m_rect.width()*9/78+53,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));

            }
        }
        }*/


        //car4 4# －20
//        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*3/78+7*m_rect.width()*9/78+13,m_rect.y()+63,m_rect.height()*4/25,m_rect.height()*4/25));
        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10+m_rect.height()*4/25,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("18"));
        if(1==m_Fire18State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire18State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire18State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                if(4==m_Fire18State)
                {
                    m_pPainter->setBrush(Qt::black);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));
                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                    QRect insideRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10+m_rect.height()*1/50,m_rect.y()+63-20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                    m_pPainter->save();
                    QPen pen;
                    pen.setColor(Qt::white);
                    pen.setWidth(2);
                    m_pPainter->setPen(pen);
                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                    m_pPainter->restore();
                }
                else
                {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78-10,m_rect.y()+63-20,m_rect.height()*4/25,m_rect.height()*4/25));

                }
            }
        }
        }
        //car4 3# ＋20
        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53-m_rect.height()*4/25,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("17"));
        if(1==m_Fire17State)
        {
        m_pPainter->setBrush(Qt::green);
        m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

        m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR(""));

        }
        else
        {
        if(2==m_Fire17State)
        {
            m_pPainter->setBrush(Qt::red);
            m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

            m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("火"));
        }
        else
        {
            if(3==m_Fire17State)
            {
                m_pPainter->setBrush(Qt::darkRed);
                m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("障"));
            }
            else
            {
                if(4==m_Fire17State)
                {
                    m_pPainter->setBrush(Qt::black);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));
                    //m_pPainter->drawText(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25), Qt::AlignCenter, QSTR("蔽"));
                    QRect insideRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53+m_rect.height()*1/50,m_rect.y()+63+20+m_rect.height()*1/50,m_rect.height()*3/25,m_rect.height()*3/25);
                    m_pPainter->save();
                    QPen pen;
                    pen.setColor(Qt::white);
                    pen.setWidth(2);
                    m_pPainter->setPen(pen);
                    m_pPainter->drawLine(insideRect.topLeft(), insideRect.bottomRight());
                    m_pPainter->drawLine(insideRect.topRight(), insideRect.bottomLeft());
                    m_pPainter->restore();
                }

                else
                {
                    m_pPainter->setBrush(Qt::white);
                    m_pPainter->drawEllipse(QRect(m_rect.x()+m_rect.width()*21/78+3*m_rect.width()*9/78+53,m_rect.y()+63+20,m_rect.height()*4/25,m_rect.height()*4/25));

                }
            }
        }
        }



        m_pPainter->setBrush(m_bkcolor);
//    m_pPainter->setPen(m_bkcolor);
//   // m_pPainter->setBrush(m_HeadCarColor);
//    QPoint pts2[] =
//    {
//        QPoint(x+width/8,y+height*6/7),
//        QPoint(x+width*2/8,y+height*6/7),
//        QPoint(x+width*2/8,y+height*2/7),
//        QPoint(x,y+height*1/2),
//        QPoint(x,y+height*5/7),
//    };
//    m_pPainter->drawPolygon(pts2,5);

//    m_pPainter->setPen(m_txtcolor);
//    m_pPainter->drawText(carRc, Qt::AlignCenter, m_str);

//    m_pPainter->setPen(Qt::white);
//    m_pPainter->setBrush(Qt::black);



m_pPainter->restore();


//    m_pPainter->restore();
//    m_pPainter->resetTransform();
}

void CTrainDiagramCtrl::iconDriverKey(  QPainter* painter, qreal const posX, qreal const posY, qreal const width, qreal const height )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
    painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );

    qreal side = qMin( width, height );
    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( side / 150.0, side / 150.0 );

    painter->drawEllipse( QRectF( -50, -100, 100, 100 ) );
    painter->setBrush( QBrush( Qt::black ) );
    painter->drawEllipse( QRectF( -25, -80, 50, 50 ) );
    painter->setBrush( QBrush( Qt::yellow ) );
    QPointF points[] = {
        QPointF( 25, -30 ),
        QPointF( 25, 80 ),
        QPointF( -5, 100 ),
        QPointF( -25, 90 ),
        QPointF( -5, 80 ),
        QPointF( -25, 70 ),
        QPointF( -5, 55 ),
        QPointF( -25, 40 ),
        QPointF( -25, -30 ),
    }; // end QPoint
    painter->drawPolygon( points, 9 );
    painter->restore();
}
void CTrainDiagramCtrl::iconER( QPainter* painter,
                                         qreal posX, qreal posY, qreal width, qreal height,
                                         bool state, int fontSize )
{
    painter->save();
    if( state ){
        painter->setRenderHint( QPainter::Antialiasing );
        painter->setFont( D_FONT_BOLD(fontSize) );
        QRectF rectF( posX, posY, width, height );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawRect( rectF );
        painter->drawText( rectF, Qt::AlignCenter, "ER" );
    }//end
    painter->restore();
}
void CTrainDiagramCtrl::iconDoor( QPainter* painter,
                   qreal const posX, qreal const posY, qreal const width, qreal const height,
                   QString const doorNum, int const doorState, int const doorFontSize )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    painter->setBrush( QBrush( Qt::SolidPattern ) );
    painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );

    QRectF rectF( posX, posY, width, height );
    // 1:not closed;2:fault;3:not online;4:communication abnormal;default : door closed;
    switch( doorState ){
        case 1:	//yellow
            painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 2:	//red, emgc actived
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 3:	//white
            painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 4:	//pink, full open
            painter->setBrush( QBrush( QColor( 255, 102, 204), Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 5:	//green, closed
            painter->setBrush( QBrush( QColor( 0, 255, 0 ), Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 6:	//blue, not closed
            painter->setBrush( QBrush( QColor( 0, 255, 255 ), Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 7:	//zi
            painter->setBrush( QBrush( QColor( 128, 128, 255 ), Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 8:	//isolated
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::red, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawLine( QPointF( posX, posY ), QPointF( posX + width, posY + height ) );
            painter->drawLine( QPointF( posX, posY + height ), QPointF( posX + width, posY ) );
            painter->setPen( QPen( Qt::white, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
        case 9:	//gray,cross, passby
            painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawLine( QPointF( posX, posY ), QPointF( posX + width, posY + height ) );
            painter->drawLine( QPointF( posX, posY + height ), QPointF( posX + width, posY ) );
            break;
        default: //black
            painter->setBrush( QBrush( QColor( 0, 0, 0 ), Qt::SolidPattern ) );
            painter->drawRect( rectF );
            painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            break;
    }//end

    painter->drawText( rectF, Qt::AlignCenter, doorNum );
    painter->restore();
}
void CTrainDiagramCtrl::iconTCU( QPainter* painter,
                                qreal posX, qreal posY, qreal width, qreal height,
                                int tcuState )
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);

    painter->setFont( D_FONT_BOLD(48) );

    qreal side = qMin( width, height );
    painter->translate( posX+(width/2), posY+(height/2) );
    painter->scale( side / 100.0, side / 100.0 );

    QRect rect( -50, -25, 100, 50 );
    QRect circleRect( -40, -40, 80, 80 );

    switch( tcuState ){
        case 1: // green
            painter->save();
            painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->drawArc( circleRect, 0, 16*360 );
            painter->drawText( circleRect, Qt::AlignCenter, "T" );
            painter->restore();
            break;
        case 2: // red
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->drawArc( circleRect, 0, 16*360 );
            painter->setPen( QPen( Qt::red, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "T" );
            painter->restore();
            break;
        case 3: // red,cross
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->drawArc( circleRect, 0, 16*360 );
            painter->drawLine( -40, -40, 40, 40 );
            painter->drawLine( -40, 40, 40, -40 );
            painter->setPen( QPen( Qt::red, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "T" );
//            painter->drawLine( -40, -40, 40, 40 );
//            painter->drawLine( -40, 40, 40, -40 );
            painter->restore();
            break;
        case 4: // gray
            painter->save();
            painter->setPen( QPen( Qt::gray, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->drawArc( circleRect, 0, 16*360 );
            painter->setPen( QPen( Qt::gray, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "T" );
            painter->restore();
            break;
        default: //white
            painter->save();
            painter->setPen( QPen( Qt::white, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->drawArc( circleRect, 0, 16*360 );
            painter->setPen( QPen( Qt::white, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "T" );
            painter->restore();
            break;
    }//end

    painter->restore();
}
void CTrainDiagramCtrl::iconAPS( QPainter* painter,
                                qreal posX, qreal posY, qreal width, qreal height,
                                int apsState )
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setFont( D_FONT_BOLD(48) );
    qreal side = qMin( width, height );
    painter->translate( posX+(width/2), posY+(height/2) );
    painter->scale( side / 100.0, side / 100.0 );

    QRect rect( -50, -25, 100, 50 );
    QRect circleRect( -40, -40, 80, 80 );
    QRect roundRect( -25, -5, 50, 10 );
    switch( apsState ){
        case 1: // green
            painter->save();
            painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
            painter->drawArc( circleRect, 0, 16*360 );
//            painter->rotate( 45 );
//            painter->drawRoundRect( roundRect );
//            painter->rotate( 90 );
//            painter->drawRoundRect( roundRect );
            //painter->setPen( QPen( Qt::green, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "A" );
            painter->restore();
            break;
        case 2: // red
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawArc( circleRect, 0, 16*360 );
//            painter->rotate( 45 );
//            painter->drawRoundRect( roundRect );
//            painter->rotate( 90 );
//            painter->drawRoundRect( roundRect );
            //painter->setPen( QPen( Qt::red, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "A" );
            painter->restore();
            break;
        case 3: // red, cross
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->drawLine( -40, -40, 40, 40 );
            painter->drawLine( -40, 40, 40, -40 );
            painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
            painter->drawArc( circleRect, 0, 16*360 );
//            painter->rotate( 45 );
//            painter->drawRoundRect( roundRect );
//            painter->rotate( 90 );
//            painter->drawRoundRect( roundRect );
            //painter->setPen( QPen( Qt::red, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "A" );
            painter->restore();
            break;
        case 4: // gray
            painter->save();
            painter->setPen( QPen( Qt::gray, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
            painter->drawArc( circleRect, 0, 16*360 );
//            painter->rotate( 45 );
//            painter->drawRoundRect( roundRect );
//            painter->rotate( 90 );
//            painter->drawRoundRect( roundRect );
            //painter->setPen( QPen( Qt::gray, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "A" );
            painter->restore();
            break;
        default: // white
            painter->save();
            painter->setPen( QPen( Qt::white, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
            painter->drawRect( rect );
            painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
            painter->drawEllipse( circleRect );
            painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
            painter->drawArc( circleRect, 0, 16*360 );
//            painter->rotate( 45 );
//            painter->drawRoundRect( roundRect );
//            painter->rotate( 90 );
//            painter->drawRoundRect( roundRect );
            //painter->setPen( QPen( Qt::white, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawText( circleRect, Qt::AlignCenter, "A" );
            painter->restore();
            break;
    }//end

    painter->restore();
}
void CTrainDiagramCtrl::iconBrake( QPainter* painter,
                   qreal posX, qreal posY, qreal width, qreal height,
                   int brakeState )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    qreal side = qMin( width, height );
    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( side / 120.0, side / 120.0 );

    static const QPointF pointsRelease[] = {
        QPointF( -50, -30 ),
        QPointF( -60, -10 ),
        QPointF( -60, 10 ),
        QPointF( -50, 30 ),
        QPointF( -42.5, 30 ),
        QPointF( -48.5, 8.5 ),
        QPointF( -48.5, -8.5 ),
        QPointF( -42.5, -30 ),
        QPointF( -50, -30 ),
    }; // end QPointF

    static const QPointF pointsApply[] = {
        QPointF( -50+25, -30 ),
        QPointF( -60+25, -10 ),
        QPointF( -60+25, 10 ),
        QPointF( -50+25, 30 ),
        QPointF( -42.5+25, 30 ),
        QPointF( -48.5+25, 8.5 ),
        QPointF( -48.5+25, -8.5 ),
        QPointF( -42.5+25, -30 ),
        QPointF( -50+25, -30 ),
    }; // end QPointF
    switch( brakeState ){
        case 1: // green apply
            painter->save();
            painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsApply, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsApply,9 );
            painter->restore();
            break;
        case 2: // green release
            painter->save();
            painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsRelease, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsRelease,9 );
            painter->restore();
            break;
        case 3: // red apply
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsApply, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsApply,9 );
            painter->restore();
            break;
        case 4: // red release
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsRelease, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsRelease,9 );
            painter->restore();
            break;
        case 5: // red, cross, apply
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsApply, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsApply,9 );
            painter->drawLine( -65, -45, 65, 45 );
            painter->drawLine( -65, 45, 65, -45 );
            painter->restore();
            break;
        case 6: // red, cross, release
            painter->save();
            painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsRelease, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsRelease,9 );
            painter->drawLine( -65, -45, 65, 45 );
            painter->drawLine( -65, 45, 65, -45 );
            painter->restore();
            break;
        default: // green release
            painter->save();
            painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
            painter->drawPolyline( pointsRelease, 9 );
            //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
            painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
            painter->rotate( 180 );
            painter->drawPolyline( pointsRelease,9 );
            painter->restore();
    }//end

    painter->restore();
}

/******************************************       iconPantographsLeft     ***********************************************/
void CTrainDiagramCtrl::iconPantographsLeft( QPainter* painter,
                                       qreal posX, qreal posY, qreal width, qreal height,
                                       bool up, bool isolated )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );

    painter->setPen(Qt::black);
    painter->setBrush(Qt::black);
    painter->drawRect(posX-3, posY-3, width+8, height);

    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( width / 100, height / 100 );

    painter->setPen( QPen( Qt::yellow, 6, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    if( up ){
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
    }else{ //down
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
        if( isolated ){
            painter->setPen( Qt::red );
            painter->save();
            painter->drawLine( 50, 0, -50, 50 );
            painter->drawLine( 50, 50, -50, 0 );
            painter->restore();
        } // end isolated
    } //  end else
    painter->restore();
}
/******************************************       iconPantographsRight     ***********************************************/
void CTrainDiagramCtrl::iconPantographsRight( QPainter* painter,
                                       qreal posX, qreal posY, qreal width, qreal height,
                                       bool up, bool isolated )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    painter->setPen( QPen( Qt::yellow, 6, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( width / 100, height / 100 );
    if( up ){
        QPointF points[] = {
            QPointF( -50, -30 ), // 0
            QPointF( -35, -50 ),// 1
            QPointF( 35, -50 ), // 2
            QPointF( 50, -30 ),// 3

            QPointF( 0, -50 ),// 4
            QPointF( 25, 0 ),// 5
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
    }else{
        QPointF points[] = {
            QPointF( -50, 20 ), // 0
            QPointF( -35, 0 ),// 1
            QPointF( 35, 0 ), // 2
            QPointF( 50, 20 ),// 3

            QPointF( 0, 0 ),// 4
            QPointF( 25, 25 ),// 5
            QPointF( 0, 50 ),// 6
        };  // end points
        painter->save();
        painter->drawPolyline( points, 4 );
        painter->drawPolyline( &points[4], 3 );
        painter->restore();
        if( isolated ){
            painter->setPen( Qt::red );
            painter->save();
            painter->drawLine( 50, 0, -50, 50 );
            painter->drawLine( 50, 50, -50, 0 );
            painter->restore();
        } // end isolated
    } //  end else
    painter->restore();
}
void CTrainDiagramCtrl::iconBreaker( QPainter* painter,
                                qreal posX, qreal posY, qreal width, qreal height,
                                bool brkState )
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);

    qreal side = qMin( width, height );
    painter->translate( posX+(width/2), posY+(height/2) );
    painter->scale( side / 100.0, side / 100.0 );

    if(brkState){
        painter->save();
        painter->setPen( QPen( Qt::green, 8, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        painter->drawRect( QRect(-40,10,25,25) );
        painter->drawRect( QRect( 15,10,25,25) );
        painter->drawLine(-40,0,40,0);
        painter->restore();
    }else{
        painter->save();
        painter->setPen( QPen( Qt::gray, 8, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawRect( QRect(-40,10,25,25) );
        painter->drawRect( QRect( 10,10,25,25) );
        painter->drawLine(-40,10,40,-30);
        painter->restore();
    }//end

    painter->restore();
}

void CTrainDiagramCtrl::setFire1State( __in int newFire1State )
{
    m_Fire1State=newFire1State;
}
void CTrainDiagramCtrl::setFire2State( __in int newFire1State )
{
    m_Fire2State=newFire1State;
}
void CTrainDiagramCtrl::setFire3State( __in int newFire1State )
{
    m_Fire3State=newFire1State;
}
void CTrainDiagramCtrl::setFire4State( __in int newFire1State )
{
    m_Fire4State=newFire1State;
}
void CTrainDiagramCtrl::setFire5State( __in int newFire1State )
{
    m_Fire5State=newFire1State;
}
void CTrainDiagramCtrl::setFire6State( __in int newFire1State )
{
    m_Fire6State=newFire1State;
}
void CTrainDiagramCtrl::setFire7State( __in int newFire1State )
{
    m_Fire7State=newFire1State;
}
void CTrainDiagramCtrl::setFire8State( __in int newFire1State )
{
    m_Fire8State=newFire1State;
}
void CTrainDiagramCtrl::setFire9State( __in int newFire1State )
{
    m_Fire9State=newFire1State;
}
void CTrainDiagramCtrl::setFire10State( __in int newFire1State )
{
    m_Fire10State=newFire1State;
}

void CTrainDiagramCtrl::setFire11State( __in int newFire1State )
{
    m_Fire11State=newFire1State;
}
void CTrainDiagramCtrl::setFire12State( __in int newFire1State )
{
    m_Fire12State=newFire1State;
}
void CTrainDiagramCtrl::setFire13State( __in int newFire1State )
{
    m_Fire13State=newFire1State;
}
void CTrainDiagramCtrl::setFire14State( __in int newFire1State )
{
    m_Fire14State=newFire1State;
}
void CTrainDiagramCtrl::setFire15State( __in int newFire1State )
{
    m_Fire15State=newFire1State;
}
void CTrainDiagramCtrl::setFire16State( __in int newFire1State )
{
    m_Fire16State=newFire1State;
}
void CTrainDiagramCtrl::setFire17State( __in int newFire1State )
{
    m_Fire17State=newFire1State;
}
void CTrainDiagramCtrl::setFire18State( __in int newFire1State )
{
    m_Fire18State=newFire1State;
}
void CTrainDiagramCtrl::setFire19State( __in int newFire1State )
{
    m_Fire19State=newFire1State;
}
void CTrainDiagramCtrl::setFire20State( __in int newFire1State )
{
    m_Fire20State=newFire1State;
}

void CTrainDiagramCtrl::setFire21State( __in int newFire1State )
{
    m_Fire21State=newFire1State;
}
void CTrainDiagramCtrl::setFire22State( __in int newFire1State )
{
    m_Fire22State=newFire1State;
}
void CTrainDiagramCtrl::setFire23State( __in int newFire1State )
{
    m_Fire23State=newFire1State;
}
void CTrainDiagramCtrl::setFire24State( __in int newFire1State )
{
    m_Fire24State=newFire1State;
}
void CTrainDiagramCtrl::setFire25State( __in int newFire1State )
{
    m_Fire25State=newFire1State;
}
void CTrainDiagramCtrl::setFire26State( __in int newFire1State )
{
    m_Fire26State=newFire1State;
}
void CTrainDiagramCtrl::setFire27State( __in int newFire1State )
{
    m_Fire27State=newFire1State;
}
void CTrainDiagramCtrl::setFire28State( __in int newFire1State )
{
    m_Fire28State=newFire1State;
}
void CTrainDiagramCtrl::setFire29State( __in int newFire1State )
{
    m_Fire29State=newFire1State;
}
void CTrainDiagramCtrl::setFire30State( __in int newFire1State )
{
    m_Fire30State=newFire1State;
}

void CTrainDiagramCtrl::setFire31State( __in int newFire1State )
{
    m_Fire31State=newFire1State;
}
void CTrainDiagramCtrl::setFire32State( __in int newFire1State )
{
    m_Fire32State=newFire1State;
}
void CTrainDiagramCtrl::setFire33State( __in int newFire1State )
{
    m_Fire33State=newFire1State;
}
void CTrainDiagramCtrl::setFire34State( __in int newFire1State )
{
    m_Fire34State=newFire1State;
}
void CTrainDiagramCtrl::setFire35State( __in int newFire1State )
{
    m_Fire35State=newFire1State;
}
void CTrainDiagramCtrl::setFire36State( __in int newFire1State )
{
    m_Fire36State=newFire1State;
}
void CTrainDiagramCtrl::setFire37State( __in int newFire1State )
{
    m_Fire37State=newFire1State;
}
void CTrainDiagramCtrl::setFire38State( __in int newFire1State )
{
    m_Fire38State=newFire1State;
}
void CTrainDiagramCtrl::setFire39State( __in int newFire1State )
{
    m_Fire39State=newFire1State;
}
void CTrainDiagramCtrl::setFire40State( __in int newFire1State )
{
    m_Fire40State=newFire1State;
}

void CTrainDiagramCtrl::setFire41State( __in int newFire1State )
{
    m_Fire41State=newFire1State;
}
void CTrainDiagramCtrl::setFire42State( __in int newFire1State )
{
    m_Fire42State=newFire1State;
}
void CTrainDiagramCtrl::setFire43State( __in int newFire1State )
{
    m_Fire43State=newFire1State;
}
void CTrainDiagramCtrl::setFire44State( __in int newFire1State )
{
    m_Fire44State=newFire1State;
}
void CTrainDiagramCtrl::setFire45State( __in int newFire1State )
{
    m_Fire45State=newFire1State;
}
void CTrainDiagramCtrl::setFire46State( __in int newFire1State )
{
    m_Fire46State=newFire1State;
}
void CTrainDiagramCtrl::setFire47State( __in int newFire1State )
{
    m_Fire47State=newFire1State;
}
void CTrainDiagramCtrl::setFire48State( __in int newFire1State )
{
    m_Fire48State=newFire1State;
}
void CTrainDiagramCtrl::setFire49State( __in int newFire1State )
{
    m_Fire49State=newFire1State;
}
void CTrainDiagramCtrl::setFire50State( __in int newFire1State )
{
    m_Fire50State=newFire1State;
}

