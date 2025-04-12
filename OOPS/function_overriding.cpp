// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class father {
    public :
    
    virtual void eyes(){
        cout<<"i have blue eyes"<<endl;
    }
};
class son : public father {
    public:
    void eyes() override{
        cout<<"i have black eyes"<<endl;
    }
};

int main() {
    
    son s;
    s.eyes();

    return 0;
}