#include "qflexiblejsonobject.h"

QJsonValue QFlexibleJsonObject::value(const QJsonObject &object, const QString &key)
{
    for (const QString &currentKey : object.keys())
    {
        if (currentKey.toLower() == key.toLower())
        {
            return object.value(currentKey);
        }
    }
    return QJsonValue();
}
