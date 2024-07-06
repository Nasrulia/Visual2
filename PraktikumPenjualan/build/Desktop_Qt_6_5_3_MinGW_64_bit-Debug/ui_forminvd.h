/********************************************************************************
** Form generated from reading UI file 'forminvd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINVD_H
#define UI_FORMINVD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormInvd
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idDetailLabel;
    QLineEdit *idDetailLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *satuanLabel;
    QLineEdit *satuanLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QLabel *qtyLabel;
    QLineEdit *qtyLineEdit;
    QLabel *jumlahLabel;
    QLineEdit *jumlahLineEdit;
    QLabel *beratLabel;
    QLineEdit *beratLineEdit;
    QLabel *jumlahBeratLabel;
    QLineEdit *jumlahBeratLineEdit;
    QLabel *idInvoiceLabel;
    QLineEdit *idInvoiceLineEdit;
    QLabel *idBarangLabel;
    QLineEdit *idBarangLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableInvd;

    void setupUi(QWidget *FormInvd)
    {
        if (FormInvd->objectName().isEmpty())
            FormInvd->setObjectName("FormInvd");
        FormInvd->resize(947, 446);
        formGroupBox = new QGroupBox(FormInvd);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(40, 20, 381, 361));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idDetailLabel = new QLabel(formGroupBox);
        idDetailLabel->setObjectName("idDetailLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idDetailLabel);

        idDetailLineEdit = new QLineEdit(formGroupBox);
        idDetailLineEdit->setObjectName("idDetailLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idDetailLineEdit);

        namaBarangLabel = new QLabel(formGroupBox);
        namaBarangLabel->setObjectName("namaBarangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaBarangLabel);

        namaBarangLineEdit = new QLineEdit(formGroupBox);
        namaBarangLineEdit->setObjectName("namaBarangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaBarangLineEdit);

        satuanLabel = new QLabel(formGroupBox);
        satuanLabel->setObjectName("satuanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, satuanLabel);

        satuanLineEdit = new QLineEdit(formGroupBox);
        satuanLineEdit->setObjectName("satuanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, satuanLineEdit);

        hargaLabel = new QLabel(formGroupBox);
        hargaLabel->setObjectName("hargaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, hargaLabel);

        hargaLineEdit = new QLineEdit(formGroupBox);
        hargaLineEdit->setObjectName("hargaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, hargaLineEdit);

        qtyLabel = new QLabel(formGroupBox);
        qtyLabel->setObjectName("qtyLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, qtyLabel);

        qtyLineEdit = new QLineEdit(formGroupBox);
        qtyLineEdit->setObjectName("qtyLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, qtyLineEdit);

        jumlahLabel = new QLabel(formGroupBox);
        jumlahLabel->setObjectName("jumlahLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, jumlahLabel);

        jumlahLineEdit = new QLineEdit(formGroupBox);
        jumlahLineEdit->setObjectName("jumlahLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, jumlahLineEdit);

        beratLabel = new QLabel(formGroupBox);
        beratLabel->setObjectName("beratLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, beratLabel);

        beratLineEdit = new QLineEdit(formGroupBox);
        beratLineEdit->setObjectName("beratLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, beratLineEdit);

        jumlahBeratLabel = new QLabel(formGroupBox);
        jumlahBeratLabel->setObjectName("jumlahBeratLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, jumlahBeratLabel);

        jumlahBeratLineEdit = new QLineEdit(formGroupBox);
        jumlahBeratLineEdit->setObjectName("jumlahBeratLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, jumlahBeratLineEdit);

        idInvoiceLabel = new QLabel(formGroupBox);
        idInvoiceLabel->setObjectName("idInvoiceLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, idInvoiceLabel);

        idInvoiceLineEdit = new QLineEdit(formGroupBox);
        idInvoiceLineEdit->setObjectName("idInvoiceLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, idInvoiceLineEdit);

        idBarangLabel = new QLabel(formGroupBox);
        idBarangLabel->setObjectName("idBarangLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, idBarangLabel);

        idBarangLineEdit = new QLineEdit(formGroupBox);
        idBarangLineEdit->setObjectName("idBarangLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, idBarangLineEdit);

        pushButton = new QPushButton(FormInvd);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 400, 83, 29));
        pushButton_2 = new QPushButton(FormInvd);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 400, 83, 29));
        pushButton_3 = new QPushButton(FormInvd);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 400, 83, 29));
        tableInvd = new QTableView(FormInvd);
        tableInvd->setObjectName("tableInvd");
        tableInvd->setGeometry(QRect(450, 20, 461, 261));

        retranslateUi(FormInvd);

        QMetaObject::connectSlotsByName(FormInvd);
    } // setupUi

    void retranslateUi(QWidget *FormInvd)
    {
        FormInvd->setWindowTitle(QCoreApplication::translate("FormInvd", "Form", nullptr));
        idDetailLabel->setText(QCoreApplication::translate("FormInvd", "Id detail", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormInvd", "Nama barang", nullptr));
        satuanLabel->setText(QCoreApplication::translate("FormInvd", "Satuan", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormInvd", "Harga", nullptr));
        qtyLabel->setText(QCoreApplication::translate("FormInvd", "Qty", nullptr));
        jumlahLabel->setText(QCoreApplication::translate("FormInvd", "Jumlah", nullptr));
        beratLabel->setText(QCoreApplication::translate("FormInvd", "Berat", nullptr));
        jumlahBeratLabel->setText(QCoreApplication::translate("FormInvd", "Jumlah berat", nullptr));
        idInvoiceLabel->setText(QCoreApplication::translate("FormInvd", "Id invoice", nullptr));
        idBarangLabel->setText(QCoreApplication::translate("FormInvd", "Id barang", nullptr));
        pushButton->setText(QCoreApplication::translate("FormInvd", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormInvd", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormInvd", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormInvd: public Ui_FormInvd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINVD_H
