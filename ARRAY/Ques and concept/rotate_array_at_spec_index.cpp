#include <iostream>
using namespace std;
#include <vector>

void print(vector<int>& temp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

void rotate(int A[], int n, int k)
{
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(k + i) % n] = A[i];
    }
    print(temp,n);
}

int main()
{
    int A[5] = {2,3,4,5,6};
    rotate(A,5,2);
    
}