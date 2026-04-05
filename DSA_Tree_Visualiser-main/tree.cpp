#include "tree.h"

Node::Node(int val) {
    value = val;
    left = right = nullptr;
}

BST::BST() {
    root = nullptr;
}

Node* BST::insert(Node* node, int val) {
    if (!node) return new Node(val);

    if (val < node->value)
        node->left = insert(node->left, val);
    else
        node->right = insert(node->right, val);

    return node;
}

void BST::insert(int val) {
    root = insert(root, val);
}

Node* BST::findMin(Node* node) {
    while (node && node->left)
        node = node->left;
    return node;
}

Node* BST::deleteNode(Node* node, int val) {
    if (!node) return nullptr;

    if (val < node->value)
        node->left = deleteNode(node->left, val);
    else if (val > node->value)
        node->right = deleteNode(node->right, val);
    else {
        if (!node->left) return node->right;
        if (!node->right) return node->left;

        Node* temp = findMin(node->right);
        node->value = temp->value;
        node->right = deleteNode(node->right, temp->value);
    }
    return node;
}

void BST::deleteValue(int val) {
    root = deleteNode(root, val);
}

Node* BST::getRoot() {
    return root;
}
