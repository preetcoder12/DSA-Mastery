#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string reverseStringWordWise(string input)
{
    vector<string> words;
    string word;
    stringstream ss(input);
    while (ss >> word)
    {
        words.push_back(word);
    }
    string result;
    for (int i = words.size() - 1; i >= 0; i--)
    {
        result += words[i];
        if (i > 0)
        {
            result += " ";
        }
    }
    return result;
}

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}