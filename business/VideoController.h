#ifndef VIDEOCONTROLLER_H
#define VIDEOCONTROLLER_H

#include <QObject>
#include "../core/include/core/ICommand.h"

class VideoController : public QObject {
    Q_OBJECT
public:
    explicit VideoController(QObject *parent = nullptr);
    void play();
    void pause();
    // ...
};

#endif // VIDEOCONTROLLER_H