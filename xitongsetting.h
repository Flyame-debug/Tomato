#ifndef XITONGSETTING_H
#define XITONGSETTING_H

#include <QWidget>

namespace Ui {
class Xitongsetting;
}

class Xitongsetting : public QWidget
{
    Q_OBJECT

public:
    explicit Xitongsetting(QWidget *parent = nullptr);
    ~Xitongsetting();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Xitongsetting *ui;
};

#endif // XITONGSETTING_H
