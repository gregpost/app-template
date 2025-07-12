#ifndef IPLUGIN_H
#define IPLUGIN_H

#include <QString>

class IPlugin {
public:
    virtual ~IPlugin() = default;
    virtual QString name() const = 0;
    virtual void initialize() = 0;
};

#endif // IPLUGIN_H