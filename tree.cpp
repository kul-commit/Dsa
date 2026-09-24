int height(Node* root) {
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}


int countNodes(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}



bool search(Node* root, int x) {
    if (root == NULL)
        return false;

    if (root->data == x)
        return true;

    return search(root->left, x) ||
           search(root->right, x);
}
