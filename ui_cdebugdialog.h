/********************************************************************************
** Form generated from reading UI file 'cdebugdialog.ui'
**
** Created: Sun Sep 25 11:03:37 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDEBUGDIALOG_H
#define UI_CDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CDebugDialog
{
public:
    QPushButton *pushButton;
    QLineEdit *pageindexEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *CDebugDialog)
    {
        if (CDebugDialog->objectName().isEmpty())
            CDebugDialog->setObjectName(QString::fromUtf8("CDebugDialog"));
        CDebugDialog->resize(300, 160);
        pushButton = new QPushButton(CDebugDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 110, 91, 41));
        pageindexEdit = new QLineEdit(CDebugDialog);
        pageindexEdit->setObjectName(QString::fromUtf8("pageindexEdit"));
        pageindexEdit->setGeometry(QRect(150, 60, 111, 38));
        label = new QLabel(CDebugDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 131, 28));
        label_2 = new QLabel(CDebugDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 261, 28));
        label_3 = new QLabel(CDebugDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 130, 121, 28));

        retranslateUi(CDebugDialog);

        QMetaObject::connectSlotsByName(CDebugDialog);
    } // setupUi

    void retranslateUi(QDialog *CDebugDialog)
    {
        CDebugDialog->setWindowTitle(QApplication::translate("CDebugDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CDebugDialog", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDebugDialog", "PageIndex:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDebugDialog", "CurrentPageIndex:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CDebugDialog", "20110110", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDebugDialog: public Ui_CDebugDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDEBUGDIALOG_H
