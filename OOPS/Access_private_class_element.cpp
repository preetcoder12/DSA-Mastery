#include <iostream>
using namespace std;

class powers
{
private:
    int health;
    char level;

public:
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char l)
    {
        level = l;
    }
};
int main()
{
    powers p;
    p.sethealth(5);
    cout << "by accessing private class property it is : " << p.gethealth() << endl;
    p.setlevel('C');
    cout << "by accessing private class property it is : " << p.getlevel() << endl;
}