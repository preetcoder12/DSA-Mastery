#include <bits/stdc++.h>
using namespace std;

    int getMinDiff(vector<int> &arr, int k)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int result = arr[n - 1] - arr[0];
        if (n == 0 || n == 1)
        {
            return 0;
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < k)
            {
                continue;
            }

            int minh = min(arr[0] + k, arr[i] - k);
            int maxh = max(arr[i - 1] + k, arr[n - 1] - k);
            result = min(result, maxh - minh);
        }
        return result;
    }

int main()
{
    vector<int> a = {1, 8, 10, 6, 4, 6, 9, 1};
    int k = 3;
    cout << getMinDiff(a, k) << endl;
}