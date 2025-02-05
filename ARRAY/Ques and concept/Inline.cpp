#include <iostream>
using namespace std;

inline int getMax(int& a, int& b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 3;
    int b = 4;
    int ans = getMax(a, b);
    cout << ans << endl;

    a++;
    b++;
    
    ans = getMax(a, b);
    cout << ans << endl;

}