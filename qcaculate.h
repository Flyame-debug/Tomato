#ifndef QCACULATE_H
#define QCACULATE_H

#include "ui_taskcreate.h"
#include "myqspinbox.h"
#include <QSpinBox>

class Qcaculate : public QWidget
{
    Q_OBJECT

public:
    Qcaculate(QWidget *parent = nullptr);

private slots:
    void updateResult();

private:
    Ui::taskCreate ui;
    MyQSpinBox *time;
    QSpinBox *frequency;
    QLabel *quantity;
};

#endif // QCACULATE_H
