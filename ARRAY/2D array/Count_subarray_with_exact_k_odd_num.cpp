#include <bits/stdc++.h>
using namespace std;
int countAtMostK(vector<int> &arr, int k)
{
	int left = 0, right = 0, subarray = 0, odd = 0;
	int n = arr.size();
	if (k < 0)
	{
		return 0;
	}
	while (right < n)
	{
		if (arr[right] % 2 != 0)
		{
			odd++;
		}
		while (odd > k)
		{
			if (arr[left] % 2 != 0)
			{
				odd--;
			}
			left++;
		}
		subarray += (right - left + 1);
		right++;
	}
	return subarray;
}

int distinctSubKOdds(vector<int> &arr, int k)
{
	return (countAtMostK(arr, k) - countAtMostK(arr, k - 1));
}

int main()
{
	vector<int> arr = {1, 2, 7, -4, 3, 2, -10, 9, 1};

	cout << "max sum of subarray is : " << distinctSubKOdds(arr, 1) << endl;
	return 0;
}