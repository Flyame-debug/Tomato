#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

/*protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);*/

private slots:
    void on_toolButton_clicked();
    void on_toolButton_2_clicked();

    void on_toolMinimizedButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    QPoint p;
};
#endif // WIDGET_H
