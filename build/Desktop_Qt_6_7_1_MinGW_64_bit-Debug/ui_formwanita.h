/********************************************************************************
** Form generated from reading UI file 'formwanita.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWANITA_H
#define UI_FORMWANITA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formwanita
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *id_priaLabel;
    QLineEdit *id_priaLineEdit;
    QLabel *nikLabel;
    QLineEdit *nikLineEdit;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *tempatLahirLabel;
    QLineEdit *tempatLahirLineEdit;
    QLabel *tanggalLahirLabel;
    QDateEdit *tanggalLahirDateEdit;
    QLabel *nikAyahLabel;
    QLineEdit *nikAyahLineEdit;
    QLabel *namaAyahLabel;
    QLineEdit *namaAyahLineEdit;
    QLabel *nikIbuLabel;
    QLineEdit *nikIbuLineEdit;
    QLabel *namaIbuLabel;
    QLineEdit *namaIbuLineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *formwanita)
    {
        if (formwanita->objectName().isEmpty())
            formwanita->setObjectName("formwanita");
        formwanita->resize(400, 315);
        formLayoutWidget = new QWidget(formwanita);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 0, 211, 281));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        id_priaLabel = new QLabel(formLayoutWidget);
        id_priaLabel->setObjectName("id_priaLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, id_priaLabel);

        id_priaLineEdit = new QLineEdit(formLayoutWidget);
        id_priaLineEdit->setObjectName("id_priaLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, id_priaLineEdit);

        nikLabel = new QLabel(formLayoutWidget);
        nikLabel->setObjectName("nikLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, nikLabel);

        nikLineEdit = new QLineEdit(formLayoutWidget);
        nikLineEdit->setObjectName("nikLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, nikLineEdit);

        namaLabel = new QLabel(formLayoutWidget);
        namaLabel->setObjectName("namaLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formLayoutWidget);
        namaLineEdit->setObjectName("namaLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, namaLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, alamatLineEdit);

        tempatLahirLabel = new QLabel(formLayoutWidget);
        tempatLahirLabel->setObjectName("tempatLahirLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, tempatLahirLabel);

        tempatLahirLineEdit = new QLineEdit(formLayoutWidget);
        tempatLahirLineEdit->setObjectName("tempatLahirLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, tempatLahirLineEdit);

        tanggalLahirLabel = new QLabel(formLayoutWidget);
        tanggalLahirLabel->setObjectName("tanggalLahirLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, tanggalLahirLabel);

        tanggalLahirDateEdit = new QDateEdit(formLayoutWidget);
        tanggalLahirDateEdit->setObjectName("tanggalLahirDateEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, tanggalLahirDateEdit);

        nikAyahLabel = new QLabel(formLayoutWidget);
        nikAyahLabel->setObjectName("nikAyahLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, nikAyahLabel);

        nikAyahLineEdit = new QLineEdit(formLayoutWidget);
        nikAyahLineEdit->setObjectName("nikAyahLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, nikAyahLineEdit);

        namaAyahLabel = new QLabel(formLayoutWidget);
        namaAyahLabel->setObjectName("namaAyahLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, namaAyahLabel);

        namaAyahLineEdit = new QLineEdit(formLayoutWidget);
        namaAyahLineEdit->setObjectName("namaAyahLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, namaAyahLineEdit);

        nikIbuLabel = new QLabel(formLayoutWidget);
        nikIbuLabel->setObjectName("nikIbuLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, nikIbuLabel);

        nikIbuLineEdit = new QLineEdit(formLayoutWidget);
        nikIbuLineEdit->setObjectName("nikIbuLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, nikIbuLineEdit);

        namaIbuLabel = new QLabel(formLayoutWidget);
        namaIbuLabel->setObjectName("namaIbuLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, namaIbuLabel);

        namaIbuLineEdit = new QLineEdit(formLayoutWidget);
        namaIbuLineEdit->setObjectName("namaIbuLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, namaIbuLineEdit);

        pushButton = new QPushButton(formwanita);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 280, 75, 24));

        retranslateUi(formwanita);

        QMetaObject::connectSlotsByName(formwanita);
    } // setupUi

    void retranslateUi(QWidget *formwanita)
    {
        formwanita->setWindowTitle(QCoreApplication::translate("formwanita", "Form", nullptr));
        id_priaLabel->setText(QCoreApplication::translate("formwanita", "Id_Wanita", nullptr));
        nikLabel->setText(QCoreApplication::translate("formwanita", "Nik", nullptr));
        namaLabel->setText(QCoreApplication::translate("formwanita", "Nama", nullptr));
        alamatLabel->setText(QCoreApplication::translate("formwanita", "Alamat", nullptr));
        tempatLahirLabel->setText(QCoreApplication::translate("formwanita", "Tempat Lahir", nullptr));
        tanggalLahirLabel->setText(QCoreApplication::translate("formwanita", "Tanggal Lahir", nullptr));
        nikAyahLabel->setText(QCoreApplication::translate("formwanita", "Nik Ayah", nullptr));
        namaAyahLabel->setText(QCoreApplication::translate("formwanita", "Nama Ayah", nullptr));
        nikIbuLabel->setText(QCoreApplication::translate("formwanita", "Nik Ibu", nullptr));
        namaIbuLabel->setText(QCoreApplication::translate("formwanita", "Nama Ibu", nullptr));
        pushButton->setText(QCoreApplication::translate("formwanita", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formwanita: public Ui_formwanita {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWANITA_H
