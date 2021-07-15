#include "framebitacora.h"
#include "ui_framebitacora.h"

frameBitacora::frameBitacora(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frameBitacora)
{
    ui->setupUi(this);
    m = new QStringListModel;
}

frameBitacora::~frameBitacora()
{
    delete ui;
}

void frameBitacora::setFuncion(QString s){
    m->insertRows(0,1);
    m->setData(m->index(0),s);
    ui->listView->setModel(m);
}
