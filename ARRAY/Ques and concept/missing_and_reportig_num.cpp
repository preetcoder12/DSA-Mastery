#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    int cnt = 0;

    int a;
    int b;

    int sum = 0;
    int sum2 = 0;
    for (int i = 1; i < n+1; i++)
    {
        sum2 += i;
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                if (cnt == 1)
                {
                    a = arr[j];
                }
            }
        }
    }
    cout << "sum: " << sum << endl;
    int ans = sum - a;
    cout << "a: " << a << endl;
    cout << "ans: " << ans << endl;
    cout << "sum2: " << sum2 << endl;
    b = sum2 - ans;
    cout << "b:" << b << endl;

    return {b, a};
}
int main()
{
    vector<int> arr = {5, 4, 2, 4, 1};
    int n = arr.size();
    pair<int, int> result = missingAndRepeating(arr, n);
    cout << "Missing: " << result.first << ", Repeating: " << result.second << endl;
    return 0;
}