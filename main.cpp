#include "formutama.h"
#include <QApplication>
// #include <QtSql/QtSql>
// #include <QtSql/QSqlDatabase>
// #include <QtSql/QSqlError>
// #include <QtDebug>
#include <fios_jadwal.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    // konekDB.setDatabaseName("dsn_kua");
    // konekDB.setUserName("root");
    // konekDB.setPassword("");

    // if (konekDB.open()){
    //     qDebug()<<"Database Terkoneksi";
    // } else {
    //     qDebug()<<konekDB.lastError().text();
    // }

    // QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    // konekDB.setDatabaseName("dsn_nikah");
    // konekDB.setUserName("root");
    // konekDB.setPassword("");

    // if (konekDB.open()){
    //     qDebug()<<"Database Terkoneksi";
    // }else {
    //     qDebug()<<konekDB.lastError().text();
    // }
    formUtama w;
    w.show();
    // fios_jadwal k;
    // k.setKEGIATAN("Akad nikah");
    // qDebug()<<"Kegiatan "<<k.getKEGIATAN();
    return a.exec();
}
