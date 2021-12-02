#include "commandtask.h"

CommandTask::CommandTask(const QString commandCode_)
    : Command(commandCode_)
{

}

void CommandTask::execute() const
{
    /*
     *
     * HERE CAN LINK TO A COMMAND LOGGER
     *
     * */
    receiverTask->toDo();
}
