#include "bitacora.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

Bitacora::Bitacora(){
    m = new QStringListModel();
}

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

QStringListModel* Bitacora::leerArchivo(){
    fstream archivo;
    string texto;
    archivo.open("Bitacora.txt", ios::in);
    if(!archivo.eof()){
      cout<<"No se pudo abrir el archivo"<<endl;
    }else{
        while(!archivo.eof()){
           getline(archivo, texto);
           m->insertRows(0,1);
           m->setData(m->index(0),texto.c_str());
           texto="";
        }
    }
    archivo.close();
    return m;
}
