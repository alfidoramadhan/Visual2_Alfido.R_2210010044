#include "formjadwal.h"
#include "ui_formjadwal.h"

formjadwal::formjadwal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formjadwal)
{
    ui->setupUi(this);
}

formjadwal::~formjadwal()
{
    delete ui;
}
