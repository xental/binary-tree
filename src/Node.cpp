//
// Created by skulish on 20.10.18.
//

#include "../include/Node.h"


bool Node::operator==(Node &node) const {
    if (key == node.key) return true;
    return false;
}


bool Node::operator<(Node &node) const {
    if (key<node.key) return true;
    return false;
}


bool Node::operator>(Node &node) const {
    if (key>node.key) return true;
    return false;
}