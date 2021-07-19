#include "framearbol.h"
#include "ui_framearbol.h"
#include <string>
#include <QStandardItemModel>
#include <iostream>
using namespace std;
frameArbol::frameArbol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frameArbol)
{
    ui->setupUi(this);
}

frameArbol::~frameArbol()
{
    delete ui;
}

void frameArbol::setArbol(string *m, int size){
    QStandardItemModel *qs =new QStandardItemModel(this);
    QString g = "+";
    QStringList h(g);
    qs->setHorizontalHeaderLabels(h);
    for(int i=0; i<size;i++){
        string s = m[i];
        QStandardItem *l = new QStandardItem("*");
        for(string::size_type x = 0; x <s.length(); x++){
            char p = s[x];
            char n = s[x+1];
            if(p=='A'){
                if(n!='\''){
                    QStandardItem *a = new QStandardItem("A");
                    l->appendRow(a);
                }else{
                    QStandardItem *a = new QStandardItem("A'");
                    l->appendRow(a);
                }
            }
            if(p=='B'){
                if(n!='\''){
                    QStandardItem *b = new QStandardItem("B");
                    l->appendRow(b);
                }else{
                    QStandardItem *b = new QStandardItem("B'");
                    l->appendRow(b);
                }
            }
            if(p=='C'){
                if(n!='\''){
                    QStandardItem *c = new QStandardItem("C");
                    l->appendRow(c);
                }else{
                    QStandardItem *c = new QStandardItem("C'");
                    l->appendRow(c);
                }
            }
            if(p=='D'){
                if(n!='\''){
                    QStandardItem *d = new QStandardItem("D");
                    l->appendRow(d);
                }else{
                    QStandardItem *d = new QStandardItem("D'");
                    l->appendRow(d);
                }
            }
        }
        qs->setItem(i,0,l);
    }
    ui->treeView->setModel(qs);
    ui->treeView->expandAll();
}
