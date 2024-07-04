#ifndef XITONGSETTING_H
#define XITONGSETTING_H

#include <QWidget>

#include "musicsellect.h"

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

    void on_pushButton_3_clicked();

    void on_switchbotton_customContextMenuRequested(const QPoint &pos);

    void on_radioButton_clicked();

    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

private:
    Ui::Xitongsetting *ui;

    musicsellect *musicsellect;
};

#endif // XITONGSETTING_H