#include "controlador.h"
#include "mainwindow.h"
#include <iostream>
Controlador::Controlador(){
    w = new MainWindow(nullptr);
    w->setControlador(this);
    w->show();
    bit = new Bitacora();
}
void Controlador::setHilera(QString hilera){
    f = new Funcion();
    f->agregarMinTerminos(hilera.toStdString());
}

string Controlador::evaluar(bool a, bool b, bool c, bool d){
    string s = f->getHilera();
    s += " = ";
    if(f->evaluar(a,b,c,d)){
        s+= "1";
    }else{
        s+= "0";
    }
    return s;
}

void Controlador::guardarArchivo(){
    bit->insertarFuncion(f->getHileraG());
}

string Controlador::leerArchivo(){
    return bit->leerArchivo();
}
