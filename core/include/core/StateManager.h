#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <vector>
#include "State.h"

class StateManager {
public:
    void pushState(const State &s);
    void popState();
    const State& current() const;
private:
    std::vector<State> stack;
};

#endif // STATEMANAGER_H