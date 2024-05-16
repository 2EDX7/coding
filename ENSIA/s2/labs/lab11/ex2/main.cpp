#include "Queue.h"

int main(){

    Queue<std::string> q(5,"hello");
    q.print();
    return 0;
}