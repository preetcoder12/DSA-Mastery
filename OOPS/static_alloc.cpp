
#include <iostream>
using namespace std;
/*
  1.  static keyword can be call without creating onject
  2.  this keyword cannot be used with static keyword as we know this keyword connect pointer to current object but there is no object
  3. static func can access only static member
*/
class family
{

public:
    int height;
    string name;
    static int age;

    int father(int height)
    {
        this->height = height; // here (this->height) belongs to the main height below public and( = height )belongs to parameter
        return height;
    }
    string father_name(string name)
    {
        this->name = name; // here( this->name) belongs to the main name below public and (= name) belongs to parameter
    }

    int static father_age()
    {
        cout << age << endl; // if we use this->age instead of age it will show error( 'this' is unavailable for static member functions)
    }
};

int family::age = 19;

int main()
{
    // now we cann call static member without creating the object
    cout << family::age << endl;
    cout << family::father_age << endl;

    // ALso we cann call static member without creating the object
    family f;
    cout << f.age << endl;
}