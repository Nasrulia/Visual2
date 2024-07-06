/********************************************************************************
** Form generated from reading UI file 'formkota.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKOTA_H
#define UI_FORMKOTA_H

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

class Ui_FormKota
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idKotaLabel;
    QLineEdit *idKotaLineEdit;
    QLabel *namaKotaLabel;
    QLineEdit *namaKotaLineEdit;
    QLabel *ongkirLabel;
    QLineEdit *ongkirLineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableKota;

    void setupUi(QWidget *FormKota)
    {
        if (FormKota->objectName().isEmpty())
            FormKota->setObjectName("FormKota");
        FormKota->resize(397, 429);
        formGroupBox = new QGroupBox(FormKota);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(20, 30, 341, 111));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idKotaLabel = new QLabel(formGroupBox);
        idKotaLabel->setObjectName("idKotaLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idKotaLabel);

        idKotaLineEdit = new QLineEdit(formGroupBox);
        idKotaLineEdit->setObjectName("idKotaLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idKotaLineEdit);

        namaKotaLabel = new QLabel(formGroupBox);
        namaKotaLabel->setObjectName("namaKotaLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaKotaLabel);

        namaKotaLineEdit = new QLineEdit(formGroupBox);
        namaKotaLineEdit->setObjectName("namaKotaLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaKotaLineEdit);

        ongkirLabel = new QLabel(formGroupBox);
        ongkirLabel->setObjectName("ongkirLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, ongkirLabel);

        ongkirLineEdit = new QLineEdit(formGroupBox);
        ongkirLineEdit->setObjectName("ongkirLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, ongkirLineEdit);

        pushButton_3 = new QPushButton(FormKota);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 160, 83, 29));
        pushButton = new QPushButton(FormKota);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 160, 83, 29));
        pushButton_2 = new QPushButton(FormKota);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 160, 83, 29));
        tableKota = new QTableView(FormKota);
        tableKota->setObjectName("tableKota");
        tableKota->setGeometry(QRect(20, 210, 341, 181));

        retranslateUi(FormKota);

        QMetaObject::connectSlotsByName(FormKota);
    } // setupUi

    void retranslateUi(QWidget *FormKota)
    {
        FormKota->setWindowTitle(QCoreApplication::translate("FormKota", "Form", nullptr));
        idKotaLabel->setText(QCoreApplication::translate("FormKota", "Id kota", nullptr));
        namaKotaLabel->setText(QCoreApplication::translate("FormKota", "Nama kota", nullptr));
        ongkirLabel->setText(QCoreApplication::translate("FormKota", "Ongkir", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormKota", "Hapus", nullptr));
        pushButton->setText(QCoreApplication::translate("FormKota", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormKota", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormKota: public Ui_FormKota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKOTA_H
