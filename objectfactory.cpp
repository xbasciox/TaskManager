#include "objectfactory.h"

#include <QDebug>

ObjectFactory* ObjectFactory::instance()
{
    static ObjectFactory instanceObjectFactory;
    return &instanceObjectFactory;
}

bool ObjectFactory::unregisterObject(const QString &className)
{
    int res = m_ObjectMap.remove(className);
    return res != 0;
}

bool ObjectFactory::isObjectRegistered( const QString &className ) {
    return m_ObjectMap.contains(className);
}


ObjectBase* ObjectFactory::instantiateObjectBase(const QString &className)
{
    // Check the existence of object type into the hash and then return its instance.
    if (isObjectRegistered(className)) {
        return m_ObjectMap.value(className)->make(className);
    } else {
        qWarning() << "Can not create object instance of type: " << className;
        return NULL;
    }
}

ObjectFactory::~ObjectFactory()
{

}


