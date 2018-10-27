//
// Created by skulish on 28.10.18.
//

#include "Node.h"

class BinaryTree {
protected:
    Node* root=nullptr;
    virtual Node* createNode(int &key) = 0;
    virtual void insertRecord(Node *&node, int &key) = 0;
    virtual Node* getRecord(Node *&node, int &key) = 0;
public:
    BinaryTree(){};
    // ~BinaryTree() {};
    virtual void insertRecord(int &key) = 0;
    virtual Node* getRecord(int &key) = 0;
};
