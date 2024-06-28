#ifndef FIOS_WANITA_H
#define FIOS_WANITA_H
#include <QString>
#include <QString>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtDebug>

class fios_wanita
{
public:
    fios_wanita();
    //fios_wanita(QString idwanita, QString id, QString nik, QString alamat, QString tempat_lahir,QString );

    void setIDWANITA(QString IDWANITA);
    QString getIDWANITA();

    void setNIK(QString NIK);
    QString getNIK();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setTEMPATLAHIR(QString TEMPATLAHIR);
    QString getTEMPATLAHIR();

    void setTANGGALLAHIR(QString TANGGALLAHIR);
    QString getTANGGALLAHIR();

    void setNIKAYAH(QString NIKAYAH);
    QString getNIKAYAH();

    void setNAMAAYAH(QString NAMAAYAH);
    QString getNAMAAYAH();

    void setNIKIBU(QString NIKIBU);
    QString getNIKIBU();

    void setNAMAIBU(QString NAMAIBU);
    QString getNAMAIBU();

private:
    QString idwanita,nik, nama, alamat, tempat_lahir, tanggal_lahir, nik_ayah, nama_ayah,
        nik_ibu, nama_ibu;
    QSqlDatabase koneksiDB;
};

#endif // FIOS_WANITA_H
