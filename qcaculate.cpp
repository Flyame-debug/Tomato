#include "qcaculate.h"


Qcaculate::Qcaculate(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    time = ui.time;
    frequency = ui.frequency;
    quantity = ui.quantity;

    connect(time, &MyQSpinBox::textChanged, this, &Qcaculate::updateResult);
    connect(frequency, &QSpinBox::textChanged, this, &Qcaculate::updateResult);
}
void Qcaculate::updateResult()
{
    int num1 = time->value();
    int num2 = frequency->value();

    double result = (num1 * num2) / 25.0;
    quantity->setText("Result: " + QString::number(result));
}
