#include <iostream>
using namespace std;
/*
DEFAULT CONSTRUCTOR
1. when object is created it also invoke constructor
2. no return type
3. no input parameten
*/
class hero
{
//here consider all functions have same name cause the constructor always have same name as class 
public:
    hero()
    {
        cout << "default constructor called " << endl; // even if we dont create a constructor the default constructor is always created
    }
    int power(int x)
    {
        cout << "power level is : " << x << endl; // this is parameterised constructor
    }
    float height(float x)
    {
        return x;
    }
    int power2(int x)
    {
        cout << "power2 level is : " << x << endl;
    }
};

int main()
{
    hero h1;               // here hero h is working as h.hero() as it always call default constructor and it is statically created
    hero *h2 = new hero(); // it is dynamically created
    h1.power(2000);
    cout << "height is " << h1.height(6.2) << " ft" << endl;

    hero h3(h1);
    h3.power(34); // this is an copy costructor as we copy the func of h1 into h3
}