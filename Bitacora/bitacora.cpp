#include "bitacora.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

Bitacora::Bitacora(){
<<<<<<< HEAD
    m = new QStringListModel();
=======
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
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

<<<<<<< HEAD
QStringListModel* Bitacora::leerArchivo(){
    fstream archivo;
    string texto;
    archivo.open("Bitacora.txt", ios::in);
    if(!archivo.eof()){
=======
string Bitacora::leerArchivo(){
    ifstream archivo;
    string texto;
    string hilera;
    archivo.open("Bitacora.txt", ios::in);
    if(archivo.fail()){
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
      cout<<"No se pudo abrir el archivo"<<endl;
    }else{
        while(!archivo.eof()){
           getline(archivo, texto);
<<<<<<< HEAD
           m->insertRows(0,1);
           m->setData(m->index(0),texto.c_str());
=======
           hilera+=texto+"\n";
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
           texto="";
        }
    }
    archivo.close();
<<<<<<< HEAD
    return m;
=======
    return hilera;
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
}
