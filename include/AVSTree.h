//
// Created by skulish on 20.10.18.
//

#include "Node.h"

class AVSTree {
private:
    Node* root=nullptr;
    Node* createNode(int &key);
    void deleteNode(Node* node);
    void insertRecord(Node *&node, int &key);
    Node* getRecord(Node *&node, int &key);
public:
    AVSTree(){};
   // ~AVSTree() {};
    void insertRecord(int &key);
    void deleteRecord(int &key);
    Node* getRecord(int &key);
};