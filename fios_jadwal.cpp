#include "fios_jadwal.h"

fios_jadwal::fios_jadwal() {}

void fios_jadwal::setIDJADWAL(QString IDJADWAL)
{
    this->idjadwal = IDJADWAL;
}

QString fios_jadwal::getIDJADWAL()
{
    return this->idjadwal;
}

void fios_jadwal::setKEGIATAN(QString KEGIATAN)
{
    this->kegiatan = KEGIATAN;
}

QString fios_jadwal::getKEGIATAN()
{
    return this->kegiatan;
}

void fios_jadwal::setWAKTU(QString WAKTU)
{
    this->waktu = WAKTU;
}

QString fios_jadwal::getWAKTU()
{
    return this->waktu;
}
