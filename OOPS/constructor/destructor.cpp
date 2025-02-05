#include <bits/stdc++.h>
using namespace std;

class earth
{
    int a;
    int b;

public:
    earth() // non parameterized constructor
    {
        cout << "earth created " << endl;
    }
    earth(int a, int b) // parameterized constructor
    {
        this->a = a;
        this->b = b;
        int c = a * b;
        cout << c << " times hello earth !" << endl;
    }
    earth(earth &p)
    {
        a = p.a;
        b = p.b;
        int c = a * b;
        cout << "copy constructor called and ans is : " << c << endl;
    }

    ~earth()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "From main " << endl;
    cout << "Non parameterized constructor " << endl;
    earth e1, e2;
    cout << "Parameterized constructor " << endl;
    earth e3(2, 3);
    cout << "Copy constructor " << endl;
    earth e4(e3);

    return 0;
}