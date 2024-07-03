#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QMouseEvent>
#include "mainmenu.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//⬇暂时注释掉，等待登录跳转功能完全实现
/*
    setWindowFlags(Qt::FramelessWindowHint|windowFlags());
    setAttribute(Qt::WA_TranslucentBackground);
*/
//⬆暂时注释掉，等待登录跳转功能完全实现

}

Widget::~Widget()
{
    delete ui;
}


//⬇暂时注释掉，等待登录跳转功能完全实现
/*
void Widget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {

        p = e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {

        move(e->globalPos() - p);
    }

}
*/
//⬆暂时注释掉，等待登录跳转功能完全实现
void Widget::on_toolButton_clicked()
{
    close();
}



void Widget::on_toolMinimizedButton_clicked()
{
    showMinimized();
}

void Widget::on_toolButton_2_clicked()
{
     showMinimized();
}
//登录
void Widget::on_Pushbottom_clicked()
{
    //数据库查找用户名和密码
    //失败就提示
    //成功就进入主界面
    //目前只实现点击登录进入主界面，后续完善
    this->close();
    MainMenu *son=new MainMenu();
    son->show();

}
