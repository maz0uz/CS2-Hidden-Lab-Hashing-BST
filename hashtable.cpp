





#include "hashtable.hpp"
#include<iostream>
using namespace std;

hashtable::hashtable(int x):size(x)
{
    table = new list<int>[size];
}

void hashtable::addvalue(int x)
{
    table[HashVal(x)].push_back(x);
}

int hashtable::HashVal(int x) const
{
    return (x % size);
}
void hashtable::printTable() const
{
    for (int i = 0; i < size; i++)
    {
        list<int>::iterator iter;
        for (iter = table[i].begin(); iter!=table[HashVal(i)].end(); iter++)
        {
            cout << *iter << "  ";
        }
        cout << endl;
    }
}
void hashtable::deletevalue(int x)
{

    list<int>::iterator iter;
    for (iter = table[HashVal(x)].begin(); iter != table[HashVal(x)].end(); iter++)
    {
        if (*iter == x)
        {
            table[HashVal(x)].erase(iter);
        }
    }
}
