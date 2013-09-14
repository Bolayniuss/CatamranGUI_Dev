#ifndef SENSORINPUTSMODEL_H
#define SENSORINPUTSMODEL_H

#include <QAbstractItemModel>

class SensorInputsModel : public QAbstractItemModel
{
	Q_OBJECT
public:
	explicit SensorInputsModel(QObject *parent = 0);

signals:

public slots:

};

#endif // SENSORINPUTSMODEL_H
