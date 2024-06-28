#include "formpria.h"
#include "ui_formpria.h"

formpria::formpria(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formpria)
{
    ui->setupUi(this);
    fios_pria uji;
}

formpria::~formpria()
{
    delete ui;
}
