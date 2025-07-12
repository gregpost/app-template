// MyGraphicsView.h
#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>
#include "../../core/include/core/StateManager.h"
#include "../../core/include/core/CommandManager.h"

class MyGraphicsView : public QGraphicsView {
    Q_OBJECT
public:
    explicit MyGraphicsView(QWidget *parent = nullptr);
    void setStateManager(core::StateManager *sm);
    void setCommandManager(core::CommandManager *cm);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private:
    core::StateManager *stateMgr;
    core::CommandManager *cmdMgr;
};

#endif // MYGRAPHICSVIEW_H