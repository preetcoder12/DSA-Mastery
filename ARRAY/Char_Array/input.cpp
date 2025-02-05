#include <iostream>
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

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[20];
    cout << "enter your name: " << endl;
    cin >> name;
    // name[2] = '\0'; // it will stop the execution from index 2
    cout << "your name is : " << name << endl;
    cout << "Total length is  : " << length_is(name) << endl;
    int length = length_is(name);
    reverse(name, length);
    cout << name << endl;
}