#include "btree.hpp"

int main(int argc, const char *argv[]){

    Node *btree = NULL;
    int value;

    while(cin >> value){
        btree = insertion(btree, value);
    }

    cout << "In Order: ";
    inOrder(btree);
    cout << endl;

    cout << "Pre Order: ";
    preOrder(btree);
    cout << endl;
    
    cout << "Pos Order: ";
    posOrder(btree);
    cout << endl;

    return 0;
}