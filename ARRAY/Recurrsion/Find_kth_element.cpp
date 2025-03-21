#include <bits/stdc++.h>
using namespace std;

int findKthElement(vector<int> &arr1, vector<int> &arr2, int k)
{

    int n1 = arr1.size();
    int n2 = arr2.size();

    int n3 = n1 + n2;

    vector<int> mergedarr(n3);

    for (int i = 0; i < n1; i++)
    {
        mergedarr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        mergedarr[n1 + i] = arr2[i];
    }

    sort(mergedarr.begin(), mergedarr.end());
    
    for (int i = 0; i < n3; i++)
    {
        cout << mergedarr[i] << " ";
    }
    cout << endl;
    return mergedarr[k-1];
}

int main()
{
    vector<int> A = {4,6,7};
    vector<int> B = {1,4,7,10};
    int k =4;
    cout << "element at " << k << "th position is : " << findKthElement(A, B, k) << endl;
    return 0;
}