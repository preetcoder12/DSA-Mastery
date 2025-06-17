#include <bits/stdc++.h>
using namespace std;

int subArrayCount(vector<int> &arr, int k)
{
    unordered_map<int, int> remainderCount;
    remainderCount[0] = 1; // Initial condition (empty subarray)

    int prefixSum = 0, count = 0;

    for (int num : arr)
    {
        prefixSum += num;

        // Compute remainder and normalize it to be non-negative
        int remainder = ((prefixSum % k) + k) % k;

        // Index	Element	Prefix Sum	Remainder (% 5)	remainderCount Before Check	Count (updated)
        //  -	-	         0	       0	            {0: 1}	                        0
        //  0	3	         3	       3	            {0: 1}	                        0
        //  1	1	         4	       4	            {0: 1, 3: 1}	                0
        //  2	4	         8	       3	            {0: 1, 3: 1, 4: 1}	            1 (found 3 before)
        //  3	2	         10       0             	{0: 1, 3: 2, 4: 1}	            2 (found 0 before)
        //  4	2	         12       2             	{0: 2, 3: 2, 4: 1}	            2

        // If this remainder was seen before, add its count to result
        if (remainderCount.find(remainder) != remainderCount.end())
        // remainderCount.end() is after the last value which also mean map finishes
        // and if it is not raminderCount.end() it menas remainder is present
        {
            count += remainderCount[remainder];
        }

        // Store this remainder for future elements
        remainderCount[remainder]++;
    }

    return count;
}

// Driver code
int main()
{
    vector<int> arr = {101, 2, 1};
    int k = 5;
    cout << "Count of subarrays: " << subArrayCount(arr, k) << endl; // Output: 6
    return 0;
}
