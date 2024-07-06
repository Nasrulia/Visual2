#include "formbarang.h"
#include "ui_formbarang.h"
#include "QMessageBox"

FormBarang::FormBarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormBarang)
{
    ui->setupUi(this);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penjualan");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";
    }

    loadTabelBarang();
}

void FormBarang::loadTabelBarang()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_brng ORDER BY id_brng ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Barang"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Nama Barang"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Satuan"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Harga"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Keterangan"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Berat"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Dilihat"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("Dibeli"));
    tabelModel->setHeaderData(8,Qt::Horizontal,QObject::tr("Kata Kunci"));
    tabelModel->setHeaderData(9,Qt::Horizontal,QObject::tr("Stock"));
    tabelModel->setHeaderData(10,Qt::Horizontal,QObject::tr("ID Sub Katergori"));


    ui->tableBarang->setModel(tabelModel);
    ui->tableBarang->setColumnWidth(0,100);
    ui->tableBarang->setColumnWidth(1,120);
    ui->tableBarang->setColumnWidth(2,100);
    ui->tableBarang->setColumnWidth(3,100);
    ui->tableBarang->setColumnWidth(4,100);
    ui->tableBarang->setColumnWidth(5,100);
    ui->tableBarang->setColumnWidth(6,100);
    ui->tableBarang->setColumnWidth(7,100);
    ui->tableBarang->setColumnWidth(8,100);
    ui->tableBarang->setColumnWidth(9,100);
    ui->tableBarang->setColumnWidth(10,150);
    ui->tableBarang->show();
}

FormBarang::~FormBarang()
{
    delete ui;
}

void FormBarang::on_pushButton_clicked()
{
    if(ui->idBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Barang belum diisi");
        ui->idBarangLineEdit->setFocus();
    }else if (ui->namaBarangLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Barang belum diisi");
        ui->namaBarangLineEdit->setFocus();
    }else if (ui->satuanLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Satuan belum diisi");
        ui->satuanLineEdit->setFocus();
    }else if (ui->hargaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Harga belum diisi");
        ui->hargaLineEdit->setFocus();
    }else if (ui->keteranganLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Keterangan belum diisi");
        ui->keteranganLineEdit->setFocus();
    }else if (ui->beratLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Berat belum diisi");
        ui->beratLineEdit->setFocus();
    }else if (ui->dilihatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Dilihat belum diisi");
        ui->dilihatLineEdit->setFocus();
    }else if (ui->dibeliLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Dibeli belum diisi");
        ui->dibeliLineEdit->setFocus();
    }else if (ui->kataKunciLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kata Kunci belum diisi");
        ui->kataKunciLineEdit->setFocus();
    }else if (ui->stokLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Stok belum diisi");
        ui->stokLineEdit->setFocus();
    }else if (ui->idSubKategoriLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Sub Kategori belum diisi");
        ui->idSubKategoriLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_brng WHERE id_brng='"+ui->idBarangLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Barang sudah terdaftar");
            ui->namaBarangLineEdit->setText(duplicate.value(1).toString());
            ui->satuanLineEdit->setText(duplicate.value(2).toString());
            ui->hargaLineEdit->setText(duplicate.value(3).toString());
            ui->keteranganLineEdit->setText(duplicate.value(4).toString());
            ui->beratLineEdit->setText(duplicate.value(5).toString());
            ui->dilihatLineEdit->setText(duplicate.value(6).toString());
            ui->dibeliLineEdit->setText(duplicate.value(7).toString());
            ui->kataKunciLineEdit->setText(duplicate.value(8).toString());
            ui->stokLineEdit->setText(duplicate.value(9).toString());
            ui->idSubKategoriLineEdit->setText(duplicate.value(10).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_brng(id_brng,nm_brng,satuan,harga,keterangan,berat,dilihat,dibeli,kata_kunci,stock,idsubkat)"
                        "VALUE(:id_brng,:nm_brng,:satuan,:harga,:keterangan,:berat,:dilihat,:dibeli,:kata_kunci,:stock,:idsubkat)");
            sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
            sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
            sql.bindValue(":satuan",ui->satuanLineEdit->text());
            sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
            sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
            sql.bindValue(":berat",ui->beratLineEdit->text());
            sql.bindValue(":dilihat",ui->dilihatLineEdit->text().toInt());
            sql.bindValue(":dibeli",ui->dibeliLineEdit->text().toInt());
            sql.bindValue(":kata_kunci",ui->kataKunciLineEdit->text());
            sql.bindValue(":stock",ui->stokLineEdit->text().toInt());
            sql.bindValue(":idsubkat",ui->idSubKategoriLineEdit->text());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Di simpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormBarang::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("UPDATE tbl_brng SET  nm_brng=:nm_brng, satuan=:satuan, harga=:harga,"
                "keterangan=:keterangan, berat=:berat, dilihat=:dilihat, dibeli=:dibeli, kata_kunci=:kata_kunci,stock=:stock,idsubkat=:idsubkat WHERE id_brng=:id_brng");
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":berat",ui->beratLineEdit->text());
    sql.bindValue(":dilihat",ui->dilihatLineEdit->text().toInt());
    sql.bindValue(":dibeli",ui->dibeliLineEdit->text().toInt());
    sql.bindValue(":kata_kunci",ui->kataKunciLineEdit->text());
    sql.bindValue(":stock",ui->stokLineEdit->text().toInt());
    sql.bindValue(":idsubkat",ui->idSubKategoriLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Update");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);

    sql.prepare("DELETE FROM tbl_brng WHERE id_brng=:id_brng");
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_tableBarang_activated(const QModelIndex &index)
{
    int baris=ui->tableBarang->currentIndex().row();
    ui->idBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 0).data().toString());
    ui->namaBarangLineEdit->setText(ui->tableBarang->model()->index(baris, 1).data().toString());
    ui->satuanLineEdit->setText(ui->tableBarang->model()->index(baris, 2).data().toString());
    ui->hargaLineEdit->setText(ui->tableBarang->model()->index(baris, 3).data().toString());
    ui->keteranganLineEdit->setText(ui->tableBarang->model()->index(baris, 4).data().toString());
    ui->beratLineEdit->setText(ui->tableBarang->model()->index(baris, 5).data().toString());
    ui->dilihatLineEdit->setText(ui->tableBarang->model()->index(baris, 6).data().toString());
    ui->dibeliLineEdit->setText(ui->tableBarang->model()->index(baris, 7).data().toString());
    ui->kataKunciLineEdit->setText(ui->tableBarang->model()->index(baris, 8).data().toString());
    ui->stokLineEdit->setText(ui->tableBarang->model()->index(baris, 9).data().toString());
    ui->idSubKategoriLineEdit->setText(ui->tableBarang->model()->index(baris, 10).data().toString());
}

