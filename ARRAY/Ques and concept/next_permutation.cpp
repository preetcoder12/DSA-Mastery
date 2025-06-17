#include <bits/stdc++.h>
using namespace std;

void nextpermutation(vector<int> &A)
{
    int n = A.size();
    int i = n - 2;

    while (i >= 0 && A[i] >= A[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        int j = n - 1;
        while (A[i] >= A[j])
        {
            j--;
        }
        swap(A[i], A[j]);
    }
    reverse(A.begin() + i + 1, A.end());
}

int main()
{
    vector<int> A = {1, 3, 2};
    nextpermutation(A);
    for (int n : A)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}