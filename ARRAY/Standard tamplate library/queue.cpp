#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "the first element is : " << q.front() << endl;

    q.pop();

    cout << "after poping the first element is : " << q.front() << endl;

    cout << "size " << q.size() << endl;
    cout << "empty-> " << q.empty() << endl;
}