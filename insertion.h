//
// Created by DELL on 5/26/2021.
//

#ifndef UNTITLED_INSERTION_H
#define UNTITLED_INSERTION_H


#include <cstdio>
#include <iostream>
using namespace std;

class BST {
    int data;
    BST *left, *right;

public:
    BST();
    BST(int );
    BST *insert(BST* ,int);

    void inOrderTraversal(BST*);

};

BST::BST():data(0), left(NULL), right(NULL) {}
BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST *BST::insert(BST *root, int value) {

    if(!root){
        return new BST(value);
    }
    if(root->data > value){
        insert(root->left,value);
    }
    else{
        insert(root->right,value);
    }

}

void BST::inOrderTraversal(BST *root) {
    if(!root){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<endl;
    inOrderTraversal(root->right);

}


#endif //UNTITLED_INSERTION_H
