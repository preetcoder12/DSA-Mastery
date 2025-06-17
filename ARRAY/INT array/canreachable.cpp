#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int reachable = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > reachable)
        {
            return false;
        }
        reachable = max(reachable, i + nums[i]);
    }
    return true;
}
int main()
{
    vector<int> A = {2, 3, 1, 1, 4};
    bool ans = canJump(A);
    if (ans)
    {

        cout << "can reachable" << endl;
    }
    else
    {
        cout << "not reachable" << endl;
    }
    return 0;
}