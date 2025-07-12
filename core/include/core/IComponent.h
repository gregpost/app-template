#ifndef ICOMPONENT_H
#define ICOMPONENT_H

class IComponent {
public:
    virtual ~IComponent() = default;
    virtual void initialize() = 0;
};

#endif // ICOMPONENT_H