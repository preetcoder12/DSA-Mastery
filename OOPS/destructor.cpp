
#include <iostream>
using namespace std;

class family
{

public:
    int height;
    string name;

    int father(int height)
    {
        this->height = height; // here (this->height) belongs to the main height below public and( = height )belongs to parameter
        return height;
    }
    string father_name(string name)
    {
        this->name = name; // here( this->name) belongs to the main name below public and (= name) belongs to parameter
    }

    ~family() // destructor = is used to deallocate memory
    {
        cout << "desrtuctor called" << endl;
    }
};
int main()
{ 
    family f1; //for statically allocation the destructor is called 
    cout << f1.father(4) << endl;

    family *f2 = new family();//for dynamically allocation the destructor is not called 
    delete f2; //if we delete f2 then again destructor will call as we anually calling
   
}