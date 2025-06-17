#include <bits/stdc++.h>
using namespace std;

int minElementsToRemove(vector<int> &arr)
{
    map<int, int> fre;

    for (auto num : arr)
    {
        fre[num]++;
    }

    int duplicatesremoved = 0;

    for (auto &p : fre) 
    {
        if (p.second > 1)
        {
            duplicatesremoved += (p.second - 1);
        }
    }
    return duplicatesremoved;
}

int main()
{
    vector<int> A = {3, 6, 7, 12, 13};
    cout << minElementsToRemove(A) << endl;
    return 0;
}