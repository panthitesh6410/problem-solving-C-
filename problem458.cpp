// check if given Binary Tree is BST or not -

bool is_BST(node *root){
    if(root == NULL)  return 1;
    if(root->left != NULL && root->left->data > root->data)  return 0;
    if(root->right != NULL && root->right->data < root->data)  return 0;
    if(!isBST(root->left) || !isBST(root->right))  return 0;
    return 1;
}