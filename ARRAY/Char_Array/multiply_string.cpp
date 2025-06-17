#include <bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2)
{
    int m = num1.size();
    int n = num2.size();
    if (num1 == "0" || num2 == "0")
    {
        return "0";
    }
    vector<int> result(m + n, 0);
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }
    string product;
    bool leads_zero = true;
    for (int n : result)
    {
        if (leads_zero && n == 0)
            continue;
        leads_zero = false;
        product.push_back(n + '0');
    }
    return product;
}
int main()
{
    string num1 = "123";
    string num2 = "456";
    cout << multiply(num1, num2) << endl;
    return 0;
}