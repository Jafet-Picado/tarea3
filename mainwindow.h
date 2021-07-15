#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controlador.h"
#include "framebitacora.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Controlador;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Controlador* controlador;
    frameBitacora *frm;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setControlador(Controlador*c){controlador = c;};

private slots:
    void on_btnAgregar_clicked();

    void on_editFuncion_textEdited(const QString &arg1);

    void on_btnEvaluar_clicked();

    void on_btnBitacora_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
