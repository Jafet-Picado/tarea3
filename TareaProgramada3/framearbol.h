/*
 * Clase de tipo ventana gráfica nativa de Qt para las funciones de la vista tipo Árbol
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#ifndef FRAMEARBOL_H
#define FRAMEARBOL_H

#include <QDialog>
#include <string>
namespace Ui {
class frameArbol;
}

class frameArbol : public QDialog
{
    Q_OBJECT

public:
    explicit frameArbol(QWidget *parent = nullptr);
    ~frameArbol();
    void setArbol(std::string* s,int size);

private:
    Ui::frameArbol *ui;
};

#endif // FRAMEARBOL_H
