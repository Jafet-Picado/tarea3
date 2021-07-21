/*
 * Clase controlador utilizada para realizar el modelo MVC
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "funcion.h"
#include <QString>
#include "bitacora.h"

class MainWindow;

class Controlador
{
    MainWindow *w;
    Funcion *f;
    Bitacora *bit;
public:
    Controlador();
    void setHilera(QString hilera);
    string evaluar(bool a, bool b, bool c, bool d);
    void guardarArchivo();
    string leerArchivo();
    string* getTerminos();
    int getSize(){ return f->size();};
};

#endif // CONTROLADOR_H
