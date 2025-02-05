#include <iostream>
using namespace std;

int main()
{
    int A[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = A[0];
    int crnt_sum = A[0];

    for (int i = 1; i < 9; i++)
    {
        crnt_sum = max(A[i], A[i] + crnt_sum);
        ans = max(ans, crnt_sum);
    }

    cout << ans << endl;
}
