#include <iostream>
#include "lab09.h"
using namespace std;

void scanArray(int arr[], int &size)
{
    int element, i = 0;
    cout << "enter the size of the array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element " << i + 1 << " :";
        cin >> element;
        arr[i] = element;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";
}

int minindex(int arr[], int size)
{
    int minindex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[minindex])
        {
            minindex = i;
        }
    }
    return minindex;
}

bool found(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }
    return false;
}

void printOccurrens(int arr[], int size)
{
    for (int n = 0; n <= 20; n++)
    {
        int occ = 0;
        for (int i = 0; i < size; i++)
        {
            if (n == arr[i])
            {
                occ++;
            }
        }
        cout << "the number " << n << " occured " << occ << " times \n";
    };
}

void deletelement(int arr[], int &size, int target)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] == target)
        {
            int j = i;
            while (j < size)
            {
                arr[j] = arr[j + 1];
                j++;
            }
            arr[j] = 0;
        }
        i++;
    }
}

void swapping(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void inverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swapping(arr[size - 1 - i], arr[i]);
    }
}

void initilizeSpace(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = ' ';
    }
}

void printCharArray(char arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
}
