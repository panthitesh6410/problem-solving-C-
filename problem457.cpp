// Minimum element in BST - 

int find_minimum(node *root){
    if(root->lchild == NULL)  return root->data;
    return find_minimum(root->lchild);
}