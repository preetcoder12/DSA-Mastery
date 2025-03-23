

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

void printlist(node *&num1)
{
    node *temp = num1;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void deletelist(node *&num1)
{
    node *temp;
    while (num1 != NULL)
    {
        temp = num1;
        num1 = num1->next;
        delete temp;
    }
    num1 = NULL;
}

void InserEnd(node *&num1, int n)
{
    node *temp = new node(n);
    if (num1 == NULL)
    {
        num1 = temp;
        return;
    }
    node *temp2 = num1;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

node *addTwoNumbers(node *num1, node *num2)
{
    int carry = 0;
    node *num3 = NULL;
    while (num1 != NULL || num2 != NULL || carry != 0)
    {
        int sum = carry;
        if (num1 != NULL)
        {
            sum += num1->data;
            num1 = num1->next;
        }
        if (num2 != NULL)
        {
            sum += num2->data;
            num2 = num2->next;
        }
        carry = sum / 10;
        sum = sum % 10;
        InserEnd(num3, sum);
    }
    return num3;
}

int main()
{
    node *num1 = NULL;
    node *num2 = NULL;

    cout << "num1" << endl;
    InserEnd(num1, 3);
    InserEnd(num1, 6);
    InserEnd(num1, 5);

    cout << "num2" << endl;
    InserEnd(num2, 2);
    InserEnd(num2, 4);
    InserEnd(num2, 8);

    printlist(num1);
    printlist(num2);

    cout << "sum" << endl;
    node *num3 = addTwoNumbers(num1, num2);
    printlist(num3);

    deletelist(num1);
    return 0;
}