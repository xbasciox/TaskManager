#include "taskobjprinter.h"

#include <QDebug>

TaskObjPrinter::TaskObjPrinter(const QString name_)
    :TaskTimedPeriodic(name_)
{
    menu->setTitle("Printer");
    text = "Printer : Printing...";
    setPeriodicTime(3000);
    triggerSettings.insert("periodicTime",getPeriodicTime());
    setupLayerMenu(menu);
}

void TaskObjPrinter::toDo() const
{
    qDebug() << text;
}

QMenu *TaskObjPrinter::setupLayerMenu(QMenu *menu_) const
{
    /*
    *
    *   add here printer menu
    *
    */
    return menu_;
}

