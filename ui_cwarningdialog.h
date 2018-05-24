/********************************************************************************
** Form generated from reading UI file 'cwarningdialog.ui'
**
** Created: Sun Sep 25 11:03:37 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWARNINGDIALOG_H
#define UI_CWARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CWarningDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *CWarningDialog)
    {
        if (CWarningDialog->objectName().isEmpty())
            CWarningDialog->setObjectName(QString::fromUtf8("CWarningDialog"));
        CWarningDialog->resize(406, 166);
        CWarningDialog->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(CWarningDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 110, 101, 41));
        label = new QLabel(CWarningDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 37, 301, 51));

        retranslateUi(CWarningDialog);

        QMetaObject::connectSlotsByName(CWarningDialog);
    } // setupUi

    void retranslateUi(QDialog *CWarningDialog)
    {
        CWarningDialog->setWindowTitle(QApplication::translate("CWarningDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CWarningDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CWarningDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CWarningDialog: public Ui_CWarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWARNINGDIALOG_H
