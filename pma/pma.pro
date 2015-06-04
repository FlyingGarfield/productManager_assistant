#-------------------------------------------------
#
# Project created by QtCreator 2015-05-03T19:37:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pma
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    jiuzuo.cpp \
    xuqiu.cpp \
    pingbao.cpp \
    tasktime.cpp \
    tasklist.cpp \
    xiuqiulist.cpp

HEADERS  += mainwindow.h \
    jiuzuo.h \
    xuqiu.h \
    pingbao.h \
    tasktime.h \
    tasklist.h \
    xiuqiulist.h

FORMS    += mainwindow.ui \
    jiuzuo.ui \
    xuqiu.ui \
    pingbao.ui \
    tasktime.ui \
    tasklist.ui \
    xiuqiulist.ui
