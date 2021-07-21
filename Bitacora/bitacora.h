/*
 * Librería estatica para ingreso y lectura de datos en un archivo .txt
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#ifndef BITACORA_H
#define BITACORA_H
#include <fstream>
#include <string>
#include <QStringListModel>
using namespace std;

class Bitacora{
    public:
        Bitacora();
        void insertarFuncion(string s);
        string leerArchivo();
};

#endif // BITACORA_H
