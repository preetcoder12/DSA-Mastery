#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main()
{
    node *n = new node(10);
    cout << n->data << endl;
    cout << n->prev << endl;
    cout << n->next << endl;
}