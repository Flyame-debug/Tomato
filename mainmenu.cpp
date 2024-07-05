#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "widget.h"
#include "task.h"
#include "taskcreate.h"
#include "personalwidget.h"
#include "xitongsetting.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|windowFlags());
    //setAttribute(Qt::WA_TranslucentBackground);
}

MainMenu::~MainMenu()
{
    delete ui;
}
//开始专注
void MainMenu::on_start_clicked()
{
    this->close();
    task *son=new task();
    son->show();
}
//个人中心
void MainMenu::on_center_clicked()
{
    this->close();
    PersonalWidget *son=new PersonalWidget();
    son->show();
}
//系统设置
void MainMenu::on_settings_clicked()
{
    this->close();
    Xitongsetting *son=new Xitongsetting();
    son->show();
}
