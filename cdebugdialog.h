#ifndef CDEBUGDIALOG_H
#define CDEBUGDIALOG_H

#include <QDialog>

namespace Ui {
    class CDebugDialog;
}

class CDebugDialog : public QDialog {
    Q_OBJECT
public:
    CDebugDialog(QDialog* pDlg,QWidget *parent = 0);
    ~CDebugDialog();

protected:
    void changeEvent(QEvent *e);

private:
    QDialog* m_pDlg;
    Ui::CDebugDialog *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // CDEBUGDIALOG_H
