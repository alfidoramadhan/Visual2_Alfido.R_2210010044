#include "formutama.h"
#include "ui_formutama.h"

formUtama::formUtama(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formUtama)
{
    ui->setupUi(this);
    formPria = new formpria;
    formWanita = new formwanita;
    formJadwal = new formjadwal;
}

formUtama::~formUtama()
{
    delete ui;
}

void formUtama::on_pushButton_clicked()
{
    formPria->show();
}


void formUtama::on_pushButton_2_clicked()
{
    formWanita->show();
}


void formUtama::on_pushButton_3_clicked()
{
    formJadwal->show();
}

