//
// Created by DELL on 5/26/2021.
//

#include <iostream>
#include "insertion.h"
using namespace std;
int main(){
    BST b, *root = NULL;
    root = b.insert(root, 50);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);

    b.inOrderTraversal(root);
    return 0;
}