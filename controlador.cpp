#include "controlador.h"
#include "mainwindow.h"

Controlador::Controlador(){
    w = new MainWindow(nullptr);
    w->setControlador(this);
    w->show();
}

void Controlador::setHilera(QString hilera){
    f = new Funcion();
    f->agregarMinTerminos(hilera.toStdString());
}

void Controlador::evaluar(bool a, bool b, bool c, bool d){
    //f->evaluar(a,b,c,d);
}
