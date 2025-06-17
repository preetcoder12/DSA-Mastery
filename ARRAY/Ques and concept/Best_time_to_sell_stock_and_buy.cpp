#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int sum = 0;
    int maxprofit = 0;
    int minprice = INT_MAX;
    for (int price : prices)
    {
        if (price < minprice)
        {
            minprice = price;
        }
        else
        {
            maxprofit = max(maxprofit, price - minprice);
        }
    }
    return maxprofit;
}

int main()
{
    vector<int> A = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(A);
    cout << "Maxprofit is : " << ans << endl;
}