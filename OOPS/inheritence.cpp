#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    car()
    {
        cout << "This is car" << endl;
    }
    void fuel()
    {
        cout << "petrol" << endl;
    }
};
class bus : public car // we can change public into private or protected according to need 
{
public:
    bus()
    {
        cout << "This is bus" << endl;
    }
    void fuel()
    {
        cout << "CNG" << endl;
    }
    void wheels()
    {
        cout << "4" << endl;
    }
};
class bike : private car
{
public:
    bike()
    {
        cout << "This is bike" << endl;
    }
    void fuel()
    {
        cout << "petrol bike" << endl;
    }
    void wheels()
    {
        cout << "2" << endl;
    }
};

int main()
{
    bus b;
    b.fuel(); // Here fuel of bus over ride the value of fuel from its parent class

    bike b2;

    return 0;
}