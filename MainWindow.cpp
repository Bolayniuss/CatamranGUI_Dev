#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "SensorInputsModel.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

    SensorInputsModel *model = new SensorInputsModel();
    model->addInput(new SensorInputItem("first"));
    model->addInput(new SensorInputItem("second"));
    model->addInput(new SensorInputItem("third"));
    model->addInput(new SensorInputItem("first"), (SensorInputItem *)model->index(1,0, QModelIndex()).internalPointer());

    ui->availableSensorInputs->setModel(model);
    model->addInput(new SensorInputItem("second"), (SensorInputItem *)model->index(1,0, QModelIndex()).internalPointer());
}

MainWindow::~MainWindow()
{
	delete ui;
}
