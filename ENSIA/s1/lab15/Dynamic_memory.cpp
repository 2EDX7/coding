#include <iostream>
using namespace std;

int* splices(int A1, int A2){
    int A1_size=sizeof(A1)/sizeof(int);
    int A2_size=sizeof(A2)/sizeof(int);
    int A3_size = A1_size+A2_size;

    int* A3 = new int[A3_size];

    int count=0;
    int i = 0;

    for (; i < A1_size; i++){
        *(A3+i)=A1[count];
        count++; 
    }
    for (; i < A2_size; i++){
        *(A3+i)=A2[count];
        count++;
    } 
    
    return A3;
}

int main()
{
    //exercise 01:

    /*     int* ivar1 = new int;
        int* ivar2 = new int;
        float* fvar1 = new float;
        float* fvar2 = new float;
        *ivar1 = 2;
        *ivar2 = 3;
        *fvar1 = 2.1;
        *fvar2 = 3.1;

        cout<<*ivar1<<*ivar2<<*fvar1<<*fvar2;
        delete ivar1 ;
        delete  ivar2 ;
        delete  fvar1 ;
        delete  fvar2;
     */


    //exercise 02:
/*     int n;
    cout << "enter how many students you want to enter: ";
    cin >> n;
    int *student_ptr = new int[n];
    cout << "now enter the GPA of each student: \n";
    for (int i = 0; i < n; i++)
        cin >> *(student_ptr + i);
    for (int i = 0; i < n; i++)
        cout << *(student_ptr + i)<<endl;

    delete[] student_ptr;
 */


    //exercise 03:
    int A1[]={1,2,3};
    int A2[]={2,3,4};
    int A1_size=sizeof(A1)/sizeof(int);
    int A2_size=sizeof(A2)/sizeof(int);
    int* A3 = splices(A1,A2);
    for (int i = 0; i < A1_size+A2_size; i++) cout<<*(A3+i);
    
    return 0;
}