//
//  Binary_Search_Tree.cpp
//  CS2 Lab Hashing
//
//  Created by Mohamed Azouz on 11/05/2023.
//

#include "Binary_Search_Tree.hpp"


Binary_Search_Tree :: Binary_Search_Tree()
{
    root = NULL;
}

void Binary_Search_Tree :: addNum(int x)
{
    Node* temp = root;
    if(root == NULL)
    {
        root = new Node;
        root->num = x;
        root->right = NULL;
        root->left = NULL;
    }else
    {
        while(temp != NULL)
        {
            if(x<temp->num)
            {
                temp = temp->left;
            }else
                temp = temp->right;
        }
        temp = new Node;
        temp->num = x;
        temp->left=NULL;
        temp->right=NULL;
    }
}
