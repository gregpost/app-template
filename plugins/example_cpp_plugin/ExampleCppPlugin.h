// ExampleCppPlugin.h
#ifndef EXAMPLECPPPLUGIN_H
#define EXAMPLECPPPLUGIN_H

#include "../../core/include/core/IPlugin.h"

class ExampleCppPlugin : public IPlugin {
public:
    QString name() const override { return "CPP Plugin"; }
    void initialize() override { /* ... */ }
};

#endif // EXAMPLECPPPLUGIN_H