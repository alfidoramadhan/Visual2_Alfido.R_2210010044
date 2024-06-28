#ifndef FORMPRIA_H
#define FORMPRIA_H

#include <QWidget>
#include <fios_pria.h>

namespace Ui {
class formpria;
}

class formpria : public QWidget
{
    Q_OBJECT

public:
    explicit formpria(QWidget *parent = nullptr);
    ~formpria();

private:
    Ui::formpria *ui;
    fios_pria uji;
};

#endif // FORMPRIA_H
