//
// Created by skulish on 28.10.18.
//

#include "../include/NewTree.h"

Node* NewTree::createNode(int &key) {
    Node* node = new Node();
    node->key         = key;
    node->left_node   = nullptr;
    node->right_node  = nullptr;
    node->height = 1;  // new node is initially added at leaf
    return(node);
}


void NewTree::insertRecord(Node *&node, int &key) {
    if (node == nullptr){
        node = createNode(key);
        return;
    }

    if (node->key < key){
        insertRecord(node->right_node, key);
    } else {
        insertRecord(node->left_node, key);
    }
}

void NewTree::insertRecord(int &key) {
    if (root == nullptr){
        root= createNode(key);
        return;
    }
    if (root->key < key){
        insertRecord(root->right_node, key);
    } else {
        insertRecord(root->left_node, key);
    }
}


Node* NewTree::getRecord(int &key) {
    if (root->key==key){
        return root;
    }

    if (root->key>key){
        return getRecord(root->left_node, key);
    } else {
        return getRecord(root->right_node, key);
    }
}

Node* NewTree::getRecord(Node *&node, int &key) {
    if (node->key==key){
        return node;
    }

    if (node->key>key){
        return getRecord(node->left_node, key);
    } else {
        return getRecord(node->right_node, key);
    }
}