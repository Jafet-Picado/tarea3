/*
 * Clase controlador utilizada para realizar el modelo MVC
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#include "controlador.h"
#include "mainwindow.h"
#include <iostream>
string p; //Variable global de tipo string para almacenar las funciones y evaluaciones realizadas por el usuario

/*
 * Constructor de la clase controlador que inicializa los objetos/punteros de la clase MainWindow y Bitacora
 */
Controlador::Controlador(){
    w = new MainWindow(nullptr);
    w->setControlador(this);
    w->show();
    bit = new Bitacora();
}

/*
 * Método encargado de mover la hilera de la vista al modelo y almacenar la nueva función en la variable global
 *
 * Args: Recibe un parametro de tipo QString que almacena la función que ingresó el usuario
 */
void Controlador::setHilera(QString hilera){
    f = new Funcion();
    f->agregarMinTerminos(hilera.toStdString());
    p+=f->getHileraG();
}

/*
 * Método encargado de evaluar la función ingresada con anterioridad y retornar su valor booleano
 *
 * Args: Recibe cuatro parametros de tipo bool para los valores de cada variable A,B,C y D
 * Return: Retorna una hilera de tipo string con la función y su resultado
 */
string Controlador::evaluar(bool a, bool b, bool c, bool d){
    string s = f->getHilera();
    s += " = ";
    if(f->evaluar(a,b,c,d)){
        s+= "1";
    }else{
        s+= "0";
    }
    p+=f->getHileraF();
    return s;
}

/*
 * Método encargado de invocar el método para guardar las funciones en la bitacora
 */
void Controlador::guardarArchivo(){
    bit->insertarFuncion(p);
}

/*
 * Método encargado de invocar el método para leer la información de la bitacora
 *
 * Return: Retorna un valor de tipo string con las funciones y evaluaciones realizadas por el usuario
 */
string Controlador::leerArchivo(){
    return bit->leerArchivo();
}

/*
 * Método encargado de retornar un array de tipo string con todos los minTerminos de la función actual
 *
 * Return: Retorna un puntero string donde están almacenados los minTerminos de la función actual
 */
string* Controlador::getTerminos(){
    string* arbol = new string[f->size()];
    for(int i=1; i<=f->size();i++){
        arbol[i-1] = f->getMinTermino(i);
    }
    return arbol;
}


