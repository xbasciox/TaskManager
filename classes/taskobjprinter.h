#ifndef TASKOBJPRINTER_H
#define TASKOBJPRINTER_H

#include "tasktimedperiodic.h"

class TaskObjPrinter : public TaskTimedPeriodic
{
public:
    TaskObjPrinter(const QString name_ = "Default Name");

    // Task interface
    void toDo() const override;
    QMenu *setupLayerMenu(QMenu *menu_) const override;

    QString text;
protected:
    ~TaskObjPrinter(){};
};

#endif // TASKOBJPRINTER_H
