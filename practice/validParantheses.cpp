#include <iostream>
using namespace std;

bool valid_parantheses(string s2)
{
    string s1 = "()[]{}";
    int n1 = s1.length();
    int n2 = s2.length();

    int count = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (s1[i] == s2[j])
            {
                count += 1;
                cout << s1[i] << endl;
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    if (count == n2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string s2 = "([])";
    cout << valid_parantheses(s2) << endl;
}