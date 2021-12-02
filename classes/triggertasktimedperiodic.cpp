#include "triggertasktimedperiodic.h"

#include <QDebug>

TriggerTaskTimedPeriodic::TriggerTaskTimedPeriodic(const QString triggerCode_, Task *task_)
    : TriggerTaskTimed(triggerCode_,task_)
{
    periodicTime = 10000;
    periodic = true;
}

void TriggerTaskTimedPeriodic::setup(QVariantHash settings)
{
    periodicTime = settings.value("periodicTime").toInt();
    start();
}

void TriggerTaskTimedPeriodic::modifyLayer(QVariantHash settings)
{
    periodic = settings.value("periodic").toBool();
    if(periodic)
        start();
    else
        stop();
}

void TriggerTaskTimedPeriodic::sendCommand()
{
    if(periodic){
        TriggerTask::sendCommand();
    }
}

void TriggerTaskTimedPeriodic::stop()
{
    triggerTimer->stop();
}

void TriggerTaskTimedPeriodic::start()
{
    triggerTimer = new QTimer(this);
    triggerTimer->setInterval(periodicTime);
    connect(triggerTimer,&QTimer::timeout,this,&TriggerTaskTimedPeriodic::sendCommand);
    triggerTimer->start();
}

