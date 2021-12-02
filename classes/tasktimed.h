#ifndef TASKTIMED_H
#define TASKTIMED_H

#include "task.h"

class TaskTimed : public Task
{
public:
    TaskTimed(const QString name_ = "Default Name");
};

#endif // TASKTIMED_H
