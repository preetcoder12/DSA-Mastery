#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &A)
{
    int n = A.size();
    int max = INT_MIN;
    int second_max = INT_MIN;

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return A[0];
    }
    for (int num : A)
    {
        if (num > max)
        {
            max = num;
        }
    }
    for (int num : A)
    {
        if (num > second_max && num < max)
        {
            second_max = num;
        }
    }
    return second_max;
}

int main()
{
    vector<int> A = {2,3};
    sort(A.begin(), A.end());
    for (int num : A)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << "second largest num will be : " << secondLargest(A) << endl;
    return 0;
}