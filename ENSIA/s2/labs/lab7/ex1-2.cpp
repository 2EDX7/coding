#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;
void sort_array (int A[], int size);
void sort_vector (vector<string> words);
bool compare (int, int);


int main() {
    int A[5]={-9,2,3,4,1};
    sort_array(A,5);
    return 0;
}


bool compare (int a, int b){
    // for descending order
    return a>b;

    //for ascending order
    // return a<b;
}

//ex1
void sort_array (int A[], int size){
    int value;
    int i=0;
    while(cin>>value and i<size){
        A[i]=value;
        i++;
    }
    sort(A,A+size, greater<int>());
    for (int i=0; i<size; i++) cout << A[i] << " ";
    cout << endl;
}

//ex2
void sort_vector (vector<string> words){
    words.clear();
    string word;
    while(cin>>word){
        words.push_back(word);
    }   

    sort(words.begin(), words.end());
    for (auto value : words)  cout << value << " ";
    cout << endl;
}