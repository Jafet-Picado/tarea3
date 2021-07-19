#ifndef FUNCION_H
#define FUNCION_H
#include "lista.h"

class Funcion
{
    Lista *lista;
    string hilera;
    string hileraG;
    string hileraF;
public:
    Funcion();
    void agregarMinTerminos(string hilera);
    bool evaluar(bool a, bool b, bool c, bool d);
    string getHilera(){return hilera;};
    string getDate();
    string getHileraG(){return hileraG;};
    string getHileraF(){return hileraF;};
    string getMinTermino(int i){return lista->iesimo(i)->getDato();};
    int size(){return lista->longitud();};
};

#endif // FUNCION_H
