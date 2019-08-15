#ifndef NODE_H
#define NODE_H
class node
{
private:
    int data;
    node *next;
public:
    void set_data(int data){}
    int get_data(){return data;}
    void set_next(node *next){}
    node* get_next(){return next;}
};
#endif // NODE_H
