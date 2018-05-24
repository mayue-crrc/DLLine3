#include "cwarningdialog.h"
#include "ui_cwarningdialog.h"
#include <qpainter.h>

CWarningDialog::CWarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CWarningDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(0, 0, 0);background-color:rgb(255,255,255); }"
        "QLabel { font-family: \"SimHei\"; font-size: 24px; color: rgb(0, 0, 0);}"
        "QDialog { background-color:rgb(150,150,150); color: rgb(0, 0, 0);}"
    );
    ui->label->move(90,35);
}

CWarningDialog::~CWarningDialog()
{
    delete ui;
}

void CWarningDialog::changeEvent(QEvent *e)
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

void CWarningDialog::paintEvent(QPaintEvent *)
{
   QPixmap pixmap;
   pixmap.load(qApp->applicationDirPath()+"/resource/image/WarningIcon.PNG");
   QPainter painter;
   painter.begin(this);
   painter.drawPixmap(20,40,45,45,pixmap);
   painter.end();
}

void CWarningDialog::SetWarningStr(QString str)
{
    ui->label->setText(str);
}

void CWarningDialog::on_pushButton_clicked()
{
    this->accept();
}
