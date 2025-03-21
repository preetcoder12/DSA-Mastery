#include <bits/stdc++.h>
using namespace std;

int countlessmid(vector<vector<int>> &matrix, int mid, int N, int M)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }
    return count;
}

int getMedian(vector<vector<int>> &matrix)
{
    int low = 0;
    int high = 1e5;
    int N = matrix.size();
    int M = matrix[0].size();
    int midIndex = (N * M) / 2;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int count = countlessmid(matrix, mid, N, M);

        if (count <= midIndex)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    // 2 6 8
    // 1 4 7
    // 6 8 9
    vector<vector<int>> matrix = {{2, 6, 9}, {1, 4, 7}, {6, 8, 9}};
    cout << getMedian(matrix) << endl;
    return 0;
}