
TEMPLATE = app
TARGET = LeetProj
DESTDIR = ./Win32/Debug
QT += core gui
CONFIG += debug console
DEFINES += QT_LARGEFILE_SUPPORT QT_DLL
INCLUDEPATH += ./GeneratedFiles \
    . \
    ./GeneratedFiles/Debug
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
QMAKE_CXXFLAGS += -std=c++11
include(LeetProj.pri)
