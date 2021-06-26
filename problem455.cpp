// Search an element in BST -

bool find_val(node* root, int num){
    if(num == root->data)  return true;
    if(root->data > num)   return find_val(root->lchild, num);
    return find_val(root->rchild, num);
}