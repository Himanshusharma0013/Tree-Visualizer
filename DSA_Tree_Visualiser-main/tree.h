#ifndef TREE_H
#define TREE_H

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val);
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int val);
    Node* deleteNode(Node* node, int val);
    Node* findMin(Node* node);

public:
    BST();
    void insert(int val);
    void deleteValue(int val);
    Node* getRoot();
};

#endif
