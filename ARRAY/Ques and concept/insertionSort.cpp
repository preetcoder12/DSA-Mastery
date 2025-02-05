#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout<<endl;
}

void insertionSort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = A[i];
        int j = i - 1;
        while(A[j]>temp && j>=0){
            A[j+1] = A[j];
            j--;
        }
         A[j+1] =temp;
    }
}

int main()
{
    int A[6] = {2, 5, 8, 6, 9, 4};
    insertionSort(A, 6);
    printArray(A, 6);
}
