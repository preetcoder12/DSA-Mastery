#include <iostream>
using namespace std;

int strStr(string haystack, string needle)
{
    int len1 = haystack.length();
    int len2 = needle.length();

    if (len2 == 0)
    {
        return 0;
    }
    for (int i = 0; i <= len1 - len2; i++)
    {
        int j = 0;
        for (int j = 0; j < len2; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }
    }
    return -1;
}

int main()
{
    string haystack = "leetcode";
    string needle = "leeto";

    int result = strStr(haystack, needle);
    cout << "The first occurrence of '" << needle << "' in '" << haystack << "' is at index: " << result << endl;

    return 0;
}
