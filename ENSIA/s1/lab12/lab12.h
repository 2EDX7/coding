#ifndef lab12_h
#define lab12_h

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;




int occurence(int A[],int size,int target){
    int occurences=0;
    for (int i = 0; i < size; i++)
    {
        if (A[i]==target)
        {
            occurences++;
        }
        
    }
    return occurences;
}
void swap(int &a,int &b){
    int temp_a=a;
    a=b;
    b=temp_a;
}
int countNumbers(int A[], int size) {
    std::vector<int> numbers;
    int howManyNumbers = 0;

    for (int i = 0; i < size; i++) {
        bool found = false;

        for (int j = 0; j < numbers.size(); j++) {
            if (A[i] == numbers[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            howManyNumbers++;
            numbers.push_back(A[i]);
        }
    }

    return howManyNumbers;
}
int firstOccurenceIndex(int A[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (A[i]==target)
        {
        return i;
        }
    }
    return 0;
}

//sorting part:
void bubbleSort(int A[],int size){
    int swaptimes;
    do
    {
        swaptimes=0;
        for (int i = 0; i < size; i++)
        {
            if (A[i]>A[i+1])
            {
                swap(A[i],A[i+1]);
                swaptimes++;
            }
        }
        
    } while (swaptimes!=0);
    
    
}
void insertSort(int A[],int size){
    int count=0;
    for (int  i = 0; i < size; i++)
    {
            int j=i;
            while (A[j]<A[j-1] and j>=0)
            {
                swap(A[j],A[j-1]);
                j--;
            }
    }
    
}
void selectSort(int A[],int size){
    for (int i = 0; i < size; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < size; j++)
        {
            if (A[j]<A[minIndex])
            {
                minIndex = j;
            }
        }
        swap(A[minIndex],A[i]);
        
    }
}

//ex01: 
string sortAlphabeticOrder(string txt){

    int letters[200];
    int k=0;
    string tempString="";
    for (int i = 0; i < txt.length(); i++){
        letters[k]=int(txt[i]);
        k++;
    }
    selectSort(letters,txt.length());
    for (int i = 0; i < txt.length(); i++)
    {
        tempString+=static_cast<char>(letters[i]);
    }
    
    return tempString;
}

// ex02:
// void(int arr[],int size,int matrix[][2]){
//     bubbleSort(arr);

//     for (int i = 0; i < countNumbers(arr); i++)
//     {
//         matrix[i][0]=firstOccurenceIndex(arr,size)
//     }
    
// }



//recursion part:
void printNaturalNumbers(int n) {
    if (n > 0) {
        cout << n << " ";      // Print the current numbe
        printNaturalNumbers(n - 1); // Recursive call with n-1
    }
}

int countSum(int n){
    if (n==1) return 1; 
    else return n+countSum(n-1);
}
int hcf(int n1, int n2){
    if (n2 != 0) return hcf(n2, n1 % n2);
    return n1;
}
int myPow(int n,int pow){
    if (pow==0) return 1;
    return n*myPow(n,pow-1);
}
bool checkMultipleTwo(int n){
    if (n==2 or n==1) return true;
    else if(n<2) return false;
    return checkMultipleTwo(n/2);

}


// structes part: 
// ex05:
struct contact{
    string lastName, firstName;
    string phoneNumber[3]={0,0,0};
    struct birthDay{
        int day,month,year;
    };
    struct address{
        string street,city,postalCode;
    };
};

// void fillContacts(contact directory[], int numOfContacts) {
//     for (int i = 0; i < numOfContacts; i++) {
//         cout << "enter the last name"; getline(cin, directory[i].lastName);
//         cout << "enter the first name"; getline(cin, directory[i].firstName);

//         int j = 0;
//         while (j < 3) {
//             cout << "enter the number " << j << ": ";
//             getline(cin, directory[i].phoneNumber[j]);
//             j++;
//         }

//         // cout << "enter the birthday (day then month then year)";
//         // cin >> directory[i].birthDay.day >> directory[i].birthDay.month >> directory[i].birthDay.year;
//         // cin.ignore();  // Consume the newline character

//         // cout << "enter the address (street then city then postal code)";
//         // cin >> directory[i].address.street >> directory[i].address.city >> directory[i].address.postalCode;
//     }
// }
void TOH(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        std::cout <<"Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    TOH(n - 1, source, destination, auxiliary);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    TOH(n - 1, auxiliary, source, destination);
}



#endif