#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    unordered_map<string, vector<string>> map;
    for (const string &word : inputStr)
    {
        string sortedword = word;
        sort(sortedword.begin(), sortedword.end());
        map[sortedword].push_back(word);
    }
    vector<vector<string>> result;
    for (auto &p : map)
    {
        result.push_back(p.second);
    }
    return result;
}
int main()
{
    vector<string> inputStr = {"cat", "dog", "god", "tca"};
    int n = inputStr.size();
    vector<vector<string>> ans = getGroupedAnagrams(inputStr, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}