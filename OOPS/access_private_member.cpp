// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class A {
    int private_int ;
    void preet(int private_int){
        cout<<"i have  "<<private_int<<" number of pens."<<endl;
    }
    public:
    void setter(int a){
        private_int = a;
    }
    void getter (){
        cout<<"age is : "<<private_int<<endl;
    }
};


int main() {
    
    A a;
    a.setter(12);
    a.getter();

    return 0;
}