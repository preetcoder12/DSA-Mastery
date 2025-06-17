#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Preet";
    m[2] = "Gusain";
    m[11] = "Male";

    m.insert({5, "akash"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "presence of 11 : " << m.count(11) << endl;
    cout << "before erase" << endl;
    m.erase(2);

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "after erase" << endl;
}