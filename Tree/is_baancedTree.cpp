

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

int maxdepth(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = maxdepth(root->left);
    int right = maxdepth(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

bool isBalanced(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool diff = abs(maxdepth(root->left) - maxdepth(root->right)) <= 1;
    if (left && right && diff)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    node *root = NULL;
    root = createtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 just copy paste it
    cout << "Max depth is  :" << maxdepth(root) << endl;
    bool isbalTree = isBalanced(root);
    if(isbalTree){
        cout<<"Tree is balanced"<<endl;
    }
    else{
        cout<<"Tree is not balanced"<<endl;

    }
    return 0;
}