//
// Created by skulish on 20.10.18.
//

#include "../include/AVSTree.h"
#include <iostream>

Node* AVSTree::createNode(int &key) {
    Node* node = new Node();
    node->key         = key;
    node->left_node   = nullptr;
    node->right_node  = nullptr;
    node->height = 1;  // new node is initially added at leaf
    return(node);
}


void AVSTree::insertRecord(Node *&node, int &key) {
    if (node == nullptr){
        node = createNode(key);
        return;
    }
    std::cout<<"NODE KEY: "<<node->key<<" KEY: "<<key<<std::endl;
    if (node->key < key){
        std::cout<<"GOING TO RIGHT"<<std::endl;
        insertRecord(node->right_node, key);
    } else {
        std::cout<<"GOING TO LEFT"<<std::endl;
        insertRecord(node->left_node, key);
    }
}

void AVSTree::insertRecord(int &key) {
    if (root == nullptr){
        root= createNode(key);
        return;
    }
    if (root->key < key){
        std::cout<<"GOING TO RIGHT"<<std::endl;
        insertRecord(root->right_node, key);
    } else {
        std::cout<<"GOING TO LEFT"<<std::endl;
        insertRecord(root->left_node, key);
    }
}


Node* AVSTree::getRecord(int &key) {
    if (root->key==key){
        return root;
    }

    if (root->key>key){
        std::cout<<"GOING TO LEFT"<<std::endl;
        return getRecord(root->left_node, key);
    } else {
        std::cout<<"GOING TO RIGHT"<<std::endl;
        return getRecord(root->right_node, key);
    }
}

Node* AVSTree::getRecord(Node *&node, int &key) {
    std::cout<<node->key<<std::endl;
    if (node->key==key){
        return node;
    }

    if (node->key>key){
        std::cout<<"GOING TO LEFT"<<std::endl;
        return getRecord(node->left_node, key);
    } else {
        std::cout<<"GOING TO RIGHT"<<std::endl;
        return getRecord(node->right_node, key);
    }
}