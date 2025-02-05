#include <iostream>
using namespace std;
#include <string>
int main()
{
    string s = "tmmzuxt";
    bool processed[256] = {false};
    int start = 0;
    int max_length = 0;
    for (int i = 0; i < 7; i++)
    {
        if (processed[s[i]])
        {
            if (s[start] != s[i])
            {
                processed[s[i]] = false;
                start++;
            }
            else
            {
                start++;
            }
        }
        processed[s[i]] = true;
        max_length = max(max_length, i - start + 1);
    }

    cout << max_length << endl;
}