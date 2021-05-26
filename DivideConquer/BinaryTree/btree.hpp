#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    struct Node* right;
    struct Node* left;

    Node(int v){
        value = v;
        right = NULL;
        left = NULL;
    }
};

Node* insertion(struct Node *root, int element);
void inOrder(struct Node *root);
void preOrder(struct Node *root);
void posOrder(struct Node *root);
