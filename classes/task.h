#ifndef TASK_H
#define TASK_H

#include <QMenu>
#include <QHash>

#include <objectbase.h>

class Task : public ObjectBase
{
    Q_OBJECT
public:
    Task(const QString name_ = "Default Name");
    virtual void toDo() const = 0;
    virtual QMenu* setupLayerMenu(QMenu* menu_) const = 0;

    QMenu* setupMenu(QMenu* menu_);
    void changeActive();

    QMenu* menu;
    QVariantHash triggerSettings;
    QList<QString> triggerType;
    QString name;
    bool active;

signals:
    void activeChanged();
    void triggerSettingsChanged();
};

#endif // TASK_H
