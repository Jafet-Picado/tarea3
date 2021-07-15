#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "funcion.h"
#include <QString>

class MainWindow;

class Controlador
{
    MainWindow *w;
    Funcion *f;
public:
    Controlador();
    void setHilera(QString hilera);
    void evaluar(bool a, bool b, bool c, bool d);
};

#endif // CONTROLADOR_H
