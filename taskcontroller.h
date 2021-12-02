#ifndef TASKCONTROLLER_H
#define TASKCONTROLLER_H

#include <QObject>
#include "classes/allclasses.h"
#include "classes/task.h"
#include "classes/triggertask.h"

class TaskController : public QObject
{
    Q_OBJECT
public:
    TaskController(Task *task_ = nullptr);

    void activeChanged();
    void destroyAllTriggers();

    Task *task;
    QList<TriggerTask*> triggers;

private:
    void setupTriggers();
    void setupConnects();
    void modifyTriggers();

};

#endif // TASKCONTROLLER_H
