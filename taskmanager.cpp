#include "taskmanager.h"

TaskManager::TaskManager(QWidget *parent) : QWidget(parent)
{
    init();
    initTasks();
}

QMenu* TaskManager::deployMenu()
{
    QMenu *menu = new QMenu();
    for (int ind=0;ind<taskControllers.count();ind++) {
        menu->addMenu(taskControllers[ind]->task->menu);
    }
    return menu;
}

void TaskManager::initTasks()
{
    Task *task1 = (Task*)NewBaseObject("TaskObjPrinter");
    taskControllers.append(new TaskController(task1));

    Task *task2 = (Task*)NewBaseObject("TaskObjSearcher");
    taskControllers.append(new TaskController(task2));
}
