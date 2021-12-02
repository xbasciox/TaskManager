#ifndef TRIGGERTASK_H
#define TRIGGERTASK_H

#include "trigger.h"
#include "commandtask.h"

class TriggerTask : public Trigger
{
public:
    TriggerTask(const QString triggerCode_ = "Default Code", Task *task_ = nullptr);
    void sendCommand();

    // Trigger interface
    virtual void setup(QVariantHash settings) = 0;
    virtual void modifyLayer(QVariantHash settings) = 0;
    void modify(QVariantHash settings);


    void setCommandTask(Task *newTask);

private:
    CommandTask *task;
};

#endif // TRIGGERTASK_H
