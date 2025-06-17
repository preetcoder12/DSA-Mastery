#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform counting sort based on a significant place (exp)
void countingSort(vector<int> &arr, int exp)
{
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(vector<int> &arr)
{
    int maxval = *max_element(arr.begin(), arr.end());
    for(int exp = 1 ; maxval/exp > 0 ; exp *=10){
        countingSort(arr,exp);
    }
}

int main()
{
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    radixSort(arr);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
