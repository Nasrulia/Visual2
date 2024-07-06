/********************************************************************************
** Form generated from reading UI file 'formutama.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
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

class Ui_FormUtama
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormUtama)
    {
        if (FormUtama->objectName().isEmpty())
            FormUtama->setObjectName("FormUtama");
        FormUtama->resize(527, 340);
        centralwidget = new QWidget(FormUtama);
        centralwidget->setObjectName("centralwidget");
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(340, 70, 101, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 140, 101, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 70, 101, 29));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(70, 140, 101, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 70, 101, 29));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(200, 210, 101, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(340, 140, 101, 29));
        FormUtama->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormUtama);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 527, 26));
        FormUtama->setMenuBar(menubar);
        statusbar = new QStatusBar(FormUtama);
        statusbar->setObjectName("statusbar");
        FormUtama->setStatusBar(statusbar);

        retranslateUi(FormUtama);

        QMetaObject::connectSlotsByName(FormUtama);
    } // setupUi

    void retranslateUi(QMainWindow *FormUtama)
    {
        FormUtama->setWindowTitle(QCoreApplication::translate("FormUtama", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("FormUtama", "Invoice", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormUtama", "Kota", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormUtama", "Invd", nullptr));
        pushButton_8->setText(QCoreApplication::translate("FormUtama", "Kategori", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormUtama", "Barang", nullptr));
        pushButton_7->setText(QCoreApplication::translate("FormUtama", "Sub kategori", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FormUtama", "Pelanggan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormUtama: public Ui_FormUtama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUTAMA_H
