#include <iostream>
using namespace std;

int main()
{
    int A[7] = {0, 1, 0, 1, 0, 1, 99};
    bool processed[7] = {false};

    for (int i = 0; i < 7; i++)
    {
        if (processed[i])
        {
            continue;
        }

        int count = 1;  
        int num = A[i]; 

        for (int j = i + 1; j < 7; j++)
        {
            if (num == A[j])
            {
                count++;
                processed[j] = true; 
            }
        }

        if (count != 3) 
        {
            cout << num << endl;
        }
    }

    return 0;
}
