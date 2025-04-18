#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class ComplexNumbers
{
    int real, imaginary;

public:
    ComplexNumbers(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    void plus(ComplexNumbers &c)
    {
        real += c.real;
        imaginary += c.imaginary;
    }
    void multiply(ComplexNumbers &c)
    {
        int realnumber = real * c.real - imaginary * c.imaginary;
        int imaginarynumber = real * c.imaginary + imaginary * c.real;
        real = realnumber;
        imaginary = imaginarynumber;
    }
    void print()
    {
        cout << real << " + i" << imaginary << endl;
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}