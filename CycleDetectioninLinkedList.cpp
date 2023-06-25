#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// bool isCycle(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return false;
//     }
//     unordered_map<Node *, bool> visited;

//     Node *temp = head;

//     while (temp != NULL)
//     {
//         if (visited[temp] == true)
//         {
//             cout << "Present at Element " << temp->data << endl;
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return true;
// }

// FLYODS CYCLE DETECTION ALGORITHIM IN LOOP

bool isCycle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void insertatHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertatPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    { // 1.)          INSERT AT HEAD IN CASE OF POSITION
        insertatHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertatTail(tail, data);
        return;
    }
    Node *nodetoInsert = new Node(data);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(12);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    Node *position = node1;
    // print(head);

    insertatTail(tail, 21);
    // print(head);
    insertatTail(tail, 25);
    // print(head);

    insertatPosition(tail, head, 3, 23);
    // print(head);
    //     insertatPosition(head, 1, 23);                         1.)        INSERT AT HEAD IN CASE OF POSITION
    //     print(head);
    // insertatPosition(tail, 4, 23);
    // print(head);
    tail->next = head->next;

    if (isCycle(head))
    {
        cout << "Cycle is Present" << endl;
    }
    else
    {
        cout << "No Cycle is Present" << endl;
    }
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
}