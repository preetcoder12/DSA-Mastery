#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(4);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(5);
    cout << "capacity " << v.capacity() << endl;

    v.push_back(8);
    cout << "capacity " << v.capacity() << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(3) << endl;

    v.pop_back();

    cout << "before clear size  " << v.size() << endl;
    v.clear();
    cout << "after clear size  " << v.size() << endl;

    vector<int> b(5, 1);
    for (int i : b)
    {
        cout << i<<" ";
    }
    cout << endl;
}