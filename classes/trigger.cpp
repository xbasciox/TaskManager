#include "trigger.h"

Trigger::Trigger(const QString triggerCode_)
{
    triggerCode = triggerCode_;
    active = true;
}

const QString &Trigger::getTriggerCode() const
{
    return triggerCode;
}

void Trigger::setTriggerCode(const QString &newTriggerCode)
{
    triggerCode = newTriggerCode;
}
