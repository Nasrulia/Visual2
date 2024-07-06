#include "formutama.h"
#include "ui_formutama.h"
#include "QMessageBox"

FormUtama::FormUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FormUtama)
{
    ui->setupUi(this);
    barang = new FormBarang;
    invd = new FormInvd;
    invoice = new FormInvoice;
    kategori = new FormKategori;
    kota = new FormKota;
    pelanggan = new FormPelanggan;
    subkategori = new FormSubKategori;
}

FormUtama::~FormUtama()
{
    delete ui;
}

void FormUtama::on_pushButton_2_clicked()
{
    barang->show();
}


void FormUtama::on_pushButton_3_clicked()
{
    invd->show();
}


void FormUtama::on_pushButton_6_clicked()
{
    invoice->show();
}


void FormUtama::on_pushButton_8_clicked()
{
    kategori->show();
}


void FormUtama::on_pushButton_4_clicked()
{
    kota->show();
}


void FormUtama::on_pushButton_5_clicked()
{
    pelanggan->show();
}


void FormUtama::on_pushButton_7_clicked()
{
    subkategori->show();
}

