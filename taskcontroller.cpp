#include "taskcontroller.h"

#include <QDebug>

TaskController::TaskController(Task *task_)
    : QObject(),
      task(task_)
{
    init();
    setupTriggers();
    setupConnects();
}

void TaskController::activeChanged()
{
    if(task->active){
        setupTriggers();
    }else{
        destroyAllTriggers();
    }

}

void TaskController::destroyAllTriggers()
{
    qDeleteAll(triggers);
}

void TaskController::setupTriggers()
{
    for (int ind=0;ind<task->triggerType.count(); ind++) {
        TriggerTask *triggerTask = (TriggerTask*)NewBaseObject(task->triggerType[ind]);
        triggerTask->setCommandTask(task);
        triggerTask->setup(task->triggerSettings);
        triggers.append(triggerTask);
    }
}

void TaskController::setupConnects()
{
    connect(task,&Task::activeChanged,this,&TaskController::activeChanged);
    connect(task,&Task::triggerSettingsChanged,this,&TaskController::modifyTriggers);
}

void TaskController::modifyTriggers()
{

    for (int i=0;i<triggers.count();i++) {
        triggers[i]->modify(task->triggerSettings);
    }
}

