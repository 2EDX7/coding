#include <iostream>

using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

template <typename T>
class DoubleSubscriptedArray
{
    friend istream &operator>>(istream &input, DoubleSubscriptedArray &array);
    friend ostream &operator<<(ostream &output, const DoubleSubscriptedArray &array);

public:
    DoubleSubscriptedArray(int rowSize, int columnSize);
    ~DoubleSubscriptedArray();

    int &operator()(int row, int column);
    DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &other);
    bool operator==(const DoubleSubscriptedArray &other) const;
    bool operator!=(const DoubleSubscriptedArray &other) const;
    int &operator[](int index);
    const int &operator[](int index) const;

private:
    int rowSize;
    int columnSize;
    T *ptr;
};

template <typename T>
DoubleSubscriptedArray<T>::DoubleSubscriptedArray(int rowSize, int columnSize)
{
    this->rowSize = rowSize;
    this->columnSize = columnSize;
    ptr = new T[rowSize * columnSize];
}

template <typename T>
DoubleSubscriptedArray<T>::~DoubleSubscriptedArray()
{
    delete[] ptr;
}

template <typename T>
int &DoubleSubscriptedArray<T>::operator()(int row, int column)
{
    return ptr[row * columnSize + column];
}

template <typename T>
DoubleSubscriptedArray<T> &DoubleSubscriptedArray<T>::operator=(const DoubleSubscriptedArray &other)
{
    if (this != &other)
    {
        delete[] ptr;
        rowSize = other.rowSize;
        columnSize = other.columnSize;
        ptr = new T[rowSize * columnSize];
        for (int i = 0; i < rowSize * columnSize; i++)
        {
            ptr[i] = other.ptr[i];
        }
    }
    return *this;
}

template <typename T>
bool DoubleSubscriptedArray<T>::operator==(const DoubleSubscriptedArray &other) const
{
    if (rowSize != other.rowSize || columnSize != other.columnSize)
    {
        return false;
    }
    for (int i = 0; i < rowSize * columnSize; i++)
    {
        if (ptr[i] != other.ptr[i])
        {
            return false;
        }
    }
    return true;
}

template <typename T>
bool DoubleSubscriptedArray<T>::operator!=(const DoubleSubscriptedArray &other) const
{
    return !(*this == other);
}

template <typename T>
int &DoubleSubscriptedArray<T>::operator[](int index)
{
    return ptr[index];
}

template <typename T>
const int &DoubleSubscriptedArray<T>::operator[](int index) const
{
    return ptr[index];
}

template <typename T>
istream &operator>>(istream &input, DoubleSubscriptedArray<T> &array)
{
    for (int i = 0; i < array.rowSize * array.columnSize; i++) input >> array.ptr[i];
    return input;
}

template <typename T>
ostream &operator<<(ostream &output, const DoubleSubscriptedArray<T> &array)
{
    for (int i = 0; i < array.rowSize * array.columnSize; i++)
    {
        output << array.ptr[i] << " ";
        if ((i + 1) % array.columnSize == 0) output << endl;
    }
    return output;
}