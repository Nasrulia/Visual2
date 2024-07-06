#ifndef FORMKATEGORI_H
#define FORMKATEGORI_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormKategori;
}

class FormKategori : public QWidget
{
    Q_OBJECT

public:
    explicit FormKategori(QWidget *parent = nullptr);
    void loadTabelKategori();
    ~FormKategori();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableKategori_activated(const QModelIndex &index);

private:
    Ui::FormKategori *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMKATEGORI_H
