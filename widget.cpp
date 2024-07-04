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

    //setWindowFlags(Qt::FramelessWindowHint|windowFlags());
    //setAttribute(Qt::WA_TranslucentBackground);

}

Widget::~Widget()
{
    delete ui;
}




/*void Widget::mousePressEvent(QMouseEvent *e)
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

void Widget::on_toolButton_clicked()
{
    close();
}*/



void Widget::on_toolMinimizedButton_clicked()
{
    showMinimized();
}

void Widget::on_toolButton_2_clicked()
{
     showMinimized();
}

void Widget::on_pushButton_clicked()
{
    this->close();
    MainMenu *son=new MainMenu;
    son->show();
}
