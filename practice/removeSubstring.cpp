#include <iostream>
using namespace std;
#include <string>
int minLength(string s)
{
    string target = "AB";
    string target2 = "CD";
    size_t pos;
    size_t pos2;
    while (pos != std::string::npos)
    {
        pos = s.find(target);
        if (pos != std::string::npos)
        {
            s.erase(pos, target.length());
        }
        pos2 = s.find(target2);
        if (pos2 != std::string::npos)
        {
            s.erase(pos2, target2.length());
        }
    }
    return s.length() ;
}

int main()
{
    string s = "ABFCACDB";
    int ans = minLength(s);
    cout << ans << endl;
}