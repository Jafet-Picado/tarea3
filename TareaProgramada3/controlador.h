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
<<<<<<< HEAD
    void leerArchivo();
    void sHileraG();
=======
    string leerArchivo();
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
};

#endif // CONTROLADOR_H
