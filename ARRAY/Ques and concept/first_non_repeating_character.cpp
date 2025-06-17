#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatingCharacter(string str)
{

    map<char, int> fre;
    for (auto c : str)
    {
        fre[c]++;
    }
    for (char p : str)
    {
        if (fre[p] == 1)
        {
            return p;
        }
    }
    return '\0';
}
int main()
{
    string A = "aDcadhc";
    cout << firstNonRepeatingCharacter(A) << endl;
    return 0;
}