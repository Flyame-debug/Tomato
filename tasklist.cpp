#include "tasklist.h"
#include "ui_tasklist.h"

tasklist::tasklist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tasklist)
{
    ui->setupUi(this);
}

tasklist::~tasklist()
{
    delete ui;
}
