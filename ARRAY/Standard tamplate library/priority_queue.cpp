#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;

    cout << "the maximum priority" << endl;
    maxi.push(1);
    maxi.push(4);
    maxi.push(7);
    maxi.push(2);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << "the minimum priority" << endl;
    mini.push(1);
    mini.push(4);
    mini.push(7);
    mini.push(2);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}