#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>
#include <formpria.h>
#include <formwanita.h>
#include <formjadwal.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class formUtama;
}
QT_END_NAMESPACE

class formUtama : public QMainWindow
{
    Q_OBJECT

public:
    formUtama(QWidget *parent = nullptr);
    ~formUtama();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::formUtama *ui;
    formpria *formPria;
    formwanita *formWanita;
    formjadwal *formJadwal;
};
#endif // FORMUTAMA_H
