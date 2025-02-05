#include <iostream>
using namespace std;
#include <utility> // For std::pair

void getArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void pair_sum_3(int arr[], int n, int key)
{

    int temp;
    int ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    cout << "elements will be " <<arr[i] <<" ," << arr[j]<<" ," << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int n;
    int key;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of key : ";
    cin >> key;
    int *arr = new int[n];

    cout << "Enter the elements of the array:" << endl;
    getArray(arr, n);

    cout << endl;

    pair_sum_3(arr, n, key);
}