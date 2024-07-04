#include "musicsellect.h"
#include "ui_musicsellect.h"
#include "xitongsetting.h"
#include <QMediaPlayer>
#include<QtMultimedia/QMediaPlaylist>

QMediaPlayer *startSound;  //创建一个音乐播放器
QMediaPlaylist * playlist;//创建音乐清单

musicsellect::musicsellect(QWidget *parent) :
    QWidget(parent),
       startSound(new QMediaPlayer(this)),
       playlist(new QMediaPlaylist(this))
   {
       playlist->clear();
       playlist->setPlaybackMode(QMediaPlaylist::Loop); // 设置循环模式
       startSound->setPlaylist(playlist);

       ui = new Ui::musicsellect;
       ui->setupUi(this);
   }

musicsellect::~musicsellect()
{
    delete ui;
}
//返回键
void musicsellect::on_pushButton_3_clicked()
{
    this->close();
    Xitongsetting *father=new Xitongsetting();
    father->show();
}


void musicsellect::on_radioButton_3_toggled(bool checked)
{
    if (checked){
          playlist->clear(); // 清空播放列表
          playlist->addMedia(QUrl("qrc:/new/music/Andrew Prahlow - Echoes of the Eye.mp3"));
          playlist->setPlaybackMode(QMediaPlaylist::Loop);
          startSound->setPlaylist(playlist);
          startSound->play();
      }
}




