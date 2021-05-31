//
// Created by DELL on 5/31/2021.
//

#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left, *right;
};

class BST {
private:
    Node *root;
public:
    BST() {
        root = NULL;
    }

    Node *getRoot() {
        return root;
    }

    void setRoot(Node *root) {
        BST::root = root;
    }

    Node *createNode(int value) {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    Node *insert(Node *root, int value) {
        if (!root) {
            return createNode(value);
        }
        else{
            if (root->data > value) {
                insert(root->left, value);
            } else
                insert(root->right, value);
            return root;
        }
    }

    void inOrderTraversal(Node *root) {
        if (root != NULL) {
            inOrderTraversal(root->left);
            cout << " - data found : " << root->data << " - ";
            inOrderTraversal(root->right);
        }
    }

    Node *search(Node *root){
        
    }
};


    int main() {
        BST tree;
        Node *ptr, *mirror;
        int lgt, height;
        Node *sml;
        char toContinue;
        int choice, element, searchKey, searchKeyToDelete;

        do {
            cout << "\t\t\t .................       MENU                   ................." << endl;
            cout << "\t\t\t\t  1. Insert                    " << endl;
            cout << "\t\t\t\t  2. Delete a node             " << endl;
            cout << "\t\t\t\t  3. Display                   " << endl;
            cout << "\t\t\t\t  4. Search                    " << endl;
            cout << "\t\t\t\t  5. Delete whole Tree         " << endl;
            cout << "\t\t\t\t  6. Find Largest              " << endl;
            cout << "\t\t\t\t  7. Find smallest             " << endl;
            cout << "\t\t\t\t  8. Mirror Image              " << endl;
            cout << "\t\t\t\t  9. Height of the tree        " << endl;
            cout << "\t\t\t\t  10. Post Order Transversal   " << endl;
            cout << "\t\t\t\t  11. In Order Transversal     " << endl;
            cout << "\t\t\t\t  12. " << endl;
            cout << "\t\t\t .................                           ................." << endl;

            cout << "\t\t\t Make a choice: " << endl;
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "  Enter the element to insert into the list :  " << endl;
                    cin >> element;
                    ptr = tree.insert(tree.getRoot(), element);
                    tree.setRoot(ptr);
                    tree.inOrderTraversal(tree.getRoot());
                    break;
                case 3:
                    tree.inOrderTraversal(tree.getRoot());
                    break;
                default:
                    cout<<"\t\t\t invalid choice! "<<endl;
            }
            cout << "\t\t\t\t\t  Do you want to continue ? " << endl;
            cin>>toContinue;

        } while (toContinue == 'Y' || toContinue == 'y');

        return 0;
}
