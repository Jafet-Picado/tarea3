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
    void setBitacora(QStringListModel* m);

private slots:
    void on_btnAgregar_clicked();

    void on_editFuncion_textEdited(const QString &arg1);

    void on_btnEvaluar_clicked();

    void on_btnBitacora_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_btnLeer_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
