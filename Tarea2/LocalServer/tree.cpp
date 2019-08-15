#include "treenode.cpp"
#include <iostream>
using namespace std;

class Tree{
private:
    TreeNode *root;

    TreeNode* insert(int data, TreeNode *current){
         if (current == nullptr){
             return new TreeNode(data);
         }
         else if (data > current->get_data()) {
             current->set_right(insert(data, current->get_right()));
        }
        else if(data < current->get_data()) {
            current->set_left(insert(data, current->get_left()));
        }
         return current;
    }

    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if (root == nullptr) return root;

        if (key < root->get_data())
            root->set_left(deleteNode(root->get_left(), key));

        else if (key > root->get_data())
            root->set_right(deleteNode(root->get_right(), key));

        else
        {
            if (root->get_left() == nullptr)
            {
                TreeNode *temp = root->get_right();
                free(root);
                return temp;
            }
            else if (root->get_right() == nullptr)
            {
                TreeNode *temp = root->get_left();
                free(root);
                return temp;
            }

            TreeNode* temp = new TreeNode(find_smallest(root->get_right()));

            root->set_data(temp->get_data());

            root->set_right(deleteNode(root->get_right(), temp->get_data()));
        }
        return root;
    }

    int find_smallest(TreeNode *node){
        if (node->get_left() == nullptr){
            return node->get_data();
        }
        else{
            find_smallest(node->get_left());
        }
    }

public:
    void insert(int data){
        if (root == nullptr){
            TreeNode *node = new TreeNode(data);
            root = node;
        }
        else{
            insert(data, root);
        }
    }

    void inorder(TreeNode *root)
    {
        if (root != nullptr)
        {
            inorder(root->get_left());
            printf("%d ", root->get_data());
            inorder(root->get_right());
        }
    }
    TreeNode* get_root(){
        return root;
    }
    void* delete_node(int key) {
        if (root == nullptr) {
            return nullptr;
        } else {
            this->deleteNode(root, key);
        }
    }
};
static Tree *btree = new Tree();
//Tree *btree;
