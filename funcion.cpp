#include "funcion.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <time.h>
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
    //std::cout<<min<<endl;
    lista->agregarDato(min);
    while(min!=NULL){
        min=strtok(NULL,"+");
        //std::cout<<min<<endl;
        if(min!=NULL){
            lista->agregarDato(min);
        }
    }
}

bool Funcion::evaluar(bool a, bool b, bool c, bool d){
    bool arr[lista->longitud()];
    int contador = 0;
    while(contador < lista->longitud()){
        bool resultado = false;
        string s = lista->iesimo(contador+1)->getDato();
        for(string::size_type x = 0; x < s.length(); x++){
            char p = s[x];
            char n;
            if(x<s.length()){
                n = s[x+1];
            }
            if(x==0 && p=='A'){
                if(n!='\''){
                    resultado = a;
                }else{
                    resultado = !a;
                }
            }
            if(x==0 && p=='B'){
                if(n!='\''){
                    resultado = b;
                }else{
                    resultado = !b;
                }
            }
            if(x==0 && p=='C'){
                if(n!='\''){
                    resultado = c;
                }else{
                    resultado = !c;
                }
            }
            if(x==0 && p=='D'){
                if(n!='\''){
                    resultado = d;
                }else{
                    resultado = !d;
                }
            }
            if(x>0 && p=='A'){
                if(n!='\''){
                    resultado = resultado && a;
                }else{
                    resultado = resultado && !a;
                }
            }
            if(x>0 && p=='B'){
                if(n!='\''){
                    resultado = resultado && b;
                }else{
                    resultado = resultado && !b;
                }
            }
            if(x>0 && p=='C'){
                if(n!='\''){
                    resultado = resultado && c;
                }else{
                    resultado = resultado && !c;
                }
            }
            if(x>0 && p=='D'){
                if(n!='\''){
                    resultado = resultado && d;
                }else{
                    resultado = resultado && !d;
                }
            }
        }
        arr[contador] = resultado;
        contador++;
    }
    bool evaluar=arr[0];
    int x = 1;
    while(x<lista->longitud() && lista->longitud()>1){
        evaluar+=arr[x];
        x++;
    }
    return evaluar;
}

string Funcion::getDate(){
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y.%X", &tstruct);
    return buf;
}
