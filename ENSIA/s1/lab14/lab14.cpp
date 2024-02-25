#include <iostream>
using namespace std;


void mySwap(int* ptra, int*& ptrb){
    int* temp_a_address = ptra;
    ptra = ptrb;
    ptrb = temp_a_address;
}

int* maximumptr(int A[],int size){
    int maxindex=0;
    for (int i = 0; i < size; i++){
        if (A[i]>A[maxindex]) maxindex=i;
    }
    return A+maxindex;
}

int main()
{
    /* ex01:
        int *ptr = nullptr;
        int a = 10;
        ptr = &a;
        *ptr = 666;
        int w = *ptr;
        cout<<ptr << endl
            <<*ptr<< endl
            << a  << endl
            <<w   <<endl;

        int **ptr1 = &ptr;
        **ptr1 = 777;
     */

/* ex02:    
    int a = 3;
    int b = 4;
    int *ptra=&a;
    int *ptrb=&b;
    cout << *ptra << *ptrb << endl;
    mySwap(ptra, ptrb);
    cout << *ptra << *ptrb << endl;
 */

    /*ex03:
            double a[] = {1.2, 33, 334.4, 56, 5, 5, 5};
            int size = sizeof(a) / sizeof(double);
            double *ptr = a;
            for (int i = 0; i < size; i++)
            {
                cout << *(ptr + i) << ' ';
            }

     */


    /* ex04 */
    /* part one : 1D array */
/*     int size;
    cin >> size;
    float a[size];
    for (int i = 0; i < size; i++)
    {
        cin>>*(a+i);
    }
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=*(a+i);
    }
    cout<<sum;
 */

    /* part two : 2D array */
    int rows,columns;
    cin>>rows>>columns;
    float matrix[rows][columns];

    float* ptr = &matrix[0][0];
    for (int i = 0; i < rows*columns+5; i++) cin>>*(ptr);



/* int a =5,b=9;
int* ptra=&a,*ptrb=&b;
cout<<ptra<<" "<<ptrb;
mySwap(ptra,ptrb);
cout<<ptra<<" "<<ptrb;
 */

    return 0;
}