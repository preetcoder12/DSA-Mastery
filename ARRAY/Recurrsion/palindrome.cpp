#include <iostream>
using namespace std;
char tolower(char ch)
{
    int n = 26;
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool chaeck_palindrome(string name)
{
    if (name.length() <= 1)
    {
        return true;
    }
    if (tolower(name[0]) == tolower(name[name.length() - 1]))
    {
        return chaeck_palindrome(name.substr(1, name.length() - 2));
    }
}

int main()
{
    string name = "Hannah";
    cout << chaeck_palindrome(name) << endl;
}