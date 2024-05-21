#ifndef Q1_H
#define Q1_H

#include <QDialog>

namespace Ui {
class q1;
}

class q1 : public QDialog
{
    Q_OBJECT

public:
    explicit q1(QWidget *parent = nullptr);
    ~q1();

private slots:


    void on_q1_B_2_clicked();

private:
    Ui::q1 *ui;
};

#endif // Q1_H
