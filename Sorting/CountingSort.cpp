#include <bits/stdc++.h>
using namespace std;

vector<int> countsort(vector<int> &arr)
{
    int maxval = *max_element(arr.begin(), arr.end());
    int minval = *min_element(arr.begin(), arr.end());
    int range = maxval - minval + 1;

    vector<int> freq(range, 0);

    for (int num : arr)
    {
        freq[num - minval]++;
    }
    vector<int> sorted_arr;

    for (int i = 0; i < range; i++)
    {
        while (freq[i] > 0)
        {
            sorted_arr.push_back(i + minval);
            freq[i]--;
        }
    }
    return sorted_arr;
}
int main()
{
    vector<int> A = {3,5,4,7,6,2,1,5,3};
    vector<int> ans = countsort(A);
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}