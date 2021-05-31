#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST();
    BST(int);
    BST* insert(BST*, int);
    void inorderTraversal(BST*);
};

BST ::BST()
        : data(0)
        , left(NULL)
        , right(NULL)
{
}

BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST ::insert(BST* root, int value)
{
    if (!root)
    {
        return new BST(value);
    }
    if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    else
    {
        root->left = insert(root->left, value);
    }
    return root;
}

void BST ::inorderTraversal(BST* root)
{
    if (!root) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << endl;
    inorderTraversal(root->right);
}