#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include <QHash>
#include <QDebug>

#include "classfactory.h"
#include "objectbase.h"


#define RegisterObject(object_type) \
    ObjectFactory::instance()->registerObject<object_type>(#object_type);

#define UnregisterObject(object_type) \
    ObjectFactory::instance()->unregisterObject(#object_type);

#define NewBaseObject(object_name) \
    ObjectFactory::instance()->instantiateObjectBase(object_name);

#define NewKnownObject(object_type) \
    ObjectFactory::instance()->instantiateObject<object_type>(#object_type);

class ObjectFactory
{
public:
    static ObjectFactory *instance();

    template<typename T> void registerObject( const QString &className );
    bool unregisterObject( const QString &className );
    template<typename T> T* instantiateObject( const QString& className);
    ObjectBase *instantiateObjectBase( const QString &className);
    bool isObjectRegistered( const QString &className );

private:
    ObjectFactory(){}

    ~ObjectFactory();

    typedef QHash<QString, ObjectFactoryInterface*> ObjectFactoryMapType;
    ObjectFactoryMapType m_ObjectMap;
};

template <typename T>
void ObjectFactory::registerObject( const QString& className ) {
    if (!isObjectRegistered(className)) {
        m_ObjectMap.insert(className, new ClassFactory<T>);
    }
}

template <typename T>
T *ObjectFactory::instantiateObject( const QString& className) {
    if (!isObjectRegistered(className)) {
        this->registerObject<T>(className);
    }
    QObject *obj = m_ObjectMap.value(className)->make(className);
    return qobject_cast<T *>(obj);
}

#endif // OBJECTFACTORY_H
