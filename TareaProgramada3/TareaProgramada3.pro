QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controlador.cpp \
    framebitacora.cpp \
    funcion.cpp \
    lista.cpp \
    main.cpp \
    mainwindow.cpp

INCLUDEPATH += "C:/Users/jafet/Desktop/Programacion II/Qt/Bitacora"

LIBS += "C:/Users/jafet/Desktop/Programacion II/Qt/build-Bitacora-Desktop_Qt_5_12_10_MinGW_64_bit-Release/release/libBitacora.a"

HEADERS += \
    ../Bitacora/bitacora.h \
    MinTermino.h \
    controlador.h \
    framebitacora.h \
    funcion.h \
    lista.h \
    mainwindow.h


FORMS += \
    framebitacora.ui \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
