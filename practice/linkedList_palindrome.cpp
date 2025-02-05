#include <iostream>
using namespace std;
bool palindrome(int A[])
{
    int s = 0;
    int e = 4;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (A[s] != A[e])
        {

            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    int A[5] = {1, 2, 3, 3, 1};
    if (palindrome(A))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}
