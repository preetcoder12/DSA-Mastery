#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int ele = arr[i];
        while (s.top() >= ele)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(ele);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    int n = arr.size();
    nextSmallerElement(arr, n);
}
