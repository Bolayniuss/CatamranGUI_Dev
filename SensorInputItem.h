#ifndef SENSORINPUTITEM_H
#define SENSORINPUTITEM_H

#include <QVector>
#include <QString>

class SensorInputItem
{
public:
	SensorInputItem();
	SensorInputItem *getParent() const;
	void setParent(SensorInputItem *pParent);

	QVector<SensorInputItem *> childs() const;
	void setChilds(const QVector<SensorInputItem *> &childs);
	void addChild(SensorInputItem *child);
	SensorInputItem *removeChild(int index);
	SensorInputItem *child(int index) const;

	QString getName() const;

protected:
	SensorInputItem *m_pParent;
	QVector<SensorInputItem *> m_childs;
	QString name;
};

#endif // SENSORINPUTITEM_H
