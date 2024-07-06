#include "forminvd.h"
#include "ui_forminvd.h"
#include "QMessageBox"

FormInvd::FormInvd(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormInvd)
{
    ui->setupUi(this);

    loadTabelInvd();
}

void FormInvd::loadTabelInvd()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_invd ORDER BY iddetail ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Detail"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Barang"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Satuan"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Harga"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Qty"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Jumlah"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Berat"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("Jumlah Berat"));
    tabelModel->setHeaderData(8,Qt::Horizontal,QObject::tr("ID Invoice"));
    tabelModel->setHeaderData(9,Qt::Horizontal,QObject::tr("ID Barang"));

    ui->tableInvd->setModel(tabelModel);
    ui->tableInvd->setColumnWidth(0,100);
    ui->tableInvd->setColumnWidth(1,120);
    ui->tableInvd->setColumnWidth(2,100);
    ui->tableInvd->setColumnWidth(3,100);
    ui->tableInvd->setColumnWidth(4,100);
    ui->tableInvd->setColumnWidth(5,100);
    ui->tableInvd->setColumnWidth(6,100);
    ui->tableInvd->setColumnWidth(7,100);
    ui->tableInvd->setColumnWidth(8,100);
    ui->tableInvd->setColumnWidth(9,100);
    ui->tableInvd->show();
}

FormInvd::~FormInvd()
{
    delete ui;
}

void FormInvd::on_pushButton_clicked()
{
    if(ui->idDetailLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Detail belum diisi");
        ui->idDetailLineEdit->setFocus();
    }else if (ui->namaBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Barang belum diisi");
        ui->namaBarangLineEdit->setFocus();
    }else if (ui->satuanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Satuan belum diisi");
        ui->satuanLineEdit->setFocus();
    }else if (ui->hargaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Harga belum diisi");
        ui->hargaLineEdit->setFocus();
    }else if (ui->qtyLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Qty belum diisi");
        ui->qtyLineEdit->setFocus();
    }else if (ui->jumlahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jumlah belum diisi");
        ui->jumlahLineEdit->setFocus();
    }else if (ui->beratLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Berat belum diisi");
        ui->beratLineEdit->setFocus();
    }else if (ui->jumlahBeratLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jumlah Berat belum diisi");
        ui->jumlahBeratLineEdit->setFocus();
    }else if (ui->idInvoiceLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Invoice belum diisi");
        ui->idInvoiceLineEdit->setFocus();
    }else if (ui->idBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Barang belum diisi");
        ui->idBarangLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_invd WHERE iddetail='"+ui->idDetailLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Detail sudah terdaftar");
            ui->namaBarangLineEdit->setText(duplicate.value(1).toString());
            ui->satuanLineEdit->setText(duplicate.value(2).toString());
            ui->hargaLineEdit->setText(duplicate.value(3).toString());
            ui->qtyLineEdit->setText(duplicate.value(4).toString());
            ui->jumlahLineEdit->setText(duplicate.value(5).toString());
            ui->beratLineEdit->setText(duplicate.value(6).toString());
            ui->jumlahBeratLineEdit->setText(duplicate.value(7).toString());
            ui->idInvoiceLineEdit->setText(duplicate.value(8).toString());
            ui->idBarangLineEdit->setText(duplicate.value(9).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_invd(iddetail,nm_brng,satuan,harga,qty,jumlah,berat,jmlh_brt,idinvoice,id_brng)"
                        "VALUE(:iddetail,:nm_brng,:satuan,:harga,:qty,:jumlah,:berat,:jmlh_brt,:idinvoice,:id_brng)");
            sql.bindValue(":iddetail",ui->idDetailLineEdit->text());
            sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
            sql.bindValue(":satuan",ui->satuanLineEdit->text());
            sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
            sql.bindValue(":qty",ui->qtyLineEdit->text().toInt());
            sql.bindValue(":jumlah",ui->jumlahLineEdit->text().toInt());
            sql.bindValue(":berat",ui->beratLineEdit->text().toInt());
            sql.bindValue(":jmlh_brt",ui->jumlahBeratLineEdit->text().toInt());
            sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
            sql.bindValue(":id_brng",ui->idBarangLineEdit->text());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
             }else{
                qDebug()<<sql.lastError().text();
             }
        }
    }
}


void FormInvd::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("UPDATE tbl_invd SET  nm_brng=:nm_brng, satuan=:satuan, harga=:harga,"
                "qty=:qty, jumlah=:jumlah, berat=:berat, jmlh_brt=:jmlh_brt, idinvoice=:idinvoice,id_brng=:id_brng WHERE iddetail=:iddetail");
    sql.bindValue(":iddetail",ui->idDetailLineEdit->text());
    sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
    sql.bindValue(":qty",ui->qtyLineEdit->text().toInt());
    sql.bindValue(":jumlah",ui->jumlahLineEdit->text().toInt());
    sql.bindValue(":berat",ui->beratLineEdit->text().toInt());
    sql.bindValue(":jmlh_brt",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());

    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Update");
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void FormInvd::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("DELETE FROM tbl_invd WHERE iddetail=:iddetail");
    sql.bindValue(":iddetail",ui->idDetailLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormInvd::on_tableInvd_activated(const QModelIndex &index)
{
    int baris=ui->tableInvd->currentIndex().row();
    ui->idDetailLineEdit->setText(ui->tableInvd->model()->index(baris, 0).data().toString());
    ui->namaBarangLineEdit->setText(ui->tableInvd->model()->index(baris, 1).data().toString());
    ui->satuanLineEdit->setText(ui->tableInvd->model()->index(baris, 2).data().toString());
    ui->hargaLineEdit->setText(ui->tableInvd->model()->index(baris, 3).data().toString());
    ui->qtyLineEdit->setText(ui->tableInvd->model()->index(baris, 4).data().toString());
    ui->jumlahLineEdit->setText(ui->tableInvd->model()->index(baris, 5).data().toString());
    ui->beratLineEdit->setText(ui->tableInvd->model()->index(baris, 6).data().toString());
    ui->jumlahBeratLineEdit->setText(ui->tableInvd->model()->index(baris, 7).data().toString());
    ui->idInvoiceLineEdit->setText(ui->tableInvd->model()->index(baris, 8).data().toString());
    ui->idBarangLineEdit->setText(ui->tableInvd->model()->index(baris, 9).data().toString());
}

