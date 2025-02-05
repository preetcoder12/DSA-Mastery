#include <bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(vector<int> &a)
{

    int total = 0;

    for (int i = 0; i < 6; i++)
    {
        total += a[i];
    }

    int left = 0;
    for (int i = 0; i < 6; i++)
    {
        int right = total - left - a[i];
        if (left == right)
        {
            return i;
        }
        left += a[i];
    }
    return -1;
}

int main()
{

    vector<int> a = {1, 2, 2, 9, 3, 2};
    cout << findEquilibriumIndex(a) << endl;
}
