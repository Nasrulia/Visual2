#ifndef FORMINVOICE_H
#define FORMINVOICE_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormInvoice;
}

class FormInvoice : public QWidget
{
    Q_OBJECT

public:
    explicit FormInvoice(QWidget *parent = nullptr);
    void loadTabelInvoice();
    ~FormInvoice();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableInvoice_activated(const QModelIndex &index);

private:
    Ui::FormInvoice *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMINVOICE_H
