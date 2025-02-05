#include <iostream>
using namespace std;

int In_Bits(int a)
{
    int n = 4;
    int A[4];
    if (a == 0 || a == 1)
    {
        return a;
    }
    int remainder = a % 2;
    cout <<
}

int main()
{
    int element;

    cout << "Enter the value to convert into binary :  " << endl;
    cin >> element;

    In_Bits(element);
}