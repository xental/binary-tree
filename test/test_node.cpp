//
// Created by skulish on 20.10.18.
//

#include <gtest/gtest.h>
#include "../include/Node.h"

TEST(Node_test, Can_create_node){
    Node node;
    node.height = 0;

    Node* node_two;

    node.right_node = node_two;

}