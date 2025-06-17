

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

void indorderfortotalnodes(node *root, int &cnt) // LNR
{
    if (root == NULL)
    {
        return;
    }
    indorderfortotalnodes(root->left, cnt);
    cnt++;
    indorderfortotalnodes(root->right, cnt);
}
void indorderforleafnodes(node *root, int &cnt) // LNR
{
    if (root == NULL)
    {
        return;
    }
    indorderforleafnodes(root->left, cnt);
    if (root->left == NULL && root->right == NULL)
    {
        cnt++;
    }
    indorderforleafnodes(root->right, cnt);
}

int countNodes(node *root)
{
    int cnt = 0;
    indorderfortotalnodes(root, cnt);
    return cnt;
}
int count_LEAF_Nodes(node *root)
{
    int cnt = 0;
    indorderforleafnodes(root, cnt);
    return cnt;
}

int main()
{
    node *root = NULL;
    root = createtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 just copy paste it
    cout << "Total nodes are :" << countNodes(root) << endl;
    cout << "Total leaf nodes are :" << count_LEAF_Nodes(root) << endl;

    return 0;
}