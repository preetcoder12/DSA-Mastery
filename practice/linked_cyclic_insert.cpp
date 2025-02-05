#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertEnd(node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        // List is empty, create a new node and form a circular link
        node *temp = new node(d);
        temp->next = temp; // The new node points to itself to form a circular list
        tail = temp;
    }
    else
    {
        // Traverse the list to find the node with the given element
        node *current = tail;
        do
        {
            if (current->data == element)
            {
                // Insert new node after the current node
                node *newnode = new node(d);
                newnode->next = current->next;
                current->next = newnode;

                // Update tail if we inserted after the last node (i.e., current is tail)
                if (current == tail)
                {
                    tail = newnode;
                }
                return;
            }
            current = current->next;
        } while (current != tail->next); // Full loop around the circular list
    }
}

void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    node *temp = tail->next; // Start from the node next to the tail (head)
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next); // Print until we reach the head again
    cout << endl;
}

int main()
{
    node *tail = NULL;

    // Since the list is empty initially, this will add the first node with value 4
    insertEnd(tail, 3, 4); 
    // Now insert nodes with values 6 and 7 after element 4 and 6 respectively
    insertEnd(tail, 4, 6); 
    insertEnd(tail, 6, 7);

    // Print the circular linked list
    print(tail); // Output should be: 4 6 7

    return 0;
}
