#ifndef TRIGGERTASKTIMEDPERIODIC_H
#define TRIGGERTASKTIMEDPERIODIC_H

#include <QTimer>

#include "triggertasktimed.h"

class TriggerTaskTimedPeriodic : public TriggerTaskTimed
{
public:
    TriggerTaskTimedPeriodic(const QString triggerCode_ = "Default Code", Task *task_ = nullptr);

    // Trigger interface
    void setup(QVariantHash settings) override;
    void modifyLayer(QVariantHash settings) override;
    void modify(QVariantHash settings);
    void sendCommand();

    void stop();
    void start();

private:
    int periodicTime;
    bool periodic;
    QTimer *triggerTimer;


};

#endif // TRIGGERTASKTIMEDPERIODIC_H
