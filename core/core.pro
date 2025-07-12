# core/core.pro

# Тип проекта — библиотека
TEMPLATE = lib
# Собираем статическую библиотеку (для динамической замените на “dll” или “shared”)
CONFIG += staticlib

# Исполняемый (бинарный) имя
TARGET = core

# Используем C++17
CONFIG += c++17

# Пути к заголовкам
INCLUDEPATH += $$PWD/include

# Список всех интерфейсных заголовков
HEADERS += \
    include/core/CommandManager.h \
    include/core/ComponentFactory.h \
    include/core/ICommand.h \
    include/core/IComponent.h \
    include/core/IPlugin.h \
    include/core/PluginManager.h \
    include/core/State.h \
    include/core/StateManager.h

# Источников нет, т.к. это только интерфейсы
# Если позже добавятся .cpp — добавьте их сюда:
# SOURCES += src/YourImplementation.cpp
