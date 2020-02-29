#-------------------------------------------------
#
# Project created by QtCreator 2020-02-17T20:59:47
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = planeWar
TEMPLATE = app


SOURCES += main.cpp\
        mainscene.cpp \
    map.cpp \
    heroplane.cpp \
    bullet.cpp \
    enemyplane.cpp \
    bomb.cpp

HEADERS  += mainscene.h \
    config.h \
    map.h \
    heroplane.h \
    bullet.h \
    enemyplane.h \
    bomb.h


