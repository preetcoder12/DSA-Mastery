#include <bits/stdc++.h>
using namespace std;

vector<long long> maxProductCount(vector<int> &arr, int n)
{
    unordered_map<long long, int> freq;
    long long minproduct = LLONG_MIN;
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long product = (long long)arr[i] * arr[j];
            freq[product]++; 
        }
    }

    for (auto &[product, count] : freq)
    {
        int quadruple = (count * (count - 1) / 2);
        if (quadruple > maxcount)
        {
            maxcount = quadruple;
            minproduct = product;
        }
        else if (quadruple == maxcount)
        {
            minproduct = min(minproduct, product);
        }
    }
    if (maxcount == 0)
    {
        return {0};
    }
    return {minproduct, maxcount};
}
int main()
{
    vector<int> arr = {1, -2, 1};
    int n = arr.size();
    vector<long long> ans = maxProductCount(arr, n);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}