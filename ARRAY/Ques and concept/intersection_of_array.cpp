#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n)
{
    int i, j, k = 0;
    int arr3[n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    // Print the intersection array
    for (i = 0; i < k; i++)
    {
        cout << arr3[i] << endl;
    }
}

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {2, 4, 5};
    intersection(arr1, arr2, 3);

    return 0;
}