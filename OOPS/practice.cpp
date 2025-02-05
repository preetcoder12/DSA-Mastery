#include <iostream>
using namespace std;

class A
{
public:
    int real;
    int image;

    // Constructor to initialize complex number
    A(int real = 0, int image = 0)
    {
        this->real = real;
        this->image = image;
    }

    // Function to input complex number data
    void getdata(int real, int image)
    {
        this->real = real;
        this->image = image;
    }

    // Function to display complex number
    void display()
    {
        cout << real << "+" << image << "i" << endl;
    }

    // Operator overloading for + operator
    A operator+(const A &other)
    {
        A result;
        result.real = this->real + other.real;
        result.image = this->image + other.image;
        return result;
    }
};

int main()
{
    A c1(3, 4), c2(1, 2); // Creating two complex numbers
    A c3 = c1 + c2;       // Adding the complex numbers using overloaded + operator
    c3.display(); // Display the result
}
