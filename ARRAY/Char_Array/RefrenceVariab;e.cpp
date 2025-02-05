#include <iostream>
using namespace std;
void update(int n)
{
    n++;
}
void update1(int &n)//pass by refrence
{
    n++;
}
int main()
{
    int i = 5;
    int &j = i;

    cout << i << endl;
    cout << j << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 6;
    
    cout << "After update func " << endl;
    update(n);
    cout << n << endl;

    cout << "After update func " << endl;
    update1(n);
    cout << n << endl;
}