#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Presence  of 6  :  " << s.count(6) << endl;
}