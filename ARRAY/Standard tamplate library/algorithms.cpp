#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2); 
    v.push_back(5); 
    v.push_back(7); 
    v.push_back(9); 
    
    cout<<"binary search for 5 : "<<binary_search(v.begin(), v.end(),5)<<endl;
    cout<<"Lower bound : "<<lower_bound(v.begin(), v.end(),5)-v.begin()<<endl;
    cout<<"Upper bound : "<<upper_bound(v.begin(), v.end(),5)-v.begin()<<endl;

    int a=10,b=23;
    cout<<"max is : "<<max(a,b)<<endl;
    cout<<"min is : "<<min(a,b)<<endl;

    string k = "India id my country ";
    reverse(k.begin(),k.end());
    cout<<"reverse of string is : "<<k<<endl;
}