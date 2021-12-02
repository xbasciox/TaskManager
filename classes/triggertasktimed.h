#ifndef TRIGGERTASKTIMED_H
#define TRIGGERTASKTIMED_H

#include "triggertask.h"

class TriggerTaskTimed : public TriggerTask
{
public:
    TriggerTaskTimed(const QString triggerCode_ = "Default Code", Task *task_ = nullptr);

    // Trigger interface
    virtual void setup(QVariantHash settings) = 0;
};

#endif // TRIGGERTASKTIMED_H
