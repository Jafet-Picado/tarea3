#include "framebitacora.h"
#include "ui_framebitacora.h"

frameBitacora::frameBitacora(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frameBitacora)
{
    ui->setupUi(this);
}

frameBitacora::~frameBitacora()
{
    delete ui;
}

void frameBitacora::setFuncion(QStringListModel* m){
    ui->listView->setModel(m);
}
