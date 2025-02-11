#include <bits/stdc++.h>
using namespace std;
int subArrayCount(vector<int> &arr, int k)
{
    // Write your code here.
    unordered_map<int, int> map;
    int prefix_sum = 0;
    int count = 0;

    for (int n : arr)
    {
        prefix_sum += n;

        int remainder = ((prefix_sum % k) + k) % k;

        if (map.find(remainder) != map.end())
        {
            count += map[remainder];
        }
        map[remainder]++;
    }
    return count;
}

int main()
{ //                 0, 1 ,2  ,3, 4
    vector<int> A = {5, 0, 2, 3, 1};
    int n = A.size();
    cout << subArrayCount(A, n) << endl;
    return 0;
}
