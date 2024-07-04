#ifndef FAIL_H
#define FAIL_H

#include <QWidget>

namespace Ui {
class fail;
}

class fail : public QWidget
{
    Q_OBJECT

public:
    explicit fail(QWidget *parent = nullptr);
    ~fail();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::fail *ui;
};

#endif // FAIL_H
