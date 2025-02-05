#include <bits/stdc++.h>
using namespace std;
int firstMissing(int a[], int n)
{
    int ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        while (a[i] > 0)
        {
            ans = a[i];
            if (ans + 1 < a[i + 1])
            {
                return ans + 1;
            }
        }
    }
}

int main()
{
    int a[5] = {7, 8, 9, 11, 12};
    cout << firstMissing(a, 5) << endl;
}