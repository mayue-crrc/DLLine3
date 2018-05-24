#include "cdebugdialog.h"
#include "ui_cdebugdialog.h"
#include <QtGui>
#include "CGlobal.h"
#include "CPage.h"
#include "dialog.h"

extern vector<CPage*>  g_PageVec;

CDebugDialog::CDebugDialog(QDialog* pDlg,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDebugDialog)
{
    ui->setupUi(this);
    ui->pageindexEdit->setFocus();
    ui->label_2->setText("CurrentPageIndex:" + QString::number(CGlobal::m_nCurPageIndex));
    m_pDlg = pDlg;
}

CDebugDialog::~CDebugDialog()
{
    delete ui;
}

void CDebugDialog::changeEvent(QEvent *e)
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

void CDebugDialog::on_pushButton_clicked()
{
    int nPageIndex = ui->pageindexEdit->text().toUInt();
    if (nPageIndex >= 0
       && nPageIndex < BKSURFACENUM)
    {
        CGlobal::m_nCurPageIndex = ui->pageindexEdit->text().toUInt();
        Dialog* pDlg = (Dialog*)m_pDlg;
        if (g_PageVec[CGlobal::m_nCurPageIndex] == NULL)
            CREATE_PAGE(CGlobal::m_nCurPageIndex, pDlg)
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(WM_SHOWPAGE);
    }
    accept();
}
