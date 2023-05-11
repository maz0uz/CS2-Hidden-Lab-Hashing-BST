//
//  hashtable.hpp
//  CS2 Lab Hashing
//
//  Created by Mohamed Azouz on 11/05/2023.
//

#ifndef hashtable_hpp
#define hashtable_hpp

#include <stdio.h>
#include <list>

using namespace std;
class hashtable
{
private:
    int size;
    list<int>* table;
public:
    void addvalue(int x);
    hashtable(int x);
    int    HashVal(int x) const;
    void deletevalue(int x);
    void printTable() const;



};

#endif /* hashtable_hpp */
