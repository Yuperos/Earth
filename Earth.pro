#-------------------------------------------------
#
# Project created by QtCreator 2016-05-08T15:29:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Earth
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    computations.cpp \
    cameravisionmodel.cpp

HEADERS  += mainwindow.h \
    computations.h \
    cameravisionmodel.h

FORMS    += mainwindow.ui
