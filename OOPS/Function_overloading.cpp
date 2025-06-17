// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class A {
    public :
    void age(int i){
        cout<<"age : "<<i<<endl;
    }
    void age(double d){
        cout<<"age : "<<d<<endl;
    }
    void age(string s){
        cout<<"age : "<<s<<endl;
    }
};

int main() {
    
    A a;
    a.age(34);
    a.age(32.12);
    a.age("N/a");
    return 0;

    return 0;
}