#include "fios_pria.h"

fios_pria::fios_pria() {
    koneksiDB = QSqlDatabase::addDatabase("QODBC");
    koneksiDB.setDatabaseName("dsn_kua");
    koneksiDB.setUserName("root");
    koneksiDB.setPassword("");

    if (koneksiDB.open()){
        qDebug()<<"Database Terkoneksi";
    } else {
        qDebug()<<koneksiDB.lastError().text();
    }
}

void fios_pria::setIDPRIA(QString IDPRIA)
{
    this->idpria = IDPRIA;

}

QString fios_pria::getIDPRIA()
{
    return this->idpria;
}

void fios_pria::setNIK(QString NIK)
{
    this->nik = NIK;
}

QString fios_pria::getNIK()
{
    return this->nik;
}

void fios_pria::setALAMAT(QString ALAMAT)
{
    this->alamat = ALAMAT;
}

QString fios_pria::getALAMAT()
{
    return this->alamat;
}

void fios_pria::setTEMPATLAHIR(QString TEMPATLAHIR)
{
    this->tempat_lahir = TEMPATLAHIR;
}

QString fios_pria::getTEMPATLAHIR()
{
    return this->tempat_lahir;
}

void fios_pria::setTANGGALLAHIR(QString TANGGALLAHIR)
{
    this->tanggal_lahir = TANGGALLAHIR;
}

QString fios_pria::getTANGGALLAHIR()
{
    return this->tanggal_lahir;
}

void fios_pria::setNIKAYAH(QString NIKAYAH)
{
    this->nik_ayah = NIKAYAH;
}

QString fios_pria::getNIKAYAH()
{
    return this->nik_ayah;
}

void fios_pria::setNAMAAYAH(QString NAMAAYAH)
{
    this->nama_ayah = NAMAAYAH;
}

QString fios_pria::getNAMAAYAH()
{
    return this->nama_ayah;
}

void fios_pria::setNIKIBU(QString NIKIBU)
{
    this->nik_ibu = NIKIBU;
}

QString fios_pria::getNIKIBU()
{
    return this->nik_ibu;
}

void fios_pria::setNAMAIBU(QString NAMAIBU)
{
    this->nama_ibu = NAMAIBU;
}

QString fios_pria::getNAMAIBU()
{
    return this->nama_ibu;
}
