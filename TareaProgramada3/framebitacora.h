/*
 * Clase de tipo ventana gráfica nativa de Qt para las funciones de la vista de Bitacora
 * Autores: Jafet Picado C05977 / Andy Alvarado C00315
 */
#ifndef FRAMEBITACORA_H
#define FRAMEBITACORA_H

#include <QDialog>
#include <string>

namespace Ui {
class frameBitacora;
}

class frameBitacora : public QDialog
{
    Q_OBJECT

public:
    explicit frameBitacora(QWidget *parent = nullptr);
    ~frameBitacora();
    void setFuncion(std::string s);

private:
    Ui::frameBitacora *ui;
};

#endif // FRAMEBITACORA_H
