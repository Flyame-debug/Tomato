#ifndef TOMATO_H
#define TOMATO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Tomato; }
QT_END_NAMESPACE

class Tomato : public QMainWindow
{
    Q_OBJECT

public:
    Tomato(QWidget *parent = nullptr);
    ~Tomato();

private:
    Ui::Tomato *ui;
};
#endif // TOMATO_H
