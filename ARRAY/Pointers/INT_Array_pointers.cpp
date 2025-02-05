#include <iostream>
using namespace std;

int getsum(int *A, int n)
{
    cout << "size of pointer A: " << sizeof(A) << " bytes" << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}
void update(int *ptr){
    *ptr = (*ptr)*10;
}
int main()
{
    int A[5] = {2, 3, 6, 4, 8};
    cout << " address of " << A << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Address at " << i << " location is :  " << A[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "value at " << i << " is " << *(A + i) << endl;
    }

    cout << 2 [A] << endl;

    cout << A << endl;
    cout << &A << endl;
    cout << &A[0] << endl; 
    int *ptr = &A[0];
    cout << "Next address " << ptr + 1 << endl;

    cout << "size of array A: " << sizeof(A) << " bytes" << endl; 
    cout << getsum(A + 3,2) << endl;   
    

    int i=10;
    update(&i);
    cout<<i<<endl;
    

    return 0;
}