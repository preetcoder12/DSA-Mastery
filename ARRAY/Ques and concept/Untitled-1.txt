#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(vector<int> &arr)
{
    map<int,int>freq;
    vector<int>arr2;

    for(int num : arr){
        freq[num]++;
    }
   
    for(auto &p : freq){
        if((p.second) > 1){
            arr2.push_back(p.first);
        }
    }
    return arr2;
}

int main()
{
    vector<int> arr = {1,3,43,34,22,3,3,4,231,3,21,331,312,32};
    vector<int> ans = duplicates(arr);
    for(int num : ans){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}