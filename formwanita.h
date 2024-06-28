#ifndef FORMWANITA_H
#define FORMWANITA_H

#include <QWidget>
#include <fios_wanita.h>

namespace Ui {
class formwanita;
}

class formwanita : public QWidget
{
    Q_OBJECT

public:
    explicit formwanita(QWidget *parent = nullptr);
    ~formwanita();

private:
    Ui::formwanita *ui;
};

#endif // FORMWANITA_H
