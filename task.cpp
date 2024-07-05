#include "task.h"
//为了方便我的编程制作的简易UI，后续记得美化
#include "ui_task.h"
#include "taskcreate.h"
#include "mainmenu.h"
#include"running.h"

task::task(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task)
{
    ui->setupUi(this);
}

task::~task()
{
    delete ui;
}

//点击“返回”回到上一级菜单
void task::on_btn_return_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
//点击“主菜单”回到初始界面
void task::on_btn_mainMenu_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
//新建任务
void task::on_createTask_clicked()
{
    //点击按钮进入taskCreate(任务创建)界面
    this->close();
    taskCreate *son = new taskCreate();
    son->show();
}

void task::on_tasklist_clicked()
{
    this->hide();
    running *son =new running;
    son->show();
}

/*void task::mySlot(QString data)
{
    ui->nameEdit->setText(data);
}
*/
