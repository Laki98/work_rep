QT += core
QT -= gui

CONFIG += c++11

TARGET = destructor
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    alpha.cpp

HEADERS += \
    alpha.h
