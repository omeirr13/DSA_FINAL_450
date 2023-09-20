int findCeil(BinaryTreeNode<int> *node, int x){
    int ceil = -1;

    BinaryTreeNode<int>* temp = node;
    while(temp)
    {
        if(temp->data == x) return x;
        else if(temp->data > x)
        {
            ceil = temp->data;
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    return ceil;
    // Write your code here.
}
