#include <iostream>
using namespace std;

int main()
{
    string s1 = "hello world";
    int end = s1.length() - 1;

    while (end >= 0 && s1[end] == ' ')
    {
        end--;
    }
    int start = end;
    while (start >= 0 && s1[start] != ' ')
    {
        start--;
    }

    int count = end - start;

    cout << count << endl;
}