#include "conduct.h"
#include "ui_conduct.h"
#include"widget.h"


conduct::conduct(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conduct)
{
    ui->setupUi(this);
}

conduct::~conduct()
{
    delete ui;
}

//返回任务创建界面
void conduct::on_backButton_clicked()
{
  this->close();

}
