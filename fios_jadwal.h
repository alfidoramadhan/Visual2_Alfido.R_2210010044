#ifndef FIOS_JADWAL_H
#define FIOS_JADWAL_H
#include <QString>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtDebug>

class fios_jadwal
{
public:
    fios_jadwal();

    void setIDJADWAL(QString IDJADWAL);
    QString getIDJADWAL();

    void setKEGIATAN(QString KEGIATAN);
    QString getKEGIATAN();

    void setWAKTU(QString WAKTU);
    QString getWAKTU();

    private: QString idjadwal, kegiatan, waktu;
    QSqlDatabase koneksiDB;
};

#endif // FIOS_JADWAL_H
