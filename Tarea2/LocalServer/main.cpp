#include "widget.h"
#include <iostream>
#include "tree.cpp"
#include "list.cpp"
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    //Tree *btree = new Tree();
//        btree->insert(5);
//        btree->insert(3);
//        btree->insert(4);
//        btree->insert(2);
//        btree->insert(7);
//        btree->insert(6);
//        btree->insert(8);
//        btree->inorder(btree->get_root());
//        cout<<endl;
//        btree->delete_node(3);
//        btree->inorder(btree->get_root());

        //static List *linked = new List();
//        linked->insert_first(7);
//        linked->insert_first(3);
//        linked->insert_first(8);
//        linked->insert_first(15);
//        linked->insert_first(2);
//        linked->display();
//        linked->delete_First();
//        linked->display();
//        linked->edit_position(3,4);
//        linked->display();
//        linked->get_position(2);
//        return 0;/**/
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();

}
