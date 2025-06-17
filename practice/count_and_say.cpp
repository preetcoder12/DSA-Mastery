#include <iostream>
using namespace std;

int length(int A)
{

    int length = 0;
    if (A == 0)
    {
        return 0;
    }
    else
    {
        while (A != 0)
        {
            A = A / 10;
            length++;
        }
    }
    return length;
}

string countSay(int A)
{

    string new_n = to_string(A);

    string B = "";
    int size = new_n.length();
    int count = 1;

    for (int i = 0; i < size; i++)
    {
        while (i < size - 1 && new_n[i] == new_n[i + 1])
        {
            count++;
            i++;
        }
        B += to_string(count) + new_n[i];
        count = 1;
    }
    return B;
}

int main()
{
    int A = 44444555;
    cout << "Count and say : " << countSay(A) << endl;
    return 0;
}
