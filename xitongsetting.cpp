#include "xitongsetting.h"
#include "ui_xitongsetting.h"
#include "mainmenu.h"

Xitongsetting::Xitongsetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Xitongsetting)
{
    ui->setupUi(this);
}

Xitongsetting::~Xitongsetting()
{
    delete ui;
}
//返回键
void Xitongsetting::on_pushButton_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
//主菜单
void Xitongsetting::on_pushButton_2_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
