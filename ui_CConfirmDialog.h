/********************************************************************************
** Form generated from reading UI file 'CConfirmDialog.ui'
**
** Created: Sun Sep 25 11:03:37 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCONFIRMDIALOG_H
#define UI_CCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CConfirmDialog
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *CConfirmDialog)
    {
        if (CConfirmDialog->objectName().isEmpty())
            CConfirmDialog->setObjectName(QString::fromUtf8("CConfirmDialog"));
        CConfirmDialog->resize(406, 166);
        label = new QLabel(CConfirmDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 37, 301, 51));
        pushButton_2 = new QPushButton(CConfirmDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 110, 101, 41));
        pushButton_3 = new QPushButton(CConfirmDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 110, 101, 41));

        retranslateUi(CConfirmDialog);

        QMetaObject::connectSlotsByName(CConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *CConfirmDialog)
    {
        CConfirmDialog->setWindowTitle(QApplication::translate("CConfirmDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CConfirmDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CConfirmDialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("CConfirmDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CConfirmDialog: public Ui_CConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCONFIRMDIALOG_H
