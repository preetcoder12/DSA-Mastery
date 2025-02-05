#include <iostream>
#include <cctype>
using namespace std;

int length_is(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char toLowercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        while (s < e && !isalpha(name[s]) && !isdigit(name[s]))
        {
            s++;
        }
        while (s < e && !isalpha(name[e]) && !isdigit(name[e]))
        {
            e--;
        }
        if (toLowercase(name[s]) != toLowercase(name[e]))
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char name[20];
    cout << "enter your name: " << endl;
    cin >> name;
    cout << "your name is : " << name << endl;
    int length = length_is(name);

    cout << "palindome or not : " << checkPalindrome(name, length) << endl;
}