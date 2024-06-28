#ifndef FIOS_PRIA_H
#define FIOS_PRIA_H
#include <QString>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtDebug>

class fios_pria
{
public:
    fios_pria(); //constructor

    void setIDPRIA(QString IDPRIA);
    QString getIDPRIA();

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
    QString idpria,nik, nama, alamat, tempat_lahir, tanggal_lahir, nik_ayah, nama_ayah,
        nik_ibu, nama_ibu;
    QSqlDatabase koneksiDB;
};

#endif // FIOS_PRIA_H
