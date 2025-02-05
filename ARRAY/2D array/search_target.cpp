#include <iostream>
using namespace std;

bool search(int A[][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3];
    // // row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "enter target to find : ";
    cin >> target ;
    int ans =  search(arr, target, 3, 3);
    if (ans==1){
        cout<<"Target found ! "<<endl;
    }else{
        cout<<"Target not found ! "<<endl;
    }

    return 0;
}