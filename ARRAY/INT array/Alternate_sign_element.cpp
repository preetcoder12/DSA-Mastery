#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int i = 0;
    int j = 0;

    vector<int> positive;
    vector<int> negative;
    vector<int> ans;

    for (int n : nums)
    {
        if (n > 0)
        {
            positive.push_back(n);
        }
        else
        {
            negative.push_back(n);
        }
    }
    while (i < positive.size() && j < negative.size())
    {
        ans.push_back(positive[i++]);
        ans.push_back(negative[j++]);
    }
    while (i < positive.size())
    {
        ans.push_back(positive[i++]);
    }
    while (j < negative.size())
    {
        ans.push_back(negative[j++]);
    }

    return ans;
}
int main()
{
    vector<int> A = {1, 2, -3, 4, -4, -5};
    vector<int> result = rearrangeArray(A);
    for (int n : result)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
