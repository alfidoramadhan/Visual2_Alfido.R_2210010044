#ifndef FORMJADWAL_H
#define FORMJADWAL_H

#include <QWidget>
#include <fios_jadwal.h>

namespace Ui {
class formjadwal;
}

class formjadwal : public QWidget
{
    Q_OBJECT

public:
    explicit formjadwal(QWidget *parent = nullptr);
    ~formjadwal();

private:
    Ui::formjadwal *ui;
};

#endif // FORMJADWAL_H
