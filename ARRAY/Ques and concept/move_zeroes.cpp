#include <iostream>
using namespace std;
#include <vector>

void move_zeroes(int A[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if(A[j]!=0){
            swap(A[i],A[j]);
            i++;
        }
    }
}

void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[5] = {2,4,0,0,7};
    cout << "before moving zeroes " << endl;
    print(A, 5);

    move_zeroes(A, 5);

    cout << "after moving zeroes " << endl;
    print(A, 5);
}