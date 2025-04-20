#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createtree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left  : " << endl;
    root->left = createtree(root->left);
    cout << "Enter the data for right  : " << endl;
    root->right = createtree(root->right);
    return root;
}

void printTree(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // as a seperator
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void indorder(node *root) // LNR
{
    if (root == NULL)
    {
        return;
    }
    indorder(root->left);
    cout << root->data << " ";
    indorder(root->right);
}
void preorder(node *root) // NLR
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    indorder(root->left);
    indorder(root->right);
}
void postorder(node *root) // LRN
{
    if (root == NULL)
    {
        return;
    }
    indorder(root->left);
    indorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    root = createtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 just copy paste it
    printTree(root);
    cout << endl;

    cout << "Inorder : ";
    indorder(root);
    cout << endl;

    cout << "Prerder : ";
    preorder(root);
    cout << endl;

    cout << "Postrder : ";
    postorder(root);
    cout << endl;

    return 0;
}