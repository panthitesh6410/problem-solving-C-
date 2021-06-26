// Insert an element in BST -

node *insert_node(node* root, int num){
    node* newnode = (node*)malloc(sizeof(node));
    if(!root){
        root = newnode;
        return root;
    }
    if(root->data > num)
        return insert_node(node->left, num);
    else 
        return return insert_node(node->right, num);
    return root;
}