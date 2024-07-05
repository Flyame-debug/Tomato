#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include "mainmenu.h"
#include"taskcreate.h"
namespace Ui {
class task;
}

class task : public QWidget
{
    Q_OBJECT

public:
    explicit task(QWidget *parent = nullptr);
    ~task();

private slots:
    void on_btn_return_clicked();

    void on_btn_mainMenu_clicked();

    void on_createTask_clicked();

    void on_tasklist_clicked();

private:
    Ui::task *ui;
};

#endif // TASK_H
