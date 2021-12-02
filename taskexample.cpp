#include "taskexample.h"

#include <QDebug>

TaskExample::TaskExample()
    :ObjectBase()
{
    toDo();
}

void TaskExample::toDo()
{
    qDebug() << "TaskExample -> toDo";
}
