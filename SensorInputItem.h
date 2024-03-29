#ifndef SENSORINPUTITEM_H
#define SENSORINPUTITEM_H

#include <QVector>
#include <QString>

class SensorInputItem
{
public:
    SensorInputItem(QString name, SensorInputItem *pParent = NULL);
    SensorInputItem *parent() const;
    void setParent(SensorInputItem *pParent);

    QVector<SensorInputItem *> childs() const;
    void setChilds(const QVector<SensorInputItem *> &childs);
    void addChild(SensorInputItem *child);
    void insertChild(SensorInputItem *child, int pos);
    SensorInputItem *removeChild(int index);
    SensorInputItem *child(int index) const;

    QString name() const;
    void setName(QString name);


    int childCount() const;
    int childNumber() const;

protected:
    SensorInputItem *m_pParent;
    QVector<SensorInputItem *> m_childs;
    QString m_name;
};

#endif // SENSORINPUTITEM_H
