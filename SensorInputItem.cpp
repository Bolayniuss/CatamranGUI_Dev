#include "SensorInputItem.h"

SensorInputItem::SensorInputItem()
{
}

SensorInputItem *SensorInputItem::parent() const
{
	return m_pParent;
}

void SensorInputItem::setParent(SensorInputItem *pParent)
{
	m_pParent = pParent;
}
QVector<SensorInputItem *> SensorInputItem::childs() const
{
	return m_childs;
}

void SensorInputItem::setChilds(const QVector<SensorInputItem *> &childs)
{
	m_childs = childs;
}

void SensorInputItem::addChild(SensorInputItem *child)
{
	m_childs.append(child);
}

SensorInputItem *SensorInputItem::removeChild(int index)
{
	SensorInputItem *c = childs[index];
	m_childs.remove(index);
	return c;
}

SensorInputItem *SensorInputItem::child(int index) const
{
	return m_childs[index];
}

QString SensorInputItem::getName() const
{
	return name;
}




