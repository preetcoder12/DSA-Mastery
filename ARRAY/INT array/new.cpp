#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "the address of " << num << " is : " << &num << endl;

    int *ptr = &num;
    cout << "the address would be : " << ptr << endl;
    cout << "the value would be " << *ptr << endl;

    cout << "the size of interger num : " << sizeof(num) << endl;
    cout << "the size of pointer is of num : " << sizeof(ptr) << " Because it stores address " << endl;

    // Here we copied the address and the value of ptr into ptr2
    int *ptr2 = ptr;
    cout << "ptr2 : " << ptr2 << endl;
    cout << "*ptr2 : " << *ptr2 << endl;

    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << "Before increasing t : " << t << endl;
    t = t + 1;
    cout << "after increasing t : " << t << endl;

    cout << t << endl;
}