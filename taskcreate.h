#ifndef TASKCREATE_H
#define TASKCREATE_H

#include <QWidget>
#include "task.h"
namespace Ui {
class taskCreate;
}

class taskCreate : public QWidget
{
    Q_OBJECT

public:
    explicit taskCreate(QWidget *parent = nullptr);
    ~taskCreate();

private slots:
    void on_btn_return_clicked();

    void on_btn_mainMenu_clicked();

    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::taskCreate *ui;
};

#endif // TASKCREATE_H
