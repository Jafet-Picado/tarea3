#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "framebitacora.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    frm = new frameBitacora(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAgregar_clicked()
{
    controlador->setHilera(ui->editFuncion->text());
    QString s = QString::fromStdString(controlador->getDate());
    s += " / f(a,b,c,d) = ";
    s += ui->editFuncion->text();
    frm->setFuncion(s);

}

void MainWindow::on_editFuncion_textEdited(const QString &arg1)
{
    ui->editFuncion->setText(arg1.toUpper());
}

void MainWindow::on_btnEvaluar_clicked()
{
    QString s = QString::fromStdString(controlador->evaluar(ui->boxA->isChecked(),ui->boxB->isChecked(),ui->boxC->isChecked(),ui->boxD->isChecked()));
    ui->editEvaluar->setText(s);
    QString p = QString::fromStdString(controlador->getDate());
    p += " / f(a,b,c,d) = ";
    p += s;
    frm->setFuncion(p);
}

void MainWindow::on_btnBitacora_clicked()
{
    frm->show();
}
