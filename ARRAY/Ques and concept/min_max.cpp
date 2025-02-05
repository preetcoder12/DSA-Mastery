#include <iostream>
using namespace std;

void min_term(int A[], int n)
{
    int i, min;
    min = i;
    for (i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = i;
        }
    }
    cout << "minimum term will be : " << A[min] << endl;
}
void max_term(int A[], int n)
{
    int i, max;
    max = i;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = i;
        }
    }
    cout << "maximum term will be : " << A[max] << endl;
}

int main()
{
    int A[10] = {5, 4, 3, 121, 6, 45, 87, 5, 43, 100};
    min_term(A, 10);
    max_term(A, 10);
    return 0;
}