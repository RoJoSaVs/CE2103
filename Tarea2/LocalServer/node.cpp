#include "iostream"
using namespace std;
class Node{
private:
    int data = 0;
    Node* next;

public:
    void set_data(int data){
        this->data = data;
    }
    int get_data(){
//        cout<<this->data;
        return this->data;
    };

    void set_next(Node* next){
        this->next = next;
    }
    Node*  get_next(){
//        cout<<this->next;
        return this->next;
    }

};
