#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H

#include <vector>
#include "ICommand.h"

class CommandManager {
public:
    void executeCommand(std::unique_ptr<ICommand> cmd);
    void undo();
    void redo();
private:
    std::vector<std::unique_ptr<ICommand>> undoStack;
    std::vector<std::unique_ptr<ICommand>> redoStack;
};

#endif // COMMANDMANAGER_H