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

pair<int, int> pair_sum_2(int arr[], int n, int key)
{

    int temp;
    int ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                return make_pair(arr[i], arr[j]);
            }
        }
    }
    return make_pair(-1, -1);
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

    pair<int, int> result = pair_sum_2(arr, n, key);

    if (result.first != -1)
    {
        cout << "Pair found: " << result.first << " and " << result.second << endl;
    }
    else
    {
        cout << "No pair found with the sum equal to " << key << endl;
    } 


}