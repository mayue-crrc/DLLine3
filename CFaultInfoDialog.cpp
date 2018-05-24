#include "CFaultInfoDialog.h"
#include "ui_CFaultInfoDialog.h"
#include <qpainter.h>
#include "cfaultscommonprocess.h"
#include "CGlobal.h"


CFaultInfoDialog::CFaultInfoDialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::CFaultInfoDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setStyleSheet(
        "QLabel { font-family: \"SimHei\"; font-size: 22px; color: rgb(255, 255, 255);}"
        "QDialog { background-color:rgb(0,0,0); color: rgb(255,255,255); border-color: rgb(255,255,255);}"
    );

    m_clkidx = 0;
    m_name = "";
    m_code = "";
//  m_reason = "";
    m_advice = "";
//  m_position = "";

    m_ShowBorder = false;
}

CFaultInfoDialog::~CFaultInfoDialog()
{
    delete ui;
}

void CFaultInfoDialog::changeEvent(QEvent *e)
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

void CFaultInfoDialog::paintEvent ( QPaintEvent * /*event*/ )
{

    ui->label_code->setText(m_code);
    ui->label_name->setText(m_name);
//  ui->label_position->setText(m_position);
//  ui->label_reason->setText(m_reason);
    ui->label_advice->setText(m_advice);

    if (m_ShowBorder)
    {
        if (!ui->pushButton->isHidden())
        {
            ui->pushButton->hide();
        }
//     ui->label_position->setText(error_display8);
       ui->label_code->setText(error_display9);
       ui->label_name->setText(error_display10);
//     ui->label_reason->setText(error_display11);
       ui->label_advice->setText(error_display12);
//       QPainter painter;
//       painter.begin(this);
//       painter.setPen(Qt::white);
//       painter.drawLine(QPoint(7,7),QPoint(645,7));
//       painter.drawLine(QPoint(7,7),QPoint(7,370));
//       painter.drawLine(QPoint(655,7),QPoint(655,370));
//       painter.drawLine(QPoint(7,370),QPoint(655,370));
//       painter.drawLine(QPoint(7,60),QPoint(655,60));
//       painter.drawLine(QPoint(7,100),QPoint(655,100));
//       painter.end();
    }
}

void CFaultInfoDialog::SetClkIndex(int idx)
{
    ASSERT((idx >= 0) && (idx <= g_faultsRomLen));
    m_clkidx = idx;

    int nameinfoidx;
    if (-1 != (nameinfoidx = FindFaultsNameTableIndex(g_faultsrom[m_clkidx].code)))
    {
        m_name = g_faultsinforom[nameinfoidx].name;
        m_code.sprintf("%4X", g_faultsrom[m_clkidx].code);
        m_advice = g_faultsinforom[nameinfoidx].advice;
//      m_position = GetCarriageString(g_faultsrom[m_clkidx].pos);
//      m_reason = "";
    }
}

void CFaultInfoDialog::on_pushButton_clicked()
{
    this->accept();
}
