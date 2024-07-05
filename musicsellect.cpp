#include "musicsellect.h"
#include "ui_musicsellect.h"
#include "xitongsetting.h"


QMediaPlayer *startSound;  //创建一个音乐播放器
QMediaPlaylist * playlist;//创建音乐清单

musicsellect::musicsellect(QWidget *parent) :
    QWidget(parent),
       startSound(new QMediaPlayer(this)),
       playlist(new QMediaPlaylist(this))
   {
    playlist->setPlaybackMode(QMediaPlaylist::Loop); // 设置循环模式
          startSound->setPlaylist(playlist);
          playlist->addMedia(QUrl("qrc:/new/music/Andrew Prahlow - Echoes of the Eye.mp3"));
          playlist->addMedia(QUrl("qrc:/new/music/Echoes of Nature - Showers.mp3"));
          playlist->addMedia(QUrl("qrc:/new/music/moonlight.mp3"));
          playlist->addMedia(QUrl("qrc:/new/music/Noble Music Project.mp3"));
          playlist->addMedia(QUrl("qrc:/new/music/Peter Jeremias - Coming Home.mp3"));
          playlist->addMedia(QUrl("qrc:/new/music/Peter Jeremias - Dusk.mp3"));
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

          startSound->setPlaylist(playlist);
          startSound->play();
      }else{
        startSound->setPlaylist(playlist);
        startSound->stop();
    }
}




