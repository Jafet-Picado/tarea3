/*
 * Librería estatica para ingreso y lectura de datos en un archivo .txt
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#include "bitacora.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
Bitacora::Bitacora(){

}


/*
 * Método encargado de insertar la hilera de tipo string con los valores
 * de las funciones y/o evaluaciones de funciones realizadas por el usuario
 * en un documento de tipo .txt
 *
 * Args: Recibe un parametro de tipo string que contiene las funciones y evaluaciones
 * realizadas por el usuario
 */
void Bitacora::insertarFuncion(string s){
    ofstream archivo;
    archivo.open("Bitacora.txt", ios::out);
    if(archivo.fail()){ //Si el archivo no logra crearse o abrirse, mostrará en consola el texto pertinente
        cout<<"Error al crear/abrir el archivo"<<endl;
    }else{
        archivo<<s; //Se ingresa la hilera al archivo Bitacora.txt
    }
    archivo.close();
}


/*
 * Método encargado de leer y retornar la hilera de funciones y/o evaluaciones
 * realizadas por el usuario que se encuentran almacenadas en un documento de tipo
 * .txt
 *
 * Return: hilera de tipo string con las funciones y/o evaluaciones realizadas por el usuario
 * dentro de una variable de tipo string en el cual se separan con saltos de linea cada una de estas
 */
string Bitacora::leerArchivo(){
    ifstream archivo;
    string texto;
    string hilera;
    archivo.open("Bitacora.txt", ios::in);
    if(archivo.fail()){
      cout<<"No se pudo abrir el archivo"<<endl;
    }else{
        while(!archivo.eof()){ //Se avanza a la siguiente linea si el archivo no ha terminado
           getline(archivo, texto); //Se extrae la linea de texto y se almacena en la variable texto
           hilera+=texto+"\n"; //Agrego la linea dentro de una variable acumulativa y el salto de linea
           texto=""; //Reinicio la variable texto para no acumular el texto anterior sin espacio o salto de linea
        }
    }
    archivo.close();
    return hilera;
}
