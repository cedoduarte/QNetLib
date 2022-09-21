QT += core gui network widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    qflexiblejsonobject.cpp \
    qnetrequest.cpp

HEADERS += \
    mainwindow.h \
    qflexiblejsonobject.h \
    qnetrequest.h

FORMS += \
    mainwindow.ui

LIBS += -L$$PWD/lib/openssl
LIBS += -lssl-1_1-x64
LIBS += -lcrypto-1_1-x64
