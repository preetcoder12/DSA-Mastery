#include <iostream>
#include <climits>
using namespace std;

int minsubarray(int *a, int n, int p)
{
    int sum = 0;
    int min_ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if (sum % p == 0)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if ((sum - a[i]) % p == 0)
        {
            min_ans = min(min_ans, a[i]);
        }
    }
    if (min_ans == INT_MAX)
    {
        return -1;
    }

    return min_ans;
}

int main()
{
    int a[4] = {6, 3, 5, 2};
    int p = 9;
    cout << minsubarray(a, 4, p) << endl;
}
