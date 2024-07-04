#include "xitongsetting.h"
#include "ui_xitongsetting.h"
#include "mainmenu.h"
#include "musicsellect.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>


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

void Xitongsetting::on_pushButton_3_clicked()
{
    this->close();
    class musicsellect *son=new class musicsellect();
    son->show();
}







//on键

void Xitongsetting::on_radioButton_2_toggled(bool checked)
{
    {
        if(checked){
           ui->pushButton_3->setEnabled(true);
        }
        else{
           ui->pushButton_3->setEnabled(false);
        }
    }

}
