#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1; 

    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<&ptr1<<endl;

    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;
    cout<<&ptr2<<endl;
}