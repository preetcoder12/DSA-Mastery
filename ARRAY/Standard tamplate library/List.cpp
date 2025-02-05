#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(2);
    l.push_front(43);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase " << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size -> " << l.size() << endl;
    
}