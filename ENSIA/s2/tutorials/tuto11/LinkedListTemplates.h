#ifndef LinkedList_h
#define LinkedList_h



#include <iostream>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

template <typename type>
class LinkedList{

    private:
        class Node{
            public:
                type data;
                Node* next;

                Node(type d, Node* nextNode=nullptr) {
                    data = d;
                    next = nextNode;
                }

                Node(const Node* node) {
                    data = node->data;
                    next = node->next;
                } 
        };

        Node* head;
        int size;

    public:
    
    // default constructor 
    LinkedList(type data=NULL){
        head = new Node(data);
        size = 1;
    };
    
    // copy constructor
    LinkedList(const LinkedList& lst){
        size = lst.size;

        head = new Node(lst.head->data);
        Node* original = lst.head->next;
        Node* current = head;
        while (original) {
            current->next = new Node(original->data);
            current = current->next;
            original = original->next;
        }
    }
    //destructor
    ~LinkedList(){
        removeAll();
    };
    
    // a new node containing the given data is inserted at the front
    void add(type data){
        Node* old_head = head;
        head = new Node(data,old_head);
        size++;
    }


    void insertAt(int pos, type data){
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

        size++;
    }

    bool remove(int data){
        while (head->next)
        {
            if(head->next->data == data){
                Node* after_removed_node = head->next->next;
                delete head->next;
                head->next = after_removed_node;

                size--;

                return true;
            }
        }

        return false;
    }
    
    void removeAll(){
        Node* current_node = head;
        Node* next_node = nullptr;
        while (current_node) {
            next_node = current_node->next;
            delete current_node;
            current_node = next_node;
        }
    }

    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data <<" ";
            current = current->next;
        }
        cout<<endl;
    }

    int getSize(){
        return size;
    }

};



#endif