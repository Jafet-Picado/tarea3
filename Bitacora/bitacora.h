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
