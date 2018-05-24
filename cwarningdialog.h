#ifndef CWARNINGDIALOG_H
#define CWARNINGDIALOG_H

#include <QDialog>

namespace Ui {
    class CWarningDialog;
}

class CWarningDialog : public QDialog {
    Q_OBJECT
public:
    CWarningDialog(QWidget *parent = 0);
    ~CWarningDialog();

public:
    void SetWarningStr(QString str);

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *);

private:
    Ui::CWarningDialog *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // CWARNINGDIALOG_H
