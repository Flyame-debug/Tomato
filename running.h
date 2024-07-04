#ifndef RUNNING_H
#define RUNNING_H

#include "conduct.h"
#include <QWidget>
#include <QMouseEvent>
#include <QTime>
#include <QTimer>
#include <QPainter>
#include <QFont>
#include <QVBoxLayout>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class running; }
QT_END_NAMESPACE

class running : public QWidget
{
    Q_OBJECT

    public:
        running(QWidget *parent = nullptr) ;  ~running();

protected:
    void mousePressEvent(QMouseEvent *); // 鼠标单击事件
    void mouseMoveEvent(QMouseEvent *);  // 鼠标单击拖动窗口
    void paintEvent(QPaintEvent *);    // 重绘事件，用于绘制界面颜色

private slots:
    void updateTime();  // 用于更新倒计时显示
    void InitTime();    // 初始化计时时间
    void on_startButton_clicked();  // 开始/暂停按钮的点击事件
    void on_closeButton_clicked(); // 关闭按钮的点击事件


private:
    Ui::running *ui;
    bool state; // 记录计时状态（暂停或进行中）
    int tomato_num; // 番茄计数
    QColor current_color; // 当前颜色
    QPoint clickPos;
    QTimer *timer; // 计时器
    QTime time;
    QPushButton *startbutton;

};
#endif // TOMATO_H
