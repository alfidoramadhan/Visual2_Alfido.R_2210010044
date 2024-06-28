#include "fios_wanita.h"

fios_wanita::fios_wanita() {
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

void fios_wanita::setIDWANITA(QString IDWANITA)
{
    this->idwanita = IDWANITA;

}

QString fios_wanita::getIDWANITA()
{
    return this->idwanita;
}

void fios_wanita::setNIK(QString NIK)
{
    this->nik = NIK;
}

QString fios_wanita::getNIK()
{
    return this->nik;
}

void fios_wanita::setALAMAT(QString ALAMAT)
{
    this->alamat = ALAMAT;
}

QString fios_wanita::getALAMAT()
{
    return this->alamat;
}

void fios_wanita::setTEMPATLAHIR(QString TEMPATLAHIR)
{
    this->tempat_lahir = TEMPATLAHIR;
}

QString fios_wanita::getTEMPATLAHIR()
{
    return this->tempat_lahir;
}

void fios_wanita::setTANGGALLAHIR(QString TANGGALLAHIR)
{
    this->tanggal_lahir = TANGGALLAHIR;
}

QString fios_wanita::getTANGGALLAHIR()
{
    return this->tanggal_lahir;
}

void fios_wanita::setNIKAYAH(QString NIKAYAH)
{
    this->nik_ayah = NIKAYAH;
}

QString fios_wanita::getNIKAYAH()
{
    return this->nik_ayah;
}

void fios_wanita::setNAMAAYAH(QString NAMAAYAH)
{
    this->nama_ayah = NAMAAYAH;
}

QString fios_wanita::getNAMAAYAH()
{
    return this->nama_ayah;
}

void fios_wanita::setNIKIBU(QString NIKIBU)
{
    this->nik_ibu = NIKIBU;
}

QString fios_wanita::getNIKIBU()
{
    return this->nik_ibu;
}

void fios_wanita::setNAMAIBU(QString NAMAIBU)
{
    this->nama_ibu = NAMAIBU;
}

QString fios_wanita::getNAMAIBU()
{
    return this->nama_ibu;
}
