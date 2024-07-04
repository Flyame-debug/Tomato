#include "tomato.h"
#include "ui_tomato.h"

Tomato::Tomato(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tomato)
{
    ui->setupUi(this);
}

Tomato::~Tomato()
{
    delete ui;
}

