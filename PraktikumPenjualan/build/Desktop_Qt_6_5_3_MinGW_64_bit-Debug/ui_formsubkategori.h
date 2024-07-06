/********************************************************************************
** Form generated from reading UI file 'formsubkategori.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSUBKATEGORI_H
#define UI_FORMSUBKATEGORI_H

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

class Ui_FormSubKategori
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *idSubKetegoriLabel;
    QLineEdit *idSubKetegoriLineEdit;
    QLabel *namaSubKategoriLabel;
    QLineEdit *namaSubKategoriLineEdit;
    QLabel *idKategoriLabel;
    QLineEdit *idKategoriLineEdit;
    QTableView *tableSubkategori;

    void setupUi(QWidget *FormSubKategori)
    {
        if (FormSubKategori->objectName().isEmpty())
            FormSubKategori->setObjectName("FormSubKategori");
        FormSubKategori->resize(411, 427);
        pushButton_2 = new QPushButton(FormSubKategori);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 150, 83, 29));
        pushButton = new QPushButton(FormSubKategori);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 150, 83, 29));
        pushButton_3 = new QPushButton(FormSubKategori);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 150, 83, 29));
        formGroupBox = new QGroupBox(FormSubKategori);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(20, 20, 371, 111));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        idSubKetegoriLabel = new QLabel(formGroupBox);
        idSubKetegoriLabel->setObjectName("idSubKetegoriLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idSubKetegoriLabel);

        idSubKetegoriLineEdit = new QLineEdit(formGroupBox);
        idSubKetegoriLineEdit->setObjectName("idSubKetegoriLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idSubKetegoriLineEdit);

        namaSubKategoriLabel = new QLabel(formGroupBox);
        namaSubKategoriLabel->setObjectName("namaSubKategoriLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaSubKategoriLabel);

        namaSubKategoriLineEdit = new QLineEdit(formGroupBox);
        namaSubKategoriLineEdit->setObjectName("namaSubKategoriLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaSubKategoriLineEdit);

        idKategoriLabel = new QLabel(formGroupBox);
        idKategoriLabel->setObjectName("idKategoriLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, idKategoriLabel);

        idKategoriLineEdit = new QLineEdit(formGroupBox);
        idKategoriLineEdit->setObjectName("idKategoriLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, idKategoriLineEdit);

        tableSubkategori = new QTableView(FormSubKategori);
        tableSubkategori->setObjectName("tableSubkategori");
        tableSubkategori->setGeometry(QRect(20, 210, 371, 181));

        retranslateUi(FormSubKategori);

        QMetaObject::connectSlotsByName(FormSubKategori);
    } // setupUi

    void retranslateUi(QWidget *FormSubKategori)
    {
        FormSubKategori->setWindowTitle(QCoreApplication::translate("FormSubKategori", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormSubKategori", "Update", nullptr));
        pushButton->setText(QCoreApplication::translate("FormSubKategori", "Simpan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormSubKategori", "Hapus", nullptr));
        idSubKetegoriLabel->setText(QCoreApplication::translate("FormSubKategori", "Id Sub Ketegori", nullptr));
        namaSubKategoriLabel->setText(QCoreApplication::translate("FormSubKategori", "Nama Sub Kategori", nullptr));
        idKategoriLabel->setText(QCoreApplication::translate("FormSubKategori", "Id Kategori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSubKategori: public Ui_FormSubKategori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSUBKATEGORI_H
