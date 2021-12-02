#ifndef CLASSFACTORY_H
#define CLASSFACTORY_H

#include "objectfactoryinterface.h"

#include <QDebug>

template<class F> class ClassFactory : public ObjectFactoryInterface
{
public:
    ObjectBase* make(const QString str = "Default") const;
};

template<class F> ObjectBase* ClassFactory<F>::make(const QString str) const {
    return new F(str);
}


#endif // CLASSFACTORY_H
