#include <bits/stdc++.h>
using namespace std;

int lngstsequence(vector<int> std)
{
    if (std.empty())
    {
        return 0;
    }
    sort(std.begin(), std.end());
    int n = std.size();
    int currseq = 1;
    int maxseq = 1;

    for (int i = 1; i < n; i++)
    {
        if (std[i] == std[i - 1])
        {
            continue;
        }
        if (std[i] == std[i - 1] + 1)
        {
            currseq++;
        }
        else
        {
            maxseq = max(maxseq, currseq);
        }
    }
    return max(maxseq, currseq);
}
int main()
{
    vector<int> std = {100, 4, 200, 1, 3, 2};
    int ans = lngstsequence(std);
    cout << ans << endl;
    return 0;
}