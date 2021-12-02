#include "task.h"

Task::Task(const QString name_)
{
    name = name_;
    active=true;
    triggerSettings.insert("active",active);

    menu = new QMenu(name);
    menu = setupMenu(menu);
}

QMenu* Task::setupMenu(QMenu* menu_)
{
    QAction *activeAction = new QAction("Active");
    activeAction->setCheckable(true);
    activeAction->setChecked(active);
    connect(activeAction,&QAction::triggered,this,&Task::changeActive);
    menu_->addAction(activeAction);
    return menu_;
}

void Task::changeActive()
{
    active = !active;

    emit activeChanged();
}
