#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

  int numerator , denominator;
  public:


  Fraction(int num , int den){
      numerator = num;
      denominator = den;
  }

  void simplify(){
    int gcd = __gcd(numerator , denominator);
    numerator /=gcd;
    denominator /=gcd;
  }

  void add(Fraction &f){
    numerator = numerator*f.denominator + f.numerator*denominator;
    denominator = denominator*f.denominator;
    simplify();
  }

  void multiply(Fraction &f){
    numerator  = numerator * f.numerator;;
    denominator = denominator*f.denominator;
    simplify();
  }

  void print() {
    cout << numerator << "/" << denominator << endl;
  }

};

int main() {

    int num1, den1;
    cin >> num1 >> den1;  // Input for the first fraction

    // Create the first fraction
    Fraction f1(num1, den1);

    int queries;
    cin >> queries;  // Number of operations (queries)

    while (queries--) {
        int type, num2, den2;
        cin >> type >> num2 >> den2;  // Type of operation (1 for add, 2 for multiply), and the second fraction

        // Create the second fraction
        Fraction f2(num2, den2);

        if (type == 1) {
            // Perform addition
            f1.add(f2);
            f1.print();  // Output the result after addition
        } else if (type == 2) {
            // Perform multiplication
            f1.multiply(f2);
            f1.print();  // Output the result after multiplication
        }
    }

    return 0;
}