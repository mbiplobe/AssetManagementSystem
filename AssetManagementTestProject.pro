QT += core
QT -= gui

CONFIG += c++11
QMAKE_CXXFLAGS_WARN_ON += -Wno-reorder

TARGET = AssetManagementTestProject
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    asset.cpp \
    date.cpp \
    computer.cpp \
    custodian.cpp \
    hmd.cpp \
    phone.cpp \
    television.cpp \
    assetregister.cpp \
    menuinterface.cpp

HEADERS += \
    asset.h \
    date.h \
    computer.h \
    custodian.h \
    hmd.h \
    phone.h \
    television.h \
    assetregister.h \
    menuinterface.h
