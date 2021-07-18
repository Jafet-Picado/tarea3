#include "framebitacora.h"
#include "ui_framebitacora.h"
#include <string>

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

void frameBitacora::setFuncion(std::string m){
    ui->textEdit->setText(QString::fromStdString(m));
}
