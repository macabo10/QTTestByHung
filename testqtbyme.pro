TEMPLATE = app
TARGET = testQT

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    queuetest.cpp \
    window.cpp

HEADERS += \
    qbtest.h \
    queuetest.h \
    window.h
