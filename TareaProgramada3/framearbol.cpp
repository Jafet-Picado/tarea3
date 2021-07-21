/*
 * Clase de tipo ventana gráfica nativa de Qt para las funciones de la vista tipo Árbol
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#include "framearbol.h"
#include "ui_framearbol.h"
#include <string>
#include <QStandardItemModel>
#include <iostream>
using namespace std;
frameArbol::frameArbol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frameArbol)
{
    ui->setupUi(this);
}

frameArbol::~frameArbol()
{
    delete ui;
}

/*
 * Método encargado de setear el modelo de vista para el TreeView
 *
 * Args: Recibe un parametro de tipo int con la cantidad de minTerminos de la función y un puntero
 * string con los minTerminos de la función
 */
void frameArbol::setArbol(string *m, int size){
    QStandardItemModel *qs =new QStandardItemModel(this); //Creo un modelo de tipo standard para almacenar el arbol de la función
    QStringList h("+");
    qs->setHorizontalHeaderLabels(h); //Fijo el header del árbol para que muestre un +
    for(int i=0; i<size;i++){
        string s = m[i];
        QStandardItem *l = new QStandardItem("*"); //Se crea el encabezado de la rama con el minTermino [i]
        for(string::size_type x = 0; x <s.length(); x++){
            char p = s[x];
            char n = s[x+1]; //Se inserta el valor del siguiente i para comprobación de negado
            if(p=='A'){
                if(n!='\''){ //Si no está negado entonces se agrega un item sin negar a una nueva fila de la columna l
                    QStandardItem *a = new QStandardItem("A");
                    l->appendRow(a);
                }else{ //Pero si está negado entonces se agrega un item negado a una nueva fila de la columna l
                    QStandardItem *a = new QStandardItem("A'");
                    l->appendRow(a);
                }
            }
            if(p=='B'){
                if(n!='\''){
                    QStandardItem *b = new QStandardItem("B");
                    l->appendRow(b);
                }else{
                    QStandardItem *b = new QStandardItem("B'");
                    l->appendRow(b);
                }
            }
            if(p=='C'){
                if(n!='\''){
                    QStandardItem *c = new QStandardItem("C");
                    l->appendRow(c);
                }else{
                    QStandardItem *c = new QStandardItem("C'");
                    l->appendRow(c);
                }
            }
            if(p=='D'){
                if(n!='\''){
                    QStandardItem *d = new QStandardItem("D");
                    l->appendRow(d);
                }else{
                    QStandardItem *d = new QStandardItem("D'");
                    l->appendRow(d);
                }
            }
        }
        qs->setItem(i,0,l); //Se agrega el item con las variables del minTermino [i] en una fila del modelo
    }
    ui->treeView->setModel(qs); //Se setea el modelo del treeView
    ui->treeView->expandAll(); //Se expanden todas las raíces para mostrar todos los valores
}
