#ifndef PERSONALWIDGET_H
#define PERSONALWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class PersonalWidget; }
QT_END_NAMESPACE

class PersonalWidget : public QWidget
{
    Q_OBJECT

public:
    PersonalWidget(QWidget *parent = nullptr);
    ~PersonalWidget();

private:
    Ui::PersonalWidget *ui;
};
#endif // PERSONALWIDGET_H
