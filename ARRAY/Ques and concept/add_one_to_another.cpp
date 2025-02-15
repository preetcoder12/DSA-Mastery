#include <bits/stdc++.h>
using namespace std;

vector<int> addOneToNumber(vector<int> &arr)
{
    // Remove leading zeros before processing
    while (arr.size() > 1 && arr[0] == 0)
    {
        arr.erase(arr.begin());
    }

    int n = arr.size();

    // Add 1 to the last digit and propagate carry if needed
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i] += 1;
            return arr;
        }
        arr[i] = 0;
    }

    // If carry is still present, add 1 at the beginning
    arr.insert(arr.begin(), 1);

    return arr;
}
int main()
{
}