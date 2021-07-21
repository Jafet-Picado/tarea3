/*
 * Clase de Lista para almacenar todos los minTerminos de la función
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
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
    MinTermino *iesimoRecursivo(int i, int l, MinTermino* x);
};

#endif // LISTA_H
