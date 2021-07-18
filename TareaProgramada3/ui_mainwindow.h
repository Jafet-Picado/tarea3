/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *editFuncion;
    QPushButton *btnAgregar;
    QCheckBox *boxA;
    QCheckBox *boxB;
    QCheckBox *boxC;
    QCheckBox *boxD;
    QPushButton *btnEvaluar;
    QLineEdit *editEvaluar;
    QPushButton *btnBitacora;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *btnLeer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 338);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        editFuncion = new QLineEdit(centralwidget);
        editFuncion->setObjectName(QString::fromUtf8("editFuncion"));
        editFuncion->setGeometry(QRect(20, 10, 271, 20));
        editFuncion->setAlignment(Qt::AlignCenter);
        btnAgregar = new QPushButton(centralwidget);
        btnAgregar->setObjectName(QString::fromUtf8("btnAgregar"));
        btnAgregar->setGeometry(QRect(310, 10, 101, 23));
        boxA = new QCheckBox(centralwidget);
        boxA->setObjectName(QString::fromUtf8("boxA"));
        boxA->setGeometry(QRect(40, 70, 70, 17));
        boxB = new QCheckBox(centralwidget);
        boxB->setObjectName(QString::fromUtf8("boxB"));
        boxB->setGeometry(QRect(40, 110, 70, 17));
        boxC = new QCheckBox(centralwidget);
        boxC->setObjectName(QString::fromUtf8("boxC"));
        boxC->setGeometry(QRect(150, 70, 70, 17));
        boxD = new QCheckBox(centralwidget);
        boxD->setObjectName(QString::fromUtf8("boxD"));
        boxD->setGeometry(QRect(150, 110, 70, 17));
        btnEvaluar = new QPushButton(centralwidget);
        btnEvaluar->setObjectName(QString::fromUtf8("btnEvaluar"));
        btnEvaluar->setGeometry(QRect(230, 90, 75, 23));
        editEvaluar = new QLineEdit(centralwidget);
        editEvaluar->setObjectName(QString::fromUtf8("editEvaluar"));
        editEvaluar->setEnabled(true);
        editEvaluar->setGeometry(QRect(50, 180, 321, 20));
        editEvaluar->setAlignment(Qt::AlignCenter);
        editEvaluar->setReadOnly(true);
        btnBitacora = new QPushButton(centralwidget);
        btnBitacora->setObjectName(QString::fromUtf8("btnBitacora"));
        btnBitacora->setGeometry(QRect(230, 240, 111, 23));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(420, 10, 521, 301));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 50, 75, 31));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 50, 75, 31));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 50, 75, 31));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 16, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 30, 47, 16));
        label_2->setFont(font);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 31, 16));
        label_3->setFont(font);
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 50, 75, 31));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 80, 75, 31));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(250, 80, 75, 31));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(110, 80, 75, 31));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(180, 80, 75, 31));
        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(40, 110, 75, 31));
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(110, 110, 75, 31));
        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(250, 110, 75, 31));
        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(180, 110, 75, 31));
        pushButton_15 = new QPushButton(tab);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(40, 140, 75, 31));
        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(110, 140, 75, 31));
        pushButton_17 = new QPushButton(tab);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(250, 140, 75, 31));
        pushButton_18 = new QPushButton(tab);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(180, 140, 75, 31));
        tabWidget->addTab(tab, QString());
        btnLeer = new QPushButton(centralwidget);
        btnLeer->setObjectName(QString::fromUtf8("btnLeer"));
        btnLeer->setGeometry(QRect(60, 240, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        editFuncion->setPlaceholderText(QApplication::translate("MainWindow", "Ej: A'B'C+ABD+C'D'", nullptr));
        btnAgregar->setText(QApplication::translate("MainWindow", "Agregar Funci\303\263n", nullptr));
        boxA->setText(QApplication::translate("MainWindow", "A", nullptr));
        boxB->setText(QApplication::translate("MainWindow", "B", nullptr));
        boxC->setText(QApplication::translate("MainWindow", "C", nullptr));
        boxD->setText(QApplication::translate("MainWindow", "D", nullptr));
        btnEvaluar->setText(QApplication::translate("MainWindow", "Evaluar", nullptr));
        btnBitacora->setText(QApplication::translate("MainWindow", "Guardar Bitacora", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "0000", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "0001", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "0011", nullptr));
        label->setText(QApplication::translate("MainWindow", "\\", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "CD", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "AB", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "0010", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "0100", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "0110", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "0101", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "0111", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "1100", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "1101", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "1110", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "1111", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "1000", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "1001", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "1010", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "1011", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Karnaugh", nullptr));
        btnLeer->setText(QApplication::translate("MainWindow", "Leer Bitacora", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
