/*
Member functions
(constructor)	Construct queue (public member function)
empty	Test whether container is empty (public member function)
size	Return size (public member function)
front	Access next element (public member function)
back	Access last element (public member function)
push	Insert element (public member function)
emplace	Construct and insert element (public member function)
pop	Remove next element (public member function)
swap	Swap contents (public member function)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(50);
    q.push(15);
    q.push(65);
    cout << "BEFORE POP DATA" << endl;
    cout << "size of queue is : " << q.size() << endl;
    cout << "front of queue is : " << q.front() << endl;
    cout << "back of queue is : " << q.back() << endl;
    q.empty() ? cout << "queue is empty" << endl : cout << "queue is not empty" << endl;

    cout << "AFTER POP DATA" << endl;
    q.pop();
    cout << "size of queue is : " << q.size() << endl;
    cout << "front of queue is : " << q.front() << endl;
    cout << "back of queue is : " << q.back() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.empty() ? cout << "queue is empty" << endl : cout << "queue is not empty" << endl;
}