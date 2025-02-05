#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string reverse_sentence(string s)
{
    stringstream ss(s);
    cout << s << endl;
    string word;
    vector<string> words;
    string ans = "";

    while (ss >> word)
    {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--)
    {
        ans += words[i];
        if (i > 0)
        {
            ans += " ";
        }
    }
    return ans;
}
int main()
{
    string s = " hello world ";
    cout << reverse_sentence(s) << endl;
}