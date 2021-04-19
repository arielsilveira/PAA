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

struct Node* getElement(struct Node *node, int element);
void insertionElement(struct Node *&node, int element);
