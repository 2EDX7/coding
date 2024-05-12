#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class LinkedList{

    private:
        class Node{
            public:
                int data;
                Node* next;

                Node(int d) : data{d}{};
                Node(const Node* node) : data{node->data}{};
        };

        Node* head;
        int size;

    public:
    
    // default constructor 
    LinkedList(){
        head = new Node(0);
    };
    
    //copy constructor
    LinkedList(const LinkedList& lst){
        size = lst.size;
        head = lst.head;
    };
    
    //destructor
    ~LinkedList(){
        removeAll();
    };
    
    // a new node containing the given data is inserted at the front
    void add(int data){
        Node* old_head = head;
        head = new Node(data);
        head->next = old_head;
    }


    void insertAt(int pos, int data){
        //saving the pointer of the node that will be before the new added node 
        Node* beforeAtPos = head;

        //getting a pointer of the position of the new node
        for (int i = 0; i < pos-1; i++) {beforeAtPos = beforeAtPos->next;}
        /* stops at pos-1 to get the one before the position asked, else if we stop at pos we get the one after */

        //getting the pointer to the node after the position asked
        Node* afterAtPos = beforeAtPos->next;
        
        //positioning the new node between the past two nodes
        Node* new_node_inserted = new Node(data);

        // the before position node pointing to the new added node , 
        beforeAtPos->next = new_node_inserted;

        // the new added node pointing to the  after position node
        new_node_inserted->next = afterAtPos;
    }

    bool remove(int data){
        while (head->next)
        {
            if(head->next->data == data){
                Node* after_removed_node = head->next->next;
                delete head->next;
                head->next = after_removed_node;
            }
        }
    }

    void removeAll(){
        Node* current_node = head;
        Node* next_node = head;
        do 
        {
            delete next_node;
            current_node = current_node->next;
            next_node = current_node;
        }while(current_node->next);

    }
    void printList()const{
        do
        {
            printf()
        } while (head->next);
        
    }

};

