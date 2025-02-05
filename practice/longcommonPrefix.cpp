#include <iostream>
using namespace std;

int smallest(string s1[])
{
    string s2 = s1[0];
    string s3 = s1[1];
    string s4 = s1[2];
    int n2 = s2.length();
    int n3 = s3.length();
    int n4 = s4.length();
    int min = 0;
    if (n2 <= n3 && n2 <= n4)
    {
        min = n2;
    }
    else if (n3 <= n2 && n3 <= n4)
    {
        min = n3;
    }
    else
    {
        min = n4;
    }
    return min;
}

string longCommPrefix(string s1[])
{
    string s2 = s1[0];
    string s3 = s1[1];
    string s4 = s1[2];
    string s5 = "";

    int min = smallest(s1);
    if (s1 == NULL)
    {
        return s5;
    }
    for (int i = 0; i < min; i++)
    {
        if (s2[i] == s3[i] && s3[i] == s4[i])
        {
            s5 = s5 + s2[i];
        }
        else
        {
            i++;
        }
    }
    return s5;
}

int main()
{
    string s1[3] = {"keyboard","keys","key"};

    string s5 = "";

    cout << smallest(s1) << endl;
    cout << longCommPrefix(s1) << endl;
}