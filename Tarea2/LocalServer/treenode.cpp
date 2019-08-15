
class TreeNode{
private:
    int data = 0;
    TreeNode *left = nullptr, *right = nullptr;

public:
    TreeNode (int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
    void set_right(TreeNode *node){
        this->right = node;
    }
    TreeNode* get_right(){
        return  this->right;
    }
    ///////////////////////////////////////////////////////////
    void set_left(TreeNode *node){
        this->left = node;
    }
    TreeNode* get_left(){
        return this->left;
    }
    ///////////////////////////////////////////////////////////
    int get_data(){
        return this->data;
    }
    void set_data(int data){
        this->data = data;
    }
};
