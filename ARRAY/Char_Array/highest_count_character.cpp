#include <iostream>
#include <cctype>
using namespace std;

char most_occurence(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;

        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int max = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(max < arr[i]){
            ans = i;
            max =arr[i];
        }
    }
    char finalans = ans + 'a';
    return finalans;
}

int main()
{
    string s;
    cin>>s;
    cout<<"the most ocured element is: "<<most_occurence(s)<<endl;
}