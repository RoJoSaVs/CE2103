#include "widget.h"
#include "ui_widget.h"
#include "list.cpp"
//#include "main.cpp"
#include "tree.cpp"
#include "localserver.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    mLocalServer = new LocalServer(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_iniciar_clicked()
{
    if (mLocalServer->listen(ui->servidor->text()))
    {
        QMessageBox::critical(this, "Error", mLocalServer->errorString());
    }else{
    QMessageBox::information(this, "Servidor", "Iniciado...");
    }
}

//void Widget::on_enviar_clicked()
//{
//    mLocalServer->envia(ui->msj->text());
//}

void Widget::on_quitar_clicked()
{
    close();
}

void Widget::on_ListAdd_clicked()
{
    int data = ui->msj->text().toInt();
    linked->insert_first(data);
    mLocalServer->envia(ui->msj->text());
}

void Widget::on_ListDelete_clicked()
{
    linked->delete_First();
}

void Widget::on_ListShow_clicked()
{
    int pos = ui->Posicion->text().toInt();
    linked->display();
    btree->inorder(btree->get_root());
}

void Widget::on_ListEdit_clicked()
{
    int data = ui->msj->text().toInt();
    int pos = ui->Posicion->text().toInt();
    linked->edit_position(pos, data);
}

void Widget::on_TreeAdd_clicked()
{
    int data = ui->msj->text().toInt();
    btree->insert(data);
    mLocalServer->envia(ui->msj->text());
}

void Widget::on_TreeDelete_clicked()
{
    int data = ui->msj->text().toInt();
    btree->delete_node(data);
    mLocalServer->envia(ui->msj->text());
}
