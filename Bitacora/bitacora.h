#ifndef BITACORA_H
#define BITACORA_H
#include <fstream>
#include <string>
<<<<<<< HEAD
#include <QStringListModel>
using namespace std;
class Bitacora
{
    QStringListModel* m;
public:
    Bitacora();
    void insertarFuncion(string s);
    QStringListModel* leerArchivo();
=======
using namespace std;
class Bitacora
{
public:
    Bitacora();
    void insertarFuncion(string s);
    string leerArchivo();
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
};

#endif // BITACORA_H
