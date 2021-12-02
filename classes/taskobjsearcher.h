#ifndef TASKOBJSEARCHER_H
#define TASKOBJSEARCHER_H

#include "tasktimedperiodic.h"

class TaskObjSearcher : public TaskTimedPeriodic
{
public:
    TaskObjSearcher(const QString name_ = "Default Name");

    // Task interface
    void toDo() const override;

    QString fileName;
};


#endif // TASKOBJSEARCHER_H
