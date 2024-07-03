#include "taskcreate.h"
#include "ui_taskcreate.h"
#include "task.h"
#include "myqspinbox.h"
#include "mainmenu.h"

taskCreate::taskCreate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::taskCreate)
{
    ui->setupUi(this);
}

taskCreate::~taskCreate()
{
    delete ui;
}
//返回上一级
void taskCreate::on_btn_return_clicked()
{
    this->close();
    task *father=new task();
    father->show();
}
//返回主菜单
void taskCreate::on_btn_mainMenu_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
//完成任务创建
void taskCreate::on_ok_clicked()
{

}
//取消任务创建
void taskCreate::on_cancel_clicked()
{
    this->close();
    task *father=new task();
    father->show();
}
