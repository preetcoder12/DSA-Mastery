#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<int> st;
    stack<int> st2;
    int ele;
    int i = 0;

    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);

    int n = st.size();
    int mid_index = n / 2;

    while (i < mid_index)
    {
        ele = st.top();
        cout << "element added to st2 stack = " << ele << endl;
        st2.push(ele);
        st.pop();
        i++;
    }
    cout << "mid element removed = " << st.top() << endl;
    st.pop();

    while (!st2.empty())
    {
        int ele2 = st2.top();
        cout << ele2 << endl;
        st.push(ele2);
        st2.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
