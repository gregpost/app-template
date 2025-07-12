// MainWindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../core/include/core/StateManager.h"
#include "../../core/include/core/CommandManager.h"
#include "../../core/include/core/PluginManager.h"
#include "../../business/include/business/VideoController.h"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    business::VideoController *controller;
    core::StateManager stateMgr;
    core::CommandManager cmdMgr;
    core::PluginManager pluginMgr;
};