#include "formwanita.h"
#include "ui_formwanita.h"

formwanita::formwanita(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::formwanita)
{
    ui->setupUi(this);
}

formwanita::~formwanita()
{
    delete ui;
}
