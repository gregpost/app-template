#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <vector>
#include <memory>
#include "IPlugin.h"

class PluginManager {
public:
    void loadPlugins(const QString &path);
    void initializeAll();
private:
    std::vector<std::unique_ptr<IPlugin>> plugins;
};

#endif // PLUGINMANAGER_H