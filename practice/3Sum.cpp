#include <iostream>
#include <vector>
#include <algorithm> //for sorting

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end()); // Sort the array

    for (int i = 0; i < nums.size() - 2; i++)
    {
        // Skip duplicate elements to avoid duplicate triplets
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1, right = nums.size() - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0)
            {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for `left` and `right`
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                // Move both pointers
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++; // Increase the sum by moving `left` pointer
            }
            else
            {
                right--; // Decrease the sum by moving `right` pointer
            }
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (const auto &triplet : result)
    {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }
}