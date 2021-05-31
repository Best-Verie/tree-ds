//
// Created bTreey DELL on 5/26/2021.
//

#include <iostream>
#include "insertion.h"
using namespace std;
int main(){
    BST bTree, *root = NULL;
    root = bTree.insert(root, 50);
    bTree.insert(root, 30);
    bTree.insert(root, 20);
    bTree.insert(root, 40);
    bTree.insert(root, 70);
    bTree.insert(root, 60);
    bTree.insert(root, 80);

    bTree.inorderTraversal(root);
    return 0;
}