/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUTAMA_H
#define UI_FORMUTAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formUtama
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *formUtama)
    {
        if (formUtama->objectName().isEmpty())
            formUtama->setObjectName("formUtama");
        formUtama->resize(367, 249);
        centralwidget = new QWidget(formUtama);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 20, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 70, 121, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 120, 121, 41));
        formUtama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(formUtama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 367, 22));
        formUtama->setMenuBar(menubar);
        statusbar = new QStatusBar(formUtama);
        statusbar->setObjectName("statusbar");
        formUtama->setStatusBar(statusbar);

        retranslateUi(formUtama);

        QMetaObject::connectSlotsByName(formUtama);
    } // setupUi

    void retranslateUi(QMainWindow *formUtama)
    {
        formUtama->setWindowTitle(QCoreApplication::translate("formUtama", "formUtama", nullptr));
        pushButton->setText(QCoreApplication::translate("formUtama", "Form Pria", nullptr));
        pushButton_2->setText(QCoreApplication::translate("formUtama", "Form Wanita", nullptr));
        pushButton_3->setText(QCoreApplication::translate("formUtama", "Form Jadwal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formUtama: public Ui_formUtama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
