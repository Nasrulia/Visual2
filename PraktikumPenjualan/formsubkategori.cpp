#include "formsubkategori.h"
#include "ui_formsubkategori.h"
#include "QMessageBox"

FormSubKategori::FormSubKategori(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormSubKategori)
{
    ui->setupUi(this);

    loadTabelSubkategori();
}

void FormSubKategori::loadTabelSubkategori()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_sub_kategori ORDER BY idsubkat ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Sub Kategori"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Sub Kategori"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("ID Kategori"));

    ui->tableSubkategori->setModel(tabelModel);
    ui->tableSubkategori->setColumnWidth(0,130);
    ui->tableSubkategori->setColumnWidth(1,130);
    ui->tableSubkategori->setColumnWidth(2,130);
    ui->tableSubkategori->show();
}

FormSubKategori::~FormSubKategori()
{
    delete ui;
}

void FormSubKategori::on_pushButton_clicked()
{
    if(ui->idSubKetegoriLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Sub Kategori belum diisi");
        ui->idSubKetegoriLineEdit->setFocus();
    }else if (ui->namaSubKategoriLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Sub Kategori belum diisi");
        ui->namaSubKategoriLineEdit->setFocus();
    }else if (ui->idKategoriLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Kategori belum diisi");
        ui->idKategoriLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_sub_kategori WHERE idsubkat='"+ui->idSubKetegoriLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Sub Kategori sudah terdaftar");
            ui->namaSubKategoriLineEdit->setText(duplicate.value(1).toString());
            ui->idKategoriLineEdit->setText(duplicate.value(2).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_sub_kategori(idsubkat,namasubkat,idkat)"
                        "VALUE(:idsubkat,:namasubkat,:idkat)");
            sql.bindValue(":idsubkat",ui->idSubKetegoriLineEdit->text());
            sql.bindValue(":namasubkat",ui->namaSubKategoriLineEdit->text());
            sql.bindValue(":idkat",ui->idKategoriLineEdit->text());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Disimpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormSubKategori::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("UPDATE tbl_sub_kategori SET namasubkat=:namasubkat, idkat=:idkat WHERE idsubkat =:idsubkat ");
    sql.bindValue(":idsubkat",ui->idSubKetegoriLineEdit->text());
    sql.bindValue(":namasubkat",ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Update");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSubKategori::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("DELETE FROM tbl_sub_kategori WHERE idsubkat =:idsubkat ");
    sql.bindValue(":idsubkat",ui->idSubKetegoriLineEdit->text());
    sql.bindValue(":namasubkat",ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormSubKategori::on_tableSubkategori_activated(const QModelIndex &index)
{
    int baris=ui->tableSubkategori->currentIndex().row();
    ui->idSubKetegoriLineEdit->setText(ui->tableSubkategori->model()->index(baris, 0).data().toString());
    ui->namaSubKategoriLineEdit->setText(ui->tableSubkategori->model()->index(baris, 1).data().toString());
    ui->idKategoriLineEdit->setText(ui->tableSubkategori->model()->index(baris, 2).data().toString());
}

