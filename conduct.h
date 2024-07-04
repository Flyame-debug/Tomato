#ifndef CONDUCT_H
#define CONDUCT_H

#include <QWidget>
#include <QMouseEvent>
#include <QTime>
#include <QTimer>
#include <QPainter>
#include <QFont>
#include <QVBoxLayout>
#include <QPushButton>

namespace Ui {
class conduct;
}

class conduct : public QWidget
{
    Q_OBJECT

public:
    explicit conduct(QWidget *parent = nullptr);
    ~conduct();

private slots:


    void on_backButton_clicked();

private:
    Ui::conduct *ui;
};

#endif // CONDUCT_H
