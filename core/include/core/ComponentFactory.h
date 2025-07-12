#ifndef COMPONENTFACTORY_H
#define COMPONENTFACTORY_H

#include <memory>
#include <string>
#include "IComponent.h"

class ComponentFactory {
public:
    static std::unique_ptr<IComponent> create(const std::string &name);
};

#endif // COMPONENTFACTORY_H