#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAgregar_clicked()
{
    controlador->setHilera(ui->editFuncion->text());
}

void MainWindow::on_editFuncion_textEdited(const QString &arg1)
{
    ui->editFuncion->setText(arg1.toUpper());
}

void MainWindow::on_btnEvaluar_clicked()
{
    controlador->evaluar(ui->boxA->isChecked(),ui->boxB->isChecked(),ui->boxC->isChecked(),ui->boxD->isChecked());
}
