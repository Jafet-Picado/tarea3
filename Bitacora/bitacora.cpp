#include "bitacora.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void Bitacora::insertarFuncion(string s){
    ofstream archivo;
    archivo.open("Bitacora.txt", ios::out);
    if(!archivo){
        cout<<"Error al crear/abrir el archivo"<<endl;
    }else{
        archivo<<s;
    }
    archivo.close();
}

string Bitacora::leerArchivo(){
    fstream archivo;
    string texto;
    string hilera;
    archivo.open("Bitacora.txt", ios::in);
    if(!archivo){
      cout<<"No se pudo abrir el archivo"<<endl;
    }else{
        while(!archivo.eof()){
           getline(archivo, texto);
           hilera+=texto+"\n";
           texto="";
        }
    }
    archivo.close();
    return texto;
}
