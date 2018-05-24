#ifndef CTRAINDIAGRAMCTRL_H
#define CTRAINDIAGRAMCTRL_H

#include "CControlInterface.h"
#include "rom.h"

class CTrainDiagramCtrl : public CControlInterface
{
public:
    CTrainDiagramCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawTrainDiagramCtrl();

    //car1
    void setCar1Door1State( __in int newCar1Door1State );
    void setCar1Door2State( __in int newCar1Door2State );
    void setCar1Door3State( __in int newCar1Door3State );
    void setCar1Door4State( __in int newCar1Door4State );
    void setCar1Door5State( __in int newCar1Door5State );
    void setCar1Door6State( __in int newCar1Door6State );
    void setCar1Door7State( __in int newCar1Door7State );
    void setCar1Door8State( __in int newCar1Door8State );

    void setCar1DoorState( __in int newState[] );

    void setCar1Brake1State( __in int newCar1Brake1State );
    void setCar1Brake2State( __in int newCar1Brake2State );
    void setCar1Brake3State( __in int newCar1Brake3State );
    void setCar1TCU1State( __in int newCar1TCU1State );
    void setCar1TCU2State( __in int newCar1TCU2State );
    void setCar1ACU1State( __in int newCar1ACU1State );
    void setCar1ACU2State( __in int newCar1ACU2State );
    void setCar1Key1State( __in bool newCar1Key1State );
    void setCar1Key2State( __in bool newCar1Key2State );
    void setCar1TrainCode( __in QString newCar1TrainCode );
    void setCar1TPState( __in int newCar1TPState );
    void setCar1TPIsolated( __in bool newCar1TPIsolated );
    void setCar1ERState( __in bool newCar1ERState );
    void setCar1BreakerState( __in bool newCar1BreakerState );
    //car2
    void setCar2McDirection( __in int newCar2McDirection );
    void setCar2Door1State( __in int newCar2Door1State );
    void setCar2Door2State( __in int newCar2Door2State );
    void setCar2Door3State( __in int newCar2Door3State );
    void setCar2Door4State( __in int newCar2Door4State );
    void setCar2Door5State( __in int newCar2Door5State );
    void setCar2Door6State( __in int newCar2Door6State );
    void setCar2Door7State( __in int newCar2Door7State );
    void setCar2Door8State( __in int newCar2Door8State );

    void setCar2DoorState( __in int newState[]);

    void setCar2Brake1State( __in int newCar2Brake1State );
    void setCar2Brake2State( __in int newCar2Brake2State );
    void setCar2Brake3State( __in int newCar2Brake3State );
    void setCar2TCU1State( __in int newCar2TCU1State );
    void setCar2TCU2State( __in int newCar2TCU2State );
    void setCar2ACU1State( __in int newCar2ACU1State );
    void setCar2ACU2State( __in int newCar2ACU2State );
    void setCar2Key1State( __in bool newCar2Key1State );
    void setCar2Key2State( __in bool newCar2Key2State );
    void setCar2TrainCode( __in QString newCar2TrainCode );
    void setCar2TPState( __in int newCar2TPState );
    void setCar2TPIsolated( __in bool newCar2TPIsolated );
    void setCar2ERState( __in bool newCar2ERState );
    void setCar2BreakerState( __in bool newCar2BreakerState );
    //car3
    void setCar3Door1State( __in int newCar3Door1State );
    void setCar3Door2State( __in int newCar3Door2State );
    void setCar3Door3State( __in int newCar3Door3State );
    void setCar3Door4State( __in int newCar3Door4State );
    void setCar3Door5State( __in int newCar3Door5State );
    void setCar3Door6State( __in int newCar3Door6State );
    void setCar3Door7State( __in int newCar3Door7State );
    void setCar3Door8State( __in int newCar3Door8State );

    void setCar3DoorState( __in int newState[]);

    void setCar3Brake1State( __in int newCar3Brake1State );
    void setCar3Brake2State( __in int newCar3Brake2State );
    void setCar3Brake3State( __in int newCar3Brake3State );
    void setCar3TCU1State( __in int newCar3TCU1State );
    void setCar3TCU2State( __in int newCar3TCU2State );
    void setCar3ACU1State( __in int newCar3ACU1State );
    void setCar3ACU2State( __in int newCar3ACU2State );
    void setCar3Key1State( __in bool newCar3Key1State );
    void setCar3Key2State( __in bool newCar3Key2State );
    void setCar3TrainCode( __in QString newCar3TrainCode );
    void setCar3TPState( __in int newCar3TPState );
    void setCar3TPIsolated( __in bool newCar3TPIsolated );
    void setCar3ERState( __in bool newCar3ERState );
    void setCar3BreakerState( __in bool newCar3BreakerState );

    void setFire1State( __in int newFire1State );
    void setFire2State( __in int newFire1State );
    void setFire3State( __in int newFire1State );
    void setFire4State( __in int newFire1State );
    void setFire5State( __in int newFire1State );
    void setFire6State( __in int newFire1State );
    void setFire7State( __in int newFire1State );
    void setFire8State( __in int newFire1State );
    void setFire9State( __in int newFire1State );
    void setFire10State( __in int newFire1State );
    void setFire11State( __in int newFire1State );
    void setFire12State( __in int newFire1State );
    void setFire13State( __in int newFire1State );
    void setFire14State( __in int newFire1State );
    void setFire15State( __in int newFire1State );
    void setFire16State( __in int newFire1State );
    void setFire17State( __in int newFire1State );
    void setFire18State( __in int newFire1State );
    void setFire19State( __in int newFire1State );
    void setFire20State( __in int newFire1State );
    void setFire21State( __in int newFire1State );
    void setFire22State( __in int newFire1State );
    void setFire23State( __in int newFire1State );
    void setFire24State( __in int newFire1State );
    void setFire25State( __in int newFire1State );
    void setFire26State( __in int newFire1State );
    void setFire27State( __in int newFire1State );
    void setFire28State( __in int newFire1State );
    void setFire29State( __in int newFire1State );
    void setFire30State( __in int newFire1State );
    void setFire31State( __in int newFire1State );
    void setFire32State( __in int newFire1State );
    void setFire33State( __in int newFire1State );
    void setFire34State( __in int newFire1State );
    void setFire35State( __in int newFire1State );
    void setFire36State( __in int newFire1State );
    void setFire37State( __in int newFire1State );
    void setFire38State( __in int newFire1State );
    void setFire39State( __in int newFire1State );
    void setFire40State( __in int newFire1State );
    void setFire41State( __in int newFire1State );
    void setFire42State( __in int newFire1State );
    void setFire43State( __in int newFire1State );
    void setFire44State( __in int newFire1State );
    void setFire45State( __in int newFire1State );
    void setFire46State( __in int newFire1State );
    void setFire47State( __in int newFire1State );
    void setFire48State( __in int newFire1State );
    void setFire49State( __in int newFire1State );
    void setFire50State( __in int newFire1State );
    void iconDriverKey( QPainter* painter,
                            qreal posX, qreal posY, qreal width, qreal height );
    void iconDoor( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       QString doorNum, int doorState, int doorFontSize );
    void iconER( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       bool state, int fontSize );
    void iconBrake( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int brakeState );
    void iconTCU( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int tcuState );
    void iconAPS( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int apsState );
    void iconPantographsLeft( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  bool up, bool isolated );
    void iconPantographsRight( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  bool up, bool isolated );
    void iconBreaker( QPainter* painter,
                      qreal posX, qreal posY, qreal width, qreal height,
                      bool brkState );

private:
    bool car2flag,m_Car2McDirection;
    //car1
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;
    int m_Car1Door1State;
    int m_Car1Door2State;
    int m_Car1Door3State;
    int m_Car1Door4State;
    int m_Car1Door5State;
    int m_Car1Door6State;
    int m_Car1Door7State;
    int m_Car1Door8State;
    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car1Brake1State;
    int m_Car1Brake2State;
    int m_Car1Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car1TCU1State;
    int m_Car1TCU2State;
    int m_Car1ACU1State;
    int m_Car1ACU2State;

    bool m_Car1Key1State;
    bool m_Car1Key2State;

    QString m_Car1TrainCode;

    int m_Car1TPState;
    bool m_Car1TPIsolated;
    bool m_Car1ERState;
    bool m_Car1BreakerState;
    //car2
    //bool m_Car2McDirection;
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;
    int m_Car2Door1State;
    int m_Car2Door2State;
    int m_Car2Door3State;
    int m_Car2Door4State;
    int m_Car2Door5State;
    int m_Car2Door6State;
    int m_Car2Door7State;
    int m_Car2Door8State;
    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car2Brake1State;
    int m_Car2Brake2State;
    int m_Car2Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car2TCU1State;
    int m_Car2TCU2State;
    int m_Car2ACU1State;
    int m_Car2ACU2State;

    int m_Fire1State;
    int m_Fire2State;
    int m_Fire3State;
    int m_Fire4State;
    int m_Fire5State;
    int m_Fire6State;
    int m_Fire7State;
    int m_Fire8State;
    int m_Fire9State;
    int m_Fire10State;
    int m_Fire11State;
    int m_Fire12State;
    int m_Fire13State;
    int m_Fire14State;
    int m_Fire15State;
    int m_Fire16State;
    int m_Fire17State;
    int m_Fire18State;
    int m_Fire19State;
    int m_Fire20State;
    int m_Fire21State;
    int m_Fire22State;
    int m_Fire23State;
    int m_Fire24State;
    int m_Fire25State;
    int m_Fire26State;
    int m_Fire27State;
    int m_Fire28State;
    int m_Fire29State;
    int m_Fire30State;
    int m_Fire31State;
    int m_Fire32State;
    int m_Fire33State;
    int m_Fire34State;
    int m_Fire35State;
    int m_Fire36State;
    int m_Fire37State;
    int m_Fire38State;
    int m_Fire39State;
    int m_Fire40State;
    int m_Fire41State;
    int m_Fire42State;
    int m_Fire43State;
    int m_Fire44State;
    int m_Fire45State;
    int m_Fire46State;
    int m_Fire47State;
    int m_Fire48State;
    int m_Fire49State;
    int m_Fire50State;


    bool m_Car2Key1State;
    bool m_Car2Key2State;

    QString m_Car2TrainCode;

    int m_Car2TPState;
    bool m_Car2TPIsolated;
    bool m_Car2ERState;
    bool m_Car2BreakerState;
    //car3
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;
    int m_Car3Door1State;
    int m_Car3Door2State;
    int m_Car3Door3State;
    int m_Car3Door4State;
    int m_Car3Door5State;
    int m_Car3Door6State;
    int m_Car3Door7State;
    int m_Car3Door8State;
    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car3Brake1State;
    int m_Car3Brake2State;
    int m_Car3Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car3TCU1State;
    int m_Car3TCU2State;
    int m_Car3ACU1State;
    int m_Car3ACU2State;

    bool m_Car3Key1State;
    bool m_Car3Key2State;

    QString m_Car3TrainCode;

    int m_Car3TPState;
    bool m_Car3TPIsolated;
    bool m_Car3ERState;
    bool m_Car3BreakerState;
};

#endif // CTRAINDIAGRAMCTRL_H
