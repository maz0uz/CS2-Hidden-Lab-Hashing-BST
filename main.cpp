




#include<iostream>
#include "hashtable.hpp"
#include "Binary_Search_Tree.hpp"

using namespace std;


int main()
{
    cout<<"Hashing Question:"<<endl;
    
    
    int tabletestsize = 15;
    hashtable hash(tabletestsize);
    int x;
    for(int i=0;i<tabletestsize;i++)
    {
        cout<<"Please enter a value for the hash table: ";
        cin >> x;
        hash.addvalue(x);
        cout<<endl;
    }
    
    cout<<"Hash table filled. Printing..."<<endl;
    hash.printTable();
    
    cout<<"Now for binary tree question:"<<endl;
    cout<<"Constructing balanced BST for following array"<<endl;
    
    
    int array[10] = {9,11,18,3,6,12,3,4,2,20};
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<"After sorting:"<<endl;
    for (int step = 0; step < 10; step++)
    {
        for (int i = 0; i < 10 - step; i++)
        {
          if (array[i] > array[i + 1])
          {
            x = array[i];
            array[i] = array[i + 1];
            array[i + 1] = x;
          }
        }
      }
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    
    Binary_Search_Tree bst;
    for(int i=0;i<5;i++)
    {
        bst.addNum(5+i);
        bst.addNum(4-i);
    }
    cout<<"BST constructed and balanced"<<endl;
}
