#include "btree.hpp"

Node* insertion(struct Node *root, int element){
    if(!root){
        root = new Node(element);
        return root;
    }

    list<Node*> queue;
    queue.push_back(root);

    while(!queue.empty()){
        Node *front = queue.front();
        queue.pop_front();

        if(front -> left == NULL){
            front -> left = new Node(element);
            return root;
        }else{
            queue.push_back(front -> left);
        }

        if(front -> right == NULL){
            front -> right = new Node(element);
            return root;
        }else{
            queue.push_back(front -> right);
        }
    }

    return root;

}

void inOrder(struct Node *root){
    if(root == NULL){
        return;
    }

    inOrder(root -> left);

    cout << " " << root -> value;

    inOrder(root -> right);

}

void preOrder(struct Node *root){
    if(root == NULL){
        return;
    }

    cout << " " << root -> value;

    preOrder(root -> left);

    preOrder(root -> right);

}

void posOrder(struct Node *root){
    if(root == NULL){
        return;
    }

    posOrder(root -> left);

    posOrder(root -> right);

    cout << " " << root -> value;

}
