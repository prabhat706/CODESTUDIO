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

Node *buildtrees(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for the left side of root " << data << endl;
    root->left = buildtrees(root->left);
    cout << "Enter the data for the right side of root " << data << endl;
    root->right = buildtrees(root->right);
    return root;
}
void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
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
int countLeafNodes(Node *root)
{
    int count = 0;
    if (root == NULL)
    {
        return -1;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
        count++;
    }
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}
int main()
{
    Node *root = NULL;
    root = buildtrees(root);
    cout << "LEVELORDERTRAVERSAL IS " << endl;
    levelorderTraversal(root);
    cout << "Leaf Nodes in Binary trees are " << countLeafNodes(root) << endl;
}