#include "taskcreate.h"
#include "ui_taskcreate.h"
#include "task.h"
#include "myqspinbox.h"
#include "mainmenu.h"
#include "qcaculate.h"
//数据库尚未引入
//#include

taskCreate::taskCreate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::taskCreate)
{
    ui->setupUi(this);
    //connect(ui->ok,task::mySignal(),this,task::mySlot())
//ui->name.emit(mySignal(ui->nameEdit->text()));
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
this->hide();
    task *son=new task;
    son->show();


}
//取消任务创建
void taskCreate::on_cancel_clicked()
{
    this->close();
    task *father=new task();
    father->show();

}
//计算番茄数的东西
/*void taskCreate::on_time_textChanged(const QString &arg1)
{
    emit textChanged(const QString &arg1);
}

void taskCreate::on_frequency_textChanged(const QString &arg1)
{
    emit textChanged(const QString &arg1);
}*/

