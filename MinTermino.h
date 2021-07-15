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
