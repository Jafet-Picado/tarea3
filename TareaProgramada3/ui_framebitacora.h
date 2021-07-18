/********************************************************************************
** Form generated from reading UI file 'framebitacora.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEBITACORA_H
#define UI_FRAMEBITACORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_frameBitacora
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *frameBitacora)
    {
        if (frameBitacora->objectName().isEmpty())
            frameBitacora->setObjectName(QString::fromUtf8("frameBitacora"));
        frameBitacora->resize(509, 300);
        textEdit = new QTextEdit(frameBitacora);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 481, 251));

        retranslateUi(frameBitacora);

        QMetaObject::connectSlotsByName(frameBitacora);
    } // setupUi

    void retranslateUi(QDialog *frameBitacora)
    {
        frameBitacora->setWindowTitle(QApplication::translate("frameBitacora", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frameBitacora: public Ui_frameBitacora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEBITACORA_H
