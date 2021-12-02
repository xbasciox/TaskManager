#include "tasktimedperiodic.h"

TaskTimedPeriodic::TaskTimedPeriodic(const QString name_)
    :TaskTimed(name_)
{
    periodic = true;
    triggerSettings.insert("periodic",periodic);
    triggerType.append("TriggerTaskTimedPeriodic");

    setupLayerMenu(menu);
}

QMenu *TaskTimedPeriodic::setupLayerMenu(QMenu *menu_) const
{
    QAction *periodic = new QAction("Periodic");
    periodic->setCheckable(true);
    periodic->setChecked(getPeriodic());
    connect(periodic,&QAction::triggered,this,&TaskTimedPeriodic::changePeriodic);
    menu_->addAction(periodic);
    return menu_;
}

void TaskTimedPeriodic::changePeriodic()
{
    periodic = !periodic;
    triggerSettings["periodic"] = periodic;

    emit triggerSettingsChanged();
}

bool TaskTimedPeriodic::getPeriodic() const
{
    return periodic;
}

void TaskTimedPeriodic::setPeriodic(bool newPeriodic)
{
    periodic = newPeriodic;
}

int TaskTimedPeriodic::getPeriodicTime() const
{
    return periodicTime;
}

void TaskTimedPeriodic::setPeriodicTime(int newPeriodicTime)
{
    periodicTime = newPeriodicTime;
}
