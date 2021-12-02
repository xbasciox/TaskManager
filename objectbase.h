#ifndef OBJECTBASE_H
#define OBJECTBASE_H

#include <QObject>

class ObjectBase : public QObject
{
    Q_OBJECT
public:
    ObjectBase();
    //virtual ~ObjectBase(){}
};

#endif // OBJECTBASE_H
