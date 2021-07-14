#include "lista.h"
#include "iostream"
#include "MinTermino.h"
using namespace std;

void Lista::agregarDato(string d) {
  MinTermino *n = cabeza;
  if (n==nullptr) {
    cabeza = new MinTermino(d);
  } else {
    while (n->getSiguiente()!=nullptr) {
      n = n->getSiguiente() ;
    }
    n->setSiguiente(new MinTermino(d));
    n->getSiguiente();
  }

}


int Lista::longitud() {
  int resultado=1 ;
  MinTermino *n= cabeza->getSiguiente() ;
  while (n!=nullptr ){
    n= n->getSiguiente() ;
    resultado++ ;
  }
  return resultado ;
}

MinTermino* Lista::iesimo(int posicion){
  MinTermino *resultado = cabeza;
  if(posicion<=longitud()){
    if(posicion>1 && resultado->getSiguiente()!=nullptr){
      resultado = iesimoRecursivo(posicion, 2, resultado->getSiguiente());
    }
  }
  return resultado;
}

MinTermino* Lista::iesimoRecursivo(int posicion, int contador, MinTermino* x){
  MinTermino *resultado = x;
  if(contador<posicion){
    resultado =  iesimoRecursivo(posicion, contador+1, x->getSiguiente());
  }
  return resultado;
}
