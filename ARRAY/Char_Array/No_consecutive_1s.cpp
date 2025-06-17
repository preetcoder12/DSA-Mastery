#include <bits/stdc++.h>
using namespace std;

void getbinarystring(int N, string str, vector<string> &result)
{
    if (str.length() == N)
    {
        result.push_back(str);
        return;
    }
    getbinarystring(N, str + "0", result);
    if (str.empty() || str.back() != '1')
    {
        getbinarystring(N, str + "1", result);
    }
}

vector<string> generateString(int N)
{
    vector<string> result;
    getbinarystring(N, "", result);
    return result;
}

int main()
{
    int N = 5;
    vector<string> result = generateString(N);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}