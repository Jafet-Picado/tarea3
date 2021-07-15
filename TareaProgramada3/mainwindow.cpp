#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "framebitacora.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    frm = new frameBitacora(this);
    ui->tabWidget->addTab(frm, QString("Bitácora"));
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
    QString s = QString::fromStdString(controlador->evaluar(ui->boxA->isChecked(),ui->boxB->isChecked(),ui->boxC->isChecked(),ui->boxD->isChecked()));
    ui->editEvaluar->setText(s);
}

void MainWindow::on_btnBitacora_clicked()
{
    controlador->guardarArchivo();
    frm->setFuncion(QString::fromStdString(controlador->leerArchivo()));
}

void MainWindow::on_pushButton_clicked()
{
    QString s = "A'B'C'D'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString s = "A'B'C'D";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    QString s = "A'B'CD";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    QString s = "A'B'CD'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    QString s = "A'BC'D'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    QString s = "A'BC'D";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    QString s = "A'BCD";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    QString s = "A'BCD'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    QString s = "ABC'D'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    QString s = "ABC'D";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_14_clicked()
{
    QString s = "ABCD";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    QString s = "ABCD'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    QString s = "AB'C'D'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    QString s = "AB'C'D";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_18_clicked()
{
    QString s = "AB'CD";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}

void MainWindow::on_pushButton_17_clicked()
{
    QString s = "AB'CD'";
    if(ui->editFuncion->text()!=""){
        QString p = ui->editFuncion->text();
        p += "+";
        p += s;
        ui->editFuncion->setText(p);
    }else{
        ui->editFuncion->setText(s);
    }
}
