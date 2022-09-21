#ifndef QFLEXIBLEJSONOBJECT_H
#define QFLEXIBLEJSONOBJECT_H

#include <QJsonValue>
#include <QJsonObject>

class QFlexibleJsonObject
{
public:
    static QJsonValue value(const QJsonObject &object, const QString &key);
    QFlexibleJsonObject() = delete;
};

#endif // QFLEXIBLEJSONOBJECT_H
