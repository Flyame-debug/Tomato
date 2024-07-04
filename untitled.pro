QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += resources_big

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    conduct.cpp \
    fail.cpp \
    main.cpp \
    mainmenu.cpp \
    musicsellect.cpp \
    myqspinbox.cpp \
    personalwidget.cpp \
    qcaculate.cpp \
    running.cpp \
    task.cpp \
    taskcreate.cpp \
    tomato.cpp \
    widget.cpp \
    xitongsetting.cpp

HEADERS += \
    conduct.h \
    fail.h \
    mainmenu.h \
    musicsellect.h \
    myqspinbox.h \
    personalwidget.h \
    qcaculate.h \
    task.h \
    taskcreate.h \
    tomato.h \
    widget.h \
    xitongsetting.h

FORMS += \
    fail.ui \
    mainmenu.ui \
    musicsellect.ui \
    personalwidget.ui \
    running.ui \
    task.ui \
    taskcreate.ui \
    tomato.ui \
    widget.ui \
    xitongsetting.ui \
    xitongsetting.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    api.qrc \
    api.qrc \
    api.qrc \
    music.qrc \
    music.qrc \
    music.qrc \
    pics.qrc \
    pics.qrc \
    pics.qrc \
    res.qrc \
    res.qrc

DISTFILES += \
    Andrew Prahlow - Echoes of the Eye.mp3 \
    Andrew Prahlow - Echoes of the Eye.mp3 \
    Echoes of Nature - Showers.mp3 \
    Echoes of Nature - Showers.mp3 \
    Noble Music Project.mp3 \
    Noble Music Project.mp3 \
    Peter Jeremias - Coming Home.mp3 \
    Peter Jeremias - Coming Home.mp3 \
    Peter Jeremias - Dusk.mp3 \
    Peter Jeremias - Dusk.mp3 \
    Tomatopic.png \
    clock.png \
    desktop.ini \
    moonlight.mp3 \
    qt.conf
