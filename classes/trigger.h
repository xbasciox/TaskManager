#ifndef TRIGGER_H
#define TRIGGER_H

#include <QHash>

#include <objectbase.h>

class Trigger : public ObjectBase
{
    Q_OBJECT
public:
    Trigger(const QString triggerCode_ = "Default Code");
    virtual void setup(QVariantHash settings) = 0;

    bool active;

    //Getter and Setter
    const QString &getTriggerCode() const;
    void setTriggerCode(const QString &newTriggerCode);

private:
    QString triggerCode;
};

#endif // TRIGGER_H
