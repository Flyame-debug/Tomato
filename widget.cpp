#include "widget.h"
#include "ui_widget.h"
#include"conduct.h"
#include"fail.h"

#include<QColor>
#include<QMessageBox>
#include<QProcess>


// 定义一些颜色常量
#define BORDER_COLOR QColor(222, 222, 222, 222)
#define BACKGROUND_COLOR QColor(255, 255, 255, 255)
#define RED_COLOR QColor(255, 0, 0)
#define GREEN_COLOR QColor(0, 255, 0)

Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    //setAttribute(Qt::WA_TranslucentBackground);
    //setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinMaxButtonsHint | Qt::WindowStaysOnTopHint);
    // 设置窗口为无边框、可最小化/最大化，并始终置顶


    state = true; // 初始状态为暂停
    tomato_num = 0;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());

        //把窗口背景设置为透明;
            setAttribute(Qt::WA_TranslucentBackground);
    QFont font("Rockwell", 13);
    font.setBold(true);
    timer = new QTimer;
    ui->Timer->setFont(font);
    ui->Timer->setDigitCount(5);
    ui->Timer->setLineWidth(0);
    ui->Timer->setSegmentStyle(QLCDNumber::Filled);

    startbutton = ui->startButton;
    connect(timer, &QTimer::timeout, this, &Widget::updateTime);
    // 连接计时器超时信号与更新时间的槽函数


    InitTime();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton)
        clickPos = e->pos();
}

// 实现窗口的拖动，父窗口的左上角+当前鼠标指针移动-初始单击时候鼠标指针的方向
void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if (e->buttons() & Qt::LeftButton)
        move(e->pos() + pos() - clickPos);

}

// 根据当前颜色填充整个窗口的背景色
void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //painter.fillRect(rect(), current_color);

}

// 更新倒计时显示
void Widget::updateTime()
{
    QString s_minute = QString::number(time.minute());
    QString s_second = QString::number(time.second());
    if (s_minute.length() == 1) s_minute = "0" + s_minute;
    if (s_second.length() == 1) s_second = "0" + s_second;
    QString disp = s_minute + ":" + s_second;
    ui->Timer->display(disp);

    if ((time.minute()!= 0) || (time.second()!= 0))
    {
        if (time.second() == 0)
        {
            time.setHMS(time.hour(), time.minute() - 1, 59);
        }
        else
        {
            time.setHMS(time.hour(), time.minute(), time.second() - 1);
        }
    }
    else
    {
        if (current_color == RED_COLOR)
        {
            current_color = GREEN_COLOR;
            time.setHMS(0, 5, 0);
            tomato_num++;
        }
        else
        {
            current_color = RED_COLOR;
            time.setHMS(0, 25, 0);
        }
        state = true;
        timer->stop();
        update();

        this->close();
      conduct *son=new conduct;
      son->show();
    }
}

// 初始化计时时间
void Widget::InitTime()
{
    time.setHMS(0, 25, 0);
    current_color = RED_COLOR;
    update();
}

// 开始/暂停按钮的点击事件
void Widget::on_startButton_clicked()
{
    if (state)
    {
        state = false;
        timer->start(1000);
        startbutton->setText("暂停");
    }
    else
    {
        state = true;
        timer->stop();
        startbutton->setText("开始");
    }
}

// 关闭按钮的点击事件
void Widget::on_closeButton_clicked()
{

this->close();
      fail *son=new fail;
      son->show();
}



