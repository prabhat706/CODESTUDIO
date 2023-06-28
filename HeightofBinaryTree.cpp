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

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter the data for the root : " << endl;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for the left side for root : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for the right side for root : " << data << endl;
    root->right = buildTree(root->right);
}

int HeightofBinaryTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = HeightofBinaryTree(root->left);
    int rightHeight = HeightofBinaryTree(root->right);

    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    cout << "Height of Binary Tree is " << HeightofBinaryTree(root) << endl;
}