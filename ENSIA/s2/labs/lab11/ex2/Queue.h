#ifndef Queue_h
#define Queue_h

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

template <typename T>
class Queue
{
    public:
        Queue(int size, T initValue) : elements(size, initValue) {}

        void size() const { return elements.size(); }

        void front() const { return elements.front(); }

        void back() const { return elements.back(); }

        bool enqueue(T value)
        {
            elements.push_back(value);
            return true;
        }

        bool dequeue(T &value)
        {
            if (isEmpty())
                return false;
            value = elements.front();
            elements.erase(elements.begin());
            return true;
        }

        bool setElement(int index, T value)
        {
            if (index < 0 || index >= elements.size())
                return false;
            elements[index] = value;
            return true;
        }

        bool isFull() const
        {
            return false;
        }

        bool isEmpty() const
        {
            return elements.empty();
        }

        void print() const
        {
            for (const auto &elem : elements)
            {
                cout << elem << " ";
            }
            cout << endl;
        }

    private:
        vector<T> elements;

};
#endif
