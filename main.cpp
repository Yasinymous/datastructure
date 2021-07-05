//
//  main.cpp
//  datastructure
//
//  Created by Yasin Murat Akyüz on 12.06.2021.
//
#include "node.hpp"
#include <iostream>


int main() {
    // insert code here...
    LinkedList list;
    list.insertNodeEnd(15);
    list.insertNodeEnd(20);
    list.insertNodeEnd(50);
    list.insertNodeEnd(80);
    list.insertNodeEnd(100);
    list.deleteNode(15);
    list.deleteNode(100);
    list.PrintList();
    cout<< list.searchNode(50);
    list.isEmpty() ;
    cout<<endl;
    return 0;
}
