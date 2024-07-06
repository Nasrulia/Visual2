#ifndef FORMSUBKATEGORI_H
#define FORMSUBKATEGORI_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormSubKategori;
}

class FormSubKategori : public QWidget
{
    Q_OBJECT

public:
    explicit FormSubKategori(QWidget *parent = nullptr);
     void loadTabelSubkategori();
    ~FormSubKategori();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableSubkategori_activated(const QModelIndex &index);

private:
    Ui::FormSubKategori *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMSUBKATEGORI_H
