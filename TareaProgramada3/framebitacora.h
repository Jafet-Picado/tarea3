#ifndef FRAMEBITACORA_H
#define FRAMEBITACORA_H

#include <QDialog>
#include <QStringListModel>
namespace Ui {
class frameBitacora;
}

class frameBitacora : public QDialog
{
    Q_OBJECT

public:
    explicit frameBitacora(QWidget *parent = nullptr);
    ~frameBitacora();
    void setFuncion(QStringListModel* s);

private:
    Ui::frameBitacora *ui;
};

#endif // FRAMEBITACORA_H
