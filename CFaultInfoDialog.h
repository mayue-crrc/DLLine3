#ifndef CFAULTINFODIALOG_H
#define CFAULTINFODIALOG_H

#include <QDialog>

namespace Ui {
    class CFaultInfoDialog;
}

class CFaultInfoDialog : public QDialog {
    Q_OBJECT
public:
    CFaultInfoDialog(QWidget *parent = 0);
    ~CFaultInfoDialog();

    void SetClkIndex(int idx);

    bool m_ShowBorder;

protected:
    void changeEvent(QEvent *e);
    void paintEvent ( QPaintEvent * event );

public:
    Ui::CFaultInfoDialog *ui;

private:
    int m_clkidx;
    QString m_name;
    QString m_code;
//  QString m_reason;
    QString m_advice;
//  QString m_position;

private slots:
    void on_pushButton_clicked();
};

#endif // CFAULTINFODIALOG_H
