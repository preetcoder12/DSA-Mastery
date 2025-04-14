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
        cout << "Enter the root value for the tree: " << endl;
        int data;
        cin >> data;
        root = new node(data);

        if (data == -1)
        {
            return NULL;
        }

        cout << "Enter the left value : " << endl;
        root->left = createtree(root->left);

        cout << "Enter the right value : " << endl;
        root->right = createtree(root->right);

        return root;
    }

    void leveloforder(node *root)
    {
        if (root == NULL)
            return;

        queue<node *> q;
        q.push(root);
        q.push(NULL); // Level separator

        while (!q.empty())
        {
            node *temp = q.front();
            q.pop();

            if (temp == NULL)
            {
                cout << endl; // End of current level

                if (!q.empty())
                {
                    q.push(NULL); // Add level separator for next level
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

    int main()
    {
        node *root = NULL;
        root = createtree(root);
        leveloforder(root);
        return 0;
    }