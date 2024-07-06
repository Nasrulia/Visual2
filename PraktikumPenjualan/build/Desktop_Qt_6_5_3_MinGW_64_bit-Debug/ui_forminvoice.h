/********************************************************************************
** Form generated from reading UI file 'forminvoice.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINVOICE_H
#define UI_FORMINVOICE_H

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

class Ui_FormInvoice
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idInvoiceLabel;
    QLineEdit *idInvoiceLineEdit;
    QLabel *tanggalLabel;
    QDateEdit *tanggalDateEdit;
    QLabel *jumlahLabel;
    QLineEdit *jumlahLineEdit;
    QLabel *ongkirLabel;
    QLineEdit *ongkirLineEdit;
    QLabel *totalLabel;
    QLineEdit *totalLineEdit;
    QLabel *satusLabel;
    QLineEdit *satusLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *kotaLabel;
    QLineEdit *kotaLineEdit;
    QLabel *kodePosLabel;
    QLineEdit *kodePosLineEdit;
    QLabel *teleponLabel;
    QLineEdit *teleponLineEdit;
    QLabel *tarifLabel;
    QLineEdit *tarifLineEdit;
    QLabel *jumlahBeratLabel;
    QLineEdit *jumlahBeratLineEdit;
    QLabel *namaPenerimaLabel;
    QLineEdit *namaPenerimaLineEdit;
    QLabel *idplgLabel;
    QLineEdit *idplgLineEdit;
    QPushButton *pushButton_2;
    QTableView *tableInvoice;

    void setupUi(QWidget *FormInvoice)
    {
        if (FormInvoice->objectName().isEmpty())
            FormInvoice->setObjectName("FormInvoice");
        FormInvoice->resize(1077, 564);
        pushButton_3 = new QPushButton(FormInvoice);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 510, 83, 29));
        pushButton = new QPushButton(FormInvoice);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 510, 83, 29));
        formGroupBox = new QGroupBox(FormInvoice);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(30, 20, 391, 471));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idInvoiceLabel = new QLabel(formGroupBox);
        idInvoiceLabel->setObjectName("idInvoiceLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idInvoiceLabel);

        idInvoiceLineEdit = new QLineEdit(formGroupBox);
        idInvoiceLineEdit->setObjectName("idInvoiceLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idInvoiceLineEdit);

        tanggalLabel = new QLabel(formGroupBox);
        tanggalLabel->setObjectName("tanggalLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, tanggalLabel);

        tanggalDateEdit = new QDateEdit(formGroupBox);
        tanggalDateEdit->setObjectName("tanggalDateEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, tanggalDateEdit);

        jumlahLabel = new QLabel(formGroupBox);
        jumlahLabel->setObjectName("jumlahLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlahLabel);

        jumlahLineEdit = new QLineEdit(formGroupBox);
        jumlahLineEdit->setObjectName("jumlahLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlahLineEdit);

        ongkirLabel = new QLabel(formGroupBox);
        ongkirLabel->setObjectName("ongkirLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, ongkirLabel);

        ongkirLineEdit = new QLineEdit(formGroupBox);
        ongkirLineEdit->setObjectName("ongkirLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, ongkirLineEdit);

        totalLabel = new QLabel(formGroupBox);
        totalLabel->setObjectName("totalLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, totalLabel);

        totalLineEdit = new QLineEdit(formGroupBox);
        totalLineEdit->setObjectName("totalLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, totalLineEdit);

        satusLabel = new QLabel(formGroupBox);
        satusLabel->setObjectName("satusLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, satusLabel);

        satusLineEdit = new QLineEdit(formGroupBox);
        satusLineEdit->setObjectName("satusLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, satusLineEdit);

        alamatLabel = new QLabel(formGroupBox);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formGroupBox);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, alamatLineEdit);

        kotaLabel = new QLabel(formGroupBox);
        kotaLabel->setObjectName("kotaLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, kotaLabel);

        kotaLineEdit = new QLineEdit(formGroupBox);
        kotaLineEdit->setObjectName("kotaLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, kotaLineEdit);

        kodePosLabel = new QLabel(formGroupBox);
        kodePosLabel->setObjectName("kodePosLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, kodePosLabel);

        kodePosLineEdit = new QLineEdit(formGroupBox);
        kodePosLineEdit->setObjectName("kodePosLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, kodePosLineEdit);

        teleponLabel = new QLabel(formGroupBox);
        teleponLabel->setObjectName("teleponLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, teleponLabel);

        teleponLineEdit = new QLineEdit(formGroupBox);
        teleponLineEdit->setObjectName("teleponLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, teleponLineEdit);

        tarifLabel = new QLabel(formGroupBox);
        tarifLabel->setObjectName("tarifLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, tarifLabel);

        tarifLineEdit = new QLineEdit(formGroupBox);
        tarifLineEdit->setObjectName("tarifLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, tarifLineEdit);

        jumlahBeratLabel = new QLabel(formGroupBox);
        jumlahBeratLabel->setObjectName("jumlahBeratLabel");

        formLayout->setWidget(11, QFormLayout::LabelRole, jumlahBeratLabel);

        jumlahBeratLineEdit = new QLineEdit(formGroupBox);
        jumlahBeratLineEdit->setObjectName("jumlahBeratLineEdit");

        formLayout->setWidget(11, QFormLayout::FieldRole, jumlahBeratLineEdit);

        namaPenerimaLabel = new QLabel(formGroupBox);
        namaPenerimaLabel->setObjectName("namaPenerimaLabel");

        formLayout->setWidget(12, QFormLayout::LabelRole, namaPenerimaLabel);

        namaPenerimaLineEdit = new QLineEdit(formGroupBox);
        namaPenerimaLineEdit->setObjectName("namaPenerimaLineEdit");

        formLayout->setWidget(12, QFormLayout::FieldRole, namaPenerimaLineEdit);

        idplgLabel = new QLabel(formGroupBox);
        idplgLabel->setObjectName("idplgLabel");

        formLayout->setWidget(13, QFormLayout::LabelRole, idplgLabel);

        idplgLineEdit = new QLineEdit(formGroupBox);
        idplgLineEdit->setObjectName("idplgLineEdit");

        formLayout->setWidget(13, QFormLayout::FieldRole, idplgLineEdit);

        pushButton_2 = new QPushButton(FormInvoice);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 510, 83, 29));
        tableInvoice = new QTableView(FormInvoice);
        tableInvoice->setObjectName("tableInvoice");
        tableInvoice->setGeometry(QRect(450, 20, 601, 351));

        retranslateUi(FormInvoice);

        QMetaObject::connectSlotsByName(FormInvoice);
    } // setupUi

    void retranslateUi(QWidget *FormInvoice)
    {
        FormInvoice->setWindowTitle(QCoreApplication::translate("FormInvoice", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormInvoice", "Hapus", nullptr));
        pushButton->setText(QCoreApplication::translate("FormInvoice", "Simpan", nullptr));
        idInvoiceLabel->setText(QCoreApplication::translate("FormInvoice", "Id invoice", nullptr));
        tanggalLabel->setText(QCoreApplication::translate("FormInvoice", "Tanggal", nullptr));
        jumlahLabel->setText(QCoreApplication::translate("FormInvoice", "Jumlah", nullptr));
        ongkirLabel->setText(QCoreApplication::translate("FormInvoice", "Ongkir", nullptr));
        totalLabel->setText(QCoreApplication::translate("FormInvoice", "Total", nullptr));
        satusLabel->setText(QCoreApplication::translate("FormInvoice", "Satus", nullptr));
        alamatLabel->setText(QCoreApplication::translate("FormInvoice", "Alamat", nullptr));
        kotaLabel->setText(QCoreApplication::translate("FormInvoice", "Kota", nullptr));
        kodePosLabel->setText(QCoreApplication::translate("FormInvoice", "Kode Pos", nullptr));
        teleponLabel->setText(QCoreApplication::translate("FormInvoice", "Telepon", nullptr));
        tarifLabel->setText(QCoreApplication::translate("FormInvoice", "Tarif", nullptr));
        jumlahBeratLabel->setText(QCoreApplication::translate("FormInvoice", "Jumlah berat", nullptr));
        namaPenerimaLabel->setText(QCoreApplication::translate("FormInvoice", "Nama penerima", nullptr));
        idplgLabel->setText(QCoreApplication::translate("FormInvoice", "idplg", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormInvoice", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormInvoice: public Ui_FormInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINVOICE_H
