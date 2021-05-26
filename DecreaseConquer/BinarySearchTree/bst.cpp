#include "exec_3_9.hpp"

int main(int argc, const char *argv[]){
    Node *tree = NULL;
    int search, value;

    cin >> search;

    while( cin >> value){
        insertionElement(tree, value);
    }

    Node *element = getElement(tree, search);

    cout << "Binary Tree Search" << endl;
    cout << "Element in tree: " << element -> value << endl;
    if(element -> right != NULL){
        cout << "Element in Right: " << element -> right -> value << endl;
    }else{
        cout << "Element in Right is NULL" << endl;
    }
    
    if(element -> left != NULL){
        cout << "Element in Left: " << element -> left -> value << endl;
    }else{
        cout << "Element in Left is NULL" << endl;
    }

    return 0;
}