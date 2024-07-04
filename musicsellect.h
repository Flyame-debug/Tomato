#ifndef MUSICSELLECT_H
#define MUSICSELLECT_H

#include <QWidget>
#include <QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>

namespace Ui {
class musicsellect;
}

class musicsellect : public QWidget
{
    Q_OBJECT

public:
    explicit musicsellect(QWidget *parent = nullptr);
    ~musicsellect();

private slots:
    void on_pushButton_3_clicked();


    void on_radioButton_3_toggled(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_2_toggled(bool checked);

private:
    Ui::musicsellect *ui;
    QMediaPlayer *startSound;
    QMediaPlaylist * playlist;
};

#endif // MUSICSELLECT_H
