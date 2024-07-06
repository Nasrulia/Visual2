#include "formpelanggan.h"
#include "ui_formpelanggan.h"
#include "QMessageBox"

FormPelanggan::FormPelanggan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormPelanggan)
{
    ui->setupUi(this);

    loadTabelPelanggan();
}

void FormPelanggan::loadTabelPelanggan()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_pelanggan ORDER BY idplg ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Pelanggan"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Email"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Password"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Nama Pelanggan"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Alamat Pelanggan"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Kode Pos Pelanggan"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Telepon Pelanggan"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("Tanggal Daftar"));
    tabelModel->setHeaderData(8,Qt::Horizontal,QObject::tr("Tanggal Login"));
    tabelModel->setHeaderData(9,Qt::Horizontal,QObject::tr("Tanya"));
    tabelModel->setHeaderData(10,Qt::Horizontal,QObject::tr("Jawab"));
    tabelModel->setHeaderData(11,Qt::Horizontal,QObject::tr("ID Kota"));
    tabelModel->setHeaderData(12,Qt::Horizontal,QObject::tr("Kota Pelanggan"));

    ui->tablePelanggan->setModel(tabelModel);
    ui->tablePelanggan->setColumnWidth(0,100);
    ui->tablePelanggan->setColumnWidth(1,150);
    ui->tablePelanggan->setColumnWidth(2,100);
    ui->tablePelanggan->setColumnWidth(3,120);
    ui->tablePelanggan->setColumnWidth(4,140);
    ui->tablePelanggan->setColumnWidth(5,120);
    ui->tablePelanggan->setColumnWidth(6,120);
    ui->tablePelanggan->setColumnWidth(7,100);
    ui->tablePelanggan->setColumnWidth(8,100);
    ui->tablePelanggan->setColumnWidth(9,160);
    ui->tablePelanggan->setColumnWidth(10,160);
    ui->tablePelanggan->setColumnWidth(11,100);
    ui->tablePelanggan->setColumnWidth(12,120);
    ui->tablePelanggan->show();
}

FormPelanggan::~FormPelanggan()
{
    delete ui;
}

void FormPelanggan::on_pushButton_clicked()
{
    if(ui->idpelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Pelanggan belum diisi");
        ui->idpelangganLineEdit->setFocus();
    }else if (ui->emailLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Email belum diisi");
        ui->emailLineEdit->setFocus();
    }else if (ui->passwordLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Password belum diisi");
        ui->passwordLineEdit->setFocus();
    }else if (ui->namaPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Pelanggan belum diisi");
        ui->namaPelangganLineEdit->setFocus();
    }else if (ui->alamatPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat Pelanggan belum diisi");
        ui->alamatPelangganLineEdit->setFocus();
    }else if (ui->kodePosLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kode Pos belum diisi");
        ui->kodePosLineEdit->setFocus();
    }else if (ui->telponLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telepon belum diisi");
        ui->telponLineEdit->setFocus();
    }else if (ui->tanggalDaftarDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal Daftar belum diisi");
        ui->tanggalDaftarLabel->setFocus();
    }else if (ui->tanggalLoginDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal Login belum diisi");
        ui->tanggalLoginDateEdit->setFocus();
    }else if (ui->tanyaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanya belum diisi");
        ui->tanyaLineEdit->setFocus();
    }else if (ui->jawabLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jawab belum diisi");
        ui->jawabLineEdit->setFocus();
    }else if (ui->idKotaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Kota belum diisi");
        ui->idKotaLineEdit->setFocus();
    }else if (ui->kotaPelangganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kota Pelanggan belum diisi");
        ui->kotaPelangganLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_pelanggan WHERE idplg='"+ui->idpelangganLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Pelanggan sudah terdaftar");
            ui->emailLineEdit->setText(duplicate.value(1).toString());
            ui->passwordLineEdit->setText(duplicate.value(2).toString());
            ui->namaPelangganLineEdit->setText(duplicate.value(3).toString());
            ui->alamatPelangganLineEdit->setText(duplicate.value(4).toString());
            ui->kodePosLineEdit->setText(duplicate.value(5).toString());
            ui->telponLineEdit->setText(duplicate.value(6).toString());
            ui->tanggalDaftarDateEdit->setDate(duplicate.value(7).toDate());
            ui->tanggalLoginDateEdit->setDate(duplicate.value(8).toDate());
            ui->tanyaLineEdit->setText(duplicate.value(9).toString());
            ui->jawabLineEdit->setText(duplicate.value(10).toString());
            ui->idKotaLineEdit->setText(duplicate.value(11).toString());
            ui->kotaPelangganLineEdit->setText(duplicate.value(12).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_pelanggan(idplg,email,password,nama_plg,alamat_plg,kodepos_plg,telp_plg,tgl_dftr,tgl_login,tanya,jawab,id_kota,kota_plg)"
                        "VALUE(:idplg,:email,:password,:nama_plg,:alamat_plg,:kodepos_plg,:telp_plg,:tgl_dftr,:tgl_login,:tanya,:jawab,:id_kota,:kota_plg)");
            sql.bindValue(":idplg",ui->idpelangganLineEdit->text());
            sql.bindValue(":email",ui->emailLineEdit->text());
            sql.bindValue(":password",ui->passwordLineEdit->text());
            sql.bindValue(":nama_plg",ui->namaPelangganLineEdit->text());
            sql.bindValue(":alamat_plg",ui->alamatPelangganLineEdit->text());
            sql.bindValue(":kodepos_plg",ui->kodePosLineEdit->text().toInt());
            sql.bindValue(":telp_plg",ui->telponLineEdit->text().toInt());
            sql.bindValue(":tgl_dftr",ui->tanggalDaftarDateEdit->date());
            sql.bindValue(":tgl_login",ui->tanggalLoginDateEdit->date());
            sql.bindValue(":tanya",ui->tanyaLineEdit->text());
            sql.bindValue(":jawab",ui->jawabLineEdit->text());
            sql.bindValue(":id_kota",ui->idKotaLineEdit->text());
            sql.bindValue(":kota_plg",ui->kotaPelangganLineEdit->text());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Disimpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormPelanggan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("UPDATE tbl_pelanggan SET email=:email, password=:password, nama_plg=:nama_plg, alamat_plg=:alamat_plg,"
                "kodepos_plg=:kodepos_plg, telp_plg=:telp_plg, tgl_dftr=:tgl_dftr, tgl_login=:tgl_login, tanya=:tanya,jawab=:jawab,id_kota=:id_kota, kota_plg=:kota_plg WHERE idplg=:idplg");
    sql.bindValue(":idplg",ui->idpelangganLineEdit->text());
    sql.bindValue(":email",ui->emailLineEdit->text());
    sql.bindValue(":password",ui->passwordLineEdit->text());
    sql.bindValue(":nama_plg",ui->namaPelangganLineEdit->text());
    sql.bindValue(":alamat_plg",ui->alamatPelangganLineEdit->text());
    sql.bindValue(":kodepos_plg",ui->kodePosLineEdit->text().toInt());
    sql.bindValue(":telp_plg",ui->telponLineEdit->text().toInt());
    sql.bindValue(":tgl_dftr",ui->tanggalDaftarDateEdit->date());
    sql.bindValue(":tgl_login",ui->tanggalLoginDateEdit->date());
    sql.bindValue(":tanya",ui->tanyaLineEdit->text());
    sql.bindValue(":jawab",ui->jawabLineEdit->text());
    sql.bindValue(":id_kota",ui->idKotaLineEdit->text());
    sql.bindValue(":kota_plg",ui->kotaPelangganLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Update");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("DELETE FROM tbl_pelanggan WHERE idplg=:idplg");
    sql.bindValue(":idplg",ui->idpelangganLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormPelanggan::on_tablePelanggan_activated(const QModelIndex &index)
{
    int baris=ui->tablePelanggan->currentIndex().row();
    ui->idpelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 0).data().toString());
    ui->emailLineEdit->setText(ui->tablePelanggan->model()->index(baris, 1).data().toString());
    ui->passwordLineEdit->setText(ui->tablePelanggan->model()->index(baris, 2).data().toString());
    ui->namaPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 3).data().toString());
    ui->alamatPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 4).data().toString());
    ui->kodePosLineEdit->setText(ui->tablePelanggan->model()->index(baris, 5).data().toString());
    ui->telponLineEdit->setText(ui->tablePelanggan->model()->index(baris, 6).data().toString());
    ui->tanggalDaftarDateEdit->setDate(ui->tablePelanggan->model()->index(baris, 7).data().toDate());
    ui->tanggalLoginDateEdit->setDate(ui->tablePelanggan->model()->index(baris, 8).data().toDate());
    ui->tanyaLineEdit->setText(ui->tablePelanggan->model()->index(baris, 9).data().toString());
    ui->jawabLineEdit->setText(ui->tablePelanggan->model()->index(baris, 10).data().toString());
    ui->idKotaLineEdit->setText(ui->tablePelanggan->model()->index(baris, 11).data().toString());
    ui->kotaPelangganLineEdit->setText(ui->tablePelanggan->model()->index(baris, 12).data().toString());
}

