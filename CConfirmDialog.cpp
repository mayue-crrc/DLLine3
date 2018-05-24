#include "CConfirmDialog.h"
#include "ui_CConfirmDialog.h"
#include <qpainter.h>

CConfirmDialog::CConfirmDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CConfirmDialog)
{
    ui->setupUi(this);
    m_nFlag = 0;
    setWindowFlags( Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(0, 0, 0);background-color:rgb(255,255,255); }"
        "QLabel { font-family: \"SimHei\"; font-size: 24px; color: rgb(0, 0, 0);}"
        "QDialog { background-color:rgb(150,150,150); color: rgb(0, 0, 0);}"
    );
    ui->label->move(90,35);
}

CConfirmDialog::~CConfirmDialog()
{
    delete ui;
}

void CConfirmDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CConfirmDialog::paintEvent(QPaintEvent *)
{
   QPixmap pixmap;
   pixmap.load(qApp->applicationDirPath()+"/resource/image/WarningIcon.PNG");
   QPainter painter;
   painter.begin(this);
   painter.drawPixmap(20,40,45,45,pixmap);
   painter.end();
}

void CConfirmDialog::SetConfirmStr(QString str)
{
    ui->label->setText(str);
}

void CConfirmDialog::on_pushButton_2_clicked()
{
    m_nFlag = 1;
    this->accept();
}

void CConfirmDialog::on_pushButton_3_clicked()
{
    m_nFlag = 0;
    this->accept();
}
