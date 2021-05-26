#include "exec_3_9.hpp"

struct Node* getElement(struct Node *node, int element){
    if(node == NULL){
        exit(0);
    }

    if(node -> value == element) {
        return node;
    }

    if(node -> value < element){
        return getElement(node -> right, element);
    }else{
        return getElement(node -> left, element);
    }
}

void insertionElement(struct Node *&node, int element){
    if(node == NULL){
        node = new Node(element);
        return;
    }

    if(node -> value < element){
        insertionElement(node -> right, element);
    }else{
        insertionElement(node -> left, element);
    }


}