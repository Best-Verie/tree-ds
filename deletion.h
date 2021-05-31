//
// Created by DELL on 5/31/2021.
//

#ifndef TREE_DS_DELETION_H
#define TREE_DS_DELETION_H

class BST{
    int data;
    BST *left, *right;

public:
    BST();
    BST(int);
    BST *insert(BST*, int);
    void preOrderTraversal();
    BST *deletion(BST*, int);

};

BST::BST() : data(0)
        , left(NULL)
        , right(NULL){}


BST::BST(int value) {
    data=value;
    left=right= NULL;

}
BST * BST::insert(BST *root, int value) {
    if(!root){
        root->data=value;
        root->left=root->right = NULL;
    }
    if(root->data > value){
        insert(root->left, value);
    }
    else
        insert(root->right,value);

    return root;
}

BST *BST:: deletion(BST *root, int value){
    if(!root){
        cout<<"error"<<endl;
    }
    if(root->data = value){
        delete(root->left, value);
    }
    else if(root->data < value){
        deletion(root->right, value);
    }
    else if(root->left== NULL && root->right==NULL){
        free(root);
    }
    else if(root->left && root->right){
        temp =
    }
}


#endif //TREE_DS_DELETION_H

