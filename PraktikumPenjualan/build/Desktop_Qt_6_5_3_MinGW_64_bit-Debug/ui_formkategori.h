/********************************************************************************
** Form generated from reading UI file 'formkategori.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKATEGORI_H
#define UI_FORMKATEGORI_H

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

class Ui_FormKategori
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idKategoriLabel;
    QLineEdit *idKategoriLineEdit;
    QLabel *namaKategoriLabel;
    QLineEdit *namaKategoriLineEdit;
    QTableView *tableKategori;

    void setupUi(QWidget *FormKategori)
    {
        if (FormKategori->objectName().isEmpty())
            FormKategori->setObjectName("FormKategori");
        FormKategori->resize(443, 411);
        pushButton_3 = new QPushButton(FormKategori);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 120, 83, 29));
        pushButton = new QPushButton(FormKategori);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 120, 83, 29));
        pushButton_2 = new QPushButton(FormKategori);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 120, 83, 29));
        formGroupBox = new QGroupBox(FormKategori);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(40, 20, 361, 81));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idKategoriLabel = new QLabel(formGroupBox);
        idKategoriLabel->setObjectName("idKategoriLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idKategoriLabel);

        idKategoriLineEdit = new QLineEdit(formGroupBox);
        idKategoriLineEdit->setObjectName("idKategoriLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idKategoriLineEdit);

        namaKategoriLabel = new QLabel(formGroupBox);
        namaKategoriLabel->setObjectName("namaKategoriLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaKategoriLabel);

        namaKategoriLineEdit = new QLineEdit(formGroupBox);
        namaKategoriLineEdit->setObjectName("namaKategoriLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaKategoriLineEdit);

        tableKategori = new QTableView(FormKategori);
        tableKategori->setObjectName("tableKategori");
        tableKategori->setGeometry(QRect(20, 180, 351, 181));

        retranslateUi(FormKategori);

        QMetaObject::connectSlotsByName(FormKategori);
    } // setupUi

    void retranslateUi(QWidget *FormKategori)
    {
        FormKategori->setWindowTitle(QCoreApplication::translate("FormKategori", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormKategori", "Hapus", nullptr));
        pushButton->setText(QCoreApplication::translate("FormKategori", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormKategori", "Update", nullptr));
        idKategoriLabel->setText(QCoreApplication::translate("FormKategori", "Id Kategori", nullptr));
        namaKategoriLabel->setText(QCoreApplication::translate("FormKategori", "Nama Kategori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormKategori: public Ui_FormKategori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKATEGORI_H
