#include "SensorInputItem.h"

SensorInputItem::SensorInputItem(QString name, SensorInputItem *pParent):m_pParent(pParent), m_name(name)
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
    child->setParent(this);
}

void SensorInputItem::insertChild(SensorInputItem *child, int pos)
{
    m_childs.insert(pos, child);
}

SensorInputItem *SensorInputItem::removeChild(int index)
{
    SensorInputItem *c = m_childs[index];
    m_childs.remove(index);
    return c;
}

SensorInputItem *SensorInputItem::child(int index) const
{
    return m_childs[index];
}

QString SensorInputItem::name() const
{
    return m_name;
}

void SensorInputItem::setName(QString name)
{
    m_name = name;
}

int SensorInputItem::childCount() const
{
    return m_childs.count();
}

int SensorInputItem::childNumber() const
{
    if(m_pParent){
        return m_pParent->childs().indexOf(const_cast<SensorInputItem *>(this));

    }
    return -1;
}




