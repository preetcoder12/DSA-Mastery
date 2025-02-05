#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.empty() << endl;
    cout << d.at(1) << endl;


}