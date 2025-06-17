#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{

    int i = 0;
    int n = height.size();
    int j = n - 1;
    if (n == 0 || n == 1)
    {
        return 0;
    }

    int maxarea = 0;

    while (i < j)
    {
        int hori_diff = j - i;
        int vert_diff = min(height[i], height[j]);
        int calc_area = hori_diff * vert_diff;
        maxarea = max(maxarea, calc_area);

        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return maxarea;
}

int main()
{
    vector<int> A = {1, 2, 1};
    cout << maxArea(A) << endl;
    return 0;
}