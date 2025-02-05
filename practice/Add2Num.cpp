#include <iostream>
using namespace std;
void print(int C[], int n)
{
    for (int i = 0; i < 3; i++)
    {
        cout << C[i] << " ";
    }
}
int main()
{
    int A[3] = {1, 2, 3};
    int B[3] = {4, 7, 4};
    int C[3];

    for (int i = 0; i < 3; i++)
    {
        C[i] = A[i] + B[i];
    }
    print(C, 3);
    cout << endl;
}
