#include "taskobjsearcher.h"

#include <QDebug>

TaskObjSearcher::TaskObjSearcher(const QString name_)
    : TaskTimedPeriodic(name_)
{
    menu->setTitle("Searcher");
    fileName = "C:Esempio.txt";

    setPeriodicTime(5000);
    triggerSettings.insert("periodicTime",getPeriodicTime());
}

void TaskObjSearcher::toDo() const
{
    qDebug() << "Searcher: Looking for file named " << fileName;
}
