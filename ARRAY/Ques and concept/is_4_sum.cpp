#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    string ans = "";
    sort(arr.begin(),arr.end());

    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int left = j+1;
            int right = n-1;
            while(left < right)
            {
                int sum = arr[i] + arr[j] + arr[left] + arr[right];
                if (sum == target)
                    return "Yes";
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }
    }
    return "No";
}


int main()
{
    vector<int> arr = {1, 3, 3, 10, 2};
    int target = 9;
    int n = arr.size();
    string ans = fourSum(arr, target, n);
    cout << ans << endl;
    return 0;
}