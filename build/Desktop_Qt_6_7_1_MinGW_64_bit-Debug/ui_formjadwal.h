/********************************************************************************
** Form generated from reading UI file 'formjadwal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMJADWAL_H
#define UI_FORMJADWAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formjadwal
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *id_JadwalLabel;
    QLineEdit *id_JadwalLineEdit;
    QLabel *kegiatanLabel;
    QLineEdit *kegiatanLineEdit;
    QLabel *waktuLabel;
    QDateTimeEdit *waktuDateTimeEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *formjadwal)
    {
        if (formjadwal->objectName().isEmpty())
            formjadwal->setObjectName("formjadwal");
        formjadwal->resize(400, 300);
        formLayoutWidget = new QWidget(formjadwal);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 167, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        id_JadwalLabel = new QLabel(formLayoutWidget);
        id_JadwalLabel->setObjectName("id_JadwalLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, id_JadwalLabel);

        id_JadwalLineEdit = new QLineEdit(formLayoutWidget);
        id_JadwalLineEdit->setObjectName("id_JadwalLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, id_JadwalLineEdit);

        kegiatanLabel = new QLabel(formLayoutWidget);
        kegiatanLabel->setObjectName("kegiatanLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kegiatanLabel);

        kegiatanLineEdit = new QLineEdit(formLayoutWidget);
        kegiatanLineEdit->setObjectName("kegiatanLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kegiatanLineEdit);

        waktuLabel = new QLabel(formLayoutWidget);
        waktuLabel->setObjectName("waktuLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, waktuLabel);

        waktuDateTimeEdit = new QDateTimeEdit(formLayoutWidget);
        waktuDateTimeEdit->setObjectName("waktuDateTimeEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, waktuDateTimeEdit);

        pushButton = new QPushButton(formjadwal);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 110, 75, 24));

        retranslateUi(formjadwal);

        QMetaObject::connectSlotsByName(formjadwal);
    } // setupUi

    void retranslateUi(QWidget *formjadwal)
    {
        formjadwal->setWindowTitle(QCoreApplication::translate("formjadwal", "Form", nullptr));
        id_JadwalLabel->setText(QCoreApplication::translate("formjadwal", "Id_Jadwal", nullptr));
        kegiatanLabel->setText(QCoreApplication::translate("formjadwal", "Kegiatan", nullptr));
        waktuLabel->setText(QCoreApplication::translate("formjadwal", "Waktu", nullptr));
        pushButton->setText(QCoreApplication::translate("formjadwal", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formjadwal: public Ui_formjadwal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMJADWAL_H
