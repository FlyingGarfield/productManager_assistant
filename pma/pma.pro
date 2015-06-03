#-------------------------------------------------
#
# Project created by QtCreator 2015-05-03T19:37:54
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pma
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    jiuzuo.cpp \
    xuqiu.cpp \
    pingbao.cpp

HEADERS  += mainwindow.h \
    jiuzuo.h \
    xuqiu.h \
    pingbao.h

FORMS    += mainwindow.ui \
    jiuzuo.ui \
    xuqiu.ui \
    pingbao.ui
