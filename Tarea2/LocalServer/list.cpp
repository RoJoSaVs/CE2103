#include "node.cpp"
#include <iostream>
using namespace std;

class List{
private:
    Node *head, *tail;

public:

    void insert_first(int data){
        Node *temp = new Node();
        temp->set_data(data);
        if (head == nullptr){
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else{
            temp->set_next(head);
            head = temp;
        }
        cout<<data<<endl;
        cout<<"####################"<<endl;
    }

    void delete_First(){
        Node *temp = head;
        head = head->get_next();
        delete temp;
    }
    void edit_position(int pos, int data){
        Node *temp = head;
        for(int i = 1; i < pos; i++){
            temp = temp->get_next();
        }
        temp->set_data(data);
    }

    int get_position(int pos){
        Node *temp = head;
        for(int i = 0; i < pos; i++){
            temp = temp->get_next();
        }
        cout<<temp->get_data()<<endl;
        return temp->get_data();
    }
    void display(){
        Node *temp;
        temp = head;
        while(temp != nullptr){//->get_next() != nullptr){
            cout<<temp->get_data()<<endl;
            temp = temp->get_next();
        }
        //cout<<temp->get_data()<<endl;
        cout<<"##########################"<<endl;
    }

};

static List *linked = new List();
