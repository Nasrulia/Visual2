#ifndef FORMKOTA_H
#define FORMKOTA_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormKota;
}

class FormKota : public QWidget
{
    Q_OBJECT

public:
    explicit FormKota(QWidget *parent = nullptr);
    void loadTabelKota();
    ~FormKota();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableKota_activated(const QModelIndex &index);

private:
    Ui::FormKota *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMKOTA_H
