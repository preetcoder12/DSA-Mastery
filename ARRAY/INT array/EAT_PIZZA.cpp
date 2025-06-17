#include <bits/stdc++.h>
using namespace std;

long long maxWeight(vector<int> &pizzas)
{
    sort(pizzas.begin(), pizzas.end());
    int n = pizzas.size();
    int crntindex = n - 1;
    long long maxWeight = 0;
    int totaldays = n / 4;
    for (int i = 1; i <= totaldays; i += 2)
    {
        maxWeight += pizzas[crntindex--];
    }
    crntindex--;
    for (int i = 2; i <= totaldays; i += 2)
    {
        maxWeight += pizzas[crntindex];
        crntindex -= 2;
    }
    return maxWeight;
}
int main(){
    vector<int >a = {1,2,3,4,5,6,7,8};
    cout<<"max weight gain is : "<<maxWeight(a)<<endl;
    return 0;
}