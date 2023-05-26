#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildtree(Node *root)
{
    int data;
    cout << "Enter the data : " << endl;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left side " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for inserting in right side " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void leveloftraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front(); //   THIS FUNCTION FROM LINE 36 TO 56  IS FOR DESIGNING THE TRREE IN A WELL ARRANGED MANNER

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

int main()
{
    Node *root = NULL;
    root = buildtree(root);

    cout << "PRABHAT MISHRA IA A GOOD BOY " << endl;

    leveloftraversal(root);

    return 0;
}