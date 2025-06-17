#include <bits/stdc++.h>
using namespace std;
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	long long maxsum = LLONG_MIN; 
 	long long totalsum = 0 , currsum = 0;
	for(int i = 0;i<n;i++){
		totalsum+=arr[i];
		currsum =(currsum < 0 )?arr[i]:currsum + arr[i]; 
		maxsum  = max(maxsum,currsum);
	}
	if(k==1)return maxsum;

	long long maxkadanetwice = maxsum;

    currsum = LLONG_MIN;
	for(int i=0;i<2*n;i++){
		currsum = (currsum < 0 )?arr[i%n]:currsum + arr[i % n];
		maxkadanetwice = max(currsum , maxkadanetwice);
	}
	return (totalsum > 0) ? maxkadanetwice + (k - 2) * totalsum : maxkadanetwice;

}
int main()
{
    vector<int> arr = {1, -2, 1};
    int n = arr.size();
    int k = 3;
    cout << maxSubSumKConcat(arr, n, k) << endl;
    return 0;
}