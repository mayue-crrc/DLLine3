/********************************************************************************
** Form generated from reading UI file 'CFaultInfoDialog.ui'
**
** Created: Sun Sep 25 11:03:37 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFAULTINFODIALOG_H
#define UI_CFAULTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CFaultInfoDialog
{
public:
    QLabel *label_code;
    QLabel *label_name;
    QLabel *label_advice;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_6;
    QFrame *line_7;

    void setupUi(QDialog *CFaultInfoDialog)
    {
        if (CFaultInfoDialog->objectName().isEmpty())
            CFaultInfoDialog->setObjectName(QString::fromUtf8("CFaultInfoDialog"));
        CFaultInfoDialog->resize(670, 328);
        CFaultInfoDialog->setStyleSheet(QString::fromUtf8(""));
        label_code = new QLabel(CFaultInfoDialog);
        label_code->setObjectName(QString::fromUtf8("label_code"));
        label_code->setGeometry(QRect(30, 30, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("AR PL ShanHeiSun Uni"));
        font.setPointSize(17);
        label_code->setFont(font);
        label_name = new QLabel(CFaultInfoDialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(30, 80, 621, 31));
        label_name->setFont(font);
        label_advice = new QLabel(CFaultInfoDialog);
        label_advice->setObjectName(QString::fromUtf8("label_advice"));
        label_advice->setGeometry(QRect(30, 130, 621, 141));
        label_advice->setFont(font);
        label_advice->setWordWrap(true);
        pushButton = new QPushButton(CFaultInfoDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 290, 111, 31));
        line = new QFrame(CFaultInfoDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 20, 21, 261));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::VLine);
        line_2 = new QFrame(CFaultInfoDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(650, 20, 21, 261));
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(CFaultInfoDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 10, 641, 20));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setLineWidth(1);
        line_3->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(CFaultInfoDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 60, 641, 16));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setLineWidth(1);
        line_4->setFrameShape(QFrame::HLine);
        line_6 = new QFrame(CFaultInfoDialog);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(20, 110, 641, 16));
        line_6->setFrameShadow(QFrame::Sunken);
        line_6->setLineWidth(1);
        line_6->setFrameShape(QFrame::HLine);
        line_7 = new QFrame(CFaultInfoDialog);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(20, 270, 641, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SimHei"));
        font1.setPointSize(20);
        line_7->setFont(font1);
        line_7->setFrameShadow(QFrame::Sunken);
        line_7->setLineWidth(1);
        line_7->setFrameShape(QFrame::HLine);

        retranslateUi(CFaultInfoDialog);

        QMetaObject::connectSlotsByName(CFaultInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CFaultInfoDialog)
    {
        CFaultInfoDialog->setWindowTitle(QApplication::translate("CFaultInfoDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_code->setText(QApplication::translate("CFaultInfoDialog", "*******", 0, QApplication::UnicodeUTF8));
        label_name->setText(QApplication::translate("CFaultInfoDialog", "********", 0, QApplication::UnicodeUTF8));
        label_advice->setText(QApplication::translate("CFaultInfoDialog", "************************", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CFaultInfoDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFaultInfoDialog: public Ui_CFaultInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFAULTINFODIALOG_H
