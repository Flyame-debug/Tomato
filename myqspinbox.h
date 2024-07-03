//规定创建任务时专注时间只能输入5的倍数（存在无法主动输入的bug)
#ifndef MYQSPINBOX_H
#define MYQSPINBOX_H

#include <QObject>
#include <QWidget>
#include <QValidator>
#include <QSpinBox>
class MyQSpinBox : public QSpinBox
{
public:
    MyQSpinBox(QWidget *parent = 0);
protected:
    QValidator::State validate(QString & text, int & pos) const;
public:
    QRegExpValidator *validator;
};

#endif // MYQSPINBOX_H
