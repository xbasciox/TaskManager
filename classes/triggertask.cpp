#include "triggertask.h"

#include <QDebug>

TriggerTask::TriggerTask(const QString triggerCode_,Task *task_)
    : Trigger(triggerCode_)
{
    task = new CommandTask();
    task->receiverTask = task_;
}

void TriggerTask::sendCommand()
{
    if(active)
        task->execute();
}

void TriggerTask::modify(QVariantHash settings)
{
    active = settings.value("active").toBool();
    modifyLayer(settings);
}

void TriggerTask::setCommandTask(Task *newTask)
{
    task = new CommandTask();
    task->receiverTask = newTask;
}
