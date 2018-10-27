//
// Created by skulish on 20.10.18.
//

#include "../include/AVSTree.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(AVSTree, Can_create_tree){
    AVSTree tree;
    int val = 5;
    int val1 = 4;
    int val2 = 6;
    int val3 = val - val1; //1
    int val4 = val1 - val3; //3
    tree.insertRecord(val);
    std::cout<<"##################"<<std::endl;
    tree.insertRecord(val1);
    std::cout<<"##################"<<std::endl;
    tree.insertRecord(val2);
    std::cout<<"##################"<<std::endl;
    tree.insertRecord(val3);
    std::cout<<"##################"<<std::endl;
    tree.insertRecord(val4);
    std::cout<<"##################"<<std::endl;
    Node* res_node = tree.getRecord(val4);
    ASSERT_EQ(val4, res_node->key);
}