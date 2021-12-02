#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QWidget>
#include <QMenu>

#include "taskcontroller.h"
#include "classes/allclasses.h"

class TaskManager : public QWidget
{
    Q_OBJECT
public:
    TaskManager(QWidget *parent = nullptr);

    QMenu* deployMenu();

    QList<TaskController*> taskControllers;

private:
    void initTasks();
};

#endif // TASKMANAGER_H
