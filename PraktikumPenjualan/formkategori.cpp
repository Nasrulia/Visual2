#include "formkategori.h"
#include "ui_formkategori.h"
#include "QMessageBox"

FormKategori::FormKategori(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormKategori)
{
    ui->setupUi(this);

    loadTabelKategori();
}

void FormKategori::loadTabelKategori()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_kategori ORDER BY idkat ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Kategori"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Kategori"));

    ui->tableKategori->setModel(tabelModel);
    ui->tableKategori->setColumnWidth(0,100);
    ui->tableKategori->setColumnWidth(1,120);
    ui->tableKategori->show();
}

FormKategori::~FormKategori()
{
    delete ui;
}

void FormKategori::on_pushButton_clicked()
{
    if(ui->idKategoriLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Kategori belum diisi");
        ui->idKategoriLineEdit->setFocus();
    }else if (ui->namaKategoriLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Kategori belum diisi");
        ui->namaKategoriLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_kategori WHERE idkat='"+ui->idKategoriLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Kategori sudah terdaftar");
            ui->namaKategoriLineEdit->setText(duplicate.value(1).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_kategori(idkat,nama_kategori)"
                        "VALUE(:idkat,:nama_kategori)");
            sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
            sql.bindValue(":nama_kategori",ui->namaKategoriLineEdit->text());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Disimpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormKategori::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("UPDATE tbl_kategori SET nama_kategori=:nama_kategori WHERE idkat =:idkat ");
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    sql.bindValue(":nama_kategori",ui->namaKategoriLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Update");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKategori::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("DELETE FROM tbl_kategori  WHERE idkat =:idkat ");
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKategori::on_tableKategori_activated(const QModelIndex &index)
{
    int baris=ui->tableKategori->currentIndex().row();
    ui->idKategoriLineEdit->setText(ui->tableKategori->model()->index(baris, 0).data().toString());
    ui->namaKategoriLineEdit->setText(ui->tableKategori->model()->index(baris, 1).data().toString());
}

