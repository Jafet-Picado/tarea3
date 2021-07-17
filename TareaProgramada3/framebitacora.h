#ifndef FRAMEBITACORA_H
#define FRAMEBITACORA_H

#include <QDialog>
<<<<<<< HEAD
#include <QStringListModel>
=======
#include <string>
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)
namespace Ui {
class frameBitacora;
}

class frameBitacora : public QDialog
{
    Q_OBJECT

public:
    explicit frameBitacora(QWidget *parent = nullptr);
    ~frameBitacora();
<<<<<<< HEAD
    void setFuncion(QStringListModel* s);
=======
    void setFuncion(std::string s);
>>>>>>> 5335577 (Se agregó librería, pero falta tratar tema de directorio)

private:
    Ui::frameBitacora *ui;
};

#endif // FRAMEBITACORA_H
