#include "fail.h"
#include "ui_fail.h"
#include"widget.h"

fail::fail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fail)
{
    ui->setupUi(this);
    //把窗口背景设置为透明;
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    setAttribute(Qt::WA_TranslucentBackground);


}

fail::~fail()
{
    delete ui;
}

void fail::on_toolButton_clicked()
{
    close();
}

void fail::on_toolButton_2_clicked()
{
    showMinimized();
}
