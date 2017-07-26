QT += core
QT -= gui
INCLUDEPATH += $$PWD/../eigen-eigen-334
CONFIG += c++11

TARGET = wtf
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app
LIBS += $$PWD/eig.o
SOURCES += main.cpp \
    main2.cpp \
    eig.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    preeig.h \
    eig.h

DISTFILES += \
    libeig_dll.a \
    e.exe \
    eig_dll.dll \
    main.exe \
    eig.o \
    main.o \
    main2.o \
    wtf.pro.user \
    wtf.pro.user.e6d5d4e
