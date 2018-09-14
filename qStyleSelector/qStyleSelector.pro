#-------------------------------------------------
#
# Project created by QtCreator 2018-09-13T20:29:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qStyleSelector
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    styleselector.cpp

HEADERS  += widget.h \
    styleselector.h

FORMS    += widget.ui \
    styleselector.ui

RESOURCES += \
    resources.qrc
