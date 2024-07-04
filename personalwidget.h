#ifndef PERSONALWIDGET_H
#define PERSONALWIDGET_H

#include <QWidget>
#include "mainmenu.h"


QT_BEGIN_NAMESPACE
namespace Ui { class PersonalWidget; }
QT_END_NAMESPACE

class PersonalWidget : public QWidget
{
    Q_OBJECT

public:
    PersonalWidget(QWidget *parent = nullptr);
    ~PersonalWidget();

private slots:
    void on_return_2_clicked();

    void on_mainMenu_clicked();

private:
    Ui::PersonalWidget *ui;
};
#endif // PERSONALWIDGET_H
