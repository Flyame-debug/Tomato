//规定创建任务时专注时间只能输入5的倍数（存在无法主动输入的bug)
#include "myqspinbox.h"
#include <QDebug>

MyQSpinBox::MyQSpinBox(QWidget *parent):QSpinBox(parent)
{
    //正则表达
    QRegExp rx("^-?(9999|[0-9]?\\d{0,1}(?:5|0))?)$");
    validator = new QRegExpValidator(rx, this);

    //以下内容和常规操作无疑
    this->setMinimum(25);
    this->setMaximum(9999);
    //this->setSingleStep(5);

}
QValidator::State MyQSpinBox::validate(QString &text, int &pos) const
{
    return validator->validate(text, pos);
}
