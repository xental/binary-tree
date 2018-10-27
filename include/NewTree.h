//
// Created by skulish on 28.10.18.
//

#include "BinaryTree.h"

class NewTree : public BinaryTree {
private:
    virtual Node* createNode(int &key);
    virtual void insertRecord(Node *&node, int &key);
    virtual Node* getRecord(Node *&node, int &key);
public:
    NewTree(){};
    // ~BinaryTree() {};
    virtual void insertRecord(int &key);
    virtual Node* getRecord(int &key);
};