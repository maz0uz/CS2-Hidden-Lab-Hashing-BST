//
//  Binary_Search_Tree.hpp
//  CS2 Lab Hashing
//
//  Created by Mohamed Azouz on 11/05/2023.
//

#ifndef Binary_Search_Tree_hpp
#define Binary_Search_Tree_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class Binary_Search_Tree
{
private:
    struct Node
    {
        int num;
        Node* left;
        Node* right;
    };
    Node* root;
public:
    Binary_Search_Tree();
    void addNum(int x);
};

#endif /* Binary_Search_Tree_hpp */
