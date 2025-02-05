#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    for (int s = 0; s < n; s++)
    {

        if (s < e)
        {
            swap(arr[s], arr[e]);
            e--;
        }
    }

}

int main()
{
    vector<int> arr = {1, 4, 3, 2, 6, 5};
    reverseArray(arr);
    return 0;
}
