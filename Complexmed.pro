#-------------------------------------------------
#
# Project created by QtCreator 2016-09-07T20:36:17
#
#-------------------------------------------------

QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Complexmed
TEMPLATE = app


SOURCES += main.cpp \
    GUI/Main/mainwindow.cpp \
    GUI/Echo/echograph.cpp

HEADERS  +=  \
    GUI/Main/mainwindow.h \
    GUI/Echo/echograph.h

FORMS    +=  \
    GUI/Main/mainwindow.ui \
    GUI/Echo/echograph.ui

DISTFILES += \
    Res/complexmed.ico \
    ToDo_list.docx \
    Resources/complexmed.ico \
    Driver/some.txt \
    README.md

RESOURSES
