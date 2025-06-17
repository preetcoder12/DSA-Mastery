#include <iostream>
using namespace std;

bool isSubSequence(string str1, string str2)
{
    int i = 0;
    int j = 0;
    int n1 = str1.length();
    int n2 = str2.length();

    while (i < n1 && j < n2)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        i++;
    }
    return j == n2;
}

int main()
{
    string str1 = "leetcode";
    string str2 = "et";
    int ans = isSubSequence(str1, str2);
    if (ans == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}