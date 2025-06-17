
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowcount = 1;
    int lastpos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastpos >= mid)
        {
            cowcount++;
            if (cowcount == k)
            {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
            
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> A = {4, 5, 2, 3, 1};
    int k = 2;
    cout << "max idstance possible between cows are :" << aggressiveCows(A, k) << endl;
    return 0;
}