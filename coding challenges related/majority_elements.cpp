#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;

    // Using Boyer-Moore Voting Algorithm

    int candidate1 = -1, candidate2 = -1, cnt1 = 0, cnt2 = 0;
    for (int num : arr)
    {
        if (num == candidate1)
        {
            cnt1++;
        }
        else if (num == candidate2)
        {
            cnt2++;
        }
        else if (cnt1 == 0)
        {
            candidate1 = num;
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            candidate2 = num;
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    // Step 2: Verify the candidates

    cnt1 = 0, cnt2 = 0;
    for (int num : arr)
    {
        if (num == candidate1)
        {
            cnt1++;
        }
        else if (num == candidate2)
        {
            cnt2++;
        }
    }

    if (cnt1 > n / 3)
    {
        ans.push_back(candidate1);
    }
    if (cnt2 > n / 3)
    {
        ans.push_back(candidate2);
    }
    sort(ans.begin(), ans.end());

    return ans;
}
int main()
{
    vector<int> arr = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    vector<int> ans = findMajority(arr);
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
}