#ifndef FIOS_MEMBER_H
#define FIOS_MEMBER_H
#include <QString>

class fios_member
{
public:
    fios_member();

    void setID(QString ID);
    QString getID();

    void setEMAIL(QString EMAIL);
    QString getEMAIL();

    void setPASSWORD(QString PASSWORD);
    QString getPASSWORD();

    void setNAMA(QString NAMA);
    QString getNAMA();


private: QString id,email,password,nama;
};

#endif // FIOS_MEMBER_H
