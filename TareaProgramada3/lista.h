#ifndef LISTA_H
#define LISTA_H
#include "MinTermino.h"


class Lista{
    MinTermino *cabeza;

  public:
    Lista(){cabeza=nullptr;};
    ~Lista() { delete cabeza ; } ;
    void agregarDato(string d) ;
    MinTermino* iesimo(int i) ;
    int longitud() ;
    void mostrarLista(int d);
    MinTermino *iesimoRecursivo(int i, int l, MinTermino* x);
};

#endif // LISTA_H
