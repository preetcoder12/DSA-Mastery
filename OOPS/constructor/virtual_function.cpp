#include <bits/stdc++.h>
using namespace std;

class grandfather
{
public:
    grandfather(int age)
    {
        cout << "Grandfather's age is " << age << endl;
    }
    void hair(string hair)
    {
        cout << "hair of grandfather color is " << hair << endl;
    }

    ~grandfather()
    {
        cout << "grandfather is deleted :( " << endl;
    };
};

class father : public grandfather
{
public:
    father():grandfather(39)
    {
        cout << "father's object created"<< endl;
    }
    void hair(string hair)
    {
        cout << "hair of father color is " << hair << endl; // override
    }

    ~father()
    {
        cout << "father is deleted :( " << endl;
    };
};

int main()
{
    father f;
    f.hair("red");

    return 0;
}