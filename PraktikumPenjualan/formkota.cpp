#include "formkota.h"
#include "ui_formkota.h"
#include "QMessageBox"

FormKota::FormKota(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormKota)
{
    ui->setupUi(this);

    loadTabelKota();
}

void FormKota::loadTabelKota()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_kota ORDER BY idkota ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Kota"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Kota"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Ongkir"));

    ui->tableKota->setModel(tabelModel);
    ui->tableKota->setColumnWidth(0,100);
    ui->tableKota->setColumnWidth(1,110);
    ui->tableKota->setColumnWidth(2,100);
    ui->tableKota->show();
}

FormKota::~FormKota()
{
    delete ui;
}

void FormKota::on_pushButton_clicked()
{
    if(ui->idKotaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Kota belum diisi");
        ui->idKotaLineEdit->setFocus();
    }else if (ui->namaKotaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Kota belum diisi");
        ui->namaKotaLineEdit->setFocus();
    }else if (ui->ongkirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Ongkir belum diisi");
        ui->ongkirLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_kota WHERE idkota='"+ui->idKotaLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Kota sudah terdaftar");
            ui->namaKotaLineEdit->setText(duplicate.value(1).toString());
            ui->ongkirLineEdit->setText(duplicate.value(2).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_kota(idkota,namakota,ongkir)"
                        "VALUE(:idkota,:namakota,:ongkir)");
            sql.bindValue(":idkota",ui->idKotaLineEdit->text());
            sql.bindValue(":namakota",ui->namaKotaLineEdit->text());
            sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Disimpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormKota::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("UPDATE tbl_kota SET namakota=:namakota, ongkir=:ongkir WHERE idkota=:idkota");
    sql.bindValue(":idkota",ui->idKotaLineEdit->text());
    sql.bindValue(":namakota",ui->namaKotaLineEdit->text());
    sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Diupdate");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKota::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("DELETE FROM tbl_kota WHERE idkota=:idkota");
    sql.bindValue(":idkota",ui->idKotaLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKota::on_tableKota_activated(const QModelIndex &index)
{
    int baris=ui->tableKota->currentIndex().row();
    ui->idKotaLineEdit->setText(ui->tableKota->model()->index(baris, 0).data().toString());
    ui->namaKotaLineEdit->setText(ui->tableKota->model()->index(baris, 1).data().toString());
    ui->ongkirLineEdit->setText(ui->tableKota->model()->index(baris, 2).data().toString());
}

