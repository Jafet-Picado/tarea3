#include "funcion.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
Funcion::Funcion()
{
    lista = new Lista();
}

void Funcion::agregarMinTerminos(string hilera){
    this->hilera=hilera;
    char arr[hilera.length()];
    for (string::size_type x = 0; x < hilera.length(); x++) {
        arr[x] = hilera[x];
    }
    char* min = strtok(arr, "+");
    std::cout<<min<<endl;
    lista->agregarDato(min);
    while(min!=NULL){
        min=strtok(NULL,"+");
        std::cout<<min<<endl;
        if(min!=NULL){
            lista->agregarDato(min);
        }
    }
}
