#include <iostream>
using namespace std;

class Powers
{
public: // by default in cpp the classes are private so in order to access in main func or other func we have to initalise them as public
    int fly;
    char level;
};

int main()
{
    // STATICALLY CREATED
    Powers p; // we created an object of class powers as p
    p.fly = 5;
    p.level = 'A';

    cout << "can fly upto " << p.fly << " km" << endl; // we can access the properties of power class by dot operator
    cout << "Power level of p is " << p.level << endl;

    // DYNAMICALLY CREATED
    Powers *p1 = new Powers;

}