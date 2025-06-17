
/*
begin	Return iterator to beginning (public member function)
end	Return iterator to end (public member function)
rbegin	Return reverse iterator to reverse beginning (public member function)
rend	Return reverse iterator to reverse end (public member function)
cbegin	Return const_iterator to beginning (public member function)
cend	Return const_iterator to end (public member function)
crbegin	Return const_reverse_iterator to reverse beginning (public member function)
crend	Return const_reverse_iterator to reverse end (public member function)

Capacity:
size	Return size (public member function)
max_size	Return maximum size (public member function)
resize	Change size (public member function)
empty	Test whether container is empty (public member function)
shrink_to_fit	Shrink to fit (public member function)

Element access:
operator[]	Access element (public member function)
at	Access element (public member function)
front	Access first element (public member function)
back	Access last element (public member function)

Modifiers:
assign	Assign container content (public member function)
push_back	Add element at the end (public member function)
push_front	Insert element at beginning (public member function)
pop_back	Delete last element (public member function)
pop_front	Delete first element (public member function)
insert	Insert elements (public member function)
erase	Erase elements (public member function)
swap	Swap content (public member function)
clear	Clear content (public member function)
emplace	Construct and insert element (public member function)
emplace_front	Construct and insert element at beginning (public member function)
emplace_back	Construct and insert element at the end (public member function)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(10);
    d.push_back(11);
    cout << "front is :" << d.front() << endl;
    cout << "back is : " << d.back() << endl;
    cout << "size is : " << d.size() << endl;

    cout << endl;

    d.pop_front();
    cout << "after pop front" << endl;
    cout << "front is :" << d.front() << endl;
    cout << "back is : " << d.back() << endl;
    cout << "size is : " << d.size() << endl;
    (d.empty()) ? cout << "deque is empty" << endl : cout << "deque is not empty" << endl;
    cout << endl;

    d.pop_back();
    cout << "after pop back" << endl;
    cout << "front is :" << d.front() << endl;
    cout << "back is : " << d.back() << endl;
    cout << "size is : " << d.size() << endl;
    (d.empty()) ? cout << "deque is empty" << endl : cout << "deque is not empty" << endl;
    cout << endl;
}
