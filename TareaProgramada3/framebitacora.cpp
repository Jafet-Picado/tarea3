#include "framebitacora.h"
#include "ui_framebitacora.h"
<<<<<<< HEAD
=======
#include <string>
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)

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

<<<<<<< HEAD
void frameBitacora::setFuncion(QStringListModel* m){
    ui->listView->setModel(m);
=======
void frameBitacora::setFuncion(std::string m){
    ui->textEdit->setText(QString::fromStdString(m));
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
}
