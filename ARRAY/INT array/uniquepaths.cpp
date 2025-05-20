#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    long long res = 1;
    for (int i = 1; i <= m - 1; i++)
    {
        res = res * (n - 1 + i) / i;
    }
    return (int)res;
}
int main()
{
    int m = 3, n = 2;
    cout << "Possible unique paths are : " << uniquePaths(m, n) << endl;
    return 0;
}