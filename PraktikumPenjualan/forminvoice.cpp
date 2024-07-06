#include "forminvoice.h"
#include "ui_forminvoice.h"
#include "QMessageBox"

FormInvoice::FormInvoice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormInvoice)
{
    ui->setupUi(this);

    loadTabelInvoice();
}

void FormInvoice::loadTabelInvoice()
{
    tabelModel = new QSqlQueryModel(this);
    tabelModel->setQuery("SELECT * FROM tbl_invoice ORDER BY idinvoice ASC");
    tabelModel->setHeaderData(0,Qt::Horizontal,QObject::tr("ID Invoice"));
    tabelModel->setHeaderData(1,Qt::Horizontal,QObject::tr("Tanggal"));
    tabelModel->setHeaderData(2,Qt::Horizontal,QObject::tr("Jumlah"));
    tabelModel->setHeaderData(3,Qt::Horizontal,QObject::tr("Ongkir"));
    tabelModel->setHeaderData(4,Qt::Horizontal,QObject::tr("Total"));
    tabelModel->setHeaderData(5,Qt::Horizontal,QObject::tr("Status Invoice"));
    tabelModel->setHeaderData(6,Qt::Horizontal,QObject::tr("Alamat"));
    tabelModel->setHeaderData(7,Qt::Horizontal,QObject::tr("Kota"));
    tabelModel->setHeaderData(8,Qt::Horizontal,QObject::tr("Kode Pos"));
    tabelModel->setHeaderData(9,Qt::Horizontal,QObject::tr("Telepon"));
    tabelModel->setHeaderData(10,Qt::Horizontal,QObject::tr("Tarif"));
    tabelModel->setHeaderData(11,Qt::Horizontal,QObject::tr("Jumlah Berat"));
    tabelModel->setHeaderData(12,Qt::Horizontal,QObject::tr("Nama Penerima"));
    tabelModel->setHeaderData(13,Qt::Horizontal,QObject::tr("ID Pelanggan"));

    ui->tableInvoice->setModel(tabelModel);
    ui->tableInvoice->setColumnWidth(0,100);
    ui->tableInvoice->setColumnWidth(1,100);
    ui->tableInvoice->setColumnWidth(2,100);
    ui->tableInvoice->setColumnWidth(3,100);
    ui->tableInvoice->setColumnWidth(4,100);
    ui->tableInvoice->setColumnWidth(5,100);
    ui->tableInvoice->setColumnWidth(6,120);
    ui->tableInvoice->setColumnWidth(7,100);
    ui->tableInvoice->setColumnWidth(8,100);
    ui->tableInvoice->setColumnWidth(9,100);
    ui->tableInvoice->setColumnWidth(10,100);
    ui->tableInvoice->setColumnWidth(11,100);
    ui->tableInvoice->setColumnWidth(12,120);
    ui->tableInvoice->setColumnWidth(13,100);
    ui->tableInvoice->show();
}

FormInvoice::~FormInvoice()
{
    delete ui;
}

void FormInvoice::on_pushButton_clicked()
{
    if(ui->idInvoiceLineEdit->text().isEmpty()){
        QMessageBox::information(this, "Warning","ID Invoice belum diisi");
        ui->idInvoiceLineEdit->setFocus();
    }else if (ui->tanggalDateEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tanggal belum diisi");
        ui->tanggalDateEdit->setFocus();
    }else if (ui->jumlahLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jumlah belum diisi");
        ui->jumlahLineEdit->setFocus();
    }else if (ui->ongkirLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Ongkir belum diisi");
        ui->ongkirLineEdit->setFocus();
    }else if (ui->totalLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Total belum diisi");
        ui->totalLineEdit->setFocus();
    }else if (ui->satusLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Status belum diisi");
        ui->satusLineEdit->setFocus();
    }else if (ui->alamatLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Alamat belum diisi");
        ui->alamatLineEdit->setFocus();
    }else if (ui->kotaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kota belum diisi");
        ui->kotaLineEdit->setFocus();
    }else if (ui->kodePosLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Kode Pos belum diisi");
        ui->kodePosLineEdit->setFocus();
    }else if (ui->teleponLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Telepon belum diisi");
        ui->teleponLineEdit->setFocus();
    }else if (ui->tarifLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Tarif belum diisi");
        ui->tarifLineEdit->setFocus();
    }else if (ui->jumlahBeratLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Jumlah Berat belum diisi");
        ui->jumlahBeratLineEdit->setFocus();
    }else if (ui->namaPenerimaLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","Nama Penerima belum diisi");
        ui->namaPenerimaLineEdit->setFocus();
    }else if (ui->idplgLineEdit->text().isEmpty()){
        QMessageBox::information(this, "warning","ID Pelanggan belum diisi");
        ui->idplgLineEdit->setFocus();
    }else{
        QSqlQuery duplicate;
        duplicate.prepare("SELECT * FROM tbl_invoice WHERE idinvoice='"+ui->idInvoiceLineEdit->text()+"'");
        duplicate.exec();
        if(duplicate.next()){
            QMessageBox::information(this, "warning","ID Invoice sudah terdaftar");
            ui->tanggalDateEdit->setDate(duplicate.value(1).toDate());
            ui->jumlahLineEdit->setText(duplicate.value(2).toString());
            ui->ongkirLineEdit->setText(duplicate.value(3).toString());
            ui->totalLineEdit->setText(duplicate.value(4).toString());
            ui->satusLineEdit->setText(duplicate.value(5).toString());
            ui->alamatLineEdit->setText(duplicate.value(6).toString());
            ui->kotaLineEdit->setText(duplicate.value(7).toString());
            ui->kodePosLineEdit->setText(duplicate.value(8).toString());
            ui->teleponLineEdit->setText(duplicate.value(9).toString());
            ui->tarifLineEdit->setText(duplicate.value(10).toString());
            ui->jumlahBeratLineEdit->setText(duplicate.value(11).toString());
            ui->namaPenerimaLineEdit->setText(duplicate.value(12).toString());
            ui->idplgLineEdit->setText(duplicate.value(13).toString());
        }else{
            QSqlQuery sql(koneksi);

            sql.prepare("INSERT INTO tbl_invoice(idinvoice,tanggal,jumlah,ongkir,total,statinv,alamat,kota,kodepos,telepon,tarif,jmlberat,namapenerima,idplg)"
                        "VALUE(:idinvoice,:tanggal,:jumlah,:ongkir,:total,:statinv,:alamat,:kota,:kodepos,:telepon,:tarif,:jmlberat,:namapenerima,:idplg)");
            sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
            sql.bindValue(":tanggal",ui->tanggalDateEdit->date());
            sql.bindValue(":jumlah",ui->jumlahLineEdit->text().toInt());
            sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
            sql.bindValue(":total",ui->totalLineEdit->text().toInt());
            sql.bindValue(":statinv",ui->satusLineEdit->text().toInt());
            sql.bindValue(":alamat",ui->alamatLineEdit->text());
            sql.bindValue(":kota",ui->kotaLineEdit->text());
            sql.bindValue(":kodepos",ui->kodePosLineEdit->text().toInt());
            sql.bindValue(":telepon",ui->teleponLineEdit->text().toInt());
            sql.bindValue(":tarif",ui->tarifLineEdit->text().toInt());
            sql.bindValue(":jmlberat",ui->jumlahBeratLineEdit->text().toInt());
            sql.bindValue(":namapenerima",ui->namaPenerimaLineEdit->text());
            sql.bindValue(":idplg",ui->idplgLineEdit->text());

            if(sql.exec()){
                QMessageBox::information(this, "warning", "Data Berhasil Disimpan");
            }else{
                qDebug()<<sql.lastError().text();
            }
        }
    }
}


void FormInvoice::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE tbl_invoice SET  tanggal=:tanggal, jumlah=:jumlah, ongkir=:ongkir,"
                "total=:total, statinv=:statinv, alamat=:alamat, kota=:kota, kodepos=:kodepos,telepon=:telepon,tarif=:tarif,jmlberat=:jmlberat,namapenerima=:namapenerima,idplg=:idplg WHERE idinvoice=:idinvoice");
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    sql.bindValue(":tanggal",ui->tanggalDateEdit->date());
    sql.bindValue(":jumlah",ui->jumlahLineEdit->text().toInt());
    sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
    sql.bindValue(":total",ui->totalLineEdit->text().toInt());
    sql.bindValue(":statinv",ui->satusLineEdit->text().toInt());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":kota",ui->kotaLineEdit->text());
    sql.bindValue(":kodepos",ui->kodePosLineEdit->text().toInt());
    sql.bindValue(":telepon",ui->teleponLineEdit->text().toInt());
    sql.bindValue(":tarif",ui->tarifLineEdit->text().toInt());
    sql.bindValue(":jmlberat",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":namapenerima",ui->namaPenerimaLineEdit->text());
    sql.bindValue(":idplg",ui->idplgLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil DiUpdate");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormInvoice::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM tbl_invoice WHERE idinvoice=:idinvoice");
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    if(sql.exec()){
        QMessageBox::information(this, "warning", "Data Berhasil Di Hapus");
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormInvoice::on_tableInvoice_activated(const QModelIndex &index)
{
    int baris=ui->tableInvoice->currentIndex().row();
    ui->idInvoiceLineEdit->setText(ui->tableInvoice->model()->index(baris, 0).data().toString());
    ui->tanggalDateEdit->setDate(ui->tableInvoice->model()->index(baris, 1).data().toDate());
    ui->jumlahLineEdit->setText(ui->tableInvoice->model()->index(baris, 2).data().toString());
    ui->ongkirLineEdit->setText(ui->tableInvoice->model()->index(baris, 3).data().toString());
    ui->totalLineEdit->setText(ui->tableInvoice->model()->index(baris, 4).data().toString());
    ui->satusLineEdit->setText(ui->tableInvoice->model()->index(baris, 5).data().toString());
    ui->alamatLineEdit->setText(ui->tableInvoice->model()->index(baris, 6).data().toString());
    ui->kotaLineEdit->setText(ui->tableInvoice->model()->index(baris, 7).data().toString());
    ui->kodePosLineEdit->setText(ui->tableInvoice->model()->index(baris, 8).data().toString());
    ui->teleponLineEdit->setText(ui->tableInvoice->model()->index(baris, 9).data().toString());
    ui->tarifLineEdit->setText(ui->tableInvoice->model()->index(baris, 10).data().toString());
    ui->jumlahBeratLineEdit->setText(ui->tableInvoice->model()->index(baris, 11).data().toString());
    ui->namaPenerimaLineEdit->setText(ui->tableInvoice->model()->index(baris, 12).data().toString());
    ui->idplgLineEdit->setText(ui->tableInvoice->model()->index(baris, 13).data().toString());
}

