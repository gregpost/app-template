TEMPLATE = lib
TARGET = database
QT += sql core
INCLUDEPATH += ../core/include
HEADERS += \
    include/database/DatabaseManager.h
SOURCES += \
    src/DatabaseManager.cpp