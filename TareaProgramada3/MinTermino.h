/*
 * Clase de MinTermino donde se almacena una hilera de tipo string con el minTermino y además se enlaza con el
 * puntero del siguiente minTermino
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#ifndef MINTERMINO_H
#define MINTERMINO_H
#include <string>
using namespace std;
class MinTermino{
     string dato;
     MinTermino *siguiente ;

    public:
     MinTermino() {dato=""; siguiente=nullptr;}
     MinTermino(string d) { dato=d ; siguiente= nullptr ;};
     string getDato() { return dato ;} ;
     void setDato(string d) { dato= d;} ;
     MinTermino* getSiguiente() { return siguiente ; } ;
     void setSiguiente(MinTermino* s) { siguiente= s ; } ;
};
#endif // MINTERMINO_H
