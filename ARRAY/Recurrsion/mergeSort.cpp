#include <iostream>
using namespace std;

void merge(int A[], int s, int e)
{
    // breaking array into two pieces of len1 and len2

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    int mainArrayindex = s;
//first we add value from s to len1 into first array
    for (int i = 0; i < len1; i++)
    {
        first[i] = A[mainArrayindex++];
    }
//then  we add value from mid +1 to len2 into second array
    mainArrayindex = mid + 1;

    for (int j = 0; j < len2; j++)
    {
        second[j] = A[mainArrayindex++];
    }

    // merging both array

    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            A[mainArrayindex++] = first[index1++];
        }
        else
        {
            A[mainArrayindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        A[mainArrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        A[mainArrayindex++] = second[index2++];
    }
}

void mergeSort(int A[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    mergeSort(A, s, mid);
    mergeSort(A, mid + 1, e);
    merge(A, s, e);
}

int main()
{
    int A[10] = {9, 8, 45, 76, 23, 56, 3, 2, 1, 34};
    int n = 10;
    mergeSort(A, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}