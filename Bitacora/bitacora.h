#ifndef BITACORA_H
#define BITACORA_H
#include <fstream>
#include <string>
#include <QStringListModel>
using namespace std;
class Bitacora
{
    QStringListModel* m;
public:
    Bitacora();
    void insertarFuncion(string s);
    QStringListModel* leerArchivo();
};

#endif // BITACORA_H
