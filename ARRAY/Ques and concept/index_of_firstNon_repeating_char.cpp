#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s)
{
    map<char, int> fre;
    for (char c : s)
    {
        fre[c]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (fre[s[i]] == 1) // phele sting s me ith index pr
        //  jao fir us character ki frequency fre me check kro agr 1 hai to i return kedo
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string A = "leetcode";
    cout << firstUniqChar(A) << endl;
    return 0;
}