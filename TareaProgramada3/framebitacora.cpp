/*
 * Clase de tipo ventana gráfica nativa de Qt para las funciones de la vista de Bitacora
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
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

/*
 * Método encargado de mostrar la hilera de la bitacora en un textEdit
 *
 * Args: Recibe un parametro de tipo string con la hilera a mostrar
 */
void frameBitacora::setFuncion(std::string m){
    ui->textEdit->setText(QString::fromStdString(m));
}
