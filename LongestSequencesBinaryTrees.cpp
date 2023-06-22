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
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for the left side for root " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for the right side for root " << data << endl;
    root->right = buildtree(root->right);

    return root;
}
void longestConsecutiveSequences(Node *root, int currLength, int expected, int &res)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == expected)
        currLength++;
    else
        currLength = 1;

    res = max(res, currLength);
    longestConsecutiveSequences(root->left, currLength, root->data + 1, res);
    longestConsecutiveSequences(root->right, currLength, root->data + 1, res);
}

int longestSequences(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int res = 0;
    longestConsecutiveSequences(root, 0, root->data, res);
    return res;
}

int main()
{
    Node *root = NULL;
    root = buildtree(root);
    cout << "Longest Sequences is : " << longestSequences(root);
}