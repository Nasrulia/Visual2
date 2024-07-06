QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    formbarang.cpp \
    forminvd.cpp \
    forminvoice.cpp \
    formkategori.cpp \
    formkota.cpp \
    formpelanggan.cpp \
    formsubkategori.cpp \
    formutama.cpp \
    main.cpp

HEADERS += \
    formbarang.h \
    forminvd.h \
    forminvoice.h \
    formkategori.h \
    formkota.h \
    formpelanggan.h \
    formsubkategori.h \
    formutama.h

FORMS += \
    formbarang.ui \
    forminvd.ui \
    forminvoice.ui \
    formkategori.ui \
    formkota.ui \
    formpelanggan.ui \
    formsubkategori.ui \
    formutama.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
