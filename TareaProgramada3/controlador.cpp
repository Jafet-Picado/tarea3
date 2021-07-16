#include "controlador.h"
#include "mainwindow.h"
#include <iostream>
string p;
Controlador::Controlador(){
    w = new MainWindow(nullptr);
    w->setControlador(this);
    w->show();
    bit = new Bitacora();
}
void Controlador::setHilera(QString hilera){
    f = new Funcion();
    f->agregarMinTerminos(hilera.toStdString());
    p+=f->getHileraG();
}

string Controlador::evaluar(bool a, bool b, bool c, bool d){
    string s = f->getHilera();
    s += " = ";
    if(f->evaluar(a,b,c,d)){
        s+= "1";
    }else{
        s+= "0";
    }
    p+=f->getHileraF();
    return s;
}

void Controlador::guardarArchivo(){
    bit->insertarFuncion(p);
}

void Controlador::leerArchivo(){
    QStringListModel *m = bit->leerArchivo();
    w->setBitacora(m);
}



