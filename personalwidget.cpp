#include "personalwidget.h"
#include "ui_personalwidget.h"
#include "mainmenu.h"

PersonalWidget::PersonalWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PersonalWidget)
{
    ui->setupUi(this);

    //统计量转成QString 这里的值是测试值
    int dayMin=0;
    QString str_7=QString::number(dayMin);
    int dayTo=0;
    QString str_22=QString::number(dayTo);
    int weekMin=0;
    QString str_12=QString::number(weekMin);
    int weekTo=0;
    QString str_23=QString::number(weekTo);
    int monthMin=600;
    QString str_13=QString::number(monthMin);
    int monthTo=24;
    QString str_24=QString::number(monthTo);
    int totalH=10;
    QString str_14=QString::number(totalH);
    int totalMin=20;
    QString str_25=QString::number(totalMin);
    int totalTo=50;
    QString str_28=QString::number(totalTo);

    //设置统计量的显示
    ui->label_7->setText(str_7);
    ui->label_22->setText(str_22);
    ui->label_12->setText(str_12);
    ui->label_23->setText(str_23);
    ui->label_13->setText(str_13);
    ui->label_24->setText(str_24);
    ui->label_14->setText(str_14);
    ui->label_25->setText(str_25);
    ui->label_28->setText(str_28);

    //设置成就的展示，已完成的成背景显示为绿色
    if(totalTo>=1){
        ui->honor_1->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(totalTo>=20){
        ui->honor_2->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(totalTo>=60){
        ui->honor_3->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(totalTo>=200){
        ui->honor_4->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(totalTo>=400){
        ui->honor_5->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(weekTo>=7){
        ui->honor_6->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(weekTo>=10){
        ui->honor_7->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(monthTo>=20){
        ui->honor_8->setStyleSheet("background-color:rgb(205, 255, 105)");
    }
    if(monthTo>=30){
        ui->honor_9->setStyleSheet("background-color:rgb(205, 255, 105)");
    }

}

PersonalWidget::~PersonalWidget()
{
    delete ui;
}

//返回
void PersonalWidget::on_return_2_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
//主菜单
void PersonalWidget::on_mainMenu_clicked()
{
    this->close();
    MainMenu *father=new MainMenu();
    father->show();
}
