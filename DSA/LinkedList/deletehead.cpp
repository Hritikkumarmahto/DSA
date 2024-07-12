#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *data;
    Node *next;
};
Node *removehead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = removehead(head);
    cout << head;
}