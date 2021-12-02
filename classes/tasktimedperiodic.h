#ifndef TASKTIMEDPERIODIC_H
#define TASKTIMEDPERIODIC_H

#include "tasktimed.h"

class TaskTimedPeriodic : public TaskTimed
{
public:
    TaskTimedPeriodic(const QString name_ = "Default Name");

    //Task interface
    QMenu *setupLayerMenu(QMenu *menu_) const override;

    void changePeriodic();

    //Getter and Setter
    bool getPeriodic() const;
    void setPeriodic(bool newPeriodic);
    int getPeriodicTime() const;
    void setPeriodicTime(int newPeriodicTime);

private:
    bool periodic;
    int periodicTime;
};

#endif // TASKTIMEDPERIODIC_H
