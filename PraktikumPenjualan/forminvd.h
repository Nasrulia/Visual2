#ifndef FORMINVD_H
#define FORMINVD_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>

namespace Ui {
class FormInvd;
}

class FormInvd : public QWidget
{
    Q_OBJECT

public:
    explicit FormInvd(QWidget *parent = nullptr);
    void loadTabelInvd();
    ~FormInvd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableInvd_activated(const QModelIndex &index);

private:
    Ui::FormInvd *ui;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlQueryModel *tabelModel;
};

#endif // FORMINVD_H
