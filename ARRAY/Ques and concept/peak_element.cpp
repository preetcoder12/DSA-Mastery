#include <iostream>
using namespace std;

int peak_element(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[5] = {1, 2, 6, 3, 4};
    cout << "peak element is at index " << peak_element(arr, 5) << endl;
    return 0;
}