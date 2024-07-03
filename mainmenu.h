#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include "widget.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_start_clicked();

    void on_center_clicked();

    void on_settings_clicked();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
