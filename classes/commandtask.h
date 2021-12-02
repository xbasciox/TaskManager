#ifndef COMMANDTASK_H
#define COMMANDTASK_H

#include "command.h"
#include "task.h"

class CommandTask : public Command
{
public:
    CommandTask(const QString commandCode_ = "Default Code");

    // Command interface
    void execute() const override;

    Task *receiverTask;

protected:
    ~CommandTask(){};
};

#endif // COMMANDTASK_H
