/********************************************************************************
** Form generated from reading UI file 'formbarang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBARANG_H
#define UI_FORMBARANG_H

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

class Ui_FormBarang
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idBarangLabel;
    QLineEdit *idBarangLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *satuanLabel;
    QLineEdit *satuanLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QLabel *keteranganLabel;
    QLineEdit *keteranganLineEdit;
    QLabel *beratLabel;
    QLineEdit *beratLineEdit;
    QLabel *dilihatLabel;
    QLineEdit *dilihatLineEdit;
    QLabel *dibeliLabel;
    QLineEdit *dibeliLineEdit;
    QLabel *kataKunciLabel;
    QLineEdit *kataKunciLineEdit;
    QLabel *stokLabel;
    QLineEdit *stokLineEdit;
    QLabel *idSubKategoriLabel;
    QLineEdit *idSubKategoriLineEdit;
    QTableView *tableBarang;

    void setupUi(QWidget *FormBarang)
    {
        if (FormBarang->objectName().isEmpty())
            FormBarang->setObjectName("FormBarang");
        FormBarang->resize(962, 474);
        pushButton_2 = new QPushButton(FormBarang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 420, 83, 29));
        pushButton_3 = new QPushButton(FormBarang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 420, 83, 29));
        pushButton = new QPushButton(FormBarang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 420, 83, 29));
        formGroupBox = new QGroupBox(FormBarang);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(20, 20, 381, 381));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idBarangLabel = new QLabel(formGroupBox);
        idBarangLabel->setObjectName("idBarangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idBarangLabel);

        idBarangLineEdit = new QLineEdit(formGroupBox);
        idBarangLineEdit->setObjectName("idBarangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idBarangLineEdit);

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

        keteranganLabel = new QLabel(formGroupBox);
        keteranganLabel->setObjectName("keteranganLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, keteranganLabel);

        keteranganLineEdit = new QLineEdit(formGroupBox);
        keteranganLineEdit->setObjectName("keteranganLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, keteranganLineEdit);

        beratLabel = new QLabel(formGroupBox);
        beratLabel->setObjectName("beratLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, beratLabel);

        beratLineEdit = new QLineEdit(formGroupBox);
        beratLineEdit->setObjectName("beratLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, beratLineEdit);

        dilihatLabel = new QLabel(formGroupBox);
        dilihatLabel->setObjectName("dilihatLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, dilihatLabel);

        dilihatLineEdit = new QLineEdit(formGroupBox);
        dilihatLineEdit->setObjectName("dilihatLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, dilihatLineEdit);

        dibeliLabel = new QLabel(formGroupBox);
        dibeliLabel->setObjectName("dibeliLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, dibeliLabel);

        dibeliLineEdit = new QLineEdit(formGroupBox);
        dibeliLineEdit->setObjectName("dibeliLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, dibeliLineEdit);

        kataKunciLabel = new QLabel(formGroupBox);
        kataKunciLabel->setObjectName("kataKunciLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, kataKunciLabel);

        kataKunciLineEdit = new QLineEdit(formGroupBox);
        kataKunciLineEdit->setObjectName("kataKunciLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, kataKunciLineEdit);

        stokLabel = new QLabel(formGroupBox);
        stokLabel->setObjectName("stokLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, stokLabel);

        stokLineEdit = new QLineEdit(formGroupBox);
        stokLineEdit->setObjectName("stokLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, stokLineEdit);

        idSubKategoriLabel = new QLabel(formGroupBox);
        idSubKategoriLabel->setObjectName("idSubKategoriLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, idSubKategoriLabel);

        idSubKategoriLineEdit = new QLineEdit(formGroupBox);
        idSubKategoriLineEdit->setObjectName("idSubKategoriLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, idSubKategoriLineEdit);

        tableBarang = new QTableView(FormBarang);
        tableBarang->setObjectName("tableBarang");
        tableBarang->setGeometry(QRect(450, 20, 471, 311));

        retranslateUi(FormBarang);

        QMetaObject::connectSlotsByName(FormBarang);
    } // setupUi

    void retranslateUi(QWidget *FormBarang)
    {
        FormBarang->setWindowTitle(QCoreApplication::translate("FormBarang", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormBarang", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormBarang", "Hapus", nullptr));
        pushButton->setText(QCoreApplication::translate("FormBarang", "Simpan", nullptr));
        idBarangLabel->setText(QCoreApplication::translate("FormBarang", "Id barang", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormBarang", "Nama barang", nullptr));
        satuanLabel->setText(QCoreApplication::translate("FormBarang", "Satuan", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormBarang", "Harga", nullptr));
        keteranganLabel->setText(QCoreApplication::translate("FormBarang", "Keterangan", nullptr));
        beratLabel->setText(QCoreApplication::translate("FormBarang", "Berat", nullptr));
        dilihatLabel->setText(QCoreApplication::translate("FormBarang", "Dilihat", nullptr));
        dibeliLabel->setText(QCoreApplication::translate("FormBarang", "Dibeli", nullptr));
        kataKunciLabel->setText(QCoreApplication::translate("FormBarang", "Kata Kunci", nullptr));
        stokLabel->setText(QCoreApplication::translate("FormBarang", "Stok", nullptr));
        idSubKategoriLabel->setText(QCoreApplication::translate("FormBarang", "Id sub kategori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormBarang: public Ui_FormBarang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBARANG_H
