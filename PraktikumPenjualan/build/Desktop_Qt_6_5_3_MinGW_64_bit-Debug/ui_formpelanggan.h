/********************************************************************************
** Form generated from reading UI file 'formpelanggan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPELANGGAN_H
#define UI_FORMPELANGGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPelanggan
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *pelangganLabel;
    QLineEdit *idpelangganLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *namaPelangganLabel;
    QLineEdit *namaPelangganLineEdit;
    QLabel *alamatPelangganLabel;
    QLineEdit *alamatPelangganLineEdit;
    QLabel *kodePosLabel;
    QLineEdit *kodePosLineEdit;
    QLabel *telponLabel;
    QLineEdit *telponLineEdit;
    QLabel *tanggalDaftarLabel;
    QDateEdit *tanggalDaftarDateEdit;
    QLabel *tanggalLoginLabel;
    QDateEdit *tanggalLoginDateEdit;
    QLabel *tanyaLabel;
    QLineEdit *tanyaLineEdit;
    QLabel *jawabLabel;
    QLineEdit *jawabLineEdit;
    QLabel *idKotaLabel;
    QLineEdit *idKotaLineEdit;
    QLabel *kotaPelangganLabel;
    QLineEdit *kotaPelangganLineEdit;
    QPushButton *pushButton;
    QTableView *tablePelanggan;

    void setupUi(QWidget *FormPelanggan)
    {
        if (FormPelanggan->objectName().isEmpty())
            FormPelanggan->setObjectName("FormPelanggan");
        FormPelanggan->resize(1065, 541);
        pushButton_3 = new QPushButton(FormPelanggan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 480, 83, 29));
        pushButton_2 = new QPushButton(FormPelanggan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 480, 83, 29));
        formGroupBox = new QGroupBox(FormPelanggan);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(30, 20, 381, 441));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        pelangganLabel = new QLabel(formGroupBox);
        pelangganLabel->setObjectName("pelangganLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, pelangganLabel);

        idpelangganLineEdit = new QLineEdit(formGroupBox);
        idpelangganLineEdit->setObjectName("idpelangganLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idpelangganLineEdit);

        emailLabel = new QLabel(formGroupBox);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(formGroupBox);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        passwordLabel = new QLabel(formGroupBox);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formGroupBox);
        passwordLineEdit->setObjectName("passwordLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, passwordLineEdit);

        namaPelangganLabel = new QLabel(formGroupBox);
        namaPelangganLabel->setObjectName("namaPelangganLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, namaPelangganLabel);

        namaPelangganLineEdit = new QLineEdit(formGroupBox);
        namaPelangganLineEdit->setObjectName("namaPelangganLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, namaPelangganLineEdit);

        alamatPelangganLabel = new QLabel(formGroupBox);
        alamatPelangganLabel->setObjectName("alamatPelangganLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, alamatPelangganLabel);

        alamatPelangganLineEdit = new QLineEdit(formGroupBox);
        alamatPelangganLineEdit->setObjectName("alamatPelangganLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, alamatPelangganLineEdit);

        kodePosLabel = new QLabel(formGroupBox);
        kodePosLabel->setObjectName("kodePosLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, kodePosLabel);

        kodePosLineEdit = new QLineEdit(formGroupBox);
        kodePosLineEdit->setObjectName("kodePosLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, kodePosLineEdit);

        telponLabel = new QLabel(formGroupBox);
        telponLabel->setObjectName("telponLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, telponLabel);

        telponLineEdit = new QLineEdit(formGroupBox);
        telponLineEdit->setObjectName("telponLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, telponLineEdit);

        tanggalDaftarLabel = new QLabel(formGroupBox);
        tanggalDaftarLabel->setObjectName("tanggalDaftarLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, tanggalDaftarLabel);

        tanggalDaftarDateEdit = new QDateEdit(formGroupBox);
        tanggalDaftarDateEdit->setObjectName("tanggalDaftarDateEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, tanggalDaftarDateEdit);

        tanggalLoginLabel = new QLabel(formGroupBox);
        tanggalLoginLabel->setObjectName("tanggalLoginLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, tanggalLoginLabel);

        tanggalLoginDateEdit = new QDateEdit(formGroupBox);
        tanggalLoginDateEdit->setObjectName("tanggalLoginDateEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, tanggalLoginDateEdit);

        tanyaLabel = new QLabel(formGroupBox);
        tanyaLabel->setObjectName("tanyaLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, tanyaLabel);

        tanyaLineEdit = new QLineEdit(formGroupBox);
        tanyaLineEdit->setObjectName("tanyaLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, tanyaLineEdit);

        jawabLabel = new QLabel(formGroupBox);
        jawabLabel->setObjectName("jawabLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, jawabLabel);

        jawabLineEdit = new QLineEdit(formGroupBox);
        jawabLineEdit->setObjectName("jawabLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, jawabLineEdit);

        idKotaLabel = new QLabel(formGroupBox);
        idKotaLabel->setObjectName("idKotaLabel");

        formLayout->setWidget(11, QFormLayout::LabelRole, idKotaLabel);

        idKotaLineEdit = new QLineEdit(formGroupBox);
        idKotaLineEdit->setObjectName("idKotaLineEdit");

        formLayout->setWidget(11, QFormLayout::FieldRole, idKotaLineEdit);

        kotaPelangganLabel = new QLabel(formGroupBox);
        kotaPelangganLabel->setObjectName("kotaPelangganLabel");

        formLayout->setWidget(12, QFormLayout::LabelRole, kotaPelangganLabel);

        kotaPelangganLineEdit = new QLineEdit(formGroupBox);
        kotaPelangganLineEdit->setObjectName("kotaPelangganLineEdit");

        formLayout->setWidget(12, QFormLayout::FieldRole, kotaPelangganLineEdit);

        pushButton = new QPushButton(FormPelanggan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 480, 83, 29));
        tablePelanggan = new QTableView(FormPelanggan);
        tablePelanggan->setObjectName("tablePelanggan");
        tablePelanggan->setGeometry(QRect(450, 20, 591, 311));

        retranslateUi(FormPelanggan);

        QMetaObject::connectSlotsByName(FormPelanggan);
    } // setupUi

    void retranslateUi(QWidget *FormPelanggan)
    {
        FormPelanggan->setWindowTitle(QCoreApplication::translate("FormPelanggan", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormPelanggan", "Hapus", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormPelanggan", "Update", nullptr));
        pelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "Id pelanggan", nullptr));
        emailLabel->setText(QCoreApplication::translate("FormPelanggan", "Email", nullptr));
        passwordLabel->setText(QCoreApplication::translate("FormPelanggan", "Password", nullptr));
        namaPelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "Nama Pelanggan", nullptr));
        alamatPelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "Alamat Pelanggan", nullptr));
        kodePosLabel->setText(QCoreApplication::translate("FormPelanggan", "Kode Pos", nullptr));
        telponLabel->setText(QCoreApplication::translate("FormPelanggan", "Telpon", nullptr));
        tanggalDaftarLabel->setText(QCoreApplication::translate("FormPelanggan", "Tanggal Daftar", nullptr));
        tanggalLoginLabel->setText(QCoreApplication::translate("FormPelanggan", "Tanggal Login", nullptr));
        tanyaLabel->setText(QCoreApplication::translate("FormPelanggan", "Tanya", nullptr));
        jawabLabel->setText(QCoreApplication::translate("FormPelanggan", "Jawab", nullptr));
        idKotaLabel->setText(QCoreApplication::translate("FormPelanggan", "Id Kota", nullptr));
        kotaPelangganLabel->setText(QCoreApplication::translate("FormPelanggan", "Kota pelanggan", nullptr));
        pushButton->setText(QCoreApplication::translate("FormPelanggan", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormPelanggan: public Ui_FormPelanggan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPELANGGAN_H
