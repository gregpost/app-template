TEMPLATE = app
TARGET = AppTemplate
QT += widgets multimedia multimediawidgets core business database
INCLUDEPATH += \
    ../core/include \
    ../business/include \
    ../database/include
HEADERS += \
    include/gui/MainWindow.h \
    include/gui/MyGraphicsView.h
SOURCES += \
    src/main.cpp \
    src/MainWindow.cpp \
    src/MyGraphicsView.cpp
FORMS += \
    forms/MainWindow.ui
RESOURCES += \
    res.qrc