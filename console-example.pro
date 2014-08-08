#-------------------------------------------------
#
# Project created by QtCreator 2014-08-07T16:30:32
#
#-------------------------------------------------

QMAKE_CXXFLAGS = -std=c++11 #-stdlib=libc++ -mmacosx-version-min=10.7
QMAKE_LFLAGS = -std=c++11 #-stdlib=libc++ -mmacosx-version-min=10.7

QT       += core

QT       -= gui

TARGET = console-example
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    graph.cpp \
    graphnode.cpp \
    graphedge.cpp

HEADERS += \
    graph.h \
    graphnode.h \
    graphedge.h
