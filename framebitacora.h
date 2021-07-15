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
    QStringListModel *m;
    explicit frameBitacora(QWidget *parent = nullptr);
    ~frameBitacora();
    void setFuncion(QString s);

private:
    Ui::frameBitacora *ui;
};

#endif // FRAMEBITACORA_H
