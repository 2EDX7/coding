#include "LinkedList.h"

int main(){
    LinkedList list(5);
    list.add(33);
    list.add(44);
    list.add(14);
    list.printList();


    LinkedList list2(list);
    list2.printList();
    cout<<list2.getSize();

    return 0;
}