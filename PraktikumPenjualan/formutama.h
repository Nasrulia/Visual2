#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formbarang.h>
#include <forminvd.h>
#include <forminvoice.h>
#include <formkategori.h>
#include <formkota.h>
#include <formpelanggan.h>
#include <formsubkategori.h>

namespace Ui {
class FormUtama;
}

class FormUtama : public QMainWindow
{
    Q_OBJECT

public:
    explicit FormUtama(QWidget *parent = nullptr);
    ~FormUtama();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::FormUtama *ui;
    FormBarang *barang;
    FormInvd *invd;
    FormInvoice *invoice;
    FormKategori *kategori;
    FormKota *kota;
    FormPelanggan *pelanggan;
    FormSubKategori *subkategori;
};

#endif // FORMUTAMA_H
