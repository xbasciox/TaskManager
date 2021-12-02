#ifndef TASKEXAMPLE_H
#define TASKEXAMPLE_H

#include "objectbase.h"

class TaskExample : public ObjectBase
{
    Q_OBJECT
public:
    TaskExample();
    void toDo();
};

#endif // TASKEXAMPLE_H
