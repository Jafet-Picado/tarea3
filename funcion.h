#ifndef FUNCION_H
#define FUNCION_H
#include "lista.h"

class Funcion
{
    Lista *lista;
    string hilera;
public:
    Funcion();
    void agregarMinTerminos(string hilera);
    bool evaluar(bool a, bool b, bool c, bool d);
    string getHilera(){return hilera;};
};

#endif // FUNCION_H
