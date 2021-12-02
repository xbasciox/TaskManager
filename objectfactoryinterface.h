#ifndef OBJECTFACTORYINTERFACE_H
#define OBJECTFACTORYINTERFACE_H

#include "objectbase.h"


class ObjectFactoryInterface
{
public:
    virtual ~ObjectFactoryInterface();
    virtual ObjectBase* make(const QString str = "Default") const = 0;
};

#endif // OBJECTFACTORYINTERFACE_H
