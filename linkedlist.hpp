//
//  node.hpp
//  datastructure
//
//  Created by Yasin Murat Akyüz on 12.06.2021.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Node {
   public:
  int value;
  Node* next;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }
 
    void insertNodeEnd(int value) { // sondan bagli listeye veri ekleme
        Node* node = new Node();
        node->value = value;
        node->next = NULL;
        if(head == NULL) { // liste bos ise
            head = node;    // base ekliyor
        } else {
            Node* temp = head; // liste dolu ise
            while(temp->next != NULL)  // listeyi gezip sonuna ekliyor
                temp = temp->next;
                temp->next = node;
        }
    }
    
    void headNodeDelete(int value){  // listenin basindan veri silmek
        Node* temp = head;
        while(temp != NULL) {
            if (temp->value == value){
                    temp->value = temp->next->value;
                    temp->next = temp->next->next;
                    temp = temp->next;
            }
            temp = temp->next;
        }
    }
    
    void deleteNode(int value){  // listeden veri silmek
        Node* temp = head;
        if (temp->value== value){
            headNodeDelete(value);
            return;
        }
        while(temp->next!= NULL){
            if (temp->next->value == value){
                Node* temp_ptr = temp->next->next;
                delete temp->next;
                temp->next = temp_ptr;
                return;
            }
            temp = temp->next;
        }
    }
         
        
    bool searchNode(int value){ // listeden veri aramak
        Node* temp = head;
        while(temp != NULL){
            if (temp->value == value)
                return true;
            temp = temp->next;
        }
        return false;
      }

    int nodeCount(){ // listeden vveri sayisi
        Node* temp = head;
        int counter = 0;
        while(temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    
    bool isEmpty(){ // liste bosmu
        Node* temp = head;
        if(temp != NULL) {
            return true;
        }
        return false;
    }

    void PrintList() { // liste yazdirma
      Node* temp = head;
      if(temp != NULL) {
        cout<< "head";
        while(temp != NULL) {
            cout<<" -> ";
            cout<<temp->value;
          temp = temp->next;
        }
        cout<<endl;
      }
    }
};

#endif /* node_hpp */
