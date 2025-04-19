#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    int n = grid.size();
    int total = n * n;
    vector<int> freq(total + 1, 0);

    for (const auto &row : grid)
    {
        for (int n : row)
        {
            freq[n]++;
        }
    }

    int repeat = -1;
    int missing = -1;

    for (int i = 1; i <= total; ++i)
    {
        if (freq[i] == 2)
        {
            repeat = i;
        }
        else if (freq[i] == 0)
        {
            missing = i;
        }
    }
    return {repeat, missing};
}

int main()
{
    vector<vector<int>> A = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    vector<int> ans = findMissingAndRepeatedValues(A);
    for (int i = 0; i < A.size(); i++)
    {

        if (i == 0)
        {
            cout << "repeat: " << ans[i] << " ";
        }
        else if (i == 1)
        {
            cout << "mising: " << ans[i];
        }
        cout << endl;
    }
}