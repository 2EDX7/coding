#ifndef Queue_h
#define Queue_h

#include <iostream>
#include <string>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

template<typename t>
class Queue{
    public:
        // constructor with int for the size, and t for the initialization
        Queue(int size, t initValue) {
            elements.fill(initValue);
        }

        void size() const {
        }

        void front() const {
        }

        void back() const {
        }

        bool enqueue(t value) {
            if (isFull()) return false;
            elements[last] = value;
            last = (last + 1) % elements.size();
            return true;
        }

        bool dequeue(t& value) {
            if (isEmpty()) return false;

            value = elements[first];
            first = (first + 1) % elements.size();
            return true;
        }

        bool setElement(int index, t value) {
            if (index < 0 || index >= elements.size()) return false;
            elements[index] = value;
            return true;
        }

        bool isFull() const {
            return ((last + 1) % elements.size()) == first;
        }

        bool isEmpty() const {
            return first == last;
        }

    private:
        array<t> elements;
        int first = 0;
        int last = 0;
};

#endif