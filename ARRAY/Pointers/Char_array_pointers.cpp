#include <iostream>
using namespace std;

int main()
{
    char A[] = "abcde";

    char *ptr = A;

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;

    ptr++;
    cout << ptr << endl;
    
}